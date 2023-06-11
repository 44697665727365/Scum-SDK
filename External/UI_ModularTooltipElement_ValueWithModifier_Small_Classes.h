#pragma once 
#include <UI_ModularTooltipElement_ValueWithModifier_Small_Structs.h>
 
 
 
class UUI_ModularTooltipElement_ValueWithModifier_Small_C
{
public:
	UUI_ModularTooltipElement_ValueWithModifier_Small_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


