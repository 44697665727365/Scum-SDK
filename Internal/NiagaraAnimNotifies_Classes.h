#pragma once 
#include <NiagaraAnimNotifies_Structs.h>
 
 
 
// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0x90(Inherited: 0x38) 
struct UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
	struct UNiagaraSystem* Template;  // 0x38(0x8)
	struct FVector LocationOffset;  // 0x40(0xC)
	struct FRotator RotationOffset;  // 0x4C(0xC)
	struct FVector Scale;  // 0x58(0xC)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bAbsoluteScale : 1;  // 0x64(0x1)
	char pad_101[27];  // 0x65(0x1B)
	char Attached : 1;  // 0x80(0x1)
	char pad_128_1 : 7;  // 0x80(0x1)
	char pad_129[4];  // 0x81(0x4)
	struct FName SocketName;  // 0x84(0x8)
	char pad_140[4];  // 0x8C(0x4)

	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
}; 



// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x60(Inherited: 0x30) 
struct UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
	struct UNiagaraSystem* Template;  // 0x30(0x8)
	struct FName SocketName;  // 0x38(0x8)
	struct FVector LocationOffset;  // 0x40(0xC)
	struct FRotator RotationOffset;  // 0x4C(0xC)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bDestroyAtEnd : 1;  // 0x58(0x1)
	char pad_89[7];  // 0x59(0x7)

	struct UFXSystemComponent* GetSpawnedEffect(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
}; 



// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Size: 0xB0(Inherited: 0x60) 
struct UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
	char pad_96[80];  // 0x60(0x50)

	float GetNotifyProgress(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
}; 



