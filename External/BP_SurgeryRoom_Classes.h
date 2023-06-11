#pragma once 
#include <BP_SurgeryRoom_Structs.h>
 
 
 
class ABP_SurgeryRoom_C
{
public:
	ABP_SurgeryRoom_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPointLightComponent GetSpec_Lips() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UPointLightComponent(ptr_addr);
	}
	struct UPointLightComponent GetSpec() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UPointLightComponent(ptr_addr);
	}
	struct UPointLightComponent GetRimLight_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UPointLightComponent(ptr_addr);
	}
	struct UPointLightComponent GetMainLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UPointLightComponent(ptr_addr);
	}
	struct URectLightComponent GetRectLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct URectLightComponent(ptr_addr);
	}
	struct USceneComponent GetLights_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct USceneComponent(ptr_addr);
	}
	struct USpotLightComponent GetSpotLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct USpotLightComponent(ptr_addr);
	}
	struct USpotLightComponent GetSpotLight1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct USpotLightComponent(ptr_addr);
	}
	struct USceneComponent GetLights_Surroundings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct USceneComponent(ptr_addr);
	}
	struct UChildActorComponent GetDoctor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UChildActorComponent(ptr_addr);
	}
	struct UChildActorComponent GetInterior() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UChildActorComponent(ptr_addr);
	}
	struct UChildActorComponent GetWalls() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UChildActorComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


