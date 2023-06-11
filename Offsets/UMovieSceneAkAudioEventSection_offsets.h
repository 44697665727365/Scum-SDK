namespace offsets
{
	namespace UMovieSceneAkAudioEventSection
	{
			constexpr auto Event = 0x128; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RetriggerEvent = 0x130; // Size: 1, Type: bool
			constexpr auto ScrubTailLengthMs = 0x134; // Size: 4, Type: int32_t
			constexpr auto StopAtSectionEnd = 0x138; // Size: 1, Type: bool
			constexpr auto EventName = 0x140; // Size: 16, Type: struct FString
			constexpr auto MaxSourceDuration = 0x170; // Size: 4, Type: float
			constexpr auto MaxDurationSourceID = 0x178; // Size: 16, Type: struct FString
	}
} 
