#pragma once 
#include <FieldSystemEngine_Structs.h>
 
 
 
// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xB8(Inherited: 0xB0) 
struct UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
	int32_t Iterations;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
}; 



// Class FieldSystemEngine.FieldSystemActor
// Size: 0x228(Inherited: 0x220) 
struct AFieldSystemActor : public AActor
{
	struct UFieldSystemComponent* FieldSystemComponent;  // 0x220(0x8)

}; 



// Class FieldSystemEngine.FieldSystem
// Size: 0x38(Inherited: 0x28) 
struct UFieldSystem : public UObject
{
	char pad_40[16];  // 0x28(0x10)

}; 



// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x520(Inherited: 0x450) 
struct UFieldSystemComponent : public UPrimitiveComponent
{
	struct UFieldSystem* FieldSystem;  // 0x450(0x8)
	char pad_1112_1 : 7;  // 0x458(0x1)
	bool bIsWorldField : 1;  // 0x458(0x1)
	char pad_1113_1 : 7;  // 0x459(0x1)
	bool bIsChaosField : 1;  // 0x459(0x1)
	char pad_1114[6];  // 0x45A(0x6)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;  // 0x460(0x10)
	struct FFieldObjectCommands ConstructionCommands;  // 0x470(0x30)
	struct FFieldObjectCommands BufferCommands;  // 0x4A0(0x30)
	char pad_1232[80];  // 0x4D0(0x50)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	void ApplyStrainField(bool Enabled, struct FVector position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	void ApplyStayDynamicField(bool Enabled, struct FVector position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	void ApplyRadialForce(bool Enabled, struct FVector position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	void ApplyPhysicsField(bool Enabled, char EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	void AddPersistentField(bool Enabled, char EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
	void AddFieldCommand(bool Enabled, char EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
}; 



// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xB0(Inherited: 0xB0) 
struct UFieldSystemMetaData : public UActorComponent
{

}; 



// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xB8(Inherited: 0xB0) 
struct UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
	char EFieldResolutionType ResolutionType;  // 0xB0(0x1)
	char pad_177[7];  // 0xB1(0x7)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(char EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
}; 



// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xB8(Inherited: 0xB0) 
struct UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
	char EFieldFilterType FilterType;  // 0xB0(0x1)
	char pad_177[7];  // 0xB1(0x7)

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(char EFieldFilterType FilterType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
}; 



// Class FieldSystemEngine.FieldNodeBase
// Size: 0xB0(Inherited: 0xB0) 
struct UFieldNodeBase : public UActorComponent
{

}; 



// Class FieldSystemEngine.UniformVector
// Size: 0xC0(Inherited: 0xB0) 
struct UUniformVector : public UFieldNodeVector
{
	float Magnitude;  // 0xB0(0x4)
	struct FVector Direction;  // 0xB4(0xC)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector
}; 



// Class FieldSystemEngine.FieldNodeInt
// Size: 0xB0(Inherited: 0xB0) 
struct UFieldNodeInt : public UFieldNodeBase
{

}; 



// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xB0(Inherited: 0xB0) 
struct UFieldNodeFloat : public UFieldNodeBase
{

}; 



// Class FieldSystemEngine.FieldNodeVector
// Size: 0xB0(Inherited: 0xB0) 
struct UFieldNodeVector : public UFieldNodeBase
{

}; 



// Class FieldSystemEngine.UniformInteger
// Size: 0xB8(Inherited: 0xB0) 
struct UUniformInteger : public UFieldNodeInt
{
	int32_t Magnitude;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger
}; 



// Class FieldSystemEngine.RadialIntMask
// Size: 0xD0(Inherited: 0xB0) 
struct URadialIntMask : public UFieldNodeInt
{
	float Radius;  // 0xB0(0x4)
	struct FVector position;  // 0xB4(0xC)
	int32_t InteriorValue;  // 0xC0(0x4)
	int32_t ExteriorValue;  // 0xC4(0x4)
	char ESetMaskConditionType SetMaskCondition;  // 0xC8(0x1)
	char pad_201[7];  // 0xC9(0x7)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector position, int32_t InteriorValue, int32_t ExteriorValue, char ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
}; 



// Class FieldSystemEngine.UniformScalar
// Size: 0xB8(Inherited: 0xB0) 
struct UUniformScalar : public UFieldNodeFloat
{
	float Magnitude;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar
}; 



// Class FieldSystemEngine.WaveScalar
// Size: 0xD0(Inherited: 0xB0) 
struct UWaveScalar : public UFieldNodeFloat
{
	float Magnitude;  // 0xB0(0x4)
	struct FVector position;  // 0xB4(0xC)
	float Wavelength;  // 0xC0(0x4)
	float Period;  // 0xC4(0x4)
	char EWaveFunctionType Function;  // 0xC8(0x1)
	char EFieldFalloffType Falloff;  // 0xC9(0x1)
	char pad_202[6];  // 0xCA(0x6)

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector position, float Wavelength, float Period, float Time, char EWaveFunctionType Function, char EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar
}; 



// Class FieldSystemEngine.RadialFalloff
// Size: 0xD8(Inherited: 0xB0) 
struct URadialFalloff : public UFieldNodeFloat
{
	float Magnitude;  // 0xB0(0x4)
	float MinRange;  // 0xB4(0x4)
	float MaxRange;  // 0xB8(0x4)
	float Default;  // 0xBC(0x4)
	float Radius;  // 0xC0(0x4)
	struct FVector position;  // 0xC4(0xC)
	char EFieldFalloffType Falloff;  // 0xD0(0x1)
	char pad_209[7];  // 0xD1(0x7)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector position, char EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
}; 



// Class FieldSystemEngine.PlaneFalloff
// Size: 0xE0(Inherited: 0xB0) 
struct UPlaneFalloff : public UFieldNodeFloat
{
	float Magnitude;  // 0xB0(0x4)
	float MinRange;  // 0xB4(0x4)
	float MaxRange;  // 0xB8(0x4)
	float Default;  // 0xBC(0x4)
	float Distance;  // 0xC0(0x4)
	struct FVector position;  // 0xC4(0xC)
	struct FVector Normal;  // 0xD0(0xC)
	char EFieldFalloffType Falloff;  // 0xDC(0x1)
	char pad_221[3];  // 0xDD(0x3)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector position, struct FVector Normal, char EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
}; 



// Class FieldSystemEngine.BoxFalloff
// Size: 0x100(Inherited: 0xB0) 
struct UBoxFalloff : public UFieldNodeFloat
{
	float Magnitude;  // 0xB0(0x4)
	float MinRange;  // 0xB4(0x4)
	float MaxRange;  // 0xB8(0x4)
	float Default;  // 0xBC(0x4)
	struct FTransform Transform;  // 0xC0(0x30)
	char EFieldFalloffType Falloff;  // 0xF0(0x1)
	char pad_241[15];  // 0xF1(0xF)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, char EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
}; 



// Class FieldSystemEngine.NoiseField
// Size: 0xF0(Inherited: 0xB0) 
struct UNoiseField : public UFieldNodeFloat
{
	float MinRange;  // 0xB0(0x4)
	float MaxRange;  // 0xB4(0x4)
	char pad_184[8];  // 0xB8(0x8)
	struct FTransform Transform;  // 0xC0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField
}; 



// Class FieldSystemEngine.RadialVector
// Size: 0xC0(Inherited: 0xB0) 
struct URadialVector : public UFieldNodeVector
{
	float Magnitude;  // 0xB0(0x4)
	struct FVector position;  // 0xB4(0xC)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector position); // Function FieldSystemEngine.RadialVector.SetRadialVector
}; 



// Class FieldSystemEngine.RandomVector
// Size: 0xB8(Inherited: 0xB0) 
struct URandomVector : public UFieldNodeVector
{
	float Magnitude;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector
}; 



// Class FieldSystemEngine.OperatorField
// Size: 0xD0(Inherited: 0xB0) 
struct UOperatorField : public UFieldNodeBase
{
	float Magnitude;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)
	struct UFieldNodeBase* RightField;  // 0xB8(0x8)
	struct UFieldNodeBase* LeftField;  // 0xC0(0x8)
	char EFieldOperationType Operation;  // 0xC8(0x1)
	char pad_201[7];  // 0xC9(0x7)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, char EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField
}; 



// Class FieldSystemEngine.ToIntegerField
// Size: 0xB8(Inherited: 0xB0) 
struct UToIntegerField : public UFieldNodeInt
{
	struct UFieldNodeFloat* FloatField;  // 0xB0(0x8)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField
}; 



// Class FieldSystemEngine.ToFloatField
// Size: 0xB8(Inherited: 0xB0) 
struct UToFloatField : public UFieldNodeFloat
{
	struct UFieldNodeInt* IntField;  // 0xB0(0x8)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField
}; 



// Class FieldSystemEngine.CullingField
// Size: 0xC8(Inherited: 0xB0) 
struct UCullingField : public UFieldNodeBase
{
	struct UFieldNodeBase* Culling;  // 0xB0(0x8)
	struct UFieldNodeBase* Field;  // 0xB8(0x8)
	char EFieldCullingOperationType Operation;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, char EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField
}; 



// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xB0(Inherited: 0xB0) 
struct UReturnResultsTerminal : public UFieldNodeBase
{

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
}; 



