#pragma once 
#include <NavigationSystem_Structs.h>
 
 
 
// Class NavigationSystem.AbstractNavData
// Size: 0x428(Inherited: 0x428) 
struct AAbstractNavData : public ANavigationData
{

}; 



// Class NavigationSystem.NavigationData
// Size: 0x428(Inherited: 0x220) 
struct ANavigationData : public AActor
{
	char pad_544[8];  // 0x220(0x8)
	struct UPrimitiveComponent* RenderingComp;  // 0x228(0x8)
	struct FNavDataConfig NavDataConfig;  // 0x230(0x78)
	char bEnableDrawing : 1;  // 0x2A8(0x1)
	char bForceRebuildOnLoad : 1;  // 0x2A8(0x1)
	char bAutoDestroyWhenNoNavigation : 1;  // 0x2A8(0x1)
	char bCanBeMainNavData : 1;  // 0x2A8(0x1)
	char bCanSpawnOnRebuild : 1;  // 0x2A8(0x1)
	char bRebuildAtRuntime : 1;  // 0x2A8(0x1)
	char pad_680_1 : 2;  // 0x2A8(0x1)
	char pad_681[4];  // 0x2A9(0x4)
	uint8_t  RuntimeGeneration;  // 0x2AC(0x1)
	char pad_685[3];  // 0x2AD(0x3)
	float ObservedPathsTickInterval;  // 0x2B0(0x4)
	uint32_t dataVersion;  // 0x2B4(0x4)
	char pad_696[264];  // 0x2B8(0x108)
	struct TArray<struct FSupportedAreaData> SupportedAreas;  // 0x3C0(0x10)
	char pad_976[88];  // 0x3D0(0x58)

}; 



// Class NavigationSystem.NavArea_Null
// Size: 0x48(Inherited: 0x48) 
struct UNavArea_Null : public UNavArea
{

}; 



// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40(Inherited: 0x30) 
struct URecastNavMeshDataChunk : public UNavigationDataChunk
{
	char pad_48[16];  // 0x30(0x10)

}; 



// Class NavigationSystem.NavModifierVolume
// Size: 0x270(Inherited: 0x258) 
struct ANavModifierVolume : public AVolume
{
	char pad_600[8];  // 0x258(0x8)
	UNavArea* AreaClass;  // 0x260(0x8)
	char pad_616_1 : 7;  // 0x268(0x1)
	bool bMaskFillCollisionUnderneathForNavmesh : 1;  // 0x268(0x1)
	char pad_617[7];  // 0x269(0x7)

	void SetAreaClass(UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass
}; 



// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x190(Inherited: 0xE0) 
struct UNavLinkCustomComponent : public UNavRelevantComponent
{
	char pad_224[8];  // 0xE0(0x8)
	uint32_t NavLinkUserId;  // 0xE8(0x4)
	char pad_236[4];  // 0xEC(0x4)
	UNavArea* EnabledAreaClass;  // 0xF0(0x8)
	UNavArea* DisabledAreaClass;  // 0xF8(0x8)
	struct FNavAgentSelector SupportedAgents;  // 0x100(0x4)
	struct FVector LinkRelativeStart;  // 0x104(0xC)
	struct FVector LinkRelativeEnd;  // 0x110(0xC)
	char ENavLinkDirection LinkDirection;  // 0x11C(0x1)
	char pad_285[3];  // 0x11D(0x3)
	char bLinkEnabled : 1;  // 0x120(0x1)
	char bNotifyWhenEnabled : 1;  // 0x120(0x1)
	char bNotifyWhenDisabled : 1;  // 0x120(0x1)
	char bCreateBoxObstacle : 1;  // 0x120(0x1)
	char pad_288_1 : 4;  // 0x120(0x1)
	char pad_289[4];  // 0x121(0x4)
	struct FVector ObstacleOffset;  // 0x124(0xC)
	struct FVector ObstacleExtent;  // 0x130(0xC)
	char pad_316[4];  // 0x13C(0x4)
	UNavArea* ObstacleAreaClass;  // 0x140(0x8)
	float BroadcastRadius;  // 0x148(0x4)
	float BroadcastInterval;  // 0x14C(0x4)
	char ECollisionChannel BroadcastChannel;  // 0x150(0x1)
	char pad_337[63];  // 0x151(0x3F)

}; 



// Class NavigationSystem.NavigationPath
// Size: 0x88(Inherited: 0x28) 
struct UNavigationPath : public UObject
{
	struct FMulticastInlineDelegate PathUpdatedNotifier;  // 0x28(0x10)
	struct TArray<struct FVector> PathPoints;  // 0x38(0x10)
	char ENavigationOptionFlag RecalculateOnInvalidation;  // 0x48(0x1)
	char pad_73[63];  // 0x49(0x3F)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString
	void EnableRecalculationOnInvalidation(char ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing
}; 



// Class NavigationSystem.RecastNavMesh
// Size: 0x4D8(Inherited: 0x428) 
struct ARecastNavMesh : public ANavigationData
{
	char bDrawTriangleEdges : 1;  // 0x428(0x1)
	char bDrawPolyEdges : 1;  // 0x428(0x1)
	char bDrawFilledPolys : 1;  // 0x428(0x1)
	char bDrawNavMeshEdges : 1;  // 0x428(0x1)
	char bDrawTileBounds : 1;  // 0x428(0x1)
	char bDrawPathCollidingGeometry : 1;  // 0x428(0x1)
	char bDrawTileLabels : 1;  // 0x428(0x1)
	char bDrawPolygonLabels : 1;  // 0x428(0x1)
	char bDrawDefaultPolygonCost : 1;  // 0x429(0x1)
	char bDrawPolygonFlags : 1;  // 0x429(0x1)
	char bDrawLabelsOnPathNodes : 1;  // 0x429(0x1)
	char bDrawNavLinks : 1;  // 0x429(0x1)
	char bDrawFailedNavLinks : 1;  // 0x429(0x1)
	char bDrawClusters : 1;  // 0x429(0x1)
	char bDrawOctree : 1;  // 0x429(0x1)
	char bDrawOctreeDetails : 1;  // 0x429(0x1)
	char bDrawMarkedForbiddenPolys : 1;  // 0x42A(0x1)
	char bDistinctlyDrawTilesBeingBuilt : 1;  // 0x42A(0x1)
	char pad_1066_1 : 6;  // 0x42A(0x1)
	char pad_1067[2];  // 0x42B(0x2)
	float DrawOffset;  // 0x42C(0x4)
	char bFixedTilePoolSize : 1;  // 0x430(0x1)
	char pad_1072_1 : 7;  // 0x430(0x1)
	char pad_1073[4];  // 0x431(0x4)
	int32_t TilePoolSize;  // 0x434(0x4)
	float TileSizeUU;  // 0x438(0x4)
	float CellSize;  // 0x43C(0x4)
	float CellHeight;  // 0x440(0x4)
	float AgentRadius;  // 0x444(0x4)
	float AgentHeight;  // 0x448(0x4)
	float AgentMaxSlope;  // 0x44C(0x4)
	float AgentMaxStepHeight;  // 0x450(0x4)
	float MinRegionArea;  // 0x454(0x4)
	float MergeRegionSize;  // 0x458(0x4)
	float MaxSimplificationError;  // 0x45C(0x4)
	int32_t MaxSimultaneousTileGenerationJobsCount;  // 0x460(0x4)
	int32_t TileNumberHardLimit;  // 0x464(0x4)
	int32_t PolyRefTileBits;  // 0x468(0x4)
	int32_t PolyRefNavPolyBits;  // 0x46C(0x4)
	int32_t PolyRefSaltBits;  // 0x470(0x4)
	struct FVector NavMeshOriginOffset;  // 0x474(0xC)
	float DefaultDrawDistance;  // 0x480(0x4)
	float DefaultMaxSearchNodes;  // 0x484(0x4)
	float DefaultMaxHierarchicalSearchNodes;  // 0x488(0x4)
	char ERecastPartitioning RegionPartitioning;  // 0x48C(0x1)
	char ERecastPartitioning LayerPartitioning;  // 0x48D(0x1)
	char pad_1166[2];  // 0x48E(0x2)
	int32_t RegionChunkSplits;  // 0x490(0x4)
	int32_t LayerChunkSplits;  // 0x494(0x4)
	char bSortNavigationAreasByCost : 1;  // 0x498(0x1)
	char bPerformVoxelFiltering : 1;  // 0x498(0x1)
	char bMarkLowHeightAreas : 1;  // 0x498(0x1)
	char bUseExtraTopCellWhenMarkingAreas : 1;  // 0x498(0x1)
	char bFilterLowSpanSequences : 1;  // 0x498(0x1)
	char bFilterLowSpanFromTileCache : 1;  // 0x498(0x1)
	char bDoFullyAsyncNavDataGathering : 1;  // 0x498(0x1)
	char bUseBetterOffsetsFromCorners : 1;  // 0x498(0x1)
	char bStoreEmptyTileLayers : 1;  // 0x499(0x1)
	char bUseVirtualFilters : 1;  // 0x499(0x1)
	char bAllowNavLinkAsPathEnd : 1;  // 0x499(0x1)
	char bUseVoxelCache : 1;  // 0x499(0x1)
	char pad_1177_1 : 4;  // 0x499(0x1)
	char pad_1178[3];  // 0x49A(0x3)
	float TileSetUpdateInterval;  // 0x49C(0x4)
	float HeuristicScale;  // 0x4A0(0x4)
	float VerticalDeviationFromGroundCompensation;  // 0x4A4(0x4)
	char pad_1192[48];  // 0x4A8(0x30)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, UNavArea* OldArea, UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
}; 



// Class NavigationSystem.CrowdManagerBase
// Size: 0x28(Inherited: 0x28) 
struct UCrowdManagerBase : public UObject
{

}; 



// Class NavigationSystem.NavArea
// Size: 0x48(Inherited: 0x30) 
struct UNavArea : public UNavAreaBase
{
	float DefaultCost;  // 0x30(0x4)
	float FixedAreaEnteringCost;  // 0x34(0x4)
	struct FColor DrawColor;  // 0x38(0x4)
	struct FNavAgentSelector SupportedAgents;  // 0x3C(0x4)
	char bSupportsAgent0 : 1;  // 0x40(0x1)
	char bSupportsAgent1 : 1;  // 0x40(0x1)
	char bSupportsAgent2 : 1;  // 0x40(0x1)
	char bSupportsAgent3 : 1;  // 0x40(0x1)
	char bSupportsAgent4 : 1;  // 0x40(0x1)
	char bSupportsAgent5 : 1;  // 0x40(0x1)
	char bSupportsAgent6 : 1;  // 0x40(0x1)
	char bSupportsAgent7 : 1;  // 0x40(0x1)
	char bSupportsAgent8 : 1;  // 0x41(0x1)
	char bSupportsAgent9 : 1;  // 0x41(0x1)
	char bSupportsAgent10 : 1;  // 0x41(0x1)
	char bSupportsAgent11 : 1;  // 0x41(0x1)
	char bSupportsAgent12 : 1;  // 0x41(0x1)
	char bSupportsAgent13 : 1;  // 0x41(0x1)
	char bSupportsAgent14 : 1;  // 0x41(0x1)
	char bSupportsAgent15 : 1;  // 0x41(0x1)
	char pad_66[6];  // 0x42(0x6)

}; 



// Class NavigationSystem.NavArea_LowHeight
// Size: 0x48(Inherited: 0x48) 
struct UNavArea_LowHeight : public UNavArea
{

}; 



// Class NavigationSystem.NavArea_Default
// Size: 0x48(Inherited: 0x48) 
struct UNavArea_Default : public UNavArea
{

}; 



// Class NavigationSystem.NavigationSystemV1
// Size: 0x1620(Inherited: 0x28) 
struct UNavigationSystemV1 : public UNavigationSystemBase
{
	struct ANavigationData* MainNavData;  // 0x28(0x8)
	struct ANavigationData* AbstractNavData;  // 0x30(0x8)
	struct FName DefaultAgentName;  // 0x38(0x8)
	struct TSoftClassPtr<UObject> CrowdManagerClass;  // 0x40(0x28)
	char bAutoCreateNavigationData : 1;  // 0x68(0x1)
	char bSpawnNavDataInNavBoundsLevel : 1;  // 0x68(0x1)
	char bAllowClientSideNavigation : 1;  // 0x68(0x1)
	char bShouldDiscardSubLevelNavData : 1;  // 0x68(0x1)
	char bTickWhilePaused : 1;  // 0x68(0x1)
	char bSupportRebuilding : 1;  // 0x68(0x1)
	char bInitialBuildingLocked : 1;  // 0x68(0x1)
	char pad_104_1 : 1;  // 0x68(0x1)
	char bSkipAgentHeightCheckWhenPickingNavData : 1;  // 0x69(0x1)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1;  // 0x69(0x1)
	char pad_105_1 : 6;  // 0x69(0x1)
	char pad_106[3];  // 0x6A(0x3)
	float ActiveTilesUpdateInterval;  // 0x6C(0x4)
	uint8_t  DataGatheringMode;  // 0x70(0x1)
	char pad_113[3];  // 0x71(0x3)
	float DirtyAreaWarningSizeThreshold;  // 0x74(0x4)
	struct TArray<struct FNavDataConfig> SupportedAgents;  // 0x78(0x10)
	struct FNavAgentSelector SupportedAgentsMask;  // 0x88(0x4)
	char pad_140[4];  // 0x8C(0x4)
	struct TArray<struct ANavigationData*> NavDataSet;  // 0x90(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue;  // 0xA0(0x10)
	char pad_176[16];  // 0xB0(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent;  // 0xC0(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate;  // 0xD0(0x10)
	char pad_224[284];  // 0xE0(0x11C)
	uint8_t  OperationMode;  // 0x1FC(0x1)
	char pad_509[5119];  // 0x1FD(0x13FF)
	float DirtyAreasUpdateFreq;  // 0x15FC(0x4)
	char pad_5632[32];  // 0x1600(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	void SetGeometryGatheringMode(uint8_t  NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius, ANavigationData* NavigationDataToUpdate); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, UNavArea* OldArea, UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	char ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength
	char ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
}; 



// Class NavigationSystem.NavArea_Obstacle
// Size: 0x48(Inherited: 0x48) 
struct UNavArea_Obstacle : public UNavArea
{

}; 



// Class NavigationSystem.NavAreaMeta
// Size: 0x48(Inherited: 0x48) 
struct UNavAreaMeta : public UNavArea
{

}; 



// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xC8(Inherited: 0x48) 
struct UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
	UNavArea* Agent0Area;  // 0x48(0x8)
	UNavArea* Agent1Area;  // 0x50(0x8)
	UNavArea* Agent2Area;  // 0x58(0x8)
	UNavArea* Agent3Area;  // 0x60(0x8)
	UNavArea* Agent4Area;  // 0x68(0x8)
	UNavArea* Agent5Area;  // 0x70(0x8)
	UNavArea* Agent6Area;  // 0x78(0x8)
	UNavArea* Agent7Area;  // 0x80(0x8)
	UNavArea* Agent8Area;  // 0x88(0x8)
	UNavArea* Agent9Area;  // 0x90(0x8)
	UNavArea* Agent10Area;  // 0x98(0x8)
	UNavArea* Agent11Area;  // 0xA0(0x8)
	UNavArea* Agent12Area;  // 0xA8(0x8)
	UNavArea* Agent13Area;  // 0xB0(0x8)
	UNavArea* Agent14Area;  // 0xB8(0x8)
	UNavArea* Agent15Area;  // 0xC0(0x8)

}; 



// Class NavigationSystem.NavCollision
// Size: 0xD8(Inherited: 0x70) 
struct UNavCollision : public UNavCollisionBase
{
	char pad_112[16];  // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision;  // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision;  // 0x90(0x10)
	UNavArea* AreaClass;  // 0xA0(0x8)
	char bGatherConvexGeometry : 1;  // 0xA8(0x1)
	char bCreateOnClient : 1;  // 0xA8(0x1)
	char pad_168_1 : 6;  // 0xA8(0x1)
	char pad_169[48];  // 0xA9(0x30)

}; 



// Class NavigationSystem.NavigationGraph
// Size: 0x428(Inherited: 0x428) 
struct ANavigationGraph : public ANavigationData
{

}; 



// Class NavigationSystem.NavigationGraphNode
// Size: 0x220(Inherited: 0x220) 
struct ANavigationGraphNode : public AActor
{

}; 



// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48(Inherited: 0x48) 
struct URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{

}; 



// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x220(Inherited: 0x200) 
struct UNavigationGraphNodeComponent : public USceneComponent
{
	struct FNavGraphNode Node;  // 0x1F8(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent;  // 0x210(0x8)
	struct UNavigationGraphNodeComponent* PrevNodeComponent;  // 0x218(0x8)

}; 



// Class NavigationSystem.NavLinkHostInterface
// Size: 0x28(Inherited: 0x28) 
struct UNavLinkHostInterface : public UInterface
{

}; 



// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xC0(Inherited: 0xB0) 
struct UNavigationInvokerComponent : public UActorComponent
{
	float TileGenerationRadius;  // 0xB0(0x4)
	float TileRemovalRadius;  // 0xB4(0x4)
	ANavigationData* NavigationDataToUpdate;  // 0xB8(0x8)

}; 



// Class NavigationSystem.NavigationPathGenerator
// Size: 0x28(Inherited: 0x28) 
struct UNavigationPathGenerator : public UInterface
{

}; 



// Class NavigationSystem.NavigationQueryFilter
// Size: 0x48(Inherited: 0x28) 
struct UNavigationQueryFilter : public UObject
{
	struct TArray<struct FNavigationFilterArea> Areas;  // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags;  // 0x38(0x4)
	struct FNavigationFilterFlags ExcludeFlags;  // 0x3C(0x4)
	char pad_64[8];  // 0x40(0x8)

}; 



// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x58(Inherited: 0x50) 
struct UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
	char bStrictlyStatic : 1;  // 0x50(0x1)
	char bCreateOnClient : 1;  // 0x50(0x1)
	char bAutoSpawnMissingNavData : 1;  // 0x50(0x1)
	char bSpawnNavDataInNavBoundsLevel : 1;  // 0x50(0x1)
	char pad_80_1 : 4;  // 0x50(0x1)
	char pad_81[8];  // 0x51(0x8)

}; 



// Class NavigationSystem.NavigationTestingActor
// Size: 0x310(Inherited: 0x220) 
struct ANavigationTestingActor : public AActor
{
	char pad_544[16];  // 0x220(0x10)
	struct UCapsuleComponent* CapsuleComponent;  // 0x230(0x8)
	struct UNavigationInvokerComponent* InvokerComponent;  // 0x238(0x8)
	char bActAsNavigationInvoker : 1;  // 0x240(0x1)
	char pad_576_1 : 7;  // 0x240(0x1)
	char pad_577[8];  // 0x241(0x8)
	struct FNavAgentProperties NavAgentProps;  // 0x248(0x30)
	struct FVector QueryingExtent;  // 0x278(0xC)
	char pad_644[4];  // 0x284(0x4)
	struct ANavigationData* MyNavData;  // 0x288(0x8)
	struct FVector ProjectedLocation;  // 0x290(0xC)
	char bProjectedLocationValid : 1;  // 0x29C(0x1)
	char bSearchStart : 1;  // 0x29C(0x1)
	char pad_668_1 : 6;  // 0x29C(0x1)
	char pad_669[4];  // 0x29D(0x4)
	float CostLimitFactor;  // 0x2A0(0x4)
	float MinimumCostLimit;  // 0x2A4(0x4)
	char bBacktracking : 1;  // 0x2A8(0x1)
	char bUseHierarchicalPathfinding : 1;  // 0x2A8(0x1)
	char bGatherDetailedInfo : 1;  // 0x2A8(0x1)
	char bDrawDistanceToWall : 1;  // 0x2A8(0x1)
	char bShowNodePool : 1;  // 0x2A8(0x1)
	char bShowBestPath : 1;  // 0x2A8(0x1)
	char bShowDiffWithPreviousStep : 1;  // 0x2A8(0x1)
	char bShouldBeVisibleInGame : 1;  // 0x2A8(0x1)
	char pad_681[3];  // 0x2A9(0x3)
	char ENavCostDisplay CostDisplayMode;  // 0x2AC(0x1)
	char pad_685[3];  // 0x2AD(0x3)
	struct FVector2D TextCanvasOffset;  // 0x2B0(0x8)
	char bPathExist : 1;  // 0x2B8(0x1)
	char bPathIsPartial : 1;  // 0x2B8(0x1)
	char bPathSearchOutOfNodes : 1;  // 0x2B8(0x1)
	char pad_696_1 : 5;  // 0x2B8(0x1)
	char pad_697[4];  // 0x2B9(0x4)
	float PathfindingTime;  // 0x2BC(0x4)
	float PathCost;  // 0x2C0(0x4)
	int32_t PathfindingSteps;  // 0x2C4(0x4)
	struct ANavigationTestingActor* OtherActor;  // 0x2C8(0x8)
	UNavigationQueryFilter* FilterClass;  // 0x2D0(0x8)
	int32_t ShowStepIndex;  // 0x2D8(0x4)
	float OffsetFromCornersDistance;  // 0x2DC(0x4)
	char pad_736[48];  // 0x2E0(0x30)

}; 



// Class NavigationSystem.NavLinkComponent
// Size: 0x470(Inherited: 0x450) 
struct UNavLinkComponent : public UPrimitiveComponent
{
	char pad_1104[8];  // 0x450(0x8)
	struct TArray<struct FNavigationLink> Links;  // 0x458(0x10)
	char pad_1128[8];  // 0x468(0x8)

}; 



// Class NavigationSystem.NavRelevantComponent
// Size: 0xE0(Inherited: 0xB0) 
struct UNavRelevantComponent : public UActorComponent
{
	char pad_176[36];  // 0xB0(0x24)
	char bAttachToOwnersRoot : 1;  // 0xD4(0x1)
	char pad_212_1 : 7;  // 0xD4(0x1)
	char pad_213[4];  // 0xD5(0x4)
	struct UObject* CachedNavParent;  // 0xD8(0x8)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
}; 



// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28(Inherited: 0x28) 
struct UNavLinkCustomInterface : public UInterface
{

}; 



// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x450(Inherited: 0x450) 
struct UNavLinkRenderingComponent : public UPrimitiveComponent
{

}; 



// Class NavigationSystem.NavLinkTrivial
// Size: 0x50(Inherited: 0x50) 
struct UNavLinkTrivial : public UNavLinkDefinition
{

}; 



// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x260(Inherited: 0x258) 
struct ANavMeshBoundsVolume : public AVolume
{
	struct FNavAgentSelector SupportedAgents;  // 0x258(0x4)
	char pad_604[4];  // 0x25C(0x4)

}; 



// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x460(Inherited: 0x450) 
struct UNavMeshRenderingComponent : public UPrimitiveComponent
{
	char pad_1104[16];  // 0x450(0x10)

}; 



// Class NavigationSystem.NavModifierComponent
// Size: 0x140(Inherited: 0xE0) 
struct UNavModifierComponent : public UNavRelevantComponent
{
	UNavArea* AreaClass;  // 0xE0(0x8)
	struct FVector FailsafeExtent;  // 0xE8(0xC)
	char bIncludeAgentHeight : 1;  // 0xF4(0x1)
	char pad_244_1 : 7;  // 0xF4(0x1)
	char pad_245[76];  // 0xF5(0x4C)

	void SetAreaClass(UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass
}; 



// Class NavigationSystem.NavNodeInterface
// Size: 0x28(Inherited: 0x28) 
struct UNavNodeInterface : public UInterface
{

}; 



// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x230(Inherited: 0x220) 
struct ANavSystemConfigOverride : public AActor
{
	struct UNavigationSystemConfig* NavigationSystemConfig;  // 0x220(0x8)
	uint8_t  OverridePolicy;  // 0x228(0x1)
	char bLoadOnClient : 1;  // 0x229(0x1)
	char pad_553_1 : 7;  // 0x229(0x1)
	char pad_554[7];  // 0x22A(0x7)

}; 



// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x450(Inherited: 0x450) 
struct UNavTestRenderingComponent : public UPrimitiveComponent
{

}; 



