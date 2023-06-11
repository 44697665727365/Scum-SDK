#pragma once 
#include <BP_DialLockMinigame_Structs.h>
 
 
 
class ABP_DialLockMinigame_C
{
public:
	ABP_DialLockMinigame_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USpotLightComponent GetSpotLight1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct USpotLightComponent(ptr_addr);
	}
	struct USpotLightComponent GetSpotLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct USpotLightComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


