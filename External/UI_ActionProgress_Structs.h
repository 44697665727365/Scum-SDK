#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_ActionProgress
{
public:
	FExecuteUbergraph_UI_ActionProgress(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMaterialInstanceDynamic GetCallFunc_GetDynamicMaterial_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 16);
	}
	struct FPointerEvent GetK2Node_Event_MouseEvent_2() {
		return memory.read<struct FPointerEvent>(m_addr + 72);
	}
	struct FPointerEvent GetK2Node_Event_MouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseLeave
{
public:
	FOnMouseLeave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseEnter
{
public:
	FOnMouseEnter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet_PercentageText_Text_1
{
public:
	FGet_PercentageText_Text_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 28);
	}
	struct FText GetCallFunc_Conv_FloatToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseButtonDown
{
public:
	FOnMouseButtonDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	bool GetCallFunc_PointerEvent_IsMouseButtonDown_ReturnValue() {
		return memory.read<bool>(m_addr + 352);
	}
	struct FEventReply GetCallFunc_Unhandled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 360);
	}
	struct FEventReply GetCallFunc_Handled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};