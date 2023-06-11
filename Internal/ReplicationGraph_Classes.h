#pragma once 
#include <ReplicationGraph_Structs.h>
 
 
 
// Class ReplicationGraph.ReplicationGraphNode_ActorList
// Size: 0xD0(Inherited: 0x50) 
struct UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
	char pad_80[128];  // 0x50(0x80)

}; 



// Class ReplicationGraph.ReplicationGraph
// Size: 0x4B0(Inherited: 0x28) 
struct UReplicationGraph : public UReplicationDriver
{
	UNetReplicationGraphConnection* ReplicationConnectionManagerClass;  // 0x28(0x8)
	struct UNetDriver* NetDriver;  // 0x30(0x8)
	struct TArray<struct UNetReplicationGraphConnection*> Connections;  // 0x38(0x10)
	struct TArray<struct UNetReplicationGraphConnection*> PendingConnections;  // 0x48(0x10)
	char pad_88[64];  // 0x58(0x40)
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes;  // 0x98(0x10)
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes;  // 0xA8(0x10)
	char pad_184[1016];  // 0xB8(0x3F8)

}; 



// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Size: 0x100(Inherited: 0xD0) 
struct UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
	char pad_208[48];  // 0xD0(0x30)

}; 



// Class ReplicationGraph.BasicReplicationGraph
// Size: 0x4E0(Inherited: 0x4B0) 
struct UBasicReplicationGraph : public UReplicationGraph
{
	struct UReplicationGraphNode_GridSpatialization2D* GridNode;  // 0x4A8(0x8)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode;  // 0x4B0(0x8)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;  // 0x4B8(0x10)
	struct TArray<struct AActor*> ActorsWithoutNetConnection;  // 0x4C8(0x10)

}; 



// Class ReplicationGraph.NetReplicationGraphConnection
// Size: 0x238(Inherited: 0x28) 
struct UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
	struct UNetConnection* NetConnection;  // 0x28(0x8)
	char pad_48[320];  // 0x30(0x140)
	struct AReplicationGraphDebugActor* DebugActor;  // 0x170(0x8)
	char pad_376[16];  // 0x178(0x10)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations;  // 0x188(0x10)
	char pad_408[8];  // 0x198(0x8)
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes;  // 0x1A0(0x10)
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode;  // 0x1B0(0x8)
	char pad_440[128];  // 0x1B8(0x80)

}; 



// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Size: 0x108(Inherited: 0x50) 
struct UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
	char pad_80[184];  // 0x50(0xB8)

}; 



// Class ReplicationGraph.ReplicationGraphNode
// Size: 0x50(Inherited: 0x28) 
struct UReplicationGraphNode : public UObject
{
	struct TArray<struct UReplicationGraphNode*> AllChildNodes;  // 0x28(0x10)
	char pad_56[24];  // 0x38(0x18)

}; 



// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// Size: 0xE0(Inherited: 0xD0) 
struct UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
	char pad_208[16];  // 0xD0(0x10)

}; 



// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Size: 0x150(Inherited: 0xD0) 
struct UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
	char pad_208[128];  // 0xD0(0x80)

}; 



// Class ReplicationGraph.ReplicationGraphNode_GridCell
// Size: 0x120(Inherited: 0xD0) 
struct UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
	char pad_208[64];  // 0xD0(0x40)
	struct UReplicationGraphNode* DynamicNode;  // 0x110(0x8)
	struct UReplicationGraphNode_DormancyNode* DormancyNode;  // 0x118(0x8)

}; 



// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Size: 0x230(Inherited: 0x50) 
struct UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
	char pad_80[480];  // 0x50(0x1E0)

}; 



// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Size: 0x68(Inherited: 0x50) 
struct UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
	struct UReplicationGraphNode* ChildNode;  // 0x50(0x8)
	char pad_88[16];  // 0x58(0x10)

}; 



// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0xF0(Inherited: 0xD0) 
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
	char pad_208[16];  // 0xD0(0x10)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors;  // 0xE0(0x10)

}; 



// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Size: 0x70(Inherited: 0x50) 
struct UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
	struct TArray<struct FTearOffActorInfo> TearOffActors;  // 0x50(0x10)
	char pad_96[16];  // 0x60(0x10)

}; 



// Class ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x230(Inherited: 0x220) 
struct AReplicationGraphDebugActor : public AActor
{
	struct UReplicationGraph* ReplicationGraph;  // 0x220(0x8)
	struct UNetReplicationGraphConnection* ConnectionManager;  // 0x228(0x8)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	void ServerStartDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	void ServerSetPeriodFrameForClass(UObject* Class, int32_t PeriodFrame); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	void ServerSetCullDistanceForClass(UObject* Class, float CullDistance); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	void ServerSetConditionalActorBreakpoint(struct AActor* Actor); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	void ServerPrintCullDistances(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	void ServerPrintAllActorInfo(struct FString str); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	void ServerCellInfo(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors); // Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
}; 



