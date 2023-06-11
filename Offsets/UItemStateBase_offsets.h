namespace offsets
{
	namespace UItemStateBase
	{
			constexpr auto ItemClass = 0x28; // Size: 8, Type: UObject*
			constexpr auto ID = 0x30; // Size: 8, Type: struct FEntityId
			constexpr auto Transform = 0x40; // Size: 48, Type: struct FTransform
			constexpr auto Components = 0x70; // Size: 16, Type: struct TArray<struct UItemComponentStateBase*>
	}
} 
