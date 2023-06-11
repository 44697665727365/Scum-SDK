namespace offsets
{
	namespace UPrisonerBodyCondition_Infection
	{
			constexpr auto _maxSeverity = 0xc0; // Size: 4, Type: float
			constexpr auto _maxContamination = 0xc4; // Size: 4, Type: float
			constexpr auto _toleratedContamination = 0xc8; // Size: 4, Type: float
			constexpr auto _sepsisClass = 0xd0; // Size: 8, Type: UPrisonerBodyCondition_Sepsis*
			constexpr auto _sepsisCause = 0xd8; // Size: 8, Type: struct UPrisonerBodyConditionCause_Sepsis*
			constexpr auto _infectedNotification = 0xe0; // Size: 8, Type: UNotificationDescription*
			constexpr auto _infectedNotificationCooldown = 0xe8; // Size: 4, Type: float
			constexpr auto _contamination = 0xfc; // Size: 4, Type: float
			constexpr auto _contaminationAtRecoveryStart = 0x100; // Size: 4, Type: float
			constexpr auto _contaminationIncreaseRate = 0x104; // Size: 4, Type: float
			constexpr auto _contaminationDecreaseRate = 0x110; // Size: 4, Type: float
			constexpr auto _state = 0x11c; // Size: 1, Type: uint8_t 
	}
} 
