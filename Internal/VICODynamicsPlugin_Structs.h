#pragma once 
#include "SDK.h" 
 
 
// Function VICODynamicsPlugin.VDSimulatedObject.GetGravityScale
// Size: 0x4(Inherited: 0x0) 
struct FGetGravityScale
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.CreateParticle
// Size: 0x28(Inherited: 0x0) 
struct FCreateParticle
{
	struct FVDParticleInfo ParticleInfo;  // 0x0(0x1C)
	char pad_28[4];  // 0x1C(0x4)
	struct UVDSimulatedParticle* ReturnValue;  // 0x20(0x8)

}; 
// ScriptStruct VICODynamicsPlugin.VDSimulationTickFunction
// Size: 0x30(Inherited: 0x28) 
struct FVDSimulationTickFunction : public FTickFunction
{
	char pad_40[8];  // 0x28(0x8)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetMass
// Size: 0x4(Inherited: 0x0) 
struct FSetMass
{
	float NewMass;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.DestroyParticle
// Size: 0x8(Inherited: 0x0) 
struct FDestroyParticle
{
	struct UVDSimulatedParticle* Particle;  // 0x0(0x8)

}; 
// Function VICODynamicsPlugin.BaseVDComponent.GetTensionConstraintCount
// Size: 0x4(Inherited: 0x0) 
struct FGetTensionConstraintCount
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// DelegateFunction VICODynamicsPlugin.VDCollisionDelegate__DelegateSignature
// Size: 0x30(Inherited: 0x0) 
struct FVDCollisionDelegate__DelegateSignature
{
	struct UBaseVDComponent* VDComponent;  // 0x0(0x8)
	struct UPrimitiveComponent* OtherComponent;  // 0x8(0x8)
	struct FVector HitLocation;  // 0x10(0xC)
	struct FVector HitNormal;  // 0x1C(0xC)
	struct UVDSimulatedParticle* Particle;  // 0x28(0x8)

}; 
// Function VICODynamicsPlugin.VDParticleSpringConstraint.IsConstraining
// Size: 0x18(Inherited: 0x0) 
struct FIsConstraining
{
	struct UVDSimulatedParticle* Particle1;  // 0x0(0x8)
	struct UVDSimulatedParticle* Particle2;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct VICODynamicsPlugin.VDCachedParticleStartLocation
// Size: 0x10(Inherited: 0x0) 
struct FVDCachedParticleStartLocation
{
	struct FVector Location;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bIsAttached : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// ScriptStruct VICODynamicsPlugin.VDParticleInfo
// Size: 0x1C(Inherited: 0x0) 
struct FVDParticleInfo
{
	char IsFree : 1;  // 0x0(0x1)
	char IsRigidBodyCollisionEnabled : 1;  // 0x0(0x1)
	char IsParticleCollisionEnabled : 1;  // 0x0(0x1)
	char pad_0_1 : 5;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)
	float Radius;  // 0x4(0x4)
	struct FVector Location;  // 0x8(0xC)
	float Mass;  // 0x14(0x4)
	float DragCoefficient;  // 0x18(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.GetAffectiveWindVector
// Size: 0xC(Inherited: 0x0) 
struct FGetAffectiveWindVector
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.CopyAttachment
// Size: 0x68(Inherited: 0x0) 
struct FCopyAttachment
{
	struct FVDParticleAttachment Attachment;  // 0x0(0x60)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool UseCurrentMass : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.GetMinimumConstraintSatisfactionDistance
// Size: 0x4(Inherited: 0x0) 
struct FGetMinimumConstraintSatisfactionDistance
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct VICODynamicsPlugin.VDCollision
// Size: 0x20(Inherited: 0x0) 
struct FVDCollision
{
	char pad_0[32];  // 0x0(0x20)

}; 
// ScriptStruct VICODynamicsPlugin.RopePiece
// Size: 0x8(Inherited: 0x0) 
struct FRopePiece
{
	int32_t StartParticleIndex;  // 0x0(0x4)
	int32_t EndParticleIndex;  // 0x4(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.GetSkipRelativeVelocityCheckDuringCollision
// Size: 0x1(Inherited: 0x0) 
struct FGetSkipRelativeVelocityCheckDuringCollision
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDRopeComponent.GetPieces
// Size: 0x10(Inherited: 0x0) 
struct FGetPieces
{
	struct TArray<struct FRopePiece> ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct VICODynamicsPlugin.VDParticleAttachment
// Size: 0x60(Inherited: 0x0) 
struct FVDParticleAttachment
{
	int32_t ParticleIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool AttachingToAnotherParticle : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool SimulateTensionForces : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)
	struct FVector Location;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool IsRelative : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FComponentReference ComponentRef;  // 0x18(0x28)
	struct FName Socket;  // 0x40(0x8)
	char pad_72[24];  // 0x48(0x18)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.CreateVolumeConstraint
// Size: 0x20(Inherited: 0x0) 
struct FCreateVolumeConstraint
{
	struct TArray<int32_t> IndexList;  // 0x0(0x10)
	float Alpha;  // 0x10(0x4)
	float RestVolume;  // 0x14(0x4)
	struct UVDMeshVolumeConstraint* ReturnValue;  // 0x18(0x8)

}; 
// ScriptStruct VICODynamicsPlugin.VDCollisionSettings
// Size: 0x40(Inherited: 0x0) 
struct FVDCollisionSettings
{
	char ECollisionChannel ObjectType;  // 0x0(0x1)
	char ECollisionEnabled CollisionEnabled;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct FCollisionResponse CollisionResponse;  // 0x8(0x30)
	struct FName CollisionProfileName;  // 0x38(0x8)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetDragCoefficient
// Size: 0x4(Inherited: 0x0) 
struct FGetDragCoefficient
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct VICODynamicsPlugin.VDSettings
// Size: 0x58(Inherited: 0x0) 
struct FVDSettings
{
	char bOverride_ReserveParticleBudget : 1;  // 0x0(0x1)
	char bOverride_ReserveConstraintBudget : 1;  // 0x0(0x1)
	char bOverride_ReserveVolumeConstraintBudget : 1;  // 0x0(0x1)
	char bOverride_BroadphaseNumCellsToAllocate : 1;  // 0x0(0x1)
	char bOverride_BroadphaseCellDimension : 1;  // 0x0(0x1)
	char bOverride_BroadphaseMaxParticlesPerCell : 1;  // 0x0(0x1)
	char bOverride_NumberOfThreadsToUse : 1;  // 0x0(0x1)
	char bOverride_EnableSelfCollision : 1;  // 0x0(0x1)
	char bOverride_EnablePhysXSceneCollision : 1;  // 0x1(0x1)
	char bOverride_PerformExtraCollisionResolutionLoop : 1;  // 0x1(0x1)
	char bOverride_EnableExplicitRigidBodyCollision : 1;  // 0x1(0x1)
	char bOverride_SimulationFramerate : 1;  // 0x1(0x1)
	char bOverride_RunSimulationOnWorkerThread : 1;  // 0x1(0x1)
	char bOverride_WorkerThreadCoreAffinity : 1;  // 0x1(0x1)
	char bOverride_SimulationIterations : 1;  // 0x1(0x1)
	char bOverride_ConstraintIterations : 1;  // 0x1(0x1)
	char bOverride_ConstrainSimulationTo2DPlane : 1;  // 0x2(0x1)
	char bOverride_PlaneOrigin : 1;  // 0x2(0x1)
	char bOverride_PlaneNormal : 1;  // 0x2(0x1)
	char bOverride_CachePerFrameResults : 1;  // 0x2(0x1)
	char bOverride_CacheOnlyCollisionsWithStaticRigidBodies : 1;  // 0x2(0x1)
	char bOverride_CacheNonHitsAlso : 1;  // 0x2(0x1)
	char pad_2_1 : 2;  // 0x2(0x1)
	char pad_3[2];  // 0x3(0x2)
	int32_t ReserveParticleBudget;  // 0x4(0x4)
	int32_t ReserveConstraintBudget;  // 0x8(0x4)
	int32_t ReserveVolumeConstraintBudget;  // 0xC(0x4)
	int32_t BroadphaseNumCellsToAllocate;  // 0x10(0x4)
	float BroadphaseCellDimension;  // 0x14(0x4)
	int32_t BroadphaseMaxParticlesPerCell;  // 0x18(0x4)
	int32_t NumberOfThreadsToUse;  // 0x1C(0x4)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool EnableSelfCollision : 1;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool EnablePhysXSceneCollision : 1;  // 0x21(0x1)
	char pad_34_1 : 7;  // 0x22(0x1)
	bool PerformExtraCollisionResolutionLoop : 1;  // 0x22(0x1)
	char pad_35_1 : 7;  // 0x23(0x1)
	bool EnableExplicitRigidBodyCollision : 1;  // 0x23(0x1)
	int32_t SimulationFramerate;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool RunSimulationOnWorkerThread : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	int32_t WorkerThreadCoreAffinity;  // 0x2C(0x4)
	int32_t SimulationIterations;  // 0x30(0x4)
	int32_t ConstraintIterations;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool ConstrainSimulationTo2DPlane : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	struct FVector PlaneOrigin;  // 0x3C(0xC)
	struct FVector PlaneNormal;  // 0x48(0xC)
	char bCachePerFrameResults : 1;  // 0x54(0x1)
	char bCacheOnlyCollisionsWithStaticRigidBodies : 1;  // 0x54(0x1)
	char bCacheNonHitsAlso : 1;  // 0x54(0x1)
	char DrawCollisionDebug : 1;  // 0x54(0x1)
	char bShowOnScreenStats : 1;  // 0x54(0x1)
	char pad_84_1 : 3;  // 0x54(0x1)
	char pad_85[4];  // 0x55(0x4)

}; 
// Function VICODynamicsPlugin.BaseVDComponent.GetLastAppliedForceFromTensionConstraint
// Size: 0x10(Inherited: 0x0) 
struct FGetLastAppliedForceFromTensionConstraint
{
	int32_t TensionConstraintIndex;  // 0x0(0x4)
	struct FVector ReturnValue;  // 0x4(0xC)

}; 
// Function VICODynamicsPlugin.BaseVDComponent.SetAffectedByGlobalWind
// Size: 0x1(Inherited: 0x0) 
struct FSetAffectedByGlobalWind
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsAffected : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDRopeComponent.GetTrueLength
// Size: 0x8(Inherited: 0x0) 
struct FGetTrueLength
{
	int32_t PieceIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.SetGravityScale
// Size: 0x4(Inherited: 0x0) 
struct FSetGravityScale
{
	float Scale;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.CreateSpringConstraint
// Size: 0x20(Inherited: 0x0) 
struct FCreateSpringConstraint
{
	struct UVDSimulatedParticle* Particle1;  // 0x0(0x8)
	struct UVDSimulatedParticle* Particle2;  // 0x8(0x8)
	float RestDistance;  // 0x10(0x4)
	float Stiffness;  // 0x14(0x4)
	struct UVDParticleSpringConstraint* ReturnValue;  // 0x18(0x8)

}; 
// Function VICODynamicsPlugin.BaseVDComponent.SetUseExplicitRigidBodyCollision
// Size: 0x1(Inherited: 0x0) 
struct FSetUseExplicitRigidBodyCollision
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool UseExplicitCollision : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDBlueprintFunctionLibrary.GetVICODynamicsSimulationInstance
// Size: 0x8(Inherited: 0x0) 
struct FGetVICODynamicsSimulationInstance
{
	struct UVDSimulation* ReturnValue;  // 0x0(0x8)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.GetParticles
// Size: 0x10(Inherited: 0x0) 
struct FGetParticles
{
	struct TArray<struct UVDSimulatedParticle*> ReturnValue;  // 0x0(0x10)

}; 
// Function VICODynamicsPlugin.VDRopeComponent.BreakAtSegment
// Size: 0x4(Inherited: 0x0) 
struct FBreakAtSegment
{
	int32_t SegmentIndex;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDMeshClothComponent.GetBendConstraintsArray
// Size: 0x10(Inherited: 0x0) 
struct FGetBendConstraintsArray
{
	struct TArray<struct UVDParticleSpringConstraint*> ReturnValue;  // 0x0(0x10)

}; 
// Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLength
// Size: 0x8(Inherited: 0x0) 
struct FSetNewRestLength
{
	float NewLength;  // 0x0(0x4)
	int32_t PieceIndex;  // 0x4(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetRestitutionCoefficient
// Size: 0x4(Inherited: 0x0) 
struct FSetRestitutionCoefficient
{
	float NewRestitutionCoefficient;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetRestDistance
// Size: 0x4(Inherited: 0x0) 
struct FGetRestDistance
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDRopeComponent.SetNewRestLengthStartingAtParticle
// Size: 0x8(Inherited: 0x0) 
struct FSetNewRestLengthStartingAtParticle
{
	int32_t ParticleIndexStart;  // 0x0(0x4)
	float NewLength;  // 0x4(0x4)

}; 
// Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAtPoints
// Size: 0x20(Inherited: 0x0) 
struct FRebuildRopeAtPoints
{
	float DistancePerSegment;  // 0x0(0x4)
	struct FVector StartLocation;  // 0x4(0xC)
	struct FVector EndLocation;  // 0x10(0xC)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bRelativeLocations : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function VICODynamicsPlugin.VDDynamicRopeComponent.RebuildRopeAttached
// Size: 0x38(Inherited: 0x0) 
struct FRebuildRopeAttached
{
	float DistancePerSegment;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct USceneComponent* StartAttachedTo;  // 0x8(0x8)
	struct FName StartSocket;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool StartSimulateTension : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct USceneComponent* EndAttachedTo;  // 0x20(0x8)
	struct FName EndSocket;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool EndSimulateTension : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function VICODynamicsPlugin.VDMeshClothComponent.GetStretchConstraintsArray
// Size: 0x10(Inherited: 0x0) 
struct FGetStretchConstraintsArray
{
	struct TArray<struct UVDParticleSpringConstraint*> ReturnValue;  // 0x0(0x10)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetFrictionCoefficient
// Size: 0x4(Inherited: 0x0) 
struct FGetFrictionCoefficient
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToLocation
// Size: 0x10(Inherited: 0x0) 
struct FAttachToLocation
{
	struct FVector Location;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool IsRelative : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool ReturnValue : 1;  // 0xD(0x1)
	char pad_14[2];  // 0xE(0x2)

}; 
// Function VICODynamicsPlugin.VDMeshClothComponent.GetVolumeConstraint
// Size: 0x8(Inherited: 0x0) 
struct FGetVolumeConstraint
{
	struct UVDMeshVolumeConstraint* ReturnValue;  // 0x0(0x8)

}; 
// Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetCurrentVolume
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentVolume
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDMeshVolumeConstraint.GetRestVolume
// Size: 0x4(Inherited: 0x0) 
struct FGetRestVolume
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDMeshVolumeConstraint.SetRestVolume
// Size: 0x4(Inherited: 0x0) 
struct FSetRestVolume
{
	float NewVolume;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetStifffness
// Size: 0x4(Inherited: 0x0) 
struct FGetStifffness
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle1
// Size: 0x8(Inherited: 0x0) 
struct FGetParticle1
{
	struct UVDSimulatedParticle* ReturnValue;  // 0x0(0x8)

}; 
// Function VICODynamicsPlugin.VDParticleSpringConstraint.GetParticle2
// Size: 0x8(Inherited: 0x0) 
struct FGetParticle2
{
	struct UVDSimulatedParticle* ReturnValue;  // 0x0(0x8)

}; 
// Function VICODynamicsPlugin.VDParticleSpringConstraint.SetRestDistance
// Size: 0x4(Inherited: 0x0) 
struct FSetRestDistance
{
	float NewRestDistance;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionResponseToObjectType
// Size: 0x2(Inherited: 0x0) 
struct FSetCollisionResponseToObjectType
{
	char ECollisionChannel ObjectType;  // 0x0(0x1)
	char ECollisionResponse Response;  // 0x1(0x1)

}; 
// Function VICODynamicsPlugin.VDParticleSpringConstraint.SetStiffness
// Size: 0x4(Inherited: 0x0) 
struct FSetStiffness
{
	float NewStiffness;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToActor
// Size: 0x28(Inherited: 0x0) 
struct FAttachToActor
{
	struct AActor* Actor;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool SimulateTension : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FName Socket;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.DestroyConstraint
// Size: 0x8(Inherited: 0x0) 
struct FDestroyConstraint
{
	struct UVDParticleSpringConstraint* Constraint;  // 0x0(0x8)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.DestroyVolumeConstraint
// Size: 0x8(Inherited: 0x0) 
struct FDestroyVolumeConstraint
{
	struct UVDMeshVolumeConstraint* Constraint;  // 0x0(0x8)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FGetCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.GetCollisionSettings
// Size: 0x40(Inherited: 0x0) 
struct FGetCollisionSettings
{
	struct FVDCollisionSettings ReturnValue;  // 0x0(0x40)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.GetSpringConstraints
// Size: 0x10(Inherited: 0x0) 
struct FGetSpringConstraints
{
	struct TArray<struct UVDParticleSpringConstraint*> ReturnValue;  // 0x0(0x10)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetAttachment
// Size: 0x68(Inherited: 0x0) 
struct FGetAttachment
{
	struct FVDParticleAttachment OutAttachment;  // 0x0(0x60)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool ReturnValue : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.SetAffectiveWindVector
// Size: 0xC(Inherited: 0x0) 
struct FSetAffectiveWindVector
{
	struct FVector NewWindVector;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.SetCollisionChannel
// Size: 0x1(Inherited: 0x0) 
struct FSetCollisionChannel
{
	char ECollisionChannel Channel;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.SetMinimumConstraintSatisfactionDistance
// Size: 0x4(Inherited: 0x0) 
struct FSetMinimumConstraintSatisfactionDistance
{
	float MinDistance;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.SetObjectType
// Size: 0x1(Inherited: 0x0) 
struct FSetObjectType
{
	char ECollisionChannel ObjectType;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.AttachToComponent
// Size: 0x28(Inherited: 0x0) 
struct FAttachToComponent
{
	struct UPrimitiveComponent* Component;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool SimulateTension : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FName Socket;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function VICODynamicsPlugin.VDSimulatedObject.SetSkipRelativeVelocityCheckDuringCollision
// Size: 0x1(Inherited: 0x0) 
struct FSetSkipRelativeVelocityCheckDuringCollision
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Skip : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.AddForce
// Size: 0xC(Inherited: 0x0) 
struct FAddForce
{
	struct FVector force;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsFree
// Size: 0x1(Inherited: 0x0) 
struct FGetIsFree
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsParticleCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FGetIsParticleCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsRigidBodyCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FGetIsRigidBodyCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetIsWindOccluded
// Size: 0x1(Inherited: 0x0) 
struct FGetIsWindOccluded
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetLocation
// Size: 0xC(Inherited: 0x0) 
struct FGetLocation
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetMass
// Size: 0x4(Inherited: 0x0) 
struct FGetMass
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetRadius
// Size: 0x4(Inherited: 0x0) 
struct FGetRadius
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetFrameRate
// Size: 0x4(Inherited: 0x0) 
struct FSetFrameRate
{
	int32_t FrameRate;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetRestitutionCoefficient
// Size: 0x4(Inherited: 0x0) 
struct FGetRestitutionCoefficient
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.GetVelocity
// Size: 0xC(Inherited: 0x0) 
struct FGetVelocity
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetDragCoefficient
// Size: 0x4(Inherited: 0x0) 
struct FSetDragCoefficient
{
	float NewDragCoefficient;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetFrictionCoefficient
// Size: 0x4(Inherited: 0x0) 
struct FSetFrictionCoefficient
{
	float NewFrictionCoefficient;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsFree
// Size: 0x1(Inherited: 0x0) 
struct FSetIsFree
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsFree : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsParticleCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetIsParticleCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsEnabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsRigidBodyCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetIsRigidBodyCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsEnabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetIsWindOccluded
// Size: 0x1(Inherited: 0x0) 
struct FSetIsWindOccluded
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsOccluded : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetLocation
// Size: 0xC(Inherited: 0x0) 
struct FSetLocation
{
	struct FVector NewLocation;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.SetRadius
// Size: 0x4(Inherited: 0x0) 
struct FSetRadius
{
	float InRadius;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulatedParticle.SetVelocity
// Size: 0xC(Inherited: 0x0) 
struct FSetVelocity
{
	struct FVector NewVelocity;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDSimulation.AddExplicitColliderMapping
// Size: 0x18(Inherited: 0x0) 
struct FAddExplicitColliderMapping
{
	struct UBaseVDComponent* VDComponent;  // 0x0(0x8)
	struct UPrimitiveComponent* Collider;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool IgnoreConvexShapes : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function VICODynamicsPlugin.VDSimulation.GetDirectionalWindParameters
// Size: 0x20(Inherited: 0x0) 
struct FGetDirectionalWindParameters
{
	struct UBaseVDComponent* VDComponent;  // 0x0(0x8)
	struct FVector OutDirection;  // 0x8(0xC)
	float OutSpeed;  // 0x14(0x4)
	float OutGust;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulation.GetIsExplicitRigidBodyCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FGetIsExplicitRigidBodyCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulation.GetIsRunningOnWorkerThread
// Size: 0x1(Inherited: 0x0) 
struct FGetIsRunningOnWorkerThread
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulationSettingsActor.GetSettings
// Size: 0x58(Inherited: 0x0) 
struct FGetSettings
{
	struct FVDSettings ReturnValue;  // 0x0(0x58)

}; 
// Function VICODynamicsPlugin.VDSimulation.k2QueryBoxOverlaps
// Size: 0x40(Inherited: 0x0) 
struct Fk2QueryBoxOverlaps
{
	struct FVector Location;  // 0x0(0xC)
	struct FVector HalfExtents;  // 0xC(0xC)
	struct TArray<struct UVDSimulatedParticle*> Overlaps;  // 0x18(0x10)
	struct TArray<struct UVDSimulatedObject*> SimObjectsToIgnore;  // 0x28(0x10)
	int32_t MaxOverlaps;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool ReturnValue : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 
// Function VICODynamicsPlugin.VDSimulation.k2QuerySphereOverlaps
// Size: 0x38(Inherited: 0x0) 
struct Fk2QuerySphereOverlaps
{
	struct FVector Location;  // 0x0(0xC)
	float Radius;  // 0xC(0x4)
	struct TArray<struct UVDSimulatedParticle*> Overlaps;  // 0x10(0x10)
	struct TArray<struct UVDSimulatedObject*> SimObjectsToIgnore;  // 0x20(0x10)
	int32_t MaxOverlaps;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool ReturnValue : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetIsExplicitRigidBodyCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetIsExplicitRigidBodyCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsEnabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulation.RemoveAllExplicitColliderMappings
// Size: 0x8(Inherited: 0x0) 
struct FRemoveAllExplicitColliderMappings
{
	struct UBaseVDComponent* VDComponent;  // 0x0(0x8)

}; 
// Function VICODynamicsPlugin.VDSimulation.RemoveExplicitColliderMapping
// Size: 0x10(Inherited: 0x0) 
struct FRemoveExplicitColliderMapping
{
	struct UBaseVDComponent* VDComponent;  // 0x0(0x8)
	struct UPrimitiveComponent* Collider;  // 0x8(0x8)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneNormal
// Size: 0xC(Inherited: 0x0) 
struct FSetConstrainPlaneNormal
{
	struct FVector Normal;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetConstrainPlaneOrigin
// Size: 0xC(Inherited: 0x0) 
struct FSetConstrainPlaneOrigin
{
	struct FVector Origin;  // 0x0(0xC)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetConstrainSimulationTo2DPlane
// Size: 0x1(Inherited: 0x0) 
struct FSetConstrainSimulationTo2DPlane
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsEnabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetConstraintIterationCount
// Size: 0x4(Inherited: 0x0) 
struct FSetConstraintIterationCount
{
	int32_t ConstraintIterationCount;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetPerformExtraCollisionResolutionLoop
// Size: 0x1(Inherited: 0x0) 
struct FSetPerformExtraCollisionResolutionLoop
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsEnabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetPerFrameCollisionCacheEnable
// Size: 0x1(Inherited: 0x0) 
struct FSetPerFrameCollisionCacheEnable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsEnabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetPhysXSceneCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetPhysXSceneCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsEnabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetSelfCollisionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetSelfCollisionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool IsEnabled : 1;  // 0x0(0x1)

}; 
// Function VICODynamicsPlugin.VDSimulation.SetSubstepCount
// Size: 0x4(Inherited: 0x0) 
struct FSetSubstepCount
{
	int32_t SubstepCount;  // 0x0(0x4)

}; 
// Function VICODynamicsPlugin.VDWindDirectionalSourceComponent.GetCurrentGust
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentGust
{
	float ReturnValue;  // 0x0(0x4)

}; 
