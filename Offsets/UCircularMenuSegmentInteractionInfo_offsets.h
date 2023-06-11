namespace offsets
{
	namespace UCircularMenuSegmentInteractionInfo
	{
			constexpr auto InteractionTargetType = 0x80; // Size: 1, Type: uint8_t 
			constexpr auto InteractionInfo = 0x88; // Size: 152, Type: struct FInteractionStruct
			constexpr auto RequireSupporterPack = 0x120; // Size: 1, Type: bool
			constexpr auto _interactionInitiator = 0x128; // Size: 8, Type: struct APrisoner*
			constexpr auto _interactableObject = 0x130; // Size: 8, Type: struct UObject*
	}
} 
