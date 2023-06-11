namespace offsets
{
	namespace UCircularMenuMusicPlayerToggleInfo
	{
			constexpr auto InteractionTargetType = 0x80; // Size: 1, Type: uint8_t 
			constexpr auto PrimaryInteractionInfo = 0x88; // Size: 152, Type: struct FInteractionStruct
			constexpr auto SecondaryInteractionInfo = 0x120; // Size: 152, Type: struct FInteractionStruct
			constexpr auto PrimaryCaption = 0x1b8; // Size: 24, Type: struct FText
			constexpr auto PrimaryIcons = 0x1d0; // Size: 8, Type: struct UCircularMenuSegmentIcons*
			constexpr auto SecondaryCaption = 0x1d8; // Size: 24, Type: struct FText
			constexpr auto SecondaryIcons = 0x1f0; // Size: 8, Type: struct UCircularMenuSegmentIcons*
			constexpr auto IsPrimaryActive = 0x1f8; // Size: 1, Type: bool
			constexpr auto MusicPlayerCommandType = 0x1f9; // Size: 1, Type: uint8_t 
			constexpr auto _interactionInitiator = 0x200; // Size: 8, Type: struct APrisoner*
			constexpr auto _interactableObject = 0x208; // Size: 8, Type: struct UObject*
	}
} 
