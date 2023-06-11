namespace offsets
{
	namespace ALockpickingMinigame
	{
			constexpr auto _outerRing = 0x2f8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _movableRing = 0x300; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _lockpickingSetAnchor = 0x308; // Size: 8, Type: struct USceneComponent*
			constexpr auto _lockpickManipulator = 0x310; // Size: 8, Type: struct USceneComponent*
			constexpr auto _lockpickAnchor = 0x318; // Size: 8, Type: struct USceneComponent*
			constexpr auto _lockpick = 0x320; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _tensionToolManipulator = 0x328; // Size: 8, Type: struct USceneComponent*
			constexpr auto _tensionToolAnchor = 0x330; // Size: 8, Type: struct USceneComponent*
			constexpr auto _tensionTool = 0x338; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _zoomStartLocation = 0x340; // Size: 12, Type: struct FVector
			constexpr auto _zoomEndLocation = 0x34c; // Size: 12, Type: struct FVector
			constexpr auto _protectionParticlesTransform = 0x360; // Size: 48, Type: struct FTransform
			constexpr auto _zoomCurve = 0x390; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _fadeCurve = 0x398; // Size: 8, Type: struct UCurveFloat*
			constexpr auto _pickBreakingMultiplierForMediumDifficulty = 0x3a0; // Size: 4, Type: float
			constexpr auto _pickBreakingMultiplierForHardDifficulty = 0x3a4; // Size: 4, Type: float
			constexpr auto _lockpickingLockpickMovementStartAudioEvent = 0x3d8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _lockpickingLockpickMovementStopAudioEvent = 0x3e0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _lockpickingLockTensionStartAudioEvent = 0x3e8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _lockpickingLockTensionStopAudioEvent = 0x3f0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _lockpickingLockTurningStartAudioEvent = 0x3f8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _lockpickingLockTurningStopAudioEvent = 0x400; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _lockpickingSuccessAudioEvent = 0x408; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _lockpickingFailedAudioEvent = 0x410; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _lockpickingResetAudioEvent = 0x418; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _rotatingStartAngle = 0x424; // Size: 4, Type: float
			constexpr auto _duration = 0x428; // Size: 4, Type: float
			constexpr auto _angleTolerance = 0x42c; // Size: 4, Type: float
	}
} 
