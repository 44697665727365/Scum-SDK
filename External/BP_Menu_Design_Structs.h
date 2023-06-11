#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_Menu_Design
{
public:
	FExecuteUbergraph_BP_Menu_Design(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FName GetK2Node_ComponentBoundEvent_EventName() {
		return memory.read<struct FName>(m_addr + 4);
	}
	float GetK2Node_ComponentBoundEvent_EmitterTime() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetK2Node_ComponentBoundEvent_ParticleCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetK2Node_Event_DeltaSeconds() {
		return memory.read<float>(m_addr + 20);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_Add_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 28);
	}
	float GetCallFunc_BreakRotator_Roll() {
		return memory.read<float>(m_addr + 32);
	}
	float GetCallFunc_BreakRotator_Pitch() {
		return memory.read<float>(m_addr + 36);
	}
	float GetCallFunc_BreakRotator_Yaw() {
		return memory.read<float>(m_addr + 40);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 44);
	}
	bool GetK2Node_CustomEvent_backwards() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FHitResult GetCallFunc_K2_SetRelativeRotation_SweepHitResult() {
		return memory.read<struct FHitResult>(m_addr + 60);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 196);
	}
	struct ADoubleSlidingDoorStatic GetK2Node_DynamicCast_AsDouble_Sliding_Door_Static() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct ADoubleSlidingDoorStatic(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 208);
	}
	struct FVector GetCallFunc_K2_GetActorLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 212);
	}
	struct FVector GetCallFunc_K2_GetActorLocation_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 224);
	}
	struct FRotator GetCallFunc_K2_GetActorRotation_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 236);
	}
	struct FVector GetCallFunc_VLerp_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 248);
	}
	bool GetCallFunc_K2_TeleportTo_ReturnValue() {
		return memory.read<bool>(m_addr + 260);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 264);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue() {
		return memory.read<int32_t>(m_addr + 276);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 280);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_3() {
		return memory.read<struct FVector>(m_addr + 292);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_2() {
		return memory.read<int32_t>(m_addr + 304);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_3() {
		return memory.read<int32_t>(m_addr + 308);
	}
	bool GetCallFunc_EqualEqual_BoolBool_ReturnValue() {
		return memory.read<bool>(m_addr + 312);
	}
	struct FName GetK2Node_ComponentBoundEvent_EventName_7() {
		return memory.read<struct FName>(m_addr + 316);
	}
	float GetK2Node_ComponentBoundEvent_EmitterTime_7() {
		return memory.read<float>(m_addr + 324);
	}
	int32_t GetK2Node_ComponentBoundEvent_ParticleCount_7() {
		return memory.read<int32_t>(m_addr + 328);
	}
	struct FName GetK2Node_ComponentBoundEvent_EventName_6() {
		return memory.read<struct FName>(m_addr + 332);
	}
	float GetK2Node_ComponentBoundEvent_EmitterTime_6() {
		return memory.read<float>(m_addr + 340);
	}
	int32_t GetK2Node_ComponentBoundEvent_ParticleCount_6() {
		return memory.read<int32_t>(m_addr + 344);
	}
	struct FName GetK2Node_ComponentBoundEvent_EventName_5() {
		return memory.read<struct FName>(m_addr + 348);
	}
	float GetK2Node_ComponentBoundEvent_EmitterTime_5() {
		return memory.read<float>(m_addr + 356);
	}
	int32_t GetK2Node_ComponentBoundEvent_ParticleCount_5() {
		return memory.read<int32_t>(m_addr + 360);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_4() {
		return memory.read<struct FVector>(m_addr + 364);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_5() {
		return memory.read<struct FVector>(m_addr + 376);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_4() {
		return memory.read<int32_t>(m_addr + 388);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_5() {
		return memory.read<int32_t>(m_addr + 392);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_6() {
		return memory.read<struct FVector>(m_addr + 396);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_7() {
		return memory.read<struct FVector>(m_addr + 408);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_6() {
		return memory.read<int32_t>(m_addr + 420);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_7() {
		return memory.read<int32_t>(m_addr + 424);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_8() {
		return memory.read<struct FVector>(m_addr + 428);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_9() {
		return memory.read<struct FVector>(m_addr + 440);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_8() {
		return memory.read<int32_t>(m_addr + 452);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_9() {
		return memory.read<int32_t>(m_addr + 456);
	}
	struct FName GetK2Node_ComponentBoundEvent_EventName_4() {
		return memory.read<struct FName>(m_addr + 460);
	}
	float GetK2Node_ComponentBoundEvent_EmitterTime_4() {
		return memory.read<float>(m_addr + 468);
	}
	int32_t GetK2Node_ComponentBoundEvent_ParticleCount_4() {
		return memory.read<int32_t>(m_addr + 472);
	}
	struct FVector GetCallFunc_K2_GetComponentLocation_ReturnValue_10() {
		return memory.read<struct FVector>(m_addr + 476);
	}
	struct FName GetK2Node_ComponentBoundEvent_EventName_3() {
		return memory.read<struct FName>(m_addr + 488);
	}
	float GetK2Node_ComponentBoundEvent_EmitterTime_3() {
		return memory.read<float>(m_addr + 496);
	}
	int32_t GetK2Node_ComponentBoundEvent_ParticleCount_3() {
		return memory.read<int32_t>(m_addr + 500);
	}
	int32_t GetCallFunc_PostEventAtLocation_ReturnValue_10() {
		return memory.read<int32_t>(m_addr + 504);
	}
	struct FName GetK2Node_ComponentBoundEvent_EventName_2() {
		return memory.read<struct FName>(m_addr + 508);
	}
	float GetK2Node_ComponentBoundEvent_EmitterTime_2() {
		return memory.read<float>(m_addr + 516);
	}
	int32_t GetK2Node_ComponentBoundEvent_ParticleCount_2() {
		return memory.read<int32_t>(m_addr + 520);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
{
public:
	FBndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetEmitterTime() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetParticleCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
{
public:
	FBndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetEmitterTime() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetParticleCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
{
public:
	FBndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetEmitterTime() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetParticleCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
{
public:
	FBndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetEmitterTime() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetParticleCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
{
public:
	FBndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetEmitterTime() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetParticleCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
{
public:
	FBndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetEmitterTime() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetParticleCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
{
public:
	FBndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetEmitterTime() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetParticleCount() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartPrisonerEnterSequence
{
public:
	FStartPrisonerEnterSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getbackwards() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceiveTick
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
};