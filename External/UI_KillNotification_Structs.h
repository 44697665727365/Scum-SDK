#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_KillNotification
{
public:
	FExecuteUbergraph_UI_KillNotification(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMessageVisibility
{
public:
	FGetMessageVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 1);
	}
	uint8_t  GetTemp_byte_Variable() {
		return memory.read<uint8_t >(m_addr + 2);
	}
	uint8_t  GetTemp_byte_Variable_2() {
		return memory.read<uint8_t >(m_addr + 3);
	}
	struct FText GetCallFunc_GetText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct FText GetCallFunc_GetText_ReturnValue_2() {
		return memory.read<struct FText>(m_addr + 32);
	}
	bool GetCallFunc_TextIsEmpty_ReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetCallFunc_TextIsEmpty_ReturnValue_2() {
		return memory.read<bool>(m_addr + 57);
	}
	struct FText GetCallFunc_GetText_ReturnValue_3() {
		return memory.read<struct FText>(m_addr + 64);
	}
	bool GetCallFunc_TextIsEmpty_ReturnValue_3() {
		return memory.read<bool>(m_addr + 88);
	}
	bool GetCallFunc_BooleanAND_ReturnValue() {
		return memory.read<bool>(m_addr + 89);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_2() {
		return memory.read<bool>(m_addr + 90);
	}
	uint8_t  GetK2Node_Select_Default() {
		return memory.read<uint8_t >(m_addr + 91);
	}

private:
	std::uint64_t m_addr = 0;
};