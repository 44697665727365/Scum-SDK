namespace offsets
{
	namespace ADistantLevelManager
	{
			constexpr auto _rootComponent = 0x220; // Size: 8, Type: struct USceneComponent*
			constexpr auto _minCameraLocationChangeToUpdateDistantLevels = 0x228; // Size: 4, Type: float
			constexpr auto _distantMeshPreloadDistance = 0x22c; // Size: 4, Type: float
			constexpr auto _maxNumSimultaneouslyStreamedDistantMeshLODs = 0x230; // Size: 4, Type: int32_t
			constexpr auto _distantCollisionMeshUnloadDistance = 0x234; // Size: 4, Type: float
			constexpr auto _maxNumSimultaneouslyStreamedDistantCollisionMeshes = 0x238; // Size: 4, Type: int32_t
			constexpr auto _distantLevelDescriptions = 0x240; // Size: 16, Type: struct TArray<struct FDistantLevelDescription>
	}
} 
