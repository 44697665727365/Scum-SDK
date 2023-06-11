namespace offsets
{
	namespace UVICODynamicsSettings
	{
			constexpr auto ReserveParticleBudget = 0x28; // Size: 4, Type: int32_t
			constexpr auto ReserveConstraintBudget = 0x2c; // Size: 4, Type: int32_t
			constexpr auto ReserveVolumeConstraintBudget = 0x30; // Size: 4, Type: int32_t
			constexpr auto BroadphaseNumCellsToAllocate = 0x34; // Size: 4, Type: int32_t
			constexpr auto BroadphaseCellDimension = 0x38; // Size: 4, Type: float
			constexpr auto BroadphaseMaxParticlesPerCell = 0x3c; // Size: 4, Type: int32_t
			constexpr auto NumberOfThreadsToUse = 0x40; // Size: 4, Type: int32_t
			constexpr auto EnableSelfCollision = 0x44; // Size: 1, Type: bool
			constexpr auto EnablePhysXSceneCollision = 0x45; // Size: 1, Type: bool
			constexpr auto PerformExtraCollisionResolutionLoop = 0x46; // Size: 1, Type: bool
			constexpr auto EnableExplicitRigidBodyCollision = 0x47; // Size: 1, Type: bool
			constexpr auto SimulationFramerate = 0x48; // Size: 4, Type: int32_t
			constexpr auto RunSimulationOnWorkerThread = 0x4c; // Size: 1, Type: bool
			constexpr auto WorkerThreadCoreAffinity = 0x50; // Size: 4, Type: int32_t
			constexpr auto SimulationIterations = 0x54; // Size: 4, Type: int32_t
			constexpr auto ConstraintIterations = 0x58; // Size: 4, Type: int32_t
			constexpr auto ConstrainSimulationTo2DPlane = 0x5c; // Size: 1, Type: bool
			constexpr auto PlaneOrigin = 0x60; // Size: 12, Type: struct FVector
			constexpr auto PlaneNormal = 0x6c; // Size: 12, Type: struct FVector
			constexpr auto bCachePerFrameResults = 0x78; // Size: 1, Type: char
			constexpr auto bCacheOnlyCollisionsWithStaticRigidBodies = 0x78; // Size: 1, Type: char
			constexpr auto bCacheNonHitsAlso = 0x78; // Size: 1, Type: char
			constexpr auto DrawCollisionDebug = 0x78; // Size: 1, Type: char
			constexpr auto bShowOnScreenStats = 0x78; // Size: 1, Type: char
	}
} 
