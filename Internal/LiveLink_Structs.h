#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction LiveLink.LiveLinkTickSignature__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FLiveLinkTickSignature__DelegateSignature
{
	float DeltaTime;  // 0x0(0x4)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// Size: 0x30(Inherited: 0x0) 
struct FGetSourceType
{
	struct FLiveLinkSourceHandle SourceHandle;  // 0x0(0x18)
	struct FText ReturnValue;  // 0x18(0x18)

}; 
// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// Size: 0x1(Inherited: 0x0) 
struct FLiveLinkRetargetAssetReference
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// Size: 0x50(Inherited: 0x10) 
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	struct FPoseLink InputPose;  // 0x10(0x10)
	struct FLiveLinkSubjectName LiveLinkSubjectName;  // 0x20(0x8)
	ULiveLinkRetargetAsset* RetargetAsset;  // 0x28(0x8)
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset;  // 0x30(0x8)
	char pad_56[24];  // 0x38(0x18)

}; 
// Function LiveLink.LiveLinkPreset.ApplyToClient
// Size: 0x1(Inherited: 0x0) 
struct FApplyToClient
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// Size: 0x50(Inherited: 0x0) 
struct FConnectToProvider
{
	struct FProviderPollResult Provider;  // 0x0(0x38)
	struct FLiveLinkSourceHandle SourceHandle;  // 0x38(0x18)

}; 
// Function LiveLink.LiveLinkComponent.GetSubjectData
// Size: 0x28(Inherited: 0x0) 
struct FGetSubjectData
{
	struct FName SubjectName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bSuccess : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x10(0x18)

}; 
// ScriptStruct LiveLink.LiveLinkInstanceProxy
// Size: 0x7C0(Inherited: 0x770) 
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	struct FAnimNode_LiveLinkPose PoseNode;  // 0x770(0x50)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// Size: 0x30(Inherited: 0x0) 
struct FGetSourceMachineName
{
	struct FLiveLinkSourceHandle SourceHandle;  // 0x0(0x18)
	struct FText ReturnValue;  // 0x18(0x18)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// Size: 0x30(Inherited: 0x0) 
struct FGetChildren
{
	struct FLiveLinkTransform LiveLinkTransform;  // 0x0(0x20)
	struct TArray<struct FLiveLinkTransform> Children;  // 0x20(0x10)

}; 
// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
// Size: 0x28(Inherited: 0x0) 
struct FLiveLinkRoleProjectSetting
{
	ULiveLinkRole* Role;  // 0x0(0x8)
	ULiveLinkSubjectSettings* SettingClass;  // 0x8(0x8)
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor;  // 0x10(0x8)
	struct TArray<ULiveLinkFramePreProcessor*> FramePreProcessors;  // 0x18(0x10)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// Size: 0x28(Inherited: 0x0) 
struct FTransformName
{
	struct FLiveLinkTransform LiveLinkTransform;  // 0x0(0x20)
	struct FName Name;  // 0x20(0x8)

}; 
// ScriptStruct LiveLink.ProviderPollResult
// Size: 0x38(Inherited: 0x0) 
struct FProviderPollResult
{
	char pad_0[16];  // 0x0(0x10)
	struct FString Name;  // 0x10(0x10)
	struct FString MachineName;  // 0x20(0x10)
	double MachineTimeOffset;  // 0x30(0x8)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// Size: 0x20(Inherited: 0x0) 
struct FIsSourceStillValid
{
	struct FLiveLinkSourceHandle SourceHandle;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// Size: 0x28(Inherited: 0x0) 
struct FChildCount
{
	struct FLiveLinkTransform LiveLinkTransform;  // 0x0(0x20)
	int32_t ReturnValue;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// Size: 0x50(Inherited: 0x0) 
struct FComponentSpaceTransform
{
	struct FLiveLinkTransform LiveLinkTransform;  // 0x0(0x20)
	struct FTransform Transform;  // 0x20(0x30)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// Size: 0x50(Inherited: 0x0) 
struct FParentBoneSpaceTransform
{
	struct FLiveLinkTransform LiveLinkTransform;  // 0x0(0x20)
	struct FTransform Transform;  // 0x20(0x30)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// Size: 0x38(Inherited: 0x0) 
struct FGetRootTransform
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	struct FLiveLinkTransform LiveLinkTransform;  // 0x18(0x20)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// Size: 0x20(Inherited: 0x0) 
struct FEvaluateLiveLinkFrame
{
	struct FLiveLinkSubjectRepresentation SubjectRepresentation;  // 0x0(0x10)
	struct FLiveLinkBaseBlueprintData OutBlueprintData;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function LiveLink.LiveLinkInstance.SetSubject
// Size: 0x8(Inherited: 0x0) 
struct FSetSubject
{
	struct FLiveLinkSubjectName SubjectName;  // 0x0(0x8)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// Size: 0x20(Inherited: 0x0) 
struct FEvaluateLiveLinkFrameWithSpecificRole
{
	struct FLiveLinkSubjectName SubjectName;  // 0x0(0x8)
	ULiveLinkRole* Role;  // 0x8(0x8)
	struct FLiveLinkBaseBlueprintData OutBlueprintData;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// Size: 0x38(Inherited: 0x0) 
struct FEvaluateLiveLinkFrameAtSceneTime
{
	struct FLiveLinkSubjectName SubjectName;  // 0x0(0x8)
	ULiveLinkRole* Role;  // 0x8(0x8)
	struct FTimecode SceneTime;  // 0x10(0x14)
	char pad_36[4];  // 0x24(0x4)
	struct FLiveLinkBaseBlueprintData OutBlueprintData;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// Size: 0xC(Inherited: 0x0) 
struct FIsLiveLinkSubjectEnabled
{
	struct FLiveLinkSubjectName SubjectName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// Size: 0x18(Inherited: 0x0) 
struct FGetLiveLinkEnabledSubjectNames
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIncludeVirtualSubject : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FLiveLinkSubjectName> ReturnValue;  // 0x8(0x10)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// Size: 0x28(Inherited: 0x0) 
struct FEvaluateLiveLinkFrameAtWorldTimeOffset
{
	struct FLiveLinkSubjectName SubjectName;  // 0x0(0x8)
	ULiveLinkRole* Role;  // 0x8(0x8)
	float WorldTimeOffset;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FLiveLinkBaseBlueprintData OutBlueprintData;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
// Size: 0xD0(Inherited: 0x0) 
struct FGetAnimationFrameData
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	struct FLiveLinkAnimationFrameData AnimationFrameData;  // 0x18(0xB0)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool ReturnValue : 1;  // 0xC8(0x1)
	char pad_201[7];  // 0xC9(0x7)

}; 
// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// Size: 0x28(Inherited: 0x0) 
struct FGetSubjectDataAtWorldTime
{
	struct FName SubjectName;  // 0x0(0x8)
	float WorldTime;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bSuccess : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x10(0x18)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
// Size: 0x50(Inherited: 0x0) 
struct FGetAnimationStaticData
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	struct FLiveLinkSkeletonStaticData AnimationStaticData;  // 0x18(0x30)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool ReturnValue : 1;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// Size: 0x40(Inherited: 0x0) 
struct FGetParent
{
	struct FLiveLinkTransform LiveLinkTransform;  // 0x0(0x20)
	struct FLiveLinkTransform Parent;  // 0x20(0x20)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// Size: 0xD0(Inherited: 0x0) 
struct FGetBasicData
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	struct FLiveLinkBasicBlueprintData BasicBlueprintData;  // 0x18(0xB8)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// Size: 0xC8(Inherited: 0x0) 
struct FGetPropertyValue
{
	struct FLiveLinkBasicBlueprintData BasicData;  // 0x0(0xB8)
	struct FName PropertyName;  // 0xB8(0x8)
	float Value;  // 0xC0(0x4)
	char pad_196_1 : 7;  // 0xC4(0x1)
	bool ReturnValue : 1;  // 0xC4(0x1)
	char pad_197[3];  // 0xC5(0x3)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// Size: 0x68(Inherited: 0x0) 
struct FGetCurves
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	struct TMap<struct FName, float> Curves;  // 0x18(0x50)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// Size: 0x10(Inherited: 0x0) 
struct FGetLiveLinkSubjectRole
{
	struct FLiveLinkSubjectName SubjectName;  // 0x0(0x8)
	ULiveLinkRole* ReturnValue;  // 0x8(0x8)

}; 
// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// Size: 0x50(Inherited: 0x0) 
struct FRemapCurveElements
{
	struct TMap<struct FName, float> CurveItems;  // 0x0(0x50)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// Size: 0x18(Inherited: 0x0) 
struct FGetLiveLinkSubjects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIncludeDisabledSubject : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bIncludeVirtualSubject : 1;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct TArray<struct FLiveLinkSubjectKey> ReturnValue;  // 0x8(0x10)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// Size: 0x88(Inherited: 0x0) 
struct FGetMetadata
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	struct FSubjectMetadata MetaData;  // 0x18(0x70)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// Size: 0x30(Inherited: 0x0) 
struct FGetSourceStatus
{
	struct FLiveLinkSourceHandle SourceHandle;  // 0x0(0x18)
	struct FText ReturnValue;  // 0x18(0x18)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// Size: 0x20(Inherited: 0x0) 
struct FGetSpecificLiveLinkSubjectRole
{
	struct FLiveLinkSubjectKey SubjectKey;  // 0x0(0x18)
	ULiveLinkRole* ReturnValue;  // 0x18(0x8)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// Size: 0x1C(Inherited: 0x0) 
struct FSetLiveLinkSubjectEnabled
{
	struct FLiveLinkSubjectKey SubjectKey;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bEnabled : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// Size: 0x40(Inherited: 0x0) 
struct FGetTransformByIndex
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	int32_t TransformIndex;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct FLiveLinkTransform LiveLinkTransform;  // 0x20(0x20)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// Size: 0x40(Inherited: 0x0) 
struct FGetTransformByName
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	struct FName TransformName;  // 0x18(0x8)
	struct FLiveLinkTransform LiveLinkTransform;  // 0x20(0x20)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// Size: 0x28(Inherited: 0x0) 
struct FHasParent
{
	struct FLiveLinkTransform LiveLinkTransform;  // 0x0(0x20)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// Size: 0x1C(Inherited: 0x0) 
struct FIsSpecificLiveLinkSubjectEnabled
{
	struct FLiveLinkSubjectKey SubjectKey;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bForThisFrame : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool ReturnValue : 1;  // 0x19(0x1)
	char pad_26[2];  // 0x1A(0x2)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// Size: 0x20(Inherited: 0x0) 
struct FNumberOfTransforms
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	int32_t ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
// Size: 0x20(Inherited: 0x0) 
struct FRemoveSource
{
	struct FLiveLinkSourceHandle SourceHandle;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// Size: 0x28(Inherited: 0x0) 
struct FTransformNames
{
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x0(0x18)
	struct TArray<struct FName> TransformNames;  // 0x18(0x10)

}; 
// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
// Size: 0xA8(Inherited: 0x0) 
struct FUpdateVirtualSubjectFrameData_Internal
{
	struct FLiveLinkBaseFrameData InStruct;  // 0x0(0xA0)
	char pad_160_1 : 7;  // 0xA0(0x1)
	bool bInShouldStampCurrentTime : 1;  // 0xA0(0x1)
	char pad_161_1 : 7;  // 0xA1(0x1)
	bool ReturnValue : 1;  // 0xA1(0x1)
	char pad_162[6];  // 0xA2(0x6)

}; 
// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
// Size: 0x18(Inherited: 0x0) 
struct FUpdateVirtualSubjectStaticData_Internal
{
	struct FLiveLinkBaseStaticData InStruct;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function LiveLink.LiveLinkPreset.AddToClient
// Size: 0x2(Inherited: 0x0) 
struct FAddToClient
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bRecreatePresets : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// Size: 0x10(Inherited: 0x0) 
struct FGetAvailableSubjectNames
{
	struct TArray<struct FName> SubjectNames;  // 0x0(0x10)

}; 
// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// Size: 0x38(Inherited: 0x0) 
struct FGetSubjectDataAtSceneTime
{
	struct FName SubjectName;  // 0x0(0x8)
	struct FTimecode SceneTime;  // 0x8(0x14)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bSuccess : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FSubjectFrameHandle SubjectFrameHandle;  // 0x20(0x18)

}; 
// Function LiveLink.LiveLinkInstance.SetRetargetAsset
// Size: 0x8(Inherited: 0x0) 
struct FSetRetargetAsset
{
	ULiveLinkRetargetAsset* RetargetAsset;  // 0x0(0x8)

}; 
// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// Size: 0x8(Inherited: 0x0) 
struct FConstructMessageBusFinder
{
	struct ULiveLinkMessageBusFinder* ReturnValue;  // 0x0(0x8)

}; 
// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// Size: 0x38(Inherited: 0x0) 
struct FGetAvailableProviders
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FLatentActionInfo LatentInfo;  // 0x8(0x18)
	float Duration;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct TArray<struct FProviderPollResult> AvailableProviders;  // 0x28(0x10)

}; 
// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// Size: 0x10(Inherited: 0x0) 
struct FGetRemappedBoneName
{
	struct FName BoneName;  // 0x0(0x8)
	struct FName ReturnValue;  // 0x8(0x8)

}; 
// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// Size: 0x10(Inherited: 0x0) 
struct FGetRemappedCurveName
{
	struct FName CurveName;  // 0x0(0x8)
	struct FName ReturnValue;  // 0x8(0x8)

}; 
