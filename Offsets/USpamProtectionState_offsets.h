namespace offsets
{
	namespace USpamProtectionState
	{
			constexpr auto Severity = 0x28; // Size: 1, Type: uint8_t 
			constexpr auto LastSeverityChange = 0x30; // Size: 8, Type: struct FDateTime
			constexpr auto LastTimeout = 0x38; // Size: 8, Type: struct FDateTime
			constexpr auto PermanentTimeout = 0x40; // Size: 1, Type: bool
			constexpr auto MaxSeverityReached = 0x41; // Size: 1, Type: uint8_t 
			constexpr auto MaxSeverityCount = 0x44; // Size: 4, Type: int32_t
	}
} 
