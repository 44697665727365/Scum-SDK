namespace offsets
{
	namespace ACTFBase
	{
			constexpr auto SphereComponent = 0x220; // Size: 8, Type: struct USphereComponent*
			constexpr auto Mesh = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto TeamMaterials = 0x230; // Size: 16, Type: struct TArray<struct UMaterialInstance*>
			constexpr auto _gameEvent = 0x240; // Size: 8, Type: struct ACTFGameEvent*
			constexpr auto _team = 0x248; // Size: 4, Type: int32_t
			constexpr auto _radius = 0x24c; // Size: 4, Type: float
	}
} 
