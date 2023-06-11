#pragma once 
#include <Shelter_Structs.h>
 
 
 
class AShelter_C
{
public:
	AShelter_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDroneDestructibleItemComponent GetDroneDestructible() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2336);
		return struct UDroneDestructibleItemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


