namespace offsets
{
	namespace UMotionControllerComponent
	{
			constexpr auto PlayerIndex = 0x450; // Size: 4, Type: int32_t
			constexpr auto Hand = 0x454; // Size: 1, Type: uint8_t 
			constexpr auto MotionSource = 0x458; // Size: 8, Type: struct FName
			constexpr auto bDisableLowLatencyUpdate = 0x460; // Size: 1, Type: char
			constexpr auto CurrentTrackingStatus = 0x464; // Size: 1, Type: uint8_t 
			constexpr auto bDisplayDeviceModel = 0x465; // Size: 1, Type: bool
			constexpr auto DisplayModelSource = 0x468; // Size: 8, Type: struct FName
			constexpr auto CustomDisplayMesh = 0x470; // Size: 8, Type: struct UStaticMesh*
			constexpr auto DisplayMeshMaterialOverrides = 0x478; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto DisplayComponent = 0x4f0; // Size: 8, Type: struct UPrimitiveComponent*
	}
} 
