#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_ChangeTextWidget
{
public:
	FExecuteUbergraph_UI_ChangeTextWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetK2Node_Event_value() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FText GetK2Node_ComponentBoundEvent_Text_2() {
		return memory.read<struct FText>(m_addr + 8);
	}
	char ETextCommit GetK2Node_ComponentBoundEvent_CommitMethod() {
		return memory.read<char ETextCommit>(m_addr + 32);
	}
	bool GetK2Node_SwitchEnum_CmpSuccess() {
		return memory.read<bool>(m_addr + 33);
	}
	struct FText GetK2Node_Event_text() {
		return memory.read<struct FText>(m_addr + 40);
	}
	struct FText GetK2Node_ComponentBoundEvent_Text() {
		return memory.read<struct FText>(m_addr + 64);
	}
	struct FString GetCallFunc_Conv_TextToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetCallFunc_Left_ReturnValue() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FText GetCallFunc_Conv_StringToText_ReturnValue() {
		return memory.read<struct FText>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPreviewKeyDown
{
public:
	FOnPreviewKeyDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FKeyEvent GetInKeyEvent() {
		return memory.read<struct FKeyEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 112);
	}
	struct FEventReply GetCallFunc_Handled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 296);
	}
	struct FInputEvent GetCallFunc_GetInputEventFromKeyEvent_ReturnValue() {
		return memory.read<struct FInputEvent>(m_addr + 480);
	}
	bool GetCallFunc_InputEvent_IsRepeat_ReturnValue() {
		return memory.read<bool>(m_addr + 504);
	}
	struct FEventReply GetCallFunc_Unhandled_ReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 512);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
{
public:
	FBndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	char ETextCommit GetCommitMethod() {
		return memory.read<char ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
{
public:
	FBndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxNumberOfCharacters
{
public:
	FSetMaxNumberOfCharacters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurrentInputText_BP
{
public:
	FSetCurrentInputText_BP(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};