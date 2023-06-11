#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct FieldSystemEngine.FieldObjectCommands
// Size: 0x30(Inherited: 0x0) 
struct FFieldObjectCommands
{
	struct TArray<struct FName> TargetNames;  // 0x0(0x10)
	struct TArray<struct UFieldNodeBase*> RootNodes;  // 0x10(0x10)
	struct TArray<struct UFieldSystemMetaData*> MetaDatas;  // 0x20(0x10)

}; 
// Function FieldSystemEngine.NoiseField.SetNoiseField
// Size: 0x50(Inherited: 0x0) 
struct FSetNoiseField
{
	float MinRange;  // 0x0(0x4)
	float MaxRange;  // 0x4(0x4)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform Transform;  // 0x10(0x30)
	struct UNoiseField* ReturnValue;  // 0x40(0x8)
	char pad_72[8];  // 0x48(0x8)

}; 
// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// Size: 0x18(Inherited: 0x0) 
struct FAddFieldCommand
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char EFieldPhysicsType Target;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct UFieldSystemMetaData* MetaData;  // 0x8(0x8)
	struct UFieldNodeBase* Field;  // 0x10(0x8)

}; 
// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// Size: 0x14(Inherited: 0x0) 
struct FApplyStayDynamicField
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector position;  // 0x4(0xC)
	float Radius;  // 0x10(0x4)

}; 
// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// Size: 0x14(Inherited: 0x0) 
struct FApplyRadialForce
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector position;  // 0x4(0xC)
	float Magnitude;  // 0x10(0x4)

}; 
// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
// Size: 0x18(Inherited: 0x0) 
struct FAddPersistentField
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char EFieldPhysicsType Target;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct UFieldSystemMetaData* MetaData;  // 0x8(0x8)
	struct UFieldNodeBase* Field;  // 0x10(0x8)

}; 
// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
// Size: 0x8(Inherited: 0x0) 
struct FSetReturnResultsTerminal
{
	struct UReturnResultsTerminal* ReturnValue;  // 0x0(0x8)

}; 
// Function FieldSystemEngine.UniformScalar.SetUniformScalar
// Size: 0x10(Inherited: 0x0) 
struct FSetUniformScalar
{
	float Magnitude;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UUniformScalar* ReturnValue;  // 0x8(0x8)

}; 
// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// Size: 0x14(Inherited: 0x0) 
struct FApplyLinearForce
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector Direction;  // 0x4(0xC)
	float Magnitude;  // 0x10(0x4)

}; 
// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// Size: 0x18(Inherited: 0x0) 
struct FApplyPhysicsField
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char EFieldPhysicsType Target;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct UFieldSystemMetaData* MetaData;  // 0x8(0x8)
	struct UFieldNodeBase* Field;  // 0x10(0x8)

}; 
// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// Size: 0x18(Inherited: 0x0) 
struct FApplyRadialVectorFalloffForce
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector position;  // 0x4(0xC)
	float Radius;  // 0x10(0x4)
	float Magnitude;  // 0x14(0x4)

}; 
// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
// Size: 0x30(Inherited: 0x0) 
struct FSetRadialFalloff
{
	float Magnitude;  // 0x0(0x4)
	float MinRange;  // 0x4(0x4)
	float MaxRange;  // 0x8(0x4)
	float Default;  // 0xC(0x4)
	float Radius;  // 0x10(0x4)
	struct FVector position;  // 0x14(0xC)
	char EFieldFalloffType Falloff;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct URadialFalloff* ReturnValue;  // 0x28(0x8)

}; 
// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// Size: 0x1C(Inherited: 0x0) 
struct FApplyStrainField
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector position;  // 0x4(0xC)
	float Radius;  // 0x10(0x4)
	float Magnitude;  // 0x14(0x4)
	int32_t Iterations;  // 0x18(0x4)

}; 
// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// Size: 0x24(Inherited: 0x0) 
struct FApplyUniformVectorFalloffForce
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Enabled : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector position;  // 0x4(0xC)
	struct FVector Direction;  // 0x10(0xC)
	float Radius;  // 0x1C(0x4)
	float Magnitude;  // 0x20(0x4)

}; 
// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
// Size: 0x10(Inherited: 0x0) 
struct FSetMetaDataIteration
{
	int32_t Iterations;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UFieldSystemMetaDataIteration* ReturnValue;  // 0x8(0x8)

}; 
// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
// Size: 0x10(Inherited: 0x0) 
struct FSetMetaDataaProcessingResolutionType
{
	char EFieldResolutionType ResolutionType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UFieldSystemMetaDataProcessingResolution* ReturnValue;  // 0x8(0x8)

}; 
// Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
// Size: 0x10(Inherited: 0x0) 
struct FSetMetaDataFilterType
{
	char EFieldFilterType FilterType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UFieldSystemMetaDataFilter* ReturnValue;  // 0x8(0x8)

}; 
// Function FieldSystemEngine.UniformInteger.SetUniformInteger
// Size: 0x10(Inherited: 0x0) 
struct FSetUniformInteger
{
	int32_t Magnitude;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UUniformInteger* ReturnValue;  // 0x8(0x8)

}; 
// Function FieldSystemEngine.OperatorField.SetOperatorField
// Size: 0x28(Inherited: 0x0) 
struct FSetOperatorField
{
	float Magnitude;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UFieldNodeBase* LeftField;  // 0x8(0x8)
	struct UFieldNodeBase* RightField;  // 0x10(0x8)
	char EFieldOperationType Operation;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct UOperatorField* ReturnValue;  // 0x20(0x8)

}; 
// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
// Size: 0x28(Inherited: 0x0) 
struct FSetRadialIntMask
{
	float Radius;  // 0x0(0x4)
	struct FVector position;  // 0x4(0xC)
	int32_t InteriorValue;  // 0x10(0x4)
	int32_t ExteriorValue;  // 0x14(0x4)
	char ESetMaskConditionType SetMaskConditionIn;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct URadialIntMask* ReturnValue;  // 0x20(0x8)

}; 
// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
// Size: 0x50(Inherited: 0x0) 
struct FSetBoxFalloff
{
	float Magnitude;  // 0x0(0x4)
	float MinRange;  // 0x4(0x4)
	float MaxRange;  // 0x8(0x4)
	float Default;  // 0xC(0x4)
	struct FTransform Transform;  // 0x10(0x30)
	char EFieldFalloffType Falloff;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)
	struct UBoxFalloff* ReturnValue;  // 0x48(0x8)

}; 
// Function FieldSystemEngine.WaveScalar.SetWaveScalar
// Size: 0x28(Inherited: 0x0) 
struct FSetWaveScalar
{
	float Magnitude;  // 0x0(0x4)
	struct FVector position;  // 0x4(0xC)
	float Wavelength;  // 0x10(0x4)
	float Period;  // 0x14(0x4)
	float Time;  // 0x18(0x4)
	char EWaveFunctionType Function;  // 0x1C(0x1)
	char EFieldFalloffType Falloff;  // 0x1D(0x1)
	char pad_30[2];  // 0x1E(0x2)
	struct UWaveScalar* ReturnValue;  // 0x20(0x8)

}; 
// Function FieldSystemEngine.RadialVector.SetRadialVector
// Size: 0x18(Inherited: 0x0) 
struct FSetRadialVector
{
	float Magnitude;  // 0x0(0x4)
	struct FVector position;  // 0x4(0xC)
	struct URadialVector* ReturnValue;  // 0x10(0x8)

}; 
// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
// Size: 0x38(Inherited: 0x0) 
struct FSetPlaneFalloff
{
	float Magnitude;  // 0x0(0x4)
	float MinRange;  // 0x4(0x4)
	float MaxRange;  // 0x8(0x4)
	float Default;  // 0xC(0x4)
	float Distance;  // 0x10(0x4)
	struct FVector position;  // 0x14(0xC)
	struct FVector Normal;  // 0x20(0xC)
	char EFieldFalloffType Falloff;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	struct UPlaneFalloff* ReturnValue;  // 0x30(0x8)

}; 
// Function FieldSystemEngine.UniformVector.SetUniformVector
// Size: 0x18(Inherited: 0x0) 
struct FSetUniformVector
{
	float Magnitude;  // 0x0(0x4)
	struct FVector Direction;  // 0x4(0xC)
	struct UUniformVector* ReturnValue;  // 0x10(0x8)

}; 
// Function FieldSystemEngine.RandomVector.SetRandomVector
// Size: 0x10(Inherited: 0x0) 
struct FSetRandomVector
{
	float Magnitude;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct URandomVector* ReturnValue;  // 0x8(0x8)

}; 
// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
// Size: 0x10(Inherited: 0x0) 
struct FSetToIntegerField
{
	struct UFieldNodeFloat* FloatField;  // 0x0(0x8)
	struct UToIntegerField* ReturnValue;  // 0x8(0x8)

}; 
// Function FieldSystemEngine.ToFloatField.SetToFloatField
// Size: 0x10(Inherited: 0x0) 
struct FSetToFloatField
{
	struct UFieldNodeInt* IntegerField;  // 0x0(0x8)
	struct UToFloatField* ReturnValue;  // 0x8(0x8)

}; 
// Function FieldSystemEngine.CullingField.SetCullingField
// Size: 0x20(Inherited: 0x0) 
struct FSetCullingField
{
	struct UFieldNodeBase* Culling;  // 0x0(0x8)
	struct UFieldNodeBase* Field;  // 0x8(0x8)
	char EFieldCullingOperationType Operation;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct UCullingField* ReturnValue;  // 0x18(0x8)

}; 
