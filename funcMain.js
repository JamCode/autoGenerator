BOOL funcMain(BUFFER* imix_str, LNGTH inputmsglength, EntyMaster* object, COUNT index){
	FIELD_DETAILS field_array[256];
	COUNT filed_array_length = 0;
	BOOL returnValue=getNodes(imix_str, inputmsglength, &field_array, &filed_array_length);
	if(returnValue == FALSE){
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getNodes failed");
		return returnValue;
	}
	for(int i=0;i<filed_array_length;++i){
		FIELD_DETAILS *field_ele = &field_array[i];
		INDC tag = atoi(field_ele->field_name);
		if(tag == imix0){
			object->a=atol(field_ele->field_value);
		}

		if(tag == imix1){
			memcpy(object->b, field_ele->field_value, DATE_LNGTH);
		}

		if(tag == imix2){
			COUNT repeatLength = atol(field_ele->field_value);
			for(int j=0;j<repeatLength;++j){
				BUFFER imixChild[MAX_MSG_LEN + 1];
				returnValue = getChild(imix_str, field_ele, j, &imixChild);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
					return returnValue;
				}
				returnValue = funcMain(imixChild, strlen(imixChild), object, j);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "funcMain failed");
					return returnValue;
				}
			}
		}

		if(tag == imix21){
			object->c[index]=atof(field_ele->field_value);
		}

		if(tag == imix22){
			object->d[index]=atol(field_ele->field_value);
		}

	}

}

BOOL getNodes(BUFFER* imix_str, LNGTH inputmsglength, FIELD_DETAILS *field_array, COUNT *filed_array_length){
}

BOOL getChild(BUFFER* imix_str, FIELD_DETAILS* field_ele, COUNT index, BUFFER* child_imix_str){
}
