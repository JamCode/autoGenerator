/*2016-05-25 20:22:28*/
#ifndef _PARAMETERDEFINITION_CONVERT_C_
#define _PARAMETERDEFINITION_CONVERT_C_

#include "Fields.h"
#include "ParameterDefinition_convert.h>
#include "Trdx_ErrorLog.h"


INT getLevel_ParameterDefinition(INDC tag)
{
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
		if(tag == BeginString_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_BeginString_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_BeginString_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_BeginString_auto,field_ele->field_value);
		}

		if(tag == BodyLength_auto)
		{
			((ty_ParameterDefinition_auto*)object)->m_BodyLength_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_BodyLength_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->m_BodyLength_auto,atol(field_ele->field_value));
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == MsgType_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_MsgType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_MsgType_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_MsgType_auto,field_ele->field_value);
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == CheckSum_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_CheckSum_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_CheckSum_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_CheckSum_auto,field_ele->field_value);
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == ParameterDefinitionAction_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_ParameterDefinitionAction_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ParameterDefinitionAction_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_ParameterDefinitionAction_auto,field_ele->field_value);
		}

		if(tag == ParameterDefinitionType_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_ParameterDefinitionType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ParameterDefinitionType_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_ParameterDefinitionType_auto,field_ele->field_value);
		}

		if(tag == ApplID_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_ApplID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplID_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_ApplID_auto,field_ele->field_value);
		}

		if(tag == ApplLastSeqNum_auto)
		{
			((ty_ParameterDefinition_auto*)object)->m_ApplLastSeqNum_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplLastSeqNum_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->m_ApplLastSeqNum_auto,atol(field_ele->field_value));
		}

		if(tag == ApplRefSeqNum_auto)
		{
			((ty_ParameterDefinition_auto*)object)->m_ApplRefSeqNum_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplRefSeqNum_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->m_ApplRefSeqNum_auto,atol(field_ele->field_value));
		}

		if(tag == ApplResendFlag_auto)
		{
			((ty_ParameterDefinition_auto*)object)->m_ApplResendFlag_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "((ty_ParameterDefinition_auto*)object)->m_ApplResendFlag_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->m_ApplResendFlag_auto,atol(field_ele->field_value));
		}

		if(tag == ApplSeqNum_auto)
		{
			((ty_ParameterDefinition_auto*)object)->m_ApplSeqNum_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplSeqNum_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->m_ApplSeqNum_auto,atol(field_ele->field_value));
		}

		if(tag == ApplToken_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_ApplToken_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplToken_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_ApplToken_auto,field_ele->field_value);
		}

		if(tag == ApplErrorCode_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_ApplErrorCode_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplErrorCode_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_ApplErrorCode_auto,field_ele->field_value);
		}

		if(tag == ApplErrorDesc_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_ApplErrorDesc_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplErrorDesc_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_ApplErrorDesc_auto,field_ele->field_value);
		}

		if(tag == ApplUniqueKey_auto)
		{
			strncpy(((ty_ParameterDefinition_auto*)object)->m_ApplUniqueKey_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplUniqueKey_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->m_ApplUniqueKey_auto,field_ele->field_value);
		}

		if(tag == NoParameterDefinitions_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			((ty_ParameterDefinition_auto*)object)->m_NoParameterDefinitions_auto_Count = repeatLength;
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
				/*returnValue =*/ getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				/*if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}*/
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoParameterDefinitions_auto[%d]",j);
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_ParameterDefinition_auto*)object)->m_NoParameterDefinitions_auto_Array[j]));
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Exit struct NoParameterDefinitions_auto[%d]",j);
			}
		}

		if(tag == ParameterValue_auto)
		{
			strncpy(((ty_NoParameterDefinitions_auto*)object)->m_ParameterValue_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_ParameterValue_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->m_ParameterValue_auto,field_ele->field_value);
		}

		if(tag == EffectiveEndTime_auto)
		{
			((ty_NoParameterDefinitions_auto*)object)->m_EffectiveEndTime_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_EffectiveEndTime_auto is set to %d. The source data is : %d ",((ty_NoParameterDefinitions_auto*)object)->m_EffectiveEndTime_auto,atol(field_ele->field_value));
		}

		if(tag == EffectiveStartTime_auto)
		{
			((ty_NoParameterDefinitions_auto*)object)->m_EffectiveStartTime_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_EffectiveStartTime_auto is set to %d. The source data is : %d ",((ty_NoParameterDefinitions_auto*)object)->m_EffectiveStartTime_auto,atol(field_ele->field_value));
		}

		if(tag == ParameterStatus_auto)
		{
			strncpy(((ty_NoParameterDefinitions_auto*)object)->m_ParameterStatus_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_ParameterStatus_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->m_ParameterStatus_auto,field_ele->field_value);
		}

		if(tag == ParameterType_auto)
		{
			strncpy(((ty_NoParameterDefinitions_auto*)object)->m_ParameterType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_ParameterType_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->m_ParameterType_auto,field_ele->field_value);
		}

		if(tag == RelationshipID_auto)
		{
			strncpy(((ty_NoParameterDefinitions_auto*)object)->m_RelationshipID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_RelationshipID_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->m_RelationshipID_auto,field_ele->field_value);
		}

		if(tag == UpdateAction_auto)
		{
			strncpy(((ty_NoParameterDefinitions_auto*)object)->m_UpdateAction_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_UpdateAction_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->m_UpdateAction_auto,field_ele->field_value);
		}

		if(tag == NoContactInfos_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			((ty_NoParameterDefinitions_auto*)object)->m_NoContactInfos_auto_Count = repeatLength;
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
				/*returnValue =*/ getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				/*if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}*/
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoContactInfos_auto[%d]",j);
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_NoParameterDefinitions_auto*)object)->m_NoContactInfos_auto_Array[j]));
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Exit struct NoContactInfos_auto[%d]",j);
			}
		}

		if(tag == ContactInfoID_auto)
		{
			strncpy(((ty_NoContactInfos_auto*)object)->m_ContactInfoID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoContactInfos_auto*)object->m_ContactInfoID_auto is set to %s. The source data is : %s ",((ty_NoContactInfos_auto*)object)->m_ContactInfoID_auto,field_ele->field_value);
		}

		if(tag == ContactInfoIDType_auto)
		{
			((ty_NoContactInfos_auto*)object)->m_ContactInfoIDType_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoContactInfos_auto*)object->m_ContactInfoIDType_auto is set to %d. The source data is : %d ",((ty_NoContactInfos_auto*)object)->m_ContactInfoIDType_auto,atol(field_ele->field_value));
		}

		if(tag == NoParameterDefinitionSubID_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			((ty_NoParameterDefinitions_auto*)object)->m_NoParameterDefinitionSubID_auto_Count = repeatLength;
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
				/*returnValue =*/ getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				/*if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}*/
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoParameterDefinitionSubID_auto[%d]",j);
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_NoParameterDefinitions_auto*)object)->m_NoParameterDefinitionSubID_auto_Array[j]));
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Exit struct NoParameterDefinitionSubID_auto[%d]",j);
			}
		}

		if(tag == ParameterSubID_auto)
		{
			strncpy(((ty_NoParameterDefinitionSubID_auto*)object)->m_ParameterSubID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubID_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitionSubID_auto*)object)->m_ParameterSubID_auto,field_ele->field_value);
		}

		if(tag == ParameterSubIDType_auto)
		{
			strncpy(((ty_NoParameterDefinitionSubID_auto*)object)->m_ParameterSubIDType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubIDType_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitionSubID_auto*)object)->m_ParameterSubIDType_auto,field_ele->field_value);
		}

		if(tag == NoPartyIDs_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			((ty_ParameterDefinition_auto*)object)->m_NoPartyIDs_auto_Count = repeatLength;
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
				/*returnValue =*/ getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				/*if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}*/
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoPartyIDs_auto[%d]",j);
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_ParameterDefinition_auto*)object)->m_NoPartyIDs_auto_Array[j]));
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Exit struct NoPartyIDs_auto[%d]",j);
			}
		}

		if(tag == PartyID_auto)
		{
			strncpy(((ty_NoPartyIDs_auto*)object)->m_PartyID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->m_PartyID_auto is set to %s. The source data is : %s ",((ty_NoPartyIDs_auto*)object)->m_PartyID_auto,field_ele->field_value);
		}

		if(tag == PartyRole_auto)
		{
			((ty_NoPartyIDs_auto*)object)->m_PartyRole_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->m_PartyRole_auto is set to %d. The source data is : %d ",((ty_NoPartyIDs_auto*)object)->m_PartyRole_auto,atol(field_ele->field_value));
		}

		if(tag == PartyRoleQualifier_auto)
		{
			((ty_NoPartyIDs_auto*)object)->m_PartyRoleQualifier_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->m_PartyRoleQualifier_auto is set to %d. The source data is : %d ",((ty_NoPartyIDs_auto*)object)->m_PartyRoleQualifier_auto,atol(field_ele->field_value));
		}

		if(tag == NoPartySubIDs_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
			((ty_NoPartyIDs_auto*)object)->m_NoPartySubIDs_auto_Count = repeatLength;
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
				/*returnValue =*/ getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length);
				/*if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}*/
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoPartySubIDs_auto[%d]",j);
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_NoPartyIDs_auto*)object)->m_NoPartySubIDs_auto_Array[j]));
				if(returnValue == FALSE)
				{
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ParameterDefinition_convert_inner failed");
					return returnValue;
				}
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Exit struct NoPartySubIDs_auto[%d]",j);
			}
		}

		if(tag == PartySubID_auto)
		{
			strncpy(((ty_NoPartySubIDs_auto*)object)->m_PartySubID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartySubIDs_auto*)object->m_PartySubID_auto is set to %s. The source data is : %s ",((ty_NoPartySubIDs_auto*)object)->m_PartySubID_auto,field_ele->field_value);
		}

		if(tag == PartySubIDType_auto)
		{
			((ty_NoPartySubIDs_auto*)object)->m_PartySubIDType_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartySubIDs_auto*)object->m_PartySubIDType_auto is set to %d. The source data is : %d ",((ty_NoPartySubIDs_auto*)object)->m_PartySubIDType_auto,atol(field_ele->field_value));
		}

	}

}
#endif