namespace offsets
{
	namespace UPrisonerAnimInstance
	{
			constexpr auto SlowPaceLoopAnimSpeeds[16] = 0x2b8; // Size: 88, Type: float
			constexpr auto MediumPaceLoopAnimSpeeds[16] = 0x310; // Size: 88, Type: float
			constexpr auto FastPaceLoopAnimSpeeds[16] = 0x368; // Size: 88, Type: float
			constexpr auto MeleeCombatWalkUsageRadius = 0x3c0; // Size: 4, Type: float
			constexpr auto MeleeExhaustionFactorInterpSpeed = 0x3c4; // Size: 4, Type: float
			constexpr auto UpperEyelidsLookLeftFactor = 0x3c8; // Size: 4, Type: float
			constexpr auto LowerEyelidsLookLeftFactor = 0x3cc; // Size: 4, Type: float
			constexpr auto UpperEyelidsLookRightFactor = 0x3d0; // Size: 4, Type: float
			constexpr auto LowerEyelidsLookRightFactor = 0x3d4; // Size: 4, Type: float
			constexpr auto UpperEyelidsLookUpFactor = 0x3d8; // Size: 4, Type: float
			constexpr auto LowerEyelidsLookUpFactor = 0x3dc; // Size: 4, Type: float
			constexpr auto UpperEyelidsLookDownFactor = 0x3e0; // Size: 4, Type: float
			constexpr auto LowerEyelidsLookDownFactor = 0x3e4; // Size: 4, Type: float
			constexpr auto AutoBlinkEnabled = 0x3e8; // Size: 1, Type: bool
			constexpr auto _isPrisonerCompletelyInitialized = 0x488; // Size: 1, Type: bool
			constexpr auto _isOwnerLocallyControlled = 0x489; // Size: 1, Type: bool
			constexpr auto _isOwnerPlayerControlled = 0x48a; // Size: 1, Type: bool
			constexpr auto _isFemale = 0x48b; // Size: 1, Type: bool
			constexpr auto _isInFirstPersonView = 0x48c; // Size: 1, Type: bool
			constexpr auto _shouldOverrideIsInFirstPersonView = 0x48d; // Size: 1, Type: bool
			constexpr auto _isInFirstPersonViewOverride = 0x48e; // Size: 1, Type: bool
			constexpr auto _isInFirstPersonViewAndIsFemale = 0x48f; // Size: 1, Type: bool
			constexpr auto _isInThirdPersonViewAndIsFemale = 0x490; // Size: 1, Type: bool
			constexpr auto _isAimingWeapon = 0x491; // Size: 1, Type: bool
			constexpr auto _isAbleToFireWeapon = 0x492; // Size: 1, Type: bool
			constexpr auto _weaponAimingType = 0x493; // Size: 1, Type: uint8_t 
			constexpr auto _supportingHandIKLocation = 0x494; // Size: 12, Type: struct FVector
			constexpr auto _weaponAimYaw = 0x4a0; // Size: 4, Type: float
			constexpr auto _weaponAimPitch = 0x4a4; // Size: 4, Type: float
			constexpr auto _meleeSkill_PrimaryIdleAnimationTP = 0x4a8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _meleeSkill_PrimaryIdleAnimationFP = 0x4b0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _meleeSkill_TiredIdleAnimationTP = 0x4b8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _meleeSkill_TiredIdleAnimationFP = 0x4c0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _meleeSkill_WalkingIdleAnimationTP = 0x4c8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _meleeSkill_WalkingIdleAnimationFP = 0x4d0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _meleeSkill_BlockIdleAnimationTP = 0x4d8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _meleeSkill_BlockIdleAnimationFP = 0x4e0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _meleeSkill_AimOffsetBlendSpaceTP = 0x4e8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _meleeSkill_AimOffsetBlendSpaceFP = 0x4f0; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _meleeSkill_IdleToBlockBlendDuration = 0x4f8; // Size: 4, Type: float
			constexpr auto _meleeSkill_BlockToIdleBlendDuration = 0x4fc; // Size: 4, Type: float
			constexpr auto _meleeSkill_ExhaustionFactor = 0x500; // Size: 4, Type: float
			constexpr auto _shouldUseUnarmedCombatWalk = 0x504; // Size: 1, Type: bool
			constexpr auto _isHoldingBlock = 0x505; // Size: 1, Type: bool
			constexpr auto _stamina = 0x508; // Size: 4, Type: float
			constexpr auto _bellyJiggleAmount = 0x50c; // Size: 4, Type: float
			constexpr auto _breastJiggleAmount = 0x510; // Size: 4, Type: float
			constexpr auto _eyesRotationDelta = 0x514; // Size: 12, Type: struct FRotator
			constexpr auto _minEyesRotationPitch = 0x520; // Size: 4, Type: float
			constexpr auto _maxEyesRotationPitch = 0x524; // Size: 4, Type: float
			constexpr auto _shouldUseWeaponAnimationPose = 0x528; // Size: 1, Type: bool
			constexpr auto _shouldIgnoreSupportingHandIK = 0x610; // Size: 1, Type: bool
			constexpr auto _firstPersonAimPitch = 0x614; // Size: 4, Type: float
			constexpr auto _firstPersonAimYawDelta = 0x618; // Size: 4, Type: float
			constexpr auto _shouldAimDownTheSights = 0x61c; // Size: 1, Type: bool
			constexpr auto _aimingDownTheSightsLocationOffset = 0x620; // Size: 12, Type: struct FVector
			constexpr auto _scopeViewArmDislocationOffset = 0x62c; // Size: 12, Type: struct FVector
			constexpr auto _armsLagRotation = 0x638; // Size: 12, Type: struct FRotator
			constexpr auto _armsLagPitch = 0x644; // Size: 4, Type: float
			constexpr auto _armsLagYaw = 0x648; // Size: 4, Type: float
			constexpr auto _stance = 0x64c; // Size: 1, Type: uint8_t 
			constexpr auto _crouchStage = 0x650; // Size: 4, Type: float
			constexpr auto _targetCrouchStage = 0x654; // Size: 4, Type: float
			constexpr auto _isFreeLookEnabled = 0x658; // Size: 1, Type: bool
			constexpr auto _shouldIgnoreHeadTurning = 0x659; // Size: 1, Type: bool
			constexpr auto _aimOffset = 0x65c; // Size: 12, Type: struct FRotator
			constexpr auto _leanAmount = 0x668; // Size: 4, Type: float
			constexpr auto _shouldLookAtMeleeTarget = 0x66c; // Size: 1, Type: bool
			constexpr auto _lookAtMeleeTargetAimOffset = 0x670; // Size: 12, Type: struct FRotator
			constexpr auto _animationSet = 0x67c; // Size: 1, Type: uint8_t 
			constexpr auto _isInRagdoll = 0x67d; // Size: 1, Type: bool
			constexpr auto _isMovingOnGround = 0x67e; // Size: 1, Type: bool
			constexpr auto _isFalling = 0x67f; // Size: 1, Type: bool
			constexpr auto _isSwimming = 0x680; // Size: 1, Type: bool
			constexpr auto _acceleration = 0x684; // Size: 12, Type: struct FVector
			constexpr auto _wantsToMove = 0x690; // Size: 1, Type: bool
			constexpr auto _wantsToMoveHorizontallyOnly = 0x691; // Size: 1, Type: bool
			constexpr auto _wantsToMoveVerticallyOnly = 0x692; // Size: 1, Type: bool
			constexpr auto _wantsToWalk = 0x693; // Size: 1, Type: bool
			constexpr auto _wantsToJog = 0x694; // Size: 1, Type: bool
			constexpr auto _wantsToRun = 0x695; // Size: 1, Type: bool
			constexpr auto _velocity = 0x698; // Size: 12, Type: struct FVector
			constexpr auto _speed = 0x6a8; // Size: 4, Type: float
			constexpr auto _speedXY = 0x6ac; // Size: 4, Type: float
			constexpr auto _maxSpeed = 0x6b0; // Size: 4, Type: float
			constexpr auto _stoppingDistance = 0x6b4; // Size: 4, Type: float
			constexpr auto _leftHandIKAmount = 0x734; // Size: 4, Type: float
			constexpr auto _desiredCourseAngle = 0x738; // Size: 4, Type: float
			constexpr auto _desiredCoursePitchAngle = 0x73c; // Size: 4, Type: float
			constexpr auto _actualCourseAngle = 0x740; // Size: 4, Type: float
			constexpr auto _desiredMovementPace = 0x744; // Size: 1, Type: uint8_t 
			constexpr auto _clampedDesiredMovementPace = 0x745; // Size: 1, Type: uint8_t 
			constexpr auto _movementPaceBeforeGroundStart = 0x746; // Size: 1, Type: uint8_t 
			constexpr auto _groundStartAnimPlayRate = 0x748; // Size: 4, Type: float
			constexpr auto _legsPoseBeforeGroundStop = 0x74c; // Size: 4, Type: float
			constexpr auto _movementDirectionBeforeGroundStop = 0x750; // Size: 1, Type: uint8_t 
			constexpr auto _movementPaceBeforeGroundStop = 0x751; // Size: 1, Type: uint8_t 
			constexpr auto _animationSetBeforeGroundStop = 0x752; // Size: 1, Type: uint8_t 
			constexpr auto _shouldUseLUGroundStopAnimation = 0x753; // Size: 1, Type: bool
			constexpr auto _hitReactState = 0x754; // Size: 1, Type: uint8_t 
			constexpr auto _weightLoadFactor = 0x758; // Size: 4, Type: float
			constexpr auto _shouldUseJogStartForRunStart = 0x75c; // Size: 1, Type: bool
			constexpr auto _useLocomotionAdditiveAnimations = 0x75d; // Size: 1, Type: bool
			constexpr auto _disorientation = 0x760; // Size: 4, Type: float
			constexpr auto _disorientationMultiplier = 0x764; // Size: 4, Type: float
			constexpr auto _isLimping = 0x768; // Size: 1, Type: bool
			constexpr auto _shouldRotateBonesWithFirstPersonAimPitch = 0x769; // Size: 1, Type: bool
			constexpr auto _jumpApex = 0x770; // Size: 4, Type: float
			constexpr auto _distanceToJumpApex = 0x774; // Size: 4, Type: float
			constexpr auto _legsPoseBeforeJump = 0x778; // Size: 4, Type: float
			constexpr auto _movementPaceBeforeJump = 0x77c; // Size: 1, Type: uint8_t 
			constexpr auto _animationSetBeforeJump = 0x77d; // Size: 1, Type: uint8_t 
			constexpr auto _shouldJumpGoToFallingLoop = 0x77e; // Size: 1, Type: bool
			constexpr auto _waterImmersionDepth = 0x780; // Size: 4, Type: float
			constexpr auto _meshOffsetWhenInWater = 0x784; // Size: 12, Type: struct FVector
			constexpr auto _wantsToDiveIn = 0x790; // Size: 1, Type: bool
			constexpr auto _isClimbing = 0x864; // Size: 1, Type: bool
			constexpr auto _isClimbingAnchoring = 0x865; // Size: 1, Type: bool
			constexpr auto _climbAnchoringAnimation = 0x8f0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _climbAnchoringAnimationTime = 0x8f8; // Size: 4, Type: float
			constexpr auto _isClimbingLadder = 0x8fc; // Size: 1, Type: bool
			constexpr auto _ladderClimbingRootBoneOffset = 0x9b0; // Size: 12, Type: struct FVector
			constexpr auto _ladderClimbingLoopState = 0x9bc; // Size: 4, Type: float
			constexpr auto _ladderClimbingLoopStateForPeeking = 0x9c0; // Size: 4, Type: float
			constexpr auto _ladderClimbingPeekState = 0x9c4; // Size: 4, Type: float
			constexpr auto _isClimbingWindow = 0x9c8; // Size: 1, Type: bool
			constexpr auto _isClimbingWindowAnchoring = 0x9c9; // Size: 1, Type: bool
			constexpr auto _windowClimbingAnchoringAnimation = 0x9d0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _windowClimbingAnchoringAnimationTime = 0x9d8; // Size: 4, Type: float
			constexpr auto _weaponType = 0x9dc; // Size: 1, Type: uint8_t 
			constexpr auto _isDedicatedServer = 0x9dd; // Size: 1, Type: bool
			constexpr auto _itemFirstPersonUpperBodyStandIdle = 0xd28; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _itemFirstPersonUpperBodyStandWalk = 0xd30; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _itemFirstPersonUpperBodyStandWalkLimping = 0xd38; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _itemFirstPersonUpperBodyStandJog = 0xd40; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _itemFirstPersonUpperBodyStandJogLimping = 0xd48; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _itemFirstPersonUpperBodyStandRun = 0xd50; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _itemFirstPersonUpperBodyCrouchIdle = 0xd58; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _itemFirstPersonUpperBodyCrouchWalk = 0xd60; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _itemFirstPersonUpperBodyCrouchWalkLimping = 0xd68; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _itemFirstPersonUpperBodyProneIdle = 0xd70; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyStandIdle = 0xd78; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyStandWalk = 0xd80; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyStandWalkLimping = 0xd88; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyStandJog = 0xd90; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyStandJogLimping = 0xd98; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyStandRun = 0xda0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyCrouchIdle = 0xda8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyCrouchWalk = 0xdb0; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyCrouchWalkLimping = 0xdb8; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _weaponAimingHipFirstPersonUpperBodyProneIdle = 0xdc0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _shouldUseItemFirstPersonAimOffsets = 0xdc8; // Size: 1, Type: bool
			constexpr auto _itemFirstPersonAimOffsetStanding = 0xdd0; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _itemFirstPersonAimOffsetCrouching = 0xdd8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _itemFirstPersonAimOffsetProne = 0xde0; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _rightHandCorrectionPoseStanding = 0xde8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _rightHandCorrectionPoseCrouching = 0xdf0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _rightHandCorrectionPoseProne = 0xdf8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _rightFistCorrectionPoseStanding = 0xe00; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _rightFistCorrectionPoseStandingInCombatMode = 0xe08; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _rightFistCorrectionPoseCrouching = 0xe10; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _rightFistCorrectionPoseProne = 0xe18; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _rightHandToIdleBlendAlphaStanding = 0xe20; // Size: 4, Type: float
			constexpr auto _rightHandToIdleBlendAlphaCrouching = 0xe24; // Size: 4, Type: float
			constexpr auto _leftHandCorrectionPoseStanding = 0xe28; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _leftHandCorrectionPoseCrouching = 0xe30; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _leftHandCorrectionPoseProne = 0xe38; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _leftFistCorrectionPoseStanding = 0xe40; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _leftFistCorrectionPoseStandingInCombatMode = 0xe48; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _leftFistCorrectionPoseCrouching = 0xe50; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _leftFistCorrectionPoseProne = 0xe58; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _leftHandToIdleBlendAlphaStanding = 0xe60; // Size: 4, Type: float
			constexpr auto _leftHandToIdleBlendAlphaCrouching = 0xe64; // Size: 4, Type: float
			constexpr auto _hasItemInHands = 0xe70; // Size: 1, Type: bool
			constexpr auto _itemInHandsLeftHandLocationInRightHandSpace = 0xe74; // Size: 12, Type: struct FVector
			constexpr auto _itemInHandsLeftHandRotationInRightHandSpace = 0xe80; // Size: 12, Type: struct FRotator
			constexpr auto _itemInHandsObstructionDepth = 0xe8c; // Size: 4, Type: float
			constexpr auto _itemInHandsObstructionDepthSmoothed = 0xe90; // Size: 4, Type: float
			constexpr auto _isItemInHandsObstructed = 0xe94; // Size: 1, Type: bool
			constexpr auto _isItemInHandsCompletelyObstructed = 0xe95; // Size: 1, Type: bool
			constexpr auto _itemInHandsObstructionSide = 0xe98; // Size: 4, Type: float
			constexpr auto _itemInHandsLeftObstructedIdleFP = 0xea0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _itemInHandsRightObstructedIdleFP = 0xea8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _itemInHandsObstructedIdleTP = 0xeb0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _itemInHandsObstructedIdleProneTP = 0xeb8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _isInCombatMode = 0xec0; // Size: 1, Type: bool
			constexpr auto _shouldUseHandCorrections = 0xec1; // Size: 1, Type: bool
			constexpr auto _shouldUseFistCorrections = 0xec2; // Size: 1, Type: bool
			constexpr auto _overrideFingersOnlyInProne = 0xec3; // Size: 1, Type: bool
			constexpr auto _ignoreAimOffsets = 0xec4; // Size: 1, Type: bool
			constexpr auto _prisonerMontageBlendType = 0xec5; // Size: 1, Type: uint8_t 
			constexpr auto _isAimingBow = 0xec6; // Size: 1, Type: bool
			constexpr auto _bowArmsShakeValue = 0xec8; // Size: 4, Type: float
			constexpr auto _isScoping = 0xecc; // Size: 1, Type: bool
			constexpr auto _responseIdleClassReferences = 0xf20; // Size: 80, Type: struct TSet<UPrisonerResponseIdle*>
			constexpr auto _shouldUpperBodyBeUsedAsFullBodyInIdle = 0xfa0; // Size: 1, Type: bool
			constexpr auto _isPlayingInstrument = 0xfa1; // Size: 1, Type: bool
			constexpr auto _playingInstrumentIdleAnimation = 0xfa8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _playingInstrumentPlayAnimation = 0xfb0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _playingInstrumentState = 0xfb8; // Size: 1, Type: uint8_t 
			constexpr auto _isCarryingItem = 0xfb9; // Size: 1, Type: bool
			constexpr auto _carryingItemIdleFPAnimation = 0xfc0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _carryingItemIdleTPAnimation = 0xfc8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _carryingItemState = 0xfd0; // Size: 1, Type: uint8_t 
			constexpr auto _isMounted = 0xfd1; // Size: 1, Type: bool
			constexpr auto _mountedAnimation = 0xfd8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _isVehicleDriver = 0xfe0; // Size: 1, Type: bool
			constexpr auto _vehicleDriverForwardIdleAnimation = 0xfe8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _vehicleDriverForwardSteeringAnimation = 0xff0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleDriverForwardSteeringAnimationFP = 0xff8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleDriverReverseIdleAnimation = 0x1000; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _vehicleDriverReverseSteeringAnimation = 0x1008; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleDriverReverseSteeringAnimationFP = 0x1010; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehiclePassengerIdleAnimation = 0x1018; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _vehicleSpeed = 0x1020; // Size: 4, Type: float
			constexpr auto _vehicleSpeedKph = 0x1024; // Size: 4, Type: float
			constexpr auto _vehicleBumpiness = 0x1028; // Size: 4, Type: float
			constexpr auto _vehicleDriverSteeringAnimationTime = 0x102c; // Size: 4, Type: float
			constexpr auto _vehicleDriverSteeringAnimationTimeInterpSpeed = 0x1030; // Size: 4, Type: float
			constexpr auto _vehicleThrottleAmount = 0x1034; // Size: 4, Type: float
			constexpr auto _vehicleBrakeAmount = 0x1038; // Size: 4, Type: float
			constexpr auto _vehicleHandbrakeAmount = 0x103c; // Size: 4, Type: float
			constexpr auto _vehicleSteerAmount = 0x1040; // Size: 4, Type: float
			constexpr auto _isSledgeAcceleratingForward = 0x1044; // Size: 1, Type: bool
			constexpr auto _isSledgeAcceleratingBackward = 0x1045; // Size: 1, Type: bool
			constexpr auto _sledgeSlidingThresholdSpeed = 0x1048; // Size: 4, Type: float
			constexpr auto _isSledgeSliding = 0x104c; // Size: 1, Type: bool
			constexpr auto _bowArmsShakeAnimation = 0x1050; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _weaponBreathFactor = 0x1058; // Size: 4, Type: float
			constexpr auto _weaponAimDownTheSightsStillBlendFactor = 0x105c; // Size: 4, Type: float
			constexpr auto _areHandsBound = 0x1060; // Size: 1, Type: bool
			constexpr auto _handsBoundIdleFPAnimation = 0x1068; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _handsBoundIdleTPAnimation = 0x1070; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _isResting = 0x1078; // Size: 1, Type: bool
			constexpr auto _restingAnimation = 0x1080; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _restingFeetOffset = 0x1088; // Size: 4, Type: float
			constexpr auto _cameraToActorRotationDeltaYaw = 0x108c; // Size: 4, Type: float
			constexpr auto _cameraToActorRotationDeltaPitch = 0x1090; // Size: 4, Type: float
			constexpr auto _vehicleWeaponAimingStance = 0x1094; // Size: 1, Type: uint8_t 
			constexpr auto _useMountedFirstPersonWeaponAimingParameters = 0x1095; // Size: 1, Type: bool
			constexpr auto _vehicleWAPLocationOffsetDefaultStanceFP = 0x1098; // Size: 12, Type: struct FVector
			constexpr auto _vehicleWAPLocationOffsetLeaningStanceFP = 0x10a4; // Size: 12, Type: struct FVector
			constexpr auto _useMountedThirdPersonWeaponAimingParameters = 0x10b0; // Size: 1, Type: bool
			constexpr auto _vehicleWAPAimOffsetTP = 0x10b8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _useVehicleWAPAimOffsetTP = 0x10c0; // Size: 1, Type: bool
			constexpr auto _vehicleWAPAimOffsetDefaultStanceTP = 0x10c8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _useVehicleWAPAimOffsetDefaultStanceTP = 0x10d0; // Size: 1, Type: bool
			constexpr auto _vehicleWAPAimOffsetLeaningStanceTP = 0x10d8; // Size: 8, Type: struct UBlendSpace*
			constexpr auto _useVehicleWAPAimOffsetLeaningStanceTP = 0x10e0; // Size: 1, Type: bool
			constexpr auto _useVehicleWAPUpperBodyIdleTP = 0x10e1; // Size: 1, Type: bool
			constexpr auto _vehicleWAPUpperBodyIdleRelaxedTP = 0x10e8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPUpperBodyIdleAimingTP = 0x10f0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _useVehicleWAPLowerBodyIdleTP = 0x10f8; // Size: 1, Type: bool
			constexpr auto _vehicleWAPLowerBodyIdleRelaxedTP = 0x1100; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPLowerBodyIdleAimingTP = 0x1108; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPLowerBodyIdleRelaxedDefaultTP = 0x1110; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPLowerBodyIdleAimingDefaultTP = 0x1118; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPLowerBodyIdleRelaxedLeaningTP = 0x1120; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _vehicleWAPLowerBodyIdleAimingLeaningTP = 0x1128; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _isPlayingWAPStanceTransitionMontage = 0x1130; // Size: 1, Type: bool
			constexpr auto _isActivelyFishing = 0x1131; // Size: 1, Type: bool
			constexpr auto _isBaitingFish = 0x1132; // Size: 1, Type: bool
			constexpr auto _isGrappled = 0x1133; // Size: 1, Type: bool
			constexpr auto _useWeaponAimingDownTheSightsZeroRangeBlendSpace = 0x1134; // Size: 1, Type: bool
			constexpr auto _weaponAimingDownTheSightsZeroRangeBlendSpace = 0x1138; // Size: 8, Type: struct UBlendSpace1D*
			constexpr auto _weaponZeroRange = 0x1140; // Size: 4, Type: float
			constexpr auto _isInPhotoMode = 0x1144; // Size: 1, Type: bool
			constexpr auto _hasHighHeels = 0x1145; // Size: 1, Type: bool
	}
} 
