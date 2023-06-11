namespace offsets
{
	namespace UPrisonerBodyConditionOrSymptomSideEffect_PeriodicAffect
	{
			constexpr auto _symptomClass = 0x30; // Size: 8, Type: UPrisonerBodySymptom_PeriodicAffect*
			constexpr auto _symptomCause = 0x38; // Size: 8, Type: struct UPrisonerBodySymptomCause_PeriodicAffect*
			constexpr auto _intervalVsSeverity = 0x40; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _chanceVsSeverity = 0xc8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _durationVsConstitution = 0x150; // Size: 8, Type: struct FFloatInterval
			constexpr auto _intensityVsConstitution = 0x158; // Size: 8, Type: struct FFloatInterval
	}
} 
