exports.innerToBusinessConfig = {
	innerStruct: 'ty_ParameterDefinition_auto',
	BusinessStruct: 'CIM_ENTY_STRUCT', //
	fileName: 'MapIntrnlToCimEntityDtlsStruct.c',
    funcName: 'MapIntrnlToCimEntityDtlsStruct',
	innerVar: 'pParameterDefinition_auto',
	businessVar: 'pCIMEntityInfo',
	
	
	MainMap:[
		{
			src:'.',
			dest:'.',
			repeat:false,
			map:{
				mapheader:'HeaderMap[m]',
			}
		},
		{
			src:'.t_NoParameterDefinitions_auto_Array',
			dest:'.',
			repeat:true,
			length:'.i_NoParameterDefinitions_auto_Count',
			destRepeat:false,
			map:{
				mapRenameInfo:'{.c_ParameterType_auto = "Renameinformation"}RenameInfoMap[m]',
				mapInstitution:'{.c_ParameterType_auto = "Institution"}InstitutionMap[m]',
				mapEntityInfo:'{.c_ParameterType_auto = "IdentityOfInstitution"}EntityInfoMap[m]',
			}
		},
		{
			src:'.sTrailer',
			dest:'.',
			repeat:false,
			map:{
				check_sum: 'c_CheckSum_auto[s]',
			}
		}
	],
	
	HeaderMap:[
		{
			src:'.Header',
			dest:'.',
			map:{
				begin_string : 'c_BeginString_auto[s]',
				body_length : 'i_Body_Length_auto[i]',
				msg_seqno : 'i_MsgSeqNum_auto[i]',
				sender_comp_id : 'c_SenderCompID_auto[s]',
				target_comp_id : 'c_TargetCompID_auto[s]',
			}
		},
	],
	EntityInfoMap:[
		{
			src:'.',
			dest:'.',
			repeat:false,
			map:{
				mapCurrency:'{.c_ParameterValue_auto="CurrencyTradingMembers"}CurrencyMap[m]',
				mapIssuer:'{.c_ParameterValue_auto="Issuer"}IssuerMap[m]',
				mapOtherMem:'{.c_ParameterValue_auto="OtherClassMembers"}OtherMemMap[m]',
				mapInternational:'{.c_ParameterValue_auto="InternationalCurrencyTradingMmebers"}InternationalMap[m]',
			}
		}
	],
	CurrencyMap:[
		{
			src:'.',
			dest:'',
		}
	],
	IssuerMap:[
	],
	OtherMemMap:[
	],
	InternationalMap:[
	],
	RenameInfoMap:[
		{
			src:'.t_NoParameterDefinitionSubID_auto_Array',
			dest:'pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody',
			repeat:true,
			length:'.i_NoParameterDefinitionSubID_auto_Count',
			destRepeat:false,
			map:{
				caEntyEncdDesc:'{.c_ParameterSubIDType_auto = "RCFN"}c_ParameterSubID_auto[s]',
				caEntyEncdShrtDesc:'{.c_ParameterSubIDType_auto = "RCSN"}c_ParameterSubID_auto[s]',
				caEntyDesc:'{.c_ParameterSubIDType_auto = "RCSN"}c_ParameterSubID_auto[s]',
				caEntyShrtDesc:'{.c_ParameterSubIDType_auto = "RESN"}c_ParameterSubID_auto[s]',
			}
		}
	],
	InstitutionMap:[
		{
			src:'.t_NoParameterDefinitionSubID_auto_Array',
			dest:'pCimEntityInfo->sCimEntyStructBody.sEntyDtlsBody',
			repeat:true,
			length:'.i_NoParameterDefinitionSubID_auto_Count',
			destRepeat:false,
			map:{
				caEntyEntyCode:'{.c_ParameterSubIDType_auto = "CFETSIC"}c_ParameterSubID_auto[s]',
				caPnynCodeShrtDesc:'{.c_ParameterSubIDType_auto = "PY"}c_ParameterSubID_auto[s]',
				lRegionSrno:'{.c_ParameterSubIDType_auto = "CC"}c_ParameterSubID_auto[l]',
				caPbocEntyCode:'{.c_ParameterSubIDType_auto = "PBOCC"}c_ParameterSubID_auto[s]',
			}
		}
	],
}