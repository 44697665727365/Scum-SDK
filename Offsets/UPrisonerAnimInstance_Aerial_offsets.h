namespace offsets
{
	namespace UPrisonerAnimInstance_Aerial
	{
			constexpr auto _upcomingPose = 0x2b8; // Size: 1, Type: uint8_t 
			constexpr auto _previousPose = 0x2b9; // Size: 1, Type: uint8_t 
			constexpr auto _blendAnimationOverride = 0x2c0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto _blendAnimationOverrideTime = 0x2c8; // Size: 4, Type: float
			constexpr auto _poseBlendWeight = 0x2cc; // Size: 4, Type: float
			constexpr auto _fallingControl = 0x2d0; // Size: 8, Type: struct FVector2D
			constexpr auto _fallSpeed = 0x2d8; // Size: 4, Type: float
			constexpr auto _yawRotationRate = 0x2dc; // Size: 4, Type: float
			constexpr auto _isInFirstPersonView = 0x2e0; // Size: 1, Type: bool
			constexpr auto _hasHandBondage = 0x2e1; // Size: 1, Type: bool
			constexpr auto _jumpingAfterApex = 0x2e2; // Size: 1, Type: bool
			constexpr auto _shouldUsePoseSnapshot = 0x2e3; // Size: 1, Type: bool
			constexpr auto _handsBoundIdleFPAnimation = 0x2e8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _handsBoundIdleTPAnimation = 0x2f0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _distanceToJumpApexNormalized = 0x2f8; // Size: 4, Type: float
			constexpr auto _legsPoseBeforeJump = 0x2fc; // Size: 4, Type: float
			constexpr auto _movementPaceBeforeJump = 0x300; // Size: 1, Type: uint8_t 
	}
} 
