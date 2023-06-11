namespace offsets
{
	namespace UExponentialHeightFogComponent
	{
			constexpr auto FogDensity = 0x1f8; // Size: 4, Type: float
			constexpr auto FogHeightFalloff = 0x1fc; // Size: 4, Type: float
			constexpr auto SecondFogData = 0x200; // Size: 12, Type: struct FExponentialHeightFogData
			constexpr auto FogInscatteringColor = 0x20c; // Size: 16, Type: struct FLinearColor
			constexpr auto InscatteringColorCubemap = 0x220; // Size: 8, Type: struct UTextureCube*
			constexpr auto InscatteringColorCubemapAngle = 0x228; // Size: 4, Type: float
			constexpr auto InscatteringTextureTint = 0x22c; // Size: 16, Type: struct FLinearColor
			constexpr auto FullyDirectionalInscatteringColorDistance = 0x23c; // Size: 4, Type: float
			constexpr auto NonDirectionalInscatteringColorDistance = 0x240; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringExponent = 0x244; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringStartDistance = 0x248; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringColor = 0x24c; // Size: 16, Type: struct FLinearColor
			constexpr auto FogMaxOpacity = 0x25c; // Size: 4, Type: float
			constexpr auto StartDistance = 0x260; // Size: 4, Type: float
			constexpr auto FogCutoffDistance = 0x264; // Size: 4, Type: float
			constexpr auto bEnableVolumetricFog = 0x268; // Size: 1, Type: bool
			constexpr auto VolumetricFogScatteringDistribution = 0x26c; // Size: 4, Type: float
			constexpr auto VolumetricFogAlbedo = 0x270; // Size: 4, Type: struct FColor
			constexpr auto VolumetricFogEmissive = 0x274; // Size: 16, Type: struct FLinearColor
			constexpr auto VolumetricFogExtinctionScale = 0x284; // Size: 4, Type: float
			constexpr auto VolumetricFogDistance = 0x288; // Size: 4, Type: float
			constexpr auto VolumetricFogStaticLightingScatteringIntensity = 0x28c; // Size: 4, Type: float
			constexpr auto bOverrideLightColorsWithFogInscatteringColors = 0x290; // Size: 1, Type: bool
	}
} 
