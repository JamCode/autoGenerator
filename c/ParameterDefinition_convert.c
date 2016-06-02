<<<<<<< HEAD
/*2016-05-31 22:37:56*/
#ifndef _PARAMETERDEFINITION_CONVERT_C_
#define _PARAMETERDEFINITION_CONVERT_C_

#include "Fields.h"
#include "Trdx_ErrorLog.h"

#include "imixToInnerFnctns.h"

typedef struct st_NoContactInfos_auto{
	CHAR c_ContactInfoID_auto[512];/* field number 10602*/
	INT64 l_ContactInfoIDType_auto;/* field number 10603*/
}ty_NoContactInfos_auto;

typedef struct st_NoParameterDefinitionSubID_auto{
	CHAR c_ParameterSubID_auto[512];/* field number 11369*/
	CHAR c_ParameterSubIDType_auto[512];/* field number 11370*/
}ty_NoParameterDefinitionSubID_auto;

typedef struct st_NoParameterDefinitions_auto{
	CHAR c_ParameterValue_auto[512];/* field number 11157*/
	INT64 l_EffectiveEndTime_auto;/* field number 11367*/
	INT64 l_EffectiveStartTime_auto;/* field number 11366*/
	CHAR c_ParameterStatus_auto[512];/* field number 11363*/
	CHAR c_ParameterType_auto[512];/* field number 11156*/
	CHAR c_RelationshipID_auto[512];/* field number 11364*/
	CHAR c_UpdateAction_auto[512];/* field number 11365*/
	INT i_NoContactInfos_auto_Count;/* field number 10601 */ 
	ty_NoContactInfos_auto t_NoContactInfos_auto_Array[128];
	INT i_NoParameterDefinitionSubID_auto_Count;/* field number 11368 */ 
	ty_NoParameterDefinitionSubID_auto t_NoParameterDefinitionSubID_auto_Array[128];
}ty_NoParameterDefinitions_auto;

typedef struct st_NoPartySubIDs_auto{
	CHAR c_PartySubID_auto[512];/* field number 523*/
	INT64 l_PartySubIDType_auto;/* field number 803*/
}ty_NoPartySubIDs_auto;

typedef struct st_NoPartyIDs_auto{
	CHAR c_PartyID_auto[512];/* field number 448*/
	INT64 l_PartyRole_auto;/* field number 452*/
	INT64 l_PartyRoleQualifier_auto;/* field number 2376*/
	INT i_NoPartySubIDs_auto_Count;/* field number 802 */ 
	ty_NoPartySubIDs_auto t_NoPartySubIDs_auto_Array[128];
}ty_NoPartyIDs_auto;

typedef struct st_ParameterDefinition_auto{
	CHAR c_BeginString_auto[512];/* field number 8*/
	INDC i_BodyLength_auto;/* field number 9*/
	undefined i_undefined_auto;/* field number undefined*/
	CHAR c_MsgType_auto[512];/* field number 35*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	CHAR c_CheckSum_auto[512];/* field number 10*/
	undefined i_undefined_auto;/* field number undefined*/
	undefined i_undefined_auto;/* field number undefined*/
	CHAR c_ParameterDefinitionAction_auto[512];/* field number 11160*/
	CHAR c_ParameterDefinitionType_auto[512];/* field number 11159*/
	CHAR c_ApplID_auto[512];/* field number 1180*/
	INDC i_ApplLastSeqNum_auto;/* field number 1350*/
	INDC i_ApplRefSeqNum_auto;/* field number 11262*/
	BOOL b_ApplResendFlag_auto;/* field number 1352*/
	INDC i_ApplSeqNum_auto;/* field number 1181*/
	CHAR c_ApplToken_auto[512];/* field number 11233*/
	CHAR c_ApplErrorCode_auto[512];/* field number 11251*/
	CHAR c_ApplErrorDesc_auto[512];/* field number 11261*/
	CHAR c_ApplUniqueKey_auto[512];/* field number 11252*/
	INT i_NoParameterDefinitions_auto_Count;/* field number 11158 */ 
	ty_NoParameterDefinitions_auto t_NoParameterDefinitions_auto_Array[128];
	INT i_NoPartyIDs_auto_Count;/* field number 453 */ 
	ty_NoPartyIDs_auto t_NoPartyIDs_auto_Array[128];
=======
/*2016-05-23 11:17:32*/
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
>>>>>>> master
}ty_ParameterDefinition_auto;

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
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_BeginString_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_BeginString_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_BeginString_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_BeginString_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_BeginString_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_BeginString_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == BodyLength_auto)
		{
<<<<<<< HEAD
			((ty_ParameterDefinition_auto*)object)->i_BodyLength_auto=atoi(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->i_BodyLength_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->i_BodyLength_auto,atol(field_ele->field_value));
=======
			(ty_ParameterDefinition_auto*)object->m_BodyLength_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_BodyLength_auto is set to %d. The source data is : %d ",(ty_ParameterDefinition_auto*)object->m_BodyLength_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == MsgType_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_MsgType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_MsgType_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_MsgType_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_MsgType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_MsgType_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_MsgType_auto,field_ele->field_value);
>>>>>>> master
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
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_CheckSum_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_CheckSum_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_CheckSum_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_CheckSum_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_CheckSum_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_CheckSum_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == undefined_auto)
		{
		}

		if(tag == ParameterDefinitionAction_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_ParameterDefinitionAction_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_ParameterDefinitionAction_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_ParameterDefinitionAction_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_ParameterDefinitionAction_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ParameterDefinitionAction_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_ParameterDefinitionAction_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ParameterDefinitionType_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_ParameterDefinitionType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_ParameterDefinitionType_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_ParameterDefinitionType_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_ParameterDefinitionType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ParameterDefinitionType_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_ParameterDefinitionType_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplID_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_ApplID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_ApplID_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_ApplID_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplID_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_ApplID_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplLastSeqNum_auto)
		{
<<<<<<< HEAD
			((ty_ParameterDefinition_auto*)object)->i_ApplLastSeqNum_auto=atoi(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->i_ApplLastSeqNum_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->i_ApplLastSeqNum_auto,atol(field_ele->field_value));
=======
			(ty_ParameterDefinition_auto*)object->m_ApplLastSeqNum_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplLastSeqNum_auto is set to %d. The source data is : %d ",(ty_ParameterDefinition_auto*)object->m_ApplLastSeqNum_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplRefSeqNum_auto)
		{
<<<<<<< HEAD
			((ty_ParameterDefinition_auto*)object)->i_ApplRefSeqNum_auto=atoi(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->i_ApplRefSeqNum_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->i_ApplRefSeqNum_auto,atol(field_ele->field_value));
=======
			(ty_ParameterDefinition_auto*)object->m_ApplRefSeqNum_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplRefSeqNum_auto is set to %d. The source data is : %d ",(ty_ParameterDefinition_auto*)object->m_ApplRefSeqNum_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplResendFlag_auto)
		{
<<<<<<< HEAD
			((ty_ParameterDefinition_auto*)object)->b_ApplResendFlag_auto=atoi(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "((ty_ParameterDefinition_auto*)object)->b_ApplResendFlag_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->b_ApplResendFlag_auto,atol(field_ele->field_value));
=======
			(ty_ParameterDefinition_auto*)object->m_ApplResendFlag_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplResendFlag_auto is set to %d. The source data is : %d ",(ty_ParameterDefinition_auto*)object->m_ApplResendFlag_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplSeqNum_auto)
		{
<<<<<<< HEAD
			((ty_ParameterDefinition_auto*)object)->i_ApplSeqNum_auto=atoi(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->i_ApplSeqNum_auto is set to %d. The source data is : %d ",((ty_ParameterDefinition_auto*)object)->i_ApplSeqNum_auto,atol(field_ele->field_value));
=======
			(ty_ParameterDefinition_auto*)object->m_ApplSeqNum_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplSeqNum_auto is set to %d. The source data is : %d ",(ty_ParameterDefinition_auto*)object->m_ApplSeqNum_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplToken_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_ApplToken_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_ApplToken_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_ApplToken_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplToken_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplToken_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_ApplToken_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplErrorCode_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_ApplErrorCode_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_ApplErrorCode_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_ApplErrorCode_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplErrorCode_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplErrorCode_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_ApplErrorCode_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplErrorDesc_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_ApplErrorDesc_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_ApplErrorDesc_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_ApplErrorDesc_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplErrorDesc_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplErrorDesc_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_ApplErrorDesc_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ApplUniqueKey_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_ParameterDefinition_auto*)object)->c_ApplUniqueKey_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->c_ApplUniqueKey_auto is set to %s. The source data is : %s ",((ty_ParameterDefinition_auto*)object)->c_ApplUniqueKey_auto,field_ele->field_value);
=======
			strncpy((ty_ParameterDefinition_auto*)object->m_ApplUniqueKey_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_ParameterDefinition_auto*)object->m_ApplUniqueKey_auto is set to %s. The source data is : %s ",(ty_ParameterDefinition_auto*)object->m_ApplUniqueKey_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == NoParameterDefinitions_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
<<<<<<< HEAD
			((ty_ParameterDefinition_auto*)object)->i_NoParameterDefinitions_auto_Count = repeatLength;
=======
			(ty_ParameterDefinition_auto*)object->m_NoParameterDefinitions_auto_Count = repeatLength;
>>>>>>> master
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
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoParameterDefinitions_auto[%d]",j);
<<<<<<< HEAD
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_ParameterDefinition_auto*)object)->t_NoParameterDefinitions_auto_Array[j]));
=======
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_ParameterDefinition_auto*)object->m_NoParameterDefinitions_auto_Array[j]);
>>>>>>> master
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
<<<<<<< HEAD
			strncpy(((ty_NoParameterDefinitions_auto*)object)->c_ParameterValue_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->c_ParameterValue_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->c_ParameterValue_auto,field_ele->field_value);
=======
			strncpy((ty_NoParameterDefinitions_auto*)object->m_ParameterValue_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_ParameterValue_auto is set to %s. The source data is : %s ",(ty_NoParameterDefinitions_auto*)object->m_ParameterValue_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == EffectiveEndTime_auto)
		{
<<<<<<< HEAD
			((ty_NoParameterDefinitions_auto*)object)->l_EffectiveEndTime_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->l_EffectiveEndTime_auto is set to %ld. The source data is : %ld ",((ty_NoParameterDefinitions_auto*)object)->l_EffectiveEndTime_auto,atol(field_ele->field_value));
=======
			(ty_NoParameterDefinitions_auto*)object->m_EffectiveEndTime_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_EffectiveEndTime_auto is set to %d. The source data is : %d ",(ty_NoParameterDefinitions_auto*)object->m_EffectiveEndTime_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == EffectiveStartTime_auto)
		{
<<<<<<< HEAD
			((ty_NoParameterDefinitions_auto*)object)->l_EffectiveStartTime_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->l_EffectiveStartTime_auto is set to %ld. The source data is : %ld ",((ty_NoParameterDefinitions_auto*)object)->l_EffectiveStartTime_auto,atol(field_ele->field_value));
=======
			(ty_NoParameterDefinitions_auto*)object->m_EffectiveStartTime_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_EffectiveStartTime_auto is set to %d. The source data is : %d ",(ty_NoParameterDefinitions_auto*)object->m_EffectiveStartTime_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ParameterStatus_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_NoParameterDefinitions_auto*)object)->c_ParameterStatus_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->c_ParameterStatus_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->c_ParameterStatus_auto,field_ele->field_value);
=======
			strncpy((ty_NoParameterDefinitions_auto*)object->m_ParameterStatus_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_ParameterStatus_auto is set to %s. The source data is : %s ",(ty_NoParameterDefinitions_auto*)object->m_ParameterStatus_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ParameterType_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_NoParameterDefinitions_auto*)object)->c_ParameterType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->c_ParameterType_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->c_ParameterType_auto,field_ele->field_value);
=======
			strncpy((ty_NoParameterDefinitions_auto*)object->m_ParameterType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_ParameterType_auto is set to %s. The source data is : %s ",(ty_NoParameterDefinitions_auto*)object->m_ParameterType_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == RelationshipID_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_NoParameterDefinitions_auto*)object)->c_RelationshipID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->c_RelationshipID_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->c_RelationshipID_auto,field_ele->field_value);
=======
			strncpy((ty_NoParameterDefinitions_auto*)object->m_RelationshipID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_RelationshipID_auto is set to %s. The source data is : %s ",(ty_NoParameterDefinitions_auto*)object->m_RelationshipID_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == UpdateAction_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_NoParameterDefinitions_auto*)object)->c_UpdateAction_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->c_UpdateAction_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitions_auto*)object)->c_UpdateAction_auto,field_ele->field_value);
=======
			strncpy((ty_NoParameterDefinitions_auto*)object->m_UpdateAction_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitions_auto*)object->m_UpdateAction_auto is set to %s. The source data is : %s ",(ty_NoParameterDefinitions_auto*)object->m_UpdateAction_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == NoContactInfos_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
<<<<<<< HEAD
			((ty_NoParameterDefinitions_auto*)object)->i_NoContactInfos_auto_Count = repeatLength;
=======
			(ty_NoParameterDefinitions_auto*)object->m_NoContactInfos_auto_Count = repeatLength;
>>>>>>> master
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
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoContactInfos_auto[%d]",j);
<<<<<<< HEAD
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_NoParameterDefinitions_auto*)object)->t_NoContactInfos_auto_Array[j]));
=======
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_NoParameterDefinitions_auto*)object->m_NoContactInfos_auto_Array[j]);
>>>>>>> master
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
<<<<<<< HEAD
			strncpy(((ty_NoContactInfos_auto*)object)->c_ContactInfoID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoContactInfos_auto*)object->c_ContactInfoID_auto is set to %s. The source data is : %s ",((ty_NoContactInfos_auto*)object)->c_ContactInfoID_auto,field_ele->field_value);
=======
			strncpy((ty_NoContactInfos_auto*)object->m_ContactInfoID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoContactInfos_auto*)object->m_ContactInfoID_auto is set to %s. The source data is : %s ",(ty_NoContactInfos_auto*)object->m_ContactInfoID_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ContactInfoIDType_auto)
		{
<<<<<<< HEAD
			((ty_NoContactInfos_auto*)object)->l_ContactInfoIDType_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoContactInfos_auto*)object->l_ContactInfoIDType_auto is set to %ld. The source data is : %ld ",((ty_NoContactInfos_auto*)object)->l_ContactInfoIDType_auto,atol(field_ele->field_value));
=======
			(ty_NoContactInfos_auto*)object->m_ContactInfoIDType_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoContactInfos_auto*)object->m_ContactInfoIDType_auto is set to %d. The source data is : %d ",(ty_NoContactInfos_auto*)object->m_ContactInfoIDType_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == NoParameterDefinitionSubID_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
<<<<<<< HEAD
			((ty_NoParameterDefinitions_auto*)object)->i_NoParameterDefinitionSubID_auto_Count = repeatLength;
=======
			(ty_NoParameterDefinitions_auto*)object->m_NoParameterDefinitionSubID_auto_Count = repeatLength;
>>>>>>> master
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
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoParameterDefinitionSubID_auto[%d]",j);
<<<<<<< HEAD
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_NoParameterDefinitions_auto*)object)->t_NoParameterDefinitionSubID_auto_Array[j]));
=======
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_NoParameterDefinitions_auto*)object->m_NoParameterDefinitionSubID_auto_Array[j]);
>>>>>>> master
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
<<<<<<< HEAD
			strncpy(((ty_NoParameterDefinitionSubID_auto*)object)->c_ParameterSubID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitionSubID_auto*)object->c_ParameterSubID_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitionSubID_auto*)object)->c_ParameterSubID_auto,field_ele->field_value);
=======
			strncpy((ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubID_auto is set to %s. The source data is : %s ",(ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubID_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == ParameterSubIDType_auto)
		{
<<<<<<< HEAD
			strncpy(((ty_NoParameterDefinitionSubID_auto*)object)->c_ParameterSubIDType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitionSubID_auto*)object->c_ParameterSubIDType_auto is set to %s. The source data is : %s ",((ty_NoParameterDefinitionSubID_auto*)object)->c_ParameterSubIDType_auto,field_ele->field_value);
=======
			strncpy((ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubIDType_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubIDType_auto is set to %s. The source data is : %s ",(ty_NoParameterDefinitionSubID_auto*)object->m_ParameterSubIDType_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == NoPartyIDs_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
<<<<<<< HEAD
			((ty_ParameterDefinition_auto*)object)->i_NoPartyIDs_auto_Count = repeatLength;
=======
			(ty_ParameterDefinition_auto*)object->m_NoPartyIDs_auto_Count = repeatLength;
>>>>>>> master
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
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoPartyIDs_auto[%d]",j);
<<<<<<< HEAD
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_ParameterDefinition_auto*)object)->t_NoPartyIDs_auto_Array[j]));
=======
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_ParameterDefinition_auto*)object->m_NoPartyIDs_auto_Array[j]);
>>>>>>> master
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
<<<<<<< HEAD
			strncpy(((ty_NoPartyIDs_auto*)object)->c_PartyID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->c_PartyID_auto is set to %s. The source data is : %s ",((ty_NoPartyIDs_auto*)object)->c_PartyID_auto,field_ele->field_value);
=======
			strncpy((ty_NoPartyIDs_auto*)object->m_PartyID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->m_PartyID_auto is set to %s. The source data is : %s ",(ty_NoPartyIDs_auto*)object->m_PartyID_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == PartyRole_auto)
		{
<<<<<<< HEAD
			((ty_NoPartyIDs_auto*)object)->l_PartyRole_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->l_PartyRole_auto is set to %ld. The source data is : %ld ",((ty_NoPartyIDs_auto*)object)->l_PartyRole_auto,atol(field_ele->field_value));
=======
			(ty_NoPartyIDs_auto*)object->m_PartyRole_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->m_PartyRole_auto is set to %d. The source data is : %d ",(ty_NoPartyIDs_auto*)object->m_PartyRole_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == PartyRoleQualifier_auto)
		{
<<<<<<< HEAD
			((ty_NoPartyIDs_auto*)object)->l_PartyRoleQualifier_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->l_PartyRoleQualifier_auto is set to %ld. The source data is : %ld ",((ty_NoPartyIDs_auto*)object)->l_PartyRoleQualifier_auto,atol(field_ele->field_value));
=======
			(ty_NoPartyIDs_auto*)object->m_PartyRoleQualifier_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartyIDs_auto*)object->m_PartyRoleQualifier_auto is set to %d. The source data is : %d ",(ty_NoPartyIDs_auto*)object->m_PartyRoleQualifier_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == NoPartySubIDs_auto)
		{
			COUNT repeatLength = atol(field_ele->field_value);
<<<<<<< HEAD
			((ty_NoPartyIDs_auto*)object)->i_NoPartySubIDs_auto_Count = repeatLength;
=======
			(ty_NoPartyIDs_auto*)object->m_NoPartySubIDs_auto_Count = repeatLength;
>>>>>>> master
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
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC,Info(0),"Enter struct NoPartySubIDs_auto[%d]",j);
<<<<<<< HEAD
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(((ty_NoPartyIDs_auto*)object)->t_NoPartySubIDs_auto_Array[j]));
=======
				returnValue = ParameterDefinition_convert_inner(child_field_array, child_field_array_length, &(ty_NoPartyIDs_auto*)object->m_NoPartySubIDs_auto_Array[j]);
>>>>>>> master
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
<<<<<<< HEAD
			strncpy(((ty_NoPartySubIDs_auto*)object)->c_PartySubID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartySubIDs_auto*)object->c_PartySubID_auto is set to %s. The source data is : %s ",((ty_NoPartySubIDs_auto*)object)->c_PartySubID_auto,field_ele->field_value);
=======
			strncpy((ty_NoPartySubIDs_auto*)object->m_PartySubID_auto, field_ele->field_value, 511);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartySubIDs_auto*)object->m_PartySubID_auto is set to %s. The source data is : %s ",(ty_NoPartySubIDs_auto*)object->m_PartySubID_auto,field_ele->field_value);
>>>>>>> master
		}

		if(tag == PartySubIDType_auto)
		{
<<<<<<< HEAD
			((ty_NoPartySubIDs_auto*)object)->l_PartySubIDType_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartySubIDs_auto*)object->l_PartySubIDType_auto is set to %ld. The source data is : %ld ",((ty_NoPartySubIDs_auto*)object)->l_PartySubIDType_auto,atol(field_ele->field_value));
=======
			(ty_NoPartySubIDs_auto*)object->m_PartySubIDType_auto=atol(field_ele->field_value);
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "(ty_NoPartySubIDs_auto*)object->m_PartySubIDType_auto is set to %d. The source data is : %d ",(ty_NoPartySubIDs_auto*)object->m_PartySubIDType_auto,field_ele->field_value);
>>>>>>> master
		}

	}

}
