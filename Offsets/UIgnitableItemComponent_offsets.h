namespace offsets
{
	namespace UIgnitableItemComponent
	{
			constexpr auto _canBurnUnderwater = 0xc8; // Size: 1, Type: bool
			constexpr auto _canBeIgnitedUnderwater = 0xc9; // Size: 1, Type: bool
			constexpr auto _canBeIgnitedWet = 0xca; // Size: 1, Type: bool
			constexpr auto _canBeIgnitedOnGround = 0xcb; // Size: 1, Type: bool
			constexpr auto _canBePutOut = 0xcc; // Size: 1, Type: bool
			constexpr auto _autoDestroyTimeOnUse = 0xd0; // Size: 4, Type: float
			constexpr auto _effectsSocket = 0xd4; // Size: 8, Type: struct FName
			constexpr auto _prisonerIgniteMontage = 0xe0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _ignitionAudioEvent = 0xe8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _extinguishAudioEvent = 0xf0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _ignitionParticle = 0xf8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _burningParticle = 0x100; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _extinguishParticle = 0x108; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _ignitionNiagaraParticle = 0x110; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto _burningNiagaraParticle = 0x118; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto _extinguishNiagaraParticle = 0x120; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto _ignitionParticleDuration = 0x128; // Size: 4, Type: float
			constexpr auto _particlesLoopDuration = 0x12c; // Size: 4, Type: float
			constexpr auto _extinguishParticleDuration = 0x130; // Size: 4, Type: float
			constexpr auto _repState = 0x135; // Size: 1, Type: uint8_t 
			constexpr auto _wasEverIgnited = 0x136; // Size: 1, Type: bool
			constexpr auto _particlesLoopStartBlend = 0x140; // Size: 4, Type: float
			constexpr auto _noiseLoudnessWhileIgnited = 0x144; // Size: 4, Type: float
			constexpr auto _noiseLoudnessUpdateFrequencyPerHour = 0x148; // Size: 4, Type: float
			constexpr auto _burningNoiseTag = 0x14c; // Size: 8, Type: struct FName
			constexpr auto _ignitionRequirements = 0x158; // Size: 16, Type: struct TArray<struct FIgnitableItemIgnitionRequirements>
			constexpr auto _ignitionDurationOnTheGround = 0x168; // Size: 4, Type: float
			constexpr auto _shouldControlUsage = 0x16c; // Size: 1, Type: bool
	}
} 
