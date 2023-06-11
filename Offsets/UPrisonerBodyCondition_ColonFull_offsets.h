namespace offsets
{
	namespace UPrisonerBodyCondition_ColonFull
	{
			constexpr auto _colonFullnessToExist = 0xc0; // Size: 4, Type: float
			constexpr auto _colonFullnessToForceDefecate = 0xc4; // Size: 4, Type: float
			constexpr auto _needToDefecateSymptomClass = 0xc8; // Size: 8, Type: UPrisonerBodySymptom_NeedToDefecate*
			constexpr auto _needToDefecateSymptomCause = 0xd0; // Size: 8, Type: struct UPrisonerBodySymptomCause*
			constexpr auto _colonFullnessAtWhichFartingStarts = 0xd8; // Size: 4, Type: float
			constexpr auto _fartingInterval = 0xdc; // Size: 4, Type: float
			constexpr auto _fartingSymptomClass = 0xe0; // Size: 8, Type: UPrisonerBodySymptom_Farting*
			constexpr auto _fartingSymptomCause = 0xe8; // Size: 8, Type: struct UPrisonerBodySymptomCause_Farting*
	}
} 
