namespace offsets
{
	namespace UProceduralMeshComponent
	{
			constexpr auto bUseComplexAsSimpleCollision = 0x480; // Size: 1, Type: bool
			constexpr auto bUseAsyncCooking = 0x481; // Size: 1, Type: bool
			constexpr auto ProcMeshBodySetup = 0x488; // Size: 8, Type: struct UBodySetup*
			constexpr auto ProcMeshSections = 0x490; // Size: 16, Type: struct TArray<struct FProcMeshSection>
			constexpr auto CollisionConvexElems = 0x4a0; // Size: 16, Type: struct TArray<struct FKConvexElem>
			constexpr auto LocalBounds = 0x4b0; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto AsyncBodySetupQueue = 0x4d0; // Size: 16, Type: struct TArray<struct UBodySetup*>
	}
} 
