namespace offsets
{
	namespace AWeaponRevolver
	{
			constexpr auto FireState = 0x2f58; // Size: 8, Type: struct UWeaponStateFiring*
			constexpr auto _revolverActiveState = 0x2f60; // Size: 8, Type: struct UWeaponState*
			constexpr auto _fireAnimation = 0x2f68; // Size: 16, Type: struct FCharacterAndItemAnimation
			constexpr auto _dryFireAnimation = 0x2f78; // Size: 16, Type: struct FCharacterAndItemAnimation
			constexpr auto _rollDrumAnimation = 0x2f88; // Size: 16, Type: struct FCharacterAndItemAnimation
			constexpr auto _russianRouletteMontage = 0x2f98; // Size: 8, Type: struct UAnimMontage*
			constexpr auto _drumRotationOffset = 0x2fa0; // Size: 4, Type: float
			constexpr auto _firingIndex = 0x2fa4; // Size: 4, Type: int32_t
			constexpr auto _drumRotationInterpolatorSpeed = 0x2fb8; // Size: 4, Type: float
			constexpr auto _drumRotationDirection = 0x2fbc; // Size: 1, Type: uint8_t 
	}
} 
