namespace offsets
{
	namespace UPrisonerBodyCondition_BleedingInjury
	{
			constexpr auto _selfStabilizationDurationVsSeverity = 0xc8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _stabilizationDurationVsBloodLossRatio = 0x150; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _destabilizationActionDifficultyRatioVsSeverity = 0x1d8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _destabilizationNotification = 0x260; // Size: 8, Type: UNotificationDescription*
			constexpr auto _destabilizationNotificationCooldown = 0x268; // Size: 4, Type: float
			constexpr auto _recoveryDurationVsBloodLossRatio = 0x270; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _bleedingSymptomClass = 0x2f8; // Size: 8, Type: UPrisonerBodySymptom_Bleeding*
			constexpr auto _bleedingSymptomCause = 0x300; // Size: 8, Type: struct UPrisonerBodySymptomCause_Bleeding*
			constexpr auto _painSymptomClass = 0x308; // Size: 8, Type: UPrisonerBodySymptom_Pain*
			constexpr auto _painSymptomCause = 0x310; // Size: 8, Type: struct UPrisonerBodySymptomCause_Pain*
			constexpr auto _painIntensityVsSeverity = 0x318; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _limpingIntensityPerLegsDamageRatio = 0x3a0; // Size: 4, Type: float
			constexpr auto _legsBleedingSeverityThresholdToLimp = 0x3a4; // Size: 4, Type: float
			constexpr auto _infectionClassMappings = 0x3a8; // Size: 8, Type: struct UPrisonerBodyMuscleGroupToInfectionClassMappings*
			constexpr auto _infection = 0x3b0; // Size: 8, Type: struct UPrisonerBodyCondition_Infection*
			constexpr auto _contaminationIncreaseBaseRate = 0x3b8; // Size: 4, Type: float
			constexpr auto _contaminationIncreaseRateMultiplierVsSeverity = 0x3c0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _contaminationIncreaseRateMultiplierVsAsepsis = 0x448; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _disinfectantContaminationDecreaseRate = 0x4d0; // Size: 4, Type: float
			constexpr auto _disinfectantEvaporationRate = 0x4d4; // Size: 4, Type: float
			constexpr auto _muscleGroup = 0x4d8; // Size: 1, Type: uint8_t 
			constexpr auto _damage = 0x4dc; // Size: 4, Type: float
			constexpr auto _damageAtRecoveryStart = 0x4e0; // Size: 4, Type: float
			constexpr auto _bloodLoss = 0x4e4; // Size: 4, Type: float
			constexpr auto _bloodLossAtRecoveryStart = 0x4e8; // Size: 4, Type: float
			constexpr auto _bloodLossRate = 0x4ec; // Size: 4, Type: float
			constexpr auto _bloodLossRateAtRecoveryStart = 0x4f0; // Size: 4, Type: float
			constexpr auto _selfStabilizationBleedingSuppression = 0x4f4; // Size: 4, Type: float
			constexpr auto _stabilizationDurationReductionFromPhysician = 0x4f8; // Size: 4, Type: float
			constexpr auto _bandages = 0x500; // Size: 24, Type: struct FBandages
			constexpr auto _disinfectantAmount = 0x518; // Size: 4, Type: float
			constexpr auto _state = 0x51c; // Size: 1, Type: uint8_t 
			constexpr auto _timerElapsedTime = 0x528; // Size: 4, Type: float
			constexpr auto _timerDuration = 0x52c; // Size: 4, Type: float
	}
} 
