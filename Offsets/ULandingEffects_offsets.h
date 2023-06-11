namespace offsets
{
	namespace ULandingEffects
	{
			constexpr auto MinImpactSpeedForLightEffects = 0x30; // Size: 4, Type: float
			constexpr auto MinImpactSpeedForMediumEffects = 0x34; // Size: 4, Type: float
			constexpr auto MinImpactSpeedForHeavyEffects = 0x38; // Size: 4, Type: float
			constexpr auto ImpactAudioEvent = 0x40; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto Default = 0x48; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto grass = 0x78; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto ForrestGroundCoastal = 0xa8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto ForrestGroundContinental = 0xd8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Rock = 0x108; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Stone = 0x138; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Gravel = 0x168; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto GravelBeach = 0x198; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Pebbles = 0x1c8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Snow = 0x1f8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Ice = 0x228; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Sand = 0x258; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Asphalt = 0x288; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Dirt = 0x2b8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Water = 0x2e8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto WaterOcean = 0x318; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Cloth = 0x348; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Metal = 0x378; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Aluminium = 0x3a8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Concrete = 0x3d8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Brick = 0x408; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Wood = 0x438; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Plastic = 0x468; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Rubber = 0x498; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Glass = 0x4c8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Folliage = 0x4f8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Bark = 0x528; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Flesh = 0x558; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto RoofTile = 0x588; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto CeramicsTiles = 0x5b8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Scrap = 0x5e8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Trunk = 0x618; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Leaves = 0x648; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Plaster = 0x678; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Kevlar = 0x6a8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto ForceField = 0x6d8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto NoEffect = 0x708; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto WhiteGravel = 0x738; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto Mud = 0x768; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto RiverSand = 0x798; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
			constexpr auto GrassContinental = 0x7c8; // Size: 48, Type: struct FLandingEffectDataPerPhysicalSurface
	}
} 
