#pragma once 
#include <UI_DialogueContainerWidget_Structs.h>
 
 
 
class UUI_DialogueContainerWidget_C
{
public:
	UUI_DialogueContainerWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 640);
	}
	struct UWidgetAnimation GetHideAvatarAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetShowAvatarAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Get_avatarImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct URetainerBox Get_avatarRetainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct URetainerBox(ptr_addr);
	}
	struct UImage Get_whiteLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	float Get_time() {
		return memory.read<float>(m_addr + 688);
	}

private:
	std::uint64_t m_addr = 0;
};


