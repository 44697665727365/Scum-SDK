namespace offsets
{
	namespace UAkGeometryComponent
	{
			constexpr auto MeshType = 0x210; // Size: 1, Type: uint8_t 
			constexpr auto LOD = 0x214; // Size: 4, Type: int32_t
			constexpr auto WeldingThreshold = 0x218; // Size: 4, Type: float
			constexpr auto StaticMeshSurfaceOverride = 0x220; // Size: 80, Type: struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride>
			constexpr auto CollisionMeshSurfaceOverride = 0x270; // Size: 24, Type: struct FAkGeometrySurfaceOverride
			constexpr auto bEnableDiffraction = 0x288; // Size: 1, Type: char
			constexpr auto bEnableDiffractionOnBoundaryEdges = 0x288; // Size: 1, Type: char
			constexpr auto AssociatedRoom = 0x290; // Size: 8, Type: struct AActor*
			constexpr auto GeometryData = 0x2a8; // Size: 80, Type: struct FAkGeometryData
			constexpr auto SurfaceAreas = 0x2f8; // Size: 80, Type: struct TMap<int32_t, double>
	}
} 
