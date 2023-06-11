namespace offsets
{
	namespace UPrisonerBodyCondition_Sepsis
	{
			constexpr auto _maxSeverity = 0xd0; // Size: 4, Type: float
			constexpr auto _maxContamination = 0xd4; // Size: 4, Type: float
			constexpr auto _contamination = 0xd8; // Size: 4, Type: float
			constexpr auto _contaminationChangeRate = 0xdc; // Size: 4, Type: float
			constexpr auto _contaminationAtRecoveryStart = 0xe0; // Size: 4, Type: float
			constexpr auto _state = 0xe4; // Size: 1, Type: uint8_t 
	}
} 
