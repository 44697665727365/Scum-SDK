#pragma once 
#include <BP_WeaponScopeWidget_Structs.h>
 
 
 
class UBP_WeaponScopeWidget_C
{
public:
	UBP_WeaponScopeWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 632);
	}
	struct UWidgetAnimation GetFadeOut() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFadeIn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBorder GetBlackBG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetBorderLeft() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UBorder(ptr_addr);
	}
	struct UBorder GetBorderRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UBorder(ptr_addr);
	}
	struct UImage GetReticle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UScaleBox GetScaleBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UScaleBox(ptr_addr);
	}
	struct USizeBox GetSizeBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct USizeBox(ptr_addr);
	}
	struct USizeBox GetSizeBox_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct USizeBox(ptr_addr);
	}
	struct FVector2D GetGeometrySize() {
		return memory.read<struct FVector2D>(m_addr + 712);
	}
	struct FVector2D GetGeometrySizeHalf() {
		return memory.read<struct FVector2D>(m_addr + 720);
	}
	float GetFadeInSpeed() {
		return memory.read<float>(m_addr + 728);
	}
	float GetFadeOutSpeed() {
		return memory.read<float>(m_addr + 732);
	}
	float GetOnShowDelay() {
		return memory.read<float>(m_addr + 736);
	}
	bool GetShouldBeHidden() {
		return memory.read<bool>(m_addr + 740);
	}

private:
	std::uint64_t m_addr = 0;
};


