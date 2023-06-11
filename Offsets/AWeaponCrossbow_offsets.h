namespace offsets
{
	namespace AWeaponCrossbow
	{
			constexpr auto FireState = 0x2f58; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto FireAndInsertArrowState = 0x2f60; // Size: 8, Type: struct UWeaponState*
			constexpr auto _muzzleVelocity = 0x2f68; // Size: 4, Type: float
			constexpr auto _crossbowFireAnimation = 0x2f70; // Size: 16, Type: struct FCharacterAndItemAnimation
			constexpr auto _crossbowFireAudioEvent = 0x2f80; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _crossbowDryFireAudioEvent = 0x2f88; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _crossbowActiveState = 0x2f90; // Size: 8, Type: struct UWeaponState*
			constexpr auto _isCocked = 0x2f98; // Size: 1, Type: bool
	}
} 
