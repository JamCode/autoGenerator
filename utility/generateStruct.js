
var imixConfig = require('../config/imixConfig.js');
var pFun = require('../publicFun.js');
exports.generateStruct = function(structName, imixJson){
    //console.log(structName+'_auto');
	//add set ,so we won't add same struct
	var structSet = new Set();
    var structStr = generateAll(structName, imixJson, structSet);
    //console.log(structStr);
    return structStr;
}

function generateAll(structName, imixjson, structset){
	var struct = new String('');
	if(!(imixjson.group === undefined||imixjson.group.length === 0))
	{
		imixjson.group.forEach(function(e){
			struct = struct + generateAll(e.name, e, structset);
		});
	}
    struct = struct + generate(structName, imixjson, structset);
    return struct;
}

function generate(structName, imixjson, structset){
	
	if(structset.has(structName))
		return '';
	else
		structset.add(structName);
	
    //if(imixjson.field === undefined){
    //   return '';
    //}
	//change the type to our type like INDC,CHAR,BOOL and so on 
    var imixTypeMap = imixConfig.imixTypeMap;
    //imixjson.field.forEach(function(e){
    //    
    //});

	console.log(structName);
	//console.log(imixjson);
	structName += '_auto';
    var struct = 'typedef struct st_';
    struct += structName+'{\n';
    imixjson.field.forEach(function(e){

        if (pFun.isEmptyObject(e)) 
            return;
     
		for (var variable in imixTypeMap) {
            if (e.type === variable) {
                e.type = imixTypeMap[variable];
            }
        }
        e.name = 'm_'+e.name+'_auto';

        if (e.type === 'CHAR') {
            struct += '\t' + e.type + ' ' + e.name + '[512];/* field number '+e.number+'*/\n';
        }else{
            struct += '\t' + e.type + ' ' + e.name + ';/* field number '+e.number+'*/\n';
        }
    });

    imixjson.group.forEach(function(e){
        e.name = e.name + '_auto';
        struct += '\tINT m_' + e.name + '_Count;/* field number '+e.number+' */ \n';
        struct += '\tty_' + e.name + ' m_' + e.name + '_Array[128];\n';
    });

    struct += '}ty_'+structName+';\n';
    return struct;
}
