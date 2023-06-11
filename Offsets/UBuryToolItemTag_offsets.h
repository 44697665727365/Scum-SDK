namespace offsets
{
	namespace UBuryToolItemTag
	{
			constexpr auto IsSmallSizedTool = 0x30; // Size: 1, Type: bool
			constexpr auto BuryItemUsage = 0x34; // Size: 4, Type: int32_t
			constexpr auto BuryDurationModifier = 0x38; // Size: 4, Type: float
			constexpr auto BladeTipSocket = 0x3c; // Size: 8, Type: struct FName
			constexpr auto BladeCenterSocket = 0x44; // Size: 8, Type: struct FName
			constexpr auto ShortToolMinBuryTime = 0x4c; // Size: 4, Type: float
			constexpr auto ShortToolMaxBuryTime = 0x50; // Size: 4, Type: float
			constexpr auto LongToolMinBuryTime = 0x54; // Size: 4, Type: float
			constexpr auto LongToolMaxBuryTime = 0x58; // Size: 4, Type: float
	}
} 
