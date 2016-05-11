exports.innerToBusinessConfig = {
    innerStruct: 'ADFResponse', //技术结构体定义名
    BusinessStruct: 'ADFResponseBusiness', //业务结构体定义名
    fileName: 'ADFResponseToADFResponseBusiness.c',
    funcName: 'ADFResponseToADFResponseBusiness',

    repeatMap:[
        {
            leftStruct:'businessStruct->CCC',
            rightStruct: 'innerStruct->DDD',
            length: 'innerStruct->DDDlength', //重复组长度
            repeat: true, //是否重复组
            leftRepeat: true, //业务结构体是否重复组
            map:{
                sysno: '{UserSeqNo == 1}SysSeqNo[CHAR]', //业务结构体字段名:{条件}技术结构体字段名[类型]
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

    special: 'ADFResponseToADFResponseBusiness_special' //自定义函数名
}
