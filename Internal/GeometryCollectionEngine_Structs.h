#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// Size: 0x1C(Inherited: 0x0) 
struct FChaosBreakingEventData
{
	struct FVector Location;  // 0x0(0xC)
	struct FVector Velocity;  // 0xC(0xC)
	float Mass;  // 0x18(0x4)

}; 
// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// Size: 0x50(Inherited: 0x0) 
struct FGeomComponentCacheParameters
{
	uint8_t  CacheMode;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UGeometryCollectionCache* TargetCache;  // 0x8(0x8)
	float ReverseCacheBeginTime;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool SaveCollisionData : 1;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool DoGenerateCollisionData : 1;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)
	int32_t CollisionDataSizeMax;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool DoCollisionDataSpatialHash : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	float CollisionDataSpatialHashRadius;  // 0x20(0x4)
	int32_t MaxCollisionPerCell;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool SaveBreakingData : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool DoGenerateBreakingData : 1;  // 0x29(0x1)
	char pad_42[2];  // 0x2A(0x2)
	int32_t BreakingDataSizeMax;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool DoBreakingDataSpatialHash : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float BreakingDataSpatialHashRadius;  // 0x34(0x4)
	int32_t MaxBreakingPerCell;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool SaveTrailingData : 1;  // 0x3C(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	bool DoGenerateTrailingData : 1;  // 0x3D(0x1)
	char pad_62[2];  // 0x3E(0x2)
	int32_t TrailingDataSizeMax;  // 0x40(0x4)
	float TrailingMinSpeedThreshold;  // 0x44(0x4)
	float TrailingMinVolumeThreshold;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 
// DelegateFunction GeometryCollectionEngine.OnChaosCollisionEvents__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnChaosCollisionEvents__DelegateSignature
{
	struct TArray<struct FChaosCollisionEventData> CollisionEvents;  // 0x0(0x10)

}; 
// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Size: 0x18(Inherited: 0x0) 
struct FChaosTrailingEventRequestSettings
{
	int32_t MaxNumberOfResults;  // 0x0(0x4)
	float MinMass;  // 0x4(0x4)
	float MinSpeed;  // 0x8(0x4)
	float MinAngularSpeed;  // 0xC(0x4)
	float MaxDistance;  // 0x10(0x4)
	uint8_t  SortMethod;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// Size: 0x58(Inherited: 0x0) 
struct FChaosCollisionEventData
{
	struct FVector Location;  // 0x0(0xC)
	struct FVector Normal;  // 0xC(0xC)
	struct FVector Velocity1;  // 0x18(0xC)
	struct FVector Velocity2;  // 0x24(0xC)
	float Mass1;  // 0x30(0x4)
	float Mass2;  // 0x34(0x4)
	struct FVector Impulse;  // 0x38(0xC)
	char pad_68[20];  // 0x44(0x14)

}; 
// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// Size: 0x2C(Inherited: 0x0) 
struct FChaosTrailingEventData
{
	struct FVector Location;  // 0x0(0xC)
	struct FVector Velocity;  // 0xC(0xC)
	struct FVector AngularVelocity;  // 0x18(0xC)
	float Mass;  // 0x24(0x4)
	int32_t ParticleIndex;  // 0x28(0x4)

}; 
// DelegateFunction GeometryCollectionEngine.OnChaosBreakingEvents__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnChaosBreakingEvents__DelegateSignature
{
	struct TArray<struct FChaosBreakingEventData> BreakingEvents;  // 0x0(0x10)

}; 
// DelegateFunction GeometryCollectionEngine.OnChaosBreakEvent__DelegateSignature
// Size: 0x30(Inherited: 0x0) 
struct FOnChaosBreakEvent__DelegateSignature
{
	struct FChaosBreakEvent BreakEvent;  // 0x0(0x30)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// Size: 0x18(Inherited: 0x0) 
struct FSetBreakingEventRequestSettings
{
	struct FChaosBreakingEventRequestSettings InSettings;  // 0x0(0x18)

}; 
// DelegateFunction GeometryCollectionEngine.OnChaosTrailingEvents__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnChaosTrailingEvents__DelegateSignature
{
	struct TArray<struct FChaosTrailingEventData> TrailingEvents;  // 0x0(0x10)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// Size: 0x18(Inherited: 0x0) 
struct FSortTrailingEvents
{
	struct TArray<struct FChaosTrailingEventData> TrailingEvents;  // 0x0(0x10)
	uint8_t  SortMethod;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// Size: 0x10(Inherited: 0x0) 
struct FApplyKinematicField
{
	float Radius;  // 0x0(0x4)
	struct FVector position;  // 0x4(0xC)

}; 
// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Size: 0x24(Inherited: 0x0) 
struct FGeometryCollectionSizeSpecificData
{
	float MaxSize;  // 0x0(0x4)
	uint8_t  CollisionType;  // 0x4(0x1)
	uint8_t  ImplicitType;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)
	int32_t MinLevelSetResolution;  // 0x8(0x4)
	int32_t MaxLevelSetResolution;  // 0xC(0x4)
	int32_t MinClusterLevelSetResolution;  // 0x10(0x4)
	int32_t MaxClusterLevelSetResolution;  // 0x14(0x4)
	int32_t CollisionObjectReductionPercentage;  // 0x18(0x4)
	float CollisionParticlesFraction;  // 0x1C(0x4)
	int32_t MaximumCollisionParticles;  // 0x20(0x4)

}; 
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// Size: 0x18(Inherited: 0x0) 
struct FApplyPhysicsField
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	uint8_t  Target;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct UFieldSystemMetaData* MetaData;  // 0x8(0x8)
	struct UFieldNodeBase* Field;  // 0x10(0x8)

}; 
// Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
// Size: 0x4(Inherited: 0x0) 
struct FNetAbandonCluster
{
	int32_t TransformIndex;  // 0x0(0x4)

}; 
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// Size: 0x1(Inherited: 0x0) 
struct FGeometryCollectionDebugDrawWarningMessage
{
	char pad_0[1];  // 0x0(0x1)

}; 
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FNotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
{
	struct UGeometryCollectionComponent* FracturedComponent;  // 0x0(0x8)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// Size: 0x18(Inherited: 0x0) 
struct FSetTrailingEventRequestSettings
{
	struct FChaosTrailingEventRequestSettings InSettings;  // 0x0(0x18)

}; 
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FNotifyGeometryCollectionPhysicsStateChange__DelegateSignature
{
	struct UGeometryCollectionComponent* FracturedComponent;  // 0x0(0x8)

}; 
// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
// Size: 0x18(Inherited: 0x0) 
struct FOnRep_RepData
{
	struct FGeometryCollectionRepData OldData;  // 0x0(0x18)

}; 
// ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
// Size: 0x18(Inherited: 0x0) 
struct FGeometryCollectionRepData
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// Size: 0x18(Inherited: 0x0) 
struct FSetCollisionEventRequestSettings
{
	struct FChaosCollisionEventRequestSettings InSettings;  // 0x0(0x18)

}; 
// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
// Size: 0x70(Inherited: 0x0) 
struct FReceivePhysicsCollision
{
	struct FChaosPhysicsCollisionInfo CollisionInfo;  // 0x0(0x70)

}; 
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// Size: 0x1(Inherited: 0x0) 
struct FSetNotifyBreaks
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewNotifyBreaks : 1;  // 0x0(0x1)

}; 
// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// Size: 0x18(Inherited: 0x0) 
struct FChaosBreakingEventRequestSettings
{
	int32_t MaxNumberOfResults;  // 0x0(0x4)
	float MinRadius;  // 0x4(0x4)
	float MinSpeed;  // 0x8(0x4)
	float MinMass;  // 0xC(0x4)
	float MaxDistance;  // 0x10(0x4)
	uint8_t  SortMethod;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Size: 0x18(Inherited: 0x0) 
struct FChaosCollisionEventRequestSettings
{
	int32_t MaxNumberResults;  // 0x0(0x4)
	float MinMass;  // 0x4(0x4)
	float MinSpeed;  // 0x8(0x4)
	float MinImpulse;  // 0xC(0x4)
	float MaxDistance;  // 0x10(0x4)
	uint8_t  SortMethod;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// Size: 0x18(Inherited: 0x0) 
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
	int32_t ID;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct AChaosSolverActor* Solver;  // 0x8(0x8)
	struct AGeometryCollectionActor* GeometryCollection;  // 0x10(0x8)

}; 
// ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
// Size: 0x60(Inherited: 0x0) 
struct FGeometryCollectionSource
{
	struct FSoftObjectPath SourceGeometryObject;  // 0x0(0x18)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform LocalTransform;  // 0x20(0x30)
	struct TArray<struct UMaterialInterface*> SourceMaterial;  // 0x50(0x10)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// Size: 0x8(Inherited: 0x0) 
struct FAddChaosSolverActor
{
	struct AChaosSolverActor* ChaosSolverActor;  // 0x0(0x8)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// Size: 0x8(Inherited: 0x0) 
struct FAddGeometryCollectionActor
{
	struct AGeometryCollectionActor* GeometryCollectionActor;  // 0x0(0x8)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// Size: 0x1(Inherited: 0x0) 
struct FIsEventListening
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// Size: 0x8(Inherited: 0x0) 
struct FRemoveChaosSolverActor
{
	struct AChaosSolverActor* ChaosSolverActor;  // 0x0(0x8)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// Size: 0x8(Inherited: 0x0) 
struct FRemoveGeometryCollectionActor
{
	struct AGeometryCollectionActor* GeometryCollectionActor;  // 0x0(0x8)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetBreakingEventEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsEnabled : 1;  // 0x0(0x1)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetCollisionEventEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsEnabled : 1;  // 0x0(0x1)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetTrailingEventEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsEnabled : 1;  // 0x0(0x1)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// Size: 0x18(Inherited: 0x0) 
struct FSortBreakingEvents
{
	struct TArray<struct FChaosBreakingEventData> BreakingEvents;  // 0x0(0x10)
	uint8_t  SortMethod;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// Size: 0x18(Inherited: 0x0) 
struct FSortCollisionEvents
{
	struct TArray<struct FChaosCollisionEventData> CollisionEvents;  // 0x0(0x10)
	uint8_t  SortMethod;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// Size: 0xA4(Inherited: 0x0) 
struct FRaycastSingle
{
	struct FVector Start;  // 0x0(0xC)
	struct FVector End;  // 0xC(0xC)
	struct FHitResult OutHit;  // 0x18(0x88)
	char pad_160_1 : 7;  // 0xA0(0x1)
	bool ReturnValue : 1;  // 0xA0(0x1)
	char pad_161[3];  // 0xA1(0x3)

}; 
