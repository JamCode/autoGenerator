var parser = require('xml2json');
var fs = require('fs');

//xml file to json
exports.getIMIXJson = function(xmlName){
    var xml = fs.readFileSync(xmlName);
    var imixJsonStr = parser.toJson(xml);
    var imixJson = JSON.parse(imixJsonStr);
    return imixJson;
}
//return head + body + trailer fields ,and body's component
exports.getIMIXFormat = function(msgName, xmlName){
    var xml = fs.readFileSync(xmlName);
    var imixJsonStr = parser.toJson(xml);
    imixJson = JSON.parse(imixJsonStr);

    var msgJson = null;

    //拿到字段
    for (var i = 0; i < imixJson.imix.messages.message.length; i++) {
        // console.log(imixJson.imix.messages.message[i].name);
        if (imixJson.imix.messages.message[i].name === msgName) {
            msgJson = imixJson.imix.messages.message[i];
        }
    }

    //console.log(imixJson.imix.header);
    //console.log(imixJson.imix.trailer);

    msgJson.field = imixJson.imix.header.field.concat(imixJson.imix.trailer.field, msgJson.field);

    console.log(msgJson);



    if(msgJson !== null){
        msgJson = parseIMIX(msgJson);
    }

    return msgJson;
}


function isArray(object){
    return object instanceof Array;
}


function parseIMIX(msgJson){

    if (msgJson === null
        ||msgJson === undefined
        ||msgJson === '') {
        return null;
    }


    //field
    if (msgJson.field !== undefined) {
        if(isArray(msgJson.field)){
            //array
            for (var i = 0; i < msgJson.field.length; i++) {
                msgJson.field[i] = getFieldFormat(msgJson.field[i].name, imixJson);
            }
        }else{
            var field = getFieldFormat(msgJson.field.name, imixJson);
            msgJson.field = [];
            msgJson.field.push(field);
        }
    }

    msgJson.group = [];


    //component
    if (msgJson.component !== undefined) {

        var components = [];
        if (!isArray(msgJson.component)) {
            components.push(msgJson.component);
        }else{
            components = msgJson.component;
        }

        components.forEach(function(e){
            e = getComponetFormat(e.name, imixJson);

            //处理component中field
            if (e.field !== undefined) {

                var fields = [];
                if(!isArray(e.field)){
                    fields.push(e.field);
                }else{
                    fields = e.field;
                }

                fields.forEach(function(f_element){
                    f_element = getFieldFormat(f_element.name, imixJson);
                    msgJson.field.push(f_element);
                });
            }

            //处理component中group
            if (e.group !== undefined) {
                e.group.number = getGroupNumber(e.group.name, imixJson)
                msgJson.group.push(parseIMIX(e.group));
            }
        });
    }

    delete msgJson.component;
    return msgJson;
}



function getGroupNumber(groupName, imixJson){
    for (var i = 0; i < imixJson.imix.fields.field.length; i++) {
        if(groupName === imixJson.imix.fields.field[i].name){
            return imixJson.imix.fields.field[i].number;
        }
    }
}

function getFieldFormat(fieldName, imixJson){
    var fieldObject = {};
    for (var i = 0; i < imixJson.imix.fields.field.length; i++) {
        if(fieldName === imixJson.imix.fields.field[i].name){
            fieldObject.number = imixJson.imix.fields.field[i].number;
            fieldObject.description = imixJson.imix.fields.field[i].description;
            fieldObject.type = imixJson.imix.fields.field[i].type;
            fieldObject.name = imixJson.imix.fields.field[i].name;
        }
    }
    return fieldObject;
}


function getComponetFormat(componentName, imixJson){
    var component = null;
    for (var i = 0; i < imixJson.imix.components.component.length; i++) {
        if (componentName === imixJson.imix.components.component[i].name) {
            component = imixJson.imix.components.component[i];
            break;
        }
    }

    return component;
}
