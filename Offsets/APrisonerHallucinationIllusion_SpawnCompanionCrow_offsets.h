namespace offsets
{
	namespace APrisonerHallucinationIllusion_SpawnCompanionCrow
	{
			constexpr auto _crowClass = 0x220; // Size: 8, Type: ACompanionCrow*
			constexpr auto _crowAttachSocketName = 0x228; // Size: 8, Type: struct FName
			constexpr auto _attachedCrowRelativeTransform = 0x230; // Size: 48, Type: struct FTransform
			constexpr auto _responseIdleInitialInterval = 0x260; // Size: 8, Type: struct FFloatInterval
			constexpr auto _responseIdleInterval = 0x268; // Size: 8, Type: struct FFloatInterval
			constexpr auto _responseIdleMontages = 0x270; // Size: 16, Type: struct TArray<struct UAnimMontage*>
			constexpr auto _flyoffDirection = 0x280; // Size: 12, Type: struct FVector
			constexpr auto _flyoffSpeedVsTime = 0x290; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _flyoffAudioEvent = 0x318; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _cruisingSpeedVsTime = 0x320; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _cruisingRotationRateVsTime = 0x3a8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _rollVsSteerRate = 0x430; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _landingDuration = 0x4b8; // Size: 4, Type: float
			constexpr auto _landingAudioEvent = 0x4c0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _landedAudioEvent = 0x4c8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _landedMontage = 0x4d0; // Size: 8, Type: struct UAnimMontage*
	}
} 
