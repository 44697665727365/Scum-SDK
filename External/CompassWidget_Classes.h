#pragma once 
#include <CompassWidget_Structs.h>
 
 
 
class UCompassWidget_C
{
public:
	UCompassWidget_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetCompassTick() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct URetainerBox GetRetainerBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct URetainerBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


