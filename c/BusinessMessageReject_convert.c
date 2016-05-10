/*5/10/2016, 9:55:43 AM*/
#include <fieldMacroDefine.h>
struct BusinessMessageReject{
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
	INT64 BusinessRejectReason;/* field number 380*/
	CHAR BusinessRejectRefID[512];/* field number 379*/
	CHAR EncodedText[512];/* field number 355*/
	INDC EncodedTextLen;/* field number 354*/
	CHAR RefMsgType[512];/* field number 372*/
	INDC RefSeqNum;/* field number 45*/
	CHAR Text[512];/* field number 58*/
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
	if(BusinessRejectReason == tag){return 0;}
	if(BusinessRejectRefID == tag){return 0;}
	if(EncodedText == tag){return 0;}
	if(EncodedTextLen == tag){return 0;}
	if(RefMsgType == tag){return 0;}
	if(RefSeqNum == tag){return 0;}
	if(Text == tag){return 0;}
	if(TransactTime == tag){return 0;}
}
BOOL BusinessMessageReject_convert_inner(FIELD_DETAILS *all_field_array, COUNT all_field_array_length, char* object){
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
			strncpy((BusinessMessageReject*)object->BeginString, field_ele->field_value, 511);
		}

		if(tag == BodyLength){
			(BusinessMessageReject*)object->BodyLength=atol(field_ele->field_value);
		}

		if(tag == MsgSeqNum){
			(BusinessMessageReject*)object->MsgSeqNum=atol(field_ele->field_value);
		}

		if(tag == MsgType){
			strncpy((BusinessMessageReject*)object->MsgType, field_ele->field_value, 511);
		}

		if(tag == SenderCompID){
			strncpy((BusinessMessageReject*)object->SenderCompID, field_ele->field_value, 511);
		}

		if(tag == SendingTime){
			(BusinessMessageReject*)object->SendingTime=atol(field_ele->field_value);
		}

		if(tag == TargetCompID){
			strncpy((BusinessMessageReject*)object->TargetCompID, field_ele->field_value, 511);
		}

		if(tag == DeliverToCompID){
			strncpy((BusinessMessageReject*)object->DeliverToCompID, field_ele->field_value, 511);
		}

		if(tag == DeliverToSubID){
			strncpy((BusinessMessageReject*)object->DeliverToSubID, field_ele->field_value, 511);
		}

		if(tag == ErrorCode){
			strncpy((BusinessMessageReject*)object->ErrorCode, field_ele->field_value, 511);
		}

		if(tag == LastMsgSeqNumProcessed){
			(BusinessMessageReject*)object->LastMsgSeqNumProcessed=atol(field_ele->field_value);
		}

		if(tag == MessageEncoding){
			strncpy((BusinessMessageReject*)object->MessageEncoding, field_ele->field_value, 511);
		}

		if(tag == OnBehalfOfCompID){
			strncpy((BusinessMessageReject*)object->OnBehalfOfCompID, field_ele->field_value, 511);
		}

		if(tag == OnBehalfOfSubID){
			strncpy((BusinessMessageReject*)object->OnBehalfOfSubID, field_ele->field_value, 511);
		}

		if(tag == OrigSendingTime){
			(BusinessMessageReject*)object->OrigSendingTime=atol(field_ele->field_value);
		}

		if(tag == PossDupFlag){
			(BusinessMessageReject*)object->PossDupFlag=atol(field_ele->field_value);
		}

		if(tag == PossResend){
			(BusinessMessageReject*)object->PossResend=atol(field_ele->field_value);
		}

		if(tag == SecureData){
			strncpy((BusinessMessageReject*)object->SecureData, field_ele->field_value, 511);
		}

		if(tag == SecureDataLen){
			(BusinessMessageReject*)object->SecureDataLen=atol(field_ele->field_value);
		}

		if(tag == SegmentID){
			(BusinessMessageReject*)object->SegmentID=atol(field_ele->field_value);
		}

		if(tag == SenderSubID){
			strncpy((BusinessMessageReject*)object->SenderSubID, field_ele->field_value, 511);
		}

		if(tag == SignatureMethod){
			strncpy((BusinessMessageReject*)object->SignatureMethod, field_ele->field_value, 511);
		}

		if(tag == SysSeqNo){
			(BusinessMessageReject*)object->SysSeqNo=atol(field_ele->field_value);
		}

		if(tag == TargetSubID){
			strncpy((BusinessMessageReject*)object->TargetSubID, field_ele->field_value, 511);
		}

		if(tag == UserSeqNo){
			(BusinessMessageReject*)object->UserSeqNo=atol(field_ele->field_value);
		}

		if(tag == CheckSum){
			strncpy((BusinessMessageReject*)object->CheckSum, field_ele->field_value, 511);
		}

		if(tag == Signature){
			strncpy((BusinessMessageReject*)object->Signature, field_ele->field_value, 511);
		}

		if(tag == SignatureLength){
			(BusinessMessageReject*)object->SignatureLength=atol(field_ele->field_value);
		}

		if(tag == BusinessRejectReason){
			(BusinessMessageReject*)object->BusinessRejectReason=atol(field_ele->field_value);
		}

		if(tag == BusinessRejectRefID){
			strncpy((BusinessMessageReject*)object->BusinessRejectRefID, field_ele->field_value, 511);
		}

		if(tag == EncodedText){
			strncpy((BusinessMessageReject*)object->EncodedText, field_ele->field_value, 511);
		}

		if(tag == EncodedTextLen){
			(BusinessMessageReject*)object->EncodedTextLen=atol(field_ele->field_value);
		}

		if(tag == RefMsgType){
			strncpy((BusinessMessageReject*)object->RefMsgType, field_ele->field_value, 511);
		}

		if(tag == RefSeqNum){
			(BusinessMessageReject*)object->RefSeqNum=atol(field_ele->field_value);
		}

		if(tag == Text){
			strncpy((BusinessMessageReject*)object->Text, field_ele->field_value, 511);
		}

		if(tag == TransactTime){
			(BusinessMessageReject*)object->TransactTime=atol(field_ele->field_value);
		}

	}

}
