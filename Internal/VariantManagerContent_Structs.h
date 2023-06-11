#pragma once 
#include "SDK.h" 
 
 
// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// Size: 0x18(Inherited: 0x0) 
struct FGetVariantSetByName
{
	struct FString VariantSetName;  // 0x0(0x10)
	struct UVariantSet* ReturnValue;  // 0x10(0x8)

}; 
// ScriptStruct VariantManagerContent.FunctionCaller
// Size: 0x8(Inherited: 0x0) 
struct FFunctionCaller
{
	struct FName FunctionName;  // 0x0(0x8)

}; 
// Function VariantManagerContent.SwitchActor.GetOptions
// Size: 0x10(Inherited: 0x0) 
struct FGetOptions
{
	struct TArray<struct AActor*> ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct VariantManagerContent.VariantDependency
// Size: 0x58(Inherited: 0x0) 
struct FVariantDependency
{
	struct TSoftObjectPtr<UVariantSet> VariantSet;  // 0x0(0x28)
	struct TSoftObjectPtr<UVariant> Variant;  // 0x28(0x28)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bEnabled : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)

}; 
// ScriptStruct VariantManagerContent.CapturedPropSegment
// Size: 0x28(Inherited: 0x0) 
struct FCapturedPropSegment
{
	struct FString PropertyName;  // 0x0(0x10)
	int32_t PropertyIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct FString ComponentName;  // 0x18(0x10)

}; 
// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// Size: 0x4(Inherited: 0x0) 
struct FGetNumVariantSets
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// Size: 0x10(Inherited: 0x0) 
struct FGetVariantSet
{
	int32_t VariantSetIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UVariantSet* ReturnValue;  // 0x8(0x8)

}; 
// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// Size: 0x10(Inherited: 0x0) 
struct FGetLevelVariantSets
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bLoad : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct ULevelVariantSets* ReturnValue;  // 0x8(0x8)

}; 
// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// Size: 0x18(Inherited: 0x0) 
struct FGetPropertyTooltip
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// Size: 0x8(Inherited: 0x0) 
struct FSetLevelVariantSets
{
	struct ULevelVariantSets* InVariantSets;  // 0x0(0x8)

}; 
// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// Size: 0xC(Inherited: 0x0) 
struct FSwitchOnVariantByIndex
{
	int32_t VariantSetIndex;  // 0x0(0x4)
	int32_t VariantIndex;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// Size: 0x28(Inherited: 0x0) 
struct FSwitchOnVariantByName
{
	struct FString VariantSetName;  // 0x0(0x10)
	struct FString VariantName;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// Size: 0x10(Inherited: 0x0) 
struct FGetFullDisplayString
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function VariantManagerContent.Variant.GetNumActors
// Size: 0x4(Inherited: 0x0) 
struct FGetNumActors
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function VariantManagerContent.PropertyValue.HasRecordedData
// Size: 0x1(Inherited: 0x0) 
struct FHasRecordedData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VariantManagerContent.SwitchActor.GetSelectedOption
// Size: 0x4(Inherited: 0x0) 
struct FGetSelectedOption
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function VariantManagerContent.SwitchActor.SelectOption
// Size: 0x4(Inherited: 0x0) 
struct FSelectOption
{
	int32_t OptionIndex;  // 0x0(0x4)

}; 
// Function VariantManagerContent.Variant.AddDependency
// Size: 0x60(Inherited: 0x0) 
struct FAddDependency
{
	struct FVariantDependency Dependency;  // 0x0(0x58)
	int32_t ReturnValue;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 
// Function VariantManagerContent.Variant.DeleteDependency
// Size: 0x4(Inherited: 0x0) 
struct FDeleteDependency
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function VariantManagerContent.VariantSet.SetDisplayText
// Size: 0x18(Inherited: 0x0) 
struct FSetDisplayText
{
	struct FText NewDisplayText;  // 0x0(0x18)

}; 
// Function VariantManagerContent.Variant.GetActor
// Size: 0x10(Inherited: 0x0) 
struct FGetActor
{
	int32_t ActorIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct AActor* ReturnValue;  // 0x8(0x8)

}; 
// Function VariantManagerContent.Variant.GetDependency
// Size: 0x60(Inherited: 0x0) 
struct FGetDependency
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FVariantDependency ReturnValue;  // 0x8(0x58)

}; 
// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
// Size: 0x10(Inherited: 0x0) 
struct FSetThumbnailFromFile
{
	struct FString FilePath;  // 0x0(0x10)

}; 
// Function VariantManagerContent.Variant.GetDependents
// Size: 0x20(Inherited: 0x0) 
struct FGetDependents
{
	struct ULevelVariantSets* LevelVariantSets;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bOnlyEnabledDependencies : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct TArray<struct UVariant*> ReturnValue;  // 0x10(0x10)

}; 
// Function VariantManagerContent.VariantSet.GetVariant
// Size: 0x10(Inherited: 0x0) 
struct FGetVariant
{
	int32_t VariantIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UVariant* ReturnValue;  // 0x8(0x8)

}; 
// Function VariantManagerContent.VariantSet.GetDisplayText
// Size: 0x18(Inherited: 0x0) 
struct FGetDisplayText
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function VariantManagerContent.Variant.GetNumDependencies
// Size: 0x4(Inherited: 0x0) 
struct FGetNumDependencies
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function VariantManagerContent.VariantSet.GetParent
// Size: 0x8(Inherited: 0x0) 
struct FGetParent
{
	struct ULevelVariantSets* ReturnValue;  // 0x0(0x8)

}; 
// Function VariantManagerContent.VariantSet.GetThumbnail
// Size: 0x8(Inherited: 0x0) 
struct FGetThumbnail
{
	struct UTexture2D* ReturnValue;  // 0x0(0x8)

}; 
// Function VariantManagerContent.Variant.IsActive
// Size: 0x1(Inherited: 0x0) 
struct FIsActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function VariantManagerContent.Variant.SetDependency
// Size: 0x60(Inherited: 0x0) 
struct FSetDependency
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FVariantDependency Dependency;  // 0x8(0x58)

}; 
// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
// Size: 0x50(Inherited: 0x0) 
struct FSetThumbnailFromCamera
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform CameraTransform;  // 0x10(0x30)
	float FOVDegrees;  // 0x40(0x4)
	float MinZ;  // 0x44(0x4)
	float Gamma;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 
// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
// Size: 0x8(Inherited: 0x0) 
struct FSetThumbnailFromTexture
{
	struct UTexture2D* NewThumbnail;  // 0x0(0x8)

}; 
// Function VariantManagerContent.VariantSet.GetNumVariants
// Size: 0x4(Inherited: 0x0) 
struct FGetNumVariants
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function VariantManagerContent.VariantSet.GetVariantByName
// Size: 0x18(Inherited: 0x0) 
struct FGetVariantByName
{
	struct FString VariantName;  // 0x0(0x10)
	struct UVariant* ReturnValue;  // 0x10(0x8)

}; 
