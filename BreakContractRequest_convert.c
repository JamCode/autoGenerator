struct BreakContractRequest{
	STRING BreakContractRequestID;
	INT BreakContractRequestType;
	STRING ExecID;
	UTCDATEONLY TradeDate;
	UTCTIMEONLY TradeTime;
	UTCTIMESTAMP TransactTime;
	INT NoPartyIDsCount;
	NoPartyIDs NoPartyIDsArray[128];
};
struct NoPartyIDs{
	STRING PartyID;
	CURRENCY AccountCurrency;
	CHAR AccountInfoIDType;
	UTCDATEONLY AccountValidityFrom;
	UTCDATEONLY AccountValidityTo;
	BOOLEAN BranchIndicator;
	AMT CheckAmount;
	STRING CreditRating;
	STRING Industry;
	BOOLEAN IsBank;
	BOOLEAN IsCustody;
	BOOLEAN IsGuarantee;
	BOOLEAN IsIssuer;
	STRING Issuer;
	STRING ParentPartyID;
	INT PartyIDAttr;
	STRING PartyIDSource;
	INT PartyRole;
	INT PartyTransType;
	BOOLEAN PreferIndicator;
	NUMBER SettlRouteSeq;
	INT UserStatus;
	INT NoAccountInfoCount;
	NoAccountInfo NoAccountInfoArray[128];
	INT NoContactInfosCount;
	NoContactInfos NoContactInfosArray[128];
	INT NoPrvlgesCount;
	NoPrvlges NoPrvlgesArray[128];
	INT NoPartySubIDsCount;
	NoPartySubIDs NoPartySubIDsArray[128];
};
struct NoAccountInfo{
	STRING AccountInfoID;
	CHAR AccountInfoIDType;
	CURRENCY Currency;
};
struct NoContactInfos{
	STRING ContactInfoID;
	INT ContactInfoIDType;
};
struct NoPrvlges{
	INT PrvlgeCategory;
	STRING MarketIndicator;
	INT PrvlgeIndicator;
	INT QuoteType;
	CHAR Side;
	INT TradeMethod;
};
struct NoPartySubIDs{
	STRING PartySubID;
	STRING Description;
	INT PartySubIDType;
};
BOOL BreakContractRequest_convert_inner(BUFFER* imix_str, LNGTH inputmsglength, char* object){
	FIELD_DETAILS field_array[256];
	COUNT filed_array_length = 0;
	BOOL returnValue=getNodes(imix_str, inputmsglength, &field_array, &filed_array_length);
	if(returnValue == FALSE){
		ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getNodes failed");
		return returnValue;
	}
	for(int i=0;i<filed_array_length;++i){
		FIELD_DETAILS *field_ele = &field_array[i];
		INDC tag = atoi(field_ele->field_name);
		if(tag == BreakContractRequestID){
			(BreakContractRequest*)object->BreakContractRequestID=field_ele->field_value
		}

		if(tag == BreakContractRequestType){
			(BreakContractRequest*)object->BreakContractRequestType=field_ele->field_value
		}

		if(tag == ExecID){
			(BreakContractRequest*)object->ExecID=field_ele->field_value
		}

		if(tag == TradeDate){
			(BreakContractRequest*)object->TradeDate=field_ele->field_value
		}

		if(tag == TradeTime){
			(BreakContractRequest*)object->TradeTime=field_ele->field_value
		}

		if(tag == TransactTime){
			(BreakContractRequest*)object->TransactTime=field_ele->field_value
		}

		if(tag == NoPartyIDs){
			COUNT repeatLength = atol(field_ele->field_value);
			(BreakContractRequest*)object->NoPartyIDsCount = repeatLength;
			BUFFER imixAllChild[MAX_MSG_LEN + 1];
			returnValue =getChild(imix_str, field_ele, &imixAllChild);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				BUFFER imixChild[MAX_MSG_LEN + 1];
				returnValue =getChildByIndex(imixAllChild, field_ele, j, imixChild);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = BreakContractRequest_convert_inner(imixChild, strlen(imixChild), &object->NoPartyIDsArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "BreakContractRequest_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == PartyID){
			(NoPartyIDs*)object->PartyID=field_ele->field_value
		}

		if(tag == AccountCurrency){
			(NoPartyIDs*)object->AccountCurrency=field_ele->field_value
		}

		if(tag == AccountInfoIDType){
			(NoPartyIDs*)object->AccountInfoIDType=field_ele->field_value
		}

		if(tag == AccountValidityFrom){
			(NoPartyIDs*)object->AccountValidityFrom=field_ele->field_value
		}

		if(tag == AccountValidityTo){
			(NoPartyIDs*)object->AccountValidityTo=field_ele->field_value
		}

		if(tag == BranchIndicator){
			(NoPartyIDs*)object->BranchIndicator=field_ele->field_value
		}

		if(tag == CheckAmount){
			(NoPartyIDs*)object->CheckAmount=field_ele->field_value
		}

		if(tag == CreditRating){
			(NoPartyIDs*)object->CreditRating=field_ele->field_value
		}

		if(tag == Industry){
			(NoPartyIDs*)object->Industry=field_ele->field_value
		}

		if(tag == IsBank){
			(NoPartyIDs*)object->IsBank=field_ele->field_value
		}

		if(tag == IsCustody){
			(NoPartyIDs*)object->IsCustody=field_ele->field_value
		}

		if(tag == IsGuarantee){
			(NoPartyIDs*)object->IsGuarantee=field_ele->field_value
		}

		if(tag == IsIssuer){
			(NoPartyIDs*)object->IsIssuer=field_ele->field_value
		}

		if(tag == Issuer){
			(NoPartyIDs*)object->Issuer=field_ele->field_value
		}

		if(tag == ParentPartyID){
			(NoPartyIDs*)object->ParentPartyID=field_ele->field_value
		}

		if(tag == PartyIDAttr){
			(NoPartyIDs*)object->PartyIDAttr=field_ele->field_value
		}

		if(tag == PartyIDSource){
			(NoPartyIDs*)object->PartyIDSource=field_ele->field_value
		}

		if(tag == PartyRole){
			(NoPartyIDs*)object->PartyRole=field_ele->field_value
		}

		if(tag == PartyTransType){
			(NoPartyIDs*)object->PartyTransType=field_ele->field_value
		}

		if(tag == PreferIndicator){
			(NoPartyIDs*)object->PreferIndicator=field_ele->field_value
		}

		if(tag == SettlRouteSeq){
			(NoPartyIDs*)object->SettlRouteSeq=field_ele->field_value
		}

		if(tag == UserStatus){
			(NoPartyIDs*)object->UserStatus=field_ele->field_value
		}

		if(tag == NoAccountInfo){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoPartyIDs*)object->NoAccountInfoCount = repeatLength;
			BUFFER imixAllChild[MAX_MSG_LEN + 1];
			returnValue =getChild(imix_str, field_ele, &imixAllChild);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				BUFFER imixChild[MAX_MSG_LEN + 1];
				returnValue =getChildByIndex(imixAllChild, field_ele, j, imixChild);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = BreakContractRequest_convert_inner(imixChild, strlen(imixChild), &object->NoAccountInfoArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "BreakContractRequest_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == AccountInfoID){
			(NoAccountInfo*)object->AccountInfoID=field_ele->field_value
		}

		if(tag == AccountInfoIDType){
			(NoAccountInfo*)object->AccountInfoIDType=field_ele->field_value
		}

		if(tag == Currency){
			(NoAccountInfo*)object->Currency=field_ele->field_value
		}

		if(tag == NoContactInfos){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoPartyIDs*)object->NoContactInfosCount = repeatLength;
			BUFFER imixAllChild[MAX_MSG_LEN + 1];
			returnValue =getChild(imix_str, field_ele, &imixAllChild);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				BUFFER imixChild[MAX_MSG_LEN + 1];
				returnValue =getChildByIndex(imixAllChild, field_ele, j, imixChild);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = BreakContractRequest_convert_inner(imixChild, strlen(imixChild), &object->NoContactInfosArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "BreakContractRequest_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == ContactInfoID){
			(NoContactInfos*)object->ContactInfoID=field_ele->field_value
		}

		if(tag == ContactInfoIDType){
			(NoContactInfos*)object->ContactInfoIDType=field_ele->field_value
		}

		if(tag == NoPrvlges){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoPartyIDs*)object->NoPrvlgesCount = repeatLength;
			BUFFER imixAllChild[MAX_MSG_LEN + 1];
			returnValue =getChild(imix_str, field_ele, &imixAllChild);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				BUFFER imixChild[MAX_MSG_LEN + 1];
				returnValue =getChildByIndex(imixAllChild, field_ele, j, imixChild);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = BreakContractRequest_convert_inner(imixChild, strlen(imixChild), &object->NoPrvlgesArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "BreakContractRequest_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == PrvlgeCategory){
			(NoPrvlges*)object->PrvlgeCategory=field_ele->field_value
		}

		if(tag == MarketIndicator){
			(NoPrvlges*)object->MarketIndicator=field_ele->field_value
		}

		if(tag == PrvlgeIndicator){
			(NoPrvlges*)object->PrvlgeIndicator=field_ele->field_value
		}

		if(tag == QuoteType){
			(NoPrvlges*)object->QuoteType=field_ele->field_value
		}

		if(tag == Side){
			(NoPrvlges*)object->Side=field_ele->field_value
		}

		if(tag == TradeMethod){
			(NoPrvlges*)object->TradeMethod=field_ele->field_value
		}

		if(tag == NoPartySubIDs){
			COUNT repeatLength = atol(field_ele->field_value);
			(NoPartyIDs*)object->NoPartySubIDsCount = repeatLength;
			BUFFER imixAllChild[MAX_MSG_LEN + 1];
			returnValue =getChild(imix_str, field_ele, &imixAllChild);
			if(returnValue == FALSE){
				ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChild failed");
				return returnValue;
			}
			for(int j=0;j<repeatLength;++j){
				BUFFER imixChild[MAX_MSG_LEN + 1];
				returnValue =getChildByIndex(imixAllChild, field_ele, j, imixChild);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "getChildByIndex failed");
					return returnValue;
				}
				returnValue = BreakContractRequest_convert_inner(imixChild, strlen(imixChild), &object->NoPartySubIDsArray[j]);
				if(returnValue == FALSE){
					ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "BreakContractRequest_convert_inner failed");
					return returnValue;
				}
			}
		}

		if(tag == PartySubID){
			(NoPartySubIDs*)object->PartySubID=field_ele->field_value
		}

		if(tag == Description){
			(NoPartySubIDs*)object->Description=field_ele->field_value
		}

		if(tag == PartySubIDType){
			(NoPartySubIDs*)object->PartySubIDType=field_ele->field_value
		}

	}

}

BOOL getNodes(BUFFER* imix_str, LNGTH inputmsglength, FIELD_DETAILS *field_array, COUNT *filed_array_length){
	FIELD_DETAILS tempFieldArray[256];
	COUNT tempFieldArrayCount = 0;
	for(int i=0;;++i){
		CHAR* ptrfix_str = NULL;
		CHAR* tagValStr = (CHAR*)strtok_r(imix_str, SOH, &ptrfix_str);
		if(!tagValStr) break;
		if(parseTagValStr(&tempFieldArray[i], tagValStr) != TRUE){
			ProcessEventLog(__FILE__, __LINE__, TRC_DBG, ERR_TRC, Info(0), "parseTagValStr failed");
			return false;
		}
		++tempFieldArrayCount;
	}
	if(tempFieldArrayCount>0){
		INDC level = getLevel(atoi(tempFieldArray[0].field_name));
		*filed_array_length = 0;
		for(int i=0;i<tempFieldArrayCount;++i){
			INDC tempLevel = getLevel(atoi(tempFieldArray[i].field_name));
			if(tempLevel == level){
				field_array[*filed_array_length] = tempFieldArray[i];
				*filed_array_length++;
		}
	}
	return TRUE;
}

BOOL getChildByIndex(BUFFER* all_child_imix_str, FIELD_DETAILS* field_ele, COUNT index, BUFFER* child_imix_str){
}

BOOL getChild(BUFFER* imix_str, FIELD_DETAILS* field_ele, BUFFER* all_child_imix_str){
}

INT getLevel(tag){
	if(BreakContractRequestID == tag){return 0;}
	if(BreakContractRequestType == tag){return 0;}
	if(ExecID == tag){return 0;}
	if(TradeDate == tag){return 0;}
	if(TradeTime == tag){return 0;}
	if(TransactTime == tag){return 0;}
	if(NoPartyIDs == tag){return 0;}
	if(PartyID == tag){return 1;}
	if(AccountCurrency == tag){return 1;}
	if(AccountInfoIDType == tag){return 1;}
	if(AccountValidityFrom == tag){return 1;}
	if(AccountValidityTo == tag){return 1;}
	if(BranchIndicator == tag){return 1;}
	if(CheckAmount == tag){return 1;}
	if(CreditRating == tag){return 1;}
	if(Industry == tag){return 1;}
	if(IsBank == tag){return 1;}
	if(IsCustody == tag){return 1;}
	if(IsGuarantee == tag){return 1;}
	if(IsIssuer == tag){return 1;}
	if(Issuer == tag){return 1;}
	if(ParentPartyID == tag){return 1;}
	if(PartyIDAttr == tag){return 1;}
	if(PartyIDSource == tag){return 1;}
	if(PartyRole == tag){return 1;}
	if(PartyTransType == tag){return 1;}
	if(PreferIndicator == tag){return 1;}
	if(SettlRouteSeq == tag){return 1;}
	if(UserStatus == tag){return 1;}
	if(NoAccountInfo == tag){return 1;}
	if(AccountInfoID == tag){return 2;}
	if(AccountInfoIDType == tag){return 2;}
	if(Currency == tag){return 2;}
	if(NoContactInfos == tag){return 1;}
	if(ContactInfoID == tag){return 2;}
	if(ContactInfoIDType == tag){return 2;}
	if(NoPrvlges == tag){return 1;}
	if(PrvlgeCategory == tag){return 2;}
	if(MarketIndicator == tag){return 2;}
	if(PrvlgeIndicator == tag){return 2;}
	if(QuoteType == tag){return 2;}
	if(Side == tag){return 2;}
	if(TradeMethod == tag){return 2;}
	if(NoPartySubIDs == tag){return 1;}
	if(PartySubID == tag){return 2;}
	if(Description == tag){return 2;}
	if(PartySubIDType == tag){return 2;}
}
