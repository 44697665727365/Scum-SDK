namespace offsets
{
	namespace USkyAtmosphereComponent
	{
			constexpr auto TransformMode = 0x1f8; // Size: 1, Type: uint8_t 
			constexpr auto BottomRadius = 0x1fc; // Size: 4, Type: float
			constexpr auto GroundAlbedo = 0x200; // Size: 4, Type: struct FColor
			constexpr auto AtmosphereHeight = 0x204; // Size: 4, Type: float
			constexpr auto MultiScatteringFactor = 0x208; // Size: 4, Type: float
			constexpr auto TraceSampleCountScale = 0x20c; // Size: 4, Type: float
			constexpr auto RayleighScatteringScale = 0x210; // Size: 4, Type: float
			constexpr auto RayleighScattering = 0x214; // Size: 16, Type: struct FLinearColor
			constexpr auto RayleighExponentialDistribution = 0x224; // Size: 4, Type: float
			constexpr auto MieScatteringScale = 0x228; // Size: 4, Type: float
			constexpr auto MieScattering = 0x22c; // Size: 16, Type: struct FLinearColor
			constexpr auto MieAbsorptionScale = 0x23c; // Size: 4, Type: float
			constexpr auto MieAbsorption = 0x240; // Size: 16, Type: struct FLinearColor
			constexpr auto MieAnisotropy = 0x250; // Size: 4, Type: float
			constexpr auto MieExponentialDistribution = 0x254; // Size: 4, Type: float
			constexpr auto OtherAbsorptionScale = 0x258; // Size: 4, Type: float
			constexpr auto OtherAbsorption = 0x25c; // Size: 16, Type: struct FLinearColor
			constexpr auto OtherTentDistribution = 0x26c; // Size: 12, Type: struct FTentDistribution
			constexpr auto SkyLuminanceFactor = 0x278; // Size: 16, Type: struct FLinearColor
			constexpr auto AerialPespectiveViewDistanceScale = 0x288; // Size: 4, Type: float
			constexpr auto HeightFogContribution = 0x28c; // Size: 4, Type: float
			constexpr auto TransmittanceMinLightElevationAngle = 0x290; // Size: 4, Type: float
			constexpr auto AerialPerspectiveStartDepth = 0x294; // Size: 4, Type: float
			constexpr auto bStaticLightingBuiltGUID = 0x2bc; // Size: 16, Type: struct FGuid
	}
} 
