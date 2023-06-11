namespace offsets
{
	namespace USplineMeshComponent
	{
			constexpr auto SplineParams = 0x4e8; // Size: 88, Type: struct FSplineMeshParams
			constexpr auto SplineUpDir = 0x540; // Size: 12, Type: struct FVector
			constexpr auto SplineBoundaryMin = 0x54c; // Size: 4, Type: float
			constexpr auto CachedMeshBodySetupGuid = 0x550; // Size: 16, Type: struct FGuid
			constexpr auto BodySetup = 0x560; // Size: 8, Type: struct UBodySetup*
			constexpr auto SplineBoundaryMax = 0x568; // Size: 4, Type: float
			constexpr auto bAllowSplineEditingPerInstance = 0x56c; // Size: 1, Type: char
			constexpr auto bSmoothInterpRollScale = 0x56c; // Size: 1, Type: char
			constexpr auto bMeshDirty = 0x56c; // Size: 1, Type: char
			constexpr auto ForwardAxis = 0x56d; // Size: 1, Type: char ESplineMeshAxis
			constexpr auto VirtualTextureMainPassMaxDrawDistance = 0x570; // Size: 4, Type: float
	}
} 
