#pragma once 
#include <BP_Drone_Structs.h>
 
 
 
class ABP_Drone_C
{
public:
	ABP_Drone_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPointLightComponent GetPointLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2224);
		return struct UPointLightComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


