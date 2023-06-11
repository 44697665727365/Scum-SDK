#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FReceiveTick
{
public:
	FReceiveTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaSeconds() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_Menu_01
{
public:
	FExecuteUbergraph_Menu_01(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct APlayerController(ptr_addr);
	}
	int32_t GetCallFunc_PostAssociatedAkEvent_ReturnValue() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct ABP_MenuPlayerController_C GetK2Node_DynamicCast_AsBP_Menu_Player_Controller() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct ABP_MenuPlayerController_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 64);
	}
	float GetK2Node_Event_DeltaSeconds() {
		return memory.read<float>(m_addr + 68);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct APlayerController(ptr_addr);
	}
	struct FDelegate GetTemp_delegate_Variable_2() {
		return memory.read<struct FDelegate>(m_addr + 80);
	}
	struct FVector GetCallFunc_DeprojectMousePositionToWorld_WorldLocation() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	struct FVector GetCallFunc_DeprojectMousePositionToWorld_WorldDirection() {
		return memory.read<struct FVector>(m_addr + 108);
	}
	bool GetCallFunc_DeprojectMousePositionToWorld_ReturnValue() {
		return memory.read<bool>(m_addr + 120);
	}
	struct TArray<struct FAkExternalSourceInfo> GetTemp_struct_Variable_2() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 128);
	}
	struct FVector GetCallFunc_Multiply_VectorFloat_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 144);
	}
	int32_t GetCallFunc_PostEvent_ReturnValue() {
		return memory.read<int32_t>(m_addr + 156);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 160);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 172);
	}
	struct UMenuPlayAsDroneOverlayWidget_C GetCallFunc_Create_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UMenuPlayAsDroneOverlayWidget_C(ptr_addr);
	}
	struct FKey GetK2Node_InputKeyEvent_Key() {
		return memory.read<struct FKey>(m_addr + 192);
	}
	struct UGameInstance GetCallFunc_GetGameInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UGameInstance(ptr_addr);
	}
	struct UConZGameInstance GetK2Node_DynamicCast_AsCon_ZGame_Instance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UConZGameInstance(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess_2() {
		return memory.read<bool>(m_addr + 232);
	}
	bool GetCallFunc_GetPlayAsDrone_ReturnValue() {
		return memory.read<bool>(m_addr + 233);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 234);
	}
	struct FHitResult GetCallFunc_K2_SetActorLocation_SweepHitResult() {
		return memory.read<struct FHitResult>(m_addr + 236);
	}
	bool GetCallFunc_K2_SetActorLocation_ReturnValue() {
		return memory.read<bool>(m_addr + 372);
	}
	struct FVector GetCallFunc_K2_GetActorLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 376);
	}
	struct FRotator GetCallFunc_K2_GetActorRotation_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 388);
	}
	struct FVector GetCallFunc_K2_GetActorLocation_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 400);
	}
	struct FRotator GetCallFunc_FindLookAtRotation_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 412);
	}
	struct FRotator GetCallFunc_NormalizedDeltaRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 424);
	}

private:
	std::uint64_t m_addr = 0;
};class FInpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
{
public:
	FInpActEvt_Ctrl_D_K2Node_InputKeyEvent_1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUpdateDroneVisual
{
public:
	FUpdateDroneVisual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTemp_float_Variable() {
		return memory.read<float>(m_addr + 0);
	}
	float GetTemp_float_Variable_2() {
		return memory.read<float>(m_addr + 4);
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
	bool GetTemp_bool_Variable() {
		return memory.read<bool>(m_addr + 20);
	}
	struct UGameInstance GetCallFunc_GetGameInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UGameInstance(ptr_addr);
	}
	struct FWeightedBlendable GetCallFunc_Array_Get_Item() {
		return memory.read<struct FWeightedBlendable>(m_addr + 32);
	}
	struct UConZGameInstance GetK2Node_DynamicCast_AsCon_ZGame_Instance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UConZGameInstance(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetCallFunc_GetPlayAsDrone_ReturnValue() {
		return memory.read<bool>(m_addr + 57);
	}
	bool GetCallFunc_EqualEqual_ObjectObject_ReturnValue() {
		return memory.read<bool>(m_addr + 58);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 60);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}
	struct UGameInstance GetCallFunc_GetGameInstance_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UGameInstance(ptr_addr);
	}
	struct UConZGameInstance GetK2Node_DynamicCast_AsCon_ZGame_Instance_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UConZGameInstance(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess_2() {
		return memory.read<bool>(m_addr + 88);
	}
	bool GetCallFunc_GetPlayAsDrone_ReturnValue_2() {
		return memory.read<bool>(m_addr + 89);
	}
	float GetK2Node_Select_Default() {
		return memory.read<float>(m_addr + 92);
	}
	struct FWeightedBlendable GetK2Node_MakeStruct_WeightedBlendable() {
		return memory.read<struct FWeightedBlendable>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};