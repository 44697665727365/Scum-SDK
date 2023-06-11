#pragma once 
#include <BP_MugshotRoom_Structs.h>
 
 
 
class ABP_MugshotRoom_C
{
public:
	ABP_MugshotRoom_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetCube5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetCube() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetHeight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UPointLightComponent GetLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UPointLightComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetCube4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetCube3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetCube2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetCube1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UStaticMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


