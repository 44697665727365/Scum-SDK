namespace offsets
{
	namespace UDroneSoundComponent
	{
			constexpr auto IdleSound = 0xd8; // Size: 8, Type: struct USoundCue*
			constexpr auto IdleAudioEvent = 0xe0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto AngrySound = 0xe8; // Size: 8, Type: struct USoundCue*
			constexpr auto AngryAudioEvent = 0xf0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto AttackSound = 0xf8; // Size: 8, Type: struct USoundCue*
			constexpr auto AttackAudioEvent = 0x100; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto KillSound = 0x108; // Size: 8, Type: struct USoundCue*
			constexpr auto KillAudioEvent = 0x110; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto MinSilenceTimeout = 0x118; // Size: 4, Type: float
			constexpr auto MaxSilenceTimeout = 0x11c; // Size: 4, Type: float
	}
} 
