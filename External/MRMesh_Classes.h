#pragma once 
#include <MRMesh_Structs.h>
 
 
 
class UMeshReconstructorBase
{
public:
	UMeshReconstructorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMRMeshComponent
{
public:
	UMRMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetWireframeMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1128);
		return struct UMaterialInterface(ptr_addr);
	}
	bool GetbCreateMeshProxySections() {
		return memory.read<bool>(m_addr + 1136);
	}
	bool GetbUpdateNavMeshOnMeshUpdate() {
		return memory.read<bool>(m_addr + 1137);
	}
	bool GetbNeverCreateCollisionMesh() {
		return memory.read<bool>(m_addr + 1138);
	}
	struct UBodySetup GetCachedBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UBodySetup(ptr_addr);
	}
	struct TArray<struct UBodySetup> GetBodySetups() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct TArray<struct UBodySetup>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMockDataMeshTrackerComponent
{
public:
	UMockDataMeshTrackerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnMeshTrackerUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 504);
	}
	bool GetScanWorld() {
		return memory.read<bool>(m_addr + 520);
	}
	bool GetRequestNormals() {
		return memory.read<bool>(m_addr + 521);
	}
	bool GetRequestVertexConfidence() {
		return memory.read<bool>(m_addr + 522);
	}
	uint8_t  GetVertexColorMode() {
		return memory.read<uint8_t >(m_addr + 523);
	}
	struct TArray<struct FColor> GetBlockVertexColors() {
		return memory.read<struct TArray<struct FColor>>(m_addr + 528);
	}
	struct FLinearColor GetVertexColorFromConfidenceZero() {
		return memory.read<struct FLinearColor>(m_addr + 544);
	}
	struct FLinearColor GetVertexColorFromConfidenceOne() {
		return memory.read<struct FLinearColor>(m_addr + 560);
	}
	float GetUpdateInterval() {
		return memory.read<float>(m_addr + 576);
	}
	struct UMRMeshComponent GetMRMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UMRMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


