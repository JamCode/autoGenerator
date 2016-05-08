//域号对应的宏定义

var fs = require('fs');
var imixConvert = require('./imixXML2json.js');
var fileName = 'fieldMacroDefine.h';


var imixJson = imixConvert.getIMIXJson();

console.log(imixJson.imix.fields.field instanceof Array);

fs.openSync(fileName, 'w');
fs.appendFileSync(fileName, '/* all imix field marco define */\n');

imixJson.imix.fields.field.forEach(function(e){
    fs.appendFileSync(fileName, '#define '+e.name+ ' '+e.number+'\n');
});
