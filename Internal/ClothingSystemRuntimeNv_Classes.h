#pragma once 
#include <ClothingSystemRuntimeNv_Structs.h>
 
 
 
// Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x148(Inherited: 0x28) 
struct UClothConfigNv : public UClothConfigCommon
{
	uint8_t  ClothingWindMethod;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	struct FClothConstraintSetupNv VerticalConstraint;  // 0x2C(0x10)
	struct FClothConstraintSetupNv HorizontalConstraint;  // 0x3C(0x10)
	struct FClothConstraintSetupNv BendConstraint;  // 0x4C(0x10)
	struct FClothConstraintSetupNv ShearConstraint;  // 0x5C(0x10)
	float SelfCollisionRadius;  // 0x6C(0x4)
	float SelfCollisionStiffness;  // 0x70(0x4)
	float SelfCollisionCullScale;  // 0x74(0x4)
	struct FVector Damping;  // 0x78(0xC)
	float Friction;  // 0x84(0x4)
	float WindDragCoefficient;  // 0x88(0x4)
	float WindLiftCoefficient;  // 0x8C(0x4)
	float WindIntensityScale;  // 0x90(0x4)
	struct FVector LinearDrag;  // 0x94(0xC)
	struct FVector AngularDrag;  // 0xA0(0xC)
	struct FVector LinearInertiaScale;  // 0xAC(0xC)
	struct FVector AngularInertiaScale;  // 0xB8(0xC)
	struct FVector CentrifugalInertiaScale;  // 0xC4(0xC)
	float SolverFrequency;  // 0xD0(0x4)
	float StiffnessFrequency;  // 0xD4(0x4)
	float GravityScale;  // 0xD8(0x4)
	struct FVector GravityOverride;  // 0xDC(0xC)
	char pad_232_1 : 7;  // 0xE8(0x1)
	bool bUseGravityOverride : 1;  // 0xE8(0x1)
	char pad_233[3];  // 0xE9(0x3)
	float TetherStiffness;  // 0xEC(0x4)
	float TetherLimit;  // 0xF0(0x4)
	float CollisionThickness;  // 0xF4(0x4)
	float AnimDriveSpringStiffness;  // 0xF8(0x4)
	float AnimDriveDamperStiffness;  // 0xFC(0x4)
	uint8_t  WindMethod;  // 0x100(0x1)
	char pad_257[3];  // 0x101(0x3)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig;  // 0x104(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig;  // 0x114(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig;  // 0x124(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig;  // 0x134(0x10)
	char pad_324[4];  // 0x144(0x4)

}; 



// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x28(Inherited: 0x28) 
struct UClothingSimulationFactoryNv : public UClothingSimulationFactory
{

}; 



// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0xA0(Inherited: 0x90) 
struct UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{
	char pad_144[16];  // 0x90(0x10)

	void SetAnimDriveDamperStiffness(float InStiffness); // Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
}; 



// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Size: 0x120(Inherited: 0xE0) 
struct UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
	struct TArray<float> MaxDistances;  // 0xE0(0x10)
	struct TArray<float> BackstopDistances;  // 0xF0(0x10)
	struct TArray<float> BackstopRadiuses;  // 0x100(0x10)
	struct TArray<float> AnimDriveMultipliers;  // 0x110(0x10)

}; 



