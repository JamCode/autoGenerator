
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

console.log('generate code finish!');



////////////////////////////////////////////////////////////////////////////////

function includeGenerate(){

}

function eraseSpace(str){
	var left = 0;
	var right = str.length;
	for(var i = 0; i < str.length; i++){
		if(str[i] !== ' '){
			left = i;
			break;
		}
	}
	for(var i = str.length - 1; i >=0;i--){
		if(str[i] !== ' '){
			right = i;
			break;
		}
	}
	str = str.substr(left,right - left + 1);
	return str;
}

function assignment(tab, target, srcVal, tarType, srcType){
	if(tarType * srcType === 105*108){
		fs.appendFileSync(fileName, tab + target + ' = ' + srcVal + ';\n')
	}
	else if(tarType === 'i' || tarType === 'l'){
		fs.appendFileSync(fileName,tab + target + '= atol(' + srcVal + ');\n');
	}
	else{
		fs.appendFileSync(fileName,tab + 'strcpy('+target + ', ltoa('+srcVal+'));\n');
	}
	assigmentLog(tab, srcVal, target, srcType, tarType);
}
function printEqual(tab, level, target, resource, src, dest){
	//console.log(resource);
	var srcVal = eraseSpace(resource);
	var src_len = resource.length;
	srcVal = resource.substr(0,src_len - 3);
	var conditionBegin = resource.indexOf('{');
    var conditionEnd = resource.indexOf('}');
	
	
	if(conditionBegin !== -1 && conditionEnd !== -1){
		var condition = resource.substr(conditionBegin+1, conditionEnd - conditionBegin -1).split('=');
		var conditionLeft = condition[0];
		var conditionRight = condition[1];
		conditionLeft = eraseSpace(conditionLeft);
		if(conditionLeft[0] === '.'){
			if(dest.indexOf('->') === -1){
				conditionLeft = dest + '->' + conditionLeft.substr(1);
			}
			else{
				conditionLeft = dest + '.' + conditionLeft.substr(1);
			}
		}
		conditionRight = eraseSpace(conditionRight);
		if(conditionRight.split('"').length !== 1)
			fs.appendFileSync(fileName, tab + 'if(strcmp(' + conditionLeft + ', '+ conditionRight + ') == 0)\n');
		else
			fs.appendFileSync(fileName, tab + 'if(' + conditionLeft + ' == '+ conditionRight + ')\n');
		fs.appendFileSync(fileName, tab + '{\n');
		tab = tab + '\t';
		srcVal = eraseSpace(resource.substr(conditionEnd+1,src_len-conditionEnd-4));
	}
	var srcType = srcVal[0];
	if(resource[src_len-2] === 'm'){
		console.log('Enter Map ' + srcVal);
		repeatMap = config.innerToBusinessConfig[srcVal];
		parseMap(tab, level, src, dest, repeatMap);
		console.log('Exit Map ' + srcVal);
	}
	else{
		if(dest.indexOf('->') === -1)
			target = dest + '->' + target;
		else
			target = dest + '.' + target;
		if(src.indexOf('->') === -1)
			srcVal = src + '->' + srcVal;
		else
			srcVal = src + '.' + srcVal;
		assignment(tab, target, srcVal, resource[src_len-2], srcType);
	}
	if(conditionBegin !== -1 && conditionEnd !== -1){
		tab = tab.substr(1);
		fs.appendFileSync(fileName, tab + '}\n');
	}
}

function mainFuncDefine(){
    var funcName = config.innerToBusinessConfig.funcName;
    var specialFunc = config.innerToBusinessConfig.special;
    var innerStruct = config.innerToBusinessConfig.innerStruct;
    var businessStruct = config.innerToBusinessConfig.BusinessStruct;
	var innerVar = config.innerToBusinessConfig.innerVar;
	var businessVar = config.innerToBusinessConfig.businessVar;

    fs.appendFileSync(fileName,
        'RETURN_VALUE '+funcName+'(BUFFER *pInputBuffer, BUFFER* pOutputBuffer){\n');

    fs.appendFileSync(fileName, '\tRETURN_VALUE returnValue = 0;\n');
	
	//translate inner struct
	fs.appendFileSync(fileName, '\t' + innerStruct + '*' + innerVar + '=(' + innerStruct + '*)pInputBuffer;\n');
	
	//translate business Struct
	fs.appendFileSync(fileName, '\t' + businessStruct + '*' + businessVar + ';\n');
	fs.appendFileSync(fileName, '\t' + businessVar + '= (*' + businessStruct +')pInputBuffer;\n');
	fs.appendFileSync(fileName, '\t\n');
	
	console.log('common define finished!');
	console.log('Enter MainMap');
    var repeatMap = config.innerToBusinessConfig.MainMap;
    parseMap('\t', 1, innerVar, businessVar, repeatMap);
	console.log('Exit MainMap');

    //specialFunc call
    //console.log(specialFunc);
    //if(specialFunc!== undefined){
    //    fs.appendFileSync(fileName, '\treturnValue = '+specialFunc+'(innerStruct, businessStruct);\n');
    //    fs.appendFileSync(fileName, '\tif(returnValue == false){\n');
    //    fs.appendFileSync(fileName, '\t\t'+printLogStr('specialFunc failed', 0, 'TRC_DBG', 'ERR_TRC'));
    //    fs.appendFileSync(fileName, '\t}\n');
    //}

    fs.appendFileSync(fileName, '\treturn returnValue;\n');
    fs.appendFileSync(fileName, '}\n');
}

function parseMap(tab, level, UPsrc, UPdest, repeatMap){
	
	if(repeatMap===undefined){
		console.log('repeatMap not defined!');
		return;
	}
	
	var structIndex = 1;
	
	repeatMap.forEach(function(Map){
		console.log('translate: ' + structIndex);
		var src = Map.src;
		if(src.charAt(0) === '.'){
			if(src.length === 1)
				src = UPsrc;
			else if(UPsrc.indexOf('->') === -1)
				src = UPsrc + '->' + src.substr(1);
			else
				src = UPsrc + '.' + src.substr(1);
		}

		var dest = Map.dest;
		if(dest.charAt(0) === '.'){
			if(dest.length === 1)
				dest = UPdest;
			else if(UPdest.indexOf('->') === -1)
				dest = UPdest + '->' + dest.substr(1);
			else
				dest = UPdest + '.' + dest.substr(1);
		}
		
		var repeat = Map.repeat;
		
		var length = Map.length;
		if(length !== undefined){
			if(length[0] === '.'){
				if(UPsrc.indexOf('->') === -1)
					length = UPsrc + '->' + length.substr(1);
				else
					length = UPsrc + '.' + length.substr(1);
			}
		}
		
		var destRepeat = Map.destRepeat;
		
		console.log('Inner Struct is: ' + src);
		console.log('Business Struct is: ' + dest);
	
		if(repeat === true){
			console.log('It\'s a repeat struct which level is ' + level);
			var index = 'index' + level;
			fs.appendFileSync(fileName, tab+'for(int ' + index + ' = 0; '+ index + ' < '+length+'; ++' + index + ')\n' + tab + '{\n');
			for (var variable in Map.map) {
				if(destRepeat === true)
					printEqual(tab + '\t', level+1, variable, Map.map[variable], src + '[' + index +']', dest + '[' + index +']');
				else 
					printEqual(tab + '\t', level+1, variable, Map.map[variable], src + '[' + index +']', dest);
			}
			fs.appendFileSync(fileName, tab+'}\n');
		}
		else{
			console.log('Not a repeat struct');
			for (var variable in Map.map) {
				printEqual(tab, level, variable, Map.map[variable], src, dest);
			}
		}
		structIndex++;
	});
	fs.appendFileSync(fileName, tab + '\n');
}

function TypeMapping(type){
	switch(type){
		case 'l':
			return '%ld';
		case 'i':
			return '%d';
		case 'c':
			return '%s';
		case 's':
			return '%s';
	}
}

function assigmentLog(tab, src, dest, src_type, dest_type){
	var logSrc = '';
	var srcVal = '';
	var logDest = '';
	var destVal = '';
	var begin = 0;
	var left = 0;
	var right = 0;
	while((left = src.indexOf('[index', begin)) !== -1){
		right = src.indexOf(']',left);
		srcVal = srcVal + src.substring(left + 1, right)+', ';
		logSrc = logSrc + src.substring(begin, left+1) + '%d';
		begin = right;
	}
	srcVal = srcVal + src;
	logSrc = logSrc + src.substr(begin);
	
	begin = 0;
	while((left = dest.indexOf('[index', begin)) !== -1){
		right = dest.indexOf(']',left);
		destVal = destVal + dest.substring(left + 1, right)+', ';
		logDest = logDest + dest.substring(begin, left+1) + '%d';
		begin = right;
	}
	destVal = destVal + dest;
	logDest = logDest + dest.substr(begin);
	
	fs.appendFileSync(fileName, tab + 'ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "' + logDest + ' is set to ' + TypeMapping(dest_type) + ', The source data is ' + logSrc + '. which value is : ' + TypeMapping(src_type) + '.", ' + destVal + ', ' + srcVal + ');\n\n');
}

function printLogStr(str, error_code, trc_level, err_level){
    var str = 'ProcessEventLog(__FILE__, __LINE__, '+trc_level+', '+err_level+', Info('+error_code+'), \"'+str+'\");\n';
    return str;
}
