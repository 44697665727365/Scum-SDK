#pragma once 
#include <LiveLink_Structs.h>
 
 
 
// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// Size: 0x50(Inherited: 0x40) 
struct ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
	char pad_64[16];  // 0x40(0x10)

}; 



// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// Size: 0x40(Inherited: 0x28) 
struct ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bInterpolatePropertyValues : 1;  // 0x28(0x1)
	char pad_41[23];  // 0x29(0x17)

}; 



// Class LiveLink.LiveLinkBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{

	void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, struct TArray<struct FName>& TransformNames); // Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
	void TransformName(struct FLiveLinkTransform& LiveLinkTransform, struct FName& Name); // Function LiveLink.LiveLinkBlueprintLibrary.TransformName
	void SetLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey SubjectKey, bool bEnabled); // Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	int32_t NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	bool IsSpecificLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey SubjectKey, bool bForThisFrame); // Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	bool IsLiveLinkSubjectEnabled(struct FLiveLinkSubjectName SubjectName); // Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	bool HasParent(struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.HasParent
	void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, struct FName TransformName, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	ULiveLinkRole* GetSpecificLiveLinkSubjectRole(struct FLiveLinkSubjectKey SubjectKey); // Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	struct FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	struct FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	struct FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, struct FName PropertyName, float& Value); // Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform& Parent); // Function LiveLink.LiveLinkBlueprintLibrary.GetParent
	void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata& MetaData); // Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	struct TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	ULiveLinkRole* GetLiveLinkSubjectRole(struct FLiveLinkSubjectName SubjectName); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	struct TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, struct TMap<struct FName, float>& Curves); // Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
	void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, struct TArray<struct FLiveLinkTransform>& Children); // Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
	void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData& BasicBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	bool GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData& AnimationStaticData); // Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
	bool GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData& AnimationFrameData); // Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
	bool EvaluateLiveLinkFrameWithSpecificRole(struct FLiveLinkSubjectName SubjectName, ULiveLinkRole* Role, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	bool EvaluateLiveLinkFrameAtWorldTimeOffset(struct FLiveLinkSubjectName SubjectName, ULiveLinkRole* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	bool EvaluateLiveLinkFrameAtSceneTime(struct FLiveLinkSubjectName SubjectName, ULiveLinkRole* Role, struct FTimecode SceneTime, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	bool EvaluateLiveLinkFrame(struct FLiveLinkSubjectRepresentation SubjectRepresentation, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	int32_t ChildCount(struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
}; 



// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// Size: 0x58(Inherited: 0x58) 
struct ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{

}; 



// Class LiveLink.LiveLinkAnimationRoleToTransform
// Size: 0x40(Inherited: 0x28) 
struct ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
	struct FName BoneName;  // 0x28(0x8)
	char pad_48[16];  // 0x30(0x10)

}; 



// Class LiveLink.LiveLinkTimecodeProvider
// Size: 0xC0(Inherited: 0x30) 
struct ULiveLinkTimecodeProvider : public UTimecodeProvider
{
	struct FLiveLinkSubjectKey SubjectKey;  // 0x30(0x18)
	uint8_t  Evaluation;  // 0x48(0x4)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool bOverrideFrameRate : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	struct FFrameRate OverrideFrameRate;  // 0x50(0x8)
	int32_t BufferSize;  // 0x58(0x4)
	char pad_92[100];  // 0x5C(0x64)

}; 



// Class LiveLink.LiveLinkAnimationVirtualSubject
// Size: 0x168(Inherited: 0x160) 
struct ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
	char pad_352[1];  // 0x160(0x1)
	char pad_353_1 : 7;  // 0x161(0x1)
	bool bAppendSubjectNameToBones : 1;  // 0x161(0x1)
	char pad_354[6];  // 0x162(0x6)

}; 



// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// Size: 0x58(Inherited: 0x28) 
struct ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
	uint8_t  FrontAxis;  // 0x28(0x1)
	uint8_t  RightAxis;  // 0x29(0x1)
	uint8_t  UpAxis;  // 0x2A(0x1)
	char pad_43_1 : 7;  // 0x2B(0x1)
	bool bUseOffsetPosition : 1;  // 0x2B(0x1)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool bUseOffsetOrientation : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	struct FVector OffsetPosition;  // 0x30(0xC)
	struct FRotator OffsetOrientation;  // 0x3C(0xC)
	char pad_72[16];  // 0x48(0x10)

}; 



// Class LiveLink.LiveLinkBlueprintVirtualSubject
// Size: 0x188(Inherited: 0x160) 
struct ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{
	char pad_352[40];  // 0x160(0x28)

	bool UpdateVirtualSubjectStaticData_Internal(struct FLiveLinkBaseStaticData& InStruct); // Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	bool UpdateVirtualSubjectFrameData_Internal(struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime); // Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	void OnUpdate(); // Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	void OnInitialize(); // Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
}; 



// Class LiveLink.LiveLinkComponent
// Size: 0xD0(Inherited: 0xB0) 
struct ULiveLinkComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnLiveLinkUpdated;  // 0xB0(0x10)
	char pad_192[16];  // 0xC0(0x10)

	void GetSubjectDataAtWorldTime(struct FName SubjectName, float WorldTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	void GetSubjectDataAtSceneTime(struct FName SubjectName, struct FTimecode& SceneTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	void GetSubjectData(struct FName SubjectName, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectData
	void GetAvailableSubjectNames(struct TArray<struct FName>& SubjectNames); // Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
}; 



// Class LiveLink.LiveLinkMessageBusSourceFactory
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{

}; 



// Class LiveLink.LiveLinkDrivenComponent
// Size: 0xC8(Inherited: 0xB0) 
struct ULiveLinkDrivenComponent : public UActorComponent
{
	struct FLiveLinkSubjectName SubjectName;  // 0xB0(0x8)
	struct FName ActorTransformBone;  // 0xB8(0x8)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bModifyActorTransform : 1;  // 0xC0(0x1)
	char pad_193_1 : 7;  // 0xC1(0x1)
	bool bSetRelativeLocation : 1;  // 0xC1(0x1)
	char pad_194[6];  // 0xC2(0x6)

}; 



// Class LiveLink.LiveLinkInstance
// Size: 0x2C0(Inherited: 0x2C0) 
struct ULiveLinkInstance : public UAnimInstance
{
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset;  // 0x2B8(0x8)

	void SetSubject(struct FLiveLinkSubjectName SubjectName); // Function LiveLink.LiveLinkInstance.SetSubject
	void SetRetargetAsset(ULiveLinkRetargetAsset* RetargetAsset); // Function LiveLink.LiveLinkInstance.SetRetargetAsset
}; 



// Class LiveLink.LiveLinkMessageBusFinder
// Size: 0x80(Inherited: 0x28) 
struct ULiveLinkMessageBusFinder : public UObject
{
	char pad_40[88];  // 0x28(0x58)

	void GetAvailableProviders(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, float Duration, struct TArray<struct FProviderPollResult>& AvailableProviders); // Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	struct ULiveLinkMessageBusFinder* ConstructMessageBusFinder(); // Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
}; 



// Class LiveLink.LiveLinkMessageBusSourceSettings
// Size: 0xA0(Inherited: 0xA0) 
struct ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{

}; 



// Class LiveLink.LiveLinkPreset
// Size: 0x48(Inherited: 0x28) 
struct ULiveLinkPreset : public UObject
{
	struct TArray<struct FLiveLinkSourcePreset> Sources;  // 0x28(0x10)
	struct TArray<struct FLiveLinkSubjectPreset> Subjects;  // 0x38(0x10)

	void BuildFromClient(); // Function LiveLink.LiveLinkPreset.BuildFromClient
	bool ApplyToClient(); // Function LiveLink.LiveLinkPreset.ApplyToClient
	bool AddToClient(bool bRecreatePresets); // Function LiveLink.LiveLinkPreset.AddToClient
}; 



// Class LiveLink.LiveLinkRetargetAsset
// Size: 0x28(Inherited: 0x28) 
struct ULiveLinkRetargetAsset : public UObject
{

}; 



// Class LiveLink.LiveLinkRemapAsset
// Size: 0xC8(Inherited: 0x28) 
struct ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
	char pad_40[160];  // 0x28(0xA0)

	void RemapCurveElements(struct TMap<struct FName, float>& CurveItems); // Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
	struct FName GetRemappedCurveName(struct FName CurveName); // Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	struct FName GetRemappedBoneName(struct FName BoneName); // Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
}; 



// Class LiveLink.LiveLinkSettings
// Size: 0xD0(Inherited: 0x28) 
struct ULiveLinkSettings : public UObject
{
	struct TArray<struct FLiveLinkRoleProjectSetting> DefaultRoleSettings;  // 0x28(0x10)
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor;  // 0x38(0x8)
	struct TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset;  // 0x40(0x28)
	struct FDirectoryPath PresetSaveDir;  // 0x68(0x10)
	float ClockOffsetCorrectionStep;  // 0x78(0x4)
	uint8_t  DefaultMessageBusSourceMode;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	double MessageBusPingRequestFrequency;  // 0x80(0x8)
	double MessageBusHeartbeatFrequency;  // 0x88(0x8)
	double MessageBusHeartbeatTimeout;  // 0x90(0x8)
	double MessageBusTimeBeforeRemovingInactiveSource;  // 0x98(0x8)
	double TimeWithoutFrameToBeConsiderAsInvalid;  // 0xA0(0x8)
	struct FLinearColor ValidColor;  // 0xA8(0x10)
	struct FLinearColor InvalidColor;  // 0xB8(0x10)
	char TextSizeSource;  // 0xC8(0x1)
	char TextSizeSubject;  // 0xC9(0x1)
	char pad_202[6];  // 0xCA(0x6)

}; 



// Class LiveLink.LiveLinkTimeSynchronizationSource
// Size: 0x80(Inherited: 0x30) 
struct ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
	struct FLiveLinkSubjectName SubjectName;  // 0x30(0x8)
	char pad_56[72];  // 0x38(0x48)

}; 



// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// Size: 0xA8(Inherited: 0xA0) 
struct ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
	struct FName SourceName;  // 0xA0(0x8)

}; 



