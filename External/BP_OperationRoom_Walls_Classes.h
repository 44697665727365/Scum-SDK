#pragma once 
#include <BP_OperationRoom_Walls_Structs.h>
 
 
 
class ABP_OperationRoom_Walls_C
{
public:
	ABP_OperationRoom_Walls_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetSM_Black_Background() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_OperationRoom_01_Walls() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


