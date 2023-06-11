namespace offsets
{
	namespace UAkAudioEventData
	{
			constexpr auto MaxAttenuationRadius = 0xf0; // Size: 4, Type: float
			constexpr auto IsInfinite = 0xf4; // Size: 1, Type: bool
			constexpr auto MinimumDuration = 0xf8; // Size: 4, Type: float
			constexpr auto MaximumDuration = 0xfc; // Size: 4, Type: float
			constexpr auto LocalizedMedia = 0x100; // Size: 80, Type: struct TMap<struct FString, struct UAkAssetDataSwitchContainer*>
			constexpr auto PostedEvents = 0x150; // Size: 80, Type: struct TSet<struct UAkAudioEvent*>
			constexpr auto UserDefinedSends = 0x1a0; // Size: 80, Type: struct TSet<struct UAkAuxBus*>
			constexpr auto PostedTriggers = 0x1f0; // Size: 80, Type: struct TSet<struct UAkTrigger*>
			constexpr auto GroupValues = 0x240; // Size: 80, Type: struct TSet<struct UAkGroupValue*>
	}
} 
