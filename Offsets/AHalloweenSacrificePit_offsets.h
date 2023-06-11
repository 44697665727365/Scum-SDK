namespace offsets
{
	namespace AHalloweenSacrificePit
	{
			constexpr auto _deactivationTime = 0x220; // Size: 8, Type: int64_t
			constexpr auto _sacrificePitCenter = 0x228; // Size: 12, Type: struct FVector
			constexpr auto _sacrificePitRadius = 0x234; // Size: 4, Type: float
			constexpr auto _requiredItemsInSacrificePit = 0x238; // Size: 16, Type: struct TArray<struct FHalloweenSacrificePitRequiredItemVariants>
			constexpr auto _giftSpawningTimeWindowDuration = 0x248; // Size: 4, Type: float
			constexpr auto _giftItem = 0x250; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto _giftItemSpawnTransform = 0x280; // Size: 48, Type: struct FTransform
			constexpr auto _giftItemAlreadySpawnedCheckRadius = 0x2b0; // Size: 4, Type: float
			constexpr auto _giftSpawningPreludeAudioEvent = 0x2b8; // Size: 40, Type: struct TSoftObjectPtr<UAkAudioEvent>
			constexpr auto _giftSpawningPreludeParticleSystem = 0x2e0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto _giftSpawningPreludeParticlesTransform = 0x310; // Size: 48, Type: struct FTransform
			constexpr auto _giftSpawningFinishedAudioEvent = 0x340; // Size: 40, Type: struct TSoftObjectPtr<UAkAudioEvent>
			constexpr auto _giftSpawningFinishedParticleSystem = 0x368; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto _giftSpawningFinishedParticlesTransform = 0x390; // Size: 48, Type: struct FTransform
			constexpr auto _demonicSigilDecal = 0x3c0; // Size: 8, Type: struct ADecalActor*
			constexpr auto _demonicSigilDecalEmissiveColorParameterName = 0x3c8; // Size: 8, Type: struct FName
			constexpr auto _demonicSigilDecalEmissiveColorMultiplierVsTime = 0x3d0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _numZombiesToSpawn = 0x458; // Size: 4, Type: int32_t
			constexpr auto _possibleZombies = 0x460; // Size: 16, Type: struct TArray<struct TSoftClassPtr<UObject>>
			constexpr auto _zombieSpawnTransforms = 0x470; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto _zombieSpawnAreaSlack = 0x480; // Size: 4, Type: float
	}
} 
