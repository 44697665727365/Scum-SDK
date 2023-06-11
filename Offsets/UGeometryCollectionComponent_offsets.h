namespace offsets
{
	namespace UGeometryCollectionComponent
	{
			constexpr auto ChaosSolverActor = 0x480; // Size: 8, Type: struct AChaosSolverActor*
			constexpr auto RestCollection = 0x568; // Size: 8, Type: struct UGeometryCollection*
			constexpr auto InitializationFields = 0x570; // Size: 16, Type: struct TArray<struct AFieldSystemActor*>
			constexpr auto Simulating = 0x580; // Size: 1, Type: bool
			constexpr auto ObjectType = 0x588; // Size: 1, Type: uint8_t 
			constexpr auto EnableClustering = 0x589; // Size: 1, Type: bool
			constexpr auto ClusterGroupIndex = 0x58c; // Size: 4, Type: int32_t
			constexpr auto MaxClusterLevel = 0x590; // Size: 4, Type: int32_t
			constexpr auto DamageThreshold = 0x598; // Size: 16, Type: struct TArray<float>
			constexpr auto ClusterConnectionType = 0x5a8; // Size: 1, Type: uint8_t 
			constexpr auto CollisionGroup = 0x5ac; // Size: 4, Type: int32_t
			constexpr auto CollisionSampleFraction = 0x5b0; // Size: 4, Type: float
			constexpr auto LinearEtherDrag = 0x5b4; // Size: 4, Type: float
			constexpr auto AngularEtherDrag = 0x5b8; // Size: 4, Type: float
			constexpr auto PhysicalMaterial = 0x5c0; // Size: 8, Type: struct UChaosPhysicalMaterial*
			constexpr auto InitialVelocityType = 0x5c8; // Size: 1, Type: uint8_t 
			constexpr auto InitialLinearVelocity = 0x5cc; // Size: 12, Type: struct FVector
			constexpr auto InitialAngularVelocity = 0x5d8; // Size: 12, Type: struct FVector
			constexpr auto PhysicalMaterialOverride = 0x5e8; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto CacheParameters = 0x5f0; // Size: 80, Type: struct FGeomComponentCacheParameters
			constexpr auto NotifyGeometryCollectionPhysicsStateChange = 0x640; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto NotifyGeometryCollectionPhysicsLoadingStateChange = 0x650; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnChaosBreakEvent = 0x678; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto DesiredCacheTime = 0x688; // Size: 4, Type: float
			constexpr auto CachePlayback = 0x68c; // Size: 1, Type: bool
			constexpr auto OnChaosPhysicsCollision = 0x690; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bNotifyBreaks = 0x6a0; // Size: 1, Type: bool
			constexpr auto bNotifyCollisions = 0x6a1; // Size: 1, Type: bool
			constexpr auto bEnableReplication = 0x6a2; // Size: 1, Type: bool
			constexpr auto bEnableAbandonAfterLevel = 0x6a3; // Size: 1, Type: bool
			constexpr auto ReplicationAbandonClusterLevel = 0x6a4; // Size: 4, Type: int32_t
			constexpr auto RepData = 0x6a8; // Size: 24, Type: struct FGeometryCollectionRepData
			constexpr auto DummyBodySetup = 0x8d8; // Size: 8, Type: struct UBodySetup*
	}
} 
