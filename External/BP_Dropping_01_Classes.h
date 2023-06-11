#pragma once 
#include <BP_Dropping_01_Structs.h>
 
 
 
class ABP_Dropping_01_C
{
public:
	ABP_Dropping_01_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 544);
	}
	struct UPhysicsConstraintComponent GetMyConstraintComp1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UPhysicsConstraintComponent(ptr_addr);
	}
	struct UPhysicsConstraintComponent GetMyConstraintComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UPhysicsConstraintComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetShit_03() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetShit_02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetShit_01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetSharedRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct USceneComponent(ptr_addr);
	}
	struct FVector GetOffsetTimeline_Offset_509AAF33465941489534FEBEC2819093() {
		return memory.read<struct FVector>(m_addr + 600);
	}
	char ETimelineDirection GetOffsetTimeline__Direction_509AAF33465941489534FEBEC2819093() {
		return memory.read<char ETimelineDirection>(m_addr + 612);
	}
	struct UTimelineComponent GetOffsetTimeline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UTimelineComponent(ptr_addr);
	}
	struct FVector GetShit_01_Relative_Location() {
		return memory.read<struct FVector>(m_addr + 624);
	}
	bool GetHasSpawnedEffects() {
		return memory.read<bool>(m_addr + 636);
	}
	struct FVector GetDecalSize() {
		return memory.read<struct FVector>(m_addr + 640);
	}
	struct UParticleSystem GetParticlesToSpawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UParticleSystem(ptr_addr);
	}
	struct UMaterialInterface GetDecalToSpawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UMaterialInterface(ptr_addr);
	}
	struct USoundBase GetSoundToSpawn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct USoundBase(ptr_addr);
	}
	float GetLifeTime() {
		return memory.read<float>(m_addr + 680);
	}

private:
	std::uint64_t m_addr = 0;
};


