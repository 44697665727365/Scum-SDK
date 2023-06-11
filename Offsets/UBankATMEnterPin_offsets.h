namespace offsets
{
	namespace UBankATMEnterPin
	{
			constexpr auto _pinEnteringSwitcher = 0x280; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto _enterPinTitleMessage = 0x288; // Size: 8, Type: struct UTextBlock*
			constexpr auto _pinSlotsPanel = 0x290; // Size: 8, Type: struct UPanelWidget*
			constexpr auto _pinSlotClass = 0x298; // Size: 8, Type: UBankATMPinSlot*
			constexpr auto _incorrectPinWarning = 0x2a0; // Size: 8, Type: struct UPanelWidget*
			constexpr auto _remainingAttemptsLabel = 0x2a8; // Size: 8, Type: struct UTextBlock*
			constexpr auto _btnReturn = 0x2b0; // Size: 8, Type: struct UBankATMPointingButton*
			constexpr auto _btnSubmit = 0x2b8; // Size: 8, Type: struct UBankATMPointingButton*
	}
} 
