namespace offsets
{
	namespace USentryAnimInstance2
	{
			constexpr auto ShouldUseLUWalkStopAnimation = 0x2b8; // Size: 1, Type: bool
			constexpr auto stoppingDistance = 0x2bc; // Size: 4, Type: float
			constexpr auto _turnInPlaceData = 0x2d0; // Size: 44, Type: struct FInPlaceTurningData
			constexpr auto _stoppingDistance = 0x30c; // Size: 4, Type: float
			constexpr auto _upperBodyRotationLerpFactor = 0x310; // Size: 4, Type: float
			constexpr auto _grenadeLauncherUpperFlapMaxPitch = 0x314; // Size: 4, Type: float
			constexpr auto _grenadeLauncherLowerFlapMaxPitch = 0x318; // Size: 4, Type: float
			constexpr auto _grenadeLauncherFlapsTimeToOpenFlaps = 0x31c; // Size: 4, Type: float
			constexpr auto _glitchingVaritionsNum = 0x320; // Size: 4, Type: int32_t
			constexpr auto _glitchingUpdateTimeMin = 0x324; // Size: 4, Type: float
			constexpr auto _glitchingUpdateTimeMax = 0x328; // Size: 4, Type: float
			constexpr auto _chanceToGlitchPerHealthState[6] = 0x32c; // Size: 24, Type: float
			constexpr auto _miningunBonesNum = 0x344; // Size: 4, Type: int32_t
			constexpr auto _minigunRotationSpeed = 0x348; // Size: 4, Type: float
			constexpr auto _minigunRotationAcceleration = 0x34c; // Size: 4, Type: float
			constexpr auto _minigunRotationDeceleration = 0x350; // Size: 4, Type: float
			constexpr auto _isSentryCompletelyInitialized = 0x358; // Size: 1, Type: bool
			constexpr auto _wantsToMove = 0x359; // Size: 1, Type: bool
			constexpr auto _previousWantsToMove = 0x35a; // Size: 1, Type: bool
			constexpr auto _movementPace = 0x35b; // Size: 1, Type: uint8_t 
			constexpr auto _actualCourseAngle = 0x35c; // Size: 4, Type: float
			constexpr auto _desiredCourseAngle = 0x360; // Size: 4, Type: float
			constexpr auto _desiredCoursePitchAngle = 0x364; // Size: 4, Type: float
			constexpr auto _angularVelocity = 0x368; // Size: 4, Type: float
			constexpr auto _velocity = 0x36c; // Size: 12, Type: struct FVector
			constexpr auto _speed = 0x378; // Size: 4, Type: float
			constexpr auto _walkSpeedMultiplier = 0x37c; // Size: 4, Type: float
			constexpr auto _forwardVector = 0x380; // Size: 12, Type: struct FVector
			constexpr auto _isFalling = 0x38c; // Size: 1, Type: bool
			constexpr auto _isDead = 0x38d; // Size: 1, Type: bool
			constexpr auto _sentryStance = 0x38e; // Size: 1, Type: uint8_t 
			constexpr auto _sentryHealthState = 0x38f; // Size: 1, Type: uint8_t 
			constexpr auto _combatVariation = 0x390; // Size: 1, Type: uint8_t 
			constexpr auto _shouldAimLongRangeWeapon = 0x391; // Size: 1, Type: bool
			constexpr auto _longRangeGunLookAtLocation = 0x394; // Size: 12, Type: struct FVector
			constexpr auto _shouldAimHighPrecisionWeapon = 0x3a0; // Size: 1, Type: bool
			constexpr auto _highPrecisionGunLookAtLocation = 0x3a4; // Size: 12, Type: struct FVector
			constexpr auto _hasUpperBodyFocusLocation = 0x3b0; // Size: 1, Type: bool
			constexpr auto _upperBodyFocusRotationYaw = 0x3b4; // Size: 4, Type: float
			constexpr auto _grenadeLauncherUpperFlapCurrentPitch = 0x3b8; // Size: 4, Type: float
			constexpr auto _grenadeLauncherLowerFlapCurrentPitch = 0x3bc; // Size: 4, Type: float
			constexpr auto _isFiring = 0x3c0; // Size: 1, Type: bool
			constexpr auto _partGlitchingInfo = 0x3c8; // Size: 16, Type: struct TArray<struct FSentryGlitchingPartInfo>
			constexpr auto _minigunRotationAngles = 0x3d8; // Size: 16, Type: struct TArray<float>
	}
} 
