namespace offsets
{
	namespace UWeaponAnimInstance
	{
			constexpr auto _owningPrisonerWeaponBreathFactor = 0x2d0; // Size: 4, Type: float
			constexpr auto _owningPrisonerWeaponAimDownTheSightsStillBlendFactor = 0x2d4; // Size: 4, Type: float
			constexpr auto _isOwningPrisonerAimingDownTheSights = 0x2d8; // Size: 1, Type: bool
			constexpr auto _isChamberOpened = 0x2d9; // Size: 1, Type: bool
			constexpr auto _ammoCount = 0x2dc; // Size: 4, Type: int32_t
			constexpr auto _loadedAmmoCount = 0x2e0; // Size: 4, Type: int32_t
			constexpr auto _shouldPlayChamberOpenedIdle = 0x2e4; // Size: 1, Type: bool
			constexpr auto _isInGameEvent = 0x2e5; // Size: 1, Type: bool
			constexpr auto _malfunction = 0x2e6; // Size: 1, Type: uint8_t 
			constexpr auto _useFiringModeBoneRotation = 0x2e7; // Size: 1, Type: bool
			constexpr auto _firingModeBoneRotation = 0x2e8; // Size: 12, Type: struct FRotator
			constexpr auto _hideBoneCurveValue = 0x2f4; // Size: 4, Type: float
			constexpr auto _zeroRange = 0x2f8; // Size: 4, Type: float
			constexpr auto _aiminDownTheSightsMode = 0x2fc; // Size: 1, Type: uint8_t 
			constexpr auto _hasUnusedLoadedAmmo = 0x2fd; // Size: 1, Type: bool
	}
} 
