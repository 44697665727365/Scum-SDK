namespace offsets
{
	namespace AFishingAttachmentHook
	{
			constexpr auto _visibilityFactor = 0x930; // Size: 4, Type: float
			constexpr auto _maxTension = 0x934; // Size: 4, Type: float
			constexpr auto _hookedWeight = 0x938; // Size: 4, Type: float
			constexpr auto _hookedFishTransform = 0x940; // Size: 48, Type: struct FTransform
			constexpr auto _hookedFishMesh = 0x970; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _hookedFishHookPositionName = 0x978; // Size: 8, Type: struct FName
			constexpr auto _checkIfFishIsHookedRate = 0x980; // Size: 4, Type: float
			constexpr auto _timeToLooseTheFishWhenHookBitten = 0x984; // Size: 4, Type: float
			constexpr auto _movingRippleParticleSystemComponent = 0x988; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _splashParticleSystemComponent = 0x990; // Size: 8, Type: struct UParticleSystemComponent*
	}
} 
