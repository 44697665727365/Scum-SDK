namespace offsets
{
	namespace ABird2
	{
			constexpr auto IsStaringPerched = 0x978; // Size: 1, Type: bool
			constexpr auto MinFlightAltitude = 0x97c; // Size: 4, Type: float
			constexpr auto MaxFlightAltitude = 0x980; // Size: 4, Type: float
			constexpr auto _isLanding = 0x984; // Size: 1, Type: bool
			constexpr auto _isTakingOff = 0x985; // Size: 1, Type: bool
			constexpr auto _isPerched = 0x986; // Size: 1, Type: bool
			constexpr auto _isFlying = 0x987; // Size: 1, Type: bool
			constexpr auto _states = 0x988; // Size: 16, Type: struct TArray<bool>
			constexpr auto _repStates = 0x998; // Size: 1, Type: char
	}
} 
