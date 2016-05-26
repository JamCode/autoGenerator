/*2016-05-25 20:22:28*/
#ifndef _PARAMETERDEFINITION_CONVERT_H_
#define _PARAMETERDEFINITION_CONVERT_H_

#include "imixToInnerFnctns.h"
#pragma pack(8)


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
#pragma pack()
#endif