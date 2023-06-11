#pragma once 
#include <VICODynamicsPlugin_Structs.h>
 
 
 
// Class VICODynamicsPlugin.VDSimulatedObject
// Size: 0x78(Inherited: 0x28) 
struct UVDSimulatedObject : public UObject
{
	char pad_40[80];  // 0x28(0x50)

	void SetSkipRelativeVelocityCheckDuringCollision(bool Skip); // Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision
	void SetObjectType(char ECollisionChannel ObjectType); // Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType
	void SetMinimumConstraintSatisfactionDistance(float MinDistance); // Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance
	void SetGravityScale(float Scale); // Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale
	void SetCollisionResponseToObjectType(char ECollisionChannel ObjectType, char ECollisionResponse Response); // Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType
	void SetCollisionEnabled(bool Enabled); // Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled
	void SetCollisionChannel(char ECollisionChannel Channel); // Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel
	void SetAffectiveWindVector(struct FVector NewWindVector); // Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector
	struct TArray<struct UVDParticleSpringConstraint*> GetSpringConstraints(); // Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints
	bool GetSkipRelativeVelocityCheckDuringCollision(); // Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision
	struct TArray<struct UVDSimulatedParticle*> GetParticles(); // Function VICODynamicsPlugin.VDSimulatedObject.GetParticles
	float GetMinimumConstraintSatisfactionDistance(); // Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance
	float GetGravityScale(); // Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale
	struct FVDCollisionSettings GetCollisionSettings(); // Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings
	bool GetCollisionEnabled(); // Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled
	struct FVector GetAffectiveWindVector(); // Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector
	void DestroyVolumeConstraint(struct UVDMeshVolumeConstraint* Constraint); // Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint
	void DestroyParticle(struct UVDSimulatedParticle* Particle); // Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle
	void DestroyConstraint(struct UVDParticleSpringConstraint* Constraint); // Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint
	struct UVDMeshVolumeConstraint* CreateVolumeConstraint(struct TArray<int32_t> IndexList, float Alpha, float RestVolume); // Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint
	struct UVDParticleSpringConstraint* CreateSpringConstraint(struct UVDSimulatedParticle* Particle1, struct UVDSimulatedParticle* Particle2, float RestDistance, float Stiffness); // Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint
	struct UVDSimulatedParticle* CreateParticle(struct FVDParticleInfo& ParticleInfo); // Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle
}; 



// Class VICODynamicsPlugin.BaseVDComponent
// Size: 0x690(Inherited: 0x480) 
struct UBaseVDComponent : public UMeshComponent
{
	struct UVDSimulation* SimulationInstance;  // 0x480(0x8)
	struct UVDSimulatedObject* VDSimObject;  // 0x488(0x8)
	struct TArray<struct UVDSimulatedParticle*> Particles;  // 0x490(0x10)
	float FrictionCoefficient;  // 0x4A0(0x4)
	float RestitutionCoefficient;  // 0x4A4(0x4)
	struct FVDCollisionSettings CollisionSettings;  // 0x4A8(0x40)
	float ParticleRadius;  // 0x4E8(0x4)
	char pad_1260_1 : 7;  // 0x4EC(0x1)
	bool AttachToRigids : 1;  // 0x4EC(0x1)
	char pad_1261_1 : 7;  // 0x4ED(0x1)
	bool AttachToParticles : 1;  // 0x4ED(0x1)
	char pad_1262[2];  // 0x4EE(0x2)
	float AttachToParticlesConstraintStiffness;  // 0x4F0(0x4)
	float EndOffset;  // 0x4F4(0x4)
	float DetectionRadiusInflationFactor;  // 0x4F8(0x4)
	char pad_1276_1 : 7;  // 0x4FC(0x1)
	bool CreateTensionConstraintsForSimulatingRigids : 1;  // 0x4FC(0x1)
	char pad_1277_1 : 7;  // 0x4FD(0x1)
	bool bSnapToSimulatingAttachment : 1;  // 0x4FD(0x1)
	char pad_1278_1 : 7;  // 0x4FE(0x1)
	bool ManuallyAttachParticles : 1;  // 0x4FE(0x1)
	char pad_1279[1];  // 0x4FF(0x1)
	struct TArray<struct FVDParticleAttachment> ParticleAttachments;  // 0x500(0x10)
	float TensionForce;  // 0x510(0x4)
	float TensionDampening;  // 0x514(0x4)
	char AdjustOtherParticleLocationsBasedOnAttachments : 1;  // 0x518(0x1)
	char AffectedByGlobalWind : 1;  // 0x518(0x1)
	char UseExplicitRigidBodyCollision : 1;  // 0x518(0x1)
	char pad_1304_1 : 5;  // 0x518(0x1)
	char pad_1305[4];  // 0x519(0x4)
	float WindResistance;  // 0x51C(0x4)
	struct TArray<struct FComponentReference> AffectedByWindSources;  // 0x520(0x10)
	char pad_1328_1 : 7;  // 0x530(0x1)
	bool CheckForWindOccluders : 1;  // 0x530(0x1)
	char pad_1329[3];  // 0x531(0x3)
	float MaxWindOccluderDistance;  // 0x534(0x4)
	struct FVDCollisionSettings WindOccluderTraceSettings;  // 0x538(0x40)
	struct FMulticastInlineDelegate OnSimulationDataCreated;  // 0x578(0x10)
	struct FMulticastInlineDelegate OnPreSimulationSync;  // 0x588(0x10)
	struct FMulticastInlineDelegate OnSimulationSync;  // 0x598(0x10)
	char ShowParticles : 1;  // 0x5A8(0x1)
	char pad_1448_1 : 7;  // 0x5A8(0x1)
	char pad_1449[4];  // 0x5A9(0x4)
	float GravityScale;  // 0x5AC(0x4)
	float MinConstraintDistance;  // 0x5B0(0x4)
	char pad_1460_1 : 7;  // 0x5B4(0x1)
	bool SimulateOnlyWhenRendered : 1;  // 0x5B4(0x1)
	char pad_1461[3];  // 0x5B5(0x3)
	float SimulationToggleThreshold;  // 0x5B8(0x4)
	char EnableParticleToParticleCollisions : 1;  // 0x5BC(0x1)
	char ConsiderInnerCollisions : 1;  // 0x5BC(0x1)
	char SkipRelativeVelocityCheckDuringRigidBodyCollisions : 1;  // 0x5BC(0x1)
	char pad_1468_1 : 5;  // 0x5BC(0x1)
	char bNotifyOnVDCollision : 1;  // 0x5BD(0x1)
	char pad_1469_1 : 7;  // 0x5BD(0x1)
	char pad_1470[3];  // 0x5BE(0x3)
	struct FMulticastInlineDelegate OnVDCollisionEvent;  // 0x5C0(0x10)
	struct TMap<struct UVDSimulatedParticle*, struct FVDCollision> PendingCollisionNotifications;  // 0x5D0(0x50)
	char pad_1568[32];  // 0x620(0x20)
	struct TArray<struct UVDParticleSpringConstraint*> ConstraintsToOtherParticles;  // 0x640(0x10)
	char pad_1616[32];  // 0x650(0x20)
	char bUseLocationCache : 1;  // 0x670(0x1)
	char bApplyCachedStartLocationBeforeAttachToRigids : 1;  // 0x670(0x1)
	char pad_1648_1 : 6;  // 0x670(0x1)
	char pad_1649[8];  // 0x671(0x8)
	struct TArray<struct FVDCachedParticleStartLocation> CachedStartLocations;  // 0x678(0x10)
	char pad_1672[8];  // 0x688(0x8)

	void SetUseExplicitRigidBodyCollision(bool UseExplicitCollision); // Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
	void SetAffectedByGlobalWind(bool IsAffected); // Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
	void OnSync(); // Function VICODynamicsPlugin.BaseVDComponent.OnSync
	int32_t GetTensionConstraintCount(); // Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
	struct FVector GetLastAppliedForceFromTensionConstraint(int32_t TensionConstraintIndex); // Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
	void AttachToOverlappingRigidBodies(); // Function VICODynamicsPlugin.BaseVDComponent.AttachToOverlappingRigidBodies
}; 



// Class VICODynamicsPlugin.VDMeshClothComponent
// Size: 0x770(Inherited: 0x690) 
struct UVDMeshClothComponent : public UBaseVDComponent
{
	struct UStaticMesh* HullMesh;  // 0x688(0x8)
	float StretchStiffness;  // 0x690(0x4)
	float BendStiffness;  // 0x694(0x4)
	float Mass;  // 0x698(0x4)
	float DragCoefficient;  // 0x69C(0x4)
	char pad_1704_1 : 7;  // 0x6A8(0x1)
	bool PreserveVolume : 1;  // 0x6A0(0x1)
	float CurrentVolume;  // 0x6A4(0x4)
	float OverrideRestVolume;  // 0x6A8(0x4)
	char UseVertexColorDataForSetup : 1;  // 0x6B0(0x1)
	char pad_1713_1 : 7;  // 0x6B1(0x1)
	char pad_1714[3];  // 0x6B2(0x3)
	float MaxBendConstraintDistance;  // 0x6B4(0x4)
	char pad_1720[40];  // 0x6B8(0x28)
	struct TArray<struct UVDParticleSpringConstraint*> StretchConstraints;  // 0x6E0(0x10)
	struct TArray<struct UVDParticleSpringConstraint*> BendConstraints;  // 0x6F0(0x10)
	struct UVDMeshVolumeConstraint* VolumeConstraint;  // 0x700(0x8)
	char pad_1800[104];  // 0x708(0x68)

	struct UVDMeshVolumeConstraint* GetVolumeConstraint(); // Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
	struct TArray<struct UVDParticleSpringConstraint*> GetStretchConstraintsArray(); // Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
	struct TArray<struct UVDParticleSpringConstraint*> GetBendConstraintsArray(); // Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
}; 



// Class VICODynamicsPlugin.VDBlueprintFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UVDBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	struct UVDSimulation* GetVICODynamicsSimulationInstance(); // Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance
}; 



// Class VICODynamicsPlugin.VDDynamicRopeComponent
// Size: 0x710(Inherited: 0x710) 
struct UVDDynamicRopeComponent : public UVDRopeComponent
{

	void RebuildRopeAttached(float DistancePerSegment, struct USceneComponent* StartAttachedTo, struct FName StartSocket, bool StartSimulateTension, struct USceneComponent* EndAttachedTo, struct FName EndSocket, bool EndSimulateTension); // Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached
	void RebuildRopeAtPoints(float DistancePerSegment, struct FVector& StartLocation, struct FVector& EndLocation, bool bRelativeLocations); // Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints
	void RebuildRope(); // Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRope
}; 



// Class VICODynamicsPlugin.VICODynamicsSettings
// Size: 0x80(Inherited: 0x28) 
struct UVICODynamicsSettings : public UObject
{
	int32_t ReserveParticleBudget;  // 0x28(0x4)
	int32_t ReserveConstraintBudget;  // 0x2C(0x4)
	int32_t ReserveVolumeConstraintBudget;  // 0x30(0x4)
	int32_t BroadphaseNumCellsToAllocate;  // 0x34(0x4)
	float BroadphaseCellDimension;  // 0x38(0x4)
	int32_t BroadphaseMaxParticlesPerCell;  // 0x3C(0x4)
	int32_t NumberOfThreadsToUse;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool EnableSelfCollision : 1;  // 0x44(0x1)
	char pad_69_1 : 7;  // 0x45(0x1)
	bool EnablePhysXSceneCollision : 1;  // 0x45(0x1)
	char pad_70_1 : 7;  // 0x46(0x1)
	bool PerformExtraCollisionResolutionLoop : 1;  // 0x46(0x1)
	char pad_71_1 : 7;  // 0x47(0x1)
	bool EnableExplicitRigidBodyCollision : 1;  // 0x47(0x1)
	int32_t SimulationFramerate;  // 0x48(0x4)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool RunSimulationOnWorkerThread : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	int32_t WorkerThreadCoreAffinity;  // 0x50(0x4)
	int32_t SimulationIterations;  // 0x54(0x4)
	int32_t ConstraintIterations;  // 0x58(0x4)
	char pad_92_1 : 7;  // 0x5C(0x1)
	bool ConstrainSimulationTo2DPlane : 1;  // 0x5C(0x1)
	char pad_93[3];  // 0x5D(0x3)
	struct FVector PlaneOrigin;  // 0x60(0xC)
	struct FVector PlaneNormal;  // 0x6C(0xC)
	char bCachePerFrameResults : 1;  // 0x78(0x1)
	char bCacheOnlyCollisionsWithStaticRigidBodies : 1;  // 0x78(0x1)
	char bCacheNonHitsAlso : 1;  // 0x78(0x1)
	char DrawCollisionDebug : 1;  // 0x78(0x1)
	char bShowOnScreenStats : 1;  // 0x78(0x1)
	char pad_120_1 : 3;  // 0x78(0x1)
	char pad_121[8];  // 0x79(0x8)

}; 



// Class VICODynamicsPlugin.VDRopeComponent
// Size: 0x710(Inherited: 0x690) 
struct UVDRopeComponent : public UBaseVDComponent
{
	float StretchStiffness;  // 0x688(0x4)
	float BendStiffness;  // 0x68C(0x4)
	float Mass;  // 0x690(0x4)
	float DragCoefficient;  // 0x694(0x4)
	float Length;  // 0x698(0x4)
	float Width;  // 0x69C(0x4)
	int32_t NumSegments;  // 0x6A0(0x4)
	int32_t NumSides;  // 0x6A4(0x4)
	float TileMaterial;  // 0x6A8(0x4)
	char pad_1716[28];  // 0x6B4(0x1C)
	struct TArray<struct UVDParticleSpringConstraint*> StretchConstraints;  // 0x6D0(0x10)
	struct TArray<struct UVDParticleSpringConstraint*> BendConstraints;  // 0x6E0(0x10)
	struct TArray<struct FRopePiece> Pieces;  // 0x6F0(0x10)
	char pad_1792[16];  // 0x700(0x10)

	void SetNewRestLengthStartingAtParticle(int32_t ParticleIndexStart, float NewLength); // Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
	void SetNewRestLength(float NewLength, int32_t PieceIndex); // Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
	void ResetRope(); // Function VICODynamicsPlugin.VDRopeComponent.ResetRope
	float GetTrueLength(int32_t PieceIndex); // Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength
	struct TArray<struct FRopePiece> GetPieces(); // Function VICODynamicsPlugin.VDRopeComponent.GetPieces
	void BreakAtSegment(int32_t SegmentIndex); // Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
}; 



// Class VICODynamicsPlugin.VDColliderComponent
// Size: 0xE0(Inherited: 0xB0) 
struct UVDColliderComponent : public UActorComponent
{
	struct UVDSimulation* SimulationInstance;  // 0xB0(0x8)
	struct TArray<struct FComponentReference> AssociatedVDComponents;  // 0xB8(0x10)
	char bAddAllComponents : 1;  // 0xC8(0x1)
	char bIgnoreConvexShapes : 1;  // 0xC8(0x1)
	char pad_200_1 : 6;  // 0xC8(0x1)
	char pad_201[8];  // 0xC9(0x8)
	struct TArray<struct FName> SpecificColliders;  // 0xD0(0x10)

}; 



// Class VICODynamicsPlugin.VDMeshVolumeConstraint
// Size: 0x38(Inherited: 0x28) 
struct UVDMeshVolumeConstraint : public UObject
{
	char pad_40[16];  // 0x28(0x10)

	void SetRestVolume(float NewVolume); // Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume
	float GetRestVolume(); // Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume
	float GetCurrentVolume(); // Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume
}; 



// Class VICODynamicsPlugin.VDParticleSpringConstraint
// Size: 0x38(Inherited: 0x28) 
struct UVDParticleSpringConstraint : public UObject
{
	char pad_40[16];  // 0x28(0x10)

	void SetStiffness(float& NewStiffness); // Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness
	void SetRestDistance(float& NewRestDistance); // Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance
	bool IsConstraining(struct UVDSimulatedParticle* Particle1, struct UVDSimulatedParticle* Particle2); // Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining
	float GetStifffness(); // Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness
	float GetRestDistance(); // Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance
	struct UVDSimulatedParticle* GetParticle2(); // Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2
	struct UVDSimulatedParticle* GetParticle1(); // Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1
}; 



// Class VICODynamicsPlugin.VDProceduralClothComponent
// Size: 0x700(Inherited: 0x690) 
struct UVDProceduralClothComponent : public UBaseVDComponent
{
	float StretchStiffness;  // 0x688(0x4)
	float BendStiffness;  // 0x68C(0x4)
	float Mass;  // 0x690(0x4)
	float DragCoefficient;  // 0x694(0x4)
	float Width;  // 0x698(0x4)
	float Height;  // 0x69C(0x4)
	int32_t NumParticlesWide;  // 0x6A0(0x4)
	int32_t NumParticlesHigh;  // 0x6A4(0x4)
	float TileMaterialAlongWidth;  // 0x6A8(0x4)
	float TileMaterialAlongHeight;  // 0x6AC(0x4)
	char pad_1720[24];  // 0x6B8(0x18)
	struct TArray<struct UVDParticleSpringConstraint*> StretchConstraints;  // 0x6D0(0x10)
	struct TArray<struct UVDParticleSpringConstraint*> BendConstraints;  // 0x6E0(0x10)
	char pad_1776[16];  // 0x6F0(0x10)

}; 



// Class VICODynamicsPlugin.VDSimulatedParticle
// Size: 0xA8(Inherited: 0x28) 
struct UVDSimulatedParticle : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool IsAttached : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FVDParticleAttachment Attachment;  // 0x30(0x60)
	char pad_144[24];  // 0x90(0x18)

	void SetVelocity(struct FVector& NewVelocity); // Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
	void SetRestitutionCoefficient(float NewRestitutionCoefficient); // Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
	void SetRadius(float NewRadius); // Function VICODynamicsPlugin.VDSimulatedParticle.SetRadius
	void SetMass(float NewMass); // Function VICODynamicsPlugin.VDSimulatedParticle.SetMass
	void SetLocation(struct FVector& NewLocation); // Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation
	void SetIsWindOccluded(bool IsOccluded); // Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
	void SetIsRigidBodyCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
	void SetIsParticleCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
	void SetIsFree(bool IsFree); // Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
	void SetFrictionCoefficient(float NewFrictionCoefficient); // Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
	void SetDragCoefficient(float NewDragCoefficient); // Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
	struct FVector GetVelocity(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
	float GetRestitutionCoefficient(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
	float GetRadius(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius
	float GetMass(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetMass
	struct FVector GetLocation(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation
	bool GetIsWindOccluded(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
	bool GetIsRigidBodyCollisionEnabled(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
	bool GetIsParticleCollisionEnabled(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
	bool GetIsFree(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
	float GetFrictionCoefficient(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
	float GetDragCoefficient(); // Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
	bool GetAttachment(struct FVDParticleAttachment& OutAttachment); // Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
	void Detach(); // Function VICODynamicsPlugin.VDSimulatedParticle.Detach
	void CopyAttachment(struct FVDParticleAttachment& Attachment, bool UseCurrentMass); // Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
	bool AttachToLocation(struct FVector Location, bool IsRelative); // Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
	bool AttachToComponent(struct UPrimitiveComponent* Component, struct FVector Location, bool SimulateTension, struct FName Socket); // Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
	bool AttachToActor(struct AActor* Actor, struct FVector Location, bool SimulateTension, struct FName Socket); // Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
	void AddForce(struct FVector& force); // Function VICODynamicsPlugin.VDSimulatedParticle.AddForce
}; 



// Class VICODynamicsPlugin.VDSimulation
// Size: 0x178(Inherited: 0x28) 
struct UVDSimulation : public UObject
{
	char pad_40[320];  // 0x28(0x140)
	struct TArray<struct UVDWindDirectionalSourceComponent*> WindSources;  // 0x168(0x10)

	void SetSubstepCount(int32_t SubstepCount); // Function VICODynamicsPlugin.VDSimulation.SetSubstepCount
	void SetSelfCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
	void SetPhysXSceneCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
	void SetPerFrameCollisionCacheEnable(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
	void SetPerformExtraCollisionResolutionLoop(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
	void SetIsExplicitRigidBodyCollisionEnabled(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
	void SetFrameRate(int32_t FrameRate); // Function VICODynamicsPlugin.VDSimulation.SetFrameRate
	void SetConstraintIterationCount(int32_t ConstraintIterationCount); // Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
	void SetConstrainSimulationTo2DPlane(bool IsEnabled); // Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
	void SetConstrainPlaneOrigin(struct FVector Origin); // Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
	void SetConstrainPlaneNormal(struct FVector Normal); // Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
	void RemoveExplicitColliderMapping(struct UBaseVDComponent* VDComponent, struct UPrimitiveComponent* Collider); // Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
	void RemoveAllExplicitColliderMappings(struct UBaseVDComponent* VDComponent); // Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
	bool k2QuerySphereOverlaps(struct FVector Location, float Radius, struct TArray<struct UVDSimulatedParticle*>& Overlaps, struct TArray<struct UVDSimulatedObject*>& SimObjectsToIgnore, int32_t MaxOverlaps); // Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
	bool k2QueryBoxOverlaps(struct FVector Location, struct FVector HalfExtents, struct TArray<struct UVDSimulatedParticle*>& Overlaps, struct TArray<struct UVDSimulatedObject*>& SimObjectsToIgnore, int32_t MaxOverlaps); // Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
	struct FVDSettings GetSettings(); // Function VICODynamicsPlugin.VDSimulation.GetSettings
	bool GetIsRunningOnWorkerThread(); // Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
	bool GetIsExplicitRigidBodyCollisionEnabled(); // Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
	void GetDirectionalWindParameters(struct UBaseVDComponent* VDComponent, struct FVector& OutDirection, float& OutSpeed, float& OutGust); // Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
	void AddExplicitColliderMapping(struct UBaseVDComponent* VDComponent, struct UPrimitiveComponent* Collider, bool IgnoreConvexShapes); // Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
}; 



// Class VICODynamicsPlugin.VDSimulationSettingsActor
// Size: 0x278(Inherited: 0x220) 
struct AVDSimulationSettingsActor : public AInfo
{
	struct FVDSettings Settings;  // 0x220(0x58)

	struct FVDSettings GetSettings(); // Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
}; 



// Class VICODynamicsPlugin.VDSkinnedRopeComponent
// Size: 0x740(Inherited: 0x710) 
struct UVDSkinnedRopeComponent : public UVDRopeComponent
{
	struct FComponentReference PoseableMeshRef;  // 0x708(0x28)
	char pad_1848[8];  // 0x738(0x8)

}; 



// Class VICODynamicsPlugin.VDSplineRopeComponent
// Size: 0x740(Inherited: 0x710) 
struct UVDSplineRopeComponent : public UVDRopeComponent
{
	struct FComponentReference SplineRef;  // 0x708(0x28)
	char bAutoAttachToSplineEndPoints : 1;  // 0x730(0x1)
	char bStretchToSplineLength : 1;  // 0x730(0x1)
	float SplineLength;  // 0x734(0x4)
	char pad_1852_1 : 6;  // 0x73C(0x1)
	char pad_1853[4];  // 0x73D(0x4)

}; 



// Class VICODynamicsPlugin.VDWindDirectionalSourceActor
// Size: 0x228(Inherited: 0x220) 
struct AVDWindDirectionalSourceActor : public AInfo
{
	struct UVDWindDirectionalSourceComponent* Component;  // 0x220(0x8)

}; 



// Class VICODynamicsPlugin.VDWindDirectionalSourceComponent
// Size: 0x240(Inherited: 0x200) 
struct UVDWindDirectionalSourceComponent : public USceneComponent
{
	float Radius;  // 0x1F8(0x4)
	float Strength;  // 0x1FC(0x4)
	float Speed;  // 0x200(0x4)
	float MinGustAmount;  // 0x204(0x4)
	float MaxGustAmount;  // 0x208(0x4)
	float MinGustDuration;  // 0x20C(0x4)
	float MaxGustDuration;  // 0x210(0x4)
	float MinGustTransitionSpeed;  // 0x214(0x4)
	float MaxGustTransitionSpeed;  // 0x218(0x4)
	float MinSecondsBetweenGusts;  // 0x21C(0x4)
	float MaxSecondsBetweenGusts;  // 0x220(0x4)
	char pad_556[20];  // 0x22C(0x14)

	void SetRadius(float InRadius); // Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
	float GetCurrentGust(); // Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
}; 



