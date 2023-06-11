#pragma once 
#include <AnimGraphRuntime_Structs.h>
 
 
 
// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x2C0(Inherited: 0x2C0) 
struct UAnimSequencerInstance : public UAnimInstance
{

}; 



// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x28(Inherited: 0x28) 
struct USequencerAnimationSupport : public UInterface
{

}; 



// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40(Inherited: 0x38) 
struct UAnimNotify_PlayMontageNotify : public UAnimNotify
{
	struct FName NotifyName;  // 0x38(0x8)

}; 



// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38(Inherited: 0x30) 
struct UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
	struct FName NotifyName;  // 0x30(0x8)

}; 



// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{

	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	void K2_StartProfilingTimer(); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, char ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, char ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, char ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, uint8_t  EasingType, struct FRuntimeFloatCurve& CustomCurve); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
}; 



// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xA8(Inherited: 0x28) 
struct UPlayMontageCallbackProxy : public UObject
{
	struct FMulticastInlineDelegate OnCompleted;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnBlendOut;  // 0x38(0x10)
	struct FMulticastInlineDelegate OnInterrupted;  // 0x48(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin;  // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd;  // 0x68(0x10)
	char pad_120[48];  // 0x78(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
}; 



