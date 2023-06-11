#pragma once 
#include <ReplicationGraph_Structs.h>
 
 
 
class UReplicationGraphNode_ActorList
{
public:
	UReplicationGraphNode_ActorList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraph
{
public:
	UReplicationGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UNetReplicationGraphConnection GetReplicationConnectionManagerClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return UNetReplicationGraphConnection(ptr_addr);
	}
	struct UNetDriver GetNetDriver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UNetDriver(ptr_addr);
	}
	struct TArray<struct UNetReplicationGraphConnection> GetConnections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UNetReplicationGraphConnection>(ptr_addr);
	}
	struct TArray<struct UNetReplicationGraphConnection> GetPendingConnections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct TArray<struct UNetReplicationGraphConnection>(ptr_addr);
	}
	struct TArray<struct UReplicationGraphNode> GetGlobalGraphNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UReplicationGraphNode>(ptr_addr);
	}
	struct TArray<struct UReplicationGraphNode> GetPrepareForReplicationNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct TArray<struct UReplicationGraphNode>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_DynamicSpatialFrequency
{
public:
	UReplicationGraphNode_DynamicSpatialFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBasicReplicationGraph
{
public:
	UBasicReplicationGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReplicationGraphNode_GridSpatialization2D GetGridNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UReplicationGraphNode_GridSpatialization2D(ptr_addr);
	}
	struct UReplicationGraphNode_ActorList GetAlwaysRelevantNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UReplicationGraphNode_ActorList(ptr_addr);
	}
	struct TArray<struct FConnectionAlwaysRelevantNodePair> GetAlwaysRelevantForConnectionList() {
		return memory.read<struct TArray<struct FConnectionAlwaysRelevantNodePair>>(m_addr + 1208);
	}
	struct TArray<struct AActor> GetActorsWithoutNetConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1224);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNetReplicationGraphConnection
{
public:
	UNetReplicationGraphConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNetConnection GetNetConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UNetConnection(ptr_addr);
	}
	struct AReplicationGraphDebugActor GetDebugActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return struct AReplicationGraphDebugActor(ptr_addr);
	}
	struct TArray<struct FLastLocationGatherInfo> GetLastGatherLocations() {
		return memory.read<struct TArray<struct FLastLocationGatherInfo>>(m_addr + 392);
	}
	struct TArray<struct UReplicationGraphNode> GetConnectionGraphNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 416);
		return struct TArray<struct UReplicationGraphNode>(ptr_addr);
	}
	struct UReplicationGraphNode_TearOff_ForConnection GetTearOffNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct UReplicationGraphNode_TearOff_ForConnection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_ActorListFrequencyBuckets
{
public:
	UReplicationGraphNode_ActorListFrequencyBuckets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode
{
public:
	UReplicationGraphNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UReplicationGraphNode> GetAllChildNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UReplicationGraphNode>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_DormancyNode
{
public:
	UReplicationGraphNode_DormancyNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_ConnectionDormancyNode
{
public:
	UReplicationGraphNode_ConnectionDormancyNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_GridCell
{
public:
	UReplicationGraphNode_GridCell(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReplicationGraphNode GetDynamicNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UReplicationGraphNode(ptr_addr);
	}
	struct UReplicationGraphNode_DormancyNode GetDormancyNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct UReplicationGraphNode_DormancyNode(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_GridSpatialization2D
{
public:
	UReplicationGraphNode_GridSpatialization2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_AlwaysRelevant
{
public:
	UReplicationGraphNode_AlwaysRelevant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReplicationGraphNode GetChildNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UReplicationGraphNode(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_AlwaysRelevant_ForConnection
{
public:
	UReplicationGraphNode_AlwaysRelevant_ForConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAlwaysRelevantActorInfo> GetPastRelevantActors() {
		return memory.read<struct TArray<struct FAlwaysRelevantActorInfo>>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReplicationGraphNode_TearOff_ForConnection
{
public:
	UReplicationGraphNode_TearOff_ForConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTearOffActorInfo> GetTearOffActors() {
		return memory.read<struct TArray<struct FTearOffActorInfo>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class AReplicationGraphDebugActor
{
public:
	AReplicationGraphDebugActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReplicationGraph GetReplicationGraph() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UReplicationGraph(ptr_addr);
	}
	struct UNetReplicationGraphConnection GetConnectionManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UNetReplicationGraphConnection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


