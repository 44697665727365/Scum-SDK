#pragma once 
#include <BP_Menu_Design_Structs.h>
 
 
 
class ABP_Menu_Design_C
{
public:
	ABP_Menu_Design_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 808);
	}
	struct UParticleSystemComponent GetSparks3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetSparks2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetSparks1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetSmoke4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetSmoke3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetSmoke2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetSmoke1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetStaticMesh1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Monitor_LP_01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetSM_Menu_Design_Fan_02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UChildActorComponent GetBP_Sliding_Doors_02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UChildActorComponent(ptr_addr);
	}
	struct UChildActorComponent GetBP_Sliding_Doors_012() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UChildActorComponent(ptr_addr);
	}
	struct UChildActorComponent GetBP_Sliding_Doors_011() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UChildActorComponent(ptr_addr);
	}
	struct UChildActorComponent GetBP_Sliding_Doors_01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UChildActorComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetStaticMeshComponent0() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetSharedRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct USceneComponent(ptr_addr);
	}
	float GetPrisonerMoveInsideTimeline_NewTrack_0_18E89A024149A17A3D64EEA95389DBF2() {
		return memory.read<float>(m_addr + 952);
	}
	char ETimelineDirection GetPrisonerMoveInsideTimeline__Direction_18E89A024149A17A3D64EEA95389DBF2() {
		return memory.read<char ETimelineDirection>(m_addr + 956);
	}
	struct UTimelineComponent GetPrisonerMoveInsideTimeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UTimelineComponent(ptr_addr);
	}
	float GetYawAngle() {
		return memory.read<float>(m_addr + 968);
	}
	float GetRotationSpeed() {
		return memory.read<float>(m_addr + 972);
	}
	struct AActor GetPrisonerHolder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct AActor(ptr_addr);
	}
	struct AActor GetPrisonerHolderInitialLocationMarker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct AActor(ptr_addr);
	}
	struct AActor GetPrisonerHolderFinalLocationMarker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct AActor(ptr_addr);
	}
	bool Get_isPrisonerInsideDoor() {
		return memory.read<bool>(m_addr + 1000);
	}

private:
	std::uint64_t m_addr = 0;
};


