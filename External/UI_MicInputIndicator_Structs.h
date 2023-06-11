#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_UI_MicInputIndicator
{
public:
	FExecuteUbergraph_UI_MicInputIndicator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetCallFunc_IsPushToTalkEnabled_ReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}
	int32_t GetTemp_int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetTemp_int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FGeometry GetK2Node_Event_MyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 20);
	}
	float GetK2Node_Event_InDeltaTime() {
		return memory.read<float>(m_addr + 76);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 80);
	}
	int32_t GetCallFunc_GetChildrenCount_ReturnValue() {
		return memory.read<int32_t>(m_addr + 84);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue() {
		return memory.read<float>(m_addr + 88);
	}
	int32_t GetCallFunc_Subtract_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 92);
	}
	struct UWidget GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UWidget(ptr_addr);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 104);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 108);
	}
	float GetCallFunc_Array_Get_Item_2() {
		return memory.read<float>(m_addr + 112);
	}
	struct FVector2D GetCallFunc_MakeVector2D_ReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 116);
	}
	float GetCallFunc_Add_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 124);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 128);
	}
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 129);
	}
	float GetTemp_float_Variable() {
		return memory.read<float>(m_addr + 132);
	}
	int32_t GetTemp_int_Variable() {
		return memory.read<int32_t>(m_addr + 136);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 140);
	}
	float GetCallFunc_Conv_IntToFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 144);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 148);
	}
	struct UWidget GetCallFunc_GetChildAt_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UWidget(ptr_addr);
	}
	int32_t GetCallFunc_Array_Add_ReturnValue() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetCallFunc_Array_Add_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 164);
	}
	bool GetCallFunc_LessEqual_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 168);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 172);
	}
	bool GetCallFunc_IsValid_ReturnValue_2() {
		return memory.read<bool>(m_addr + 176);
	}
	bool GetCallFunc_GetIsActiveTalker_ReturnValue() {
		return memory.read<bool>(m_addr + 177);
	}
	struct AController GetCallFunc_GetController_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct AController(ptr_addr);
	}
	bool GetTemp_bool_Variable_2() {
		return memory.read<bool>(m_addr + 192);
	}
	struct AConZPlayerController GetK2Node_DynamicCast_AsCon_ZPlayer_Controller() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct AConZPlayerController(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 208);
	}
	bool GetCallFunc_IsPushToTalkPressed_ReturnValue() {
		return memory.read<bool>(m_addr + 209);
	}
	float GetK2Node_Select_Default() {
		return memory.read<float>(m_addr + 212);
	}
	bool GetCallFunc_BooleanAND_ReturnValue() {
		return memory.read<bool>(m_addr + 216);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_2() {
		return memory.read<bool>(m_addr + 217);
	}
	bool GetK2Node_Select_Default_2() {
		return memory.read<bool>(m_addr + 218);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateVoiceChat
{
public:
	FUpdateVoiceChat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetCallFunc_GetOwningPlayerPawn_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}
	struct UVoiceChatComponent GetCallFunc_GetComponentByClass_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UVoiceChatComponent(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue() {
		return memory.read<bool>(m_addr + 24);
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
};class FGetMicVisibility
{
public:
	FGetMicVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	struct ABP_Prisoner_C GetK2Node_DynamicCast_AsBP_Prisoner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct ABP_Prisoner_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};