/*5/10/2016, 2:03:07 PM*/
#include <fieldMacroDefine.h>
struct ParameterDefinition{
	CHAR BeginString[512];/* field number 8*/
	INDC BodyLength;/* field number 9*/
	undefined undefined;/* field number undefined*/
	CHAR MsgType[512];/* field number 35*/

	CHAR CheckSum[512];/* field number 10*/

	CHAR ParameterDefinitionAction[512];/* field number 11160*/
	CHAR ParameterDefinitionType[512];/* field number 11159*/
	CHAR ApplID[512];/* field number 1180*/
	INDC ApplLastSeqNum;/* field number 1350*/
	INDC ApplRefSeqNum;/* field number 11262*/
	BOOL ApplResendFlag;/* field number 1352*/
	INDC ApplSeqNum;/* field number 1181*/
	CHAR ApplToken[512];/* field number 11233*/
	CHAR ApplErrorCode[512];/* field number 11251*/
	CHAR ApplErrorDesc[512];/* field number 11261*/
	CHAR ApplUniqueKey[512];/* field number 11252*/
	INT NoParameterDefinitionsCount;
	NoParameterDefinitions NoParameterDefinitionsArray[128];
	INT NoPartyIDsCount;
	NoPartyIDs NoPartyIDsArray[128];
};
struct NoParameterDefinitions{
	CHAR ParameterValue[512];/* field number 11157*/
	INT64 EffectiveEndTime;/* field number 11367*/
	INT64 EffectiveStartTime;/* field number 11366*/
	CHAR ParameterStatus[512];/* field number 11363*/
	CHAR ParameterType[512];/* field number 11156*/
	CHAR RelationshipID[512];/* field number 11364*/
	CHAR UpdateAction[512];/* field number 11365*/
	INT NoContactInfosCount;
	NoContactInfos NoContactInfosArray[128];
	INT NoParameterDefinitionSubIDCount;
	NoParameterDefinitionSubID NoParameterDefinitionSubIDArray[128];
};
struct NoContactInfos{
	CHAR ContactInfoID[512];/* field number 10602*/
	INT64 ContactInfoIDType;/* field number 10603*/
};
struct NoParameterDefinitionSubID{
	CHAR ParameterSubID[512];/* field number 11369*/
	CHAR ParameterSubIDType[512];/* field number 11370*/
};
struct NoPartyIDs{
	CHAR PartyID[512];/* field number 448*/
	INT64 PartyRole;/* field number 452*/
	INT64 PartyRoleQualifier;/* field number 2376*/
	INT NoPartySubIDsCount;
	NoPartySubIDs NoPartySubIDsArray[128];
};
struct NoPartySubIDs{
	CHAR PartySubID[512];/* field number 523*/
	INT64 PartySubIDType;/* field number 803*/
};

INT getLevel(INDC tag){
	if(BeginString == tag){return 0;}
	if(BodyLength == tag){return 0;}
	if(undefined == tag){return 0;}
	if(MsgType == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(CheckSum == tag){return 0;}
	if(undefined == tag){return 0;}
	if(undefined == tag){return 0;}
	if(ParameterDefinitionAction == tag){return 0;}
	if(ParameterDefinitionType == tag){return 0;}
	if(ApplID == tag){return 0;}
	if(ApplLastSeqNum == tag){return 0;}
	if(ApplRefSeqNum == tag){return 0;}
	if(ApplResendFlag == tag){return 0;}
	if(ApplSeqNum == tag){return 0;}
	if(ApplToken == tag){return 0;}
	if(ApplErrorCode == tag){return 0;}
	if(ApplErrorDesc == tag){return 0;}
	if(ApplUniqueKey == tag){return 0;}
	if(NoParameterDefinitions == tag){return 0;}
	if(ParameterValue == tag){return 1;}
	if(EffectiveEndTime == tag){return 1;}
	if(EffectiveStartTime == tag){return 1;}
	if(ParameterStatus == tag){return 1;}
	if(ParameterType == tag){return 1;}
	if(RelationshipID == tag){return 1;}
	if(UpdateAction == tag){return 1;}
	if(NoContactInfos == tag){return 1;}
	if(ContactInfoID == tag){return 2;}
	if(ContactInfoIDType == tag){return 2;}
	if(NoParameterDefinitionSubID == tag){return 1;}
	if(ParameterSubID == tag){return 2;}
	if(ParameterSubIDType == tag){return 2;}
	if(NoPartyIDs == tag){return 0;}
	if(PartyID == tag){return 1;}
	if(PartyRole == tag){return 1;}
	if(PartyRoleQualifier == tag){return 1;}
	if(NoPartySubIDs == tag){return 1;}
	if(PartySubID == tag){return 2;}
	if(PartySubIDType == tag){return 2;}
}
BOOL ParameterDefinition_convert_inner(FIELD_DETAILS *all_field_array, COUNT all_field_array_length, char* object){
	FIELD_DETAILS field_array[256];
	COUNT filed_array_length = 0;
	BOOL returnValue = getNodes(all_field_array, all_field_array_length, &field_array, &filed_array_length, getLevel);
	if(returnValue == FALSE){
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getNodes failed");
		return returnValue;
	}
	for(int i=0;i<filed_array_length;++i){
		FIELD_DETAILS *field_ele = &field_array[i];
		INDC tag = atoi(field_ele->field_name);
		if(tag == BeginString){
			strncpy((ParameterDefinition*)object->BeginString, field_ele->field_value, 511);
		}

		if(tag == BodyLength){
			(ParameterDefinition*)object->BodyLength=atol(field_ele->field_value);
		}

		if(tag == undefined){
		}

		if(tag == MsgType){
			strncpy((ParameterDefinition*)object->MsgType, field_ele->field_value, 511);
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == CheckSum){
			strncpy((ParameterDefinition*)object->CheckSum, field_ele->field_value, 511);
		}

		if(tag == undefined){
		}

		if(tag == undefined){
		}

		if(tag == ParameterDefinitionAction){
			strncpy((ParameterDefinition*)object->ParameterDefinitionAction, field_ele->field_value, 511);
		}

		if(tag == ParameterDefinitionType){
			strncpy((ParameterDefinition*)object->ParameterDefinitionType, field_ele->field_value, 511);
		}

		if(tag == ApplID){
			strncpy((ParameterDefinition*)object->ApplID, field_ele->field_value, 511);
		}

		if(tag == ApplLastSeqNum){
			(ParameterDefinition*)object->ApplLastSeqNum=atol(field_ele->field_value);
		}

		if(tag == ApplRefSeqNum){
			(ParameterDefinition*)object->ApplRefSeqNum=atol(field_ele->field_value);
		}

		if(tag == ApplResendFlag){
			(ParameterDefinition*)object->ApplResendFlag=atol(field_ele->field_value);
		}

		if(tag == ApplSeqNum){
			(ParameterDefinition*)object->ApplSeqNum=atol(field_ele->field_value);
		}

		if(tag == ApplToken){
			strncpy((ParameterDefinition*)object->ApplToken, field_ele->field_value, 511);
		}

		if(tag == ApplErrorCode){
			strncpy((ParameterDefinition*)object->ApplErrorCode, field_ele->field_value, 511);
		}

		if(tag == ApplErrorDesc){
			strncpy((ParameterDefinition*)object->ApplErrorDesc, field_ele->field_value, 511);
		}

		if(tag == ApplUniqueKey){
			strncpy((ParameterDefinition*)object->ApplUniqueKey, field_ele->field_value, 511);
		}

		if(tag == NoParameterDefinitions){
			COUNT repeatLength = atol(field_ele->field_value);
			(ParameterDefinition*)object->NoParameterDefinitionsCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length, getLevel);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoParameterDefinitionsArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == ParameterValue){
			strncpy((NoParameterDefinitions*)object->ParameterValue, field_ele->field_value, 511);
		}

		if(tag == EffectiveEndTime){
			(NoParameterDefinitions*)object->EffectiveEndTime=atol(field_ele->field_value);
		}

		if(tag == EffectiveStartTime){
			(NoParameterDefinitions*)object->EffectiveStartTime=atol(field_ele->field_value);
		}

		if(tag == ParameterStatus){
			strncpy((NoParameterDefinitions*)object->ParameterStatus, field_ele->field_value, 511);
		}

		if(tag == ParameterType){
			strncpy((NoParameterDefinitions*)object->ParameterType, field_ele->field_value, 511);
		}

		if(tag == RelationshipID){
			strncpy((NoParameterDefinitions*)object->RelationshipID, field_ele->field_value, 511);
		}

		if(tag == UpdateAction){
			strncpy((NoParameterDefinitions*)object->UpdateAction, field_ele->field_value, 511);
		}

		if(tag == NoContactInfos){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoParameterDefinitions*)object->NoContactInfosCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length, getLevel);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoContactInfosArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == ContactInfoID){
			strncpy((NoContactInfos*)object->ContactInfoID, field_ele->field_value, 511);
		}

		if(tag == ContactInfoIDType){
			(NoContactInfos*)object->ContactInfoIDType=atol(field_ele->field_value);
		}

		if(tag == NoParameterDefinitionSubID){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoParameterDefinitions*)object->NoParameterDefinitionSubIDCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length, getLevel);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoParameterDefinitionSubIDArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == ParameterSubID){
			strncpy((NoParameterDefinitionSubID*)object->ParameterSubID, field_ele->field_value, 511);
		}

		if(tag == ParameterSubIDType){
			strncpy((NoParameterDefinitionSubID*)object->ParameterSubIDType, field_ele->field_value, 511);
		}

		if(tag == NoPartyIDs){
			COUNT repeatLength = atol(field_ele->field_value);
			(ParameterDefinition*)object->NoPartyIDsCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length, getLevel);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoPartyIDsArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == PartyID){
			strncpy((NoPartyIDs*)object->PartyID, field_ele->field_value, 511);
		}

		if(tag == PartyRole){
			(NoPartyIDs*)object->PartyRole=atol(field_ele->field_value);
		}

		if(tag == PartyRoleQualifier){
			(NoPartyIDs*)object->PartyRoleQualifier=atol(field_ele->field_value);
		}

		if(tag == NoPartySubIDs){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoPartyIDs*)object->NoPartySubIDsCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length, getLevel);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoPartySubIDsArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == PartySubID){
			strncpy((NoPartySubIDs*)object->PartySubID, field_ele->field_value, 511);
		}

		if(tag == PartySubIDType){
			(NoPartySubIDs*)object->PartySubIDType=atol(field_ele->field_value);
		}

	}

}
