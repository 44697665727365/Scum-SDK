namespace offsets
{
	namespace UAnimal2SoundComponent
	{
			constexpr auto IdleAudioEvent = 0xd8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto AngryAudioEvent = 0xe0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto AttackAudioEvent = 0xe8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ScaredAudioEvent = 0xf0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto AlertedAudioEvent = 0xf8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto TakeDamageAudioEvent = 0x100; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto KillAudioEvent = 0x108; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto AnimalFootstep = 0x110; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto FootstepSoundOverlap = 0x118; // Size: 4, Type: float
			constexpr auto FixedFootstepVolume = 0x11c; // Size: 4, Type: float
			constexpr auto SpeedFootstepVolume = 0x120; // Size: 4, Type: float
			constexpr auto MinSilenceTimeout = 0x124; // Size: 4, Type: float
			constexpr auto MaxSilenceTimeout = 0x128; // Size: 4, Type: float
	}
} 
