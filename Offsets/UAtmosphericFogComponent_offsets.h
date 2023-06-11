namespace offsets
{
	namespace UAtmosphericFogComponent
	{
			constexpr auto SunMultiplier = 0x1f8; // Size: 4, Type: float
			constexpr auto FogMultiplier = 0x1fc; // Size: 4, Type: float
			constexpr auto DensityMultiplier = 0x200; // Size: 4, Type: float
			constexpr auto DensityOffset = 0x204; // Size: 4, Type: float
			constexpr auto DistanceScale = 0x208; // Size: 4, Type: float
			constexpr auto AltitudeScale = 0x20c; // Size: 4, Type: float
			constexpr auto DistanceOffset = 0x210; // Size: 4, Type: float
			constexpr auto GroundOffset = 0x214; // Size: 4, Type: float
			constexpr auto StartDistance = 0x218; // Size: 4, Type: float
			constexpr auto SunDiscScale = 0x21c; // Size: 4, Type: float
			constexpr auto DefaultBrightness = 0x220; // Size: 4, Type: float
			constexpr auto DefaultLightColor = 0x224; // Size: 4, Type: struct FColor
			constexpr auto bDisableSunDisk = 0x228; // Size: 1, Type: char
			constexpr auto bAtmosphereAffectsSunIlluminance = 0x228; // Size: 1, Type: char
			constexpr auto bDisableGroundScattering = 0x228; // Size: 1, Type: char
			constexpr auto PrecomputeParams = 0x22c; // Size: 44, Type: struct FAtmospherePrecomputeParameters
			constexpr auto TransmittanceTexture = 0x258; // Size: 8, Type: struct UTexture2D*
			constexpr auto IrradianceTexture = 0x260; // Size: 8, Type: struct UTexture2D*
	}
} 
