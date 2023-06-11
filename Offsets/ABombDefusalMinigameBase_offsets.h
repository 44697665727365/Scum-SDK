namespace offsets
{
	namespace ABombDefusalMinigameBase
	{
			constexpr auto _timeBomb = 0x2f8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _splineConnectorMesh = 0x300; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _wireButtonsSize = 0x310; // Size: 12, Type: struct FVector
			constexpr auto _defusalTool = 0x320; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto _toolMovementSensitivity = 0x328; // Size: 4, Type: float
			constexpr auto _minDefusingToolOffsetFromCenter = 0x32c; // Size: 12, Type: struct FVector
			constexpr auto _maxDefusingToolOffsetFromCenter = 0x338; // Size: 12, Type: struct FVector
			constexpr auto _greenLedLight = 0x348; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _redLedLight = 0x350; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _yellowLedLight = 0x358; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto _ledLights = 0x360; // Size: 16, Type: struct TArray<struct UStaticMeshComponent*>
			constexpr auto _ledLightMesh = 0x370; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _wireMesh = 0x380; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _wiresEndPositions = 0x388; // Size: 16, Type: struct TArray<uint8_t >
			constexpr auto _wires = 0x398; // Size: 16, Type: struct TArray<struct FWireDescription>
			constexpr auto _splines = 0x3b8; // Size: 16, Type: struct TArray<struct FSplineDescription>
			constexpr auto _numberOfWires = 0x3d8; // Size: 4, Type: int32_t
			constexpr auto _numberOfWirePoints = 0x3dc; // Size: 4, Type: int32_t
			constexpr auto _wiresShuffleIntensity = 0x3e0; // Size: 4, Type: int32_t
			constexpr auto _minWiresComplexity = 0x3e4; // Size: 4, Type: int32_t
			constexpr auto _wiresForwardAxis = 0x3e8; // Size: 1, Type: uint8_t 
			constexpr auto _wiresStartSmoothness = 0x3ec; // Size: 4, Type: float
			constexpr auto _wiresEndSmoothness = 0x3f0; // Size: 4, Type: float
			constexpr auto _wiresMiddleSmoothness = 0x3f4; // Size: 4, Type: float
			constexpr auto _wiresSharpCornerSmoothness = 0x3f8; // Size: 4, Type: float
			constexpr auto _maxSegmentSize = 0x3fc; // Size: 4, Type: float
			constexpr auto _wirePointsSpreadPositive = 0x400; // Size: 4, Type: float
			constexpr auto _wirePointsSpreadNegative = 0x404; // Size: 4, Type: float
			constexpr auto _wireHeight = 0x408; // Size: 4, Type: float
			constexpr auto _wireVerticalSpacing = 0x40c; // Size: 4, Type: float
			constexpr auto _wirePointsOffset = 0x410; // Size: 12, Type: struct FVector
			constexpr auto _wireEndOffset = 0x41c; // Size: 4, Type: float
			constexpr auto _additionalWireEndPointOffset = 0x420; // Size: 12, Type: struct FVector
			constexpr auto _cutWireSegment0 = 0x430; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _cutWireSegment1 = 0x438; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _cutWireSegment2 = 0x440; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _cutWireSegment3 = 0x448; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _cutWireSegment4 = 0x450; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _cutWireSegment5 = 0x458; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _uncutWireSegment0 = 0x460; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _uncutWireSegment1 = 0x468; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _uncutWireSegment2 = 0x470; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _uncutWireSegment3 = 0x478; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _uncutWireSegment4 = 0x480; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _uncutWireSegment5 = 0x488; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto _wireBox1 = 0x490; // Size: 8, Type: struct UBoxComponent*
			constexpr auto _wireBox2 = 0x498; // Size: 8, Type: struct UBoxComponent*
			constexpr auto _wireBox3 = 0x4a0; // Size: 8, Type: struct UBoxComponent*
			constexpr auto _wireBox4 = 0x4a8; // Size: 8, Type: struct UBoxComponent*
			constexpr auto _wireBox5 = 0x4b0; // Size: 8, Type: struct UBoxComponent*
			constexpr auto _wireBox6 = 0x4b8; // Size: 8, Type: struct UBoxComponent*
			constexpr auto _bombDefusalTimerStartSound = 0x4c0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _bombDefusalTimerStopSound = 0x4c8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _cutWireSound = 0x4d0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _bombDefusedSound = 0x4d8; // Size: 8, Type: struct UAkAudioEvent*
	}
} 
