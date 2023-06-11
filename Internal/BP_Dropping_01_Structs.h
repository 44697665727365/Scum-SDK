#pragma once 
#include "SDK.h" 
 
 
// Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01
// Size: 0x210(Inherited: 0x0) 
struct FExecuteUbergraph_BP_Dropping_01
{
	int32_t EntryPoint;  // 0x0(0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4(0x10)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x14(0xC)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent;  // 0x20(0x8)
	struct AActor* K2Node_ComponentBoundEvent_OtherActor;  // 0x28(0x8)
	struct UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp;  // 0x30(0x8)
	struct FVector K2Node_ComponentBoundEvent_NormalImpulse;  // 0x38(0xC)
	struct FHitResult K2Node_ComponentBoundEvent_Hit;  // 0x44(0x88)
	struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult;  // 0xCC(0x88)
	char pad_340_1 : 7;  // 0x154(0x1)
	bool CallFunc_BreakHitResult_bBlockingHit : 1;  // 0x154(0x1)
	char pad_341_1 : 7;  // 0x155(0x1)
	bool CallFunc_BreakHitResult_bInitialOverlap : 1;  // 0x155(0x1)
	char pad_342[2];  // 0x156(0x2)
	float CallFunc_BreakHitResult_Time;  // 0x158(0x4)
	float CallFunc_BreakHitResult_Distance;  // 0x15C(0x4)
	struct FVector CallFunc_BreakHitResult_Location;  // 0x160(0xC)
	struct FVector CallFunc_BreakHitResult_ImpactPoint;  // 0x16C(0xC)
	struct FVector CallFunc_BreakHitResult_Normal;  // 0x178(0xC)
	struct FVector CallFunc_BreakHitResult_ImpactNormal;  // 0x184(0xC)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;  // 0x190(0x8)
	struct AActor* CallFunc_BreakHitResult_HitActor;  // 0x198(0x8)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;  // 0x1A0(0x8)
	struct FName CallFunc_BreakHitResult_HitBoneName;  // 0x1A8(0x8)
	int32_t CallFunc_BreakHitResult_HitItem;  // 0x1B0(0x4)
	int32_t CallFunc_BreakHitResult_ElementIndex;  // 0x1B4(0x4)
	int32_t CallFunc_BreakHitResult_FaceIndex;  // 0x1B8(0x4)
	struct FVector CallFunc_BreakHitResult_TraceStart;  // 0x1BC(0xC)
	struct FVector CallFunc_BreakHitResult_TraceEnd;  // 0x1C8(0xC)
	struct FVector CallFunc_NegateVector_ReturnValue;  // 0x1D4(0xC)
	struct FRotator CallFunc_MakeRotFromX_ReturnValue;  // 0x1E0(0xC)
	char pad_492[4];  // 0x1EC(0x4)
	struct UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue;  // 0x1F0(0x8)
	struct UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue;  // 0x1F8(0x8)
	struct FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue;  // 0x200(0x8)
	struct UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue;  // 0x208(0x8)

}; 
// Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// Size: 0xAC(Inherited: 0x0) 
struct FBndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
{
	struct UPrimitiveComponent* HitComponent;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct UPrimitiveComponent* OtherComp;  // 0x10(0x8)
	struct FVector NormalImpulse;  // 0x18(0xC)
	struct FHitResult Hit;  // 0x24(0x88)

}; 
