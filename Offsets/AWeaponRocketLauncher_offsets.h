namespace offsets
{
	namespace AWeaponRocketLauncher
	{
			constexpr auto ArmState = 0x2f58; // Size: 8, Type: struct UWeaponState*
			constexpr auto UnarmState = 0x2f60; // Size: 8, Type: struct UWeaponState*
			constexpr auto ArmedState = 0x2f68; // Size: 8, Type: struct UWeaponState*
			constexpr auto _armActionSequenceClass = 0x2f70; // Size: 8, Type: UWeaponActionRocketLauncherArmSequence*
			constexpr auto _unarmActionSequenceClass = 0x2f78; // Size: 8, Type: UWeaponActionRocketLauncherUnarmSequence*
			constexpr auto _needsToBeArmedToFire = 0x2f80; // Size: 1, Type: bool
			constexpr auto _spawnWithLoadedProjectile = 0x2f81; // Size: 1, Type: bool
			constexpr auto _backMuzzlerSocketName = 0x2f84; // Size: 8, Type: struct FName
			constexpr auto _baskMuzzlePS = 0x2f90; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _armActionSequence = 0x2f98; // Size: 8, Type: struct UWeaponActionRocketLauncherArmSequence*
			constexpr auto _unarmActionSequence = 0x2fa0; // Size: 8, Type: struct UWeaponActionRocketLauncherUnarmSequence*
			constexpr auto _unarmedState = 0x2fa8; // Size: 8, Type: struct UWeaponState*
			constexpr auto _isArmed = 0x2fb0; // Size: 1, Type: bool
	}
} 
