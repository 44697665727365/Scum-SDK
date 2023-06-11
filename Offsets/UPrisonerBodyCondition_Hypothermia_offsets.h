namespace offsets
{
	namespace UPrisonerBodyCondition_Hypothermia
	{
			constexpr auto _maxSeverity = 0xc0; // Size: 4, Type: float
			constexpr auto _bodyTemperatureToDie = 0xc4; // Size: 4, Type: float
			constexpr auto _bodyTemperatureToExist = 0xc8; // Size: 4, Type: float
			constexpr auto _bodyTemperatureToRecover = 0xcc; // Size: 4, Type: float
			constexpr auto _bodyTemperatureSampleInterval = 0xd4; // Size: 4, Type: float
			constexpr auto _bodyTemperatureAtUntreatedStart = 0xe0; // Size: 4, Type: float
			constexpr auto _bodyTemperatureAtStabilizationStart = 0xe4; // Size: 4, Type: float
			constexpr auto _bodyTemperatureAtRecoveryStart = 0xe8; // Size: 4, Type: float
			constexpr auto _state = 0xec; // Size: 1, Type: uint8_t 
			constexpr auto _severityRatio = 0xf4; // Size: 4, Type: float
			constexpr auto _severityRatioAtUntreatedStart = 0xf8; // Size: 4, Type: float
			constexpr auto _severityRatioAtRecoveryStart = 0xfc; // Size: 4, Type: float
			constexpr auto _severityRatioInterpSpeed = 0x104; // Size: 4, Type: float
	}
} 
