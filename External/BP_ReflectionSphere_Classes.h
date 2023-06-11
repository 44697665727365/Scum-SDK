#pragma once 
#include <BP_ReflectionSphere_Structs.h>
 
 
 
class ABP_ReflectionSphere_C
{
public:
	ABP_ReflectionSphere_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetSphere() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


