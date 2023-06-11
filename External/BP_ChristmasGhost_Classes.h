#pragma once 
#include <BP_ChristmasGhost_Structs.h>
 
 
 
class ABP_ChristmasGhost_C
{
public:
	ABP_ChristmasGhost_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 768);
	}
	struct USkeletalMeshComponent GetGhost() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct USceneComponent(ptr_addr);
	}
	struct TArray<struct USkeletalMesh> GetPossibleMeshes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct TArray<struct USkeletalMesh>(ptr_addr);
	}
	struct UAnimMontage GetMontageToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UAnimMontage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


