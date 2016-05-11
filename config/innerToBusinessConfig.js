exports.innerToBusinessConfig = {
    innerStruct: 'ADFResponse',
    BusinessStruct: 'ADFResponseBusiness',
    fileName: 'ADFResponseToADFResponseBusiness.c',
    funcName: 'ADFResponseToADFResponseBusiness',

    repeatMap:[
        {
            leftStruct:'businessStruct->CCC',
            rightStruct: 'innerStruct->DDD',
            length: 'innerStruct->DDDlength',
            repeat: true, //是否重复组
            leftRepeat: true, //业务结构体是否重复组
            map:{
                sysno: '{UserSeqNo == 1}SysSeqNo[CHAR]',
                userseq: 'UserSeqNo',
                checksum: 'CheckSum',
                signature: 'Signature',
                signatureLength: 'SignatureLength',
                execid: 'ExecID',
            }
        },
        {
            leftStruct:'businessStruct->AAA',
            rightStruct: 'innerStruct->BBB',
            length: 'innerStruct->BBBlength',
            repeat: true, //是否重复组
            leftRepeat: false, //业务结构体是否重复组
            map:{
                sysno: '{UserSeqNo == 1}SysSeqNo[CHAR]',
                userseq: 'UserSeqNo',
                checksum: 'CheckSum',
                signature: 'Signature',
                signatureLength: 'SignatureLength',
                execid: 'ExecID',
            }
        },
        {
            leftStruct:'*businessStruct',
            rightStruct: '*innerStruct',
            repeat: false, //是否重复组
            map:{
                sysno: '{UserSeqNo == 1}SysSeqNo[CHAR]',
                userseq: 'UserSeqNo',
                checksum: 'CheckSum',
                signature: 'Signature',
                signatureLength: 'SignatureLength',
                execid: 'ExecID',
            }
        },
    ],

    special: 'ADFResponseToADFResponseBusiness_special'
}
