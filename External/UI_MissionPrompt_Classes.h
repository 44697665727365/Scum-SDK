#pragma once 
#include <UI_MissionPrompt_Structs.h>
 
 
 
class UUI_MissionPrompt_C
{
public:
	UUI_MissionPrompt_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 632);
	}
	struct UImage GetImage_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UUI_StandardMenuButton_Deprecated_C GetNoButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UUI_StandardMenuButton_Deprecated_C(ptr_addr);
	}
	struct UUI_StandardMenuButton_Deprecated_C GetYesButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UUI_StandardMenuButton_Deprecated_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


