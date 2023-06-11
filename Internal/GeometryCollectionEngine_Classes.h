#pragma once 
#include <GeometryCollectionEngine_Structs.h>
 
 
 
// Class GeometryCollectionEngine.GeometryCollection
// Size: 0x108(Inherited: 0x28) 
struct UGeometryCollection : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool EnableClustering : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t ClusterGroupIndex;  // 0x34(0x4)
	int32_t MaxClusterLevel;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	struct TArray<float> DamageThreshold;  // 0x40(0x10)
	uint8_t  ClusterConnectionType;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)
	struct TArray<struct FGeometryCollectionSource> GeometrySource;  // 0x58(0x10)
	struct TArray<struct UMaterialInterface*> Materials;  // 0x68(0x10)
	uint8_t  CollisionType;  // 0x78(0x1)
	uint8_t  ImplicitType;  // 0x79(0x1)
	char pad_122[2];  // 0x7A(0x2)
	int32_t MinLevelSetResolution;  // 0x7C(0x4)
	int32_t MaxLevelSetResolution;  // 0x80(0x4)
	int32_t MinClusterLevelSetResolution;  // 0x84(0x4)
	int32_t MaxClusterLevelSetResolution;  // 0x88(0x4)
	float CollisionObjectReductionPercentage;  // 0x8C(0x4)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool bMassAsDensity : 1;  // 0x90(0x1)
	char pad_145[3];  // 0x91(0x3)
	float Mass;  // 0x94(0x4)
	float MinimumMassClamp;  // 0x98(0x4)
	float CollisionParticlesFraction;  // 0x9C(0x4)
	int32_t MaximumCollisionParticles;  // 0xA0(0x4)
	char pad_164[4];  // 0xA4(0x4)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;  // 0xA8(0x10)
	char pad_184_1 : 7;  // 0xB8(0x1)
	bool EnableRemovePiecesOnFracture : 1;  // 0xB8(0x1)
	char pad_185[7];  // 0xB9(0x7)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials;  // 0xC0(0x10)
	struct FGuid PersistentGuid;  // 0xD0(0x10)
	struct FGuid StateGuid;  // 0xE0(0x10)
	int32_t BoneSelectedMaterialIndex;  // 0xF0(0x4)
	char pad_244[20];  // 0xF4(0x14)

}; 



// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x420(Inherited: 0x200) 
struct UChaosDestructionListener : public USceneComponent
{
	char bIsCollisionEventListeningEnabled : 1;  // 0x1F8(0x1)
	char bIsBreakingEventListeningEnabled : 1;  // 0x1F8(0x1)
	char bIsTrailingEventListeningEnabled : 1;  // 0x1F8(0x1)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings;  // 0x1FC(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings;  // 0x214(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings;  // 0x22C(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors;  // 0x248(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors;  // 0x298(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents;  // 0x2E8(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents;  // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents;  // 0x308(0x10)
	char pad_792_1 : 5;  // 0x318(0x1)
	char pad_793[264];  // 0x319(0x108)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, uint8_t  SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, uint8_t  SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, uint8_t  SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
}; 



// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xC8(Inherited: 0xB0) 
struct UGeometryCollectionDebugDrawComponent : public UActorComponent
{
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;  // 0xB0(0x8)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;  // 0xB8(0x8)
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x230(Inherited: 0x220) 
struct AGeometryCollectionActor : public AActor
{
	struct UGeometryCollectionComponent* GeometryCollectionComponent;  // 0x220(0x8)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;  // 0x228(0x8)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
}; 



// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x138(Inherited: 0xB0) 
struct UStaticMeshSimulationComponent : public UActorComponent
{
	char pad_176[8];  // 0xB0(0x8)
	char pad_184_1 : 7;  // 0xB8(0x1)
	bool Simulating : 1;  // 0xB8(0x1)
	char pad_185_1 : 7;  // 0xB9(0x1)
	bool bNotifyCollisions : 1;  // 0xB9(0x1)
	uint8_t  ObjectType;  // 0xBA(0x1)
	char pad_187[1];  // 0xBB(0x1)
	float Mass;  // 0xBC(0x4)
	uint8_t  CollisionType;  // 0xC0(0x1)
	uint8_t  ImplicitType;  // 0xC1(0x1)
	char pad_194[2];  // 0xC2(0x2)
	int32_t MinLevelSetResolution;  // 0xC4(0x4)
	int32_t MaxLevelSetResolution;  // 0xC8(0x4)
	uint8_t  InitialVelocityType;  // 0xCC(0x1)
	char pad_205[3];  // 0xCD(0x3)
	struct FVector InitialLinearVelocity;  // 0xD0(0xC)
	struct FVector InitialAngularVelocity;  // 0xDC(0xC)
	float DamageThreshold;  // 0xE8(0x4)
	char pad_236[4];  // 0xEC(0x4)
	struct UChaosPhysicalMaterial* PhysicalMaterial;  // 0xF0(0x8)
	struct AChaosSolverActor* ChaosSolverActor;  // 0xF8(0x8)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision;  // 0x100(0x10)
	char pad_272[16];  // 0x110(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents;  // 0x120(0x10)
	char pad_304[8];  // 0x130(0x8)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
}; 



// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50(Inherited: 0x28) 
struct UGeometryCollectionCache : public UObject
{
	struct FRecordedTransformTrack RecordedData;  // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection;  // 0x38(0x8)
	struct FGuid CompatibleCollectionState;  // 0x40(0x10)

}; 



// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x308(Inherited: 0x220) 
struct AGeometryCollectionDebugDrawActor : public AActor
{
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;  // 0x220(0x1)
	char pad_545[7];  // 0x221(0x7)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;  // 0x228(0x18)
	char pad_576_1 : 7;  // 0x240(0x1)
	bool bDebugDrawWholeCollection : 1;  // 0x240(0x1)
	char pad_577_1 : 7;  // 0x241(0x1)
	bool bDebugDrawHierarchy : 1;  // 0x241(0x1)
	char pad_578_1 : 7;  // 0x242(0x1)
	bool bDebugDrawClustering : 1;  // 0x242(0x1)
	uint8_t  HideGeometry;  // 0x243(0x1)
	char pad_580_1 : 7;  // 0x244(0x1)
	bool bShowRigidBodyId : 1;  // 0x244(0x1)
	char pad_581_1 : 7;  // 0x245(0x1)
	bool bShowRigidBodyCollision : 1;  // 0x245(0x1)
	char pad_582_1 : 7;  // 0x246(0x1)
	bool bCollisionAtOrigin : 1;  // 0x246(0x1)
	char pad_583_1 : 7;  // 0x247(0x1)
	bool bShowRigidBodyTransform : 1;  // 0x247(0x1)
	char pad_584_1 : 7;  // 0x248(0x1)
	bool bShowRigidBodyInertia : 1;  // 0x248(0x1)
	char pad_585_1 : 7;  // 0x249(0x1)
	bool bShowRigidBodyVelocity : 1;  // 0x249(0x1)
	char pad_586_1 : 7;  // 0x24A(0x1)
	bool bShowRigidBodyForce : 1;  // 0x24A(0x1)
	char pad_587_1 : 7;  // 0x24B(0x1)
	bool bShowRigidBodyInfos : 1;  // 0x24B(0x1)
	char pad_588_1 : 7;  // 0x24C(0x1)
	bool bShowTransformIndex : 1;  // 0x24C(0x1)
	char pad_589_1 : 7;  // 0x24D(0x1)
	bool bShowTransform : 1;  // 0x24D(0x1)
	char pad_590_1 : 7;  // 0x24E(0x1)
	bool bShowParent : 1;  // 0x24E(0x1)
	char pad_591_1 : 7;  // 0x24F(0x1)
	bool bShowLevel : 1;  // 0x24F(0x1)
	char pad_592_1 : 7;  // 0x250(0x1)
	bool bShowConnectivityEdges : 1;  // 0x250(0x1)
	char pad_593_1 : 7;  // 0x251(0x1)
	bool bShowGeometryIndex : 1;  // 0x251(0x1)
	char pad_594_1 : 7;  // 0x252(0x1)
	bool bShowGeometryTransform : 1;  // 0x252(0x1)
	char pad_595_1 : 7;  // 0x253(0x1)
	bool bShowBoundingBox : 1;  // 0x253(0x1)
	char pad_596_1 : 7;  // 0x254(0x1)
	bool bShowFaces : 1;  // 0x254(0x1)
	char pad_597_1 : 7;  // 0x255(0x1)
	bool bShowFaceIndices : 1;  // 0x255(0x1)
	char pad_598_1 : 7;  // 0x256(0x1)
	bool bShowFaceNormals : 1;  // 0x256(0x1)
	char pad_599_1 : 7;  // 0x257(0x1)
	bool bShowSingleFace : 1;  // 0x257(0x1)
	int32_t SingleFaceIndex;  // 0x258(0x4)
	char pad_604_1 : 7;  // 0x25C(0x1)
	bool bShowVertices : 1;  // 0x25C(0x1)
	char pad_605_1 : 7;  // 0x25D(0x1)
	bool bShowVertexIndices : 1;  // 0x25D(0x1)
	char pad_606_1 : 7;  // 0x25E(0x1)
	bool bShowVertexNormals : 1;  // 0x25E(0x1)
	char pad_607_1 : 7;  // 0x25F(0x1)
	bool bUseActiveVisualization : 1;  // 0x25F(0x1)
	float PointThickness;  // 0x260(0x4)
	float LineThickness;  // 0x264(0x4)
	char pad_616_1 : 7;  // 0x268(0x1)
	bool bTextShadow : 1;  // 0x268(0x1)
	char pad_617[3];  // 0x269(0x3)
	float TextScale;  // 0x26C(0x4)
	float NormalScale;  // 0x270(0x4)
	float AxisScale;  // 0x274(0x4)
	float ArrowScale;  // 0x278(0x4)
	struct FColor RigidBodyIdColor;  // 0x27C(0x4)
	float RigidBodyTransformScale;  // 0x280(0x4)
	struct FColor RigidBodyCollisionColor;  // 0x284(0x4)
	struct FColor RigidBodyInertiaColor;  // 0x288(0x4)
	struct FColor RigidBodyVelocityColor;  // 0x28C(0x4)
	struct FColor RigidBodyForceColor;  // 0x290(0x4)
	struct FColor RigidBodyInfoColor;  // 0x294(0x4)
	struct FColor TransformIndexColor;  // 0x298(0x4)
	float TransformScale;  // 0x29C(0x4)
	struct FColor LevelColor;  // 0x2A0(0x4)
	struct FColor ParentColor;  // 0x2A4(0x4)
	float ConnectivityEdgeThickness;  // 0x2A8(0x4)
	struct FColor GeometryIndexColor;  // 0x2AC(0x4)
	float GeometryTransformScale;  // 0x2B0(0x4)
	struct FColor BoundingBoxColor;  // 0x2B4(0x4)
	struct FColor FaceColor;  // 0x2B8(0x4)
	struct FColor FaceIndexColor;  // 0x2BC(0x4)
	struct FColor FaceNormalColor;  // 0x2C0(0x4)
	struct FColor SingleFaceColor;  // 0x2C4(0x4)
	struct FColor VertexColor;  // 0x2C8(0x4)
	struct FColor VertexIndexColor;  // 0x2CC(0x4)
	struct FColor VertexNormalColor;  // 0x2D0(0x4)
	char pad_724[4];  // 0x2D4(0x4)
	struct UBillboardComponent* SpriteComponent;  // 0x2D8(0x8)
	char pad_736[40];  // 0x2E0(0x28)

}; 



// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x900(Inherited: 0x480) 
struct UGeometryCollectionComponent : public UMeshComponent
{
	struct AChaosSolverActor* ChaosSolverActor;  // 0x480(0x8)
	char pad_1160[224];  // 0x488(0xE0)
	struct UGeometryCollection* RestCollection;  // 0x568(0x8)
	struct TArray<struct AFieldSystemActor*> InitializationFields;  // 0x570(0x10)
	char pad_1408_1 : 7;  // 0x580(0x1)
	bool Simulating : 1;  // 0x580(0x1)
	char pad_1409[7];  // 0x581(0x7)
	uint8_t  ObjectType;  // 0x588(0x1)
	char pad_1417_1 : 7;  // 0x589(0x1)
	bool EnableClustering : 1;  // 0x589(0x1)
	char pad_1418[2];  // 0x58A(0x2)
	int32_t ClusterGroupIndex;  // 0x58C(0x4)
	int32_t MaxClusterLevel;  // 0x590(0x4)
	char pad_1428[4];  // 0x594(0x4)
	struct TArray<float> DamageThreshold;  // 0x598(0x10)
	uint8_t  ClusterConnectionType;  // 0x5A8(0x1)
	char pad_1449[3];  // 0x5A9(0x3)
	int32_t CollisionGroup;  // 0x5AC(0x4)
	float CollisionSampleFraction;  // 0x5B0(0x4)
	float LinearEtherDrag;  // 0x5B4(0x4)
	float AngularEtherDrag;  // 0x5B8(0x4)
	char pad_1468[4];  // 0x5BC(0x4)
	struct UChaosPhysicalMaterial* PhysicalMaterial;  // 0x5C0(0x8)
	uint8_t  InitialVelocityType;  // 0x5C8(0x1)
	char pad_1481[3];  // 0x5C9(0x3)
	struct FVector InitialLinearVelocity;  // 0x5CC(0xC)
	struct FVector InitialAngularVelocity;  // 0x5D8(0xC)
	char pad_1508[4];  // 0x5E4(0x4)
	struct UPhysicalMaterial* PhysicalMaterialOverride;  // 0x5E8(0x8)
	struct FGeomComponentCacheParameters CacheParameters;  // 0x5F0(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange;  // 0x640(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange;  // 0x650(0x10)
	char pad_1632[24];  // 0x660(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent;  // 0x678(0x10)
	float DesiredCacheTime;  // 0x688(0x4)
	char pad_1676_1 : 7;  // 0x68C(0x1)
	bool CachePlayback : 1;  // 0x68C(0x1)
	char pad_1677[3];  // 0x68D(0x3)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision;  // 0x690(0x10)
	char pad_1696_1 : 7;  // 0x6A0(0x1)
	bool bNotifyBreaks : 1;  // 0x6A0(0x1)
	char pad_1697_1 : 7;  // 0x6A1(0x1)
	bool bNotifyCollisions : 1;  // 0x6A1(0x1)
	char pad_1698_1 : 7;  // 0x6A2(0x1)
	bool bEnableReplication : 1;  // 0x6A2(0x1)
	char pad_1699_1 : 7;  // 0x6A3(0x1)
	bool bEnableAbandonAfterLevel : 1;  // 0x6A3(0x1)
	int32_t ReplicationAbandonClusterLevel;  // 0x6A4(0x4)
	struct FGeometryCollectionRepData RepData;  // 0x6A8(0x18)
	char pad_1728[536];  // 0x6C0(0x218)
	struct UBodySetup* DummyBodySetup;  // 0x8D8(0x8)
	char pad_2272[32];  // 0x8E0(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	void NetAbandonCluster(int32_t TransformIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
	void ApplyPhysicsField(bool Enabled, uint8_t  Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	void ApplyKinematicField(float Radius, struct FVector position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
}; 



// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2C0(Inherited: 0x220) 
struct AGeometryCollectionRenderLevelSetActor : public AActor
{
	struct UVolumeTexture* TargetVolumeTexture;  // 0x220(0x8)
	struct UMaterial* RayMarchMaterial;  // 0x228(0x8)
	float SurfaceTolerance;  // 0x230(0x4)
	float Isovalue;  // 0x234(0x4)
	char pad_568_1 : 7;  // 0x238(0x1)
	bool Enabled : 1;  // 0x238(0x1)
	char pad_569_1 : 7;  // 0x239(0x1)
	bool RenderVolumeBoundingBox : 1;  // 0x239(0x1)
	char pad_570[134];  // 0x23A(0x86)

}; 



// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x138(Inherited: 0xB0) 
struct USkeletalMeshSimulationComponent : public UActorComponent
{
	char pad_176[8];  // 0xB0(0x8)
	struct UChaosPhysicalMaterial* PhysicalMaterial;  // 0xB8(0x8)
	struct AChaosSolverActor* ChaosSolverActor;  // 0xC0(0x8)
	struct UPhysicsAsset* OverridePhysicsAsset;  // 0xC8(0x8)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bSimulating : 1;  // 0xD0(0x1)
	char pad_209_1 : 7;  // 0xD1(0x1)
	bool bNotifyCollisions : 1;  // 0xD1(0x1)
	uint8_t  ObjectType;  // 0xD2(0x1)
	char pad_211[1];  // 0xD3(0x1)
	float Density;  // 0xD4(0x4)
	float MinMass;  // 0xD8(0x4)
	float MaxMass;  // 0xDC(0x4)
	uint8_t  CollisionType;  // 0xE0(0x1)
	char pad_225[3];  // 0xE1(0x3)
	float ImplicitShapeParticlesPerUnitArea;  // 0xE4(0x4)
	int32_t ImplicitShapeMinNumParticles;  // 0xE8(0x4)
	int32_t ImplicitShapeMaxNumParticles;  // 0xEC(0x4)
	int32_t MinLevelSetResolution;  // 0xF0(0x4)
	int32_t MaxLevelSetResolution;  // 0xF4(0x4)
	int32_t CollisionGroup;  // 0xF8(0x4)
	uint8_t  InitialVelocityType;  // 0xFC(0x1)
	char pad_253[3];  // 0xFD(0x3)
	struct FVector InitialLinearVelocity;  // 0x100(0xC)
	struct FVector InitialAngularVelocity;  // 0x10C(0xC)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision;  // 0x118(0x10)
	char pad_296[16];  // 0x128(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
}; 



