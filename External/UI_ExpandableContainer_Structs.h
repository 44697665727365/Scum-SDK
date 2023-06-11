#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnExpandChanged__DelegateSignature
{
public:
	FOnExpandChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_ExpandableContainer_C Getcontainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUI_ExpandableContainer_C(ptr_addr);
	}
	bool GetisMinimized() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableAlarm
{
public:
	FEnableAlarm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDecrementAlarmsCount
{
public:
	FDecrementAlarmsCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_ExpandableContainer
{
public:
	FExecuteUbergraph_UI_ExpandableContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UOverlaySlot GetCallFunc_SlotAsOverlaySlot_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UOverlaySlot(ptr_addr);
	}
	struct FSlateFontInfo GetK2Node_MakeStruct_SlateFontInfo() {
		return memory.read<struct FSlateFontInfo>(m_addr + 16);
	}
	struct UHorizontalBoxSlot GetCallFunc_SlotAsHorizontalBoxSlot_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UHorizontalBoxSlot(ptr_addr);
	}
	struct UVerticalBoxSlot GetCallFunc_SlotAsVerticalBoxSlot_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UVerticalBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIncrementAlarmsCount
{
public:
	FIncrementAlarmsCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FCheckAlarm
{
public:
	FCheckAlarm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCallFunc_Greater_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisableAlarm
{
public:
	FDisableAlarm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParentContainer
{
public:
	FSetParentContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUI_ExpandableContainer_C Getcontainer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUI_ExpandableContainer_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};