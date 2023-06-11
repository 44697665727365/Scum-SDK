namespace offsets
{
	namespace UCharacterSoundComponent
	{
			constexpr auto AttachedSoundsAttachPointName = 0xb0; // Size: 8, Type: struct FName
			constexpr auto ImpactSounds = 0xb8; // Size: 8, Type: struct UCharacterImpactSoundsData*
			constexpr auto PainSounds = 0xc0; // Size: 8, Type: struct UCharacterPainSoundsData*
			constexpr auto MinDurationBetweenPainSounds = 0xc8; // Size: 4, Type: float
			constexpr auto MaxDurationBetweenPainSounds = 0xcc; // Size: 4, Type: float
	}
} 
