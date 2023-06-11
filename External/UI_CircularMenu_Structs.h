#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCenterMouseToWidget
{
public:
	FCenterMouseToWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetAbsoluteCenterPos() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetLocalCenterPos() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct APlayerController(ptr_addr);
	}
	struct FGeometry GetCallFunc_GetCachedGeometry_ReturnValue() {
		return memory.read<struct FGeometry>(m_addr + 24);
	}
	struct FVector2D GetCallFunc_GetLocalSize_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 80);
	}
	struct FVector2D GetCallFunc_Multiply_Vector2DFloat_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 88);
	}
	struct FVector2D GetCallFunc_LocalToViewport_PixelPosition() {
		return memory.read<struct FVector2D>(m_addr + 96);
	}
	struct FVector2D GetCallFunc_LocalToViewport_ViewportPosition() {
		return memory.read<struct FVector2D>(m_addr + 104);
	}
	float GetCallFunc_BreakVector2D_X() {
		return memory.read<float>(m_addr + 112);
	}
	float GetCallFunc_BreakVector2D_Y() {
		return memory.read<float>(m_addr + 116);
	}
	int32_t GetCallFunc_FTrunc_ReturnValue() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetCallFunc_FTrunc_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_UI_CircularMenu
{
public:
	FExecuteUbergraph_UI_CircularMenu(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate() {
		return memory.read<struct FDelegate>(m_addr + 4);
	}
	uint8_t  GetK2Node_CustomEvent_InVisibility() {
		return memory.read<uint8_t >(m_addr + 20);
	}
	bool GetK2Node_SwitchEnum_CmpSuccess() {
		return memory.read<bool>(m_addr + 21);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnWidgetVisibilityChanged
{
public:
	FOnWidgetVisibilityChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetInVisibility() {
		return memory.read<uint8_t >(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};