#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_Dropping_01
{
public:
	FExecuteUbergraph_BP_Dropping_01(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDelegate GetK2Node_CreateDelegate_OutputDelegate() {
		return memory.read<struct FDelegate>(m_addr + 4);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct UPrimitiveComponent GetK2Node_ComponentBoundEvent_HitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetK2Node_ComponentBoundEvent_OtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetK2Node_ComponentBoundEvent_OtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetK2Node_ComponentBoundEvent_NormalImpulse() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	struct FHitResult GetK2Node_ComponentBoundEvent_Hit() {
		return memory.read<struct FHitResult>(m_addr + 68);
	}
	struct FHitResult GetCallFunc_K2_SetRelativeLocation_SweepHitResult() {
		return memory.read<struct FHitResult>(m_addr + 204);
	}
	bool GetCallFunc_BreakHitResult_bBlockingHit() {
		return memory.read<bool>(m_addr + 340);
	}
	bool GetCallFunc_BreakHitResult_bInitialOverlap() {
		return memory.read<bool>(m_addr + 341);
	}
	float GetCallFunc_BreakHitResult_Time() {
		return memory.read<float>(m_addr + 344);
	}
	float GetCallFunc_BreakHitResult_Distance() {
		return memory.read<float>(m_addr + 348);
	}
	struct FVector GetCallFunc_BreakHitResult_Location() {
		return memory.read<struct FVector>(m_addr + 352);
	}
	struct FVector GetCallFunc_BreakHitResult_ImpactPoint() {
		return memory.read<struct FVector>(m_addr + 364);
	}
	struct FVector GetCallFunc_BreakHitResult_Normal() {
		return memory.read<struct FVector>(m_addr + 376);
	}
	struct FVector GetCallFunc_BreakHitResult_ImpactNormal() {
		return memory.read<struct FVector>(m_addr + 388);
	}
	struct UPhysicalMaterial GetCallFunc_BreakHitResult_PhysMat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 400);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct AActor GetCallFunc_BreakHitResult_HitActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 408);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetCallFunc_BreakHitResult_HitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 416);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FName GetCallFunc_BreakHitResult_HitBoneName() {
		return memory.read<struct FName>(m_addr + 424);
	}
	int32_t GetCallFunc_BreakHitResult_HitItem() {
		return memory.read<int32_t>(m_addr + 432);
	}
	int32_t GetCallFunc_BreakHitResult_ElementIndex() {
		return memory.read<int32_t>(m_addr + 436);
	}
	int32_t GetCallFunc_BreakHitResult_FaceIndex() {
		return memory.read<int32_t>(m_addr + 440);
	}
	struct FVector GetCallFunc_BreakHitResult_TraceStart() {
		return memory.read<struct FVector>(m_addr + 444);
	}
	struct FVector GetCallFunc_BreakHitResult_TraceEnd() {
		return memory.read<struct FVector>(m_addr + 456);
	}
	struct FVector GetCallFunc_NegateVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 468);
	}
	struct FRotator GetCallFunc_MakeRotFromX_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 480);
	}
	struct UParticleSystemComponent GetCallFunc_SpawnEmitterAtLocation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 496);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UAudioComponent GetCallFunc_SpawnSoundAtLocation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UAudioComponent(ptr_addr);
	}
	struct FTimerHandle GetCallFunc_K2_SetTimerDelegate_ReturnValue() {
		return memory.read<struct FTimerHandle>(m_addr + 512);
	}
	struct UDecalComponent GetCallFunc_SpawnDecalAtLocation_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UDecalComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
{
public:
	FBndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetHitComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct AActor GetOtherActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetNormalImpulse() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FHitResult GetHit() {
		return memory.read<struct FHitResult>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};