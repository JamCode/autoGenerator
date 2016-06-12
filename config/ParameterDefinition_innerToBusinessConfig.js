exports.innerToBusinessConfig = {
	innerStruct: 'pParameterDefinition',
	BusinessStruct: 'pCimEntityType', //
	fileName: 'MapIntrnlToCimEntityTypeStruct.c',
    funcName: 'MapIntrnlToCimEntityTypeStruct',
	
	repeatMap:[
		{
			leftStruct:'pCimEntityType->Header',
			rightStruct:'pParameterDefinition',
			repeat:false,
			map:{
				begin_string : 'c_BeginString_auto[s]',
				body_length : 'i_Body_Length_auto[i]',
				msg_seqno : 'i_MsgSeqNum_auto[i]',
				sender_comp_id : 'c_SenderCompID_auto[s]',
				target_comp_id : 'c_TargetCompID_auto[s]',
			}
		},
		{
			leftStruct:'pCimEntityType->sEntyTypeBody.sEntyTypeDtls[0]',
			rightStruct: 'pParameterDefinition->t_NoParameterDefinitions_auto_Array[0].t_NoParameterDefinitionSubID_auto_Array',
			repeat:true,
			length: 'pParameterDefinition->t_NoParameterDefinitions_auto_Array[0].i_NoParameterDefinitionSubID_auto_Count',
			leftRepeat:false,
			map:{
				caEntySubTypeDesc : '{c_ParameterSubIDType_auto = "ITEN"}c_ParameterSubID_auto[s]'
			}
		},
	],
}