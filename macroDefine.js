//域号对应的宏定义

var fs = require('fs');
var path = require('path');
var imixConvert = require('./utility/imixXML2json.js');

var fileName = path.join(__dirname, 'c', 'fieldMacroDefine.h');
var xmlFileName = 'imix.xml';
var imixJson = imixConvert.getIMIXJson(xmlFileName);
console.log(imixJson.imix.fields.field instanceof Array);

fs.openSync(fileName, 'w');

fs.appendFileSync(fileName, '/* '+ (new Date).toLocaleString() +' */\n');
fs.appendFileSync(fileName, '/* all imix field marco define */\n');

imixJson.imix.fields.field.forEach(function(e){
    e.name = 'DF_'+e.name.toUpperCase()+'_AUTO';
    fs.appendFileSync(fileName, '#define '+e.name+ ' '+e.number+'\n');
});

console.log('generate code finish!');
