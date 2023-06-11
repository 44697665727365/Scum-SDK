namespace offsets
{
	namespace UPrisonerBodyConditionOrSymptom
	{
			constexpr auto _uiDataClass = 0x58; // Size: 8, Type: UPrisonerBodyConditionOrSymptomUIData*
			constexpr auto _useSeverityToDetermineLifeThreateningStatus = 0x60; // Size: 1, Type: bool
			constexpr auto _severityRangeToBeLifeThreatening = 0x64; // Size: 16, Type: struct FFloatRange
			constexpr auto _severityRatioChangeToReplicate = 0x74; // Size: 4, Type: float
			constexpr auto _clientSeverityRatioInterpSpeed = 0x78; // Size: 4, Type: float
			constexpr auto _sideEffects = 0x80; // Size: 16, Type: struct TArray<struct UPrisonerBodyConditionOrSymptomSideEffect*>
			constexpr auto _repSeverity = 0x98; // Size: 4, Type: float
			constexpr auto _repMaxSeverity = 0x9c; // Size: 4, Type: float
	}
} 
