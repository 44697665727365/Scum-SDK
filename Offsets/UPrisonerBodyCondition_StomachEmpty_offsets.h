namespace offsets
{
	namespace UPrisonerBodyCondition_StomachEmpty
	{
			constexpr auto _stomachEmptinessToExist = 0xc0; // Size: 4, Type: float
			constexpr auto _energyRatioToExist = 0xc4; // Size: 4, Type: float
			constexpr auto _stomachGrowlingSymptomClass = 0xc8; // Size: 8, Type: UPrisonerBodySymptom_StomachGrowling*
			constexpr auto _stomachGrowlingSymptomCause = 0xd0; // Size: 8, Type: struct UPrisonerBodySymptomCause_StomachGrowling*
			constexpr auto _stomachGrowlingSymptomSoundInterval = 0xd8; // Size: 4, Type: float
	}
} 
