namespace offsets
{
	namespace UPrisonerBodyCondition_TrenchFoot
	{
			constexpr auto _trenchnessIncreaseRateVsFeetWetness = 0xc0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _trenchnessIncreaseRateMultiplierVsConstitution = 0x148; // Size: 8, Type: struct FFloatInterval
			constexpr auto _trenchnessIncreaseRateMultiplierVsAirTemperature = 0x150; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _trenchnessDecreaseRateMultiplierVsAirTemperature = 0x1d8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _recoveryDurationMultiplierVsAirTemperature = 0x260; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _trenchnessFallRate = 0x2e8; // Size: 4, Type: float
			constexpr auto _severityVsTrenchness = 0x2f0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _trenchness = 0x378; // Size: 4, Type: float
			constexpr auto _trenchnessTreated = 0x37c; // Size: 4, Type: float
			constexpr auto _trenchnessAtRecoveryStart = 0x380; // Size: 4, Type: float
			constexpr auto _stabilizationDurationVsSeverity = 0x388; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _recoveryDurationVsSeverity = 0x410; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _painGruntAudioEvent = 0x498; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _painGruntIntervalVsSeverity = 0x4a0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _painSymptomClass = 0x530; // Size: 8, Type: UPrisonerBodySymptom_Pain*
			constexpr auto _painSymptomCause = 0x538; // Size: 8, Type: struct UPrisonerBodySymptomCause_Pain*
			constexpr auto _painSymptomOverallIntensityVsSeverity = 0x540; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _painSymptomLimpingIntensityVsSeverity = 0x5c8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _painSymptomMaxMovementPaceVsSeverity = 0x650; // Size: 16, Type: struct FPrisonerMaxMovementPaceVsSeverity
			constexpr auto _painSymptomMovementSpeedModifierVsSeverity = 0x660; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _state = 0x6e8; // Size: 1, Type: uint8_t 
			constexpr auto _timerElapsedTime = 0x6f0; // Size: 4, Type: float
			constexpr auto _timerDuration = 0x6f4; // Size: 4, Type: float
	}
} 
