var fs = require('fs');
var imixConvert = require('./imixXML2json.js');
var msgName = 'BreakContractRequest';
var imixJson = imixConvert.getIMIXFormat('BreakContractRequest');
var fileName = msgName+'_convert.c';
var funcName = msgName+'_convert_inner';
var generateStruct = require('./generateStruct.js');


fs.openSync(fileName, 'w');

//define inner struct
var structDefineStr = generateStruct.generateStruct('BreakContractRequest', imixJson);
fs.appendFileSync(fileName, structDefineStr);

fs.appendFileSync(fileName,
    'BOOL '+funcName+'(BUFFER* imix_str, LNGTH inputmsglength, '+'char* object){\n');

fs.appendFileSync(fileName,
    '\tFIELD_DETAILS field_array[256];\n');
fs.appendFileSync(fileName,
    '\tCOUNT filed_array_length = 0;\n');
//
fs.appendFileSync(fileName,
    '\tBOOL returnValue=getNodes(imix_str, inputmsglength, &field_array, &filed_array_length);\n');

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


//define getNodes
defineGetNodes();


//define getChild
defineGetChild();

//define getAllChild
defineGetChildStr();

//define getLevel
defineGetlevel(imixJson);

////////////////////////////////////////////////////////////////////////////////

function defineGetNodes(){
    fs.appendFileSync(fileName,
        '\nBOOL getNodes(BUFFER* imix_str, LNGTH inputmsglength, FIELD_DETAILS *field_array, COUNT *filed_array_length){\n');

    fs.appendFileSync(fileName, '\tFIELD_DETAILS tempFieldArray[256];\n');
    fs.appendFileSync(fileName, '\tCOUNT tempFieldArrayCount = 0;\n');

    //////////////////////////////////////////////////////////////////////////////
    //for获取所有field
    fs.appendFileSync(fileName, '\tfor(int i=0;;++i){\n');

    fs.appendFileSync(fileName, '\t\tCHAR* ptrfix_str = NULL;\n');
    fs.appendFileSync(fileName, '\t\tCHAR* tagValStr = (CHAR*)strtok_r(imix_str, SOH, &ptrfix_str);\n');

    fs.appendFileSync(fileName, '\t\tif(!tagValStr) break;\n');

    fs.appendFileSync(fileName, '\t\tif(parseTagValStr(&tempFieldArray[i], tagValStr) != TRUE){\n');
    fs.appendFileSync(fileName, '\t\t\t'+printLogStr('parseTagValStr failed', 0, 'TRC_DBG', 'ERR_TRC'));
    fs.appendFileSync(fileName, '\t\t\treturn false;\n');
    fs.appendFileSync(fileName, '\t\t}\n');

    fs.appendFileSync(fileName, '\t\t++tempFieldArrayCount;\n');
    fs.appendFileSync(fileName, '\t}\n');
    //////////////////////////////////////////////////////////////////////////////



    fs.appendFileSync(fileName, '\tif(tempFieldArrayCount>0){\n');
    fs.appendFileSync(fileName, '\t\tINDC level = getLevel(atoi(tempFieldArray[0].field_name));\n');
    fs.appendFileSync(fileName, '\t\t*filed_array_length = 0;\n');
    fs.appendFileSync(fileName, '\t\tfor(int i=0;i<tempFieldArrayCount;++i){\n');
    fs.appendFileSync(fileName, '\t\t\tINDC tempLevel = getLevel(atoi(tempFieldArray[i].field_name));\n');
    fs.appendFileSync(fileName, '\t\t\tif(tempLevel == level){\n');
    fs.appendFileSync(fileName, '\t\t\t\tfield_array[*filed_array_length] = tempFieldArray[i];\n');
    fs.appendFileSync(fileName, '\t\t\t\t*filed_array_length++;\n');
    fs.appendFileSync(fileName, '\t\t}\n');




    fs.appendFileSync(fileName, '\t}\n');

    fs.appendFileSync(fileName, '\treturn TRUE;\n');


    fs.appendFileSync(fileName, '}\n');
}


function defineGetChildStr(){
    fs.appendFileSync(fileName,
        '\nBOOL getChild(BUFFER* imix_str, FIELD_DETAILS* field_ele, BUFFER* all_child_imix_str){\n');



    fs.appendFileSync(fileName, '}\n');
}

function defineGetChild(){
    fs.appendFileSync(fileName,
        '\nBOOL getChildByIndex(BUFFER* all_child_imix_str, FIELD_DETAILS* field_ele, COUNT index, BUFFER* child_imix_str){\n');



    fs.appendFileSync(fileName, '}\n');
}


function defineGetlevel(imixJson){
    fs.appendFileSync(fileName,
        '\nINT getLevel(tag){\n');

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
            fs.appendFileSync(fileName, '\t\t\t('+imixContent.name+'*)object->'+e.name+'=field_ele->field_value\n');
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
            fs.appendFileSync(fileName, '\t\t\tBUFFER imixAllChild[MAX_MSG_LEN + 1];\n');
            fs.appendFileSync(fileName, '\t\t\treturnValue =getChild(imix_str, field_ele, &imixAllChild);\n');

            fs.appendFileSync(fileName, '\t\t\tif(returnValue == FALSE){\n');
            fs.appendFileSync(fileName, '\t\t\t\t'+printLogStr('getChild failed', 0, 'TRC_DBG', 'ERR_TRC'));
            fs.appendFileSync(fileName, '\t\t\t\treturn returnValue;\n');
            fs.appendFileSync(fileName, '\t\t\t}\n');


            fs.appendFileSync(fileName, '\t\t\tfor(int j=0;j<repeatLength;++j){\n');
            fs.appendFileSync(fileName, '\t\t\t\tBUFFER imixChild[MAX_MSG_LEN + 1];\n');

            fs.appendFileSync(fileName, '\t\t\t\treturnValue =getChildByIndex(imixAllChild, field_ele, j, imixChild);\n');
            fs.appendFileSync(fileName, '\t\t\t\tif(returnValue == FALSE){\n');
            fs.appendFileSync(fileName, '\t\t\t\t\t'+printLogStr('getChildByIndex failed', 0, 'TRC_DBG', 'ERR_TRC'));
            fs.appendFileSync(fileName, '\t\t\t\t\treturn returnValue;\n');
            fs.appendFileSync(fileName, '\t\t\t\t}\n');


            fs.appendFileSync(fileName, '\t\t\t\treturnValue = '+funcName+'(imixChild, strlen(imixChild), &object->'+e.name+'Array[j]);\n');
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
