namespace offsets
{
	namespace UPrisonerBodyCondition_FoodDisgust
	{
			constexpr auto _disgustAmountMultiplierVsConstitution = 0xc0; // Size: 8, Type: struct FFloatInterval
			constexpr auto _disgustAmountTolerated = 0xc8; // Size: 4, Type: float
			constexpr auto _disgustAmountToIssueFirstWarning = 0xcc; // Size: 4, Type: float
			constexpr auto _firstDisgustWarning = 0xd0; // Size: 8, Type: UNotificationDescription*
			constexpr auto _disgustAmountToIssueSecondWarning = 0xd8; // Size: 4, Type: float
			constexpr auto _secondDisgustWarning = 0xe0; // Size: 8, Type: UNotificationDescription*
			constexpr auto _disgustWarningCooldown = 0xe8; // Size: 4, Type: float
			constexpr auto _disgustAmountToBeAbleToVomit = 0xf4; // Size: 4, Type: float
			constexpr auto _disgustAmountToVomit = 0xf8; // Size: 4, Type: float
			constexpr auto _disgustAmountDecreaseMultiplier = 0xfc; // Size: 4, Type: float
			constexpr auto _disgustAmount = 0x100; // Size: 4, Type: float
			constexpr auto _disgustAmountAtStabilizationStart = 0x120; // Size: 4, Type: float
			constexpr auto _disgustAmountAtRecoveryStart = 0x124; // Size: 4, Type: float
			constexpr auto _nauseaSymptomClass = 0x128; // Size: 8, Type: UPrisonerBodySymptom_Nausea*
	}
} 
