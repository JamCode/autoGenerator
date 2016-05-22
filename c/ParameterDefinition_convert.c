/*2016-05-22 21:37:25*/
#include <fieldMacroDefine.h>

typedef struct st_NoContactInfos_auto{
	CHAR m_ContactInfoID_auto[512];/* field number 10602*/
	INT64 m_ContactInfoIDType_auto;/* field number 10603*/
}ty_NoContactInfos_auto;

typedef struct st_NoParameterDefinitionSubID_auto{
	CHAR m_ParameterSubID_auto[512];/* field number 11369*/
	CHAR m_ParameterSubIDType_auto[512];/* field number 11370*/
}ty_NoParameterDefinitionSubID_auto;

typedef struct st_NoParameterDefinitions_auto{
	CHAR m_ParameterValue_auto[512];/* field number 11157*/
	INT64 m_EffectiveEndTime_auto;/* field number 11367*/
	INT64 m_EffectiveStartTime_auto;/* field number 11366*/
	CHAR m_ParameterStatus_auto[512];/* field number 11363*/
	CHAR m_ParameterType_auto[512];/* field number 11156*/
	CHAR m_RelationshipID_auto[512];/* field number 11364*/
	CHAR m_UpdateAction_auto[512];/* field number 11365*/
	INT m_NoContactInfos_auto_Count;/* field number 10601 */ 
	ty_NoContactInfos_auto m_NoContactInfos_auto_Array[128];
	INT m_NoParameterDefinitionSubID_auto_Count;/* field number 11368 */ 
	ty_NoParameterDefinitionSubID_auto m_NoParameterDefinitionSubID_auto_Array[128];
}ty_NoParameterDefinitions_auto;

typedef struct st_NoPartySubIDs_auto{
	CHAR m_PartySubID_auto[512];/* field number 523*/
	INT64 m_PartySubIDType_auto;/* field number 803*/
}ty_NoPartySubIDs_auto;

typedef struct st_NoPartyIDs_auto{
	CHAR m_PartyID_auto[512];/* field number 448*/
	INT64 m_PartyRole_auto;/* field number 452*/
	INT64 m_PartyRoleQualifier_auto;/* field number 2376*/
	INT m_NoPartySubIDs_auto_Count;/* field number 802 */ 
	ty_NoPartySubIDs_auto m_NoPartySubIDs_auto_Array[128];
}ty_NoPartyIDs_auto;

typedef struct st_ParameterDefinition_auto{
	CHAR m_BeginString_auto[512];/* field number 8*/
	INDC m_BodyLength_auto;/* field number 9*/
	undefined m_undefined_auto;/* field number undefined*/
	CHAR m_MsgType_auto[512];/* field number 35*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	CHAR m_CheckSum_auto[512];/* field number 10*/
	undefined m_undefined_auto;/* field number undefined*/
	undefined m_undefined_auto;/* field number undefined*/
	CHAR m_ParameterDefinitionAction_auto[512];/* field number 11160*/
	CHAR m_ParameterDefinitionType_auto[512];/* field number 11159*/
	CHAR m_ApplID_auto[512];/* field number 1180*/
	INDC m_ApplLastSeqNum_auto;/* field number 1350*/
	INDC m_ApplRefSeqNum_auto;/* field number 11262*/
	BOOL m_ApplResendFlag_auto;/* field number 1352*/
	INDC m_ApplSeqNum_auto;/* field number 1181*/
	CHAR m_ApplToken_auto[512];/* field number 11233*/
	CHAR m_ApplErrorCode_auto[512];/* field number 11251*/
	CHAR m_ApplErrorDesc_auto[512];/* field number 11261*/
	CHAR m_ApplUniqueKey_auto[512];/* field number 11252*/
	INT m_NoParameterDefinitions_auto_Count;/* field number 11158 */ 
	ty_NoParameterDefinitions_auto m_NoParameterDefinitions_auto_Array[128];
	INT m_NoPartyIDs_auto_Count;/* field number 453 */ 
	ty_NoPartyIDs_auto m_NoPartyIDs_auto_Array[128];
}ty_ParameterDefinition_auto;

INT getLevel_ParameterDefinition(INDC tag)
{
	if(DF_BEGINSTRING_AUTO == tag){return 0;}
	if(DF_BODYLENGTH_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_MSGTYPE_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_CHECKSUM_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_UNDEFINED_AUTO == tag){return 0;}
	if(DF_PARAMETERDEFINITIONACTION_AUTO == tag){return 0;}
	if(DF_PARAMETERDEFINITIONTYPE_AUTO == tag){return 0;}
	if(DF_APPLID_AUTO == tag){return 0;}
	if(DF_APPLLASTSEQNUM_AUTO == tag){return 0;}
	if(DF_APPLREFSEQNUM_AUTO == tag){return 0;}
	if(DF_APPLRESENDFLAG_AUTO == tag){return 0;}
	if(DF_APPLSEQNUM_AUTO == tag){return 0;}
	if(DF_APPLTOKEN_AUTO == tag){return 0;}
	if(DF_APPLERRORCODE_AUTO == tag){return 0;}
	if(DF_APPLERRORDESC_AUTO == tag){return 0;}
	if(DF_APPLUNIQUEKEY_AUTO == tag){return 0;}
	if(DF_NOPARAMETERDEFINITIONS_AUTO == tag){return 0;}
	if(DF_PARAMETERVALUE_AUTO == tag){return 1;}
	if(DF_EFFECTIVEENDTIME_AUTO == tag){return 1;}
	if(DF_EFFECTIVESTARTTIME_AUTO == tag){return 1;}
	if(DF_PARAMETERSTATUS_AUTO == tag){return 1;}
	if(DF_PARAMETERTYPE_AUTO == tag){return 1;}
	if(DF_RELATIONSHIPID_AUTO == tag){return 1;}
	if(DF_UPDATEACTION_AUTO == tag){return 1;}
	if(DF_NOCONTACTINFOS_AUTO == tag){return 1;}
	if(DF_CONTACTINFOID_AUTO == tag){return 2;}
	if(DF_CONTACTINFOIDTYPE_AUTO == tag){return 2;}
	if(DF_NOPARAMETERDEFINITIONSUBID_AUTO == tag){return 1;}
	if(DF_PARAMETERSUBID_AUTO == tag){return 2;}
	if(DF_PARAMETERSUBIDTYPE_AUTO == tag){return 2;}
	if(DF_NOPARTYIDS_AUTO == tag){return 0;}
	if(DF_PARTYID_AUTO == tag){return 1;}
	if(DF_PARTYROLE_AUTO == tag){return 1;}
	if(DF_PARTYROLEQUALIFIER_AUTO == tag){return 1;}
	if(DF_NOPARTYSUBIDS_AUTO == tag){return 1;}
	if(DF_PARTYSUBID_AUTO == tag){return 2;}
	if(DF_PARTYSUBIDTYPE_AUTO == tag){return 2;}
}

BOOL ParameterDefinition_convert_inner(FIELD_DETAILS *all_field_array, COUNT all_field_array_length, char* object)
{
	FIELD_DETAILS field_array[256];
	COUNT filed_array_length = 0;
	BOOL returnValue = getNodes(all_field_array, all_field_array_length, &field_array, &filed_array_length, getLevel_ParameterDefinition);
	if(returnValue == FALSE)
	{
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getNodes failed");
		return returnValue;
	}
	for(int i=0;i<filed_array_length;++i)
	{
		FIELD_DETAILS *field_ele = &field_array[i];
		INDC tag = atoi(field_ele->field_name);
		if(tag == DF_BEGINSTRING_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_BeginString_auto, field_ele->field_value, 511);
		}

		if(tag == DF_BODYLENGTH_AUTO)
		{
			(ty_ParameterDefinition_auto*)object->m_BodyLength_auto=atol(field_ele->field_value);
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_MSGTYPE_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_MsgType_auto, field_ele->field_value, 511);
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_CHECKSUM_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_CheckSum_auto, field_ele->field_value, 511);
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_UNDEFINED_AUTO)
		{
		}

		if(tag == DF_PARAMETERDEFINITIONACTION_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_ParameterDefinitionAction_auto, field_ele->field_value, 511);
		}

		if(tag == DF_PARAMETERDEFINITIONTYPE_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_ParameterDefinitionType_auto, field_ele->field_value, 511);
		}

		if(tag == DF_APPLID_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplID_auto, field_ele->field_value, 511);
		}

		if(tag == DF_APPLLASTSEQNUM_AUTO)
		{
			(ty_ParameterDefinition_auto*)object->m_ApplLastSeqNum_auto=atol(field_ele->field_value);
		}

		if(tag == DF_APPLREFSEQNUM_AUTO)
		{
			(ty_ParameterDefinition_auto*)object->m_ApplRefSeqNum_auto=atol(field_ele->field_value);
		}

		if(tag == DF_APPLRESENDFLAG_AUTO)
		{
			(ty_ParameterDefinition_auto*)object->m_ApplResendFlag_auto=atol(field_ele->field_value);
		}

		if(tag == DF_APPLSEQNUM_AUTO)
		{
			(ty_ParameterDefinition_auto*)object->m_ApplSeqNum_auto=atol(field_ele->field_value);
		}

		if(tag == DF_APPLTOKEN_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplToken_auto, field_ele->field_value, 511);
		}

		if(tag == DF_APPLERRORCODE_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplErrorCode_auto, field_ele->field_value, 511);
		}

		if(tag == DF_APPLERRORDESC_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplErrorDesc_auto, field_ele->field_value, 511);
		}

		if(tag == DF_APPLUNIQUEKEY_AUTO)
		{
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplUniqueKey_auto, field_ele->field_value, 511);
		}

		if(tag == DF_NOPARAMETERDEFINITIONS_AUTO)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			(ty_ParameterDefinition_auto*)object->m_NoParameterDefinitions_auto_Count = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE)
			{
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j)
			{
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_ParameterDefinition_auto*)object->m_NoParameterDefinitions_auto_Array[j]);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == DF_PARAMETERVALUE_AUTO)
		{
			strncpy((ty_NoParameterDefinitions_auto*)object->m_ParameterValue_auto, field_ele->field_value, 511);
		}

		if(tag == DF_EFFECTIVEENDTIME_AUTO)
		{
			(ty_NoParameterDefinitions_auto*)object->m_EffectiveEndTime_auto=atol(field_ele->field_value);
		}

		if(tag == DF_EFFECTIVESTARTTIME_AUTO)
		{
			(ty_NoParameterDefinitions_auto*)object->m_EffectiveStartTime_auto=atol(field_ele->field_value);
		}

		if(tag == DF_PARAMETERSTATUS_AUTO)
		{
			strncpy((ty_NoParameterDefinitions_auto*)object->m_ParameterStatus_auto, field_ele->field_value, 511);
		}

		if(tag == DF_PARAMETERTYPE_AUTO)
		{
			strncpy((ty_NoParameterDefinitions_auto*)object->m_ParameterType_auto, field_ele->field_value, 511);
		}

		if(tag == DF_RELATIONSHIPID_AUTO)
		{
			strncpy((ty_NoParameterDefinitions_auto*)object->m_RelationshipID_auto, field_ele->field_value, 511);
		}

		if(tag == DF_UPDATEACTION_AUTO)
		{
			strncpy((ty_NoParameterDefinitions_auto*)object->m_UpdateAction_auto, field_ele->field_value, 511);
		}

		if(tag == DF_NOCONTACTINFOS_AUTO)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			(ty_NoParameterDefinitions_auto*)object->m_NoContactInfos_auto_Count = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE)
			{
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j)
			{
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_NoParameterDefinitions_auto*)object->m_NoContactInfos_auto_Array[j]);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == DF_CONTACTINFOID_AUTO)
		{
			strncpy((ty_NoContactInfos_auto*)object->m_ContactInfoID_auto, field_ele->field_value, 511);
		}

		if(tag == DF_CONTACTINFOIDTYPE_AUTO)
		{
			(ty_NoContactInfos_auto*)object->m_ContactInfoIDType_auto=atol(field_ele->field_value);
		}

		if(tag == DF_NOPARAMETERDEFINITIONSUBID_AUTO)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			(ty_NoParameterDefinitions_auto*)object->m_NoParameterDefinitionSubID_auto_Count = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE)
			{
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j)
			{
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_NoParameterDefinitions_auto*)object->m_NoParameterDefinitionSubID_auto_Array[j]);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == DF_PARAMETERSUBID_AUTO)
		{
			strncpy((ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubID_auto, field_ele->field_value, 511);
		}

		if(tag == DF_PARAMETERSUBIDTYPE_AUTO)
		{
			strncpy((ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubIDType_auto, field_ele->field_value, 511);
		}

		if(tag == DF_NOPARTYIDS_AUTO)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			(ty_ParameterDefinition_auto*)object->m_NoPartyIDs_auto_Count = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE)
			{
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j)
			{
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_ParameterDefinition_auto*)object->m_NoPartyIDs_auto_Array[j]);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == DF_PARTYID_AUTO)
		{
			strncpy((ty_NoPartyIDs_auto*)object->m_PartyID_auto, field_ele->field_value, 511);
		}

		if(tag == DF_PARTYROLE_AUTO)
		{
			(ty_NoPartyIDs_auto*)object->m_PartyRole_auto=atol(field_ele->field_value);
		}

		if(tag == DF_PARTYROLEQUALIFIER_AUTO)
		{
			(ty_NoPartyIDs_auto*)object->m_PartyRoleQualifier_auto=atol(field_ele->field_value);
		}

		if(tag == DF_NOPARTYSUBIDS_AUTO)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			(ty_NoPartyIDs_auto*)object->m_NoPartySubIDs_auto_Count = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel_ParameterDefinition);
			if(returnValue == FALSE)
			{
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j)
			{
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_NoPartyIDs_auto*)object->m_NoPartySubIDs_auto_Array[j]);
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == DF_PARTYSUBID_AUTO)
		{
			strncpy((ty_NoPartySubIDs_auto*)object->m_PartySubID_auto, field_ele->field_value, 511);
		}

		if(tag == DF_PARTYSUBIDTYPE_AUTO)
		{
			(ty_NoPartySubIDs_auto*)object->m_PartySubIDType_auto=atol(field_ele->field_value);
		}

	}

}
