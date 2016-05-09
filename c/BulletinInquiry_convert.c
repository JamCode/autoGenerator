/*5/9/2016, 4:44:10 PM*/
#include <fieldMacroDefine.h>
struct BulletinInquiry{
	CHAR BeginString[512];/* field number 8*/
	INDC BodyLength;/* field number 9*/
	INDC MsgSeqNum;/* field number 34*/
	CHAR MsgType[512];/* field number 35*/
	CHAR SenderCompID[512];/* field number 49*/
	INT64 SendingTime;/* field number 52*/
	CHAR TargetCompID[512];/* field number 56*/
	CHAR DeliverToCompID[512];/* field number 128*/
	CHAR DeliverToSubID[512];/* field number 129*/
	CHAR ErrorCode[512];/* field number 10052*/
	INDC LastMsgSeqNumProcessed;/* field number 369*/
	CHAR MessageEncoding[512];/* field number 347*/
	CHAR OnBehalfOfCompID[512];/* field number 115*/
	CHAR OnBehalfOfSubID[512];/* field number 116*/
	INT64 OrigSendingTime;/* field number 122*/
	BOOL PossDupFlag;/* field number 43*/
	BOOL PossResend;/* field number 97*/
	CHAR SecureData[512];/* field number 91*/
	INDC SecureDataLen;/* field number 90*/
	INT64 SegmentID;/* field number 10287*/
	CHAR SenderSubID[512];/* field number 50*/
	CHAR SignatureMethod[512];/* field number 10452*/
	INDC SysSeqNo;/* field number 10308*/
	CHAR TargetSubID[512];/* field number 57*/
	INDC UserSeqNo;/* field number 10333*/
	CHAR CheckSum[512];/* field number 10*/
	CHAR Signature[512];/* field number 89*/
	INDC SignatureLength;/* field number 93*/
	INT64 BulletinByIndc;/* field number 10611*/
	CHAR BulletinInqID[512];/* field number 10564*/
	UTCDATEONLY IssueDate;/* field number 225*/
	UTCDATEONLY QueryEndDate;/* field number 10247*/
	INT64 QueryPageNumber;/* field number 10256*/
	UTCDATEONLY QueryStartDate;/* field number 10264*/
	INT64 SentOrReceived;/* field number 10610*/
	INT64 TransactTime;/* field number 60*/
};

INT getLevel(INDC tag){
	if(BeginString == tag){return 0;}
	if(BodyLength == tag){return 0;}
	if(MsgSeqNum == tag){return 0;}
	if(MsgType == tag){return 0;}
	if(SenderCompID == tag){return 0;}
	if(SendingTime == tag){return 0;}
	if(TargetCompID == tag){return 0;}
	if(DeliverToCompID == tag){return 0;}
	if(DeliverToSubID == tag){return 0;}
	if(ErrorCode == tag){return 0;}
	if(LastMsgSeqNumProcessed == tag){return 0;}
	if(MessageEncoding == tag){return 0;}
	if(OnBehalfOfCompID == tag){return 0;}
	if(OnBehalfOfSubID == tag){return 0;}
	if(OrigSendingTime == tag){return 0;}
	if(PossDupFlag == tag){return 0;}
	if(PossResend == tag){return 0;}
	if(SecureData == tag){return 0;}
	if(SecureDataLen == tag){return 0;}
	if(SegmentID == tag){return 0;}
	if(SenderSubID == tag){return 0;}
	if(SignatureMethod == tag){return 0;}
	if(SysSeqNo == tag){return 0;}
	if(TargetSubID == tag){return 0;}
	if(UserSeqNo == tag){return 0;}
	if(CheckSum == tag){return 0;}
	if(Signature == tag){return 0;}
	if(SignatureLength == tag){return 0;}
	if(BulletinByIndc == tag){return 0;}
	if(BulletinInqID == tag){return 0;}
	if(IssueDate == tag){return 0;}
	if(QueryEndDate == tag){return 0;}
	if(QueryPageNumber == tag){return 0;}
	if(QueryStartDate == tag){return 0;}
	if(SentOrReceived == tag){return 0;}
	if(TransactTime == tag){return 0;}
}
BOOL BulletinInquiry_convert_inner(FIELD_DETAILS *all_field_array, COUNT all_field_array_length, char* object){
	FIELD_DETAILS field_array[256];
	COUNT filed_array_length = 0;
	BOOL returnValue = getNodes(all_field_array, all_field_array_length, &field_array, &filed_array_length, getLevel);
	if(returnValue == FALSE){
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getNodes failed");
		return returnValue;
	}
	for(int i=0;i<filed_array_length;++i){
		FIELD_DETAILS *field_ele = &field_array[i];
		INDC tag = atoi(field_ele->field_name);
		if(tag == BeginString){
			strncpy((BulletinInquiry*)object->BeginString, field_ele->field_value, 511);
		}

		if(tag == BodyLength){
			(BulletinInquiry*)object->BodyLength=atol(field_ele->field_value);
		}

		if(tag == MsgSeqNum){
			(BulletinInquiry*)object->MsgSeqNum=atol(field_ele->field_value);
		}

		if(tag == MsgType){
			strncpy((BulletinInquiry*)object->MsgType, field_ele->field_value, 511);
		}

		if(tag == SenderCompID){
			strncpy((BulletinInquiry*)object->SenderCompID, field_ele->field_value, 511);
		}

		if(tag == SendingTime){
			(BulletinInquiry*)object->SendingTime=atol(field_ele->field_value);
		}

		if(tag == TargetCompID){
			strncpy((BulletinInquiry*)object->TargetCompID, field_ele->field_value, 511);
		}

		if(tag == DeliverToCompID){
			strncpy((BulletinInquiry*)object->DeliverToCompID, field_ele->field_value, 511);
		}

		if(tag == DeliverToSubID){
			strncpy((BulletinInquiry*)object->DeliverToSubID, field_ele->field_value, 511);
		}

		if(tag == ErrorCode){
			strncpy((BulletinInquiry*)object->ErrorCode, field_ele->field_value, 511);
		}

		if(tag == LastMsgSeqNumProcessed){
			(BulletinInquiry*)object->LastMsgSeqNumProcessed=atol(field_ele->field_value);
		}

		if(tag == MessageEncoding){
			strncpy((BulletinInquiry*)object->MessageEncoding, field_ele->field_value, 511);
		}

		if(tag == OnBehalfOfCompID){
			strncpy((BulletinInquiry*)object->OnBehalfOfCompID, field_ele->field_value, 511);
		}

		if(tag == OnBehalfOfSubID){
			strncpy((BulletinInquiry*)object->OnBehalfOfSubID, field_ele->field_value, 511);
		}

		if(tag == OrigSendingTime){
			(BulletinInquiry*)object->OrigSendingTime=atol(field_ele->field_value);
		}

		if(tag == PossDupFlag){
			(BulletinInquiry*)object->PossDupFlag=atol(field_ele->field_value);
		}

		if(tag == PossResend){
			(BulletinInquiry*)object->PossResend=atol(field_ele->field_value);
		}

		if(tag == SecureData){
			strncpy((BulletinInquiry*)object->SecureData, field_ele->field_value, 511);
		}

		if(tag == SecureDataLen){
			(BulletinInquiry*)object->SecureDataLen=atol(field_ele->field_value);
		}

		if(tag == SegmentID){
			(BulletinInquiry*)object->SegmentID=atol(field_ele->field_value);
		}

		if(tag == SenderSubID){
			strncpy((BulletinInquiry*)object->SenderSubID, field_ele->field_value, 511);
		}

		if(tag == SignatureMethod){
			strncpy((BulletinInquiry*)object->SignatureMethod, field_ele->field_value, 511);
		}

		if(tag == SysSeqNo){
			(BulletinInquiry*)object->SysSeqNo=atol(field_ele->field_value);
		}

		if(tag == TargetSubID){
			strncpy((BulletinInquiry*)object->TargetSubID, field_ele->field_value, 511);
		}

		if(tag == UserSeqNo){
			(BulletinInquiry*)object->UserSeqNo=atol(field_ele->field_value);
		}

		if(tag == CheckSum){
			strncpy((BulletinInquiry*)object->CheckSum, field_ele->field_value, 511);
		}

		if(tag == Signature){
			strncpy((BulletinInquiry*)object->Signature, field_ele->field_value, 511);
		}

		if(tag == SignatureLength){
			(BulletinInquiry*)object->SignatureLength=atol(field_ele->field_value);
		}

		if(tag == BulletinByIndc){
			(BulletinInquiry*)object->BulletinByIndc=atol(field_ele->field_value);
		}

		if(tag == BulletinInqID){
			strncpy((BulletinInquiry*)object->BulletinInqID, field_ele->field_value, 511);
		}

		if(tag == IssueDate){
		}

		if(tag == QueryEndDate){
		}

		if(tag == QueryPageNumber){
			(BulletinInquiry*)object->QueryPageNumber=atol(field_ele->field_value);
		}

		if(tag == QueryStartDate){
		}

		if(tag == SentOrReceived){
			(BulletinInquiry*)object->SentOrReceived=atol(field_ele->field_value);
		}

		if(tag == TransactTime){
			(BulletinInquiry*)object->TransactTime=atol(field_ele->field_value);
		}

	}

}
