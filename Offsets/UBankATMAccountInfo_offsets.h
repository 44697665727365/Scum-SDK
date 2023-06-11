namespace offsets
{
	namespace UBankATMAccountInfo
	{
			constexpr auto _accountNumber = 0x278; // Size: 8, Type: struct UTextBlock*
			constexpr auto _accountName = 0x280; // Size: 8, Type: struct UTextBlock*
			constexpr auto _cardType = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto _renewalAmount = 0x290; // Size: 8, Type: struct UTextBlock*
			constexpr auto _goldAmountHorizontalBox = 0x298; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto _goldAmount = 0x2a0; // Size: 8, Type: struct UTextBlock*
			constexpr auto _btnReturn = 0x2a8; // Size: 8, Type: struct UBankATMPointingButton*
			constexpr auto _cardTypeFontColor = 0x2b0; // Size: 80, Type: struct TMap<uint8_t , struct FSlateColor>
	}
} 
