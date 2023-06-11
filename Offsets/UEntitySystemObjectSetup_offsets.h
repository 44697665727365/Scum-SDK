namespace offsets
{
	namespace UEntitySystemObjectSetup
	{
			constexpr auto TickEnabled = 0x30; // Size: 1, Type: bool
			constexpr auto TickInterval = 0x34; // Size: 4, Type: float
			constexpr auto CanEverTickOnServer = 0x38; // Size: 1, Type: bool
			constexpr auto CanEverTickOnClient = 0x39; // Size: 1, Type: bool
	}
} 
