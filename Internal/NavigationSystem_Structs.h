#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction NavigationSystem.OnNavigationPathUpdated__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnNavigationPathUpdated__DelegateSignature
{
	struct UNavigationPath* AffectedPath;  // 0x0(0x8)
	char ENavPathEvent PathEvent;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// Size: 0x40(Inherited: 0x0) 
struct FProjectPointToNavigation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Point;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)
	struct ANavigationData* NavData;  // 0x18(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x20(0x8)
	struct FVector QueryExtent;  // 0x28(0xC)
	struct FVector ReturnValue;  // 0x34(0xC)

}; 
// ScriptStruct NavigationSystem.NavCollisionBox
// Size: 0x18(Inherited: 0x0) 
struct FNavCollisionBox
{
	struct FVector Offset;  // 0x0(0xC)
	struct FVector Extent;  // 0xC(0xC)

}; 
// DelegateFunction NavigationSystem.OnNavDataGenericEvent__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnNavDataGenericEvent__DelegateSignature
{
	struct ANavigationData* NavData;  // 0x0(0x8)

}; 
// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// Size: 0x1(Inherited: 0x0) 
struct FSetNavigationRelevancy
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bRelevant : 1;  // 0x0(0x1)

}; 
// ScriptStruct NavigationSystem.NavigationFilterArea
// Size: 0x18(Inherited: 0x0) 
struct FNavigationFilterArea
{
	UNavArea* AreaClass;  // 0x0(0x8)
	float TravelCostOverride;  // 0x8(0x4)
	float EnteringCostOverride;  // 0xC(0x4)
	char bIsExcluded : 1;  // 0x10(0x1)
	char bOverrideTravelCost : 1;  // 0x10(0x1)
	char bOverrideEnteringCost : 1;  // 0x10(0x1)
	char pad_16_1 : 5;  // 0x10(0x1)
	char pad_17[8];  // 0x11(0x8)

}; 
// ScriptStruct NavigationSystem.NavigationFilterFlags
// Size: 0x4(Inherited: 0x0) 
struct FNavigationFilterFlags
{
	char bNavFlag0 : 1;  // 0x0(0x1)
	char bNavFlag1 : 1;  // 0x0(0x1)
	char bNavFlag2 : 1;  // 0x0(0x1)
	char bNavFlag3 : 1;  // 0x0(0x1)
	char bNavFlag4 : 1;  // 0x0(0x1)
	char bNavFlag5 : 1;  // 0x0(0x1)
	char bNavFlag6 : 1;  // 0x0(0x1)
	char bNavFlag7 : 1;  // 0x0(0x1)
	char bNavFlag8 : 1;  // 0x1(0x1)
	char bNavFlag9 : 1;  // 0x1(0x1)
	char bNavFlag10 : 1;  // 0x1(0x1)
	char bNavFlag11 : 1;  // 0x1(0x1)
	char bNavFlag12 : 1;  // 0x1(0x1)
	char bNavFlag13 : 1;  // 0x1(0x1)
	char bNavFlag14 : 1;  // 0x1(0x1)
	char bNavFlag15 : 1;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)

}; 
// ScriptStruct NavigationSystem.NavCollisionCylinder
// Size: 0x14(Inherited: 0x0) 
struct FNavCollisionCylinder
{
	struct FVector Offset;  // 0x0(0xC)
	float Radius;  // 0xC(0x4)
	float Height;  // 0x10(0x4)

}; 
// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// Size: 0x10(Inherited: 0x0) 
struct FGetNavigationSystem
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UNavigationSystemV1* ReturnValue;  // 0x8(0x8)

}; 
// ScriptStruct NavigationSystem.SupportedAreaData
// Size: 0x20(Inherited: 0x0) 
struct FSupportedAreaData
{
	struct FString AreaClassName;  // 0x0(0x10)
	int32_t AreaID;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	UObject* AreaClass;  // 0x18(0x8)

}; 
// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// Size: 0x40(Inherited: 0x0) 
struct FRecastNavMeshGenerationProperties
{
	int32_t TilePoolSize;  // 0x0(0x4)
	float TileSizeUU;  // 0x4(0x4)
	float CellSize;  // 0x8(0x4)
	float CellHeight;  // 0xC(0x4)
	float AgentRadius;  // 0x10(0x4)
	float AgentHeight;  // 0x14(0x4)
	float AgentMaxSlope;  // 0x18(0x4)
	float AgentMaxStepHeight;  // 0x1C(0x4)
	float MinRegionArea;  // 0x20(0x4)
	float MergeRegionSize;  // 0x24(0x4)
	float MaxSimplificationError;  // 0x28(0x4)
	int32_t TileNumberHardLimit;  // 0x2C(0x4)
	char ERecastPartitioning RegionPartitioning;  // 0x30(0x1)
	char ERecastPartitioning LayerPartitioning;  // 0x31(0x1)
	char pad_50[2];  // 0x32(0x2)
	int32_t RegionChunkSplits;  // 0x34(0x4)
	int32_t LayerChunkSplits;  // 0x38(0x4)
	char bSortNavigationAreasByCost : 1;  // 0x3C(0x1)
	char bPerformVoxelFiltering : 1;  // 0x3C(0x1)
	char bMarkLowHeightAreas : 1;  // 0x3C(0x1)
	char bUseExtraTopCellWhenMarkingAreas : 1;  // 0x3C(0x1)
	char bFilterLowSpanSequences : 1;  // 0x3C(0x1)
	char bFilterLowSpanFromTileCache : 1;  // 0x3C(0x1)
	char bFixedTilePoolSize : 1;  // 0x3C(0x1)
	char pad_60_1 : 1;  // 0x3C(0x1)
	char pad_61[4];  // 0x3D(0x4)

}; 
// ScriptStruct NavigationSystem.NavGraphNode
// Size: 0x18(Inherited: 0x0) 
struct FNavGraphNode
{
	struct UObject* Owner;  // 0x0(0x8)
	char pad_8[16];  // 0x8(0x10)

}; 
// ScriptStruct NavigationSystem.NavGraphEdge
// Size: 0x18(Inherited: 0x0) 
struct FNavGraphEdge
{
	char pad_0[24];  // 0x0(0x18)

}; 
// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// Size: 0x70(Inherited: 0x68) 
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
	uint32_t NavLinkUserId;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// Size: 0x40(Inherited: 0x0) 
struct FK2_GetRandomPointInNavigableRadius
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Origin;  // 0x8(0xC)
	struct FVector RandomLocation;  // 0x14(0xC)
	float Radius;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct ANavigationData* NavData;  // 0x28(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool ReturnValue : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 
// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
// Size: 0x38(Inherited: 0x0) 
struct FK2_ReplaceAreaInTileBounds
{
	struct FBox Bounds;  // 0x0(0x1C)
	char pad_28[4];  // 0x1C(0x4)
	UNavArea* OldArea;  // 0x20(0x8)
	UNavArea* NewArea;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReplaceLinks : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool ReturnValue : 1;  // 0x31(0x1)
	char pad_50[6];  // 0x32(0x6)

}; 
// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// Size: 0x14(Inherited: 0x0) 
struct FEnableDebugDrawing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bShouldDrawDebugData : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FLinearColor PathColor;  // 0x4(0x10)

}; 
// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// Size: 0x1(Inherited: 0x0) 
struct FEnableRecalculationOnInvalidation
{
	char ENavigationOptionFlag DoRecalculation;  // 0x0(0x1)

}; 
// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// Size: 0x40(Inherited: 0x0) 
struct FK2_ProjectPointToNavigation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Point;  // 0x8(0xC)
	struct FVector ProjectedLocation;  // 0x14(0xC)
	struct ANavigationData* NavData;  // 0x20(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x28(0x8)
	struct FVector QueryExtent;  // 0x30(0xC)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool ReturnValue : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 
// Function NavigationSystem.NavigationPath.GetDebugString
// Size: 0x10(Inherited: 0x0) 
struct FGetDebugString
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function NavigationSystem.NavigationSystemV1.GetPathCost
// Size: 0x40(Inherited: 0x0) 
struct FGetPathCost
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector PathStart;  // 0x8(0xC)
	struct FVector PathEnd;  // 0x14(0xC)
	float PathCost;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct ANavigationData* NavData;  // 0x28(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x30(0x8)
	char ENavigationQueryResult ReturnValue;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 
// Function NavigationSystem.NavigationSystemV1.GetPathLength
// Size: 0x40(Inherited: 0x0) 
struct FGetPathLength
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector PathStart;  // 0x8(0xC)
	struct FVector PathEnd;  // 0x14(0xC)
	float PathLength;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct ANavigationData* NavData;  // 0x28(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x30(0x8)
	char ENavigationQueryResult ReturnValue;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 
// Function NavigationSystem.NavigationPath.IsPartial
// Size: 0x1(Inherited: 0x0) 
struct FIsPartial
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function NavigationSystem.NavigationPath.IsStringPulled
// Size: 0x1(Inherited: 0x0) 
struct FIsStringPulled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function NavigationSystem.NavigationPath.IsValid
// Size: 0x1(Inherited: 0x0) 
struct FIsValid
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// Size: 0x40(Inherited: 0x0) 
struct FFindPathToActorSynchronously
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector PathStart;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)
	struct AActor* GoalActor;  // 0x18(0x8)
	float TetherDistance;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct AActor* PathfindingContext;  // 0x28(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x30(0x8)
	struct UNavigationPath* ReturnValue;  // 0x38(0x8)

}; 
// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// Size: 0x38(Inherited: 0x0) 
struct FFindPathToLocationSynchronously
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector PathStart;  // 0x8(0xC)
	struct FVector PathEnd;  // 0x14(0xC)
	struct AActor* PathfindingContext;  // 0x20(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x28(0x8)
	struct UNavigationPath* ReturnValue;  // 0x30(0x8)

}; 
// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// Size: 0x38(Inherited: 0x0) 
struct FGetRandomPointInNavigableRadius
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Origin;  // 0x8(0xC)
	float Radius;  // 0x14(0x4)
	struct ANavigationData* NavData;  // 0x18(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x20(0x8)
	struct FVector ReturnValue;  // 0x28(0xC)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// Size: 0x38(Inherited: 0x0) 
struct FGetRandomReachablePointInRadius
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Origin;  // 0x8(0xC)
	float Radius;  // 0x14(0x4)
	struct ANavigationData* NavData;  // 0x18(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x20(0x8)
	struct FVector ReturnValue;  // 0x28(0xC)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// Size: 0x48(Inherited: 0x0) 
struct FNavigationRaycast
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector RayStart;  // 0x8(0xC)
	struct FVector RayEnd;  // 0x14(0xC)
	struct FVector HitLocation;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	UNavigationQueryFilter* FilterClass;  // 0x30(0x8)
	struct AController* Querier;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool ReturnValue : 1;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 
// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// Size: 0x10(Inherited: 0x0) 
struct FIsNavigationBeingBuilt
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// Size: 0x10(Inherited: 0x0) 
struct FIsNavigationBeingBuiltOrLocked
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// Size: 0x1(Inherited: 0x0) 
struct FSetGeometryGatheringMode
{
	uint8_t  NewMode;  // 0x0(0x1)

}; 
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
// Size: 0x40(Inherited: 0x0) 
struct FK2_GetRandomLocationInNavigableRadius
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Origin;  // 0x8(0xC)
	struct FVector RandomLocation;  // 0x14(0xC)
	float Radius;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct ANavigationData* NavData;  // 0x28(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool ReturnValue : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// Size: 0x40(Inherited: 0x0) 
struct FK2_GetRandomReachablePointInRadius
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Origin;  // 0x8(0xC)
	struct FVector RandomLocation;  // 0x14(0xC)
	float Radius;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct ANavigationData* NavData;  // 0x28(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool ReturnValue : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 
// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
// Size: 0x20(Inherited: 0x0) 
struct FK2_ReplaceAreaInOctreeData
{
	struct UObject* Object;  // 0x0(0x8)
	UNavArea* OldArea;  // 0x8(0x8)
	UNavArea* NewArea;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// Size: 0x8(Inherited: 0x0) 
struct FOnNavigationBoundsUpdated
{
	struct ANavMeshBoundsVolume* NavVolume;  // 0x0(0x8)

}; 
// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// Size: 0x18(Inherited: 0x0) 
struct FRegisterNavigationInvoker
{
	struct AActor* Invoker;  // 0x0(0x8)
	float TileGenerationRadius;  // 0x8(0x4)
	float TileRemovalRadius;  // 0xC(0x4)
	ANavigationData* NavigationDataToUpdate;  // 0x10(0x8)

}; 
// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// Size: 0x4(Inherited: 0x0) 
struct FSetMaxSimultaneousTileGenerationJobsCount
{
	int32_t MaxNumberOfJobs;  // 0x0(0x4)

}; 
// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// Size: 0x10(Inherited: 0x0) 
struct FSimpleMoveToActor
{
	struct AController* Controller;  // 0x0(0x8)
	struct AActor* Goal;  // 0x8(0x8)

}; 
// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// Size: 0x18(Inherited: 0x0) 
struct FSimpleMoveToLocation
{
	struct AController* Controller;  // 0x0(0x8)
	struct FVector Goal;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// Size: 0x8(Inherited: 0x0) 
struct FUnregisterNavigationInvoker
{
	struct AActor* Invoker;  // 0x0(0x8)

}; 
// Function NavigationSystem.NavModifierVolume.SetAreaClass
// Size: 0x8(Inherited: 0x0) 
struct FSetAreaClass
{
	UNavArea* NewAreaClass;  // 0x0(0x8)

}; 
