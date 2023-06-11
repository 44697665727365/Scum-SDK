#pragma once 
#include <BP_BarberShop_FakeBarber_Structs.h>
 
 
 
class ABP_BarberShop_FakeBarber_C
{
public:
	ABP_BarberShop_FakeBarber_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetHair() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct USkeletalMeshComponent GetHead() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct USkeletalMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


