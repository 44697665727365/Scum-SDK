namespace offsets
{
	namespace UDialLockData
	{
			constexpr auto NumberOfWheels = 0xb0; // Size: 4, Type: int32_t
			constexpr auto LockBodyMesh = 0xb8; // Size: 8, Type: struct UStaticMesh*
			constexpr auto LockClampMesh = 0xc0; // Size: 8, Type: struct UStaticMesh*
			constexpr auto LockDialMeshes = 0xc8; // Size: 16, Type: struct TArray<struct UStaticMesh*>
			constexpr auto WheelUpVector = 0xd8; // Size: 12, Type: struct FVector
	}
} 
