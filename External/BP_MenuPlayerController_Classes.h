#pragma once 
#include <BP_MenuPlayerController_Structs.h>
 
 
 
class ABP_MenuPlayerController_C
{
public:
	ABP_MenuPlayerController_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1392);
	}
	struct APrisoner GetPrisoner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct APrisoner(ptr_addr);
	}
	bool Get_isMouseDown() {
		return memory.read<bool>(m_addr + 1408);
	}
	float GetPrisonerRotationSpeed() {
		return memory.read<float>(m_addr + 1412);
	}

private:
	std::uint64_t m_addr = 0;
};


