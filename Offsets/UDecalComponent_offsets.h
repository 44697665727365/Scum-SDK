namespace offsets
{
	namespace UDecalComponent
	{
			constexpr auto DecalMaterial = 0x1f8; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto sortOrder = 0x200; // Size: 4, Type: int32_t
			constexpr auto FadeScreenSize = 0x204; // Size: 4, Type: float
			constexpr auto FadeStartDelay = 0x208; // Size: 4, Type: float
			constexpr auto FadeDuration = 0x20c; // Size: 4, Type: float
			constexpr auto FadeInDuration = 0x210; // Size: 4, Type: float
			constexpr auto FadeInStartDelay = 0x214; // Size: 4, Type: float
			constexpr auto bDestroyOwnerAfterFade = 0x218; // Size: 1, Type: char
			constexpr auto DecalSize = 0x21c; // Size: 12, Type: struct FVector
	}
} 
