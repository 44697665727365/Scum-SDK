#pragma once 
#include <UI_ChangeTextWidget_Structs.h>
 
 
 
class UUI_ChangeTextWidget_C
{
public:
	UUI_ChangeTextWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 800);
	}
	struct UButton GetAcceptButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UButton(ptr_addr);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UImage(ptr_addr);
	}
	struct UEditableText GetInputText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UEditableText(ptr_addr);
	}
	int32_t GetMaxInputCharacters() {
		return memory.read<int32_t>(m_addr + 840);
	}
	bool Get_isEnabled() {
		return memory.read<bool>(m_addr + 844);
	}
	struct FText Get_currentText() {
		return memory.read<struct FText>(m_addr + 848);
	}

private:
	std::uint64_t m_addr = 0;
};


