namespace offsets
{
	namespace UBankATMMoneyTransfer
	{
			constexpr auto _btnEjectCard = 0x2a0; // Size: 8, Type: struct UButton*
			constexpr auto _buttonSwitcher = 0x2a8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto _btnReturn = 0x2b0; // Size: 8, Type: struct UBankATMPointingButton*
			constexpr auto _btnSubmit = 0x2b8; // Size: 8, Type: struct UBankATMPointingButton*
			constexpr auto _btnNo = 0x2c0; // Size: 8, Type: struct UBankATMPointingButton*
			constexpr auto _btnYes = 0x2c8; // Size: 8, Type: struct UBankATMPointingButton*
			constexpr auto _subsectionSwitcher = 0x2d0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto _editAccountNumber = 0x2d8; // Size: 8, Type: struct UBankATMVirtualEditbox*
			constexpr auto _editTransferAmount = 0x2e0; // Size: 8, Type: struct UBankATMVirtualEditbox*
			constexpr auto _editDepositAmount = 0x2e8; // Size: 8, Type: struct UBankATMVirtualEditbox*
			constexpr auto _editWithdrawAmount = 0x2f0; // Size: 8, Type: struct UBankATMVirtualEditbox*
			constexpr auto _questionLabel = 0x2f8; // Size: 8, Type: struct UTextBlock*
			constexpr auto _errorLabel = 0x300; // Size: 8, Type: struct UTextBlock*
			constexpr auto _commissionPercentageTextBlock = 0x308; // Size: 8, Type: struct UTextBlock*
			constexpr auto _inventoryBalanceTextBlock = 0x310; // Size: 8, Type: struct UTextBlock*
			constexpr auto _soundSuccess = 0x318; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _errorSuccess = 0x320; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
