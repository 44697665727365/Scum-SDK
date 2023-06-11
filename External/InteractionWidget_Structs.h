#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_InteractionWidget
{
public:
	FExecuteUbergraph_InteractionWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FSlateColor GetK2Node_MakeStruct_SlateColor() {
		return memory.read<struct FSlateColor>(m_addr + 8);
	}
	struct FSlateColor GetK2Node_MakeStruct_SlateColor_2() {
		return memory.read<struct FSlateColor>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};