namespace offsets
{
	namespace UItemSelection
	{
			constexpr auto MainItem = 0x30; // Size: 8, Type: AItem*
			constexpr auto SupportItems = 0x38; // Size: 16, Type: struct TArray<AItem*>
			constexpr auto Attachments = 0x48; // Size: 16, Type: struct TArray<AItem*>
			constexpr auto UnselectedIcon = 0x58; // Size: 8, Type: struct UTexture2D*
			constexpr auto SelectedIcon = 0x60; // Size: 8, Type: struct UTexture2D*
			constexpr auto DisabledIcon = 0x68; // Size: 8, Type: struct UTexture2D*
			constexpr auto SelectionName = 0x70; // Size: 24, Type: struct FText
			constexpr auto SizeX = 0x88; // Size: 4, Type: float
			constexpr auto SizeY = 0x8c; // Size: 4, Type: float
			constexpr auto TeamIndex = 0x90; // Size: 4, Type: int32_t
	}
} 
