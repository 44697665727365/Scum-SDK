#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// Size: 0x78(Inherited: 0x0) 
struct FNodeHierarchyWithUserData
{
	char pad_0[8];  // 0x0(0x8)
	struct FNodeHierarchyData Hierarchy;  // 0x8(0x70)

}; 
// ScriptStruct AnimationCore.FilterOptionPerAxis
// Size: 0x3(Inherited: 0x0) 
struct FFilterOptionPerAxis
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bX : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bY : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bZ : 1;  // 0x2(0x1)

}; 
// ScriptStruct AnimationCore.TransformConstraint
// Size: 0x28(Inherited: 0x0) 
struct FTransformConstraint
{
	struct FConstraintDescription Operator;  // 0x0(0xD)
	char pad_13[3];  // 0xD(0x3)
	struct FName SourceNode;  // 0x10(0x8)
	struct FName TargetNode;  // 0x18(0x8)
	float Weight;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bMaintainOffset : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// ScriptStruct AnimationCore.NodeHierarchyData
// Size: 0x70(Inherited: 0x0) 
struct FNodeHierarchyData
{
	struct TArray<struct FNodeObject> Nodes;  // 0x0(0x10)
	struct TArray<struct FTransform> Transforms;  // 0x10(0x10)
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping;  // 0x20(0x50)

}; 
// ScriptStruct AnimationCore.ConstraintData
// Size: 0x80(Inherited: 0x0) 
struct FConstraintData
{
	struct FConstraintDescriptor Constraint;  // 0x0(0x10)
	float Weight;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bMaintainOffset : 1;  // 0x14(0x1)
	char pad_21[11];  // 0x15(0xB)
	struct FTransform Offset;  // 0x20(0x30)
	struct FTransform CurrentTransform;  // 0x50(0x30)

}; 
// ScriptStruct AnimationCore.NodeObject
// Size: 0x10(Inherited: 0x0) 
struct FNodeObject
{
	struct FName Name;  // 0x0(0x8)
	struct FName ParentName;  // 0x8(0x8)

}; 
// ScriptStruct AnimationCore.ConstraintDescription
// Size: 0xD(Inherited: 0x0) 
struct FConstraintDescription
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bTranslation : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bRotation : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bScale : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool bParent : 1;  // 0x3(0x1)
	struct FFilterOptionPerAxis TranslationAxes;  // 0x4(0x3)
	struct FFilterOptionPerAxis RotationAxes;  // 0x7(0x3)
	struct FFilterOptionPerAxis ScaleAxes;  // 0xA(0x3)

}; 
// ScriptStruct AnimationCore.ConstraintOffset
// Size: 0x60(Inherited: 0x0) 
struct FConstraintOffset
{
	struct FVector Translation;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FQuat Rotation;  // 0x10(0x10)
	struct FVector Scale;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	struct FTransform Parent;  // 0x30(0x30)

}; 
// ScriptStruct AnimationCore.ConstraintDescriptor
// Size: 0x10(Inherited: 0x0) 
struct FConstraintDescriptor
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[15];  // 0x1(0xF)

}; 
// ScriptStruct AnimationCore.TransformFilter
// Size: 0x9(Inherited: 0x0) 
struct FTransformFilter
{
	struct FFilterOptionPerAxis TranslationFilter;  // 0x0(0x3)
	struct FFilterOptionPerAxis RotationFilter;  // 0x3(0x3)
	struct FFilterOptionPerAxis ScaleFilter;  // 0x6(0x3)

}; 
// ScriptStruct AnimationCore.CCDIKChainLink
// Size: 0x80(Inherited: 0x0) 
struct FCCDIKChainLink
{
	char pad_0[128];  // 0x0(0x80)

}; 
// ScriptStruct AnimationCore.EulerTransform
// Size: 0x24(Inherited: 0x0) 
struct FEulerTransform
{
	struct FVector Location;  // 0x0(0xC)
	struct FRotator Rotation;  // 0xC(0xC)
	struct FVector Scale;  // 0x18(0xC)

}; 
// ScriptStruct AnimationCore.FABRIKChainLink
// Size: 0x38(Inherited: 0x0) 
struct FFABRIKChainLink
{
	char pad_0[56];  // 0x0(0x38)

}; 
// ScriptStruct AnimationCore.Axis
// Size: 0x10(Inherited: 0x0) 
struct FAxis
{
	struct FVector Axis;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bInLocalSpace : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size: 0x10(Inherited: 0x0) 
struct FConstraintDescriptionEx
{
	char pad_0[8];  // 0x0(0x8)
	struct FFilterOptionPerAxis AxesFilterOption;  // 0x8(0x3)
	char pad_11[5];  // 0xB(0x5)

}; 
// ScriptStruct AnimationCore.AimConstraintDescription
// Size: 0x40(Inherited: 0x10) 
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
	struct FAxis LookAt_Axis;  // 0x10(0x10)
	struct FAxis LookUp_Axis;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bUseLookUp : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	struct FVector LookUpTarget;  // 0x34(0xC)

}; 
// ScriptStruct AnimationCore.TransformConstraintDescription
// Size: 0x18(Inherited: 0x10) 
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
	uint8_t  TransformType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct AnimationCore.NodeChain
// Size: 0x10(Inherited: 0x0) 
struct FNodeChain
{
	struct TArray<struct FName> Nodes;  // 0x0(0x10)

}; 
// ScriptStruct AnimationCore.TransformNoScale
// Size: 0x20(Inherited: 0x0) 
struct FTransformNoScale
{
	struct FVector Location;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FQuat Rotation;  // 0x10(0x10)

}; 
