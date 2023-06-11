namespace offsets
{
	namespace UProjectileImpactEffects
	{
			constexpr auto MinDecalSize = 0x30; // Size: 4, Type: float
			constexpr auto MaxDecalSize = 0x34; // Size: 4, Type: float
			constexpr auto MinDecalLifetime = 0x38; // Size: 4, Type: float
			constexpr auto MaxDecalLifetime = 0x3c; // Size: 4, Type: float
			constexpr auto DecalFadeFactor = 0x40; // Size: 4, Type: float
			constexpr auto ParticleEffectsInitialScale = 0x44; // Size: 4, Type: float
			constexpr auto ParticleEffectsScaleDistanceStart = 0x48; // Size: 4, Type: float
			constexpr auto ParticleEffectsScaleDistanceRange = 0x4c; // Size: 4, Type: float
			constexpr auto ParticleEffectsScaleByDistanceFactor = 0x50; // Size: 4, Type: float
			constexpr auto BulletPenetrationExitParticlesDaytime = 0x58; // Size: 8, Type: struct UParticleSystem*
			constexpr auto BulletPenetrationExitParticlesNighttime = 0x60; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DayTimePenetrationDecal = 0x68; // Size: 8, Type: struct UMaterial*
			constexpr auto NightTimePenetrationDecal = 0x70; // Size: 8, Type: struct UMaterial*
			constexpr auto AudioEvent = 0x78; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto Default = 0x80; // Size: 24, Type: struct FImpactEffectData
			constexpr auto grass = 0x98; // Size: 24, Type: struct FImpactEffectData
			constexpr auto ForrestGroundCoastal = 0xb0; // Size: 24, Type: struct FImpactEffectData
			constexpr auto ForrestGroundContinental = 0xc8; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Rock = 0xe0; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Stone = 0xf8; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Gravel = 0x110; // Size: 24, Type: struct FImpactEffectData
			constexpr auto GravelBeach = 0x128; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Pebbles = 0x140; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Snow = 0x158; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Ice = 0x170; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Sand = 0x188; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Asphalt = 0x1a0; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Dirt = 0x1b8; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Water = 0x1d0; // Size: 24, Type: struct FImpactEffectData
			constexpr auto WaterOcean = 0x1e8; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Cloth = 0x200; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Metal = 0x218; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Aluminium = 0x230; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Concrete = 0x248; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Brick = 0x260; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Wood = 0x278; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Plastic = 0x290; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Rubber = 0x2a8; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Glass = 0x2c0; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Folliage = 0x2d8; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Bark = 0x2f0; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Flesh = 0x308; // Size: 24, Type: struct FImpactEffectData
			constexpr auto RoofTile = 0x320; // Size: 24, Type: struct FImpactEffectData
			constexpr auto CeramicsTiles = 0x338; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Scrap = 0x350; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Trunk = 0x368; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Leaves = 0x380; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Cardboard = 0x398; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Plaster = 0x3b0; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Kevlar = 0x3c8; // Size: 24, Type: struct FImpactEffectData
			constexpr auto ForceField = 0x3e0; // Size: 24, Type: struct FImpactEffectData
			constexpr auto NoEffect = 0x3f8; // Size: 24, Type: struct FImpactEffectData
			constexpr auto WhiteGravel = 0x410; // Size: 24, Type: struct FImpactEffectData
			constexpr auto Mud = 0x428; // Size: 24, Type: struct FImpactEffectData
			constexpr auto RiverSand = 0x440; // Size: 24, Type: struct FImpactEffectData
			constexpr auto GrassContinental = 0x458; // Size: 24, Type: struct FImpactEffectData
	}
} 
