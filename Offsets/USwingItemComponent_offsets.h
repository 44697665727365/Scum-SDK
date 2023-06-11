namespace offsets
{
	namespace USwingItemComponent
	{
			constexpr auto _swingSpeedLevelVsInputSpeed = 0xe0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _prisonerActionDifficultyVsSwingSpeedLevel = 0x168; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _maxAllowedPrisonerMovementPaceWhenInHands = 0x1f0; // Size: 1, Type: uint8_t 
			constexpr auto _shouldCoolDownPrisonerWhileSwinging = 0x1f1; // Size: 1, Type: bool
			constexpr auto _bodyTemperatureCoolingRatesVsSwingSpeedLevel = 0x1f8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _itemSwingAnimMontage = 0x280; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _prisonerSwingAnimMontage = 0x288; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _prisonerSwingAnimMontageStartSectionName = 0x290; // Size: 8, Type: struct FName
			constexpr auto _prisonerSwingAnimMontageLoopSectionName = 0x298; // Size: 8, Type: struct FName
			constexpr auto _prisonerSwingAnimMontageEndSectionName = 0x2a0; // Size: 8, Type: struct FName
			constexpr auto _prisonerSwingAnimMontageInterpolationSpeed = 0x2a8; // Size: 4, Type: float
			constexpr auto _animMontagePlayRateVsSwingSpeedLevel = 0x2b0; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
