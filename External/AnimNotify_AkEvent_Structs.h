#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FReceived_Notify
{
public:
	FReceived_Notify(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetMeshComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct UAnimSequenceBase GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAnimSequenceBase(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}
	struct TArray<struct FAkExternalSourceInfo> GetTemp_struct_Variable() {
		return memory.read<struct TArray<struct FAkExternalSourceInfo>>(m_addr + 24);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FDelegate GetTemp_delegate_Variable() {
		return memory.read<struct FDelegate>(m_addr + 52);
	}
	struct AActor GetCallFunc_GetOwner_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct AActor(ptr_addr);
	}
	struct FString GetCallFunc_GetDisplayName_ReturnValue() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetCallFunc_GetDisplayName_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_2() {
		return memory.read<struct FString>(m_addr + 128);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_3() {
		return memory.read<struct FString>(m_addr + 144);
	}
	struct FString GetCallFunc_Concat_StrStr_ReturnValue_4() {
		return memory.read<struct FString>(m_addr + 160);
	}
	struct FName GetCallFunc_Conv_StringToName_ReturnValue() {
		return memory.read<struct FName>(m_addr + 176);
	}
	bool GetCallFunc_GetAkComponent_ComponentCreated() {
		return memory.read<bool>(m_addr + 184);
	}
	struct UAkComponent GetCallFunc_GetAkComponent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UAkComponent(ptr_addr);
	}
	int32_t GetCallFunc_PostAkEvent_ReturnValue() {
		return memory.read<int32_t>(m_addr + 200);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue() {
		return memory.read<int32_t>(m_addr + 204);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};