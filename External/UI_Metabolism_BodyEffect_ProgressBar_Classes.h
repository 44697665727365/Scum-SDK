#pragma once 
#include <UI_Metabolism_BodyEffect_ProgressBar_Structs.h>
 
 
 
class UUI_Metabolism_BodyEffect_ProgressBar_C
{
public:
	UUI_Metabolism_BodyEffect_ProgressBar_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetPaddedBackground() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


