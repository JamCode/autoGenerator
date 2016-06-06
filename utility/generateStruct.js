
var imixConfig = require('../config/imixConfig.js');

exports.generateStruct = function(structName, imixJson){
    //console.log(structName+'_auto');
    var structStr = generateAll(structName, imixJson);
	imixJson.name += '_auto';
    //console.log(structStr);
    return structStr;
}

function generateAll(structName, imixjson){
	var struct = new String('');
	if(!(imixjson.group === undefined||imixjson.group.length === 0))
	{
		imixjson.group.forEach(function(e){
			struct = struct + generateAll(e.name, e);
		});
	}
    struct = struct + generate(structName, imixjson);
    return struct;
}

function generate(structName, imixjson){
	
	
	
    //if(imixjson.field === undefined){
    //   return '';
    //}
	//change the type to our type like INDC,CHAR,BOOL and so on 
    var imixTypeMap = imixConfig.imixTypeMap;
    

	console.log(structName);
	structName += '_auto';
    var struct = '\ntypedef struct st_';
    struct += structName+'{\n';
    imixjson.field.forEach(function(e){
        
     
		for (var variable in imixTypeMap) {
            if (e.type === variable) {
                e.type = imixTypeMap[variable];
            }
        }
        e.name = e.name+'_auto';

        if (e.type === 'CHAR') {
            struct += '\t' + e.type + ' c_' + e.name + '[512];/* field number '+e.number+'*/\n';
        }else if (e.type === 'INT64'){
            struct += '\t' + e.type + ' l_' + e.name + ';/* field number '+e.number+'*/\n';
        }else if (e.type === 'BOOL'){
            struct += '\t' + e.type + ' b_' + e.name + ';/* field number '+e.number+'*/\n';
        }else{
			struct += '\t' + e.type + ' i_' + e.name + ';/* field number '+e.number+'*/\n';
		}
    });

    imixjson.group.forEach(function(e){
        e.name = e.name + '_auto';
        struct += '\tINT i_' + e.name + '_Count;/* field number '+e.number+' */ \n';
        struct += '\tty_' + e.name + ' t_' + e.name + '_Array[128];\n';
    });

    struct += '}ty_'+structName+';\n';
    return struct;
}
