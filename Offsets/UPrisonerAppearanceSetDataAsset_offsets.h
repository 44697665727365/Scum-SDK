namespace offsets
{
	namespace UPrisonerAppearanceSetDataAsset
	{
			constexpr auto BreastSizeMin = 0x30; // Size: 4, Type: float
			constexpr auto BreastSizeMax = 0x34; // Size: 4, Type: float
			constexpr auto BreastSizeMaxInCharacterCreation = 0x38; // Size: 4, Type: float
			constexpr auto BreastSizeDeluxeModifier = 0x3c; // Size: 4, Type: float
			constexpr auto PenisSizeMin = 0x40; // Size: 4, Type: float
			constexpr auto PenisSizeMax = 0x44; // Size: 4, Type: float
			constexpr auto PenisSizeMaxInCharacterCreation = 0x48; // Size: 4, Type: float
			constexpr auto PenisSizeDeluxeModifier = 0x4c; // Size: 4, Type: float
			constexpr auto _femaleAppearanceData = 0x50; // Size: 16, Type: struct TArray<struct UPrisonerAppearanceDataAsset*>
			constexpr auto _maleAppearanceData = 0x60; // Size: 16, Type: struct TArray<struct UPrisonerAppearanceDataAsset*>
			constexpr auto _maleHairStyles = 0x70; // Size: 16, Type: struct TArray<struct FPrisonerAppearance_HairStyle>
			constexpr auto _maleFacialHairStyles = 0x80; // Size: 16, Type: struct TArray<struct FPrisonerAppearance_HairStyle>
			constexpr auto _femaleHairStyles = 0x90; // Size: 16, Type: struct TArray<struct FPrisonerAppearance_HairStyle>
			constexpr auto _dyedHairColors = 0xa0; // Size: 16, Type: struct TArray<struct FPrisonerAppearance_HairColorPreset>
			constexpr auto _tattooArrays = 0xb0; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FPrisonerAppearance_TattooArray>
			constexpr auto _skinParams = 0x100; // Size: 80, Type: struct TMap<struct FGameplayTag, struct FPrisonerAppearance_SkinParams>
			constexpr auto _irisColors = 0x150; // Size: 16, Type: struct TArray<struct FPrisonerAppearance_IrisColor>
			constexpr auto _irisVariations = 0x160; // Size: 16, Type: struct TArray<struct FPrisonerAppearance_IrisVariation>
	}
} 
