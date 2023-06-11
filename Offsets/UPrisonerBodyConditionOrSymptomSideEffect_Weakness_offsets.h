namespace offsets
{
	namespace UPrisonerBodyConditionOrSymptomSideEffect_Weakness
	{
			constexpr auto _symptomClass = 0x30; // Size: 8, Type: UPrisonerBodySymptom_Weakness*
			constexpr auto _symptomCause = 0x38; // Size: 8, Type: struct UPrisonerBodySymptomCause_Weakness*
			constexpr auto _performanceScoreModifierVsSeverity = 0x40; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _strengthModifierPerPerformanceScoreModifier = 0xc8; // Size: 4, Type: float
			constexpr auto _constitutionModifierPerPerformanceScoreModifier = 0xcc; // Size: 4, Type: float
			constexpr auto _dexterityModifierPerPerformanceScoreModifier = 0xd0; // Size: 4, Type: float
	}
} 
