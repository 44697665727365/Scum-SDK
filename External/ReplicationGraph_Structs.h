#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FServerPrintAllActorInfo
{
public:
	FServerPrintAllActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString Getstr() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConnectionAlwaysRelevantNodePair
{
public:
	FConnectionAlwaysRelevantNodePair(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNetConnection GetNetConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNetConnection(ptr_addr);
	}
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection GetNode() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UReplicationGraphNode_AlwaysRelevant_ForConnection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLastLocationGatherInfo
{
public:
	FLastLocationGatherInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNetConnection GetConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNetConnection(ptr_addr);
	}
	struct FVector GetLastLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetLastOutOfRangeLocationCheck() {
		return memory.read<struct FVector>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FClassReplicationInfo
{
public:
	FClassReplicationInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistancePriorityScale() {
		return memory.read<float>(m_addr + 0);
	}
	float GetStarvationPriorityScale() {
		return memory.read<float>(m_addr + 4);
	}
	float GetAccumulatedNetPriorityBias() {
		return memory.read<float>(m_addr + 8);
	}
	uint16_t GetReplicationPeriodFrame() {
		return memory.read<uint16_t>(m_addr + 12);
	}
	uint16_t GetFastPath_ReplicationPeriodFrame() {
		return memory.read<uint16_t>(m_addr + 14);
	}
	uint16_t GetActorChannelFrameTimeout() {
		return memory.read<uint16_t>(m_addr + 16);
	}
	float GetCullDistance() {
		return memory.read<float>(m_addr + 104);
	}
	float GetCullDistanceSquared() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};class FTearOffActorInfo
{
public:
	FTearOffActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAlwaysRelevantActorInfo
{
public:
	FAlwaysRelevantActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNetConnection GetConnection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UNetConnection(ptr_addr);
	}
	struct AActor GetLastViewer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct AActor GetLastViewTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FClientCellInfo
{
public:
	FClientCellInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCellLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetCellExtent() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct TArray<struct AActor> GetActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSetConditionalActorBreakpoint
{
public:
	FServerSetConditionalActorBreakpoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSetCullDistanceForClass
{
public:
	FServerSetCullDistanceForClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}
	float GetCullDistance() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerSetPeriodFrameForClass
{
public:
	FServerSetPeriodFrameForClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UObject GetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UObject(ptr_addr);
	}
	int32_t GetPeriodFrame() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};