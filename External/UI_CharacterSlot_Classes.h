#pragma once 
#include <UI_CharacterSlot_Structs.h>
 
 
 
class UUI_CharacterSlot_C
{
public:
	UUI_CharacterSlot_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserProfile GetUserProfile() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UUserProfile(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


