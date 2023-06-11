namespace offsets
{
	namespace UBaseVDComponent
	{
			constexpr auto SimulationInstance = 0x480; // Size: 8, Type: struct UVDSimulation*
			constexpr auto VDSimObject = 0x488; // Size: 8, Type: struct UVDSimulatedObject*
			constexpr auto Particles = 0x490; // Size: 16, Type: struct TArray<struct UVDSimulatedParticle*>
			constexpr auto FrictionCoefficient = 0x4a0; // Size: 4, Type: float
			constexpr auto RestitutionCoefficient = 0x4a4; // Size: 4, Type: float
			constexpr auto CollisionSettings = 0x4a8; // Size: 64, Type: struct FVDCollisionSettings
			constexpr auto ParticleRadius = 0x4e8; // Size: 4, Type: float
			constexpr auto AttachToRigids = 0x4ec; // Size: 1, Type: bool
			constexpr auto AttachToParticles = 0x4ed; // Size: 1, Type: bool
			constexpr auto AttachToParticlesConstraintStiffness = 0x4f0; // Size: 4, Type: float
			constexpr auto EndOffset = 0x4f4; // Size: 4, Type: float
			constexpr auto DetectionRadiusInflationFactor = 0x4f8; // Size: 4, Type: float
			constexpr auto CreateTensionConstraintsForSimulatingRigids = 0x4fc; // Size: 1, Type: bool
			constexpr auto bSnapToSimulatingAttachment = 0x4fd; // Size: 1, Type: bool
			constexpr auto ManuallyAttachParticles = 0x4fe; // Size: 1, Type: bool
			constexpr auto ParticleAttachments = 0x500; // Size: 16, Type: struct TArray<struct FVDParticleAttachment>
			constexpr auto TensionForce = 0x510; // Size: 4, Type: float
			constexpr auto TensionDampening = 0x514; // Size: 4, Type: float
			constexpr auto AdjustOtherParticleLocationsBasedOnAttachments = 0x518; // Size: 1, Type: char
			constexpr auto AffectedByGlobalWind = 0x518; // Size: 1, Type: char
			constexpr auto UseExplicitRigidBodyCollision = 0x518; // Size: 1, Type: char
			constexpr auto WindResistance = 0x51c; // Size: 4, Type: float
			constexpr auto AffectedByWindSources = 0x520; // Size: 16, Type: struct TArray<struct FComponentReference>
			constexpr auto CheckForWindOccluders = 0x530; // Size: 1, Type: bool
			constexpr auto MaxWindOccluderDistance = 0x534; // Size: 4, Type: float
			constexpr auto WindOccluderTraceSettings = 0x538; // Size: 64, Type: struct FVDCollisionSettings
			constexpr auto OnSimulationDataCreated = 0x578; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPreSimulationSync = 0x588; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSimulationSync = 0x598; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ShowParticles = 0x5a8; // Size: 1, Type: char
			constexpr auto GravityScale = 0x5ac; // Size: 4, Type: float
			constexpr auto MinConstraintDistance = 0x5b0; // Size: 4, Type: float
			constexpr auto SimulateOnlyWhenRendered = 0x5b4; // Size: 1, Type: bool
			constexpr auto SimulationToggleThreshold = 0x5b8; // Size: 4, Type: float
			constexpr auto EnableParticleToParticleCollisions = 0x5bc; // Size: 1, Type: char
			constexpr auto ConsiderInnerCollisions = 0x5bc; // Size: 1, Type: char
			constexpr auto SkipRelativeVelocityCheckDuringRigidBodyCollisions = 0x5bc; // Size: 1, Type: char
			constexpr auto bNotifyOnVDCollision = 0x5bd; // Size: 1, Type: char
			constexpr auto OnVDCollisionEvent = 0x5c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto PendingCollisionNotifications = 0x5d0; // Size: 80, Type: struct TMap<struct UVDSimulatedParticle*, struct FVDCollision>
			constexpr auto ConstraintsToOtherParticles = 0x640; // Size: 16, Type: struct TArray<struct UVDParticleSpringConstraint*>
			constexpr auto bUseLocationCache = 0x670; // Size: 1, Type: char
			constexpr auto bApplyCachedStartLocationBeforeAttachToRigids = 0x670; // Size: 1, Type: char
			constexpr auto CachedStartLocations = 0x678; // Size: 16, Type: struct TArray<struct FVDCachedParticleStartLocation>
	}
} 
