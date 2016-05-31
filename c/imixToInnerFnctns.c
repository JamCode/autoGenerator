#ifndef _IMIXTOINNERFNCTNS_C_
#define _IMIXTOINNERFNCTNS_C_

#include "Fields.h"
#include "Trdx_ErrorLog.h"

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
				(*filed_array_length)++;
            }
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
		if (strcmp(all_field_array[i].field_name, field_ele->field_name) == 0) {
			INDC level = callFunc(atoi(all_field_array[i].field_name));
			for (int j = i+1; j < all_field_array_length; j++) {
				if (callFunc(atoi(all_field_array[j].field_name)) > level) {
					all_child_field_array[*all_child_field_array_length] = all_field_array[j];
                    (*all_child_field_array_length)++;
				}else{
					break;
				}
			}
			break;
		}
	}
}


/* get one of repeat group */
BOOL getChildByIndex(FIELD_DETAILS* all_child_field_array,
    COUNT all_child_field_array_length,
    COUNT index,
    FIELD_DETAILS* child_field_array,
    COUNT* child_field_array_length){


    *child_field_array_length = 0;
    FIELD_DETAILS field_ele = all_child_field_array[0];
	
	int pos = 0;
	int repeat = 0;
	/*make pos point to the first element of repeat group*/
	if(index>0)
	{
		while(pos<all_child_field_array_length)
		{
			if(strcmp(all_child_field_array[pos].field_name, field_ele.field_name) == 0)
				repeat++;
			if(repeat >= index)
				break;
			pos++;
		}
	}
	/*index <0 or we can't find so many repeat groups*/
	if(index != repeat)
	{
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "Index %d is out of range", index);
		return FALSE;
	}
	do{
		FIELD_DETAILS ele = all_child_field_array[pos];
		child_field_array[*child_field_array_length] = ele;
		(*child_field_array_length)++;
		pos++;
		if(pos>=all_child_field_array_length)
			break;
	}while(strcmp(all_child_field_array[pos].field_name, field_ele.field_name) != 0);
	return TRUE;

}

#endif