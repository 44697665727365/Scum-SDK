#pragma once 
#include <BP_BarberShop_Structs.h>
 
 
 
class ABP_BarberShop_C
{
public:
	ABP_BarberShop_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UChildActorComponent GetBarber() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UChildActorComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


