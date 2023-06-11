namespace offsets
{
	namespace UGlobalUIData
	{
			constexpr auto DefaultModularTooltipClass = 0x28; // Size: 8, Type: UModularTooltip*
			constexpr auto ModularTooltipElementClassMapping = 0x30; // Size: 80, Type: struct TMap<UModularTooltipElementData*, UModularTooltipElement*>
			constexpr auto MessageBox = 0x80; // Size: 8, Type: UMessageBox*
			constexpr auto LogoutMessageBox = 0x88; // Size: 8, Type: ULogoutMessageBox*
			constexpr auto MessageBoxWithList = 0x90; // Size: 8, Type: UMessageBoxWithList*
			constexpr auto PartialPriceSellConfirmation = 0x98; // Size: 8, Type: UMessageBox*
			constexpr auto MessageBoxButton = 0xa0; // Size: 8, Type: UUserWidget*
			constexpr auto LabeledSliderWithNumber = 0xa8; // Size: 8, Type: UUserWidget*
			constexpr auto LabeledCarousel = 0xb0; // Size: 8, Type: UUserWidget*
			constexpr auto LabeledDropdown = 0xb8; // Size: 8, Type: UUserWidget*
			constexpr auto LabeledTextBlock = 0xc0; // Size: 8, Type: UUserWidget*
	}
} 
