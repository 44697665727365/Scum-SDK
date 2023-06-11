#pragma once 
#include <LockpickingMinigame_Structs.h>
 
 
 
class ALockpickingMinigame_C
{
public:
	ALockpickingMinigame_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPointLightComponent GetPointLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1232);
		return struct UPointLightComponent(ptr_addr);
	}
	struct USpotLightComponent GetSpotLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct USpotLightComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UStaticMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


