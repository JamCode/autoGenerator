
if (process.argv.length !== 3) {
    console.log('ERROR! need msg name: node imixToInnerGenerate.js ADFResponse');
    return;
}


var fs = require('fs');
var path = require('path');
var imixConvert = require('./utility/imixXML2json.js');


var msgName = process.argv[2];
var imixJson = imixConvert.getIMIXFormat(msgName, 'imix.xml');

var C_FileName = path.join(__dirname, 'c', msgName+'_convert.c');

var funcName = msgName+'_convert_inner';
var generateStruct = require('./utility/generateStruct.js');


fs.openSync(C_FileName, 'w');
//define files
fs.appendFileSync(C_FileName, '/*'+(new Date).toLocaleString() + '*/\n');
fs.appendFileSync(C_FileName,'#ifndef _'+(msgName+'_convert').toUpperCase()+'_C_\n');
fs.appendFileSync(C_FileName,'#define _'+(msgName+'_convert').toUpperCase()+'_C_\n\n');



//include
fs.appendFileSync(C_FileName, '#include "Fields.h"\n');
fs.appendFileSync(C_FileName, '#include "Trdx_ErrorLog.h"\n\n');

fs.appendFileSync(C_FileName, '#include "imixToInnerFnctns.h"\n');




//define inner struct
defineInnerStruct(msgName);

//define getLevel
defineGetlevel(imixJson);

//define parse imix to inner struct function
defineMainFunc();




fs.appendFileSync(C_FileName,'#endif');

console.log('generate code finish!');




////////////////////////////////////////////////////////////////////////////////

function defineMainFunc(){
    fs.appendFileSync(C_FileName,
        '\nBOOL '+funcName+'(FIELD_DETAILS *all_field_array, COUNT all_field_array_length, '+'char* object)\n{\n');

    fs.appendFileSync(C_FileName,
        '\tFIELD_DETAILS field_array[256];\n');
    fs.appendFileSync(C_FileName,
        '\tCOUNT filed_array_length = 0;\n');
    //
    fs.appendFileSync(C_FileName,
        '\tBOOL returnValue = getNodes(all_field_array, all_field_array_length, &field_array, &filed_array_length, getLevel_'+msgName+');\n');

    fs.appendFileSync(C_FileName, '\tif(returnValue == FALSE)\n\t{\n');
    fs.appendFileSync(C_FileName, '\t\t'+printLogStr('getNodes failed', 0, 'TRC_DBG', 'ERR_TRC'));
    fs.appendFileSync(C_FileName, '\t\treturn returnValue;\n');
    fs.appendFileSync(C_FileName, '\t}\n');
    //
    //for
    fs.appendFileSync(C_FileName,
        '\tfor(int i=0;i<filed_array_length;++i)\n\t{\n');

    fs.appendFileSync(C_FileName,
        '\t\tFIELD_DETAILS *field_ele = &field_array[i];\n');
    fs.appendFileSync(C_FileName,
        '\t\tINDC tag = atoi(field_ele->field_name);\n');

    parse(imixJson, fs, C_FileName);

    //end for
    fs.appendFileSync(C_FileName,
        '\t}\n');


    fs.appendFileSync(C_FileName, '\n}\n');
}

function defineInnerStruct(msgName){
    var structDefineStr = generateStruct.generateStruct(msgName, imixJson);
    fs.appendFileSync(C_FileName, structDefineStr);
}


function defineGetlevel(imixJson){
    fs.appendFileSync(C_FileName,
        '\nINT getLevel_'+msgName+'(INDC tag)\n{\n');

    parseLevel(imixJson, 0);


    fs.appendFileSync(C_FileName, '}\n');
}


function parseLevel(imix, index){

    //处理子节点
    if(imix.field !== undefined){
        imix.field.forEach(function(e){
			fs.appendFileSync(C_FileName, '\tif('+e.name+' == tag){return '+index+';}\n');
        });
    }

    if(imix.group !== undefined){
        imix.group.forEach(function(e){
            fs.appendFileSync(C_FileName, '\tif('+e.name+' == tag){return '+index+';}\n');
            parseLevel(e, index+1);
        });
    }
}

function parse(imixContent, fs, C_FileName){
	console.log(imixContent.name);
    //处理叶子节点
    if(imixContent.field !== undefined){
        imixContent.field.forEach(function(e){
            fs.appendFileSync(C_FileName, '\t\tif(tag == '+e.name+')\n\t\t{\n');
            //console.log(e.type);
            if (e.type === 'CHAR') {
                fs.appendFileSync(C_FileName, '\t\t\tstrncpy(((ty_'+imixContent.name+'*)object)->c_'+e.name+', field_ele->field_value, 511);\n');
				 fs.appendFileSync(C_FileName, '\t\t\t'+printSetParaLog('(ty_'+imixContent.name+'*)object->c_'+e.name,'((ty_'+imixContent.name+'*)object)->c_'+e.name,'field_ele->field_value', '%s', 0, 'TRC_DBG', 'ERR_TRC'));
            }

            if (e.type === 'INDC') {
                fs.appendFileSync(C_FileName, '\t\t\t((ty_'+imixContent.name+'*)object)->i_'+e.name+'=atoi(field_ele->field_value);\n');
				fs.appendFileSync(C_FileName, '\t\t\t'+printSetParaLog('(ty_'+imixContent.name+'*)object->i_'+e.name,'((ty_'+imixContent.name+'*)object)->i_'+e.name,'atol(field_ele->field_value)', '%d', 0, 'TRC_DBG', 'ERR_TRC'));
            }
			
			if (e.type === 'INT64') {
                fs.appendFileSync(C_FileName, '\t\t\t((ty_'+imixContent.name+'*)object)->l_'+e.name+'=atol(field_ele->field_value);\n');
				fs.appendFileSync(C_FileName, '\t\t\t'+printSetParaLog('(ty_'+imixContent.name+'*)object->l_'+e.name,'((ty_'+imixContent.name+'*)object)->l_'+e.name,'atol(field_ele->field_value)', '%ld', 0, 'TRC_DBG', 'ERR_TRC'));
            }
			
            if (e.type === 'BOOL') {
                fs.appendFileSync(C_FileName, '\t\t\t((ty_'+imixContent.name+'*)object)->b_'+e.name+'=atoi(field_ele->field_value);\n');
				fs.appendFileSync(C_FileName, '\t\t\t'+printSetParaLog('((ty_'+imixContent.name+'*)object)->b_'+e.name,'((ty_'+imixContent.name+'*)object)->b_'+e.name,'atol(field_ele->field_value)', '%d', 0, 'TRC_DBG', 'ERR_TRC'));
            }

            fs.appendFileSync(C_FileName, '\t\t}\n\n');
        });
    }

    //处理重复组
    if(imixContent.group !== undefined){
        imixContent.group.forEach(function(e){

            fs.appendFileSync(C_FileName, '\t\tif(tag == '+e.name+')\n\t\t{\n');
            fs.appendFileSync(C_FileName, '\t\t\tCOUNT repeatLength = atol(field_ele->field_value);\n');
            fs.appendFileSync(C_FileName, '\t\t\t((ty_'+imixContent.name+'*)object)->i_'+e.name+'_Count = repeatLength;\n');

            //重复组内部处理
            fs.appendFileSync(C_FileName, '\t\t\tFIELD_DETAILS all_child_field_array[256];\n');
            fs.appendFileSync(C_FileName, '\t\t\tCOUNT all_child_field_array_length;\n');
            fs.appendFileSync(C_FileName, '\t\t\treturnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_' + msgName + ');\n');

            fs.appendFileSync(C_FileName, '\t\t\tif(returnValue == FALSE)\n\t\t\t{\n');
            fs.appendFileSync(C_FileName, '\t\t\t\t'+printLogStr('getChild failed', 0, 'TRC_DBG', 'ERR_TRC'));
            fs.appendFileSync(C_FileName, '\t\t\t\treturn returnValue;\n');
            fs.appendFileSync(C_FileName, '\t\t\t}\n');


            fs.appendFileSync(C_FileName, '\t\t\tfor(int j=0;j<repeatLength;++j)\n\t\t\t{\n');
            fs.appendFileSync(C_FileName, '\t\t\t\tFIELD_DETAILS child_field_array[256];\n');
            fs.appendFileSync(C_FileName, '\t\t\t\tCOUNT child_field_array_length;\n');

            fs.appendFileSync(C_FileName, '\t\t\t\treturnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);\n');
            fs.appendFileSync(C_FileName, '\t\t\t\tif(returnValue == FALSE)\n\t\t\t\t{\n');
            fs.appendFileSync(C_FileName, '\t\t\t\t\t'+printLogStr('getChildByIndex failed', 0, 'TRC_DBG', 'ERR_TRC'));
            fs.appendFileSync(C_FileName, '\t\t\t\t\treturn returnValue;\n');
            fs.appendFileSync(C_FileName, '\t\t\t\t}\n');

			fs.appendFileSync(C_FileName, '\t\t\t\t'+'ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),\"'+'Enter struct '+e.name+'[%d]",j);'+'\n');
			
			
            fs.appendFileSync(C_FileName, '\t\t\t\treturnValue = '+funcName+'(child_field_array, child_field_array_length, &(((ty_'+imixContent.name+'*)object)->t_'+e.name+'_Array[j]));\n');
            fs.appendFileSync(C_FileName, '\t\t\t\tif(returnValue == FALSE)\n\t\t\t\t{\n');
            fs.appendFileSync(C_FileName, '\t\t\t\t\t'+printLogStr(funcName+' failed', 0, 'TRC_DBG', 'ERR_TRC'));
            fs.appendFileSync(C_FileName, '\t\t\t\t\treturn returnValue;\n');
            fs.appendFileSync(C_FileName, '\t\t\t\t}\n');
			fs.appendFileSync(C_FileName, '\t\t\t\t'+'ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),\"'+'Exit struct '+e.name+'[%d]",j);'+'\n');
            fs.appendFileSync(C_FileName, '\t\t\t}\n');
            fs.appendFileSync(C_FileName, '\t\t}\n\n');
            parse(e, fs, C_FileName);
        });
    }
}


function printLogStr(str, error_code, trc_level, err_level){
    var str = 'ProcessEventLog(__FILE__, __LINE__, '+trc_level+', '+err_level+', Info('+error_code+'), \"'+str+'\");\n';
    return str;
}
function printSetParaLog(destPara, destVal, sourVal, valType, error_code, trc_level, err_level){
	var str = 'ProcessEventLog(__FILE__, __LINE__, '+trc_level+', '+err_level+', Info('+error_code+'), \"'+destPara+' is set to '+valType+ '. The source data is : '+valType+' \",'+ destVal +','+ sourVal +');\n';
    return str;
}