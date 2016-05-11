BOOL ADFResponseToADFResponseBusiness(ADFResponse *innerStruct,  ADFResponseBusiness *businessStruct){
	RETURN_VALUE returnValue = TRUE;
	/*innerStruct->DDDlength group repeat */
	for(int i=0; i<innerStruct->DDDlength;++i){
		if(UserSeqNo == 1){
			strcpy(BusinessStruct->CCC[i].sysno , innerStruct->DDD[i].SysSeqNo);
		}
		BusinessStruct->CCC[i].userseq = innerStruct->DDD[i].UserSeqNo;
		BusinessStruct->CCC[i].checksum = innerStruct->DDD[i].CheckSum;
		BusinessStruct->CCC[i].signature = innerStruct->DDD[i].Signature;
		BusinessStruct->CCC[i].signatureLength = innerStruct->DDD[i].SignatureLength;
		BusinessStruct->CCC[i].execid = innerStruct->DDD[i].ExecID;
	}

	/*innerStruct->BBBlength group repeat */
	for(int i=0; i<innerStruct->BBBlength;++i){
		if(UserSeqNo == 1){
			strcpy(BusinessStruct->AAA.sysno , innerStruct->BBB[i].SysSeqNo);
		}
		BusinessStruct->AAA.userseq = innerStruct->BBB[i].UserSeqNo;
		BusinessStruct->AAA.checksum = innerStruct->BBB[i].CheckSum;
		BusinessStruct->AAA.signature = innerStruct->BBB[i].Signature;
		BusinessStruct->AAA.signatureLength = innerStruct->BBB[i].SignatureLength;
		BusinessStruct->AAA.execid = innerStruct->BBB[i].ExecID;
	}

	if(UserSeqNo == 1){
		strcpy(*BusinessStruct.sysno , *innerStruct.SysSeqNo);
	}
	*BusinessStruct.userseq = *innerStruct.UserSeqNo;
	*BusinessStruct.checksum = *innerStruct.CheckSum;
	*BusinessStruct.signature = *innerStruct.Signature;
	*BusinessStruct.signatureLength = *innerStruct.SignatureLength;
	*BusinessStruct.execid = *innerStruct.ExecID;

	returnValue = ADFResponseToADFResponseBusiness_special(innerStruct, businessStruct);
	if(returnValue == false){
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "specialFunc failed");
	}
	return returnValue;
}
