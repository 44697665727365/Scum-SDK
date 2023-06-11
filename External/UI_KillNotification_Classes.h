#pragma once 
#include <UI_KillNotification_Structs.h>
 
 
 
class UUI_KillNotification_C
{
public:
	UUI_KillNotification_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 632);
	}
	struct UHorizontalBox GetHorizontalBox_58() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UHorizontalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


