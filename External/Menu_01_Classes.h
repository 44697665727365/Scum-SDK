#pragma once 
#include <Menu_01_Structs.h>
 
 
 
class AMenu_01_C
{
public:
	AMenu_01_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 552);
	}
	struct UMenuPlayAsDroneOverlayWidget_C GetDrone() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UMenuPlayAsDroneOverlayWidget_C(ptr_addr);
	}
	struct AAkAmbientSound GetAkAmbientSound_1_ExecuteUbergraph_Menu_01_RefProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct AAkAmbientSound(ptr_addr);
	}
	struct AActor GetFollowsCursorActor_ExecuteUbergraph_Menu_01_RefProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct AActor(ptr_addr);
	}
	struct ABP_Prisoner_C GetBP_Prisoner_4136_ExecuteUbergraph_Menu_01_RefProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct ABP_Prisoner_C(ptr_addr);
	}
	struct ASceneCapture2D GetHeadCapture_ExecuteUbergraph_Menu_01_RefProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct ASceneCapture2D(ptr_addr);
	}
	struct APostProcessVolume GetPostProcessVolume_Drone_EdGraph_0_RefProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct APostProcessVolume(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


