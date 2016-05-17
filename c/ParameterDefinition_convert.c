/*5/17/2016, 2:12:27 PM*/
#include <fieldMacroDefine.h>
struct ParameterDefinition_auto{
	CHAR BeginString_auto[512];/* field number 8*/
	INDC BodyLength_auto;/* field number 9*/
	undefined undefined_auto;/* field number undefined*/
	CHAR MsgType_auto[512];/* field number 35*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	CHAR CheckSum_auto[512];/* field number 10*/
	undefined undefined_auto;/* field number undefined*/
	undefined undefined_auto;/* field number undefined*/
	CHAR ParameterDefinitionAction_auto[512];/* field number 11160*/
	CHAR ParameterDefinitionType_auto[512];/* field number 11159*/
	CHAR ApplID_auto[512];/* field number 1180*/
	INDC ApplLastSeqNum_auto;/* field number 1350*/
	INDC ApplRefSeqNum_auto;/* field number 11262*/
	BOOL ApplResendFlag_auto;/* field number 1352*/
	INDC ApplSeqNum_auto;/* field number 1181*/
	CHAR ApplToken_auto[512];/* field number 11233*/
	CHAR ApplErrorCode_auto[512];/* field number 11251*/
	CHAR ApplErrorDesc_auto[512];/* field number 11261*/
	CHAR ApplUniqueKey_auto[512];/* field number 11252*/
	INT NoParameterDefinitions_auto_Count;/* field number 11158 */ 
	NoParameterDefinitions_auto NoParameterDefinitions_auto_Array[128];
	INT NoPartyIDs_auto_Count;/* field number 453 */ 
	NoPartyIDs_auto NoPartyIDs_auto_Array[128];
};
struct NoParameterDefinitions_auto{
	CHAR ParameterValue_auto[512];/* field number 11157*/
	INT64 EffectiveEndTime_auto;/* field number 11367*/
	INT64 EffectiveStartTime_auto;/* field number 11366*/
	CHAR ParameterStatus_auto[512];/* field number 11363*/
	CHAR ParameterType_auto[512];/* field number 11156*/
	CHAR RelationshipID_auto[512];/* field number 11364*/
	CHAR UpdateAction_auto[512];/* field number 11365*/
	INT NoContactInfos_auto_Count;/* field number 10601 */ 
	NoContactInfos_auto NoContactInfos_auto_Array[128];
	INT NoParameterDefinitionSubID_auto_Count;/* field number 11368 */ 
	NoParameterDefinitionSubID_auto NoParameterDefinitionSubID_auto_Array[128];
};
struct NoContactInfos_auto{
	CHAR ContactInfoID_auto[512];/* field number 10602*/
	INT64 ContactInfoIDType_auto;/* field number 10603*/
};
struct NoParameterDefinitionSubID_auto{
	CHAR ParameterSubID_auto[512];/* field number 11369*/
	CHAR ParameterSubIDType_auto[512];/* field number 11370*/
};
struct NoPartyIDs_auto{
	CHAR PartyID_auto[512];/* field number 448*/
	INT64 PartyRole_auto;/* field number 452*/
	INT64 PartyRoleQualifier_auto;/* field number 2376*/
	INT NoPartySubIDs_auto_Count;/* field number 802 */ 
	NoPartySubIDs_auto NoPartySubIDs_auto_Array[128];
};
struct NoPartySubIDs_auto{
	CHAR PartySubID_auto[512];/* field number 523*/
	INT64 PartySubIDType_auto;/* field number 803*/
};

INT getLevel_ParameterDefinition(INDC tag){
	if(BeginString_auto == tag){return 0;}
	if(BodyLength_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(MsgType_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(CheckSum_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(undefined_auto == tag){return 0;}
	if(ParameterDefinitionAction_auto == tag){return 0;}
	if(ParameterDefinitionType_auto == tag){return 0;}
	if(ApplID_auto == tag){return 0;}
	if(ApplLastSeqNum_auto == tag){return 0;}
	if(ApplRefSeqNum_auto == tag){return 0;}
	if(ApplResendFlag_auto == tag){return 0;}
	if(ApplSeqNum_auto == tag){return 0;}
	if(ApplToken_auto == tag){return 0;}
	if(ApplErrorCode_auto == tag){return 0;}
	if(ApplErrorDesc_auto == tag){return 0;}
	if(ApplUniqueKey_auto == tag){return 0;}
	if(NoParameterDefinitions_auto == tag){return 0;}
	if(ParameterValue_auto == tag){return 1;}
	if(EffectiveEndTime_auto == tag){return 1;}
	if(EffectiveStartTime_auto == tag){return 1;}
	if(ParameterStatus_auto == tag){return 1;}
	if(ParameterType_auto == tag){return 1;}
	if(RelationshipID_auto == tag){return 1;}
	if(UpdateAction_auto == tag){return 1;}
	if(NoContactInfos_auto == tag){return 1;}
	if(ContactInfoID_auto == tag){return 2;}
	if(ContactInfoIDType_auto == tag){return 2;}
	if(NoParameterDefinitionSubID_auto == tag){return 1;}
	if(ParameterSubID_auto == tag){return 2;}
	if(ParameterSubIDType_auto == tag){return 2;}
	if(NoPartyIDs_auto == tag){return 0;}
	if(PartyID_auto == tag){return 1;}
	if(PartyRole_auto == tag){return 1;}
	if(PartyRoleQualifier_auto == tag){return 1;}
	if(NoPartySubIDs_auto == tag){return 1;}
	if(PartySubID_auto == tag){return 2;}
	if(PartySubIDType_auto == tag){return 2;}
}
BOOL ParameterDefinition_convert_inner(FIELD_DETAILS *all_field_array, COUNT all_field_array_length, char* object){
	FIELD_DETAILS field_array[256];
	COUNT filed_array_length = 0;
	BOOL returnValue = getNodes(all_field_array, all_field_array_length, &field_array, &filed_array_length, getLevel_ParameterDefinition);
	if(returnValue == FALSE){
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getNodes failed");
		return returnValue;
	}
	for(int i=0;i<filed_array_length;++i){
		FIELD_DETAILS *field_ele = &field_array[i];
		INDC tag = atoi(field_ele->field_name);
		if(tag == BeginString_auto){
			strncpy((ParameterDefinition*)object->BeginString_auto, field_ele->field_value, 511);
		}

		if(tag == BodyLength_auto){
			(ParameterDefinition*)object->BodyLength_auto=atol(field_ele->field_value);
		}

		if(tag == undefined_auto){
		}

		if(tag == MsgType_auto){
			strncpy((ParameterDefinition*)object->MsgType_auto, field_ele->field_value, 511);
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == CheckSum_auto){
			strncpy((ParameterDefinition*)object->CheckSum_auto, field_ele->field_value, 511);
		}

		if(tag == undefined_auto){
		}

		if(tag == undefined_auto){
		}

		if(tag == ParameterDefinitionAction_auto){
			strncpy((ParameterDefinition*)object->ParameterDefinitionAction_auto, field_ele->field_value, 511);
		}

		if(tag == ParameterDefinitionType_auto){
			strncpy((ParameterDefinition*)object->ParameterDefinitionType_auto, field_ele->field_value, 511);
		}

		if(tag == ApplID_auto){
			strncpy((ParameterDefinition*)object->ApplID_auto, field_ele->field_value, 511);
		}

		if(tag == ApplLastSeqNum_auto){
			(ParameterDefinition*)object->ApplLastSeqNum_auto=atol(field_ele->field_value);
		}

		if(tag == ApplRefSeqNum_auto){
			(ParameterDefinition*)object->ApplRefSeqNum_auto=atol(field_ele->field_value);
		}

		if(tag == ApplResendFlag_auto){
			(ParameterDefinition*)object->ApplResendFlag_auto=atol(field_ele->field_value);
		}

		if(tag == ApplSeqNum_auto){
			(ParameterDefinition*)object->ApplSeqNum_auto=atol(field_ele->field_value);
		}

		if(tag == ApplToken_auto){
			strncpy((ParameterDefinition*)object->ApplToken_auto, field_ele->field_value, 511);
		}

		if(tag == ApplErrorCode_auto){
			strncpy((ParameterDefinition*)object->ApplErrorCode_auto, field_ele->field_value, 511);
		}

		if(tag == ApplErrorDesc_auto){
			strncpy((ParameterDefinition*)object->ApplErrorDesc_auto, field_ele->field_value, 511);
		}

		if(tag == ApplUniqueKey_auto){
			strncpy((ParameterDefinition*)object->ApplUniqueKey_auto, field_ele->field_value, 511);
		}

		if(tag == NoParameterDefinitions_auto){
			COUNT repeatLength = atol(field_ele->field_value);
			(ParameterDefinition*)object->NoParameterDefinitions_autoCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoParameterDefinitions_autoArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == ParameterValue_auto){
			strncpy((NoParameterDefinitions_auto*)object->ParameterValue_auto, field_ele->field_value, 511);
		}

		if(tag == EffectiveEndTime_auto){
			(NoParameterDefinitions_auto*)object->EffectiveEndTime_auto=atol(field_ele->field_value);
		}

		if(tag == EffectiveStartTime_auto){
			(NoParameterDefinitions_auto*)object->EffectiveStartTime_auto=atol(field_ele->field_value);
		}

		if(tag == ParameterStatus_auto){
			strncpy((NoParameterDefinitions_auto*)object->ParameterStatus_auto, field_ele->field_value, 511);
		}

		if(tag == ParameterType_auto){
			strncpy((NoParameterDefinitions_auto*)object->ParameterType_auto, field_ele->field_value, 511);
		}

		if(tag == RelationshipID_auto){
			strncpy((NoParameterDefinitions_auto*)object->RelationshipID_auto, field_ele->field_value, 511);
		}

		if(tag == UpdateAction_auto){
			strncpy((NoParameterDefinitions_auto*)object->UpdateAction_auto, field_ele->field_value, 511);
		}

		if(tag == NoContactInfos_auto){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoParameterDefinitions_auto*)object->NoContactInfos_autoCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoContactInfos_autoArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == ContactInfoID_auto){
			strncpy((NoContactInfos_auto*)object->ContactInfoID_auto, field_ele->field_value, 511);
		}

		if(tag == ContactInfoIDType_auto){
			(NoContactInfos_auto*)object->ContactInfoIDType_auto=atol(field_ele->field_value);
		}

		if(tag == NoParameterDefinitionSubID_auto){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoParameterDefinitions_auto*)object->NoParameterDefinitionSubID_autoCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoParameterDefinitionSubID_autoArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == ParameterSubID_auto){
			strncpy((NoParameterDefinitionSubID_auto*)object->ParameterSubID_auto, field_ele->field_value, 511);
		}

		if(tag == ParameterSubIDType_auto){
			strncpy((NoParameterDefinitionSubID_auto*)object->ParameterSubIDType_auto, field_ele->field_value, 511);
		}

		if(tag == NoPartyIDs_auto){
			COUNT repeatLength = atol(field_ele->field_value);
			(ParameterDefinition*)object->NoPartyIDs_autoCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoPartyIDs_autoArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == PartyID_auto){
			strncpy((NoPartyIDs_auto*)object->PartyID_auto, field_ele->field_value, 511);
		}

		if(tag == PartyRole_auto){
			(NoPartyIDs_auto*)object->PartyRole_auto=atol(field_ele->field_value);
		}

		if(tag == PartyRoleQualifier_auto){
			(NoPartyIDs_auto*)object->PartyRoleQualifier_auto=atol(field_ele->field_value);
		}

		if(tag == NoPartySubIDs_auto){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoPartyIDs_auto*)object->NoPartySubIDs_autoCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &object->NoPartySubIDs_autoArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == PartySubID_auto){
			strncpy((NoPartySubIDs_auto*)object->PartySubID_auto, field_ele->field_value, 511);
		}

		if(tag == PartySubIDType_auto){
			(NoPartySubIDs_auto*)object->PartySubIDType_auto=atol(field_ele->field_value);
		}

	}

}
