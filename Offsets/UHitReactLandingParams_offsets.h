namespace offsets
{
	namespace UHitReactLandingParams
	{
			constexpr auto MontageToPlay = 0x30; // Size: 8, Type: struct UAnimMontage*
			constexpr auto RegainControlDurationMultiplier = 0x38; // Size: 4, Type: float
			constexpr auto RagdollImpactSpeedRange = 0x3c; // Size: 8, Type: struct FFloatInterval
			constexpr auto RagdollDuration = 0x44; // Size: 8, Type: struct FFloatInterval
			constexpr auto LandingDamageCurve = 0x50; // Size: 8, Type: struct UCurveFloat*
			constexpr auto WaterImpactDamageCurve = 0x58; // Size: 8, Type: struct UCurveFloat*
	}
} 
