//whether it is empty
exports.isEmptyObject = function(e) {  
    var t;  
    for (t in e)  
        return 0;  
    return 1;
}  