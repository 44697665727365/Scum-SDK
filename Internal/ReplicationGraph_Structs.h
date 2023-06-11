#pragma once 
#include "SDK.h" 
 
 
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// Size: 0x10(Inherited: 0x0) 
struct FServerPrintAllActorInfo
{
	struct FString str;  // 0x0(0x10)

}; 
// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// Size: 0x10(Inherited: 0x0) 
struct FConnectionAlwaysRelevantNodePair
{
	struct UNetConnection* NetConnection;  // 0x0(0x8)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;  // 0x8(0x8)

}; 
// ScriptStruct ReplicationGraph.LastLocationGatherInfo
// Size: 0x20(Inherited: 0x0) 
struct FLastLocationGatherInfo
{
	struct UNetConnection* Connection;  // 0x0(0x8)
	struct FVector LastLocation;  // 0x8(0xC)
	struct FVector LastOutOfRangeLocationCheck;  // 0x14(0xC)

}; 
// ScriptStruct ReplicationGraph.ClassReplicationInfo
// Size: 0x70(Inherited: 0x0) 
struct FClassReplicationInfo
{
	float DistancePriorityScale;  // 0x0(0x4)
	float StarvationPriorityScale;  // 0x4(0x4)
	float AccumulatedNetPriorityBias;  // 0x8(0x4)
	uint16_t ReplicationPeriodFrame;  // 0xC(0x2)
	uint16_t FastPath_ReplicationPeriodFrame;  // 0xE(0x2)
	uint16_t ActorChannelFrameTimeout;  // 0x10(0x2)
	char pad_18[86];  // 0x12(0x56)
	float CullDistance;  // 0x68(0x4)
	float CullDistanceSquared;  // 0x6C(0x4)

}; 
// ScriptStruct ReplicationGraph.TearOffActorInfo
// Size: 0x18(Inherited: 0x0) 
struct FTearOffActorInfo
{
	char pad_0[8];  // 0x0(0x8)
	struct AActor* Actor;  // 0x8(0x8)
	char pad_16[8];  // 0x10(0x8)

}; 
// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// Size: 0x18(Inherited: 0x0) 
struct FAlwaysRelevantActorInfo
{
	struct UNetConnection* Connection;  // 0x0(0x8)
	struct AActor* LastViewer;  // 0x8(0x8)
	struct AActor* LastViewTarget;  // 0x10(0x8)

}; 
// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// Size: 0x28(Inherited: 0x0) 
struct FClientCellInfo
{
	struct FVector CellLocation;  // 0x0(0xC)
	struct FVector CellExtent;  // 0xC(0xC)
	struct TArray<struct AActor*> Actors;  // 0x18(0x10)

}; 
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// Size: 0x8(Inherited: 0x0) 
struct FServerSetConditionalActorBreakpoint
{
	struct AActor* Actor;  // 0x0(0x8)

}; 
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// Size: 0x10(Inherited: 0x0) 
struct FServerSetCullDistanceForClass
{
	UObject* Class;  // 0x0(0x8)
	float CullDistance;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// Size: 0x10(Inherited: 0x0) 
struct FServerSetPeriodFrameForClass
{
	UObject* Class;  // 0x0(0x8)
	int32_t PeriodFrame;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
