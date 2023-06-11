#pragma once 
#include <AnimationSharing_Structs.h>
 
 
 
// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x2D0(Inherited: 0x2C0) 
struct UAnimSharingTransitionInstance : public UAnimInstance
{
	struct TWeakObjectPtr<USkeletalMeshComponent> FromComponent;  // 0x2B8(0x8)
	struct TWeakObjectPtr<USkeletalMeshComponent> ToComponent;  // 0x2C0(0x8)
	float BlendTime;  // 0x2C8(0x4)
	char pad_724_1 : 7;  // 0x2D4(0x1)
	bool bBlendBool : 1;  // 0x2CC(0x1)

}; 



// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x2E0(Inherited: 0x2C0) 
struct UAnimSharingStateInstance : public UAnimInstance
{
	struct UAnimSequence* AnimationToPlay;  // 0x2B8(0x8)
	float PermutationTimeOffset;  // 0x2C0(0x4)
	float PlayRate;  // 0x2C4(0x4)
	char pad_720_1 : 7;  // 0x2D0(0x1)
	bool bStateBool : 1;  // 0x2C8(0x1)
	struct UAnimSharingInstance* Instance;  // 0x2D0(0x8)
	char pad_729[7];  // 0x2D9(0x7)

	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
}; 



// Class AnimationSharing.AnimationSharingSetup
// Size: 0x48(Inherited: 0x28) 
struct UAnimationSharingSetup : public UObject
{
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;  // 0x28(0x10)
	struct FAnimationSharingScalability ScalabilitySettings;  // 0x38(0x10)

}; 



// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x2D0(Inherited: 0x2C0) 
struct UAnimSharingAdditiveInstance : public UAnimInstance
{
	struct TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;  // 0x2B8(0x8)
	struct TWeakObjectPtr<UAnimSequence> AdditiveAnimation;  // 0x2C0(0x8)
	float Alpha;  // 0x2C8(0x4)
	char pad_724_1 : 7;  // 0x2D4(0x1)
	bool bStateBool : 1;  // 0x2CC(0x1)

}; 



// Class AnimationSharing.AnimSharingInstance
// Size: 0x118(Inherited: 0x28) 
struct UAnimSharingInstance : public UObject
{
	struct TArray<struct AActor*> RegisteredActors;  // 0x28(0x10)
	char pad_56[80];  // 0x38(0x50)
	struct UAnimationSharingStateProcessor* StateProcessor;  // 0x88(0x8)
	char pad_144[56];  // 0x90(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences;  // 0xC8(0x10)
	char pad_216[16];  // 0xD8(0x10)
	struct UEnum* StateEnum;  // 0xE8(0x8)
	struct AActor* SharingActor;  // 0xF0(0x8)
	char pad_248[32];  // 0xF8(0x20)

}; 



// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x50(Inherited: 0x28) 
struct UAnimationSharingStateProcessor : public UObject
{
	struct TSoftObjectPtr<UEnum> AnimationStateEnum;  // 0x28(0x28)

	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
}; 



// Class AnimationSharing.AnimationSharingManager
// Size: 0x88(Inherited: 0x28) 
struct UAnimationSharingManager : public UObject
{
	struct TArray<struct USkeleton*> Skeletons;  // 0x28(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData;  // 0x38(0x10)
	char pad_72[64];  // 0x48(0x40)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
}; 



