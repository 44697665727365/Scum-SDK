namespace offsets
{
	namespace ADropZoneLocationMarker
	{
			constexpr auto DropZoneParameters = 0x418; // Size: 44, Type: struct FDropZoneParameters
			constexpr auto SpawnOffsetA = 0x444; // Size: 12, Type: struct FVector
			constexpr auto SpawnOffsetB = 0x450; // Size: 12, Type: struct FVector
			constexpr auto SpawnRadiusA = 0x45c; // Size: 4, Type: float
			constexpr auto SpawnRadiusB = 0x460; // Size: 4, Type: float
			constexpr auto CargoDropOffset = 0x470; // Size: 48, Type: struct FTransform
			constexpr auto CrateDropOffsetA = 0x4a0; // Size: 48, Type: struct FTransform
			constexpr auto CrateDropOffsetB = 0x4d0; // Size: 48, Type: struct FTransform
			constexpr auto CrateAPreviewMesh = 0x500; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto CrateBPreviewMesh = 0x508; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto CargoPreviewMesh = 0x510; // Size: 8, Type: struct UStaticMeshComponent*
	}
} 
