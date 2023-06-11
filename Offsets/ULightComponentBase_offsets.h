namespace offsets
{
	namespace ULightComponentBase
	{
			constexpr auto LightGuid = 0x1f8; // Size: 16, Type: struct FGuid
			constexpr auto Brightness = 0x208; // Size: 4, Type: float
			constexpr auto Intensity = 0x20c; // Size: 4, Type: float
			constexpr auto LightColor = 0x210; // Size: 4, Type: struct FColor
			constexpr auto bAffectsWorld = 0x214; // Size: 1, Type: char
			constexpr auto CastShadows = 0x214; // Size: 1, Type: char
			constexpr auto CastStaticShadows = 0x214; // Size: 1, Type: char
			constexpr auto CastDynamicShadows = 0x214; // Size: 1, Type: char
			constexpr auto bAffectTranslucentLighting = 0x214; // Size: 1, Type: char
			constexpr auto bTransmission = 0x214; // Size: 1, Type: char
			constexpr auto bCastVolumetricShadow = 0x214; // Size: 1, Type: char
			constexpr auto bCastDeepShadow = 0x214; // Size: 1, Type: char
			constexpr auto bCastRaytracedShadow = 0x215; // Size: 1, Type: char
			constexpr auto bAffectReflection = 0x215; // Size: 1, Type: char
			constexpr auto bAffectGlobalIllumination = 0x215; // Size: 1, Type: char
			constexpr auto DeepShadowLayerDistribution = 0x218; // Size: 4, Type: float
			constexpr auto IndirectLightingIntensity = 0x21c; // Size: 4, Type: float
			constexpr auto VolumetricScatteringIntensity = 0x220; // Size: 4, Type: float
			constexpr auto SamplesPerPixel = 0x224; // Size: 4, Type: int32_t
	}
} 
