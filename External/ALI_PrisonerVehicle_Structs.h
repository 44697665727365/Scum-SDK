#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FVehicleLayer
{
public:
	FVehicleLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetVehicleLayer() {
		return memory.read<struct FPoseLink>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};