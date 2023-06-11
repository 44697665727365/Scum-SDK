#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetIgnoreToolTipWidget
{
public:
	FGetIgnoreToolTipWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct FText GetCallFunc_GetHandlingMethodDescription_ReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct UUI_CustomZoneSettings_ToolTip_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UUI_CustomZoneSettings_ToolTip_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBlockToolTipWidget
{
public:
	FGetBlockToolTipWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct FText GetCallFunc_GetHandlingMethodDescription_ReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct UUI_CustomZoneSettings_ToolTip_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UUI_CustomZoneSettings_ToolTip_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllowToolTipWidget
{
public:
	FGetAllowToolTipWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct FText GetCallFunc_GetHandlingMethodDescription_ReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}
	struct UUI_CustomZoneSettings_ToolTip_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UUI_CustomZoneSettings_ToolTip_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetToolTipWidget
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

private:
	std::uint64_t m_addr = 0;
};