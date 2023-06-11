#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_ScrollBar
{
public:
	FExecuteUbergraph_UI_ScrollBar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetK2Node_Event_value() {
		return memory.read<float>(m_addr + 4);
	}
	float GetK2Node_Event_MaxCountOnScreen() {
		return memory.read<float>(m_addr + 8);
	}
	float GetK2Node_Event_MaxValue() {
		return memory.read<float>(m_addr + 12);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 16);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 72);
	}
	struct FVector2D GetCallFunc_GetLocalSize_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 76);
	}
	float GetK2Node_Event_value_2() {
		return memory.read<float>(m_addr + 84);
	}
	float GetK2Node_Event_MaxCountOnScreen_2() {
		return memory.read<float>(m_addr + 88);
	}
	float GetK2Node_Event_MaxValue_2() {
		return memory.read<float>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateFromValueInternal2
{
public:
	FUpdateFromValueInternal2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxCountOnScreen() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxValue() {
		return memory.read<float>(m_addr + 8);
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
	struct FEventReply GetCallFunc_Handled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 352);
	}
	struct FEventReply GetCallFunc_CaptureMouse_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 536);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetToUpdateFromValue
{
public:
	FSetToUpdateFromValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxCountOnScreen() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTick
{
public:
	FTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	float GetInDeltaTime() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateFromValueInternal
{
public:
	FUpdateFromValueInternal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxCountOnScreen() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetScrollBarValue() {
		return memory.read<float>(m_addr + 12);
	}
	float GetscrollBarStep() {
		return memory.read<float>(m_addr + 16);
	}
	float GetViewportHeight() {
		return memory.read<float>(m_addr + 20);
	}
	float GetContentHeight() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 28);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 32);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 36);
	}
	struct UOverlaySlot GetCallFunc_SlotAsOverlaySlot_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UOverlaySlot(ptr_addr);
	}
	float GetCallFunc_BreakVector2D_X() {
		return memory.read<float>(m_addr + 48);
	}
	float GetCallFunc_BreakVector2D_Y() {
		return memory.read<float>(m_addr + 52);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 56);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 60);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 64);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 68);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 72);
	}
	struct FMargin GetK2Node_MakeStruct_Margin() {
		return memory.read<struct FMargin>(m_addr + 76);
	}
	float GetCallFunc_BreakVector2D_X_2() {
		return memory.read<float>(m_addr + 92);
	}
	float GetCallFunc_BreakVector2D_Y_2() {
		return memory.read<float>(m_addr + 96);
	}
	struct FVector2D GetCallFunc_MakeVector2D_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 100);
	}
	struct FSlateBrush GetK2Node_MakeStruct_SlateBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FCallSetToUpdateFromValue
{
public:
	FCallSetToUpdateFromValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxCountOnScreen() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseMove
{
public:
	FOnMouseMove(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct FVector2D GetCallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 352);
	}
	struct FVector2D GetCallFunc_GetLocalSize_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 360);
	}
	struct FVector2D GetCallFunc_AbsoluteToLocal_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 368);
	}
	float GetCallFunc_BreakVector2D_X() {
		return memory.read<float>(m_addr + 376);
	}
	float GetCallFunc_BreakVector2D_Y() {
		return memory.read<float>(m_addr + 380);
	}
	float GetCallFunc_BreakVector2D_X_2() {
		return memory.read<float>(m_addr + 384);
	}
	float GetCallFunc_BreakVector2D_Y_2() {
		return memory.read<float>(m_addr + 388);
	}
	bool GetCallFunc_HasMouseCapture_ReturnValue() {
		return memory.read<bool>(m_addr + 392);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 396);
	}
	float GetCallFunc_FClamp_ReturnValue() {
		return memory.read<float>(m_addr + 400);
	}
	struct FEventReply GetCallFunc_Handled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 408);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 592);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseButtonUp
{
public:
	FOnMouseButtonUp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct FEventReply GetCallFunc_Handled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 352);
	}
	struct FEventReply GetCallFunc_ReleaseMouseCapture_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 536);
	}

private:
	std::uint64_t m_addr = 0;
};