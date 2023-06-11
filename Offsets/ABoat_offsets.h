namespace offsets
{
	namespace ABoat
	{
			constexpr auto _advancedBuoyancyComponent = 0xae8; // Size: 8, Type: struct UAdvancedBuoyancyComponent*
			constexpr auto _buoyancyComponent = 0xaf0; // Size: 8, Type: struct UConZBuoyancyComponent*
			constexpr auto _waterSplashParticleSystem = 0xb08; // Size: 8, Type: struct UParticleSystem*
			constexpr auto _particleLocations = 0xb10; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto _throttleForceMagnitude = 0xb2c; // Size: 4, Type: float
			constexpr auto _forcePosition = 0xb30; // Size: 12, Type: struct FVector
			constexpr auto _yawImpulse = 0xb3c; // Size: 4, Type: float
			constexpr auto _rollImpulse = 0xb40; // Size: 4, Type: float
			constexpr auto _pitchImpulse = 0xb44; // Size: 4, Type: float
			constexpr auto _isAnchored = 0xb48; // Size: 1, Type: bool
			constexpr auto _driverActionDifficultyVsSpeed = 0xb50; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _driverConstitutionChangeRateModifierVsSpeed = 0xbd8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _driverStrengthChangeRateModifierVsSpeed = 0xc60; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _parametersPerMovementPace[4] = 0xce8; // Size: 96, Type: struct FBoatParametersPerMovementPace
			constexpr auto _maxSpeedModifierInterpedWithDriverDexterity = 0xd48; // Size: 8, Type: struct FFloatInterval
			constexpr auto _throttleInterpSpeed = 0xd50; // Size: 4, Type: float
			constexpr auto _brakeInterpSpeed = 0xd58; // Size: 4, Type: float
			constexpr auto _steerInterpSpeed = 0xd60; // Size: 4, Type: float
			constexpr auto _maxSteeringAngle = 0xd68; // Size: 4, Type: float
			constexpr auto _motorSteeringForce = 0xd6c; // Size: 4, Type: float
			constexpr auto _motorSteerTurnMultiplier = 0xd70; // Size: 4, Type: float
			constexpr auto _maxSpeedForBase = 0xd74; // Size: 4, Type: float
			constexpr auto _sidewaysVelocityFalloff = 0xd78; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _speedKmhVsDensityMultiplier = 0xe00; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _maxMotorSpeed = 0xe88; // Size: 4, Type: float
			constexpr auto _throttleToRpmMultiplier = 0xe8c; // Size: 4, Type: float
			constexpr auto _isPaddleInLeftHand = 0xea0; // Size: 1, Type: bool
			constexpr auto _maxRowingSpeed = 0xea4; // Size: 4, Type: float
			constexpr auto itemNeededClassToStartRowing = 0xea8; // Size: 8, Type: AItem*
			constexpr auto _rowingForce = 0xeb0; // Size: 4, Type: float
			constexpr auto _rowForceMultiplierPerKph = 0xeb8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _rowTurnMultiplier = 0xf40; // Size: 4, Type: float
			constexpr auto _rowTurnMultiplierPerKph = 0xf48; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _rowingAudioEvent = 0xfd0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _desiredDriftMultiplier = 0xfd8; // Size: 4, Type: float
			constexpr auto _paddleDriftSteerMultiplier = 0xfdc; // Size: 4, Type: float
			constexpr auto _numPaddleSwingsInOneHand = 0xfe0; // Size: 4, Type: uint32_t
			constexpr auto _hasSails = 0xfe4; // Size: 1, Type: bool
			constexpr auto _sailingForceMultiplier = 0xfe8; // Size: 4, Type: float
			constexpr auto _sailingForceMultiplierPerKph = 0xff0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _sailingTurnMultiplier = 0x1078; // Size: 4, Type: float
			constexpr auto _sailingTurnMultiplierPerKph = 0x1080; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _sailingRudderStartAudioEvent = 0x1108; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _sailingRudderEndAudioEvent = 0x1110; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _sailsDeploySteps = 0x1118; // Size: 4, Type: int32_t
			constexpr auto _sailsDeploySpeedMultiplier = 0x111c; // Size: 4, Type: float
			constexpr auto _sailsTurnSteps = 0x1120; // Size: 4, Type: uint32_t
			constexpr auto _sailsTurnSpeedMultiplier = 0x1124; // Size: 4, Type: float
			constexpr auto _sailsMaxTurnAngle = 0x1128; // Size: 4, Type: float
			constexpr auto _maxSailingSpeed = 0x112c; // Size: 4, Type: float
			constexpr auto _sailsDeploymentRatioVsForceMultiplier = 0x1130; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto _sailingSteerSoundMultiplier = 0x11b8; // Size: 4, Type: float
			constexpr auto _sdfType = 0x11dc; // Size: 4, Type: uint8_t 
			constexpr auto _LOarWaterParticles = 0x11e0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto _ROarWaterParticles = 0x11e8; // Size: 8, Type: struct UParticleSystemComponent*
	}
} 
