namespace offsets
{
	namespace USoundSourceBus
	{
			constexpr auto SourceBusChannels = 0x370; // Size: 1, Type: uint8_t 
			constexpr auto SourceBusDuration = 0x374; // Size: 4, Type: float
			constexpr auto AudioBus = 0x378; // Size: 8, Type: struct UAudioBus*
			constexpr auto bAutoDeactivateWhenSilent = 0x380; // Size: 1, Type: char
	}
} 
