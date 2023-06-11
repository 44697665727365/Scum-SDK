namespace offsets
{
	namespace UPrisonerBodyCondition_Abrasions
	{
			constexpr auto _baseAbrasionsRaiseRateVsConstitution = 0xc8; // Size: 8, Type: struct FFloatInterval
			constexpr auto _abrasionsWeightFactor = 0xd0; // Size: 4, Type: float
			constexpr auto _abrasionsFallRate = 0xd4; // Size: 4, Type: float
			constexpr auto _severityVsAbrasions = 0xd8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _abrasions = 0x160; // Size: 4, Type: float
			constexpr auto _abrasionsAtRecoveryStart = 0x164; // Size: 4, Type: float
			constexpr auto _bandagesProtection = 0x168; // Size: 4, Type: float
			constexpr auto _bandages = 0x170; // Size: 24, Type: struct FBandages
			constexpr auto _bandagesProtectionDecreaseNotification = 0x188; // Size: 8, Type: UNotificationDescription*
			constexpr auto _bandagesProtectionDecreaseNotificationCooldown = 0x190; // Size: 4, Type: float
			constexpr auto _stabilizationDurationVsSeverity = 0x198; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _stabilizationDurationReductionFromPhysician = 0x220; // Size: 4, Type: float
			constexpr auto _recoveryDurationVsSeverity = 0x228; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _bleedingSeverityVsSeverity = 0x2b0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _bleedingSymptomClass = 0x338; // Size: 8, Type: UPrisonerBodySymptom_Bleeding*
			constexpr auto _bleedingSymptomCause = 0x340; // Size: 8, Type: struct UPrisonerBodySymptomCause_Bleeding*
			constexpr auto _bloodLoss = 0x348; // Size: 4, Type: float
			constexpr auto _bloodLossToRecover = 0x34c; // Size: 4, Type: float
			constexpr auto _painGruntAudioEvent = 0x350; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _painGruntIntervalVsSeverity = 0x358; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _painSymptomClass = 0x3e8; // Size: 8, Type: UPrisonerBodySymptom_Pain*
			constexpr auto _painSymptomCause = 0x3f0; // Size: 8, Type: struct UPrisonerBodySymptomCause_Pain*
			constexpr auto _painSymptomOverallIntensityVsSeverity = 0x3f8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _painSymptomLimpingIntensityVsSeverity = 0x480; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _painSymptomMaxMovementPaceVsSeverity = 0x508; // Size: 16, Type: struct FPrisonerMaxMovementPaceVsSeverity
			constexpr auto _painSymptomMovementSpeedModifierVsSeverity = 0x518; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _state = 0x5a0; // Size: 1, Type: uint8_t 
			constexpr auto _timerElapsedTime = 0x5a8; // Size: 4, Type: float
			constexpr auto _timerDuration = 0x5ac; // Size: 4, Type: float
			constexpr auto _disinfectantAmount = 0x5b0; // Size: 4, Type: float
			constexpr auto _infectionClass = 0x5b8; // Size: 8, Type: UPrisonerBodyCondition_Infection*
			constexpr auto _infection = 0x5c0; // Size: 8, Type: struct UPrisonerBodyCondition_Infection*
			constexpr auto _contaminationIncreaseBaseRate = 0x5c8; // Size: 4, Type: float
			constexpr auto _contaminationIncreaseRateMultiplierVsSeverity = 0x5d0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _contaminationIncreaseRateMultiplierVsAsepsis = 0x658; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _disinfectantContaminationDecreaseRate = 0x6e0; // Size: 4, Type: float
			constexpr auto _disinfectantEvaporationRate = 0x6e4; // Size: 4, Type: float
	}
} 
