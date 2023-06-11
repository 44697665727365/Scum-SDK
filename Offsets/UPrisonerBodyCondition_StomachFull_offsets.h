namespace offsets
{
	namespace UPrisonerBodyCondition_StomachFull
	{
			constexpr auto _stomachFullnessToExist = 0xc0; // Size: 4, Type: float
			constexpr auto _stomachFullnessToDie = 0xc4; // Size: 4, Type: float
			constexpr auto _stomachFullnessToBeRecovered = 0xc8; // Size: 4, Type: float
			constexpr auto _stomachFullnessAtWhichToAutoCancelConsumptionOnce = 0xcc; // Size: 4, Type: float
			constexpr auto _stomachFullnessAtWhichToEnableAutoConsumptionCancelationAgain = 0xd0; // Size: 4, Type: float
			constexpr auto _minMaxStaminaModifierForFatigueSymptom = 0xd4; // Size: 4, Type: float
			constexpr auto _stomachFullnessAtWhichBurpingStarts = 0xd8; // Size: 4, Type: float
			constexpr auto _burpingInterval = 0xdc; // Size: 4, Type: float
			constexpr auto _stomachFullnessSymptomClass = 0xe0; // Size: 8, Type: UPrisonerBodySymptom_StomachFullness*
			constexpr auto _stomachFullnessSymptomCause = 0xe8; // Size: 8, Type: struct UPrisonerBodySymptomCause*
			constexpr auto _fatigueSymptomClass = 0xf0; // Size: 8, Type: UPrisonerBodySymptom_Fatigue*
			constexpr auto _fatigueSymptomCause = 0xf8; // Size: 8, Type: struct UPrisonerBodySymptomCause_Fatigue*
			constexpr auto _burpingSymptomClass = 0x100; // Size: 8, Type: UPrisonerBodySymptom_Burping*
			constexpr auto _burpingSymptomCause = 0x108; // Size: 8, Type: struct UPrisonerBodySymptomCause_Burping*
			constexpr auto _stomachRuptureWarningNotificationClass = 0x110; // Size: 8, Type: UNotificationDescription*
			constexpr auto _stomachRuptureNotificationClass = 0x118; // Size: 8, Type: UNotificationDescription*
	}
} 
