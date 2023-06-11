#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkBase
// Size: 0x8(Inherited: 0x8) 
struct FRigUnit_LiveLinkBase : public FRigUnit
{

}; 
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
// Size: 0x90(Inherited: 0x8) 
struct FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase
{
	struct FName SubjectName;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDrawDebug : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FLinearColor DebugColor;  // 0x14(0x10)
	char pad_36[12];  // 0x24(0xC)
	struct FTransform DebugDrawOffset;  // 0x30(0x30)
	struct FTransform Transform;  // 0x60(0x30)

}; 
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
// Size: 0x60(Inherited: 0x8) 
struct FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase
{
	struct FSubjectFrameHandle SubjectFrame;  // 0x8(0x18)
	struct FName TransformName;  // 0x20(0x8)
	uint8_t  Space;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)
	struct FTransform Transform;  // 0x30(0x30)

}; 
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
// Size: 0x30(Inherited: 0x8) 
struct FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase
{
	struct FSubjectFrameHandle SubjectFrame;  // 0x8(0x18)
	struct FName ParameterName;  // 0x20(0x8)
	float Value;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
// Size: 0x80(Inherited: 0x8) 
struct FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase
{
	struct FName SubjectName;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bDrawDebug : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FLinearColor DebugColor;  // 0x14(0x10)
	char pad_36[12];  // 0x24(0xC)
	struct FTransform DebugDrawOffset;  // 0x30(0x30)
	struct FSubjectFrameHandle SubjectFrame;  // 0x60(0x18)
	char pad_120[8];  // 0x78(0x8)

}; 
