namespace offsets
{
	namespace UGameResourceContainerEntityComponentSetup
	{
			constexpr auto ResourceType = 0x48; // Size: 8, Type: UGameResourceType*
			constexpr auto MaxResourceAmount = 0x50; // Size: 4, Type: float
			constexpr auto ResourceAmount = 0x54; // Size: 4, Type: float
			constexpr auto ResourceUsageRate = 0x58; // Size: 4, Type: float
			constexpr auto MinTickInterval = 0x5c; // Size: 4, Type: float
			constexpr auto MinResourceAmountRatioChangeToTick = 0x60; // Size: 4, Type: float
	}
} 
