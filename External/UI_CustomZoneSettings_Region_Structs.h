#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetToolTipWidget
{
public:
	FGetToolTipWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UUI_CustomZoneSettings_ToolTip_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUI_CustomZoneSettings_ToolTip_C(ptr_addr);
	}
	struct FText GetTemp_text_Variable() {
		return memory.read<struct FText>(m_addr + 16);
	}
	uint8_t  GetCallFunc_GetDefaultZoneState_ReturnValue() {
		return memory.read<uint8_t >(m_addr + 40);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue() {
		return memory.read<bool>(m_addr + 41);
	}
	uint8_t  GetTemp_byte_Variable() {
		return memory.read<uint8_t >(m_addr + 42);
	}
	struct FText GetK2Node_Select_Default() {
		return memory.read<struct FText>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};