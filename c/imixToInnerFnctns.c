typedef INT (*getLevel)(INDC);


/*get top level nodes */
BOOL getNodes(FIELD_DETAILS* all_field_array,
    COUNT all_field_array_length,
    FIELD_DETAILS *field_array,
    COUNT *filed_array_length,
    getLevel callFunc){

    if(all_field_array_length>0){
		INDC level = callFunc(atoi(all_field_array[0].field_name));
		*filed_array_length = 0;
		for(int i=0;i<all_field_array_length;++i){
			INDC tempLevel = callFunc(atoi(all_field_array[i].field_name));
			if(tempLevel == level){
				field_array[*filed_array_length] = all_field_array[i];
				*filed_array_length++;
		}
		return TRUE;
	}else{
        ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "all_field_array_length <= 0");
		return FALSE;
	}
}


/*get all nodes of repeat group */
void getChild(FIELD_DETAILS* all_field_array,
    COUNT all_field_array_length,
    FIELD_DETAILS* field_ele,
    FIELD_DETAILS* all_child_field_array,
    COUNT* all_child_field_array_length,
    getLevel callFunc){

	*all_child_field_array_length = 0;
	for(int i = 0; i< all_field_array_length; ++i){
		if (all_field_array[i].field_name == field_ele->field_name) {
			INDC level = callFunc(atoi(all_field_array[i].field_name));
			for (int j = i+1; j < all_field_array_length; j++) {
				if (callFunc(atoi(all_field_array[j].field_name) > level) {
					all_child_field_array[*all_child_field_array_length] = all_field_array[j];
                    *all_child_field_array_length++;
				}else{
					break;
				}
			}
			break;
		}
	}
}


/* get one of repeat group */
void getChildByIndex(FIELD_DETAILS* all_child_field_array,
    COUNT all_child_field_array_length,
    COUNT index,
    FIELD_DETAILS* child_field_array,
    COUNT* child_field_array_length){


    *child_field_array_length = 0;
    FIELD_DETAILS field_ele = all_child_field_array[0];
    int i = 0;
    int j = 0;

    for (i = 0, j=1; i < index&&j<all_child_field_array_length; ++j) {
        FIELD_DETAILS ele = all_child_field_array[j];
        if(ele.field_name == field_ele.field_name){
            ++i;
        }
    }

    ++j;
    
    for (; j<all_child_field_array_length; ++j) {
        FIELD_DETAILS ele = all_child_field_array[j];
        if(ele.field_name != field_ele.field_name){
            child_field_array[*child_field_array_length] = ele;
            *child_field_array_length++;
        }
    }

}