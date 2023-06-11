namespace offsets
{
	namespace UPrisonerLoadout
	{
			constexpr auto primary = 0x30; // Size: 8, Type: AItem*
			constexpr auto primaryAttachments = 0x38; // Size: 16, Type: struct TArray<AItem*>
			constexpr auto secondary = 0x48; // Size: 8, Type: AItem*
			constexpr auto secondaryAttachments = 0x50; // Size: 16, Type: struct TArray<AItem*>
			constexpr auto tertiary = 0x60; // Size: 8, Type: AItem*
			constexpr auto tertiaryAttachments = 0x68; // Size: 16, Type: struct TArray<AItem*>
			constexpr auto outfit = 0x78; // Size: 16, Type: struct TArray<AItem*>
			constexpr auto support = 0x88; // Size: 16, Type: struct TArray<AItem*>
	}
} 
