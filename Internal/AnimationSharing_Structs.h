#pragma once 
#include "SDK.h" 
 
 
// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// Size: 0x18(Inherited: 0x0) 
struct FCreateAnimationSharingManager
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAnimationSharingSetup* Setup;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// Size: 0x30(Inherited: 0x28) 
struct FTickAnimationSharingFunction : public FTickFunction
{
	char pad_40[8];  // 0x28(0x8)

}; 
// ScriptStruct AnimationSharing.AnimationSharingScalability
// Size: 0x10(Inherited: 0x0) 
struct FAnimationSharingScalability
{
	struct FPerPlatformBool UseBlendTransitions;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FPerPlatformFloat BlendSignificanceValue;  // 0x4(0x4)
	struct FPerPlatformInt MaximumNumberConcurrentBlends;  // 0x8(0x4)
	struct FPerPlatformFloat TickSignificanceValue;  // 0xC(0x4)

}; 
// ScriptStruct AnimationSharing.AnimationStateEntry
// Size: 0x30(Inherited: 0x0) 
struct FAnimationStateEntry
{
	char State;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FAnimationSetup> AnimationSetups;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bOnDemand : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bAdditive : 1;  // 0x19(0x1)
	char pad_26[2];  // 0x1A(0x2)
	float BlendTime;  // 0x1C(0x4)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bReturnToPreviousState : 1;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool bSetNextState : 1;  // 0x21(0x1)
	char nextState;  // 0x22(0x1)
	char pad_35[1];  // 0x23(0x1)
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances;  // 0x24(0x4)
	float WiggleTimePercentage;  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool bRequiresCurves : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)

}; 
// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// Size: 0x10(Inherited: 0x0) 
struct FGetInstancedActors
{
	struct TArray<struct AActor*> Actors;  // 0x0(0x10)

}; 
// ScriptStruct AnimationSharing.AnimationSetup
// Size: 0x18(Inherited: 0x0) 
struct FAnimationSetup
{
	struct UAnimSequence* AnimSequence;  // 0x0(0x8)
	UAnimSharingStateInstance* AnimBlueprint;  // 0x8(0x8)
	struct FPerPlatformInt NumRandomizedInstances;  // 0x10(0x4)
	struct FPerPlatformBool Enabled;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// Size: 0x38(Inherited: 0x0) 
struct FPerSkeletonAnimationSharingSetup
{
	struct USkeleton* Skeleton;  // 0x0(0x8)
	struct USkeletalMesh* SkeletalMesh;  // 0x8(0x8)
	UAnimSharingTransitionInstance* BlendAnimBlueprint;  // 0x10(0x8)
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint;  // 0x18(0x8)
	UAnimationSharingStateProcessor* StateProcessorClass;  // 0x20(0x8)
	struct TArray<struct FAnimationStateEntry> AnimationStates;  // 0x28(0x10)

}; 
// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// Size: 0x1(Inherited: 0x0) 
struct FAnimationSharingEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// Size: 0x10(Inherited: 0x0) 
struct FGetAnimationSharingManager
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAnimationSharingManager* ReturnValue;  // 0x8(0x8)

}; 
// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// Size: 0x10(Inherited: 0x0) 
struct FRegisterActorWithSkeletonBP
{
	struct AActor* InActor;  // 0x0(0x8)
	struct USkeleton* SharingSkeleton;  // 0x8(0x8)

}; 
// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// Size: 0x8(Inherited: 0x0) 
struct FGetAnimationStateEnum
{
	struct UEnum* ReturnValue;  // 0x0(0x8)

}; 
// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// Size: 0x18(Inherited: 0x0) 
struct FProcessActorState
{
	int32_t OutState;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct AActor* InActor;  // 0x8(0x8)
	char CurrentState;  // 0x10(0x1)
	char OnDemandState;  // 0x11(0x1)
	char pad_18_1 : 7;  // 0x12(0x1)
	bool bShouldProcess : 1;  // 0x12(0x1)
	char pad_19[5];  // 0x13(0x5)

}; 
