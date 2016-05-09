exports.innerToBusinessConfig = {
    innerStruct: 'ADFResponse',
    BusinessStruct: 'ADFResponseBusiness',
    fileName: 'ADFResponseToADFResponseBusiness.c',
    funcName: 'ADFResponseToADFResponseBusiness',


    map:{
        sysno: '{UserSeqNo == 1}SysSeqNo',
    	userseq: 'UserSeqNo',
    	checksum: 'CheckSum',
    	signature: 'Signature',
    	signatureLength: 'SignatureLength',
    	execid: 'ExecID',
    }



}