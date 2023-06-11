#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct InteractiveToolsFramework.InputRayHit
// Size: 0x28(Inherited: 0x0) 
struct FInputRayHit
{
	char pad_0[40];  // 0x0(0x28)

}; 
// ScriptStruct InteractiveToolsFramework.BrushStampData
// Size: 0xA8(Inherited: 0x0) 
struct FBrushStampData
{
	char pad_0[168];  // 0x0(0xA8)

}; 
// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// Size: 0x1(Inherited: 0x0) 
struct FUpdateHoverState
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bHovering : 1;  // 0x0(0x1)

}; 
// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// Size: 0x20(Inherited: 0x0) 
struct FBehaviorInfo
{
	struct UInputBehavior* Behavior;  // 0x0(0x8)
	char pad_8[24];  // 0x8(0x18)

}; 
// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// Size: 0x30(Inherited: 0x0) 
struct FActiveGizmo
{
	char pad_0[48];  // 0x0(0x30)

}; 
// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// Size: 0x10(Inherited: 0x0) 
struct FGizmoVec2ParameterChange
{
	struct FVector2D InitialValue;  // 0x0(0x8)
	struct FVector2D CurrentValue;  // 0x8(0x8)

}; 
// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// Size: 0x8(Inherited: 0x0) 
struct FGizmoFloatParameterChange
{
	float InitialValue;  // 0x0(0x4)
	float CurrentValue;  // 0x4(0x4)

}; 
// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// Size: 0x1(Inherited: 0x0) 
struct FUpdateWorldLocalState
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bWorldIn : 1;  // 0x0(0x1)

}; 
// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// Size: 0x30(Inherited: 0x0) 
struct FGetTransform
{
	struct FTransform ReturnValue;  // 0x0(0x30)

}; 
// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// Size: 0x30(Inherited: 0x0) 
struct FSetTransform
{
	struct FTransform NewTransform;  // 0x0(0x30)

}; 
// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// Size: 0xC(Inherited: 0x0) 
struct FGetDirection
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// Size: 0xC(Inherited: 0x0) 
struct FGetOrigin
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// Size: 0x18(Inherited: 0x0) 
struct FGetTangentVectors
{
	struct FVector TangentXOut;  // 0x0(0xC)
	struct FVector TangentYOut;  // 0xC(0xC)

}; 
// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// Size: 0x1(Inherited: 0x0) 
struct FHasTangentVectors
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// Size: 0x8(Inherited: 0x0) 
struct FGetParameter
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// Size: 0x8(Inherited: 0x0) 
struct FSetParameter
{
	struct FVector2D NewValue;  // 0x0(0x8)

}; 
