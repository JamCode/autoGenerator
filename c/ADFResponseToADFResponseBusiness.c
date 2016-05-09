BOOL ADFResponseToADFResponseBusiness(ADFResponse *innerStruct,  ADFResponseBusiness *businessStruct){
	if(UserSeqNo == 1){
		businessStruct->sysno = innerStruct->SysSeqNo;
	}
	businessStruct->userseq = innerStruct->UserSeqNo;
	businessStruct->checksum = innerStruct->CheckSum;
	businessStruct->signature = innerStruct->Signature;
	businessStruct->signatureLength = innerStruct->SignatureLength;
	businessStruct->execid = innerStruct->ExecID;
	return TRUE;
}
