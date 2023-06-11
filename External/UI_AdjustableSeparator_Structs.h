#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FOnMouseMove
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
	struct FVector2D GetCallFunc_AbsoluteToLocal_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 360);
	}
	float GetCallFunc_BreakVector2D_X() {
		return memory.read<float>(m_addr + 368);
	}
	float GetCallFunc_BreakVector2D_Y() {
		return memory.read<float>(m_addr + 372);
	}
	struct FEventReply GetCallFunc_Handled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 376);
	}
	float GetCallFunc_FMax_ReturnValue() {
		return memory.read<float>(m_addr + 560);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPreviewMouseButtonDown
{
public:
	FOnPreviewMouseButtonDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct FEventReply GetCallFunc_Unhandled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 352);
	}
	struct FVector2D GetCallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 536);
	}
	struct FVector2D GetCallFunc_AbsoluteToLocal_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 544);
	}
	float GetCallFunc_BreakVector2D_X() {
		return memory.read<float>(m_addr + 552);
	}
	float GetCallFunc_BreakVector2D_Y() {
		return memory.read<float>(m_addr + 556);
	}
	struct FEventReply GetCallFunc_Handled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 560);
	}
	struct FEventReply GetCallFunc_CaptureMouse_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 744);
	}
	struct FGeometry GetCallFunc_GetCachedGeometry_ReturnValue() {
		return memory.read<struct FGeometry>(m_addr + 928);
	}
	struct FVector2D GetCallFunc_GetLocalSize_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 984);
	}
	bool GetCallFunc_NotEqual_Vector2DVector2D_ReturnValue() {
		return memory.read<bool>(m_addr + 992);
	}
	float GetCallFunc_BreakVector2D_X_2() {
		return memory.read<float>(m_addr + 996);
	}
	float GetCallFunc_BreakVector2D_Y_2() {
		return memory.read<float>(m_addr + 1000);
	}
	bool GetCallFunc_NearlyEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 1004);
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
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 352);
	}
	bool GetCallFunc_HasMouseCapture_ReturnValue() {
		return memory.read<bool>(m_addr + 353);
	}
	struct FEventReply GetCallFunc_Handled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 360);
	}
	struct FEventReply GetCallFunc_ReleaseMouseCapture_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 544);
	}
	struct FEventReply GetK2Node_Select_Default() {
		return memory.read<struct FEventReply>(m_addr + 728);
	}

private:
	std::uint64_t m_addr = 0;
};