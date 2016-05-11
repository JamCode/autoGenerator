
if (process.argv.length !== 3) {
    console.log('ERROR! need config name: node innerToBusinessGenerate.js innerToBusinessConfig.js');
    return;
}


var config = require('./config/'+process.argv[2]);
var path = require('path');
var fileName = path.join(__dirname, 'c', config.innerToBusinessConfig.fileName);
var fs = require('fs');



fs.openSync(fileName, 'w');
includeGenerate();
mainFuncDefine();






console.log(config);



function includeGenerate(){

}


function printEqual(tab, mapConfigLeft, mapConfigRight, leftStruct, rightStruct, repeat, leftRepeat){
    if (mapConfigRight.indexOf('{')!== -1&&mapConfigRight.indexOf('}')!== -1) {

        var conditionBegin = mapConfigRight.indexOf('{');
        var conditionEnd = mapConfigRight.indexOf('}');


        condition = mapConfigRight.substr(conditionBegin+1, conditionEnd - conditionBegin - 1);
        var equalStr = mapConfigRight.substr(conditionEnd+1);

        console.log(condition);
        console.log(equalStr);
        if(repeat){
            fs.appendFileSync(fileName, tab+'\tif('+rightStruct+'[i].'+condition+'){\n');
        }else{
            fs.appendFileSync(fileName, tab+'\tif('+rightStruct+'.'+condition+'){\n');
        }
        equalPrint(tab, mapConfigLeft, equalStr, leftStruct, rightStruct, repeat, leftRepeat);
        fs.appendFileSync(fileName, tab+'\t}\n');
    }else{
        //simple equal
        equalPrint(tab, mapConfigLeft, mapConfigRight, leftStruct, rightStruct, repeat, leftRepeat);
    }
}

function equalPrint(tab, leftConfig, rightConfig, leftStruct, rightStruct, repeat, leftRepeat){

    if (rightConfig.indexOf('[')!==-1&&rightConfig.indexOf(']')!==-1) {
        rightConfig = rightConfig.substr(0, rightConfig.indexOf('['));
        if(repeat){
            if (leftRepeat) {
                fs.appendFileSync(fileName, tab+'\t\tstrcpy('+leftStruct+'[i].'+leftConfig+' , '+rightStruct+'[i].'+rightConfig+');\n');
            }else{
                fs.appendFileSync(fileName, tab+'\t\tstrcpy('+leftStruct+'.'+leftConfig+' , '+rightStruct+'[i].'+rightConfig+');\n');
            }
        }else{
            fs.appendFileSync(fileName, tab+'\t\tstrcpy('+leftStruct+'.'+leftConfig+' , '+rightStruct+'.'+rightConfig+');\n');
        }
    }else{
        if (repeat) {
            if (leftRepeat) {
                fs.appendFileSync(fileName, tab+'\t'+leftStruct+'[i].'+leftConfig+' = '+rightStruct+'[i].'+rightConfig+';\n');
            }else{
                fs.appendFileSync(fileName, tab+'\t'+leftStruct+'.'+leftConfig+' = '+rightStruct+'[i].'+rightConfig+';\n');
            }
        }else{
            fs.appendFileSync(fileName, tab+'\t'+leftStruct+'.'+leftConfig+' = '+rightStruct+'.'+rightConfig+';\n');
        }
    }
}


function mainFuncDefine(){
    var funcName = config.innerToBusinessConfig.funcName;
    var specialFunc = config.innerToBusinessConfig.special;
    var innerStruct = config.innerToBusinessConfig.innerStruct;
    var businessStruct = config.innerToBusinessConfig.BusinessStruct;


    fs.appendFileSync(fileName,
        'BOOL '+funcName+'('+innerStruct+' *innerStruct,  '+businessStruct+' *businessStruct){\n');

    fs.appendFileSync(fileName, '\tRETURN_VALUE returnValue = TRUE;\n');



    var repeatMapArray = config.innerToBusinessConfig.repeatMap;
    repeatMapArray.forEach(function(repeatMap){
        repeatParse('', repeatMap);
    });


    //specialFunc call
    console.log(specialFunc);
    if(specialFunc!== undefined){
        fs.appendFileSync(fileName, '\treturnValue = '+specialFunc+'(innerStruct, businessStruct);\n');
        fs.appendFileSync(fileName, '\tif(returnValue == false){\n');
        fs.appendFileSync(fileName, '\t\t'+printLogStr('specialFunc failed', 0, 'TRC_DBG', 'ERR_TRC'));
        fs.appendFileSync(fileName, '\t}\n');
    }

    fs.appendFileSync(fileName, '\treturn returnValue;\n');
    fs.appendFileSync(fileName, '}\n');
}

function parseMap(tab, leftStruct, rightStruct, map, repeat, leftRepeat){
    for (var variable in map) {
        printEqual(tab, variable, map[variable], leftStruct, rightStruct, repeat, leftRepeat);
    }
}


function repeatParse(tab, repeatMap){
    var leftStruct = repeatMap.leftStruct;
    var rightStruct = repeatMap.rightStruct;
    var length = repeatMap.length;
    var repeat = repeatMap.repeat;
    var leftRepeat = repeatMap.leftRepeat;
    var map = repeatMap.map;

    if (repeat === false) {
        parseMap(tab, leftStruct, rightStruct, map, repeat, leftRepeat);
    }else{
        fs.appendFileSync(fileName, tab+'\t/*'+length+' group repeat */\n');
        fs.appendFileSync(fileName, tab+'\tfor(int i=0; i<'+length+';++i){\n');
        parseMap('\t'+tab, leftStruct, rightStruct, map, repeat, leftRepeat);
        fs.appendFileSync(fileName, tab+'\t}\n');
    }
    fs.appendFileSync(fileName, '\n');
}

function printLogStr(str, error_code, trc_level, err_level){
    var str = 'ProcessEventLog(__FILE__, __LINE__, '+trc_level+', '+err_level+', Info('+error_code+'), \"'+str+'\");\n';
    return str;
}
