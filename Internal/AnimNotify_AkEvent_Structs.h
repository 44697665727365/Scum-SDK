#pragma once 
#include "SDK.h" 
 
 
// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// Size: 0xD1(Inherited: 0x18) 
struct FReceived_Notify : public FReceived_Notify
{
	struct USkeletalMeshComponent* MeshComp;  // 0x0(0x8)
	struct UAnimSequenceBase* Animation;  // 0x8(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable;  // 0x18(0x10)
	struct FVector CallFunc_K2_GetComponentLocation_ReturnValue;  // 0x28(0xC)
	struct FDelegate Temp_delegate_Variable;  // 0x34(0x10)
	struct AActor* CallFunc_GetOwner_ReturnValue;  // 0x48(0x8)
	struct FString CallFunc_GetDisplayName_ReturnValue;  // 0x50(0x10)
	struct FString CallFunc_GetDisplayName_ReturnValue_2;  // 0x60(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue;  // 0x70(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue_2;  // 0x80(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue_3;  // 0x90(0x10)
	struct FString CallFunc_Concat_StrStr_ReturnValue_4;  // 0xA0(0x10)
	struct FName CallFunc_Conv_StringToName_ReturnValue;  // 0xB0(0x8)
	char pad_197_1 : 7;  // 0xC5(0x1)
	bool CallFunc_GetAkComponent_ComponentCreated : 1;  // 0xB8(0x1)
	struct UAkComponent* CallFunc_GetAkComponent_ReturnValue;  // 0xC0(0x8)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0xC8(0x4)
	int32_t CallFunc_PostEventAtLocation_ReturnValue;  // 0xCC(0x4)
	char pad_214_1 : 7;  // 0xD6(0x1)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD0(0x1)

}; 
