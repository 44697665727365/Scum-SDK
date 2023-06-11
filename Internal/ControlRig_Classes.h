#pragma once 
#include <ControlRig_Structs.h>
 
 
 
// Class ControlRig.ControlRig
// Size: 0x650(Inherited: 0x28) 
struct UControlRig : public UObject
{
	char pad_40[29];  // 0x28(0x1D)
	uint8_t  ExecutionType;  // 0x45(0x1)
	char pad_70[2];  // 0x46(0x2)
	struct URigVM* VM;  // 0x48(0x8)
	struct FRigHierarchyContainer Hierarchy;  // 0x50(0x368)
	struct TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary;  // 0x3B8(0x28)
	char pad_992[16];  // 0x3E0(0x10)
	struct TMap<struct FName, struct FCachedPropertyPath> InputProperties;  // 0x3F0(0x50)
	struct TMap<struct FName, struct FCachedPropertyPath> OutputProperties;  // 0x440(0x50)
	struct FControlRigDrawContainer DrawContainer;  // 0x490(0x18)
	char pad_1192[24];  // 0x4A8(0x18)
	struct UAnimationDataSourceRegistry* DataSourceRegistry;  // 0x4C0(0x8)
	struct TArray<struct FName> EventQueue;  // 0x4C8(0x10)
	char pad_1240[120];  // 0x4D8(0x78)
	struct FRigInfluenceMapPerEvent Influences;  // 0x550(0x60)
	struct UControlRig* InteractionRig;  // 0x5B0(0x8)
	UControlRig* InteractionRigClass;  // 0x5B8(0x8)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x5C0(0x10)
	char pad_1488[128];  // 0x5D0(0x80)

	void SetInteractionRigClass(UControlRig* InInteractionRigClass); // Function ControlRig.ControlRig.SetInteractionRigClass
	void SetInteractionRig(struct UControlRig* InInteractionRig); // Function ControlRig.ControlRig.SetInteractionRig
	UControlRig* GetInteractionRigClass(); // Function ControlRig.ControlRig.GetInteractionRigClass
	struct UControlRig* GetInteractionRig(); // Function ControlRig.ControlRig.GetInteractionRig
}; 



// Class ControlRig.AdditiveControlRig
// Size: 0x660(Inherited: 0x650) 
struct UAdditiveControlRig : public UControlRig
{
	char pad_1616[16];  // 0x650(0x10)

}; 



// Class ControlRig.ControlRigSettings
// Size: 0x38(Inherited: 0x38) 
struct UControlRigSettings : public UDeveloperSettings
{

}; 



// Class ControlRig.ControlRigSequence
// Size: 0x220(Inherited: 0x1C8) 
struct UControlRigSequence : public ULevelSequence
{
	struct TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence;  // 0x1C8(0x28)
	struct TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh;  // 0x1F0(0x28)
	float LastExportedFrameRate;  // 0x218(0x4)
	char pad_540[4];  // 0x21C(0x4)

}; 



// Class ControlRig.ControlRigGizmoLibrary
// Size: 0xE0(Inherited: 0x28) 
struct UControlRigGizmoLibrary : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FControlRigGizmoDefinition DefaultGizmo;  // 0x30(0x60)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial;  // 0x90(0x28)
	struct FName MaterialColorParameter;  // 0xB8(0x8)
	struct TArray<struct FControlRigGizmoDefinition> Gizmos;  // 0xC0(0x10)
	char pad_208[16];  // 0xD0(0x10)

}; 



// Class ControlRig.ControlRigAnimInstance
// Size: 0x2C0(Inherited: 0x2C0) 
struct UControlRigAnimInstance : public UAnimInstance
{

}; 



// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x328(Inherited: 0x328) 
struct UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{

}; 



// Class ControlRig.ControlRigValidator
// Size: 0x68(Inherited: 0x28) 
struct UControlRigValidator : public UObject
{
	struct TArray<struct UControlRigValidationPass*> Passes;  // 0x28(0x10)
	char pad_56[48];  // 0x38(0x30)

}; 



// Class ControlRig.ControlRigComponent
// Size: 0x530(Inherited: 0x450) 
struct UControlRigComponent : public UPrimitiveComponent
{
	UControlRig* ControlRigClass;  // 0x450(0x8)
	struct FMulticastInlineDelegate OnPostInitializeDelegate;  // 0x458(0x10)
	struct FMulticastInlineDelegate OnPreSetupDelegate;  // 0x468(0x10)
	struct FMulticastInlineDelegate OnPostSetupDelegate;  // 0x478(0x10)
	struct FMulticastInlineDelegate OnPreUpdateDelegate;  // 0x488(0x10)
	struct FMulticastInlineDelegate OnPostUpdateDelegate;  // 0x498(0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements;  // 0x4A8(0x10)
	char pad_1208_1 : 7;  // 0x4B8(0x1)
	bool bResetTransformBeforeTick : 1;  // 0x4B8(0x1)
	char pad_1209_1 : 7;  // 0x4B9(0x1)
	bool bResetInitialsBeforeSetup : 1;  // 0x4B9(0x1)
	char pad_1210_1 : 7;  // 0x4BA(0x1)
	bool bUpdateRigOnTick : 1;  // 0x4BA(0x1)
	char pad_1211_1 : 7;  // 0x4BB(0x1)
	bool bUpdateInEditor : 1;  // 0x4BB(0x1)
	char pad_1212_1 : 7;  // 0x4BC(0x1)
	bool bDrawBones : 1;  // 0x4BC(0x1)
	char pad_1213_1 : 7;  // 0x4BD(0x1)
	bool bShowDebugDrawing : 1;  // 0x4BD(0x1)
	char pad_1214[2];  // 0x4BE(0x2)
	struct UControlRig* ControlRig;  // 0x4C0(0x8)
	char pad_1224[104];  // 0x4C8(0x68)

	void Update(float DeltaTime); // Function ControlRig.ControlRigComponent.Update
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.SetMappedElements
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, uint8_t  Space); // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, uint8_t  Space, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetInitialBoneTransform
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // Function ControlRig.ControlRigComponent.SetControlVector2D
	void SetControlTransform(struct FName ControlName, struct FTransform Value, uint8_t  Space); // Function ControlRig.ControlRigComponent.SetControlTransform
	void SetControlScale(struct FName ControlName, struct FVector Value, uint8_t  Space); // Function ControlRig.ControlRigComponent.SetControlScale
	void SetControlRotator(struct FName ControlName, struct FRotator Value, uint8_t  Space); // Function ControlRig.ControlRigComponent.SetControlRotator
	void SetControlPosition(struct FName ControlName, struct FVector Value, uint8_t  Space); // Function ControlRig.ControlRigComponent.SetControlPosition
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, uint8_t  Space); // Function ControlRig.ControlRigComponent.SetControlOffset
	void SetControlInt(struct FName ControlName, int32_t Value); // Function ControlRig.ControlRigComponent.SetControlInt
	void SetControlFloat(struct FName ControlName, float Value); // Function ControlRig.ControlRigComponent.SetControlFloat
	void SetControlBool(struct FName ControlName, bool Value); // Function ControlRig.ControlRigComponent.SetControlBool
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, uint8_t  Space, float Weight, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetBoneTransform
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	void OnPreUpdate(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreUpdate
	void OnPreSetup(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreSetup
	void OnPostUpdate(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostUpdate
	void OnPostSetup(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostSetup
	void OnPostInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostInitialize
	void Initialize(); // Function ControlRig.ControlRigComponent.Initialize
	struct FTransform GetSpaceTransform(struct FName SpaceName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetSpaceTransform
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
	struct FTransform GetInitialBoneTransform(struct FName BoneName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetInitialBoneTransform
	struct TArray<struct FName> GetElementNames(uint8_t  ElementType); // Function ControlRig.ControlRigComponent.GetElementNames
	struct FVector2D GetControlVector2D(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlVector2D
	struct FTransform GetControlTransform(struct FName ControlName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetControlTransform
	struct FVector GetControlScale(struct FName ControlName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetControlScale
	struct FRotator GetControlRotator(struct FName ControlName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetControlRotator
	struct UControlRig* GetControlRig(); // Function ControlRig.ControlRigComponent.GetControlRig
	struct FVector GetControlPosition(struct FName ControlName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetControlPosition
	struct FTransform GetControlOffset(struct FName ControlName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetControlOffset
	int32_t GetControlInt(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlInt
	float GetControlFloat(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlFloat
	bool GetControlBool(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlBool
	struct FTransform GetBoneTransform(struct FName BoneName, uint8_t  Space); // Function ControlRig.ControlRigComponent.GetBoneTransform
	float GetAbsoluteTime(); // Function ControlRig.ControlRigComponent.GetAbsoluteTime
	bool DoesElementExist(struct FName Name, uint8_t  ElementType); // Function ControlRig.ControlRigComponent.DoesElementExist
	void ClearMappedElements(); // Function ControlRig.ControlRigComponent.ClearMappedElements
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.AddMappedElements
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // Function ControlRig.ControlRigComponent.AddMappedComponents
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
}; 



// Class ControlRig.ControlRigControlActor
// Size: 0x2B8(Inherited: 0x220) 
struct AControlRigControlActor : public AActor
{
	struct AActor* ActorToTrack;  // 0x220(0x8)
	UControlRig* ControlRigClass;  // 0x228(0x8)
	char pad_560_1 : 7;  // 0x230(0x1)
	bool bRefreshOnTick : 1;  // 0x230(0x1)
	char pad_561_1 : 7;  // 0x231(0x1)
	bool bIsSelectable : 1;  // 0x231(0x1)
	char pad_562[6];  // 0x232(0x6)
	struct UMaterialInterface* MaterialOverride;  // 0x238(0x8)
	struct FString ColorParameter;  // 0x240(0x10)
	char pad_592_1 : 7;  // 0x250(0x1)
	bool bCastShadows : 1;  // 0x250(0x1)
	char pad_593[7];  // 0x251(0x7)
	struct USceneComponent* ActorRootComponent;  // 0x258(0x8)
	struct UControlRig* ControlRig;  // 0x260(0x8)
	struct TArray<struct FName> ControlNames;  // 0x268(0x10)
	struct TArray<struct FTransform> GizmoTransforms;  // 0x278(0x10)
	struct TArray<struct UStaticMeshComponent*> Components;  // 0x288(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Materials;  // 0x298(0x10)
	struct FName ColorParameterName;  // 0x2A8(0x8)
	char pad_688[8];  // 0x2B0(0x8)

	void Refresh(); // Function ControlRig.ControlRigControlActor.Refresh
	void Clear(); // Function ControlRig.ControlRigControlActor.Clear
}; 



// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x2E8(Inherited: 0x148) 
struct UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
	struct UControlRig* ControlRig;  // 0x148(0x8)
	UControlRig* ControlRigClass;  // 0x150(0x8)
	struct TArray<bool> ControlsMask;  // 0x158(0x10)
	struct FMovieSceneTransformMask TransformMask;  // 0x168(0x4)
	char pad_364[4];  // 0x16C(0x4)
	struct FMovieSceneFloatChannel Weight;  // 0x170(0xA0)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap;  // 0x210(0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;  // 0x260(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;  // 0x270(0x10)
	char pad_640[104];  // 0x280(0x68)

}; 



// Class ControlRig.ControlRigGizmoActor
// Size: 0x248(Inherited: 0x220) 
struct AControlRigGizmoActor : public AActor
{
	struct USceneComponent* ActorRootComponent;  // 0x220(0x8)
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x228(0x8)
	uint32_t ControlRigIndex;  // 0x230(0x4)
	struct FName ControlName;  // 0x234(0x8)
	struct FName ColorParameterName;  // 0x23C(0x8)
	char bEnabled : 1;  // 0x244(0x1)
	char bSelected : 1;  // 0x244(0x1)
	char bSelectable : 1;  // 0x244(0x1)
	char bHovered : 1;  // 0x244(0x1)
	char pad_580_1 : 4;  // 0x244(0x1)
	char pad_581[4];  // 0x245(0x4)

	void SetSelected(bool bInSelected); // Function ControlRig.ControlRigGizmoActor.SetSelected
	void SetSelectable(bool bInSelectable); // Function ControlRig.ControlRigGizmoActor.SetSelectable
	void SetHovered(bool bInHovered); // Function ControlRig.ControlRigGizmoActor.SetHovered
	void SetGlobalTransform(struct FTransform& InTransform); // Function ControlRig.ControlRigGizmoActor.SetGlobalTransform
	void SetEnabled(bool bInEnabled); // Function ControlRig.ControlRigGizmoActor.SetEnabled
	void OnTransformChanged(struct FTransform& NewTransform); // Function ControlRig.ControlRigGizmoActor.OnTransformChanged
	void OnSelectionChanged(bool bIsSelected); // Function ControlRig.ControlRigGizmoActor.OnSelectionChanged
	void OnManipulatingChanged(bool bIsManipulating); // Function ControlRig.ControlRigGizmoActor.OnManipulatingChanged
	void OnHoveredChanged(bool bIsSelected); // Function ControlRig.ControlRigGizmoActor.OnHoveredChanged
	void OnEnabledChanged(bool bIsEnabled); // Function ControlRig.ControlRigGizmoActor.OnEnabledChanged
	bool IsSelectedInEditor(); // Function ControlRig.ControlRigGizmoActor.IsSelectedInEditor
	bool IsHovered(); // Function ControlRig.ControlRigGizmoActor.IsHovered
	bool IsEnabled(); // Function ControlRig.ControlRigGizmoActor.IsEnabled
	struct FTransform GetGlobalTransform(); // Function ControlRig.ControlRigGizmoActor.GetGlobalTransform
}; 



// Class ControlRig.ControlRigLayerInstance
// Size: 0x2C0(Inherited: 0x2C0) 
struct UControlRigLayerInstance : public UAnimInstance
{

}; 



// Class ControlRig.ControlRigValidationPass
// Size: 0x28(Inherited: 0x28) 
struct UControlRigValidationPass : public UObject
{

}; 



// Class ControlRig.ControlRigNumericalValidationPass
// Size: 0x60(Inherited: 0x28) 
struct UControlRigNumericalValidationPass : public UControlRigValidationPass
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bCheckControls : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bCheckBones : 1;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool bCheckCurves : 1;  // 0x2A(0x1)
	char pad_43[1];  // 0x2B(0x1)
	float TranslationPrecision;  // 0x2C(0x4)
	float RotationPrecision;  // 0x30(0x4)
	float ScalePrecision;  // 0x34(0x4)
	float CurvePrecision;  // 0x38(0x4)
	struct FName EventNameA;  // 0x3C(0x8)
	struct FName EventNameB;  // 0x44(0x8)
	char pad_76[4];  // 0x4C(0x4)
	struct FRigPose Pose;  // 0x50(0x10)

}; 



// Class ControlRig.ControlRigObjectHolder
// Size: 0x38(Inherited: 0x28) 
struct UControlRigObjectHolder : public UObject
{
	struct TArray<struct UObject*> Objects;  // 0x28(0x10)

}; 



// Class ControlRig.ControlRigSequencerAnimInstance
// Size: 0x2D0(Inherited: 0x2C0) 
struct UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
	char pad_704[16];  // 0x2C0(0x10)

}; 



// Class ControlRig.FKControlRig
// Size: 0x668(Inherited: 0x650) 
struct UFKControlRig : public UControlRig
{
	struct TArray<bool> IsControlActive;  // 0x650(0x10)
	uint8_t  ApplyMode;  // 0x660(0x1)
	char pad_1633[7];  // 0x661(0x7)

}; 



// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0xC8(Inherited: 0x90) 
struct UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
	char pad_144[16];  // 0x90(0x10)
	struct UControlRig* ControlRig;  // 0xA0(0x8)
	struct UMovieSceneSection* SectionToKey;  // 0xA8(0x8)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0xB0(0x10)
	struct FName TrackName;  // 0xC0(0x8)

}; 



