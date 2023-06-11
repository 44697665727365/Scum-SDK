#pragma once 
#include <UI_CharacterSelection_Structs.h>
 
 
 
class UUI_CharacterSelection_C
{
public:
	UUI_CharacterSelection_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_351() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UImage(ptr_addr);
	}
	struct UCanvasPanel GetMainCanvasPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UUI_CharacterSlot_C Get_deletingCharSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UUI_CharacterSlot_C(ptr_addr);
	}
	struct UUserProfile Get_selectedUserProfile() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UUserProfile(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


