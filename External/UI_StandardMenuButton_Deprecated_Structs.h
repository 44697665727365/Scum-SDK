#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_StandardMenuButton_Deprecated
{
public:
	FExecuteUbergraph_UI_StandardMenuButton_Deprecated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FAkExternalSourceInfo> GetTemp_struct_Variable() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 8);
	}
	struct FDelegate GetTemp_delegate_Variable() {
		return memory.read<struct FDelegate>(m_addr + 24);
	}
	struct TArray<struct FAkExternalSourceInfo> GetTemp_struct_Variable_2() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 40);
	}
	struct FDelegate GetTemp_delegate_Variable_2() {
		return memory.read<struct FDelegate>(m_addr + 56);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 72);
	}
	struct FPointerEvent GetK2Node_Event_MouseEvent_2() {
		return memory.read<struct FPointerEvent>(m_addr + 128);
	}
	struct FPointerEvent GetK2Node_Event_MouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 240);
	}
	struct FLinearColor GetK2Node_MakeStruct_LinearColor() {
		return memory.read<struct FLinearColor>(m_addr + 352);
	}
	struct FSlateFontInfo GetK2Node_MakeStruct_SlateFontInfo() {
		return memory.read<struct FSlateFontInfo>(m_addr + 368);
	}
	struct FLinearColor GetK2Node_MakeStruct_LinearColor_2() {
		return memory.read<struct FLinearColor>(m_addr + 456);
	}
	struct FLinearColor GetK2Node_MakeStruct_LinearColor_3() {
		return memory.read<struct FLinearColor>(m_addr + 472);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 488);
		return struct APlayerController(ptr_addr);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 496);
		return struct APlayerController(ptr_addr);
	}
	int32_t GetCallFunc_PostEvent_ReturnValue() {
		return memory.read<int32_t>(m_addr + 504);
	}
	int32_t GetCallFunc_PostEvent_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 508);
	}
	struct FText GetK2Node_Event_text() {
		return memory.read<struct FText>(m_addr + 512);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetText
{
public:
	FSetText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
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
};class FSetTextInternal
{
public:
	FSetTextInternal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
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
};