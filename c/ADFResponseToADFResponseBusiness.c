BOOL ADFResponseToADFResponseBusiness(ADFResponse *innerStruct,  ADFResponseBusiness *businessStruct){
	RETURN_VALUE returnValue = TRUE;
	/*innerStruct->DDDlength group repeat */
	for(int i=0; i<innerStruct->DDDlength;++i){
		if(innerStruct->DDD[i].UserSeqNo == 1){
			strcpy(businessStruct->CCC[i].sysno , innerStruct->DDD[i].SysSeqNo);
		}
		businessStruct->CCC[i].userseq = innerStruct->DDD[i].UserSeqNo;
		businessStruct->CCC[i].checksum = innerStruct->DDD[i].CheckSum;
		businessStruct->CCC[i].signature = innerStruct->DDD[i].Signature;
		businessStruct->CCC[i].signatureLength = innerStruct->DDD[i].SignatureLength;
		businessStruct->CCC[i].execid = innerStruct->DDD[i].ExecID;
	}

	/*innerStruct->BBBlength group repeat */
	for(int i=0; i<innerStruct->BBBlength;++i){
		if(innerStruct->BBB[i].UserSeqNo == 1){
			strcpy(businessStruct->AAA.sysno , innerStruct->BBB[i].SysSeqNo);
		}
		businessStruct->AAA.userseq = innerStruct->BBB[i].UserSeqNo;
		businessStruct->AAA.checksum = innerStruct->BBB[i].CheckSum;
		businessStruct->AAA.signature = innerStruct->BBB[i].Signature;
		businessStruct->AAA.signatureLength = innerStruct->BBB[i].SignatureLength;
		businessStruct->AAA.execid = innerStruct->BBB[i].ExecID;
	}

	if(*innerStruct.UserSeqNo == 1){
		strcpy(*businessStruct.sysno , *innerStruct.SysSeqNo);
	}
	*businessStruct.userseq = *innerStruct.UserSeqNo;
	*businessStruct.checksum = *innerStruct.CheckSum;
	*businessStruct.signature = *innerStruct.Signature;
	*businessStruct.signatureLength = *innerStruct.SignatureLength;
	*businessStruct.execid = *innerStruct.ExecID;

	returnValue = ADFResponseToADFResponseBusiness_special(innerStruct, businessStruct);
	if(returnValue == false){
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "specialFunc failed");
	}
	return returnValue;
}
