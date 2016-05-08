var config = require('./innerToBusinessConfig.js');
var fileName = config.innerToBusinessConfig.fileName;
var fs = require('fs');



fs.openSync(fileName, 'w');
includeGenerate();
mainFuncDefine();






console.log(config);



function includeGenerate(){

}

function mainFuncDefine(){
    var funcName = config.innerToBusinessConfig.funcName;
    var innerStruct = config.innerToBusinessConfig.innerStruct;
    var businessStruct = config.innerToBusinessConfig.BusinessStruct;


    fs.appendFileSync(fileName,
        'BOOL '+funcName+'('+innerStruct+' *innerStruct,  '+businessStruct+' *businessStruct){\n');

    var map = config.innerToBusinessConfig.map;
    for (var variable in map) {
        if (map[variable].indexOf('[') === 0&&map[variable].indexOf(']') === map[variable].length - 1) {
            console.log('condition');
            var mapArray = map[variable].split(':');
            var condition = mapArray[0].substr(1);
            var equalStr = mapArray[1].substr(0, mapArray[1].length - 1);

            console.log(condition);
            console.log(equalStr);

            fs.appendFileSync(fileName, '\tif('+condition+'){\n');
            fs.appendFileSync(fileName, '\t\tbusinessStruct->'+variable+' = innerStruct->'+equalStr+';\n');
            fs.appendFileSync(fileName, '\t}\n');




        }else{
            //simple equal
            fs.appendFileSync(fileName, '\tbusinessStruct->'+variable+' = innerStruct->'+map[variable]+';\n');
        }
    }

    fs.appendFileSync(fileName, '\treturn TRUE;\n');
    fs.appendFileSync(fileName, '}\n');
}
