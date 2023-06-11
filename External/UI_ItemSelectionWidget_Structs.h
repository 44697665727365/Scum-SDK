#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOn__selection_MouseButtonDown_1
{
public:
	FOn__selection_MouseButtonDown_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}
	struct FEventReply GetCallFunc_On_Selection_MouseButtonDown_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 352);
	}

private:
	std::uint64_t m_addr = 0;
};