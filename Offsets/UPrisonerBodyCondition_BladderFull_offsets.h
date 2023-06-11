namespace offsets
{
	namespace UPrisonerBodyCondition_BladderFull
	{
			constexpr auto _bladderFullnessToExist = 0xc0; // Size: 4, Type: float
			constexpr auto _bladderFullnessToForceUrinate = 0xc4; // Size: 4, Type: float
			constexpr auto _needToUrinateSymptomClass = 0xc8; // Size: 8, Type: UPrisonerBodySymptom_NeedToUrinate*
			constexpr auto _needToUrinateSymptomCause = 0xd0; // Size: 8, Type: struct UPrisonerBodySymptomCause*
	}
} 
