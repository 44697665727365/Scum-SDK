#pragma once 
#include <ChaosCloth_Structs.h>
 
 
 
// Class ChaosCloth.ChaosClothConfig
// Size: 0xC8(Inherited: 0x28) 
struct UChaosClothConfig : public UClothConfigCommon
{
	uint8_t  MassMode;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float UniformMass;  // 0x2C(0x4)
	float TotalMass;  // 0x30(0x4)
	float Density;  // 0x34(0x4)
	float MinPerParticleMass;  // 0x38(0x4)
	float EdgeStiffness;  // 0x3C(0x4)
	float BendingStiffness;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bUseBendingElements : 1;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)
	float AreaStiffness;  // 0x48(0x4)
	float VolumeStiffness;  // 0x4C(0x4)
	struct FChaosClothWeightedValue TetherStiffness;  // 0x50(0x8)
	float LimitScale;  // 0x58(0x4)
	char pad_92_1 : 7;  // 0x5C(0x1)
	bool bUseGeodesicDistance : 1;  // 0x5C(0x1)
	char pad_93[3];  // 0x5D(0x3)
	float ShapeTargetStiffness;  // 0x60(0x4)
	float CollisionThickness;  // 0x64(0x4)
	float FrictionCoefficient;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bUseCCD : 1;  // 0x6C(0x1)
	char pad_109_1 : 7;  // 0x6D(0x1)
	bool bUseSelfCollisions : 1;  // 0x6D(0x1)
	char pad_110[2];  // 0x6E(0x2)
	float SelfCollisionThickness;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bUseLegacyBackstop : 1;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)
	float DampingCoefficient;  // 0x78(0x4)
	char pad_124_1 : 7;  // 0x7C(0x1)
	bool bUsePointBasedWindModel : 1;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	float DragCoefficient;  // 0x80(0x4)
	float LiftCoefficient;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bUseGravityOverride : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	float GravityScale;  // 0x8C(0x4)
	struct FVector Gravity;  // 0x90(0xC)
	struct FChaosClothWeightedValue AnimDriveStiffness;  // 0x9C(0x8)
	struct FChaosClothWeightedValue AnimDriveDamping;  // 0xA4(0x8)
	struct FVector LinearVelocityScale;  // 0xAC(0xC)
	float AngularVelocityScale;  // 0xB8(0x4)
	float FictitiousAngularScale;  // 0xBC(0x4)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bUseTetrahedralConstraints : 1;  // 0xC0(0x1)
	char pad_193_1 : 7;  // 0xC1(0x1)
	bool bUseThinShellVolumeConstraints : 1;  // 0xC1(0x1)
	char pad_194_1 : 7;  // 0xC2(0x1)
	bool bUseContinuousCollisionDetection : 1;  // 0xC2(0x1)
	char pad_195[5];  // 0xC3(0x5)

}; 



// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0xA0(Inherited: 0x90) 
struct UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
	char pad_144[16];  // 0x90(0x10)

}; 



// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x28(Inherited: 0x28) 
struct UChaosClothingSimulationFactory : public UClothingSimulationFactory
{

}; 



// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x38(Inherited: 0x28) 
struct UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
	int32_t IterationCount;  // 0x28(0x4)
	int32_t SubdivisionCount;  // 0x2C(0x4)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bUseLocalSpaceSimulation : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bUseXPBDConstraints : 1;  // 0x31(0x1)
	char pad_50[6];  // 0x32(0x6)

}; 



// Class ChaosCloth.ChaosClothingInteractor
// Size: 0x40(Inherited: 0x30) 
struct UChaosClothingInteractor : public UClothingInteractor
{
	char pad_48[16];  // 0x30(0x10)

	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	void SetLongRangeAttachmentLinear(float TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	void SetLongRangeAttachment(struct FVector2D TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // Function ChaosCloth.ChaosClothingInteractor.SetGravity
	void SetDamping(float DampingCoefficient); // Function ChaosCloth.ChaosClothingInteractor.SetDamping
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Function ChaosCloth.ChaosClothingInteractor.SetCollision
	void SetAnimDriveLinear(float AnimDriveStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	void ResetAndTeleport(bool bReset, bool bTeleport); // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
}; 



