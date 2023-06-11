namespace offsets
{
	namespace UEntitySetup
	{
			constexpr auto Transient = 0x40; // Size: 1, Type: bool
			constexpr auto Hidden = 0x41; // Size: 1, Type: bool
			constexpr auto BoundsRadius = 0x44; // Size: 4, Type: float
			constexpr auto Actor = 0x48; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto Components = 0x70; // Size: 16, Type: struct TArray<struct FEntitySetup_Component>
	}
} 
