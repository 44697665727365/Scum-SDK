#pragma once 
#include <DEMO_BodyRegionFade_Structs.h>
 
 
 
class UDEMO_BodyRegionFade_C
{
public:
	UDEMO_BodyRegionFade_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UImage GetBodyGlow_Female() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage GetBodyGlow_Male() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetBodyImage_Female() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetBodyImage_Male() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UButton Getbtn_all() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UButton(ptr_addr);
	}
	struct UButton Getbtn_Arm_Left() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UButton(ptr_addr);
	}
	struct UButton Getbtn_Arm_Right() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UButton(ptr_addr);
	}
	struct UButton Getbtn_Female() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UButton(ptr_addr);
	}
	struct UButton Getbtn_Head() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UButton(ptr_addr);
	}
	struct UButton Getbtn_Leg_Left() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UButton(ptr_addr);
	}
	struct UButton Getbtn_Leg_Right() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UButton(ptr_addr);
	}
	struct UButton Getbtn_Male() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UButton(ptr_addr);
	}
	struct UButton Getbtn_Torso() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UButton(ptr_addr);
	}
	struct UCanvasPanel GetFemale() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UCanvasPanel(ptr_addr);
	}
	struct UCanvasPanel GetMale() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UCanvasPanel(ptr_addr);
	}
	struct FVector2D GetTargetOffset() {
		return memory.read<struct FVector2D>(m_addr + 736);
	}
	struct FVector2D GetTargetScale() {
		return memory.read<struct FVector2D>(m_addr + 744);
	}
	float GetTargetHead() {
		return memory.read<float>(m_addr + 752);
	}
	float GetTargetTorso() {
		return memory.read<float>(m_addr + 756);
	}
	float GetTargetArmLeft() {
		return memory.read<float>(m_addr + 760);
	}
	float GetTargetArmRight() {
		return memory.read<float>(m_addr + 764);
	}
	float GetTargetLegLeft() {
		return memory.read<float>(m_addr + 768);
	}
	float GetTargetLegRight() {
		return memory.read<float>(m_addr + 772);
	}
	struct TArray<struct UImage> GetImageArray() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct TArray<struct UImage>(ptr_addr);
	}
	bool GetIsMale() {
		return memory.read<bool>(m_addr + 792);
	}

private:
	std::uint64_t m_addr = 0;
};


