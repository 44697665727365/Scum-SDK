namespace offsets
{
	namespace AWheelBarrow
	{
			constexpr auto _driverCapsuleMaxDepenetrationVelocity = 0xaf8; // Size: 4, Type: float
			constexpr auto _driverCapsuleRelativeLocation = 0xafc; // Size: 12, Type: struct FVector
			constexpr auto _driverCapsuleMass = 0xb08; // Size: 4, Type: float
			constexpr auto _driverCapsuleLinearDamping = 0xb0c; // Size: 4, Type: float
			constexpr auto _driverCapsuleAngularDamping = 0xb10; // Size: 4, Type: float
			constexpr auto _driverCapsuleConstraintRelativeLocation = 0xb14; // Size: 12, Type: struct FVector
			constexpr auto _driverCapsuleConstraintSwingLimit = 0xb20; // Size: 4, Type: float
			constexpr auto _driverCapsuleConstraintTwistLimit = 0xb24; // Size: 4, Type: float
			constexpr auto _driverTransformRelativeToCapsule = 0xb30; // Size: 48, Type: struct FTransform
			constexpr auto _driverActionDifficultyVsSpeed = 0xb60; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _driverActionDifficultyVsSpeedWhenLimping = 0xbe8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _driverBaseConstitutionChangeRateModifierVsSpeed = 0xc70; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _driverBaseConstitutionChangeRateModifierVsSpeedWhenLimping = 0xcf8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _driverStrengthGainSpeedInfluenceVsSpeed = 0xd80; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _driverStrengthGainSpeedInfluenceVsSpeedWhenLimping = 0xe08; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _loadModifierInterpedWithDriverStrength = 0xe90; // Size: 8, Type: struct FFloatInterval
			constexpr auto _parametersPerMovementPace[4] = 0xe98; // Size: 128, Type: struct FWheelBarrowParametersPerMovementPace
			constexpr auto _maxSpeedModifierInterpedWithDriverDexterity = 0xf18; // Size: 8, Type: struct FFloatInterval
			constexpr auto _weightLoadFactorVsFloorSlopeAngle = 0xf20; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _forwardDriveForceMagnitude = 0xfa8; // Size: 4, Type: float
			constexpr auto _reverseDriveForceMagnitude = 0xfac; // Size: 4, Type: float
			constexpr auto _steerForceMagnitude = 0xfb0; // Size: 4, Type: float
			constexpr auto _steerForceMagnitudeWhenLimping = 0xfb4; // Size: 4, Type: float
			constexpr auto _steerRollTorqueMagnitude = 0xfb8; // Size: 4, Type: float
			constexpr auto _meshBrakeForceScale = 0xfbc; // Size: 4, Type: float
			constexpr auto _meshBrakeForceMagnitudeWhenCloseToMaxSpeed = 0xfc0; // Size: 4, Type: float
			constexpr auto _meshSidewaysBrakeForceScale = 0xfc4; // Size: 4, Type: float
			constexpr auto _driverCapsuleBrakeForceScale = 0xfc8; // Size: 4, Type: float
			constexpr auto _driverCapsuleBrakeForceMagnitudeWhenCloseToMaxSpeed = 0xfcc; // Size: 4, Type: float
			constexpr auto _driverCapsuleSidewaysBrakeForceScale = 0xfd0; // Size: 4, Type: float
			constexpr auto _physicsMaterialFrictionWhenDriven = 0xfd4; // Size: 4, Type: float
			constexpr auto _physicsMaterialRestitutionWhenDriven = 0xfd8; // Size: 4, Type: float
			constexpr auto _stickyFrictionEnabled = 0xfdc; // Size: 1, Type: bool
			constexpr auto _stickyFrictionSpeedThreshold = 0xfe0; // Size: 4, Type: float
			constexpr auto _stickyFriction = 0xfe4; // Size: 4, Type: float
			constexpr auto _healthDrainPerSpeed = 0xfe8; // Size: 4, Type: float
			constexpr auto _healthDrainPerLoad = 0xfec; // Size: 4, Type: float
			constexpr auto _healthDrainUpdateInterval = 0xff0; // Size: 4, Type: float
			constexpr auto _speedThresholdToEvictAllMountees = 0xff8; // Size: 4, Type: float
			constexpr auto _vertSpeedThresholdToEvictAllMountees = 0xffc; // Size: 4, Type: float
			constexpr auto _startedMovingAudioEvent = 0x1000; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _stoppedMovingAudioEvent = 0x1008; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _sendStateFrequency = 0x1014; // Size: 4, Type: float
			constexpr auto _driverPhysicsConstraintComponent = 0x1018; // Size: 8, Type: struct UPhysicsConstraintComponent*
			constexpr auto _physicsMaterialWhenDriven = 0x1028; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto _driverPhysicsCapsuleComponent = 0x11b8; // Size: 8, Type: struct UWheelBarrowDriverCapsuleComponent*
			constexpr auto _attachedWheels = 0x11c0; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UVehicleAttachment_Wheel>>
			constexpr auto _wheelMesh = 0x1210; // Size: 8, Type: struct UStaticMeshComponent*
	}
} 
