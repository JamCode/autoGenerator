
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


function printEqual(mapConfigLeft, mapConfigRight){
    if (mapConfigRight.indexOf('{')!== -1&&mapConfigRight.indexOf('}')!== -1) {

        var conditionBegin = mapConfigRight.indexOf('{');
        var conditionEnd = mapConfigRight.indexOf('}');


        condition = mapConfigRight.substr(conditionBegin+1, conditionEnd - conditionBegin - 1);
        var equalStr = mapConfigRight.substr(conditionEnd+1);

        console.log(condition);
        console.log(equalStr);

        fs.appendFileSync(fileName, '\tif('+condition+'){\n');
        fs.appendFileSync(fileName, '\t\tbusinessStruct->'+mapConfigLeft+' = innerStruct->'+equalStr+';\n');
        fs.appendFileSync(fileName, '\t}\n');
    }else{
        //simple equal
        fs.appendFileSync(fileName, '\tbusinessStruct->'+mapConfigLeft+' = innerStruct->'+mapConfigRight+';\n');
    }
}

function mainFuncDefine(){
    var funcName = config.innerToBusinessConfig.funcName;
    var innerStruct = config.innerToBusinessConfig.innerStruct;
    var businessStruct = config.innerToBusinessConfig.BusinessStruct;


    fs.appendFileSync(fileName,
        'BOOL '+funcName+'('+innerStruct+' *innerStruct,  '+businessStruct+' *businessStruct){\n');

    var map = config.innerToBusinessConfig.map;
    for (var variable in map) {
        printEqual(variable, map[variable]);
    }

    fs.appendFileSync(fileName, '\treturn TRUE;\n');
    fs.appendFileSync(fileName, '}\n');
}
