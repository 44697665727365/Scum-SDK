#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction ControlRig.ControlRigComponentDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FControlRigComponentDelegate__DelegateSignature
{
	struct UControlRigComponent* Component;  // 0x0(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
// Size: 0xF0(Inherited: 0x68) 
struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
	struct FName Bone;  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	struct FTransform Result;  // 0xA0(0x30)
	uint8_t  Space;  // 0xD0(0x1)
	char pad_209_1 : 7;  // 0xD1(0x1)
	bool bPropagateToChildren : 1;  // 0xD1(0x1)
	char pad_210[2];  // 0xD2(0x2)
	struct FCachedRigElement CachedBone;  // 0xD4(0x14)
	char pad_232[8];  // 0xE8(0x8)

}; 
// ScriptStruct ControlRig.ControlRigIOSettings
// Size: 0x2(Inherited: 0x0) 
struct FControlRigIOSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUpdatePose : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bUpdateCurves : 1;  // 0x1(0x1)

}; 
// ScriptStruct ControlRig.RigElementKeyCollection
// Size: 0x10(Inherited: 0x0) 
struct FRigElementKeyCollection
{
	char pad_0[16];  // 0x0(0x10)

}; 
// Function ControlRig.ControlRigComponent.GetControlFloat
// Size: 0xC(Inherited: 0x0) 
struct FGetControlFloat
{
	struct FName ControlName;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)

}; 
// ScriptStruct ControlRig.ControlRigValidationContext
// Size: 0x28(Inherited: 0x0) 
struct FControlRigValidationContext
{
	char pad_0[40];  // 0x0(0x28)

}; 
// ScriptStruct ControlRig.RigUnit_SetControlTransform
// Size: 0xD0(Inherited: 0x68) 
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	float Weight;  // 0x70(0x4)
	char pad_116[12];  // 0x74(0xC)
	struct FTransform Transform;  // 0x80(0x30)
	uint8_t  Space;  // 0xB0(0x1)
	char pad_177[3];  // 0xB1(0x3)
	struct FCachedRigElement CachedControlIndex;  // 0xB4(0x14)
	char pad_200[8];  // 0xC8(0x8)

}; 
// Function ControlRig.ControlRigGizmoActor.SetHovered
// Size: 0x1(Inherited: 0x0) 
struct FSetHovered
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInHovered : 1;  // 0x0(0x1)

}; 
// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
// Size: 0x178(Inherited: 0x170) 
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
	struct TWeakObjectPtr<UControlRig> ControlRig;  // 0x170(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
// Size: 0x40(Inherited: 0x40) 
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{

}; 
// ScriptStruct ControlRig.AnimNode_ControlRigBase
// Size: 0x170(Inherited: 0x58) 
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
	struct FPoseLink Source;  // 0x58(0x10)
	struct TMap<struct FName, uint16_t> ControlRigBoneMapping;  // 0x68(0x50)
	struct TMap<struct FName, uint16_t> ControlRigCurveMapping;  // 0xB8(0x50)
	struct TMap<struct FName, uint16_t> InputToCurveMappingUIDs;  // 0x108(0x50)
	struct TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer;  // 0x158(0x8)
	struct FControlRigIOSettings InputSettings;  // 0x160(0x2)
	struct FControlRigIOSettings OutputSettings;  // 0x162(0x2)
	char pad_356_1 : 7;  // 0x164(0x1)
	bool bExecute : 1;  // 0x164(0x1)
	char pad_357[11];  // 0x165(0xB)

}; 
// ScriptStruct ControlRig.RigBone
// Size: 0xE0(Inherited: 0x18) 
struct FRigBone : public FRigElement
{
	struct FName ParentName;  // 0x18(0x8)
	int32_t ParentIndex;  // 0x20(0x4)
	char pad_36[12];  // 0x24(0xC)
	struct FTransform InitialTransform;  // 0x30(0x30)
	struct FTransform GlobalTransform;  // 0x60(0x30)
	struct FTransform LocalTransform;  // 0x90(0x30)
	struct TArray<int32_t> Dependents;  // 0xC0(0x10)
	uint8_t  Type;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Input;  // 0x10(0x10)
	struct FVector TwistAxis;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	struct FQuat Swing;  // 0x30(0x10)
	struct FQuat Twist;  // 0x40(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier;  // 0x8(0x30)

}; 
// ScriptStruct ControlRig.CRSimContainer
// Size: 0x18(Inherited: 0x0) 
struct FCRSimContainer
{
	char pad_0[8];  // 0x0(0x8)
	float TimeStep;  // 0x8(0x4)
	float AccumulatedTime;  // 0xC(0x4)
	float TimeLeftForStep;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
// Size: 0xE0(Inherited: 0x8) 
struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Multiplier;  // 0x10(0x30)
	struct FTransform InitialValue;  // 0x40(0x30)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bFlipOrder : 1;  // 0x70(0x1)
	char pad_113_1 : 7;  // 0x71(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x71(0x1)
	char pad_114[14];  // 0x72(0xE)
	struct FTransform Result;  // 0x80(0x30)
	struct FTransform AccumulatedValue;  // 0xB0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Input;  // 0x10(0x10)
	struct FVector Result;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{

}; 
// ScriptStruct ControlRig.RigUnit
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit : public FRigVMStruct
{

}; 
// ScriptStruct ControlRig.RigUnit_GetCurveValue
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_GetCurveValue : public FRigUnit
{
	struct FName Curve;  // 0x8(0x8)
	float Value;  // 0x10(0x4)
	struct FCachedRigElement CachedCurveIndex;  // 0x14(0x14)

}; 
// ScriptStruct ControlRig.RigElement
// Size: 0x18(Inherited: 0x0) 
struct FRigElement
{
	char pad_0[8];  // 0x0(0x8)
	struct FName Name;  // 0x8(0x8)
	int32_t Index;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
{
	struct FVector Multiplier;  // 0x8(0xC)
	struct FVector InitialValue;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FVector Result;  // 0x24(0xC)
	struct FVector AccumulatedValue;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8(0x10)
	int32_t Index;  // 0x18(0x4)
	struct FRigElementKey Item;  // 0x1C(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_GetWorldTime
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
	float Year;  // 0x8(0x4)
	float Month;  // 0xC(0x4)
	float Day;  // 0x10(0x4)
	float WeekDay;  // 0x14(0x4)
	float Hours;  // 0x18(0x4)
	float Minutes;  // 0x1C(0x4)
	float Seconds;  // 0x20(0x4)
	float OverallSeconds;  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.AnimationHierarchy
// Size: 0x88(Inherited: 0x78) 
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
	struct TArray<struct FConstraintNodeData> UserData;  // 0x78(0x10)

}; 
// ScriptStruct ControlRig.ConstraintNodeData
// Size: 0xB0(Inherited: 0x0) 
struct FConstraintNodeData
{
	struct FTransform RelativeParent;  // 0x0(0x30)
	struct FConstraintOffset ConstraintOffset;  // 0x30(0x60)
	struct FName LinkedNode;  // 0x90(0x8)
	struct TArray<struct FTransformConstraint> Constraints;  // 0x98(0x10)
	char pad_168[8];  // 0xA8(0x8)

}; 
// ScriptStruct ControlRig.AnimNode_ControlRig
// Size: 0x368(Inherited: 0x170) 
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
	UControlRig* ControlRigClass;  // 0x170(0x8)
	struct UControlRig* ControlRig;  // 0x178(0x8)
	float Alpha;  // 0x180(0x4)
	uint8_t  AlphaInputType;  // 0x184(0x1)
	char bAlphaBoolEnabled : 1;  // 0x185(0x1)
	char bSetRefPoseFromSkeleton : 1;  // 0x185(0x1)
	char pad_389_1 : 6;  // 0x185(0x1)
	char pad_390[3];  // 0x186(0x3)
	struct FInputScaleBias AlphaScaleBias;  // 0x188(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x190(0x48)
	struct FName AlphaCurveName;  // 0x1D8(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x1E0(0x30)
	struct TMap<struct FName, struct FName> InputMapping;  // 0x210(0x50)
	struct TMap<struct FName, struct FName> OutputMapping;  // 0x260(0x50)
	char pad_688[176];  // 0x2B0(0xB0)
	int32_t LODThreshold;  // 0x360(0x4)
	char pad_868[4];  // 0x364(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
// Size: 0xD0(Inherited: 0x8) 
struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Input;  // 0x10(0x10)
	uint8_t  DistanceFunction;  // 0x20(0x1)
	uint8_t  SmoothingFunction;  // 0x21(0x1)
	char pad_34[2];  // 0x22(0x2)
	float SmoothingAngle;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bNormalizeOutput : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	struct FVector TwistAxis;  // 0x2C(0xC)
	char pad_56[8];  // 0x38(0x8)
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData;  // 0x40(0x90)

}; 
// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{

}; 
// ScriptStruct ControlRig.ControlRigComponentMappedCurve
// Size: 0x10(Inherited: 0x0) 
struct FControlRigComponentMappedCurve
{
	struct FName Source;  // 0x0(0x8)
	struct FName Target;  // 0x8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorLength
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	float Result;  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SetBoneRotation
// Size: 0xA0(Inherited: 0x68) 
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
	struct FName Bone;  // 0x68(0x8)
	struct FQuat Rotation;  // 0x70(0x10)
	uint8_t  Space;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	float Weight;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bPropagateToChildren : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	struct FCachedRigElement CachedBone;  // 0x8C(0x14)

}; 
// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
// Size: 0x810(Inherited: 0x770) 
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
	char pad_1904[160];  // 0x770(0xA0)

}; 
// ScriptStruct ControlRig.RigUnit_SimBaseMutable
// Size: 0x68(Inherited: 0x68) 
struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{

}; 
// ScriptStruct ControlRig.ControlRigComponentMappedBone
// Size: 0x10(Inherited: 0x0) 
struct FControlRigComponentMappedBone
{
	struct FName Source;  // 0x0(0x8)
	struct FName Target;  // 0x8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
	struct FRotator Rotator;  // 0x8(0xC)
	char pad_20[12];  // 0x14(0xC)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigInfluenceMapPerEvent
// Size: 0x60(Inherited: 0x0) 
struct FRigInfluenceMapPerEvent
{
	struct TArray<struct FRigInfluenceMap> Maps;  // 0x0(0x10)
	struct TMap<struct FName, int32_t> EventToIndex;  // 0x10(0x50)

}; 
// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetInitialSpaceTransform
{
	struct FName SpaceName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
// Size: 0xC(Inherited: 0x0) 
struct FRigUnit_SetMultiControlFloat_Entry
{
	struct FName Control;  // 0x0(0x8)
	float FloatValue;  // 0x8(0x4)

}; 
// ScriptStruct ControlRig.ControlRigComponentMappedComponent
// Size: 0x18(Inherited: 0x0) 
struct FControlRigComponentMappedComponent
{
	struct USceneComponent* Component;  // 0x0(0x8)
	struct FName ElementName;  // 0x8(0x8)
	uint8_t  ElementType;  // 0x10(0x1)
	uint8_t  Direction;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// ScriptStruct ControlRig.ControlRigComponentMappedElement
// Size: 0xA0(Inherited: 0x0) 
struct FControlRigComponentMappedElement
{
	struct FComponentReference ComponentReference;  // 0x0(0x28)
	int32_t TransformIndex;  // 0x28(0x4)
	struct FName TransformName;  // 0x2C(0x8)
	uint8_t  ElementType;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct FName ElementName;  // 0x38(0x8)
	uint8_t  Direction;  // 0x40(0x1)
	char pad_65[15];  // 0x41(0xF)
	struct FTransform Offset;  // 0x50(0x30)
	float Weight;  // 0x80(0x4)
	uint8_t  Space;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)
	struct USceneComponent* SceneComponent;  // 0x88(0x8)
	int32_t ElementIndex;  // 0x90(0x4)
	int32_t SubIndex;  // 0x94(0x4)
	char pad_152[8];  // 0x98(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorClamp
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	struct FVector Minimum;  // 0x14(0xC)
	struct FVector Maximum;  // 0x20(0xC)
	struct FVector Result;  // 0x2C(0xC)

}; 
// ScriptStruct ControlRig.RigSpace
// Size: 0x90(Inherited: 0x18) 
struct FRigSpace : public FRigElement
{
	uint8_t  SpaceType;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FName ParentName;  // 0x1C(0x8)
	int32_t ParentIndex;  // 0x24(0x4)
	char pad_40[8];  // 0x28(0x8)
	struct FTransform InitialTransform;  // 0x30(0x30)
	struct FTransform LocalTransform;  // 0x60(0x30)

}; 
// ScriptStruct ControlRig.ControlRigExecuteContext
// Size: 0x60(Inherited: 0x58) 
struct FControlRigExecuteContext : public FRigVMExecuteContext
{
	char pad_88[8];  // 0x58(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntEquals
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
{
	int32_t A;  // 0x8(0x4)
	int32_t B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigControlValueStorage
// Size: 0x44(Inherited: 0x0) 
struct FRigControlValueStorage
{
	float Float00;  // 0x0(0x4)
	float Float01;  // 0x4(0x4)
	float Float02;  // 0x8(0x4)
	float Float03;  // 0xC(0x4)
	float Float10;  // 0x10(0x4)
	float Float11;  // 0x14(0x4)
	float Float12;  // 0x18(0x4)
	float Float13;  // 0x1C(0x4)
	float Float20;  // 0x20(0x4)
	float Float21;  // 0x24(0x4)
	float Float22;  // 0x28(0x4)
	float Float23;  // 0x2C(0x4)
	float Float30;  // 0x30(0x4)
	float Float31;  // 0x34(0x4)
	float Float32;  // 0x38(0x4)
	float Float33;  // 0x3C(0x4)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bValid : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)

}; 
// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
// Size: 0x40(Inherited: 0x0) 
struct FRigHierarchyCopyPasteContent
{
	struct TArray<uint8_t > Types;  // 0x0(0x10)
	struct TArray<struct FString> Contents;  // 0x10(0x10)
	struct TArray<struct FTransform> LocalTransforms;  // 0x20(0x10)
	struct TArray<struct FTransform> GlobalTransforms;  // 0x30(0x10)

}; 
// ScriptStruct ControlRig.ControlRigDrawContainer
// Size: 0x18(Inherited: 0x0) 
struct FControlRigDrawContainer
{
	char pad_0[8];  // 0x0(0x8)
	struct TArray<struct FControlRigDrawInstruction> Instructions;  // 0x8(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
// Size: 0x90(Inherited: 0x0) 
struct FRigUnit_MathRBFInterpolateVectorWorkData
{
	char pad_0[144];  // 0x0(0x90)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
// Size: 0x80(Inherited: 0x8) 
struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	char EAxis Axis;  // 0x14(0x1)
	char EControlRigClampSpatialMode Type;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)
	float Minimum;  // 0x18(0x4)
	float Maximum;  // 0x1C(0x4)
	struct FTransform Space;  // 0x20(0x30)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bDrawDebug : 1;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	struct FLinearColor DebugColor;  // 0x54(0x10)
	float DebugThickness;  // 0x64(0x4)
	struct FVector Result;  // 0x68(0xC)
	char pad_116[12];  // 0x74(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_SlideChain
// Size: 0xC8(Inherited: 0x68) 
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x68(0x8)
	struct FName EndBone;  // 0x70(0x8)
	float SlideAmount;  // 0x78(0x4)
	char pad_124_1 : 7;  // 0x7C(0x1)
	bool bPropagateToChildren : 1;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	struct FRigUnit_SlideChain_WorkData WorkData;  // 0x80(0x48)

}; 
// ScriptStruct ControlRig.ControlRigDrawInstruction
// Size: 0xA0(Inherited: 0x0) 
struct FControlRigDrawInstruction
{
	struct FName Name;  // 0x0(0x8)
	char EControlRigDrawSettings PrimitiveType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct TArray<struct FVector> Positions;  // 0x10(0x10)
	struct FLinearColor Color;  // 0x20(0x10)
	float Thickness;  // 0x30(0x4)
	char pad_52[12];  // 0x34(0xC)
	struct FTransform Transform;  // 0x40(0x30)
	char pad_112[48];  // 0x70(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{

}; 
// ScriptStruct ControlRig.ControlRigDrawInterface
// Size: 0x18(Inherited: 0x18) 
struct FControlRigDrawInterface : public FControlRigDrawContainer
{

}; 
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
// Size: 0xC(Inherited: 0x0) 
struct FRigUnit_CCDIK_RotationLimit
{
	struct FName Bone;  // 0x0(0x8)
	float Limit;  // 0x8(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformLerp
// Size: 0xB0(Inherited: 0x8) 
struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform A;  // 0x10(0x30)
	struct FTransform B;  // 0x40(0x30)
	float T;  // 0x70(0x4)
	char pad_116[12];  // 0x74(0xC)
	struct FTransform Result;  // 0x80(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatLerp
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	float T;  // 0x10(0x4)
	float Result;  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.GizmoActorCreationParam
// Size: 0x120(Inherited: 0x0) 
struct FGizmoActorCreationParam
{
	char pad_0[288];  // 0x0(0x120)

}; 
// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
// Size: 0x50(Inherited: 0x0) 
struct FControlRigSettingsPerPinBool
{
	struct TMap<struct FString, bool> Values;  // 0x0(0x50)

}; 
// ScriptStruct ControlRig.RigUnit_DebugLineStrip
// Size: 0xE0(Inherited: 0x68) 
struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points;  // 0x68(0x10)
	struct FLinearColor Color;  // 0x78(0x10)
	float Thickness;  // 0x88(0x4)
	struct FName Space;  // 0x8C(0x8)
	char pad_148[12];  // 0x94(0xC)
	struct FTransform WorldOffset;  // 0xA0(0x30)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bEnabled : 1;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{
	struct FLinearColor A;  // 0x8(0x10)
	struct FLinearColor B;  // 0x18(0x10)
	struct FLinearColor Result;  // 0x28(0x10)

}; 
// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
// Size: 0x810(Inherited: 0x770) 
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
	char pad_1904[160];  // 0x770(0xA0)

}; 
// ScriptStruct ControlRig.ControlRigGizmoDefinition
// Size: 0x60(Inherited: 0x0) 
struct FControlRigGizmoDefinition
{
	struct FName GizmoName;  // 0x0(0x8)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh;  // 0x8(0x28)
	struct FTransform Transform;  // 0x30(0x30)

}; 
// ScriptStruct ControlRig.RigHierarchyRef
// Size: 0x1(Inherited: 0x0) 
struct FRigHierarchyRef
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
// Size: 0x30(Inherited: 0x10) 
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
	struct FPoseLink InputPose;  // 0x10(0x10)
	char pad_32[16];  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
// Size: 0x68(Inherited: 0x68) 
struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{

}; 
// ScriptStruct ControlRig.CachedRigElement
// Size: 0x14(Inherited: 0x0) 
struct FCachedRigElement
{
	struct FRigElementKey Key;  // 0x0(0xC)
	uint16_t Index;  // 0xC(0x2)
	char pad_14[2];  // 0xE(0x2)
	int32_t ContainerVersion;  // 0x10(0x4)

}; 
// ScriptStruct ControlRig.CRFourPointBezier
// Size: 0x30(Inherited: 0x0) 
struct FCRFourPointBezier
{
	struct FVector A;  // 0x0(0xC)
	struct FVector B;  // 0xC(0xC)
	struct FVector C;  // 0x18(0xC)
	struct FVector D;  // 0x24(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Value;  // 0x10(0x10)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
// Size: 0x110(Inherited: 0x68) 
struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
	char pad_104[8];  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	struct FLinearColor Color;  // 0xA0(0x10)
	float Scale;  // 0xB0(0x4)
	float Thickness;  // 0xB4(0x4)
	struct FRigElementKey Space;  // 0xB8(0xC)
	char pad_196[12];  // 0xC4(0xC)
	struct FTransform WorldOffset;  // 0xD0(0x30)
	char pad_256_1 : 7;  // 0x100(0x1)
	bool bEnabled : 1;  // 0x100(0x1)
	char pad_257[15];  // 0x101(0xF)

}; 
// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
// Size: 0x20(Inherited: 0x0) 
struct FControlRigSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds;  // 0x0(0x10)
	struct TArray<struct FControlRigSequenceObjectReferences> References;  // 0x10(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
	struct FVector Input;  // 0x8(0xC)
	struct FRotator Result;  // 0x14(0xC)

}; 
// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
// Size: 0x10(Inherited: 0x0) 
struct FControlRigSequenceObjectReferences
{
	struct TArray<struct FControlRigSequenceObjectReference> Array;  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.CRSimLinearSpring
// Size: 0x10(Inherited: 0x0) 
struct FCRSimLinearSpring
{
	int32_t SubjectA;  // 0x0(0x4)
	int32_t SubjectB;  // 0x4(0x4)
	float Coefficient;  // 0x8(0x4)
	float Equilibrium;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.ControlRigSequenceObjectReference
// Size: 0x8(Inherited: 0x0) 
struct FControlRigSequenceObjectReference
{
	UControlRig* ControlRigClass;  // 0x0(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetControlVector2D
// Size: 0x90(Inherited: 0x68) 
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	float Weight;  // 0x70(0x4)
	struct FVector2D Vector;  // 0x74(0x8)
	struct FCachedRigElement CachedControlIndex;  // 0x7C(0x14)

}; 
// Function ControlRig.ControlRig.SetInteractionRig
// Size: 0x8(Inherited: 0x0) 
struct FSetInteractionRig
{
	struct UControlRig* InInteractionRig;  // 0x0(0x8)

}; 
// ScriptStruct ControlRig.RigControl
// Size: 0x2F0(Inherited: 0x18) 
struct FRigControl : public FRigElement
{
	uint8_t  ControlType;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FName DisplayName;  // 0x1C(0x8)
	struct FName ParentName;  // 0x24(0x8)
	int32_t ParentIndex;  // 0x2C(0x4)
	struct FName SpaceName;  // 0x30(0x8)
	int32_t SpaceIndex;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	struct FTransform OffsetTransform;  // 0x40(0x30)
	struct FRigControlValue InitialValue;  // 0x70(0x80)
	struct FRigControlValue Value;  // 0xF0(0x80)
	uint8_t  PrimaryAxis;  // 0x170(0x1)
	char pad_369_1 : 7;  // 0x171(0x1)
	bool bIsCurve : 1;  // 0x171(0x1)
	char pad_370_1 : 7;  // 0x172(0x1)
	bool bAnimatable : 1;  // 0x172(0x1)
	char pad_371_1 : 7;  // 0x173(0x1)
	bool bLimitTranslation : 1;  // 0x173(0x1)
	char pad_372_1 : 7;  // 0x174(0x1)
	bool bLimitRotation : 1;  // 0x174(0x1)
	char pad_373_1 : 7;  // 0x175(0x1)
	bool bLimitScale : 1;  // 0x175(0x1)
	char pad_374_1 : 7;  // 0x176(0x1)
	bool bDrawLimits : 1;  // 0x176(0x1)
	char pad_375[9];  // 0x177(0x9)
	struct FRigControlValue MinimumValue;  // 0x180(0x80)
	struct FRigControlValue MaximumValue;  // 0x200(0x80)
	char pad_640_1 : 7;  // 0x280(0x1)
	bool bGizmoEnabled : 1;  // 0x280(0x1)
	char pad_641_1 : 7;  // 0x281(0x1)
	bool bGizmoVisible : 1;  // 0x281(0x1)
	char pad_642[2];  // 0x282(0x2)
	struct FName GizmoName;  // 0x284(0x8)
	char pad_652[4];  // 0x28C(0x4)
	struct FTransform GizmoTransform;  // 0x290(0x30)
	struct FLinearColor GizmoColor;  // 0x2C0(0x10)
	struct TArray<int32_t> Dependents;  // 0x2D0(0x10)
	char pad_736_1 : 7;  // 0x2E0(0x1)
	bool bIsTransientControl : 1;  // 0x2E0(0x1)
	char pad_737[7];  // 0x2E1(0x7)
	struct UEnum* ControlEnum;  // 0x2E8(0x8)

}; 
// ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
// Size: 0xCC0(Inherited: 0xA10) 
struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{
	char pad_2576[688];  // 0xA10(0x2B0)

}; 
// ScriptStruct ControlRig.RigCurveContainer
// Size: 0x98(Inherited: 0x0) 
struct FRigCurveContainer
{
	char pad_0[32];  // 0x0(0x20)
	struct TArray<struct FRigCurve> Curves;  // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping;  // 0x30(0x50)
	struct TArray<struct FName> Selection;  // 0x80(0x10)
	char pad_144[8];  // 0x90(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetTransform
// Size: 0xD0(Inherited: 0x68) 
struct FRigUnit_SetTransform : public FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	uint8_t  Space;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bInitial : 1;  // 0x75(0x1)
	char pad_118[10];  // 0x76(0xA)
	struct FTransform Transform;  // 0x80(0x30)
	float Weight;  // 0xB0(0x4)
	char pad_180_1 : 7;  // 0xB4(0x1)
	bool bPropagateToChildren : 1;  // 0xB4(0x1)
	char pad_181[3];  // 0xB5(0x3)
	struct FCachedRigElement CachedIndex;  // 0xB8(0x14)
	char pad_204[4];  // 0xCC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
// Size: 0xF0(Inherited: 0x68) 
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
	struct FRigElementKey Child;  // 0x68(0xC)
	struct FRigElementKey Parent;  // 0x74(0xC)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bParentInitial : 1;  // 0x80(0x1)
	char pad_129[15];  // 0x81(0xF)
	struct FTransform RelativeTransform;  // 0x90(0x30)
	float Weight;  // 0xC0(0x4)
	char pad_196_1 : 7;  // 0xC4(0x1)
	bool bPropagateToChildren : 1;  // 0xC4(0x1)
	char pad_197[3];  // 0xC5(0x3)
	struct FCachedRigElement CachedChild;  // 0xC8(0x14)
	struct FCachedRigElement CachedParent;  // 0xDC(0x14)

}; 
// ScriptStruct ControlRig.CRSimPoint
// Size: 0x28(Inherited: 0x0) 
struct FCRSimPoint
{
	float Mass;  // 0x0(0x4)
	float Size;  // 0x4(0x4)
	float LinearDamping;  // 0x8(0x4)
	float InheritMotion;  // 0xC(0x4)
	struct FVector position;  // 0x10(0xC)
	struct FVector LinearVelocity;  // 0x1C(0xC)

}; 
// ScriptStruct ControlRig.CRSimPointConstraint
// Size: 0x24(Inherited: 0x0) 
struct FCRSimPointConstraint
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t SubjectA;  // 0x4(0x4)
	int32_t SubjectB;  // 0x8(0x4)
	struct FVector DataA;  // 0xC(0xC)
	struct FVector DataB;  // 0x18(0xC)

}; 
// ScriptStruct ControlRig.RigPose
// Size: 0x10(Inherited: 0x0) 
struct FRigPose
{
	struct TArray<struct FRigPoseElement> Elements;  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.CRSimPointContainer
// Size: 0x78(Inherited: 0x18) 
struct FCRSimPointContainer : public FCRSimContainer
{
	struct TArray<struct FCRSimPoint> Points;  // 0x18(0x10)
	struct TArray<struct FCRSimLinearSpring> Springs;  // 0x28(0x10)
	struct TArray<struct FCRSimPointForce> Forces;  // 0x38(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes;  // 0x48(0x10)
	struct TArray<struct FCRSimPointConstraint> Constraints;  // 0x58(0x10)
	struct TArray<struct FCRSimPoint> PreviousStep;  // 0x68(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatPow
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorUnit
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.CRSimSoftCollision
// Size: 0x50(Inherited: 0x0) 
struct FCRSimSoftCollision
{
	struct FTransform Transform;  // 0x0(0x30)
	uint8_t  ShapeType;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float MinimumDistance;  // 0x34(0x4)
	float MaximumDistance;  // 0x38(0x4)
	uint8_t  FalloffType;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)
	float Coefficient;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bInverted : 1;  // 0x44(0x1)
	char pad_69[11];  // 0x45(0xB)

}; 
// ScriptStruct ControlRig.RigEventContext
// Size: 0x28(Inherited: 0x0) 
struct FRigEventContext
{
	char pad_0[40];  // 0x0(0x28)

}; 
// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
// Size: 0xD8(Inherited: 0x8) 
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bAdditive : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bApplyBoneFilter : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)
	struct FInputBlendPose BoneFilter;  // 0x10(0x10)
	struct FMovieSceneFloatChannel Weight;  // 0x20(0xA0)
	struct FMovieSceneEvaluationOperand Operand;  // 0xC0(0x14)
	char pad_212[4];  // 0xD4(0x4)

}; 
// ScriptStruct ControlRig.CRSimPointForce
// Size: 0x18(Inherited: 0x0) 
struct FCRSimPointForce
{
	uint8_t  ForceType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector Vector;  // 0x4(0xC)
	float Coefficient;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bNormalize : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatNegate
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigInfluenceMap
// Size: 0x68(Inherited: 0x0) 
struct FRigInfluenceMap
{
	struct FName EventName;  // 0x0(0x8)
	struct TArray<struct FRigInfluenceEntry> Entries;  // 0x8(0x10)
	struct TMap<struct FRigElementKey, int32_t> KeyToIndex;  // 0x18(0x50)

}; 
// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)
	uint8_t  Space;  // 0x10(0x1)
	char pad_17[15];  // 0x11(0xF)
	struct FTransform Transform;  // 0x20(0x30)
	struct FCachedRigElement CachedControlIndex;  // 0x50(0x14)
	char pad_100[12];  // 0x64(0xC)

}; 
// ScriptStruct ControlRig.RigElementKey
// Size: 0xC(Inherited: 0x0) 
struct FRigElementKey
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName Name;  // 0x4(0x8)

}; 
// ScriptStruct ControlRig.ChannelMapInfo
// Size: 0x18(Inherited: 0x0) 
struct FChannelMapInfo
{
	int32_t ControlIndex;  // 0x0(0x4)
	int32_t TotalChannelIndex;  // 0x4(0x4)
	int32_t ChannelIndex;  // 0x8(0x4)
	int32_t ParentControlIndex;  // 0xC(0x4)
	struct FName ChannelTypeName;  // 0x10(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_ChainHarmonics
// Size: 0x270(Inherited: 0x68) 
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
	struct FName ChainRoot;  // 0x68(0x8)
	struct FVector Speed;  // 0x70(0xC)
	struct FRigUnit_ChainHarmonics_Reach Reach;  // 0x7C(0x28)
	struct FRigUnit_ChainHarmonics_Wave Wave;  // 0xA4(0x40)
	char pad_228[4];  // 0xE4(0x4)
	struct FRuntimeFloatCurve WaveCurve;  // 0xE8(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum;  // 0x170(0x3C)
	char pad_428_1 : 7;  // 0x1AC(0x1)
	bool bDrawDebug : 1;  // 0x1AC(0x1)
	char pad_429[3];  // 0x1AD(0x3)
	struct FTransform DrawWorldOffset;  // 0x1B0(0x30)
	struct FRigUnit_ChainHarmonics_WorkData WorkData;  // 0x1E0(0x90)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	float Result;  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorCeil
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.IntegerParameterNameAndCurve
// Size: 0x98(Inherited: 0x0) 
struct FIntegerParameterNameAndCurve
{
	struct FName ParameterName;  // 0x0(0x8)
	struct FMovieSceneIntegerChannel ParameterCurve;  // 0x8(0x90)

}; 
// ScriptStruct ControlRig.RigUnit_DebugArc
// Size: 0x110(Inherited: 0x68) 
struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
	char pad_104[8];  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	struct FLinearColor Color;  // 0xA0(0x10)
	float Radius;  // 0xB0(0x4)
	float MinimumDegrees;  // 0xB4(0x4)
	float MaximumDegrees;  // 0xB8(0x4)
	float Thickness;  // 0xBC(0x4)
	int32_t Detail;  // 0xC0(0x4)
	struct FName Space;  // 0xC4(0x8)
	char pad_204[4];  // 0xCC(0x4)
	struct FTransform WorldOffset;  // 0xD0(0x30)
	char pad_256_1 : 7;  // 0x100(0x1)
	bool bEnabled : 1;  // 0x100(0x1)
	char pad_257[15];  // 0x101(0xF)

}; 
// ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
// Size: 0x40(Inherited: 0x0) 
struct FMathRBFInterpolateVectorXform_Target
{
	struct FVector Target;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FTransform Value;  // 0x10(0x30)

}; 
// ScriptStruct ControlRig.EnumParameterNameAndCurve
// Size: 0xA0(Inherited: 0x0) 
struct FEnumParameterNameAndCurve
{
	struct FName ParameterName;  // 0x0(0x8)
	struct FMovieSceneByteChannel ParameterCurve;  // 0x8(0x98)

}; 
// ScriptStruct ControlRig.RigUnit_PropagateTransform
// Size: 0x90(Inherited: 0x68) 
struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bRecomputeGlobal : 1;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bApplyToChildren : 1;  // 0x75(0x1)
	char pad_118_1 : 7;  // 0x76(0x1)
	bool bRecursive : 1;  // 0x76(0x1)
	char pad_119[1];  // 0x77(0x1)
	struct FCachedRigElement CachedIndex;  // 0x78(0x14)
	char pad_140[4];  // 0x8C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
	struct FRigElementKey Parent;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bIncludeParent : 1;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool bRecursive : 1;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)
	struct FRigElementKeyCollection Children;  // 0x18(0x10)
	struct FCachedRigElement CachedParent;  // 0x28(0x14)
	char pad_60[4];  // 0x3C(0x4)
	struct FRigElementKeyCollection CachedChildren;  // 0x40(0x10)

}; 
// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
// Size: 0xA0(Inherited: 0x80) 
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FEnumParameterNameAndCurve> Enums;  // 0x80(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> Integers;  // 0x90(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	float Tolerance;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
// Size: 0x14(Inherited: 0x0) 
struct FRigUnit_MultiFABRIK_EndEffector
{
	struct FName Bone;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)

}; 
// ScriptStruct ControlRig.RigBoneHierarchy
// Size: 0x98(Inherited: 0x0) 
struct FRigBoneHierarchy
{
	char pad_0[32];  // 0x0(0x20)
	struct TArray<struct FRigBone> Bones;  // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping;  // 0x30(0x50)
	struct TArray<struct FName> Selection;  // 0x80(0x10)
	char pad_144[8];  // 0x90(0x8)

}; 
// ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
// Size: 0x20(Inherited: 0x0) 
struct FMathRBFInterpolateVectorQuat_Target
{
	struct FVector Target;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FQuat Value;  // 0x10(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_Clamp_Float
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_Clamp_Float : public FRigUnit
{
	float Value;  // 0x8(0x4)
	float Min;  // 0xC(0x4)
	float Max;  // 0x10(0x4)
	float Result;  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigControlHierarchy
// Size: 0x108(Inherited: 0x0) 
struct FRigControlHierarchy
{
	char pad_0[152];  // 0x0(0x98)
	struct TArray<struct FRigControl> Controls;  // 0x98(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping;  // 0xA8(0x50)
	struct TArray<struct FName> Selection;  // 0xF8(0x10)

}; 
// ScriptStruct ControlRig.RigControlValue
// Size: 0x80(Inherited: 0x0) 
struct FRigControlValue
{
	struct FRigControlValueStorage FloatStorage;  // 0x0(0x44)
	char pad_68[12];  // 0x44(0xC)
	struct FTransform Storage;  // 0x50(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_DebugTransform
// Size: 0xB0(Inherited: 0x8) 
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	uint8_t  mode;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	struct FLinearColor Color;  // 0x44(0x10)
	float Thickness;  // 0x54(0x4)
	float Scale;  // 0x58(0x4)
	struct FName Space;  // 0x5C(0x8)
	char pad_100[12];  // 0x64(0xC)
	struct FTransform WorldOffset;  // 0x70(0x30)
	char pad_160_1 : 7;  // 0xA0(0x1)
	bool bEnabled : 1;  // 0xA0(0x1)
	char pad_161[15];  // 0xA1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_DebugLine
// Size: 0xE0(Inherited: 0x68) 
struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
	struct FVector A;  // 0x68(0xC)
	struct FVector B;  // 0x74(0xC)
	struct FLinearColor Color;  // 0x80(0x10)
	float Thickness;  // 0x90(0x4)
	struct FName Space;  // 0x94(0x8)
	char pad_156[4];  // 0x9C(0x4)
	struct FTransform WorldOffset;  // 0xA0(0x30)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bEnabled : 1;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// ScriptStruct ControlRig.RigMirrorSettings
// Size: 0x28(Inherited: 0x0) 
struct FRigMirrorSettings
{
	char EAxis MirrorAxis;  // 0x0(0x1)
	char EAxis AxisToFlip;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct FString OldName;  // 0x8(0x10)
	struct FString NewName;  // 0x18(0x10)

}; 
// ScriptStruct ControlRig.RigCurve
// Size: 0x20(Inherited: 0x18) 
struct FRigCurve : public FRigElement
{
	float Value;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigHierarchyContainer
// Size: 0x368(Inherited: 0x0) 
struct FRigHierarchyContainer
{
	struct FRigBoneHierarchy BoneHierarchy;  // 0x0(0x98)
	struct FRigSpaceHierarchy SpaceHierarchy;  // 0x98(0x90)
	struct FRigControlHierarchy ControlHierarchy;  // 0x128(0x108)
	struct FRigCurveContainer CurveContainer;  // 0x230(0x98)
	int32_t Version;  // 0x2C8(0x4)
	char pad_716[156];  // 0x2CC(0x9C)

}; 
// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
// Size: 0xA0(Inherited: 0x68) 
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
	struct FName Bone;  // 0x68(0x8)
	struct FVector Translation;  // 0x70(0xC)
	uint8_t  Space;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	float Weight;  // 0x80(0x4)
	char pad_132_1 : 7;  // 0x84(0x1)
	bool bPropagateToChildren : 1;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)
	struct FCachedRigElement CachedBone;  // 0x88(0x14)
	char pad_156[4];  // 0x9C(0x4)

}; 
// ScriptStruct ControlRig.RigSpaceHierarchy
// Size: 0x90(Inherited: 0x0) 
struct FRigSpaceHierarchy
{
	char pad_0[32];  // 0x0(0x20)
	struct TArray<struct FRigSpace> Spaces;  // 0x20(0x10)
	struct TMap<struct FName, int32_t> NameToIndexMapping;  // 0x30(0x50)
	struct TArray<struct FName> Selection;  // 0x80(0x10)

}; 
// ScriptStruct ControlRig.RigControlModifiedContext
// Size: 0x10(Inherited: 0x0) 
struct FRigControlModifiedContext
{
	char pad_0[16];  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.RigPoseElement
// Size: 0x90(Inherited: 0x0) 
struct FRigPoseElement
{
	struct FCachedRigElement Index;  // 0x0(0x14)
	char pad_20[12];  // 0x14(0xC)
	struct FTransform GlobalTransform;  // 0x20(0x30)
	struct FTransform LocalTransform;  // 0x50(0x30)
	float CurveValue;  // 0x80(0x4)
	char pad_132[12];  // 0x84(0xC)

}; 
// ScriptStruct ControlRig.RigInfluenceEntry
// Size: 0x20(Inherited: 0x0) 
struct FRigInfluenceEntry
{
	struct FRigElementKey Source;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FRigElementKey> AffectedList;  // 0x10(0x10)

}; 
// ScriptStruct ControlRig.RigInfluenceEntryModifier
// Size: 0x10(Inherited: 0x0) 
struct FRigInfluenceEntryModifier
{
	struct TArray<struct FRigElementKey> AffectedList;  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.RigUnitMutable
// Size: 0x68(Inherited: 0x8) 
struct FRigUnitMutable : public FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_SimBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_SimBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
// Size: 0x48(Inherited: 0x8) 
struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
{
	struct FVector Value;  // 0x8(0xC)
	struct FVector Minimum;  // 0x14(0xC)
	struct FVector Maximum;  // 0x20(0xC)
	struct FVector AccumulatedMinimum;  // 0x2C(0xC)
	struct FVector AccumulatedMaximum;  // 0x38(0xC)
	char pad_68[4];  // 0x44(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
// Size: 0xF0(Inherited: 0xD0) 
struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatVector_Target> Targets;  // 0xD0(0x10)
	struct FVector Output;  // 0xE0(0xC)
	char pad_236[4];  // 0xEC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorLerp
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	float T;  // 0x20(0x4)
	struct FVector Result;  // 0x24(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
{
	float Value;  // 0x8(0x4)
	float Minimum;  // 0xC(0x4)
	float Maximum;  // 0x10(0x4)
	float AccumulatedMinimum;  // 0x14(0x4)
	float AccumulatedMaximum;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
// Size: 0xE0(Inherited: 0x8) 
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform TargetValue;  // 0x10(0x30)
	struct FTransform InitialValue;  // 0x40(0x30)
	float Blend;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x74(0x1)
	char pad_117[11];  // 0x75(0xB)
	struct FTransform Result;  // 0x80(0x30)
	struct FTransform AccumulatedValue;  // 0xB0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat TargetValue;  // 0x10(0x10)
	struct FQuat InitialValue;  // 0x20(0x10)
	float Blend;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x34(0x1)
	char pad_53[11];  // 0x35(0xB)
	struct FQuat Result;  // 0x40(0x10)
	struct FQuat AccumulatedValue;  // 0x50(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
// Size: 0x10(Inherited: 0x0) 
struct FRigUnit_AimConstraint_WorkData
{
	struct TArray<struct FConstraintData> ConstraintData;  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
// Size: 0x3C(Inherited: 0x0) 
struct FRigUnit_ChainHarmonics_Pendulum
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float PendulumStiffness;  // 0x4(0x4)
	struct FVector PendulumGravity;  // 0x8(0xC)
	float PendulumBlend;  // 0x14(0x4)
	float PendulumDrag;  // 0x18(0x4)
	float PendulumMinimum;  // 0x1C(0x4)
	float PendulumMaximum;  // 0x20(0x4)
	uint8_t  PendulumEase;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	struct FVector UnwindAxis;  // 0x28(0xC)
	float UnwindMinimum;  // 0x34(0x4)
	float UnwindMaximum;  // 0x38(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{

}; 
// ScriptStruct ControlRig.RigUnit_CollectionBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_CollectionBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
{
	struct FVector TargetValue;  // 0x8(0xC)
	struct FVector InitialValue;  // 0x14(0xC)
	float Blend;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	struct FVector Result;  // 0x28(0xC)
	struct FVector AccumulatedValue;  // 0x34(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
{
	float TargetValue;  // 0x8(0x4)
	float InitialValue;  // 0xC(0x4)
	float Blend;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float Result;  // 0x18(0x4)
	float AccumulatedValue;  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	struct FEulerTransform Result;  // 0x40(0x24)
	char pad_100[12];  // 0x64(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Multiplier;  // 0x10(0x10)
	struct FQuat InitialValue;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bFlipOrder : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x31(0x1)
	char pad_50[14];  // 0x32(0xE)
	struct FQuat Result;  // 0x40(0x10)
	struct FQuat AccumulatedValue;  // 0x50(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
{
	float Multiplier;  // 0x8(0x4)
	float InitialValue;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float Result;  // 0x14(0x4)
	float AccumulatedValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	float Tolerance;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool Result : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
// Size: 0xF0(Inherited: 0x68) 
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
	struct TArray<struct FTransform> Transforms;  // 0x68(0x10)
	uint8_t  mode;  // 0x78(0x1)
	char pad_121[3];  // 0x79(0x3)
	struct FLinearColor Color;  // 0x7C(0x10)
	float Thickness;  // 0x8C(0x4)
	float Scale;  // 0x90(0x4)
	struct FName Space;  // 0x94(0x8)
	char pad_156[4];  // 0x9C(0x4)
	struct FTransform WorldOffset;  // 0xA0(0x30)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bEnabled : 1;  // 0xD0(0x1)
	char pad_209[7];  // 0xD1(0x7)
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData;  // 0xD8(0x10)
	char pad_232[8];  // 0xE8(0x8)

}; 
// Function ControlRig.ControlRigComponent.GetControlRig
// Size: 0x8(Inherited: 0x0) 
struct FGetControlRig
{
	struct UControlRig* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
{
	struct FVector Increment;  // 0x8(0xC)
	struct FVector InitialValue;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FVector Result;  // 0x24(0xC)
	struct FVector AccumulatedValue;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AimConstraint
// Size: 0xC0(Inherited: 0x68) 
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
	struct FName Joint;  // 0x68(0x8)
	uint8_t  AimMode;  // 0x70(0x1)
	uint8_t  UpMode;  // 0x71(0x1)
	char pad_114[2];  // 0x72(0x2)
	struct FVector AimVector;  // 0x74(0xC)
	struct FVector UpVector;  // 0x80(0xC)
	char pad_140[4];  // 0x8C(0x4)
	struct TArray<struct FAimTarget> AimTargets;  // 0x90(0x10)
	struct TArray<struct FAimTarget> UpTargets;  // 0xA0(0x10)
	struct FRigUnit_AimConstraint_WorkData WorkData;  // 0xB0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
{
	float Increment;  // 0x8(0x4)
	float InitialValue;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bIntegrateDeltaTime : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float Result;  // 0x14(0x4)
	float AccumulatedValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AddBoneTransform
// Size: 0xC0(Inherited: 0x68) 
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
	struct FName Bone;  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	float Weight;  // 0xA0(0x4)
	char pad_164_1 : 7;  // 0xA4(0x1)
	bool bPostMultiply : 1;  // 0xA4(0x1)
	char pad_165_1 : 7;  // 0xA5(0x1)
	bool bPropagateToChildren : 1;  // 0xA5(0x1)
	char pad_166[2];  // 0xA6(0x2)
	struct FCachedRigElement CachedBone;  // 0xA8(0x14)
	char pad_188[4];  // 0xBC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
// Size: 0x68(Inherited: 0x68) 
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{

}; 
// ScriptStruct ControlRig.RigUnit_SetTranslation
// Size: 0xA0(Inherited: 0x68) 
struct FRigUnit_SetTranslation : public FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	uint8_t  Space;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)
	struct FVector Translation;  // 0x78(0xC)
	float Weight;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bPropagateToChildren : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	struct FCachedRigElement CachedIndex;  // 0x8C(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_ConvertTransform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_ConvertTransform : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Input;  // 0x10(0x30)
	struct FEulerTransform Result;  // 0x40(0x24)
	char pad_100[12];  // 0x64(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatSin
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_AimItem
// Size: 0x150(Inherited: 0x68) 
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	struct FRigUnit_AimItem_Target primary;  // 0x74(0x2C)
	struct FRigUnit_AimItem_Target secondary;  // 0xA0(0x2C)
	float Weight;  // 0xCC(0x4)
	struct FRigUnit_AimBone_DebugSettings DebugSettings;  // 0xD0(0x40)
	struct FCachedRigElement CachedItem;  // 0x110(0x14)
	struct FCachedRigElement PrimaryCachedSpace;  // 0x124(0x14)
	struct FCachedRigElement SecondaryCachedSpace;  // 0x138(0x14)
	char pad_332[4];  // 0x14C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_GetBoneTransform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_GetBoneTransform : public FRigUnit
{
	struct FName Bone;  // 0x8(0x8)
	uint8_t  Space;  // 0x10(0x1)
	char pad_17[15];  // 0x11(0xF)
	struct FTransform Transform;  // 0x20(0x30)
	struct FCachedRigElement CachedBone;  // 0x50(0x14)
	char pad_100[12];  // 0x64(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
// Size: 0x40(Inherited: 0x0) 
struct FRigUnit_AimBone_DebugSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Scale;  // 0x4(0x4)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform WorldOffset;  // 0x10(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionIntersection
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A;  // 0x8(0x10)
	struct FRigElementKeyCollection B;  // 0x18(0x10)
	struct FRigElementKeyCollection Collection;  // 0x28(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntPow
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathIntToFloat
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{
	int32_t Value;  // 0x8(0x4)
	float Result;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AimItem_Target
// Size: 0x2C(Inherited: 0x0) 
struct FRigUnit_AimItem_Target
{
	float Weight;  // 0x0(0x4)
	struct FVector Axis;  // 0x4(0xC)
	struct FVector Target;  // 0x10(0xC)
	uint8_t  Kind;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FRigElementKey Space;  // 0x20(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_VisualDebugVector
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
	struct FVector Value;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bEnabled : 1;  // 0x14(0x1)
	uint8_t  mode;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)
	struct FLinearColor Color;  // 0x18(0x10)
	float Thickness;  // 0x28(0x4)
	float Scale;  // 0x2C(0x4)
	struct FName BoneSpace;  // 0x30(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_AimBone
// Size: 0x150(Inherited: 0x68) 
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
	struct FName Bone;  // 0x68(0x8)
	struct FRigUnit_AimBone_Target primary;  // 0x70(0x28)
	struct FRigUnit_AimBone_Target secondary;  // 0x98(0x28)
	float Weight;  // 0xC0(0x4)
	char pad_196_1 : 7;  // 0xC4(0x1)
	bool bPropagateToChildren : 1;  // 0xC4(0x1)
	char pad_197[11];  // 0xC5(0xB)
	struct FRigUnit_AimBone_DebugSettings DebugSettings;  // 0xD0(0x40)
	struct FCachedRigElement CachedBoneIndex;  // 0x110(0x14)
	struct FCachedRigElement PrimaryCachedSpace;  // 0x124(0x14)
	struct FCachedRigElement SecondaryCachedSpace;  // 0x138(0x14)
	char pad_332[4];  // 0x14C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionItems
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
	struct TArray<struct FRigElementKey> Items;  // 0x8(0x10)
	struct FRigElementKeyCollection Collection;  // 0x18(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_AimBone_Target
// Size: 0x28(Inherited: 0x0) 
struct FRigUnit_AimBone_Target
{
	float Weight;  // 0x0(0x4)
	struct FVector Axis;  // 0x4(0xC)
	struct FVector Target;  // 0x10(0xC)
	uint8_t  Kind;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FName Space;  // 0x20(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_HighlevelBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_HighlevelBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_AimBoneMath
// Size: 0x140(Inherited: 0x8) 
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform InputTransform;  // 0x10(0x30)
	struct FRigUnit_AimItem_Target primary;  // 0x40(0x2C)
	struct FRigUnit_AimItem_Target secondary;  // 0x6C(0x2C)
	float Weight;  // 0x98(0x4)
	char pad_156[4];  // 0x9C(0x4)
	struct FTransform Result;  // 0xA0(0x30)
	struct FRigUnit_AimBone_DebugSettings DebugSettings;  // 0xD0(0x40)
	struct FCachedRigElement PrimaryCachedSpace;  // 0x110(0x14)
	struct FCachedRigElement SecondaryCachedSpace;  // 0x124(0x14)
	char pad_312[8];  // 0x138(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_RandomFloat
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
	int32_t Seed;  // 0x8(0x4)
	float Minimum;  // 0xC(0x4)
	float Maximum;  // 0x10(0x4)
	float Duration;  // 0x14(0x4)
	float Result;  // 0x18(0x4)
	float LastResult;  // 0x1C(0x4)
	int32_t LastSeed;  // 0x20(0x4)
	float TimeLeft;  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_GetControlFloat
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_GetControlFloat : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)
	float FloatValue;  // 0x10(0x4)
	float Minimum;  // 0x14(0x4)
	float Maximum;  // 0x18(0x4)
	struct FCachedRigElement CachedControlIndex;  // 0x1C(0x14)

}; 
// ScriptStruct ControlRig.AimTarget
// Size: 0x50(Inherited: 0x0) 
struct FAimTarget
{
	float Weight;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FTransform Transform;  // 0x10(0x30)
	struct FVector AlignVector;  // 0x40(0xC)
	char pad_76[4];  // 0x4C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MultiFABRIK
// Size: 0xF0(Inherited: 0x68) 
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName RootBone;  // 0x68(0x8)
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors;  // 0x70(0x10)
	float Precision;  // 0x80(0x4)
	char pad_132_1 : 7;  // 0x84(0x1)
	bool bPropagateToChildren : 1;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)
	int32_t MaxIterations;  // 0x88(0x4)
	char pad_140[4];  // 0x8C(0x4)
	struct FRigUnit_MultiFABRIK_WorkData WorkData;  // 0x90(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_AlphaInterpVector
// Size: 0x88(Inherited: 0x8) 
struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
	struct FVector Value;  // 0x8(0xC)
	float Scale;  // 0x14(0x4)
	float Bias;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bMapRange : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FInputRange InRange;  // 0x20(0x8)
	struct FInputRange OutRange;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bClampResult : 1;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	float ClampMin;  // 0x34(0x4)
	float ClampMax;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool bInterpResult : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)
	float InterpSpeedIncreasing;  // 0x40(0x4)
	float InterpSpeedDecreasing;  // 0x44(0x4)
	struct FVector Result;  // 0x48(0xC)
	struct FInputScaleBiasClamp ScaleBiasClamp;  // 0x54(0x30)
	char pad_132[4];  // 0x84(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AlphaInterp
// Size: 0x78(Inherited: 0x8) 
struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
{
	float Value;  // 0x8(0x4)
	float Scale;  // 0xC(0x4)
	float Bias;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bMapRange : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FInputRange InRange;  // 0x18(0x8)
	struct FInputRange OutRange;  // 0x20(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bClampResult : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float ClampMin;  // 0x2C(0x4)
	float ClampMax;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bInterpResult : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	float InterpSpeedIncreasing;  // 0x38(0x4)
	float InterpSpeedDecreasing;  // 0x3C(0x4)
	float Result;  // 0x40(0x4)
	struct FInputScaleBiasClamp ScaleBiasClamp;  // 0x44(0x30)
	char pad_116[4];  // 0x74(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AnimBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_AnimBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_AnimEasing
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
	float Value;  // 0x8(0x4)
	uint8_t  Type;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	float SourceMinimum;  // 0x10(0x4)
	float SourceMaximum;  // 0x14(0x4)
	float TargetMinimum;  // 0x18(0x4)
	float TargetMaximum;  // 0x1C(0x4)
	float Result;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorMul
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_AnimEasingType
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
	uint8_t  Type;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
// Size: 0x50(Inherited: 0x0) 
struct FRigUnit_SpringIK_DebugSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Scale;  // 0x4(0x4)
	struct FLinearColor Color;  // 0x8(0x10)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform WorldOffset;  // 0x20(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
// Size: 0xB0(Inherited: 0x8) 
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
	float Value;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FRuntimeFloatCurve Curve;  // 0x10(0x88)
	float SourceMinimum;  // 0x98(0x4)
	float SourceMaximum;  // 0x9C(0x4)
	float TargetMinimum;  // 0xA0(0x4)
	float TargetMaximum;  // 0xA4(0x4)
	float Result;  // 0xA8(0x4)
	char pad_172[4];  // 0xAC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathColorLerp
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
	struct FLinearColor A;  // 0x8(0x10)
	struct FLinearColor B;  // 0x18(0x10)
	float T;  // 0x28(0x4)
	struct FLinearColor Result;  // 0x2C(0x10)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_AnimRichCurve
// Size: 0x90(Inherited: 0x8) 
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
	struct FRuntimeFloatCurve Curve;  // 0x8(0x88)

}; 
// ScriptStruct ControlRig.RigUnit_ApplyFK
// Size: 0xF0(Inherited: 0x68) 
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
	struct FName Joint;  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	struct FTransformFilter Filter;  // 0xA0(0x9)
	uint8_t  ApplyTransformMode;  // 0xA9(0x1)
	uint8_t  ApplyTransformSpace;  // 0xAA(0x1)
	char pad_171[5];  // 0xAB(0x5)
	struct FTransform BaseTransform;  // 0xB0(0x30)
	struct FName BaseJoint;  // 0xE0(0x8)
	char pad_232[8];  // 0xE8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_DebugHierarchy
// Size: 0xC0(Inherited: 0x68) 
struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
	float Scale;  // 0x68(0x4)
	struct FLinearColor Color;  // 0x6C(0x10)
	float Thickness;  // 0x7C(0x4)
	struct FTransform WorldOffset;  // 0x80(0x30)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool bEnabled : 1;  // 0xB0(0x1)
	char pad_177[15];  // 0xB1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_BeginExecution
// Size: 0x68(Inherited: 0x8) 
struct FRigUnit_BeginExecution : public FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorParallel
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool Result : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_BlendTransform
// Size: 0x80(Inherited: 0x8) 
struct FRigUnit_BlendTransform : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Source;  // 0x10(0x30)
	struct TArray<struct FBlendTarget> Targets;  // 0x40(0x10)
	struct FTransform Result;  // 0x50(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Input;  // 0x10(0x10)
	struct FVector TwistAxis;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	struct FQuat Swing;  // 0x30(0x10)
	struct FQuat Twist;  // 0x40(0x10)

}; 
// ScriptStruct ControlRig.BlendTarget
// Size: 0x40(Inherited: 0x0) 
struct FBlendTarget
{
	struct FTransform Transform;  // 0x0(0x30)
	float Weight;  // 0x30(0x4)
	char pad_52[12];  // 0x34(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
// Size: 0x58(Inherited: 0x8) 
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Items;  // 0x8(0x10)
	struct FName Old;  // 0x18(0x8)
	struct FName New;  // 0x20(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool RemoveInvalidItems : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FRigElementKeyCollection Collection;  // 0x30(0x10)
	struct FRigElementKeyCollection CachedCollection;  // 0x40(0x10)
	int32_t CachedHierarchyHash;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_ItemHarmonics
// Size: 0xE8(Inherited: 0x68) 
struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_Harmonics_TargetItem> Targets;  // 0x68(0x10)
	struct FVector WaveSpeed;  // 0x78(0xC)
	struct FVector WaveFrequency;  // 0x84(0xC)
	struct FVector WaveAmplitude;  // 0x90(0xC)
	struct FVector WaveOffset;  // 0x9C(0xC)
	struct FVector WaveNoise;  // 0xA8(0xC)
	uint8_t  WaveEase;  // 0xB4(0x1)
	char pad_181[3];  // 0xB5(0x3)
	float WaveMinimum;  // 0xB8(0x4)
	float WaveMaximum;  // 0xBC(0x4)
	uint8_t  RotationOrder;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)
	struct FRigUnit_BoneHarmonics_WorkData WorkData;  // 0xC8(0x20)

}; 
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
// Size: 0x60(Inherited: 0x0) 
struct FRigUnit_MultiFABRIK_WorkData
{
	char pad_0[96];  // 0x0(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_KalmanFloat
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
	float Value;  // 0x8(0x4)
	int32_t BufferSize;  // 0xC(0x4)
	float Result;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<float> Buffer;  // 0x18(0x10)
	int32_t LastInsertIndex;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
// Size: 0x20(Inherited: 0x0) 
struct FRigUnit_BoneHarmonics_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x0(0x10)
	struct FVector WaveTime;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathColorSub
// Size: 0x38(Inherited: 0x38) 
struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
// Size: 0x10(Inherited: 0x0) 
struct FRigUnit_Harmonics_TargetItem
{
	struct FRigElementKey Item;  // 0x0(0xC)
	float Ratio;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
// Size: 0xA0(Inherited: 0x8) 
struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Global;  // 0x10(0x30)
	struct FTransform Parent;  // 0x40(0x30)
	struct FTransform Local;  // 0x70(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_BoneHarmonics
// Size: 0xE8(Inherited: 0x68) 
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones;  // 0x68(0x10)
	struct FVector WaveSpeed;  // 0x78(0xC)
	struct FVector WaveFrequency;  // 0x84(0xC)
	struct FVector WaveAmplitude;  // 0x90(0xC)
	struct FVector WaveOffset;  // 0x9C(0xC)
	struct FVector WaveNoise;  // 0xA8(0xC)
	uint8_t  WaveEase;  // 0xB4(0x1)
	char pad_181[3];  // 0xB5(0x3)
	float WaveMinimum;  // 0xB8(0x4)
	float WaveMaximum;  // 0xBC(0x4)
	uint8_t  RotationOrder;  // 0xC0(0x1)
	char pad_193_1 : 7;  // 0xC1(0x1)
	bool bPropagateToChildren : 1;  // 0xC1(0x1)
	char pad_194[6];  // 0xC2(0x6)
	struct FRigUnit_BoneHarmonics_WorkData WorkData;  // 0xC8(0x20)

}; 
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
// Size: 0xC(Inherited: 0x0) 
struct FRigUnit_BoneHarmonics_BoneTarget
{
	struct FName Bone;  // 0x0(0x8)
	float Ratio;  // 0x8(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
// Size: 0xA0(Inherited: 0xA0) 
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{

}; 
// ScriptStruct ControlRig.RigUnit_ControlName
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_ControlName : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
	struct FName Bone;  // 0x8(0x8)
	uint8_t  Space;  // 0x10(0x1)
	char pad_17[15];  // 0x11(0xF)
	struct FTransform Transform;  // 0x20(0x30)
	struct FCachedRigElement CachedBone;  // 0x50(0x14)
	char pad_100[12];  // 0x64(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Quaternion;  // 0x10(0x10)
	struct FVector Vector;  // 0x20(0xC)
	struct FVector Result;  // 0x2C(0xC)
	char pad_56[8];  // 0x38(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
// Size: 0x14(Inherited: 0x0) 
struct FRigUnit_PointSimulation_BoneTarget
{
	struct FName Bone;  // 0x0(0x8)
	int32_t TranslationPoint;  // 0x8(0x4)
	int32_t PrimaryAimPoint;  // 0xC(0x4)
	int32_t SecondaryAimPoint;  // 0x10(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SpaceName
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_SpaceName : public FRigUnit
{
	struct FName Space;  // 0x8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	float Tolerance;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool Result : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function ControlRig.ControlRigComponent.SetControlFloat
// Size: 0xC(Inherited: 0x0) 
struct FSetControlFloat
{
	struct FName ControlName;  // 0x0(0x8)
	float Value;  // 0x8(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_BoneName
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_BoneName : public FRigUnit
{
	struct FName Bone;  // 0x8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_Item
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_Item : public FRigUnit
{
	struct FRigElementKey Item;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SpringIK
// Size: 0x1D0(Inherited: 0x68) 
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x68(0x8)
	struct FName EndBone;  // 0x70(0x8)
	float HierarchyStrength;  // 0x78(0x4)
	float EffectorStrength;  // 0x7C(0x4)
	float EffectorRatio;  // 0x80(0x4)
	float RootStrength;  // 0x84(0x4)
	float RootRatio;  // 0x88(0x4)
	float Damping;  // 0x8C(0x4)
	struct FVector PoleVector;  // 0x90(0xC)
	char pad_156_1 : 7;  // 0x9C(0x1)
	bool bFlipPolePlane : 1;  // 0x9C(0x1)
	uint8_t  PoleVectorKind;  // 0x9D(0x1)
	char pad_158[2];  // 0x9E(0x2)
	struct FName PoleVectorSpace;  // 0xA0(0x8)
	struct FVector PrimaryAxis;  // 0xA8(0xC)
	struct FVector SecondaryAxis;  // 0xB4(0xC)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bLiveSimulation : 1;  // 0xC0(0x1)
	char pad_193[3];  // 0xC1(0x3)
	int32_t Iterations;  // 0xC4(0x4)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool bLimitLocalPosition : 1;  // 0xC8(0x1)
	char pad_201_1 : 7;  // 0xC9(0x1)
	bool bPropagateToChildren : 1;  // 0xC9(0x1)
	char pad_202[6];  // 0xCA(0x6)
	struct FRigUnit_SpringIK_DebugSettings DebugSettings;  // 0xD0(0x50)
	struct FRigUnit_SpringIK_WorkData WorkData;  // 0x120(0xB0)

}; 
// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
// Size: 0x140(Inherited: 0x68) 
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x68(0x10)
	char pad_120[8];  // 0x78(0x8)
	struct FTransform EffectorTransform;  // 0x80(0x30)
	float Precision;  // 0xB0(0x4)
	float Weight;  // 0xB4(0x4)
	int32_t MaxIterations;  // 0xB8(0x4)
	char pad_188_1 : 7;  // 0xBC(0x1)
	bool bStartFromTail : 1;  // 0xBC(0x1)
	char pad_189[3];  // 0xBD(0x3)
	float BaseRotationLimit;  // 0xC0(0x4)
	char pad_196[4];  // 0xC4(0x4)
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;  // 0xC8(0x10)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool bPropagateToChildren : 1;  // 0xD8(0x1)
	char pad_217[7];  // 0xD9(0x7)
	struct FRigUnit_CCDIK_WorkData WorkData;  // 0xE0(0x58)
	char pad_312[8];  // 0x138(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool Result : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
// Size: 0x58(Inherited: 0x0) 
struct FRigUnit_CCDIK_WorkData
{
	struct TArray<struct FCCDIKChainLink> Chain;  // 0x0(0x10)
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x10(0x10)
	struct TArray<int32_t> RotationLimitIndex;  // 0x20(0x10)
	struct TArray<float> RotationLimitsPerItem;  // 0x30(0x10)
	struct FCachedRigElement CachedEffector;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
// Size: 0x10(Inherited: 0x0) 
struct FRigUnit_CCDIK_RotationLimitPerItem
{
	struct FRigElementKey Item;  // 0x0(0xC)
	float Limit;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntGreater
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
{
	int32_t A;  // 0x8(0x4)
	int32_t B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_CCDIK
// Size: 0x140(Inherited: 0x68) 
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x68(0x8)
	struct FName EffectorBone;  // 0x70(0x8)
	char pad_120[8];  // 0x78(0x8)
	struct FTransform EffectorTransform;  // 0x80(0x30)
	float Precision;  // 0xB0(0x4)
	float Weight;  // 0xB4(0x4)
	int32_t MaxIterations;  // 0xB8(0x4)
	char pad_188_1 : 7;  // 0xBC(0x1)
	bool bStartFromTail : 1;  // 0xBC(0x1)
	char pad_189[3];  // 0xBD(0x3)
	float BaseRotationLimit;  // 0xC0(0x4)
	char pad_196[4];  // 0xC4(0x4)
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> RotationLimits;  // 0xC8(0x10)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool bPropagateToChildren : 1;  // 0xD8(0x1)
	char pad_217[7];  // 0xD9(0x7)
	struct FRigUnit_CCDIK_WorkData WorkData;  // 0xE0(0x58)
	char pad_312[8];  // 0x138(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
// Size: 0x270(Inherited: 0x68) 
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey ChainRoot;  // 0x68(0xC)
	struct FVector Speed;  // 0x74(0xC)
	struct FRigUnit_ChainHarmonics_Reach Reach;  // 0x80(0x28)
	struct FRigUnit_ChainHarmonics_Wave Wave;  // 0xA8(0x40)
	struct FRuntimeFloatCurve WaveCurve;  // 0xE8(0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum;  // 0x170(0x3C)
	char pad_428_1 : 7;  // 0x1AC(0x1)
	bool bDrawDebug : 1;  // 0x1AC(0x1)
	char pad_429[3];  // 0x1AD(0x3)
	struct FTransform DrawWorldOffset;  // 0x1B0(0x30)
	struct FRigUnit_ChainHarmonics_WorkData WorkData;  // 0x1E0(0x90)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntLess
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
{
	int32_t A;  // 0x8(0x4)
	int32_t B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
// Size: 0x1C(Inherited: 0x0) 
struct FMathRBFInterpolateVectorColor_Target
{
	struct FVector Target;  // 0x0(0xC)
	struct FLinearColor Value;  // 0xC(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
// Size: 0x90(Inherited: 0x0) 
struct FRigUnit_ChainHarmonics_WorkData
{
	struct FVector Time;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FCachedRigElement> Items;  // 0x10(0x10)
	struct TArray<float> Ratio;  // 0x20(0x10)
	struct TArray<struct FVector> LocalTip;  // 0x30(0x10)
	struct TArray<struct FVector> PendulumTip;  // 0x40(0x10)
	struct TArray<struct FVector> PendulumPosition;  // 0x50(0x10)
	struct TArray<struct FVector> PendulumVelocity;  // 0x60(0x10)
	struct TArray<struct FVector> HierarchyLine;  // 0x70(0x10)
	struct TArray<struct FVector> VelocityLines;  // 0x80(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
// Size: 0x40(Inherited: 0x0) 
struct FRigUnit_ChainHarmonics_Wave
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector WaveFrequency;  // 0x4(0xC)
	struct FVector WaveAmplitude;  // 0x10(0xC)
	struct FVector WaveOffset;  // 0x1C(0xC)
	struct FVector WaveNoise;  // 0x28(0xC)
	float WaveMinimum;  // 0x34(0x4)
	float WaveMaximum;  // 0x38(0x4)
	uint8_t  WaveEase;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 
// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
// Size: 0x88(Inherited: 0x0) 
struct FRigUnit_PointSimulation_WorkData
{
	struct FCRSimPointContainer Simulation;  // 0x0(0x78)
	struct TArray<struct FCachedRigElement> BoneIndices;  // 0x78(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
// Size: 0x28(Inherited: 0x0) 
struct FRigUnit_ChainHarmonics_Reach
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector ReachTarget;  // 0x4(0xC)
	struct FVector ReachAxis;  // 0x10(0xC)
	float ReachMinimum;  // 0x1C(0x4)
	float ReachMaximum;  // 0x20(0x4)
	uint8_t  ReachEase;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
// Size: 0x68(Inherited: 0x68) 
struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorAngle
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	float Result;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function ControlRig.ControlRigComponent.OnPostSetup
// Size: 0x8(Inherited: 0x0) 
struct FOnPostSetup
{
	struct UControlRigComponent* Component;  // 0x0(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntNotEquals
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
{
	int32_t A;  // 0x8(0x4)
	int32_t B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionLoop
// Size: 0xF8(Inherited: 0x68) 
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
	struct FRigElementKeyCollection Collection;  // 0x68(0x10)
	struct FRigElementKey Item;  // 0x78(0xC)
	int32_t Index;  // 0x84(0x4)
	int32_t Count;  // 0x88(0x4)
	float Ratio;  // 0x8C(0x4)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool Continue : 1;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct FControlRigExecuteContext Completed;  // 0x98(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
// Size: 0xD0(Inherited: 0xB0) 
struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets;  // 0xB0(0x10)
	struct FQuat Output;  // 0xC0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionCount
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8(0x10)
	int32_t Count;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionReverse
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection Collection;  // 0x8(0x10)
	struct FRigElementKeyCollection Reversed;  // 0x18(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorDot
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	float Result;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionDifference
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A;  // 0x8(0x10)
	struct FRigElementKeyCollection B;  // 0x18(0x10)
	struct FRigElementKeyCollection Collection;  // 0x28(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionUnion
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
	struct FRigElementKeyCollection A;  // 0x8(0x10)
	struct FRigElementKeyCollection B;  // 0x18(0x10)
	struct FRigElementKeyCollection Collection;  // 0x28(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformInverse
// Size: 0x70(Inherited: 0x70) 
struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_CollectionChildren
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
	struct FRigElementKey Parent;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bIncludeParent : 1;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool bRecursive : 1;  // 0x15(0x1)
	uint8_t  TypeToSearch;  // 0x16(0x1)
	char pad_23[1];  // 0x17(0x1)
	struct FRigElementKeyCollection Collection;  // 0x18(0x10)
	struct FRigElementKeyCollection CachedCollection;  // 0x28(0x10)
	int32_t CachedHierarchyHash;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
	struct FName PartialName;  // 0x8(0x8)
	uint8_t  TypeToSearch;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FRigElementKeyCollection Collection;  // 0x18(0x10)
	struct FRigElementKeyCollection CachedCollection;  // 0x28(0x10)
	int32_t CachedHierarchyHash;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
// Size: 0x40(Inherited: 0x40) 
struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
// Size: 0x98(Inherited: 0x0) 
struct FRigUnit_FitChainToCurve_WorkData
{
	float ChainLength;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FVector> ItemPositions;  // 0x8(0x10)
	struct TArray<float> ItemSegments;  // 0x18(0x10)
	struct TArray<struct FVector> CurvePositions;  // 0x28(0x10)
	struct TArray<float> CurveSegments;  // 0x38(0x10)
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x48(0x10)
	struct TArray<int32_t> ItemRotationA;  // 0x58(0x10)
	struct TArray<int32_t> ItemRotationB;  // 0x68(0x10)
	struct TArray<float> ItemRotationT;  // 0x78(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms;  // 0x88(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_CollectionChain
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
	struct FRigElementKey FirstItem;  // 0x8(0xC)
	struct FRigElementKey LastItem;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool Reverse : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct FRigElementKeyCollection Collection;  // 0x28(0x10)
	struct FRigElementKeyCollection CachedCollection;  // 0x38(0x10)
	int32_t CachedHierarchyHash;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 
// Function ControlRig.ControlRigComponent.AddMappedElements
// Size: 0x10(Inherited: 0x0) 
struct FAddMappedElements
{
	struct TArray<struct FControlRigComponentMappedElement> NewMappedElements;  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_Control
// Size: 0xD0(Inherited: 0x8) 
struct FRigUnit_Control : public FRigUnit
{
	struct FEulerTransform Transform;  // 0x8(0x24)
	char pad_44[4];  // 0x2C(0x4)
	struct FTransform Base;  // 0x30(0x30)
	struct FTransform InitTransform;  // 0x60(0x30)
	struct FTransform Result;  // 0x90(0x30)
	struct FTransformFilter Filter;  // 0xC0(0x9)
	char pad_201[7];  // 0xC9(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatClamp
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	float Minimum;  // 0xC(0x4)
	float Maximum;  // 0x10(0x4)
	float Result;  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
// Size: 0x100(Inherited: 0xD0) 
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
	struct FTransform MeshTransform;  // 0xD0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
// Size: 0xE0(Inherited: 0x68) 
struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
	struct TArray<struct FVector> Points;  // 0x68(0x10)
	struct FLinearColor Color;  // 0x78(0x10)
	float Thickness;  // 0x88(0x4)
	struct FRigElementKey Space;  // 0x8C(0xC)
	char pad_152[8];  // 0x98(0x8)
	struct FTransform WorldOffset;  // 0xA0(0x30)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bEnabled : 1;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatRemap
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	float SourceMinimum;  // 0xC(0x4)
	float SourceMaximum;  // 0x10(0x4)
	float TargetMinimum;  // 0x14(0x4)
	float TargetMaximum;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bClamp : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	float Result;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
	struct FRotator Input;  // 0x8(0xC)
	struct FVector Result;  // 0x14(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
// Size: 0x100(Inherited: 0x68) 
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x68(0x10)
	char pad_120[8];  // 0x78(0x8)
	struct FTransform EffectorTransform;  // 0x80(0x30)
	float Precision;  // 0xB0(0x4)
	float Weight;  // 0xB4(0x4)
	char pad_184_1 : 7;  // 0xB8(0x1)
	bool bPropagateToChildren : 1;  // 0xB8(0x1)
	char pad_185[3];  // 0xB9(0x3)
	int32_t MaxIterations;  // 0xBC(0x4)
	struct FRigUnit_FABRIK_WorkData WorkData;  // 0xC0(0x38)
	char pad_248[8];  // 0xF8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
	struct FVector Input;  // 0x8(0xC)
	char pad_20[12];  // 0x14(0xC)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Input;  // 0x10(0x10)
	struct FRotator Result;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_GetControlInteger
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_GetControlInteger : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)
	int32_t IntegerValue;  // 0x10(0x4)
	int32_t Minimum;  // 0x14(0x4)
	int32_t Maximum;  // 0x18(0x4)
	struct FCachedRigElement CachedControlIndex;  // 0x1C(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
	struct FVector Axis;  // 0x8(0xC)
	float angle;  // 0x14(0x4)
	char pad_24[8];  // 0x18(0x8)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ConvertRotation
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_ConvertRotation : public FRigUnit
{
	struct FRotator Input;  // 0x8(0xC)
	char pad_20[12];  // 0x14(0xC)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
	struct FVector Argument0;  // 0x8(0xC)
	struct FVector Argument1;  // 0x14(0xC)
	float Result;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{

}; 
// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
	struct FEulerTransform Input;  // 0x8(0x24)
	char pad_44[4];  // 0x2C(0x4)
	struct FTransform Result;  // 0x30(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionScale
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Value;  // 0x10(0x10)
	float Scale;  // 0x20(0x4)
	char pad_36[12];  // 0x24(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_PointSimulation
// Size: 0x200(Inherited: 0x68) 
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
	struct TArray<struct FCRSimPoint> Points;  // 0x68(0x10)
	struct TArray<struct FCRSimLinearSpring> Links;  // 0x78(0x10)
	struct TArray<struct FCRSimPointForce> Forces;  // 0x88(0x10)
	struct TArray<struct FCRSimSoftCollision> CollisionVolumes;  // 0x98(0x10)
	float SimulatedStepsPerSecond;  // 0xA8(0x4)
	uint8_t  IntegratorType;  // 0xAC(0x1)
	char pad_173[3];  // 0xAD(0x3)
	float VerletBlend;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;  // 0xB8(0x10)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool bLimitLocalPosition : 1;  // 0xC8(0x1)
	char pad_201_1 : 7;  // 0xC9(0x1)
	bool bPropagateToChildren : 1;  // 0xC9(0x1)
	char pad_202[2];  // 0xCA(0x2)
	struct FVector PrimaryAimAxis;  // 0xCC(0xC)
	struct FVector SecondaryAimAxis;  // 0xD8(0xC)
	char pad_228[12];  // 0xE4(0xC)
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings;  // 0xF0(0x50)
	struct FCRFourPointBezier Bezier;  // 0x140(0x30)
	struct FRigUnit_PointSimulation_WorkData WorkData;  // 0x170(0x88)
	char pad_504[8];  // 0x1F8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
// Size: 0x50(Inherited: 0x0) 
struct FRigUnit_DistributeRotation_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x0(0x10)
	struct TArray<int32_t> ItemRotationA;  // 0x10(0x10)
	struct TArray<int32_t> ItemRotationB;  // 0x20(0x10)
	struct TArray<float> ItemRotationT;  // 0x30(0x10)
	struct TArray<struct FTransform> ItemLocalTransforms;  // 0x40(0x10)

}; 
// Function ControlRig.ControlRigGizmoActor.OnEnabledChanged
// Size: 0x1(Inherited: 0x0) 
struct FOnEnabledChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsEnabled : 1;  // 0x0(0x1)

}; 
// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
// Size: 0x68(Inherited: 0x68) 
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{

}; 
// ScriptStruct ControlRig.RigUnit_DebugBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_DebugBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_GetDeltaTime
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
	float Result;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
// Size: 0x110(Inherited: 0x68) 
struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier Bezier;  // 0x68(0x30)
	float MinimumU;  // 0x98(0x4)
	float MaximumU;  // 0x9C(0x4)
	struct FLinearColor Color;  // 0xA0(0x10)
	float Thickness;  // 0xB0(0x4)
	int32_t Detail;  // 0xB4(0x4)
	struct FRigElementKey Space;  // 0xB8(0xC)
	char pad_196[12];  // 0xC4(0xC)
	struct FTransform WorldOffset;  // 0xD0(0x30)
	char pad_256_1 : 7;  // 0x100(0x1)
	bool bEnabled : 1;  // 0x100(0x1)
	char pad_257[15];  // 0x101(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_DebugBezier
// Size: 0x100(Inherited: 0x68) 
struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
	struct FCRFourPointBezier Bezier;  // 0x68(0x30)
	float MinimumU;  // 0x98(0x4)
	float MaximumU;  // 0x9C(0x4)
	struct FLinearColor Color;  // 0xA0(0x10)
	float Thickness;  // 0xB0(0x4)
	int32_t Detail;  // 0xB4(0x4)
	struct FName Space;  // 0xB8(0x8)
	struct FTransform WorldOffset;  // 0xC0(0x30)
	char pad_240_1 : 7;  // 0xF0(0x1)
	bool bEnabled : 1;  // 0xF0(0x1)
	char pad_241[15];  // 0xF1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
// Size: 0xE0(Inherited: 0x68) 
struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
	struct FVector A;  // 0x68(0xC)
	struct FVector B;  // 0x74(0xC)
	struct FLinearColor Color;  // 0x80(0x10)
	float Thickness;  // 0x90(0x4)
	struct FRigElementKey Space;  // 0x94(0xC)
	struct FTransform WorldOffset;  // 0xA0(0x30)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bEnabled : 1;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_DebugPointMutable
// Size: 0xE0(Inherited: 0x68) 
struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
	struct FVector Vector;  // 0x68(0xC)
	uint8_t  mode;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)
	struct FLinearColor Color;  // 0x78(0x10)
	float Scale;  // 0x88(0x4)
	float Thickness;  // 0x8C(0x4)
	struct FName Space;  // 0x90(0x8)
	char pad_152[8];  // 0x98(0x8)
	struct FTransform WorldOffset;  // 0xA0(0x30)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bEnabled : 1;  // 0xD0(0x1)
	char pad_209[15];  // 0xD1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool A : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool B : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool Result : 1;  // 0xA(0x1)
	char pad_11[5];  // 0xB(0x5)

}; 
// ScriptStruct ControlRig.RigUnit_DebugPoint
// Size: 0x80(Inherited: 0x8) 
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
	struct FVector Vector;  // 0x8(0xC)
	uint8_t  mode;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FLinearColor Color;  // 0x18(0x10)
	float Scale;  // 0x28(0x4)
	float Thickness;  // 0x2C(0x4)
	struct FName Space;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)
	struct FTransform WorldOffset;  // 0x40(0x30)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bEnabled : 1;  // 0x70(0x1)
	char pad_113[15];  // 0x71(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
// Size: 0x110(Inherited: 0x68) 
struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
	char pad_104[8];  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	struct FLinearColor Color;  // 0xA0(0x10)
	float Radius;  // 0xB0(0x4)
	float MinimumDegrees;  // 0xB4(0x4)
	float MaximumDegrees;  // 0xB8(0x4)
	float Thickness;  // 0xBC(0x4)
	int32_t Detail;  // 0xC0(0x4)
	struct FRigElementKey Space;  // 0xC4(0xC)
	struct FTransform WorldOffset;  // 0xD0(0x30)
	char pad_256_1 : 7;  // 0x100(0x1)
	bool bEnabled : 1;  // 0x100(0x1)
	char pad_257[15];  // 0x101(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatCeil
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	float Result;  // 0xC(0x4)
	int32_t Int;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_DebugRectangle
// Size: 0x100(Inherited: 0x68) 
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
	char pad_104[8];  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	struct FLinearColor Color;  // 0xA0(0x10)
	float Scale;  // 0xB0(0x4)
	float Thickness;  // 0xB4(0x4)
	struct FName Space;  // 0xB8(0x8)
	struct FTransform WorldOffset;  // 0xC0(0x30)
	char pad_240_1 : 7;  // 0xF0(0x1)
	bool bEnabled : 1;  // 0xF0(0x1)
	char pad_241[15];  // 0xF1(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// Size: 0x10(Inherited: 0x0) 
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
	struct TArray<struct FTransform> DrawTransforms;  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
// Size: 0x110(Inherited: 0x68) 
struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
	char pad_104[8];  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	uint8_t  mode;  // 0xA0(0x1)
	char pad_161[3];  // 0xA1(0x3)
	struct FLinearColor Color;  // 0xA4(0x10)
	float Thickness;  // 0xB4(0x4)
	float Scale;  // 0xB8(0x4)
	struct FRigElementKey Space;  // 0xBC(0xC)
	char pad_200[8];  // 0xC8(0x8)
	struct FTransform WorldOffset;  // 0xD0(0x30)
	char pad_256_1 : 7;  // 0x100(0x1)
	bool bEnabled : 1;  // 0x100(0x1)
	char pad_257[15];  // 0x101(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorScale
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	float Factor;  // 0x14(0x4)
	struct FVector Result;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
// Size: 0x110(Inherited: 0x68) 
struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
	char pad_104[8];  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	uint8_t  mode;  // 0xA0(0x1)
	char pad_161[3];  // 0xA1(0x3)
	struct FLinearColor Color;  // 0xA4(0x10)
	float Thickness;  // 0xB4(0x4)
	float Scale;  // 0xB8(0x4)
	struct FName Space;  // 0xBC(0x8)
	char pad_196[12];  // 0xC4(0xC)
	struct FTransform WorldOffset;  // 0xD0(0x30)
	char pad_256_1 : 7;  // 0x100(0x1)
	bool bEnabled : 1;  // 0x100(0x1)
	char pad_257[15];  // 0x101(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Rotation;  // 0x10(0x10)
	struct FQuat Global;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
// Size: 0xD0(Inherited: 0x8) 
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	struct FTransform Delta;  // 0x40(0x30)
	struct FTransform PreviousValue;  // 0x70(0x30)
	struct FTransform Cache;  // 0xA0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Value;  // 0x10(0x10)
	struct FQuat Delta;  // 0x20(0x10)
	struct FQuat PreviousValue;  // 0x30(0x10)
	struct FQuat Cache;  // 0x40(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
	struct FVector Value;  // 0x8(0xC)
	struct FVector Delta;  // 0x14(0xC)
	struct FVector PreviousValue;  // 0x20(0xC)
	struct FVector Cache;  // 0x2C(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
	float Value;  // 0x8(0x4)
	float Delta;  // 0xC(0x4)
	float PreviousValue;  // 0x10(0x4)
	float Cache;  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_ForLoopCount
// Size: 0xD8(Inherited: 0x68) 
struct FRigUnit_ForLoopCount : public FRigUnitMutable
{
	int32_t Count;  // 0x68(0x4)
	int32_t Index;  // 0x6C(0x4)
	float Ratio;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool Continue : 1;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)
	struct FControlRigExecuteContext Completed;  // 0x78(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
// Size: 0xE0(Inherited: 0x68) 
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x68(0x10)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;  // 0x78(0x10)
	uint8_t  RotationEaseType;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	float Weight;  // 0x8C(0x4)
	struct FRigUnit_DistributeRotation_WorkData WorkData;  // 0x90(0x50)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
// Size: 0x58(Inherited: 0x8) 
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
	struct FCRFourPointBezier Bezier;  // 0x8(0x30)
	float T;  // 0x38(0x4)
	struct FVector Result;  // 0x3C(0xC)
	struct FVector Tangent;  // 0x48(0xC)
	char pad_84[4];  // 0x54(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
// Size: 0x20(Inherited: 0x0) 
struct FRigUnit_DistributeRotation_Rotation
{
	struct FQuat Rotation;  // 0x0(0x10)
	float Ratio;  // 0x10(0x4)
	char pad_20[12];  // 0x14(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
// Size: 0x50(Inherited: 0x0) 
struct FRigUnit_PointSimulation_DebugSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Scale;  // 0x4(0x4)
	float CollisionScale;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bDrawPointsAsSpheres : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FLinearColor Color;  // 0x10(0x10)
	struct FTransform WorldOffset;  // 0x20(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_DistributeRotation
// Size: 0xE8(Inherited: 0x68) 
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x68(0x8)
	struct FName EndBone;  // 0x70(0x8)
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;  // 0x78(0x10)
	uint8_t  RotationEaseType;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	float Weight;  // 0x8C(0x4)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool bPropagateToChildren : 1;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct FRigUnit_DistributeRotation_WorkData WorkData;  // 0x98(0x50)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntMin
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
// Size: 0xA0(Inherited: 0x68) 
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
	struct FName InstructionName;  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorNegate
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
// Size: 0x78(Inherited: 0x68) 
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
	struct FName InstructionName;  // 0x68(0x8)
	float Thickness;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SetBoneTransform
// Size: 0xF0(Inherited: 0x68) 
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
	struct FName Bone;  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	struct FTransform Result;  // 0xA0(0x30)
	uint8_t  Space;  // 0xD0(0x1)
	char pad_209[3];  // 0xD1(0x3)
	float Weight;  // 0xD4(0x4)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool bPropagateToChildren : 1;  // 0xD8(0x1)
	char pad_217[3];  // 0xD9(0x3)
	struct FCachedRigElement CachedBone;  // 0xDC(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_Add_VectorVector
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{

}; 
// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
// Size: 0x80(Inherited: 0x68) 
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
	struct FName InstructionName;  // 0x68(0x8)
	struct FLinearColor Color;  // 0x70(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
	struct FName InstructionName;  // 0x8(0x8)
	struct FLinearColor Color;  // 0x10(0x10)
	struct FTransform Transform;  // 0x20(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
// Size: 0x38(Inherited: 0x0) 
struct FRigUnit_FABRIK_WorkData
{
	struct TArray<struct FFABRIKChainLink> Chain;  // 0x0(0x10)
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x10(0x10)
	struct FCachedRigElement CachedEffector;  // 0x20(0x14)
	char pad_52[4];  // 0x34(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_FABRIK
// Size: 0x100(Inherited: 0x68) 
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x68(0x8)
	struct FName EffectorBone;  // 0x70(0x8)
	char pad_120[8];  // 0x78(0x8)
	struct FTransform EffectorTransform;  // 0x80(0x30)
	float Precision;  // 0xB0(0x4)
	float Weight;  // 0xB4(0x4)
	char pad_184_1 : 7;  // 0xB8(0x1)
	bool bPropagateToChildren : 1;  // 0xB8(0x1)
	char pad_185[3];  // 0xB9(0x3)
	int32_t MaxIterations;  // 0xBC(0x4)
	struct FRigUnit_FABRIK_WorkData WorkData;  // 0xC0(0x38)
	char pad_248[8];  // 0xF8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorDeg
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
// Size: 0x200(Inherited: 0x68) 
struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x68(0x10)
	struct FCRFourPointBezier Bezier;  // 0x78(0x30)
	uint8_t  Alignment;  // 0xA8(0x1)
	char pad_169[3];  // 0xA9(0x3)
	float Minimum;  // 0xAC(0x4)
	float Maximum;  // 0xB0(0x4)
	int32_t SamplingPrecision;  // 0xB4(0x4)
	struct FVector PrimaryAxis;  // 0xB8(0xC)
	struct FVector SecondaryAxis;  // 0xC4(0xC)
	struct FVector PoleVectorPosition;  // 0xD0(0xC)
	char pad_220[4];  // 0xDC(0x4)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;  // 0xE0(0x10)
	uint8_t  RotationEaseType;  // 0xF0(0x1)
	char pad_241[3];  // 0xF1(0x3)
	float Weight;  // 0xF4(0x4)
	char pad_248_1 : 7;  // 0xF8(0x1)
	bool bPropagateToChildren : 1;  // 0xF8(0x1)
	char pad_249[7];  // 0xF9(0x7)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;  // 0x100(0x60)
	struct FRigUnit_FitChainToCurve_WorkData WorkData;  // 0x160(0x98)
	char pad_504[8];  // 0x1F8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	struct FVector Result;  // 0x14(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
// Size: 0x60(Inherited: 0x0) 
struct FRigUnit_FitChainToCurve_DebugSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Scale;  // 0x4(0x4)
	struct FLinearColor CurveColor;  // 0x8(0x10)
	struct FLinearColor SegmentsColor;  // 0x18(0x10)
	char pad_40[8];  // 0x28(0x8)
	struct FTransform WorldOffset;  // 0x30(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
// Size: 0x20(Inherited: 0x0) 
struct FRigUnit_FitChainToCurve_Rotation
{
	struct FQuat Rotation;  // 0x0(0x10)
	float Ratio;  // 0x10(0x4)
	char pad_20[12];  // 0x14(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_FitChainToCurve
// Size: 0x200(Inherited: 0x68) 
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x68(0x8)
	struct FName EndBone;  // 0x70(0x8)
	struct FCRFourPointBezier Bezier;  // 0x78(0x30)
	uint8_t  Alignment;  // 0xA8(0x1)
	char pad_169[3];  // 0xA9(0x3)
	float Minimum;  // 0xAC(0x4)
	float Maximum;  // 0xB0(0x4)
	int32_t SamplingPrecision;  // 0xB4(0x4)
	struct FVector PrimaryAxis;  // 0xB8(0xC)
	struct FVector SecondaryAxis;  // 0xC4(0xC)
	struct FVector PoleVectorPosition;  // 0xD0(0xC)
	char pad_220[4];  // 0xDC(0x4)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;  // 0xE0(0x10)
	uint8_t  RotationEaseType;  // 0xF0(0x1)
	char pad_241[3];  // 0xF1(0x3)
	float Weight;  // 0xF4(0x4)
	char pad_248_1 : 7;  // 0xF8(0x1)
	bool bPropagateToChildren : 1;  // 0xF8(0x1)
	char pad_249[7];  // 0xF9(0x7)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;  // 0x100(0x60)
	struct FRigUnit_FitChainToCurve_WorkData WorkData;  // 0x160(0x98)
	char pad_504[8];  // 0x1F8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
{
	int32_t Value;  // 0x8(0x4)
	int32_t Result;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MapRange_Float
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_MapRange_Float : public FRigUnit
{
	float Value;  // 0x8(0x4)
	float MinIn;  // 0xC(0x4)
	float MaxIn;  // 0x10(0x4)
	float MinOut;  // 0x14(0x4)
	float MaxOut;  // 0x18(0x4)
	float Result;  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
	float Argument0;  // 0x8(0x4)
	float Argument1;  // 0xC(0x4)
	float Result;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{

}; 
// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{

}; 
// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{

}; 
// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{

}; 
// Function ControlRig.ControlRigGizmoActor.IsHovered
// Size: 0x1(Inherited: 0x0) 
struct FIsHovered
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct ControlRig.RigUnit_GetControlTransform
// Size: 0xD0(Inherited: 0x8) 
struct FRigUnit_GetControlTransform : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)
	uint8_t  Space;  // 0x10(0x1)
	char pad_17[15];  // 0x11(0xF)
	struct FTransform Transform;  // 0x20(0x30)
	struct FTransform Minimum;  // 0x50(0x30)
	struct FTransform Maximum;  // 0x80(0x30)
	struct FCachedRigElement CachedControlIndex;  // 0xB0(0x14)
	char pad_196[12];  // 0xC4(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_GetControlRotator
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_GetControlRotator : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)
	uint8_t  Space;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FRotator Rotator;  // 0x14(0xC)
	struct FRotator Minimum;  // 0x20(0xC)
	struct FRotator Maximum;  // 0x2C(0xC)
	struct FCachedRigElement CachedControlIndex;  // 0x38(0x14)
	char pad_76[4];  // 0x4C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_GetControlVector
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_GetControlVector : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)
	uint8_t  Space;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FVector Vector;  // 0x14(0xC)
	struct FVector Minimum;  // 0x20(0xC)
	struct FVector Maximum;  // 0x2C(0xC)
	struct FCachedRigElement CachedControlIndex;  // 0x38(0x14)
	char pad_76[4];  // 0x4C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_StartsWith
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_StartsWith : public FRigUnit_NameBase
{
	struct FName Name;  // 0x8(0x8)
	struct FName Start;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool Result : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatRad
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_GetControlVector2D
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_GetControlVector2D : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)
	struct FVector2D Vector;  // 0x10(0x8)
	struct FVector2D Minimum;  // 0x18(0x8)
	struct FVector2D Maximum;  // 0x20(0x8)
	struct FCachedRigElement CachedControlIndex;  // 0x28(0x14)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_GetControlBool
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_GetControlBool : public FRigUnit
{
	struct FName Control;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool BoolValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FCachedRigElement CachedControlIndex;  // 0x14(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorRemap
// Size: 0x58(Inherited: 0x8) 
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	struct FVector SourceMinimum;  // 0x14(0xC)
	struct FVector SourceMaximum;  // 0x20(0xC)
	struct FVector TargetMinimum;  // 0x2C(0xC)
	struct FVector TargetMaximum;  // 0x38(0xC)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bClamp : 1;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)
	struct FVector Result;  // 0x48(0xC)
	char pad_84[4];  // 0x54(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_GetJointTransform
// Size: 0xF0(Inherited: 0x68) 
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
	struct FName Joint;  // 0x68(0x8)
	uint8_t  Type;  // 0x70(0x1)
	uint8_t  TransformSpace;  // 0x71(0x1)
	char pad_114[14];  // 0x72(0xE)
	struct FTransform BaseTransform;  // 0x80(0x30)
	struct FName BaseJoint;  // 0xB0(0x8)
	char pad_184[8];  // 0xB8(0x8)
	struct FTransform Output;  // 0xC0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
// Size: 0x80(Inherited: 0x8) 
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
	struct FName Bone;  // 0x8(0x8)
	struct FName Space;  // 0x10(0x8)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform Transform;  // 0x20(0x30)
	struct FCachedRigElement CachedBone;  // 0x50(0x14)
	struct FCachedRigElement CachedSpace;  // 0x64(0x14)
	char pad_120[8];  // 0x78(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	float Result;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
// Size: 0x90(Inherited: 0x8) 
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
	struct FRigElementKey Child;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bChildInitial : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FRigElementKey Parent;  // 0x18(0xC)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bParentInitial : 1;  // 0x24(0x1)
	char pad_37[11];  // 0x25(0xB)
	struct FTransform RelativeTransform;  // 0x30(0x30)
	struct FCachedRigElement CachedChild;  // 0x60(0x14)
	struct FCachedRigElement CachedParent;  // 0x74(0x14)
	char pad_136[8];  // 0x88(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
	struct FName Space;  // 0x8(0x8)
	uint8_t  SpaceType;  // 0x10(0x1)
	char pad_17[15];  // 0x11(0xF)
	struct FTransform Transform;  // 0x20(0x30)
	struct FCachedRigElement CachedSpaceIndex;  // 0x50(0x14)
	char pad_100[12];  // 0x64(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatAsin
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_GetTransform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_GetTransform : public FRigUnit
{
	struct FRigElementKey Item;  // 0x8(0xC)
	uint8_t  Space;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool bInitial : 1;  // 0x15(0x1)
	char pad_22[10];  // 0x16(0xA)
	struct FTransform Transform;  // 0x20(0x30)
	struct FCachedRigElement CachedIndex;  // 0x50(0x14)
	char pad_100[12];  // 0x64(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_HierarchyBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_HierarchyBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
	struct FRigElementKey Item;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bIncludeItem : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FRigElementKeyCollection Siblings;  // 0x18(0x10)
	struct FCachedRigElement CachedItem;  // 0x28(0x14)
	char pad_60[4];  // 0x3C(0x4)
	struct FRigElementKeyCollection CachedSiblings;  // 0x40(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatLess
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
	struct FRigElementKey Child;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bIncludeChild : 1;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool bReverse : 1;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)
	struct FRigElementKeyCollection Parents;  // 0x18(0x10)
	struct FCachedRigElement CachedChild;  // 0x28(0x14)
	char pad_60[4];  // 0x3C(0x4)
	struct FRigElementKeyCollection CachedParents;  // 0x40(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
// Size: 0x48(Inherited: 0x8) 
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
	struct FRigElementKey Child;  // 0x8(0xC)
	struct FRigElementKey Parent;  // 0x14(0xC)
	struct FCachedRigElement CachedChild;  // 0x20(0x14)
	struct FCachedRigElement CachedParent;  // 0x34(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
// Size: 0x90(Inherited: 0x68) 
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries;  // 0x68(0x10)
	float Weight;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x80(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
// Size: 0xA0(Inherited: 0x8) 
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Argument0;  // 0x10(0x30)
	struct FTransform Argument1;  // 0x40(0x30)
	struct FTransform Result;  // 0x70(0x30)

}; 
// Function ControlRig.ControlRigComponent.SetControlVector2D
// Size: 0x10(Inherited: 0x0) 
struct FSetControlVector2D
{
	struct FName ControlName;  // 0x0(0x8)
	struct FVector2D Value;  // 0x8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_InverseExecution
// Size: 0x68(Inherited: 0x8) 
struct FRigUnit_InverseExecution : public FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_IsInteracting
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_IsInteracting : public FRigUnit
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bIsInteracting : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ControlRig.StructReference
// Size: 0x8(Inherited: 0x0) 
struct FStructReference
{
	char pad_0[8];  // 0x0(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_ItemBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_ItemBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Value;  // 0x10(0x10)
	struct FVector Axis;  // 0x20(0xC)
	float angle;  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_ItemReplace
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
	struct FRigElementKey Item;  // 0x8(0xC)
	struct FName Old;  // 0x14(0x8)
	struct FName New;  // 0x1C(0x8)
	struct FRigElementKey Result;  // 0x24(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_ItemExists
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
	struct FRigElementKey Item;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool Exists : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FCachedRigElement CachedIndex;  // 0x18(0x14)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
// Size: 0x58(Inherited: 0x8) 
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
	struct FVector Value;  // 0x8(0xC)
	float SecondsAgo;  // 0x14(0x4)
	int32_t BufferSize;  // 0x18(0x4)
	float TimeRange;  // 0x1C(0x4)
	struct FVector Result;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)
	struct TArray<struct FVector> Buffer;  // 0x30(0x10)
	struct TArray<float> DeltaTimes;  // 0x40(0x10)
	int32_t LastInsertIndex;  // 0x50(0x4)
	int32_t UpperBound;  // 0x54(0x4)

}; 
// ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
// Size: 0x20(Inherited: 0x0) 
struct FMathRBFInterpolateQuatFloat_Target
{
	struct FQuat Target;  // 0x0(0x10)
	float Value;  // 0x10(0x4)
	char pad_20[12];  // 0x14(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	struct FTransform World;  // 0x40(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
// Size: 0x68(Inherited: 0x68) 
struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{

}; 
// ScriptStruct ControlRig.RigUnit_KalmanTransform
// Size: 0xA0(Inherited: 0x8) 
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	int32_t BufferSize;  // 0x40(0x4)
	char pad_68[12];  // 0x44(0xC)
	struct FTransform Result;  // 0x50(0x30)
	struct TArray<struct FTransform> Buffer;  // 0x80(0x10)
	int32_t LastInsertIndex;  // 0x90(0x4)
	char pad_148[12];  // 0x94(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_KalmanVector
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
	struct FVector Value;  // 0x8(0xC)
	int32_t BufferSize;  // 0x14(0x4)
	struct FVector Result;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)
	struct TArray<struct FVector> Buffer;  // 0x28(0x10)
	int32_t LastInsertIndex;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
// Size: 0x18(Inherited: 0x0) 
struct FRigUnit_SetMultiControlRotator_Entry
{
	struct FName Control;  // 0x0(0x8)
	struct FRotator Rotator;  // 0x8(0xC)
	uint8_t  Space;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolEquals
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool A : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool B : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool Result : 1;  // 0xA(0x1)
	char pad_11[5];  // 0xB(0x5)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool A : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool B : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool Result : 1;  // 0xA(0x1)
	char pad_11[5];  // 0xB(0x5)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolOr
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolNand
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathIntAdd
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolAnd
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_Timeline
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_Timeline : public FRigUnit_SimBase
{
	float Speed;  // 0x8(0x4)
	float Time;  // 0xC(0x4)
	float AccumulatedValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatConstant
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function ControlRig.ControlRigComponent.GetControlInt
// Size: 0xC(Inherited: 0x0) 
struct FGetControlInt
{
	struct FName ControlName;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Value : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool Result : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolNot
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_SetControlRotator
// Size: 0x98(Inherited: 0x68) 
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	float Weight;  // 0x70(0x4)
	struct FRotator Rotator;  // 0x74(0xC)
	uint8_t  Space;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	struct FCachedRigElement CachedControlIndex;  // 0x84(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolConstant
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Value : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{

}; 
// ScriptStruct ControlRig.RigUnit_MathIntMul
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{

}; 
// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bEnabled : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float Thickness;  // 0x44(0x4)
	float Scale;  // 0x48(0x4)
	struct FName BoneSpace;  // 0x4C(0x8)
	char pad_84[12];  // 0x54(0xC)

}; 
// ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
// Size: 0x40(Inherited: 0x0) 
struct FMathRBFInterpolateQuatXform_Target
{
	struct FQuat Target;  // 0x0(0x10)
	struct FTransform Value;  // 0x10(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathColorBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathColorBase : public FRigUnit_MathBase
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatSign
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
	struct FVector Euler;  // 0x8(0xC)
	uint8_t  RotationOrder;  // 0x14(0x1)
	char pad_21[11];  // 0x15(0xB)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
// Size: 0x160(Inherited: 0x68) 
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
	struct FRigElementKey Subject;  // 0x68(0xC)
	int32_t ParentIndex;  // 0x74(0x4)
	struct FRigElementKeyCollection Parents;  // 0x78(0x10)
	char pad_136[8];  // 0x88(0x8)
	struct FTransform InitialGlobalTransform;  // 0x90(0x30)
	float Weight;  // 0xC0(0x4)
	char pad_196[12];  // 0xC4(0xC)
	struct FTransform Transform;  // 0xD0(0x30)
	char pad_256_1 : 7;  // 0x100(0x1)
	bool Switched : 1;  // 0x100(0x1)
	char pad_257[3];  // 0x101(0x3)
	struct FCachedRigElement CachedSubject;  // 0x104(0x14)
	struct FCachedRigElement CachedParent;  // 0x118(0x14)
	char pad_300[4];  // 0x12C(0x4)
	struct FTransform RelativeOffset;  // 0x130(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathColorMul
// Size: 0x38(Inherited: 0x38) 
struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
	struct FVector Axis;  // 0x8(0xC)
	float angle;  // 0x14(0x4)
	char pad_24[8];  // 0x18(0x8)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathColorAdd
// Size: 0x38(Inherited: 0x38) 
struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	struct FTransform Global;  // 0x40(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathColorFromFloat
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
	float Value;  // 0x8(0x4)
	struct FLinearColor Result;  // 0xC(0x10)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	float C;  // 0x10(0x4)
	float AlphaAngle;  // 0x14(0x4)
	float BetaAngle;  // 0x18(0x4)
	float GammaAngle;  // 0x1C(0x4)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bValid : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatAtan
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatAcos
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatTan
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatCos
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatDeg
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
// Size: 0xA0(Inherited: 0x8) 
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Condition : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FTransform IfTrue;  // 0x10(0x30)
	struct FTransform IfFalse;  // 0x40(0x30)
	struct FTransform Result;  // 0x70(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Rotation;  // 0x10(0x10)
	struct FQuat World;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Condition : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float IfTrue;  // 0xC(0x4)
	float IfFalse;  // 0x10(0x4)
	float Result;  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	float Tolerance;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool Result : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatGreater
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	struct FVector Direction;  // 0x40(0xC)
	struct FVector Result;  // 0x4C(0xC)
	char pad_88[8];  // 0x58(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
	struct FVector Location;  // 0x8(0xC)
	struct FVector World;  // 0x14(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MultiplyTransform
// Size: 0xA0(Inherited: 0xA0) 
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatEquals
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatMul
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatToInt
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	int32_t Result;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatRound
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	float Result;  // 0xC(0x4)
	int32_t Int;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
// Size: 0xF0(Inherited: 0xD0) 
struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets;  // 0xD0(0x10)
	float Output;  // 0xE0(0x4)
	char pad_228[12];  // 0xE4(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatFloor
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
{
	float Value;  // 0x8(0x4)
	float Result;  // 0xC(0x4)
	int32_t Int;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatAbs
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
// Size: 0xB0(Inherited: 0x0) 
struct FRigUnit_SpringIK_WorkData
{
	struct TArray<struct FCachedRigElement> CachedBones;  // 0x0(0x10)
	struct FCachedRigElement CachedPoleVector;  // 0x10(0x14)
	char pad_36[4];  // 0x24(0x4)
	struct TArray<struct FTransform> Transforms;  // 0x28(0x10)
	struct FCRSimPointContainer Simulation;  // 0x38(0x78)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
	float A;  // 0x8(0x4)
	float B;  // 0xC(0x4)
	float Result;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function ControlRig.ControlRigGizmoActor.SetEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInEnabled : 1;  // 0x0(0x1)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatMax
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatMin
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatMod
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathIntMax
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatDiv
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatSub
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatAdd
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{

}; 
// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
// Size: 0x50(Inherited: 0x0) 
struct FSetInitialBoneTransform
{
	struct FName BoneName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform InitialTransform;  // 0x10(0x30)
	uint8_t  Space;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool bPropagateToChildren : 1;  // 0x41(0x1)
	char pad_66[14];  // 0x42(0xE)

}; 
// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
// Size: 0x28(Inherited: 0x0) 
struct FAddMappedSkeletalMesh
{
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x0(0x8)
	struct TArray<struct FControlRigComponentMappedBone> Bones;  // 0x8(0x10)
	struct TArray<struct FControlRigComponentMappedCurve> Curves;  // 0x18(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{

}; 
// Function ControlRig.ControlRigComponent.Update
// Size: 0x4(Inherited: 0x0) 
struct FUpdate
{
	float DeltaTime;  // 0x0(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
// Size: 0xB0(Inherited: 0x8) 
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	float SecondsAgo;  // 0x40(0x4)
	int32_t BufferSize;  // 0x44(0x4)
	float TimeRange;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)
	struct FTransform Result;  // 0x50(0x30)
	struct TArray<struct FTransform> Buffer;  // 0x80(0x10)
	struct TArray<float> DeltaTimes;  // 0x90(0x10)
	int32_t LastInsertIndex;  // 0xA0(0x4)
	int32_t UpperBound;  // 0xA4(0x4)
	char pad_168[8];  // 0xA8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorRound
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
	struct FVector Root;  // 0x8(0xC)
	struct FVector PoleVector;  // 0x14(0xC)
	struct FVector Effector;  // 0x20(0xC)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool bEnableStretch : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	float StretchStartRatio;  // 0x30(0x4)
	float StretchMaximumRatio;  // 0x34(0x4)
	float BoneALength;  // 0x38(0x4)
	float BoneBLength;  // 0x3C(0x4)
	struct FVector Elbow;  // 0x40(0xC)
	char pad_76[4];  // 0x4C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathIntBase : public FRigUnit_MathBase
{

}; 
// ScriptStruct ControlRig.RigUnit_MathIntLessEqual
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
{
	int32_t A;  // 0x8(0x4)
	int32_t B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
	float Value;  // 0x8(0x4)
	struct FVector Result;  // 0xC(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{
	int32_t A;  // 0x8(0x4)
	int32_t B;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Result : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntClamp
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{
	int32_t Value;  // 0x8(0x4)
	int32_t Minimum;  // 0xC(0x4)
	int32_t Maximum;  // 0x10(0x4)
	int32_t Result;  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntSign
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
{

}; 
// ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
// Size: 0x10(Inherited: 0x0) 
struct FMathRBFInterpolateVectorFloat_Target
{
	struct FVector Target;  // 0x0(0xC)
	float Value;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
// Size: 0x90(Inherited: 0x68) 
struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries;  // 0x68(0x10)
	float Weight;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x80(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Argument;  // 0x10(0x10)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntAbs
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathIntNegate
// Size: 0x10(Inherited: 0x10) 
struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// Size: 0x40(Inherited: 0x0) 
struct FRigUnit_ModifyBoneTransforms_PerBone
{
	struct FName Bone;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
// Size: 0x18(Inherited: 0x8) 
struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
{
	int32_t A;  // 0x8(0x4)
	int32_t B;  // 0xC(0x4)
	int32_t Result;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
// Size: 0xD0(Inherited: 0xB0) 
struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets;  // 0xB0(0x10)
	float Output;  // 0xC0(0x4)
	char pad_196[12];  // 0xC4(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_SetControlInteger
// Size: 0x90(Inherited: 0x68) 
struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	int32_t Weight;  // 0x70(0x4)
	int32_t IntegerValue;  // 0x74(0x4)
	struct FCachedRigElement CachedControlIndex;  // 0x78(0x14)
	char pad_140[4];  // 0x8C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntMod
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
// Size: 0xF0(Inherited: 0xD0) 
struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets;  // 0xD0(0x10)
	struct FQuat Output;  // 0xE0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
// Size: 0xA0(Inherited: 0x8) 
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform A;  // 0x10(0x30)
	struct FTransform B;  // 0x40(0x30)
	struct FTransform Result;  // 0x70(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathIntDiv
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathIntSub
// Size: 0x18(Inherited: 0x18) 
struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
	uint8_t  RotationOrder;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Quaternion;  // 0x10(0x10)
	char EAxis Axis;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FVector Result;  // 0x24(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat A;  // 0x10(0x10)
	struct FQuat B;  // 0x20(0x10)
	float Result;  // 0x30(0x4)
	char pad_52[12];  // 0x34(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
// Size: 0x1B0(Inherited: 0x68) 
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey ItemA;  // 0x68(0xC)
	struct FRigElementKey ItemB;  // 0x74(0xC)
	struct FRigElementKey EffectorItem;  // 0x80(0xC)
	char pad_140[4];  // 0x8C(0x4)
	struct FTransform Effector;  // 0x90(0x30)
	struct FVector PrimaryAxis;  // 0xC0(0xC)
	struct FVector SecondaryAxis;  // 0xCC(0xC)
	float SecondaryAxisWeight;  // 0xD8(0x4)
	struct FVector PoleVector;  // 0xDC(0xC)
	uint8_t  PoleVectorKind;  // 0xE8(0x1)
	char pad_233[3];  // 0xE9(0x3)
	struct FRigElementKey PoleVectorSpace;  // 0xEC(0xC)
	char pad_248_1 : 7;  // 0xF8(0x1)
	bool bEnableStretch : 1;  // 0xF8(0x1)
	char pad_249[3];  // 0xF9(0x3)
	float StretchStartRatio;  // 0xFC(0x4)
	float StretchMaximumRatio;  // 0x100(0x4)
	float Weight;  // 0x104(0x4)
	float ItemALength;  // 0x108(0x4)
	float ItemBLength;  // 0x10C(0x4)
	char pad_272_1 : 7;  // 0x110(0x1)
	bool bPropagateToChildren : 1;  // 0x110(0x1)
	char pad_273[15];  // 0x111(0xF)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;  // 0x120(0x40)
	struct FCachedRigElement CachedItemAIndex;  // 0x160(0x14)
	struct FCachedRigElement CachedItemBIndex;  // 0x174(0x14)
	struct FCachedRigElement CachedEffectorItemIndex;  // 0x188(0x14)
	struct FCachedRigElement CachedPoleVectorSpaceIndex;  // 0x19C(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	struct FTransform Result;  // 0x40(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Condition : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FQuat IfTrue;  // 0x10(0x10)
	struct FQuat IfFalse;  // 0x20(0x10)
	struct FQuat Result;  // 0x30(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat A;  // 0x10(0x10)
	struct FQuat B;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool Result : 1;  // 0x30(0x1)
	char pad_49[15];  // 0x31(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat A;  // 0x10(0x10)
	struct FQuat B;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool Result : 1;  // 0x30(0x1)
	char pad_49[15];  // 0x31(0xF)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat A;  // 0x10(0x10)
	struct FQuat B;  // 0x20(0x10)
	float T;  // 0x30(0x4)
	char pad_52[12];  // 0x34(0xC)
	struct FQuat Result;  // 0x40(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat A;  // 0x10(0x10)
	struct FQuat B;  // 0x20(0x10)
	struct FQuat Result;  // 0x30(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Value;  // 0x10(0x10)
	struct FRotator Result;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Value;  // 0x10(0x10)
	uint8_t  RotationOrder;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FVector Result;  // 0x24(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	struct FQuat Result;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
// Size: 0x60(Inherited: 0x0) 
struct FRigUnit_TransformConstraint_WorkData
{
	struct TArray<struct FConstraintData> ConstraintData;  // 0x0(0x10)
	struct TMap<int32_t, int32_t> ConstraintDataToTargets;  // 0x10(0x50)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
{

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
// Size: 0x90(Inherited: 0x0) 
struct FRigUnit_MathRBFInterpolateQuatWorkData
{
	char pad_0[144];  // 0x0(0x90)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
// Size: 0xB0(Inherited: 0x8) 
struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{
	struct FVector Input;  // 0x8(0xC)
	uint8_t  DistanceFunction;  // 0x14(0x1)
	uint8_t  SmoothingFunction;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)
	float SmoothingRadius;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bNormalizeOutput : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData;  // 0x20(0x90)

}; 
// ScriptStruct ControlRig.RigUnit_NameBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_NameBase : public FRigUnit
{

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
// Size: 0xF0(Inherited: 0xB0) 
struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorXform_Target> Targets;  // 0xB0(0x10)
	struct FTransform Output;  // 0xC0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Condition : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FVector IfTrue;  // 0xC(0xC)
	struct FVector IfFalse;  // 0x18(0xC)
	struct FVector Result;  // 0x24(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
// Size: 0xD0(Inherited: 0xB0) 
struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorColor_Target> Targets;  // 0xB0(0x10)
	struct FLinearColor Output;  // 0xC0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
// Size: 0xD0(Inherited: 0xB0) 
struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{
	struct TArray<struct FMathRBFInterpolateVectorVector_Target> Targets;  // 0xB0(0x10)
	struct FVector Output;  // 0xC0(0xC)
	char pad_204[4];  // 0xCC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorAbs
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
// Size: 0x18(Inherited: 0x0) 
struct FMathRBFInterpolateVectorVector_Target
{
	struct FVector Target;  // 0x0(0xC)
	struct FVector Value;  // 0xC(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
// Size: 0x110(Inherited: 0xD0) 
struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatXform_Target> Targets;  // 0xD0(0x10)
	struct FTransform Output;  // 0xE0(0x30)

}; 
// ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
// Size: 0x20(Inherited: 0x0) 
struct FMathRBFInterpolateQuatQuat_Target
{
	struct FQuat Target;  // 0x0(0x10)
	struct FQuat Value;  // 0x10(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
	struct FEulerTransform EulerTransform;  // 0x8(0x24)
	char pad_44[4];  // 0x2C(0x4)
	struct FTransform Result;  // 0x30(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
// Size: 0xF0(Inherited: 0xD0) 
struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{
	struct TArray<struct FMathRBFInterpolateQuatColor_Target> Targets;  // 0xD0(0x10)
	struct FLinearColor Output;  // 0xE0(0x10)

}; 
// Function ControlRig.ControlRigComponent.OnPostInitialize
// Size: 0x8(Inherited: 0x0) 
struct FOnPostInitialize
{
	struct UControlRigComponent* Component;  // 0x0(0x8)

}; 
// ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
// Size: 0x20(Inherited: 0x0) 
struct FMathRBFInterpolateQuatColor_Target
{
	struct FQuat Target;  // 0x0(0x10)
	struct FLinearColor Value;  // 0x10(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
// Size: 0x140(Inherited: 0x68) 
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	uint8_t  BaseTransformSpace;  // 0x74(0x1)
	char pad_117[11];  // 0x75(0xB)
	struct FTransform BaseTransform;  // 0x80(0x30)
	struct FRigElementKey BaseItem;  // 0xB0(0xC)
	char pad_188[4];  // 0xBC(0x4)
	struct TArray<struct FConstraintTarget> Targets;  // 0xC0(0x10)
	char pad_208_1 : 7;  // 0xD0(0x1)
	bool bUseInitialTransforms : 1;  // 0xD0(0x1)
	char pad_209[7];  // 0xD1(0x7)
	struct FRigUnit_TransformConstraint_WorkData WorkData;  // 0xD8(0x60)
	char pad_312[8];  // 0x138(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
// Size: 0x90(Inherited: 0x68) 
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries;  // 0x68(0x10)
	float Weight;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x80(0x10)

}; 
// ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
// Size: 0x20(Inherited: 0x0) 
struct FMathRBFInterpolateQuatVector_Target
{
	struct FQuat Target;  // 0x0(0x10)
	struct FVector Value;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
// Size: 0xD0(Inherited: 0x8) 
struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	char EAxis Axis;  // 0x40(0x1)
	char EControlRigClampSpatialMode Type;  // 0x41(0x1)
	char pad_66[2];  // 0x42(0x2)
	float Minimum;  // 0x44(0x4)
	float Maximum;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)
	struct FTransform Space;  // 0x50(0x30)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bDrawDebug : 1;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	struct FLinearColor DebugColor;  // 0x84(0x10)
	float DebugThickness;  // 0x94(0x4)
	char pad_152[8];  // 0x98(0x8)
	struct FTransform Result;  // 0xA0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
// Size: 0x90(Inherited: 0x8) 
struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
	struct FVector Location;  // 0x8(0xC)
	struct FVector Rotation;  // 0x14(0xC)
	uint8_t  RotationOrder;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FVector Scale;  // 0x24(0xC)
	struct FTransform Transform;  // 0x30(0x30)
	struct FEulerTransform EulerTransform;  // 0x60(0x24)
	char pad_132[12];  // 0x84(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	struct FVector Location;  // 0x40(0xC)
	struct FVector Result;  // 0x4C(0xC)
	char pad_88[8];  // 0x58(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
// Size: 0xA0(Inherited: 0x8) 
struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Local;  // 0x10(0x30)
	struct FTransform Parent;  // 0x40(0x30)
	struct FTransform Global;  // 0x70(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_MathTransformMul
// Size: 0xA0(Inherited: 0xA0) 
struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_SetControlVisibility
// Size: 0xA0(Inherited: 0x68) 
struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	char pad_116[4];  // 0x74(0x4)
	struct FString Pattern;  // 0x78(0x10)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bVisible : 1;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x90(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorSign
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{

}; 
// ScriptStruct ControlRig.RigUnit_MathIntersectPlane
// Size: 0x48(Inherited: 0x8) 
struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{
	struct FVector Start;  // 0x8(0xC)
	struct FVector Direction;  // 0x14(0xC)
	struct FVector PlanePoint;  // 0x20(0xC)
	struct FVector PlaneNormal;  // 0x2C(0xC)
	struct FVector Result;  // 0x38(0xC)
	float Distance;  // 0x44(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
// Size: 0x90(Inherited: 0x68) 
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries;  // 0x68(0x10)
	float Weight;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x80(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool Result : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorMirror
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	struct FVector Normal;  // 0x14(0xC)
	struct FVector Result;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorClampLength
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	float MinimumLength;  // 0x14(0x4)
	float MaximumLength;  // 0x18(0x4)
	struct FVector Result;  // 0x1C(0xC)

}; 
// Function ControlRig.ControlRigComponent.SetControlRotator
// Size: 0x18(Inherited: 0x0) 
struct FSetControlRotator
{
	struct FName ControlName;  // 0x0(0x8)
	struct FRotator Value;  // 0x8(0xC)
	uint8_t  Space;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorSetLength
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{
	struct FVector Value;  // 0x8(0xC)
	float Length;  // 0x14(0x4)
	struct FVector Result;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	struct FVector Result;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorCross
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorDistance
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	float Result;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorRad
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorEquals
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
	struct FVector A;  // 0x8(0xC)
	struct FVector B;  // 0x14(0xC)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool Result : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorFloor
// Size: 0x20(Inherited: 0x20) 
struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorMax
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorMin
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorMod
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorDiv
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_PrepareForExecution
// Size: 0x68(Inherited: 0x8) 
struct FRigUnit_PrepareForExecution : public FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorSub
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_MathVectorAdd
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
{

}; 
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
// Size: 0x98(Inherited: 0x68) 
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;  // 0x68(0x10)
	float Weight;  // 0x78(0x4)
	float WeightMinimum;  // 0x7C(0x4)
	float WeightMaximum;  // 0x80(0x4)
	uint8_t  mode;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData;  // 0x88(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
// Size: 0x10(Inherited: 0x0) 
struct FRigUnit_ModifyTransforms_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ModifyTransforms
// Size: 0x98(Inherited: 0x68) 
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
	struct TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify;  // 0x68(0x10)
	float Weight;  // 0x78(0x4)
	float WeightMinimum;  // 0x7C(0x4)
	float WeightMaximum;  // 0x80(0x4)
	uint8_t  mode;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)
	struct FRigUnit_ModifyTransforms_WorkData WorkData;  // 0x88(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
// Size: 0x40(Inherited: 0x0) 
struct FRigUnit_ModifyTransforms_PerItem
{
	struct FRigElementKey Item;  // 0x0(0xC)
	char pad_12[4];  // 0xC(0x4)
	struct FTransform Transform;  // 0x10(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_Contains
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_Contains : public FRigUnit_NameBase
{
	struct FName Name;  // 0x8(0x8)
	struct FName Search;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool Result : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_EndsWith
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_EndsWith : public FRigUnit_NameBase
{
	struct FName Name;  // 0x8(0x8)
	struct FName Ending;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool Result : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct ControlRig.RigUnit_NameReplace
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_NameReplace : public FRigUnit_NameBase
{
	struct FName Name;  // 0x8(0x8)
	struct FName Old;  // 0x10(0x8)
	struct FName New;  // 0x18(0x8)
	struct FName Result;  // 0x20(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_NameTruncate
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_NameTruncate : public FRigUnit_NameBase
{
	struct FName Name;  // 0x8(0x8)
	int32_t Count;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool FromEnd : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FName Remainder;  // 0x18(0x8)
	struct FName Chopped;  // 0x20(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetControlVector
// Size: 0x98(Inherited: 0x68) 
struct FRigUnit_SetControlVector : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	float Weight;  // 0x70(0x4)
	struct FVector Vector;  // 0x74(0xC)
	uint8_t  Space;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	struct FCachedRigElement CachedControlIndex;  // 0x84(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_NoiseFloat
// Size: 0x28(Inherited: 0x8) 
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
	float Value;  // 0x8(0x4)
	float Speed;  // 0xC(0x4)
	float Frequency;  // 0x10(0x4)
	float Minimum;  // 0x14(0x4)
	float Maximum;  // 0x18(0x4)
	float Result;  // 0x1C(0x4)
	float Time;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_NameConcat
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_NameConcat : public FRigUnit_NameBase
{
	struct FName A;  // 0x8(0x8)
	struct FName B;  // 0x10(0x8)
	struct FName Result;  // 0x18(0x8)

}; 
// Function ControlRig.ControlRigComponent.GetControlTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetControlTransform
{
	struct FName ControlName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_NoiseVector
// Size: 0x50(Inherited: 0x8) 
struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
	struct FVector position;  // 0x8(0xC)
	struct FVector Speed;  // 0x14(0xC)
	struct FVector Frequency;  // 0x20(0xC)
	float Minimum;  // 0x2C(0x4)
	float Maximum;  // 0x30(0x4)
	struct FVector Result;  // 0x34(0xC)
	struct FVector Time;  // 0x40(0xC)
	char pad_76[4];  // 0x4C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
// Size: 0xD0(Inherited: 0x68) 
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	char pad_116[12];  // 0x74(0xC)
	struct FTransform OffsetTransform;  // 0x80(0x30)
	float Weight;  // 0xB0(0x4)
	char pad_180_1 : 7;  // 0xB4(0x1)
	bool bPropagateToChildren : 1;  // 0xB4(0x1)
	char pad_181[3];  // 0xB5(0x3)
	struct FCachedRigElement CachedIndex;  // 0xB8(0x14)
	char pad_204[4];  // 0xCC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
// Size: 0x88(Inherited: 0x68) 
struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
	int32_t NumberOfMeasurements;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)
	struct FString prefix;  // 0x70(0x10)
	float AccumulatedTime;  // 0x80(0x4)
	int32_t MeasurementsLeft;  // 0x84(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
// Size: 0xB0(Inherited: 0x8) 
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
	struct FRigElementKey Child;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bChildInitial : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FRigElementKey OldParent;  // 0x18(0xC)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bOldParentInitial : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	struct FRigElementKey NewParent;  // 0x28(0xC)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bNewParentInitial : 1;  // 0x34(0x1)
	char pad_53[11];  // 0x35(0xB)
	struct FTransform Transform;  // 0x40(0x30)
	struct FCachedRigElement CachedChild;  // 0x70(0x14)
	struct FCachedRigElement CachedOldParent;  // 0x84(0x14)
	struct FCachedRigElement CachedNewParent;  // 0x98(0x14)
	char pad_172[4];  // 0xAC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
	struct FVector Axis;  // 0x8(0xC)
	char pad_20[12];  // 0x14(0xC)
	struct FQuat Argument;  // 0x20(0x10)
	float angle;  // 0x30(0x4)
	char pad_52[12];  // 0x34(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Argument;  // 0x10(0x10)
	struct FVector Axis;  // 0x20(0xC)
	float angle;  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_InverseQuaterion
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{

}; 
// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Argument0;  // 0x10(0x10)
	struct FQuat Argument1;  // 0x20(0x10)
	struct FQuat Result;  // 0x30(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_RandomVector
// Size: 0x38(Inherited: 0x8) 
struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
	int32_t Seed;  // 0x8(0x4)
	float Minimum;  // 0xC(0x4)
	float Maximum;  // 0x10(0x4)
	float Duration;  // 0x14(0x4)
	struct FVector Result;  // 0x18(0xC)
	struct FVector LastResult;  // 0x24(0xC)
	int32_t LastSeed;  // 0x30(0x4)
	float TimeLeft;  // 0x34(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SendEvent
// Size: 0x80(Inherited: 0x68) 
struct FRigUnit_SendEvent : public FRigUnitMutable
{
	uint8_t  Event;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	struct FRigElementKey Item;  // 0x6C(0xC)
	float OffsetInSeconds;  // 0x78(0x4)
	char pad_124_1 : 7;  // 0x7C(0x1)
	bool bEnable : 1;  // 0x7C(0x1)
	char pad_125_1 : 7;  // 0x7D(0x1)
	bool bOnlyDuringInteraction : 1;  // 0x7D(0x1)
	char pad_126[2];  // 0x7E(0x2)

}; 
// ScriptStruct ControlRig.RigUnit_SequenceExecution
// Size: 0x1E8(Inherited: 0x8) 
struct FRigUnit_SequenceExecution : public FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext;  // 0x8(0x60)
	struct FControlRigExecuteContext A;  // 0x68(0x60)
	struct FControlRigExecuteContext B;  // 0xC8(0x60)
	struct FControlRigExecuteContext C;  // 0x128(0x60)
	struct FControlRigExecuteContext D;  // 0x188(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_SetControlColor
// Size: 0x98(Inherited: 0x68) 
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	struct FLinearColor Color;  // 0x70(0x10)
	struct FCachedRigElement CachedControlIndex;  // 0x80(0x14)
	char pad_148[4];  // 0x94(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SetControlOffset
// Size: 0xC0(Inherited: 0x68) 
struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	struct FTransform Offset;  // 0x70(0x30)
	uint8_t  Space;  // 0xA0(0x1)
	char pad_161[3];  // 0xA1(0x3)
	struct FCachedRigElement CachedControlIndex;  // 0xA4(0x14)
	char pad_184[8];  // 0xB8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
// Size: 0x10(Inherited: 0x0) 
struct FRigUnit_SetMultiControlVector2D_Entry
{
	struct FName Control;  // 0x0(0x8)
	struct FVector2D Vector;  // 0x8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
// Size: 0xC(Inherited: 0x0) 
struct FRigUnit_SetMultiControlInteger_Entry
{
	struct FName Control;  // 0x0(0x8)
	int32_t IntegerValue;  // 0x8(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SetControlFloat
// Size: 0x90(Inherited: 0x68) 
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	float Weight;  // 0x70(0x4)
	float FloatValue;  // 0x74(0x4)
	struct FCachedRigElement CachedControlIndex;  // 0x78(0x14)
	char pad_140[4];  // 0x8C(0x4)

}; 
// Function ControlRig.ControlRig.GetInteractionRig
// Size: 0x8(Inherited: 0x0) 
struct FGetInteractionRig
{
	struct UControlRig* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
// Size: 0x88(Inherited: 0x68) 
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
	struct TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries;  // 0x68(0x10)
	struct TArray<struct FCachedRigElement> CachedControlIndices;  // 0x78(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
// Size: 0xC(Inherited: 0x0) 
struct FRigUnit_SetMultiControlBool_Entry
{
	struct FName Control;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool BoolValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function ControlRig.ControlRigGizmoActor.OnTransformChanged
// Size: 0x30(Inherited: 0x0) 
struct FOnTransformChanged
{
	struct FTransform NewTransform;  // 0x0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_SetControlBool
// Size: 0x88(Inherited: 0x68) 
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
	struct FName Control;  // 0x68(0x8)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool BoolValue : 1;  // 0x70(0x1)
	char pad_113[3];  // 0x71(0x3)
	struct FCachedRigElement CachedControlIndex;  // 0x74(0x14)

}; 
// Function ControlRig.ControlRigComponent.AddMappedComponents
// Size: 0x10(Inherited: 0x0) 
struct FAddMappedComponents
{
	struct TArray<struct FControlRigComponentMappedComponent> Components;  // 0x0(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_SetCurveValue
// Size: 0x88(Inherited: 0x68) 
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
	struct FName Curve;  // 0x68(0x8)
	float Value;  // 0x70(0x4)
	struct FCachedRigElement CachedCurveIndex;  // 0x74(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
// Size: 0xE0(Inherited: 0x68) 
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
	struct FName Bone;  // 0x68(0x8)
	struct FName Space;  // 0x70(0x8)
	char pad_120[8];  // 0x78(0x8)
	struct FTransform Transform;  // 0x80(0x30)
	float Weight;  // 0xB0(0x4)
	char pad_180_1 : 7;  // 0xB4(0x1)
	bool bPropagateToChildren : 1;  // 0xB4(0x1)
	char pad_181[3];  // 0xB5(0x3)
	struct FCachedRigElement CachedBone;  // 0xB8(0x14)
	struct FCachedRigElement CachedSpaceIndex;  // 0xCC(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
// Size: 0xF0(Inherited: 0x68) 
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
	struct FName SpaceName;  // 0x68(0x8)
	struct FTransform Transform;  // 0x70(0x30)
	struct FTransform Result;  // 0xA0(0x30)
	uint8_t  Space;  // 0xD0(0x1)
	char pad_209[3];  // 0xD1(0x3)
	struct FCachedRigElement CachedSpaceIndex;  // 0xD4(0x14)
	char pad_232[8];  // 0xE8(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
// Size: 0xD0(Inherited: 0x68) 
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
	struct FName Space;  // 0x68(0x8)
	float Weight;  // 0x70(0x4)
	char pad_116[12];  // 0x74(0xC)
	struct FTransform Transform;  // 0x80(0x30)
	uint8_t  SpaceType;  // 0xB0(0x1)
	char pad_177[3];  // 0xB1(0x3)
	struct FCachedRigElement CachedSpaceIndex;  // 0xB4(0x14)
	char pad_200[8];  // 0xC8(0x8)

}; 
// Function ControlRig.ControlRigGizmoActor.OnHoveredChanged
// Size: 0x1(Inherited: 0x0) 
struct FOnHoveredChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsSelected : 1;  // 0x0(0x1)

}; 
// ScriptStruct ControlRig.RigUnit_SetScale
// Size: 0xA0(Inherited: 0x68) 
struct FRigUnit_SetScale : public FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	uint8_t  Space;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)
	struct FVector Scale;  // 0x78(0xC)
	float Weight;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bPropagateToChildren : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	struct FCachedRigElement CachedIndex;  // 0x8C(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_SetRotation
// Size: 0xB0(Inherited: 0x68) 
struct FRigUnit_SetRotation : public FRigUnitMutable
{
	struct FRigElementKey Item;  // 0x68(0xC)
	uint8_t  Space;  // 0x74(0x1)
	char pad_117[11];  // 0x75(0xB)
	struct FQuat Rotation;  // 0x80(0x10)
	float Weight;  // 0x90(0x4)
	char pad_148_1 : 7;  // 0x94(0x1)
	bool bPropagateToChildren : 1;  // 0x94(0x1)
	char pad_149[3];  // 0x95(0x3)
	struct FCachedRigElement CachedIndex;  // 0x98(0x14)
	char pad_172[4];  // 0xAC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
// Size: 0xC8(Inherited: 0x68) 
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x68(0x10)
	float SlideAmount;  // 0x78(0x4)
	char pad_124_1 : 7;  // 0x7C(0x1)
	bool bPropagateToChildren : 1;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	struct FRigUnit_SlideChain_WorkData WorkData;  // 0x80(0x48)

}; 
// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
// Size: 0x48(Inherited: 0x0) 
struct FRigUnit_SlideChain_WorkData
{
	float ChainLength;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<float> ItemSegments;  // 0x8(0x10)
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x18(0x10)
	struct TArray<struct FTransform> Transforms;  // 0x28(0x10)
	struct TArray<struct FTransform> BlendedTransforms;  // 0x38(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_SecondsToFrames
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{
	float Seconds;  // 0x8(0x4)
	float Frames;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_FramesToSeconds
// Size: 0x10(Inherited: 0x8) 
struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
{
	float Frames;  // 0x8(0x4)
	float Seconds;  // 0xC(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
// Size: 0x48(Inherited: 0x8) 
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
	float Value;  // 0x8(0x4)
	float SecondsAgo;  // 0xC(0x4)
	int32_t BufferSize;  // 0x10(0x4)
	float TimeRange;  // 0x14(0x4)
	float Result;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct TArray<float> Buffer;  // 0x20(0x10)
	struct TArray<float> DeltaTimes;  // 0x30(0x10)
	int32_t LastInsertIndex;  // 0x40(0x4)
	int32_t UpperBound;  // 0x44(0x4)

}; 
// ScriptStruct ControlRig.ConstraintTarget
// Size: 0x40(Inherited: 0x0) 
struct FConstraintTarget
{
	struct FTransform Transform;  // 0x0(0x30)
	float Weight;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bMaintainOffset : 1;  // 0x34(0x1)
	struct FTransformFilter Filter;  // 0x35(0x9)
	char pad_62[2];  // 0x3E(0x2)

}; 
// ScriptStruct ControlRig.RigUnit_TransformConstraint
// Size: 0x130(Inherited: 0x68) 
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
	struct FName Bone;  // 0x68(0x8)
	uint8_t  BaseTransformSpace;  // 0x70(0x1)
	char pad_113[15];  // 0x71(0xF)
	struct FTransform BaseTransform;  // 0x80(0x30)
	struct FName BaseBone;  // 0xB0(0x8)
	struct TArray<struct FConstraintTarget> Targets;  // 0xB8(0x10)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool bUseInitialTransforms : 1;  // 0xC8(0x1)
	char pad_201[7];  // 0xC9(0x7)
	struct FRigUnit_TransformConstraint_WorkData WorkData;  // 0xD0(0x60)

}; 
// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
// Size: 0xD0(Inherited: 0x68) 
struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKeyCollection Items;  // 0x68(0x10)
	struct FVector TwistAxis;  // 0x78(0xC)
	struct FVector PoleAxis;  // 0x84(0xC)
	uint8_t  TwistEaseType;  // 0x90(0x1)
	char pad_145[3];  // 0x91(0x3)
	float Weight;  // 0x94(0x4)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bPropagateToChildren : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)
	struct FRigUnit_TwistBones_WorkData WorkData;  // 0xA0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
// Size: 0x30(Inherited: 0x0) 
struct FRigUnit_TwistBones_WorkData
{
	struct TArray<struct FCachedRigElement> CachedItems;  // 0x0(0x10)
	struct TArray<float> ItemRatios;  // 0x10(0x10)
	struct TArray<struct FTransform> ItemTransforms;  // 0x20(0x10)

}; 
// ScriptStruct ControlRig.RigUnit_TwistBones
// Size: 0xD0(Inherited: 0x68) 
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone;  // 0x68(0x8)
	struct FName EndBone;  // 0x70(0x8)
	struct FVector TwistAxis;  // 0x78(0xC)
	struct FVector PoleAxis;  // 0x84(0xC)
	uint8_t  TwistEaseType;  // 0x90(0x1)
	char pad_145[3];  // 0x91(0x3)
	float Weight;  // 0x94(0x4)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bPropagateToChildren : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)
	struct FRigUnit_TwistBones_WorkData WorkData;  // 0xA0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
// Size: 0x20(Inherited: 0x8) 
struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
	struct FVector Location;  // 0x8(0xC)
	struct FVector Global;  // 0x14(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
// Size: 0x220(Inherited: 0x68) 
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
	struct FName StartJoint;  // 0x68(0x8)
	struct FName EndJoint;  // 0x70(0x8)
	struct FVector PoleTarget;  // 0x78(0xC)
	float Spin;  // 0x84(0x4)
	char pad_136[8];  // 0x88(0x8)
	struct FTransform EndEffector;  // 0x90(0x30)
	float IKBlend;  // 0xC0(0x4)
	char pad_196[12];  // 0xC4(0xC)
	struct FTransform StartJointFKTransform;  // 0xD0(0x30)
	struct FTransform MidJointFKTransform;  // 0x100(0x30)
	struct FTransform EndJointFKTransform;  // 0x130(0x30)
	float PreviousFKIKBlend;  // 0x160(0x4)
	char pad_356[12];  // 0x164(0xC)
	struct FTransform StartJointIKTransform;  // 0x170(0x30)
	struct FTransform MidJointIKTransform;  // 0x1A0(0x30)
	struct FTransform EndJointIKTransform;  // 0x1D0(0x30)
	int32_t StartJointIndex;  // 0x200(0x4)
	int32_t MidJointIndex;  // 0x204(0x4)
	int32_t EndJointIndex;  // 0x208(0x4)
	float UpperLimbLength;  // 0x20C(0x4)
	float LowerLimbLength;  // 0x210(0x4)
	char pad_532[12];  // 0x214(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Size: 0xE0(Inherited: 0x8) 
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Root;  // 0x10(0x30)
	struct FVector PoleVector;  // 0x40(0xC)
	char pad_76[4];  // 0x4C(0x4)
	struct FTransform Effector;  // 0x50(0x30)
	struct FVector PrimaryAxis;  // 0x80(0xC)
	struct FVector SecondaryAxis;  // 0x8C(0xC)
	float SecondaryAxisWeight;  // 0x98(0x4)
	char pad_156_1 : 7;  // 0x9C(0x1)
	bool bEnableStretch : 1;  // 0x9C(0x1)
	char pad_157[3];  // 0x9D(0x3)
	float StretchStartRatio;  // 0xA0(0x4)
	float StretchMaximumRatio;  // 0xA4(0x4)
	float BoneALength;  // 0xA8(0x4)
	float BoneBLength;  // 0xAC(0x4)
	struct FTransform Elbow;  // 0xB0(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// Size: 0x40(Inherited: 0x0) 
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Scale;  // 0x4(0x4)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform WorldOffset;  // 0x10(0x30)

}; 
// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetInitialBoneTransform
{
	struct FName BoneName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
// Size: 0x190(Inherited: 0x68) 
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
	struct FName BoneA;  // 0x68(0x8)
	struct FName BoneB;  // 0x70(0x8)
	struct FName EffectorBone;  // 0x78(0x8)
	struct FTransform Effector;  // 0x80(0x30)
	struct FVector PrimaryAxis;  // 0xB0(0xC)
	struct FVector SecondaryAxis;  // 0xBC(0xC)
	float SecondaryAxisWeight;  // 0xC8(0x4)
	struct FVector PoleVector;  // 0xCC(0xC)
	uint8_t  PoleVectorKind;  // 0xD8(0x1)
	char pad_217[3];  // 0xD9(0x3)
	struct FName PoleVectorSpace;  // 0xDC(0x8)
	char pad_228_1 : 7;  // 0xE4(0x1)
	bool bEnableStretch : 1;  // 0xE4(0x1)
	char pad_229[3];  // 0xE5(0x3)
	float StretchStartRatio;  // 0xE8(0x4)
	float StretchMaximumRatio;  // 0xEC(0x4)
	float Weight;  // 0xF0(0x4)
	float BoneALength;  // 0xF4(0x4)
	float BoneBLength;  // 0xF8(0x4)
	char pad_252_1 : 7;  // 0xFC(0x1)
	bool bPropagateToChildren : 1;  // 0xFC(0x1)
	char pad_253[3];  // 0xFD(0x3)
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;  // 0x100(0x40)
	struct FCachedRigElement CachedBoneAIndex;  // 0x140(0x14)
	struct FCachedRigElement CachedBoneBIndex;  // 0x154(0x14)
	struct FCachedRigElement CachedEffectorBoneIndex;  // 0x168(0x14)
	struct FCachedRigElement CachedPoleVectorSpaceIndex;  // 0x17C(0x14)

}; 
// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
	struct FVector Argument0;  // 0x8(0xC)
	struct FVector Argument1;  // 0x14(0xC)
	struct FVector Result;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{

}; 
// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
// Size: 0x30(Inherited: 0x30) 
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{

}; 
// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
// Size: 0x70(Inherited: 0x8) 
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
	struct FVector Target;  // 0x8(0xC)
	float Strength;  // 0x14(0x4)
	float Damp;  // 0x18(0x4)
	float Blend;  // 0x1C(0x4)
	struct FVector position;  // 0x20(0xC)
	struct FVector Velocity;  // 0x2C(0xC)
	struct FVector Acceleration;  // 0x38(0xC)
	struct FCRSimPoint Point;  // 0x44(0x28)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bInitialized : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)

}; 
// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bEnabled : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float Thickness;  // 0x44(0x4)
	float Scale;  // 0x48(0x4)
	struct FRigElementKey Space;  // 0x4C(0xC)
	char pad_88[8];  // 0x58(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Value;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bEnabled : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	float Thickness;  // 0x24(0x4)
	float Scale;  // 0x28(0x4)
	struct FRigElementKey Space;  // 0x2C(0xC)
	char pad_56[8];  // 0x38(0x8)

}; 
// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
	char pad_8[8];  // 0x8(0x8)
	struct FQuat Value;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bEnabled : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	float Thickness;  // 0x24(0x4)
	float Scale;  // 0x28(0x4)
	struct FName BoneSpace;  // 0x2C(0x8)
	char pad_52[12];  // 0x34(0xC)

}; 
// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
// Size: 0x40(Inherited: 0x8) 
struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
	struct FVector Value;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bEnabled : 1;  // 0x14(0x1)
	uint8_t  mode;  // 0x15(0x1)
	char pad_22[2];  // 0x16(0x2)
	struct FLinearColor Color;  // 0x18(0x10)
	float Thickness;  // 0x28(0x4)
	float Scale;  // 0x2C(0x4)
	struct FRigElementKey Space;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
// Size: 0x48(Inherited: 0x8) 
struct FRigUnit_SphereTraceWorld : public FRigUnit
{
	struct FVector Start;  // 0x8(0xC)
	struct FVector End;  // 0x14(0xC)
	char ECollisionChannel Channel;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	float Radius;  // 0x24(0x4)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bHit : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	struct FVector HitLocation;  // 0x2C(0xC)
	struct FVector HitNormal;  // 0x38(0xC)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function ControlRig.ControlRig.GetInteractionRigClass
// Size: 0x8(Inherited: 0x0) 
struct FGetInteractionRigClass
{
	UControlRig* ReturnValue;  // 0x0(0x8)

}; 
// Function ControlRig.ControlRig.SetInteractionRigClass
// Size: 0x8(Inherited: 0x0) 
struct FSetInteractionRigClass
{
	UControlRig* InInteractionRigClass;  // 0x0(0x8)

}; 
// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
// Size: 0x8(Inherited: 0x0) 
struct FAddMappedCompleteSkeletalMesh
{
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x0(0x8)

}; 
// Function ControlRig.ControlRigComponent.DoesElementExist
// Size: 0xC(Inherited: 0x0) 
struct FDoesElementExist
{
	struct FName Name;  // 0x0(0x8)
	uint8_t  ElementType;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ReturnValue : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)

}; 
// Function ControlRig.ControlRigComponent.GetAbsoluteTime
// Size: 0x4(Inherited: 0x0) 
struct FGetAbsoluteTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function ControlRig.ControlRigComponent.GetBoneTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetBoneTransform
{
	struct FName BoneName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// Function ControlRig.ControlRigComponent.GetControlBool
// Size: 0xC(Inherited: 0x0) 
struct FGetControlBool
{
	struct FName ControlName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function ControlRig.ControlRigComponent.GetControlOffset
// Size: 0x40(Inherited: 0x0) 
struct FGetControlOffset
{
	struct FName ControlName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// Function ControlRig.ControlRigComponent.GetControlPosition
// Size: 0x18(Inherited: 0x0) 
struct FGetControlPosition
{
	struct FName ControlName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FVector ReturnValue;  // 0xC(0xC)

}; 
// Function ControlRig.ControlRigComponent.GetControlRotator
// Size: 0x18(Inherited: 0x0) 
struct FGetControlRotator
{
	struct FName ControlName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FRotator ReturnValue;  // 0xC(0xC)

}; 
// Function ControlRig.ControlRigComponent.GetControlScale
// Size: 0x18(Inherited: 0x0) 
struct FGetControlScale
{
	struct FName ControlName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FVector ReturnValue;  // 0xC(0xC)

}; 
// Function ControlRig.ControlRigComponent.GetControlVector2D
// Size: 0x10(Inherited: 0x0) 
struct FGetControlVector2D
{
	struct FName ControlName;  // 0x0(0x8)
	struct FVector2D ReturnValue;  // 0x8(0x8)

}; 
// Function ControlRig.ControlRigComponent.GetElementNames
// Size: 0x18(Inherited: 0x0) 
struct FGetElementNames
{
	uint8_t  ElementType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FName> ReturnValue;  // 0x8(0x10)

}; 
// Function ControlRig.ControlRigComponent.GetSpaceTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetSpaceTransform
{
	struct FName SpaceName;  // 0x0(0x8)
	uint8_t  Space;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// Function ControlRig.ControlRigComponent.OnPostUpdate
// Size: 0x8(Inherited: 0x0) 
struct FOnPostUpdate
{
	struct UControlRigComponent* Component;  // 0x0(0x8)

}; 
// Function ControlRig.ControlRigComponent.OnPreSetup
// Size: 0x8(Inherited: 0x0) 
struct FOnPreSetup
{
	struct UControlRigComponent* Component;  // 0x0(0x8)

}; 
// Function ControlRig.ControlRigComponent.OnPreUpdate
// Size: 0x8(Inherited: 0x0) 
struct FOnPreUpdate
{
	struct UControlRigComponent* Component;  // 0x0(0x8)

}; 
// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
// Size: 0x8(Inherited: 0x0) 
struct FSetBoneInitialTransformsFromSkeletalMesh
{
	struct USkeletalMesh* InSkeletalMesh;  // 0x0(0x8)

}; 
// Function ControlRig.ControlRigComponent.SetBoneTransform
// Size: 0x50(Inherited: 0x0) 
struct FSetBoneTransform
{
	struct FName BoneName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	uint8_t  Space;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	float Weight;  // 0x44(0x4)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bPropagateToChildren : 1;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 
// Function ControlRig.ControlRigComponent.SetControlBool
// Size: 0xC(Inherited: 0x0) 
struct FSetControlBool
{
	struct FName ControlName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Value : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function ControlRig.ControlRigComponent.SetControlInt
// Size: 0xC(Inherited: 0x0) 
struct FSetControlInt
{
	struct FName ControlName;  // 0x0(0x8)
	int32_t Value;  // 0x8(0x4)

}; 
// Function ControlRig.ControlRigComponent.SetControlOffset
// Size: 0x50(Inherited: 0x0) 
struct FSetControlOffset
{
	struct FName ControlName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform OffsetTransform;  // 0x10(0x30)
	uint8_t  Space;  // 0x40(0x1)
	char pad_65[15];  // 0x41(0xF)

}; 
// Function ControlRig.ControlRigComponent.SetControlPosition
// Size: 0x18(Inherited: 0x0) 
struct FSetControlPosition
{
	struct FName ControlName;  // 0x0(0x8)
	struct FVector Value;  // 0x8(0xC)
	uint8_t  Space;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function ControlRig.ControlRigComponent.SetControlScale
// Size: 0x18(Inherited: 0x0) 
struct FSetControlScale
{
	struct FName ControlName;  // 0x0(0x8)
	struct FVector Value;  // 0x8(0xC)
	uint8_t  Space;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function ControlRig.ControlRigComponent.SetControlTransform
// Size: 0x50(Inherited: 0x0) 
struct FSetControlTransform
{
	struct FName ControlName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Value;  // 0x10(0x30)
	uint8_t  Space;  // 0x40(0x1)
	char pad_65[15];  // 0x41(0xF)

}; 
// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
// Size: 0x50(Inherited: 0x0) 
struct FSetInitialSpaceTransform
{
	struct FName SpaceName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform InitialTransform;  // 0x10(0x30)
	uint8_t  Space;  // 0x40(0x1)
	char pad_65[15];  // 0x41(0xF)

}; 
// Function ControlRig.ControlRigComponent.SetMappedElements
// Size: 0x10(Inherited: 0x0) 
struct FSetMappedElements
{
	struct TArray<struct FControlRigComponentMappedElement> NewMappedElements;  // 0x0(0x10)

}; 
// Function ControlRig.ControlRigGizmoActor.GetGlobalTransform
// Size: 0x30(Inherited: 0x0) 
struct FGetGlobalTransform
{
	struct FTransform ReturnValue;  // 0x0(0x30)

}; 
// Function ControlRig.ControlRigGizmoActor.IsEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ControlRig.ControlRigGizmoActor.IsSelectedInEditor
// Size: 0x1(Inherited: 0x0) 
struct FIsSelectedInEditor
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function ControlRig.ControlRigGizmoActor.OnManipulatingChanged
// Size: 0x1(Inherited: 0x0) 
struct FOnManipulatingChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsManipulating : 1;  // 0x0(0x1)

}; 
// Function ControlRig.ControlRigGizmoActor.OnSelectionChanged
// Size: 0x1(Inherited: 0x0) 
struct FOnSelectionChanged
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsSelected : 1;  // 0x0(0x1)

}; 
// Function ControlRig.ControlRigGizmoActor.SetGlobalTransform
// Size: 0x30(Inherited: 0x0) 
struct FSetGlobalTransform
{
	struct FTransform InTransform;  // 0x0(0x30)

}; 
// Function ControlRig.ControlRigGizmoActor.SetSelectable
// Size: 0x1(Inherited: 0x0) 
struct FSetSelectable
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInSelectable : 1;  // 0x0(0x1)

}; 
// Function ControlRig.ControlRigGizmoActor.SetSelected
// Size: 0x1(Inherited: 0x0) 
struct FSetSelected
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInSelected : 1;  // 0x0(0x1)

}; 
