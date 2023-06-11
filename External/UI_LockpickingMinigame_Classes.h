#pragma once 
#include <UI_LockpickingMinigame_Structs.h>
 
 
 
class UUI_LockpickingMinigame_C
{
public:
	UUI_LockpickingMinigame_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 640);
	}
	struct UWidgetAnimation GetShowFailure() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetBlurWaitingForPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetShowSuccess() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetInfoFade() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Get_infiniteLockpicks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_infiniteScrewdrivers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_lockDifficultyHardImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_lockDifficultyMediumImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_lockDifficultyNormalImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UImage(ptr_addr);
	}
	struct UImage Get_lockDifficultyWarning() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UImage(ptr_addr);
	}
	struct UImage GetBlackOverlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetFamePointsText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetImage_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_21() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetLockpicksCountText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage Getprogress() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetRemainingTimeText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UTextBlock(ptr_addr);
	}
	struct UTextBlock GetTensionToolCountText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UTextBlock(ptr_addr);
	}
	struct UImage GetTextBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UImage(ptr_addr);
	}
	struct UTextBlock GetTextBlock_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


