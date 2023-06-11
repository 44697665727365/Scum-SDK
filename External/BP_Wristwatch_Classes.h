#pragma once 
#include <BP_Wristwatch_Structs.h>
 
 
 
class ABP_Wristwatch_C
{
public:
	ABP_Wristwatch_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 704);
	}

private:
	std::uint64_t m_addr = 0;
};


