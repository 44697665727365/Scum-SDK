namespace offsets
{
	namespace UGameResourceItemTag
	{
			constexpr auto ResourceType = 0x30; // Size: 8, Type: UGameResourceType*
			constexpr auto SocketTypes = 0x38; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto ResourceAmountPerUse = 0x58; // Size: 4, Type: float
			constexpr auto RequiredItemTagsForFueling = 0x60; // Size: 16, Type: struct TArray<struct UBaseItemTag*>
	}
} 
