RETURN_VALUE MapIntrnlToCimEntityDtlsStruct(BUFFER *pInputBuffer, BUFFER* pOutputBuffer){
	RETURN_VALUE returnValue = 0;
	ty_ParameterDefinition_auto*pParameterDefinition_auto=(ty_ParameterDefinition_auto*)pInputBuffer;
	CIM_ENTY_STRUCT*pCIMEntityInfo;
	pCIMEntityInfo= (*CIM_ENTY_STRUCT)pInputBuffer;
	strcpy(pCIMEntityInfo->begin_string, ltoa(pParameterDefinition_auto->Header.c_BeginString_auto));
	pCIMEntityInfo->body_length= atol(pParameterDefinition_auto->Header.i_Body_Length_auto);
	pCIMEntityInfo->msg_seqno= atol(pParameterDefinition_auto->Header.i_MsgSeqNum_auto);
	strcpy(pCIMEntityInfo->sender_comp_id, ltoa(pParameterDefinition_auto->Header.c_SenderCompID_auto));
	strcpy(pCIMEntityInfo->target_comp_id, ltoa(pParameterDefinition_auto->Header.c_TargetCompID_auto));
	for(int index1 = 0; index1 < pParameterDefinition_auto->i_NoParameterDefinitions_auto_Count; ++index1)
	{
		if(strcmp(pCIMEntityInfo->c_ParameterType_auto, "Renameinformation") == 0)
		{
			for(int index2 = 0; index2 < pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].i_NoParameterDefinitionSubID_auto_Count; ++index2)
			{
				if(strcmp(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.c_ParameterSubIDType_auto, "RCFN") == 0)
				{
					strcpy(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.caEntyEncdDesc, ltoa(pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].t_NoParameterDefinitionSubID_auto_Array[index2].c_ParameterSubID_auto));
				}
				if(strcmp(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.c_ParameterSubIDType_auto, "RCSN") == 0)
				{
					strcpy(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.caEntyEncdShrtDesc, ltoa(pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].t_NoParameterDefinitionSubID_auto_Array[index2].c_ParameterSubID_auto));
				}
				if(strcmp(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.c_ParameterSubIDType_auto, "RCSN") == 0)
				{
					strcpy(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.caEntyDesc, ltoa(pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].t_NoParameterDefinitionSubID_auto_Array[index2].c_ParameterSubID_auto));
				}
				if(strcmp(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.c_ParameterSubIDType_auto, "RESN") == 0)
				{
					strcpy(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.caEntyShrtDesc, ltoa(pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].t_NoParameterDefinitionSubID_auto_Array[index2].c_ParameterSubID_auto));
				}
			}
		}
		if(strcmp(pCIMEntityInfo->c_ParameterType_auto, "Institution") == 0)
		{
			for(int index2 = 0; index2 < pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].i_NoParameterDefinitionSubID_auto_Count; ++index2)
			{
				if(strcmp(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.c_ParameterSubIDType_auto, "CFETSIC") == 0)
				{
					strcpy(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.caEntyEntyCode, ltoa(pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].t_NoParameterDefinitionSubID_auto_Array[index2].c_ParameterSubID_auto));
				}
				if(strcmp(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.c_ParameterSubIDType_auto, "PY") == 0)
				{
					strcpy(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.caPnynCodeShrtDesc, ltoa(pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].t_NoParameterDefinitionSubID_auto_Array[index2].c_ParameterSubID_auto));
				}
				if(strcmp(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.c_ParameterSubIDType_auto, "CC") == 0)
				{
					pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.lRegionSrno= atol(pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].t_NoParameterDefinitionSubID_auto_Array[index2].c_ParameterSubID_auto);
				}
				if(strcmp(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.c_ParameterSubIDType_auto, "PBOCC") == 0)
				{
					strcpy(pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody.caPbocEntyCode, ltoa(pParameterDefinition_auto->t_NoParameterDefinitions_auto_Array[index1].t_NoParameterDefinitionSubID_auto_Array[index2].c_ParameterSubID_auto));
				}
			}
		}
		if(strcmp(pCIMEntityInfo->c_ParameterType_auto, "IdentityOfInstitution") == 0)
		{
			if(strcmp(pCIMEntityInfo->c_ParameterValue_auto, "CurrencyTradingMembers") == 0)
			{
			}
			if(strcmp(pCIMEntityInfo->c_ParameterValue_auto, "Issuer") == 0)
			{
			}
			if(strcmp(pCIMEntityInfo->c_ParameterValue_auto, "OtherClassMembers") == 0)
			{
			}
			if(strcmp(pCIMEntityInfo->c_ParameterValue_auto, "InternationalCurrencyTradingMmebers") == 0)
			{
			}
		}
	}
	strcpy(pCIMEntityInfo->check_sum, ltoa(pParameterDefinition_auto->sTrailer.c_CheckSum_auto));
	return returnValue;
}
