namespace offsets
{
	namespace AFishingAttachmentFloater
	{
			constexpr auto _floatingComponent = 0x930; // Size: 8, Type: struct UConZBuoyancyComponent*
			constexpr auto _floaterBreakSegmentIndex = 0x938; // Size: 4, Type: int32_t
			constexpr auto _sinkSpeed = 0x93c; // Size: 4, Type: float
			constexpr auto _sinkSpeedDuringFastReel = 0x940; // Size: 4, Type: float
			constexpr auto _minDistanceForSizeIncrease = 0x944; // Size: 4, Type: float
			constexpr auto _maxDistanceForSizeIncrease = 0x948; // Size: 4, Type: float
			constexpr auto _maxScale = 0x94c; // Size: 4, Type: float
			constexpr auto _velocityThreshold = 0x950; // Size: 4, Type: float
			constexpr auto _shouldCheckVelocityThreshold = 0x954; // Size: 4, Type: float
			constexpr auto _movingRippleThreshold = 0x958; // Size: 4, Type: float
			constexpr auto _floaterWaterCheckOffset = 0x95c; // Size: 12, Type: struct FVector
			constexpr auto _sendStateInterval = 0x968; // Size: 4, Type: float
			constexpr auto _hitWaterParticles = 0x9e0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _rippleParticleSystemComponent = 0x9e8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _movingRippleParticleSystemComponent = 0x9f0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _sinkParticleSystemComponent = 0x9f8; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _scaledMaterial = 0xa00; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _storedMaterial = 0xa08; // Size: 8, Type: struct UMaterialInterface*
	}
} 
