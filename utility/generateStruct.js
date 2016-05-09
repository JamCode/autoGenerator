
var imixConfig = require('../config/imixConfig.js');

exports.generateStruct = function(structName, imixJson){
    var structStr = generateAll(structName, imixJson);
    console.log(structStr);
    return structStr;
}

function generateAll(structName, imixjson){
    var struct = generate(imixjson.name, imixjson);

    if(imixjson.group === undefined||imixjson.group.length === 0){
        return struct;
    }

    imixjson.group.forEach(function(e){
        struct = struct + generateAll(e.name, e);
    });

    return struct;
}

function generate(structName, imixjson){

    if(imixjson.field === undefined){
        return '';
    }

    var imixTypeMap = imixConfig.imixTypeMap;
    imixjson.field.forEach(function(e){
        for (var variable in imixTypeMap) {
            if (e.type === variable) {
                e.type = imixTypeMap[variable];
            }
        }
    });


    var struct = 'struct ';
    struct += structName+'{\n';
    imixjson.field.forEach(function(e){
        if (e.type === 'CHAR') {
            struct += '\t' + e.type + ' ' + e.name + '[512];/* field number '+e.number+'*/\n';
        }else{
            struct += '\t' + e.type + ' ' + e.name + ';/* field number '+e.number+'*/\n';
        }
    });

    imixjson.group.forEach(function(e){
        struct += '\tINT ' + e.name + 'Count;\n';
        struct += '\t' + e.name + ' ' + e.name + 'Array[128];\n';
    });

    struct += '};\n';
    return struct;
}
