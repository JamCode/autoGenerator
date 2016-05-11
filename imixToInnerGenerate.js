
if (process.argv.length !== 3) {
    console.log('ERROR! need msg name: node imixToInnerGenerate.js ADFResponse');
    return;
}


var fs = require('fs');
var path = require('path');
var imixConvert = require('./utility/imixXML2json.js');
var msgName = process.argv[2];
var imixJson = imixConvert.getIMIXFormat(msgName, 'imix.xml');

var fileName = path.join(__dirname, 'c', msgName+'_convert.c');
var funcName = msgName+'_convert_inner';
var generateStruct = require('./utility/generateStruct.js');


fs.openSync(fileName, 'w');
fs.appendFileSync(fileName, '/*'+(new Date).toLocaleString() + '*/\n');

//include
fs.appendFileSync(fileName, '#include <fieldMacroDefine.h>\n');




//define inner struct
defineInnerStruct(msgName);

//define getLevel
defineGetlevel(imixJson);

//define parse imix to inner struct function
defineMainFunc();


console.log('generate code finish!');




////////////////////////////////////////////////////////////////////////////////

function defineMainFunc(){
    fs.appendFileSync(fileName,
        'BOOL '+funcName+'(FIELD_DETAILS *all_field_array, COUNT all_field_array_length, '+'char* object){\n');

    fs.appendFileSync(fileName,
        '\tFIELD_DETAILS field_array[256];\n');
    fs.appendFileSync(fileName,
        '\tCOUNT filed_array_length = 0;\n');
    //
    fs.appendFileSync(fileName,
        '\tBOOL returnValue = getNodes(all_field_array, all_field_array_length, &field_array, &filed_array_length, getLevel_'+msgName+');\n');

    fs.appendFileSync(fileName, '\tif(returnValue == FALSE){\n');
    fs.appendFileSync(fileName, '\t\t'+printLogStr('getNodes failed', 0, 'TRC_DBG', 'ERR_TRC'));
    fs.appendFileSync(fileName, '\t\treturn returnValue;\n');
    fs.appendFileSync(fileName, '\t}\n');
    //
    //for
    fs.appendFileSync(fileName,
        '\tfor(int i=0;i<filed_array_length;++i){\n');

    fs.appendFileSync(fileName,
        '\t\tFIELD_DETAILS *field_ele = &field_array[i];\n');
    fs.appendFileSync(fileName,
        '\t\tINDC tag = atoi(field_ele->field_name);\n');

    parse(imixJson, fs, fileName);

    //end for
    fs.appendFileSync(fileName,
        '\t}\n');


    fs.appendFileSync(fileName, '\n}\n');
}

function defineInnerStruct(msgName){
    var structDefineStr = generateStruct.generateStruct(msgName, imixJson);
    fs.appendFileSync(fileName, structDefineStr);
}


function defineGetlevel(imixJson){
    fs.appendFileSync(fileName,
        '\nINT getLevel_'+msgName+'(INDC tag){\n');

    parseLevel(imixJson, 0);


    fs.appendFileSync(fileName, '}\n');
}


function parseLevel(imix, index){

    //处理子节点
    if(imix.field !== undefined){
        imix.field.forEach(function(e){
            fs.appendFileSync(fileName, '\tif('+e.name+' == tag){return '+index+';}\n');
        });
    }

    if(imix.group !== undefined){
        imix.group.forEach(function(e){
            fs.appendFileSync(fileName, '\tif('+e.name+' == tag){return '+index+';}\n');
            parseLevel(e, index+1);
        });
    }
}

function parse(imixContent, fs, fileName){

    //处理叶子节点
    if(imixContent.field !== undefined){
        imixContent.field.forEach(function(e){
            fs.appendFileSync(fileName, '\t\tif(tag == '+e.name+'){\n');
            //console.log(e.type);
            if (e.type === 'CHAR') {
                fs.appendFileSync(fileName, '\t\t\tstrncpy(('+imixContent.name+'*)object->'+e.name+', field_ele->field_value, 511);\n');
            }

            if (e.type === 'INDC'||e.type === 'INT64') {
                fs.appendFileSync(fileName, '\t\t\t('+imixContent.name+'*)object->'+e.name+'=atol(field_ele->field_value);\n');
            }

            if (e.type === 'BOOL') {
                fs.appendFileSync(fileName, '\t\t\t('+imixContent.name+'*)object->'+e.name+'=atol(field_ele->field_value);\n');
            }

            fs.appendFileSync(fileName, '\t\t}\n\n');
        });
    }

    //处理重复组
    if(imixContent.group !== undefined){
        imixContent.group.forEach(function(e){

            fs.appendFileSync(fileName, '\t\tif(tag == '+e.name+'){\n');
            fs.appendFileSync(fileName, '\t\t\tCOUNT repeatLength = atol(field_ele->field_value);\n');
            fs.appendFileSync(fileName, '\t\t\t('+imixContent.name+'*)object->'+e.name+'Count = repeatLength;\n');

            //重复组内部处理
            fs.appendFileSync(fileName, '\t\t\tFIELD_DETAILS all_child_field_array[256];\n');
            fs.appendFileSync(fileName, '\t\t\tCOUNT all_child_field_array_length;\n');
            fs.appendFileSync(fileName, '\t\t\treturnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_' + msgName + ');\n');

            fs.appendFileSync(fileName, '\t\t\tif(returnValue == FALSE){\n');
            fs.appendFileSync(fileName, '\t\t\t\t'+printLogStr('getChild failed', 0, 'TRC_DBG', 'ERR_TRC'));
            fs.appendFileSync(fileName, '\t\t\t\treturn returnValue;\n');
            fs.appendFileSync(fileName, '\t\t\t}\n');


            fs.appendFileSync(fileName, '\t\t\tfor(int j=0;j<repeatLength;++j){\n');
            fs.appendFileSync(fileName, '\t\t\t\tFIELD_DETAILS child_field_array[256];\n');
            fs.appendFileSync(fileName, '\t\t\t\tCOUNT child_field_array_length;\n');

            fs.appendFileSync(fileName, '\t\t\t\treturnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length, getLevel_' + msgName + ');\n');
            fs.appendFileSync(fileName, '\t\t\t\tif(returnValue == FALSE){\n');
            fs.appendFileSync(fileName, '\t\t\t\t\t'+printLogStr('getChildByIndex failed', 0, 'TRC_DBG', 'ERR_TRC'));
            fs.appendFileSync(fileName, '\t\t\t\t\treturn returnValue;\n');
            fs.appendFileSync(fileName, '\t\t\t\t}\n');


            fs.appendFileSync(fileName, '\t\t\t\treturnValue = '+funcName+'(child_field_array, child_field_array_length, &object->'+e.name+'Array[j]);\n');
            fs.appendFileSync(fileName, '\t\t\t\tif(returnValue == FALSE){\n');
            fs.appendFileSync(fileName, '\t\t\t\t\t'+printLogStr(funcName+' failed', 0, 'TRC_DBG', 'ERR_TRC'));
            fs.appendFileSync(fileName, '\t\t\t\t\treturn returnValue;\n');
            fs.appendFileSync(fileName, '\t\t\t\t}\n');
            fs.appendFileSync(fileName, '\t\t\t}\n');
            fs.appendFileSync(fileName, '\t\t}\n\n');
            parse(e, fs, fileName);
        });
    }
}


function printLogStr(str, error_code, trc_level, err_level){
    var str = 'ProcessEventLog(__FILE__, __LINE__, '+trc_level+', '+err_level+', Info('+error_code+'), \"'+str+'\");\n';
    return str;
}
