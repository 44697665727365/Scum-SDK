#pragma once 
#include <InteractiveToolsFramework_Structs.h>
 
 
 
// Class InteractiveToolsFramework.InputBehaviorSource
// Size: 0x28(Inherited: 0x28) 
struct UInputBehaviorSource : public UInterface
{

}; 



// Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x28(Inherited: 0x28) 
struct UGizmoTransformSource : public UInterface
{

	void SetTransform(struct FTransform& NewTransform); // Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	struct FTransform GetTransform(); // Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
}; 



// Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x4B0(Inherited: 0x470) 
struct UGizmoBoxComponent : public UGizmoBaseComponent
{
	struct FVector Origin;  // 0x470(0xC)
	char pad_1148[4];  // 0x47C(0x4)
	struct FQuat Rotation;  // 0x480(0x10)
	struct FVector Dimensions;  // 0x490(0xC)
	float LineThickness;  // 0x49C(0x4)
	char pad_1184_1 : 7;  // 0x4A0(0x1)
	bool bRemoveHiddenLines : 1;  // 0x4A0(0x1)
	char pad_1185_1 : 7;  // 0x4A1(0x1)
	bool bEnableAxisFlip : 1;  // 0x4A1(0x1)
	char pad_1186[14];  // 0x4A2(0xE)

}; 



// Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0x60(Inherited: 0x28) 
struct UInteractiveToolPropertySet : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct UInteractiveToolPropertySet* CachedProperties;  // 0x38(0x8)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bIsPropertySetEnabled : 1;  // 0x40(0x1)
	char pad_65[31];  // 0x41(0x1F)

}; 



// Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x490(Inherited: 0x470) 
struct UGizmoArrowComponent : public UGizmoBaseComponent
{
	struct FVector Direction;  // 0x470(0xC)
	float Gap;  // 0x47C(0x4)
	float Length;  // 0x480(0x4)
	float Thickness;  // 0x484(0x4)
	char pad_1160[8];  // 0x488(0x8)

}; 



// Class InteractiveToolsFramework.InteractiveToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UInteractiveToolBuilder : public UObject
{

}; 



// Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0x78(Inherited: 0x60) 
struct UBrushBaseProperties : public UInteractiveToolPropertySet
{
	float BrushSize;  // 0x60(0x4)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bSpecifyRadius : 1;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)
	float BrushRadius;  // 0x68(0x4)
	float BrushStrength;  // 0x6C(0x4)
	float BrushFalloffAmount;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bShowStrength : 1;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bShowFalloff : 1;  // 0x75(0x1)
	char pad_118[2];  // 0x76(0x2)

}; 



// Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x28(Inherited: 0x28) 
struct UGizmoAxisSource : public UInterface
{

	bool HasTangentVectors(); // Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	void GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut); // Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	struct FVector GetOrigin(); // Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	struct FVector GetDirection(); // Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
}; 



// Class InteractiveToolsFramework.InputBehavior
// Size: 0x30(Inherited: 0x28) 
struct UInputBehavior : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class InteractiveToolsFramework.InteractiveTool
// Size: 0x80(Inherited: 0x28) 
struct UInteractiveTool : public UObject
{
	char pad_40[32];  // 0x28(0x20)
	struct UInputBehaviorSet* InputBehaviors;  // 0x48(0x8)
	struct TArray<struct UObject*> ToolPropertyObjects;  // 0x50(0x10)
	char pad_96[32];  // 0x60(0x20)

}; 



// Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0x90(Inherited: 0x80) 
struct UMultiSelectionTool : public UInteractiveTool
{
	char pad_128[16];  // 0x80(0x10)

}; 



// Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0x88(Inherited: 0x80) 
struct USingleSelectionTool : public UInteractiveTool
{
	char pad_128[8];  // 0x80(0x8)

}; 



// Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x30(Inherited: 0x28) 
struct UInteractionMechanic : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x28(Inherited: 0x28) 
struct UGizmoVec2ParameterSource : public UInterface
{

	void SetParameter(struct FVector2D& NewValue); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	struct FVector2D GetParameter(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	void EndModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	void BeginModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
}; 



// Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size: 0x220(Inherited: 0x220) 
struct AInternalToolFrameworkActor : public AActor
{

}; 



// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x58(Inherited: 0x48) 
struct UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
	struct USceneComponent* Component;  // 0x48(0x8)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bModifyComponentOnTransform : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)

}; 



// Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x4A0(Inherited: 0x470) 
struct UGizmoRectangleComponent : public UGizmoBaseComponent
{
	struct FVector DirectionX;  // 0x470(0xC)
	struct FVector DirectionY;  // 0x47C(0xC)
	float OffsetX;  // 0x488(0x4)
	float OffsetY;  // 0x48C(0x4)
	float LengthX;  // 0x490(0x4)
	float LengthY;  // 0x494(0x4)
	float Thickness;  // 0x498(0x4)
	char SegmentFlags;  // 0x49C(0x1)
	char pad_1181[3];  // 0x49D(0x3)

}; 



// Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x140(Inherited: 0x80) 
struct UClickDragInputBehavior : public UAnyButtonInputBehavior
{
	char pad_128[160];  // 0x80(0xA0)
	char pad_288_1 : 7;  // 0x120(0x1)
	bool bUpdateModifiersDuringDrag : 1;  // 0x120(0x1)
	char pad_289[31];  // 0x121(0x1F)

}; 



// Class InteractiveToolsFramework.SingleClickTool
// Size: 0x88(Inherited: 0x80) 
struct USingleClickTool : public UInteractiveTool
{
	char pad_128[8];  // 0x80(0x8)

}; 



// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x30(Inherited: 0x28) 
struct UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0xC0(Inherited: 0x88) 
struct UMeshSurfacePointTool : public USingleSelectionTool
{
	char pad_136[56];  // 0x88(0x38)

}; 



// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x60(Inherited: 0x48) 
struct UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource;  // 0x48(0x10)
	float MinParameter;  // 0x58(0x4)
	float MaxParameter;  // 0x5C(0x4)

}; 



// Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x1B8(Inherited: 0xC0) 
struct UBaseBrushTool : public UMeshSurfacePointTool
{
	struct UBrushBaseProperties* BrushProperties;  // 0xC0(0x8)
	char pad_200_1 : 7;  // 0xC8(0x1)
	bool bInBrushStroke : 1;  // 0xC8(0x1)
	char pad_201[3];  // 0xC9(0x3)
	float WorldToLocalScale;  // 0xCC(0x4)
	struct FBrushStampData LastBrushStamp;  // 0xD0(0xA8)
	char pad_376[16];  // 0x178(0x10)
	struct TSoftClassPtr<UObject> PropertyClass;  // 0x188(0x28)
	struct UBrushStampIndicator* BrushStampIndicator;  // 0x1B0(0x8)

}; 



// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size: 0x28(Inherited: 0x28) 
struct UInteractiveGizmoBuilder : public UObject
{

}; 



// Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x130(Inherited: 0x38) 
struct UIntervalGizmo : public UInteractiveGizmo
{
	struct UGizmoTransformChangeStateTarget* StateTarget;  // 0x38(0x8)
	char pad_64[16];  // 0x40(0x10)
	struct UTransformProxy* TransformProxy;  // 0x50(0x8)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents;  // 0x58(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos;  // 0x68(0x10)
	char pad_120[24];  // 0x78(0x18)
	struct UGizmoComponentAxisSource* AxisYSource;  // 0x90(0x8)
	struct UGizmoComponentAxisSource* AxisZSource;  // 0x98(0x8)
	char pad_160[144];  // 0xA0(0x90)

}; 



// Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x4A0(Inherited: 0x470) 
struct UGizmoLineHandleComponent : public UGizmoBaseComponent
{
	struct FVector Normal;  // 0x470(0xC)
	float HandleSize;  // 0x47C(0x4)
	float Thickness;  // 0x480(0x4)
	struct FVector Direction;  // 0x484(0xC)
	float Length;  // 0x490(0x4)
	char pad_1172_1 : 7;  // 0x494(0x1)
	bool bImageScale : 1;  // 0x494(0x1)
	char pad_1173[11];  // 0x495(0xB)

}; 



// Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x28(Inherited: 0x28) 
struct UToolContextTransactionProvider : public UInterface
{

}; 



// Class InteractiveToolsFramework.InteractiveGizmo
// Size: 0x38(Inherited: 0x28) 
struct UInteractiveGizmo : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UInputBehaviorSet* InputBehaviors;  // 0x30(0x8)

}; 



// Class InteractiveToolsFramework.BrushStampIndicator
// Size: 0xB0(Inherited: 0x38) 
struct UBrushStampIndicator : public UInteractiveGizmo
{
	float BrushRadius;  // 0x38(0x4)
	float BrushFalloff;  // 0x3C(0x4)
	struct FVector BrushPosition;  // 0x40(0xC)
	struct FVector BrushNormal;  // 0x4C(0xC)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bDrawIndicatorLines : 1;  // 0x58(0x1)
	char pad_89_1 : 7;  // 0x59(0x1)
	bool bDrawRadiusCircle : 1;  // 0x59(0x1)
	char pad_90[2];  // 0x5A(0x2)
	int32_t SampleStepCount;  // 0x5C(0x4)
	struct FLinearColor LineColor;  // 0x60(0x10)
	float LineThickness;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bDepthTested : 1;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bDrawSecondaryLines : 1;  // 0x75(0x1)
	char pad_118[2];  // 0x76(0x2)
	float SecondaryLineThickness;  // 0x78(0x4)
	struct FLinearColor SecondaryLineColor;  // 0x7C(0x10)
	char pad_140[4];  // 0x8C(0x4)
	struct UPrimitiveComponent* AttachedComponent;  // 0x90(0x8)
	char pad_152[24];  // 0x98(0x18)

}; 



// Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0xD8(Inherited: 0x38) 
struct UAxisPositionGizmo : public UInteractiveGizmo
{
	char pad_56[16];  // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x48(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource;  // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget;  // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget;  // 0x78(0x10)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bEnableSignedAxis : 1;  // 0x88(0x1)
	char pad_137_1 : 7;  // 0x89(0x1)
	bool bInInteraction : 1;  // 0x89(0x1)
	char pad_138[2];  // 0x8A(0x2)
	struct FVector InteractionOrigin;  // 0x8C(0xC)
	struct FVector InteractionAxis;  // 0x98(0xC)
	struct FVector InteractionStartPoint;  // 0xA4(0xC)
	struct FVector InteractionCurPoint;  // 0xB0(0xC)
	float InteractionStartParameter;  // 0xBC(0x4)
	float InteractionCurParameter;  // 0xC0(0x4)
	float ParameterSign;  // 0xC4(0x4)
	char pad_200[16];  // 0xC8(0x10)

}; 



// Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x80(Inherited: 0x30) 
struct UAnyButtonInputBehavior : public UInputBehavior
{
	char pad_48[80];  // 0x30(0x50)

}; 



// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x60(Inherited: 0x48) 
struct UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
	struct FVector2D Value;  // 0x48(0x8)
	struct FGizmoVec2ParameterChange LastChange;  // 0x50(0x10)

}; 



// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size: 0x28(Inherited: 0x28) 
struct UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{

}; 



// Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0xF0(Inherited: 0x38) 
struct UAxisAngleGizmo : public UInteractiveGizmo
{
	char pad_56[16];  // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x48(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource;  // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget;  // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget;  // 0x78(0x10)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bInInteraction : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	struct FVector RotationOrigin;  // 0x8C(0xC)
	struct FVector RotationAxis;  // 0x98(0xC)
	struct FVector RotationPlaneX;  // 0xA4(0xC)
	struct FVector RotationPlaneY;  // 0xB0(0xC)
	struct FVector InteractionStartPoint;  // 0xBC(0xC)
	struct FVector InteractionCurPoint;  // 0xC8(0xC)
	float InteractionStartAngle;  // 0xD4(0x4)
	float InteractionCurAngle;  // 0xD8(0x4)
	char pad_220[20];  // 0xDC(0x14)

}; 



// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size: 0x28(Inherited: 0x28) 
struct UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{

}; 



// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x28(Inherited: 0x28) 
struct UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{

}; 



// Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x48(Inherited: 0x28) 
struct UGizmoConstantAxisSource : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FVector Origin;  // 0x30(0xC)
	struct FVector Direction;  // 0x3C(0xC)

}; 



// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x60(Inherited: 0x28) 
struct UGizmoConstantFrameAxisSource : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FVector Origin;  // 0x30(0xC)
	struct FVector Direction;  // 0x3C(0xC)
	struct FVector TangentX;  // 0x48(0xC)
	struct FVector TangentY;  // 0x54(0xC)

}; 



// Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x40(Inherited: 0x28) 
struct UGizmoWorldAxisSource : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FVector Origin;  // 0x30(0xC)
	int32_t AxisIndex;  // 0x3C(0x4)

}; 



// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x130(Inherited: 0x80) 
struct UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
	char pad_128[176];  // 0x80(0xB0)

}; 



// Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x40(Inherited: 0x28) 
struct UGizmoComponentAxisSource : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct USceneComponent* Component;  // 0x30(0x8)
	int32_t AxisIndex;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool bLocalAxes : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 



// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x280(Inherited: 0x140) 
struct ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
	char pad_320[320];  // 0x140(0x140)

}; 



// Class InteractiveToolsFramework.ClickDragToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct UClickDragToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class InteractiveToolsFramework.ClickDragTool
// Size: 0x88(Inherited: 0x80) 
struct UClickDragTool : public UInteractiveTool
{
	char pad_128[8];  // 0x80(0x8)

}; 



// Class InteractiveToolsFramework.GizmoActor
// Size: 0x220(Inherited: 0x220) 
struct AGizmoActor : public AInternalToolFrameworkActor
{

}; 



// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x48(Inherited: 0x28) 
struct UGizmoBaseVec2ParameterSource : public UObject
{
	char pad_40[32];  // 0x28(0x20)

}; 



// Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x80(Inherited: 0x28) 
struct UGizmoComponentHitTarget : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UPrimitiveComponent* Component;  // 0x30(0x8)
	char pad_56[72];  // 0x38(0x48)

}; 



// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0x110(Inherited: 0x30) 
struct UKeyAsModifierInputBehavior : public UInputBehavior
{
	char pad_48[224];  // 0x30(0xE0)

}; 



// Class InteractiveToolsFramework.GizmoBaseComponent
// Size: 0x470(Inherited: 0x450) 
struct UGizmoBaseComponent : public UPrimitiveComponent
{
	struct FLinearColor Color;  // 0x450(0x10)
	float HoverSizeMultiplier;  // 0x460(0x4)
	float PixelHitDistanceThreshold;  // 0x464(0x4)
	char pad_1128[8];  // 0x468(0x8)

	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	void UpdateHoverState(bool bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
}; 



// Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x490(Inherited: 0x470) 
struct UGizmoCircleComponent : public UGizmoBaseComponent
{
	struct FVector Normal;  // 0x470(0xC)
	float Radius;  // 0x47C(0x4)
	float Thickness;  // 0x480(0x4)
	int32_t NumSides;  // 0x484(0x4)
	char pad_1160_1 : 7;  // 0x488(0x1)
	bool bViewAligned : 1;  // 0x488(0x1)
	char pad_1161_1 : 7;  // 0x489(0x1)
	bool bOnlyAllowFrontFacingHits : 1;  // 0x489(0x1)
	char pad_1162[6];  // 0x48A(0x6)

}; 



// Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x28(Inherited: 0x28) 
struct UGizmoClickTarget : public UInterface
{

	void UpdateHoverState(bool bHovering); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
}; 



// Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x28(Inherited: 0x28) 
struct UGizmoStateTarget : public UInterface
{

	void EndUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	void BeginUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
}; 



// Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x28(Inherited: 0x28) 
struct UGizmoFloatParameterSource : public UInterface
{

	void SetParameter(float NewValue); // Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	float GetParameter(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	void EndModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	void BeginModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
}; 



// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x58(Inherited: 0x48) 
struct UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
	float Value;  // 0x48(0x4)
	struct FGizmoFloatParameterChange LastChange;  // 0x4C(0x8)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0xB0(Inherited: 0x28) 
struct UGizmoLambdaHitTarget : public UObject
{
	char pad_40[136];  // 0x28(0x88)

}; 



// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0xF0(Inherited: 0x48) 
struct UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // 0x58(0x10)
	float ScaleMultiplier;  // 0x68(0x4)
	struct FVector2D Parameter;  // 0x6C(0x8)
	struct FGizmoVec2ParameterChange LastChange;  // 0x74(0x10)
	struct FVector CurScaleOrigin;  // 0x84(0xC)
	struct FVector CurScaleNormal;  // 0x90(0xC)
	struct FVector CurScaleAxisX;  // 0x9C(0xC)
	struct FVector CurScaleAxisY;  // 0xA8(0xC)
	char pad_180[12];  // 0xB4(0xC)
	struct FTransform InitialTransform;  // 0xC0(0x30)

}; 



// Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x38(Inherited: 0x28) 
struct UInputBehaviorSet : public UObject
{
	struct TArray<struct FBehaviorInfo> Behaviors;  // 0x28(0x10)

}; 



// Class InteractiveToolsFramework.InputRouter
// Size: 0xB0(Inherited: 0x28) 
struct UInputRouter : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bAutoInvalidateOnHover : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bAutoInvalidateOnCapture : 1;  // 0x29(0x1)
	char pad_42[14];  // 0x2A(0xE)
	struct UInputBehaviorSet* ActiveInputBehaviors;  // 0x38(0x8)
	char pad_64[112];  // 0x40(0x70)

}; 



// Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0xB8(Inherited: 0x28) 
struct UInteractiveGizmoManager : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct TArray<struct FActiveGizmo> ActiveGizmos;  // 0x30(0x10)
	char pad_64[24];  // 0x40(0x18)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders;  // 0x58(0x50)
	char pad_168[16];  // 0xA8(0x10)

}; 



// Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x138(Inherited: 0x28) 
struct UInteractiveToolManager : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UInteractiveTool* ActiveLeftTool;  // 0x30(0x8)
	struct UInteractiveTool* ActiveRightTool;  // 0x38(0x8)
	char pad_64[80];  // 0x40(0x50)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders;  // 0x90(0x50)
	char pad_224[88];  // 0xE0(0x58)

}; 



// Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x28(Inherited: 0x28) 
struct UToolFrameworkComponent : public UInterface
{

}; 



// Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x238(Inherited: 0x220) 
struct AIntervalGizmoActor : public AGizmoActor
{
	struct UGizmoLineHandleComponent* UpIntervalComponent;  // 0x220(0x8)
	struct UGizmoLineHandleComponent* DownIntervalComponent;  // 0x228(0x8)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent;  // 0x230(0x8)

}; 



// Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0x98(Inherited: 0x28) 
struct UInteractiveToolsContext : public UObject
{
	char pad_40[48];  // 0x28(0x30)
	struct UInputRouter* InputRouter;  // 0x58(0x8)
	struct UInteractiveToolManager* ToolManager;  // 0x60(0x8)
	struct UInteractiveGizmoManager* GizmoManager;  // 0x68(0x8)
	struct TSoftClassPtr<UObject> ToolManagerClass;  // 0x70(0x28)

}; 



// Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0xC0(Inherited: 0x28) 
struct UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
	char pad_40[152];  // 0x28(0x98)

}; 



// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x48(Inherited: 0x28) 
struct UGizmoBaseFloatParameterSource : public UObject
{
	char pad_40[32];  // 0x28(0x20)

}; 



// Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0x98(Inherited: 0x30) 
struct UMouseHoverBehavior : public UInputBehavior
{
	char pad_48[104];  // 0x30(0x68)

}; 



// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x110(Inherited: 0x48) 
struct UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
	char pad_72[72];  // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // 0xA0(0x10)
	float Parameter;  // 0xB0(0x4)
	struct FGizmoFloatParameterChange LastChange;  // 0xB4(0x8)
	struct FVector CurTranslationAxis;  // 0xBC(0xC)
	struct FVector CurTranslationOrigin;  // 0xC8(0xC)
	char pad_212[12];  // 0xD4(0xC)
	struct FTransform InitialTransform;  // 0xE0(0x30)

}; 



// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x130(Inherited: 0x48) 
struct UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
	char pad_72[72];  // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // 0xA0(0x10)
	struct FVector2D Parameter;  // 0xB0(0x8)
	struct FGizmoVec2ParameterChange LastChange;  // 0xB8(0x10)
	struct FVector CurTranslationOrigin;  // 0xC8(0xC)
	struct FVector CurTranslationNormal;  // 0xD4(0xC)
	struct FVector CurTranslationAxisX;  // 0xE0(0xC)
	struct FVector CurTranslationAxisY;  // 0xEC(0xC)
	char pad_248[8];  // 0xF8(0x8)
	struct FTransform InitialTransform;  // 0x100(0x30)

}; 



// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0x110(Inherited: 0x48) 
struct UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
	char pad_72[72];  // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // 0xA0(0x10)
	float angle;  // 0xB0(0x4)
	struct FGizmoFloatParameterChange LastChange;  // 0xB4(0x8)
	struct FVector CurRotationAxis;  // 0xBC(0xC)
	struct FVector CurRotationOrigin;  // 0xC8(0xC)
	char pad_212[12];  // 0xD4(0xC)
	struct FTransform InitialTransform;  // 0xE0(0x30)

}; 



// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0xC0(Inherited: 0x48) 
struct UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x48(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // 0x58(0x10)
	float ScaleMultiplier;  // 0x68(0x4)
	float Parameter;  // 0x6C(0x4)
	struct FGizmoFloatParameterChange LastChange;  // 0x70(0x8)
	struct FVector CurScaleAxis;  // 0x78(0xC)
	struct FVector CurScaleOrigin;  // 0x84(0xC)
	struct FTransform InitialTransform;  // 0x90(0x30)

}; 



// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x130(Inherited: 0x48) 
struct UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
	char pad_72[72];  // 0x48(0x48)
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // 0xA0(0x10)
	float ScaleMultiplier;  // 0xB0(0x4)
	struct FVector2D Parameter;  // 0xB4(0x8)
	struct FGizmoVec2ParameterChange LastChange;  // 0xBC(0x10)
	struct FVector CurScaleOrigin;  // 0xCC(0xC)
	struct FVector CurScaleNormal;  // 0xD8(0xC)
	struct FVector CurScaleAxisX;  // 0xE4(0xC)
	struct FVector CurScaleAxisY;  // 0xF0(0xC)
	char pad_252[4];  // 0xFC(0x4)
	struct FTransform InitialTransform;  // 0x100(0x30)

}; 



// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x28(Inherited: 0x28) 
struct UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{

}; 



// Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x100(Inherited: 0x38) 
struct UPlanePositionGizmo : public UInteractiveGizmo
{
	char pad_56[16];  // 0x38(0x10)
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x48(0x10)
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource;  // 0x58(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget;  // 0x68(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget;  // 0x78(0x10)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bEnableSignedAxis : 1;  // 0x88(0x1)
	char pad_137_1 : 7;  // 0x89(0x1)
	bool bFlipX : 1;  // 0x89(0x1)
	char pad_138_1 : 7;  // 0x8A(0x1)
	bool bFlipY : 1;  // 0x8A(0x1)
	char pad_139_1 : 7;  // 0x8B(0x1)
	bool bInInteraction : 1;  // 0x8B(0x1)
	struct FVector InteractionOrigin;  // 0x8C(0xC)
	struct FVector InteractionNormal;  // 0x98(0xC)
	struct FVector InteractionAxisX;  // 0xA4(0xC)
	struct FVector InteractionAxisY;  // 0xB0(0xC)
	struct FVector InteractionStartPoint;  // 0xBC(0xC)
	struct FVector InteractionCurPoint;  // 0xC8(0xC)
	struct FVector2D InteractionStartParameter;  // 0xD4(0x8)
	struct FVector2D InteractionCurParameter;  // 0xDC(0x8)
	struct FVector2D ParameterSigns;  // 0xE4(0x8)
	char pad_236[20];  // 0xEC(0x14)

}; 



// Class InteractiveToolsFramework.SelectionSet
// Size: 0x40(Inherited: 0x28) 
struct USelectionSet : public UObject
{
	char pad_40[24];  // 0x28(0x18)

}; 



// Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x80(Inherited: 0x40) 
struct UMeshSelectionSet : public USelectionSet
{
	struct TArray<int32_t> Vertices;  // 0x40(0x10)
	struct TArray<int32_t> Edges;  // 0x50(0x10)
	struct TArray<int32_t> Faces;  // 0x60(0x10)
	struct TArray<int32_t> Groups;  // 0x70(0x10)

}; 



// Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x130(Inherited: 0x80) 
struct USingleClickInputBehavior : public UAnyButtonInputBehavior
{
	char pad_128[64];  // 0x80(0x40)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool HitTestOnRelease : 1;  // 0xC0(0x1)
	char pad_193[111];  // 0xC1(0x6F)

}; 



// Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x28(Inherited: 0x28) 
struct USingleClickToolBuilder : public UInteractiveToolBuilder
{

}; 



// Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x30(Inherited: 0x28) 
struct UGizmoNilStateTarget : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0xB0(Inherited: 0x28) 
struct UGizmoLambdaStateTarget : public UObject
{
	char pad_40[136];  // 0x28(0x88)

}; 



// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x58(Inherited: 0x28) 
struct UGizmoObjectModifyStateTarget : public UObject
{
	char pad_40[48];  // 0x28(0x30)

}; 



// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0xE0(Inherited: 0x28) 
struct UGizmoTransformChangeStateTarget : public UObject
{
	char pad_40[40];  // 0x28(0x28)
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager;  // 0x50(0x10)
	char pad_96[128];  // 0x60(0x80)

}; 



// Class InteractiveToolsFramework.TransformGizmoActor
// Size: 0x2A0(Inherited: 0x220) 
struct ATransformGizmoActor : public AGizmoActor
{
	struct UPrimitiveComponent* TranslateX;  // 0x220(0x8)
	struct UPrimitiveComponent* TranslateY;  // 0x228(0x8)
	struct UPrimitiveComponent* TranslateZ;  // 0x230(0x8)
	struct UPrimitiveComponent* TranslateYZ;  // 0x238(0x8)
	struct UPrimitiveComponent* TranslateXZ;  // 0x240(0x8)
	struct UPrimitiveComponent* TranslateXY;  // 0x248(0x8)
	struct UPrimitiveComponent* RotateX;  // 0x250(0x8)
	struct UPrimitiveComponent* RotateY;  // 0x258(0x8)
	struct UPrimitiveComponent* RotateZ;  // 0x260(0x8)
	struct UPrimitiveComponent* UniformScale;  // 0x268(0x8)
	struct UPrimitiveComponent* AxisScaleX;  // 0x270(0x8)
	struct UPrimitiveComponent* AxisScaleY;  // 0x278(0x8)
	struct UPrimitiveComponent* AxisScaleZ;  // 0x280(0x8)
	struct UPrimitiveComponent* PlaneScaleYZ;  // 0x288(0x8)
	struct UPrimitiveComponent* PlaneScaleXZ;  // 0x290(0x8)
	struct UPrimitiveComponent* PlaneScaleXY;  // 0x298(0x8)

}; 



// Class InteractiveToolsFramework.TransformGizmoBuilder
// Size: 0xC0(Inherited: 0x28) 
struct UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
	char pad_40[152];  // 0x28(0x98)

}; 



// Class InteractiveToolsFramework.TransformGizmo
// Size: 0x1A0(Inherited: 0x38) 
struct UTransformGizmo : public UInteractiveGizmo
{
	char pad_56[8];  // 0x38(0x8)
	struct UTransformProxy* ActiveTarget;  // 0x40(0x8)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bSnapToWorldGrid : 1;  // 0x48(0x1)
	char pad_73_1 : 7;  // 0x49(0x1)
	bool bGridSizeIsExplicit : 1;  // 0x49(0x1)
	char pad_74[2];  // 0x4A(0x2)
	struct FVector ExplicitGridSize;  // 0x4C(0xC)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bRotationGridSizeIsExplicit : 1;  // 0x58(0x1)
	char pad_89[3];  // 0x59(0x3)
	struct FRotator ExplicitRotationGridSize;  // 0x5C(0xC)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bSnapToWorldRotGrid : 1;  // 0x68(0x1)
	char pad_105_1 : 7;  // 0x69(0x1)
	bool bUseContextCoordinateSystem : 1;  // 0x69(0x1)
	char pad_106[2];  // 0x6A(0x2)
	uint8_t  CurrentCoordinateSystem;  // 0x6C(0x4)
	char pad_112[144];  // 0x70(0x90)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents;  // 0x100(0x10)
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents;  // 0x110(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos;  // 0x120(0x10)
	char pad_304[16];  // 0x130(0x10)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource;  // 0x140(0x8)
	struct UGizmoComponentAxisSource* AxisXSource;  // 0x148(0x8)
	struct UGizmoComponentAxisSource* AxisYSource;  // 0x150(0x8)
	struct UGizmoComponentAxisSource* AxisZSource;  // 0x158(0x8)
	struct UGizmoComponentAxisSource* UnitAxisXSource;  // 0x160(0x8)
	struct UGizmoComponentAxisSource* UnitAxisYSource;  // 0x168(0x8)
	struct UGizmoComponentAxisSource* UnitAxisZSource;  // 0x170(0x8)
	struct UGizmoTransformChangeStateTarget* StateTarget;  // 0x178(0x8)
	struct UGizmoScaledTransformSource* ScaledTransformSource;  // 0x180(0x8)
	char pad_392[24];  // 0x188(0x18)

}; 



// Class InteractiveToolsFramework.TransformProxy
// Size: 0xF0(Inherited: 0x28) 
struct UTransformProxy : public UObject
{
	char pad_40[72];  // 0x28(0x48)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bRotatePerObject : 1;  // 0x70(0x1)
	char pad_113_1 : 7;  // 0x71(0x1)
	bool bSetPivotMode : 1;  // 0x71(0x1)
	char pad_114[30];  // 0x72(0x1E)
	struct FTransform SharedTransform;  // 0x90(0x30)
	struct FTransform InitialSharedTransform;  // 0xC0(0x30)

}; 



// Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x48(Inherited: 0x28) 
struct UGizmoBaseTransformSource : public UObject
{
	char pad_40[32];  // 0x28(0x20)

}; 



// Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0xE0(Inherited: 0x48) 
struct UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource;  // 0x48(0x10)
	char pad_88[136];  // 0x58(0x88)

}; 



// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x50(Inherited: 0x48) 
struct UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
	struct UTransformProxy* Proxy;  // 0x48(0x8)

}; 



