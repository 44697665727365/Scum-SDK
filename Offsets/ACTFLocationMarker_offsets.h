namespace offsets
{
	namespace ACTFLocationMarker
	{
			constexpr auto CTFParameters = 0x418; // Size: 48, Type: struct FCTFParameters
			constexpr auto CaptureOffsetA = 0x448; // Size: 12, Type: struct FVector
			constexpr auto CaptureOffsetB = 0x454; // Size: 12, Type: struct FVector
			constexpr auto CaptureRadiusA = 0x460; // Size: 4, Type: float
			constexpr auto CaptureRadiusB = 0x464; // Size: 4, Type: float
			constexpr auto FlagOffsetA = 0x470; // Size: 48, Type: struct FTransform
			constexpr auto FlagOffsetB = 0x4a0; // Size: 48, Type: struct FTransform
			constexpr auto FlagAPreviewMesh = 0x4d0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto FlagBPreviewMesh = 0x4d8; // Size: 8, Type: struct UStaticMeshComponent*
	}
} 
