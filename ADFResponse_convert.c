#include <fieldMacroDefine.h>
struct ADFResponse{
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
	CHAR ExecID[512];/* field number 17*/
	INT64 TransactTime;/* field number 60*/
	INT NoLiquidProviderCount;
	NoLiquidProvider NoLiquidProviderArray[128];
};
struct NoLiquidProvider{
	CHAR LiquidProviderType[512];/* field number 10360*/
	CHAR LiquidProvider[512];/* field number 10359*/
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
	if(ExecID == tag){return 0;}
	if(TransactTime == tag){return 0;}
	if(NoLiquidProvider == tag){return 0;}
	if(LiquidProviderType == tag){return 1;}
	if(LiquidProvider == tag){return 1;}
}
BOOL ADFResponse_convert_inner(FIELD_DETAILS *all_field_array, COUNT all_field_array_length, char* object){
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
			(ADFResponse*)object->BeginString=field_ele->field_value;
		}

		if(tag == BodyLength){
			(ADFResponse*)object->BodyLength=field_ele->field_value;
		}

		if(tag == MsgSeqNum){
			(ADFResponse*)object->MsgSeqNum=field_ele->field_value;
		}

		if(tag == MsgType){
			(ADFResponse*)object->MsgType=field_ele->field_value;
		}

		if(tag == SenderCompID){
			(ADFResponse*)object->SenderCompID=field_ele->field_value;
		}

		if(tag == SendingTime){
			(ADFResponse*)object->SendingTime=field_ele->field_value;
		}

		if(tag == TargetCompID){
			(ADFResponse*)object->TargetCompID=field_ele->field_value;
		}

		if(tag == DeliverToCompID){
			(ADFResponse*)object->DeliverToCompID=field_ele->field_value;
		}

		if(tag == DeliverToSubID){
			(ADFResponse*)object->DeliverToSubID=field_ele->field_value;
		}

		if(tag == ErrorCode){
			(ADFResponse*)object->ErrorCode=field_ele->field_value;
		}

		if(tag == LastMsgSeqNumProcessed){
			(ADFResponse*)object->LastMsgSeqNumProcessed=field_ele->field_value;
		}

		if(tag == MessageEncoding){
			(ADFResponse*)object->MessageEncoding=field_ele->field_value;
		}

		if(tag == OnBehalfOfCompID){
			(ADFResponse*)object->OnBehalfOfCompID=field_ele->field_value;
		}

		if(tag == OnBehalfOfSubID){
			(ADFResponse*)object->OnBehalfOfSubID=field_ele->field_value;
		}

		if(tag == OrigSendingTime){
			(ADFResponse*)object->OrigSendingTime=field_ele->field_value;
		}

		if(tag == PossDupFlag){
			(ADFResponse*)object->PossDupFlag=field_ele->field_value;
		}

		if(tag == PossResend){
			(ADFResponse*)object->PossResend=field_ele->field_value;
		}

		if(tag == SecureData){
			(ADFResponse*)object->SecureData=field_ele->field_value;
		}

		if(tag == SecureDataLen){
			(ADFResponse*)object->SecureDataLen=field_ele->field_value;
		}

		if(tag == SegmentID){
			(ADFResponse*)object->SegmentID=field_ele->field_value;
		}

		if(tag == SenderSubID){
			(ADFResponse*)object->SenderSubID=field_ele->field_value;
		}

		if(tag == SignatureMethod){
			(ADFResponse*)object->SignatureMethod=field_ele->field_value;
		}

		if(tag == SysSeqNo){
			(ADFResponse*)object->SysSeqNo=field_ele->field_value;
		}

		if(tag == TargetSubID){
			(ADFResponse*)object->TargetSubID=field_ele->field_value;
		}

		if(tag == UserSeqNo){
			(ADFResponse*)object->UserSeqNo=field_ele->field_value;
		}

		if(tag == CheckSum){
			(ADFResponse*)object->CheckSum=field_ele->field_value;
		}

		if(tag == Signature){
			(ADFResponse*)object->Signature=field_ele->field_value;
		}

		if(tag == SignatureLength){
			(ADFResponse*)object->SignatureLength=field_ele->field_value;
		}

		if(tag == ExecID){
			(ADFResponse*)object->ExecID=field_ele->field_value;
		}

		if(tag == TransactTime){
			(ADFResponse*)object->TransactTime=field_ele->field_value;
		}

		if(tag == NoLiquidProvider){
			COUNT repeatLength = atol(field_ele->field_value);
			(ADFResponse*)object->NoLiquidProviderCount = repeatLength;
			FIELD_DETAILS all_child_field_array[256];
			COUNT all_child_field_array_length;
			returnValue = getChild(all_field_array, all_field_array_length, field_ele, all_child_field_array, &all_child_field_array_length, getLevel);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				FIELD_DETAILS child_field_array[256];
				COUNT child_field_array_length;
				returnValue = getChildByIndex(all_child_field_array, all_child_field_array_length, j, child_field_array, &child_field_array_length, getLevel);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = ADFResponse_convert_inner(child_field_array, child_field_array_length, &object->NoLiquidProviderArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "ADFResponse_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == LiquidProviderType){
			(NoLiquidProvider*)object->LiquidProviderType=field_ele->field_value;
		}

		if(tag == LiquidProvider){
			(NoLiquidProvider*)object->LiquidProvider=field_ele->field_value;
		}

	}

}
