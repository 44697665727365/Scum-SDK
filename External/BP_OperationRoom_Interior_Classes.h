#pragma once 
#include <BP_OperationRoom_Interior_Structs.h>
 
 
 
class ABP_OperationRoom_Interior_C
{
public:
	ABP_OperationRoom_Interior_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetSM_Cable_Mess_02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Locker05_Closed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Cable_Mess_03() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetSurroundings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USceneComponent(ptr_addr);
	}
	struct UDecalComponent GetMI_Blood_Stain_03() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UDecalComponent(ptr_addr);
	}
	struct UDecalComponent GetMI_Blood_Stain_06() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UDecalComponent(ptr_addr);
	}
	struct UDecalComponent GetMI_Blood_Stain_02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UDecalComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Hospital_Curtain_02_OPR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Tarp_Outpost_04_OPR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Artificial_Respirator_01_OPR2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Health_Monitoring_01_OPR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Confolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Patch() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_emergencyBangadeBig1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_emergencyBangadeBig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UInstancedStaticMeshComponent GetISMA_emergencyBangadeFabric() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UInstancedStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Locker06_Open1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_deadbody_02_a() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_TrashCan2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UInstancedStaticMeshComponent GetInstancedStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UInstancedStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Health_Monitoring_04_OPR2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Hospital_Lamp_01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Artificial_Respirator_01_OPR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_syringe_A2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_syringe_A() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_scalpel2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_scalpel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_scissorsMetal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_MedCart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_MedCart_Cloth_OPR1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Surgical_lamp_01_LightOn_OPR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Merged_Operating_Table_01_OPR() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetOperatingTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct USceneComponent(ptr_addr);
	}
	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


