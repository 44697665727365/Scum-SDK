#pragma once 
#include "SDK.h" 
 
 
// Function ChaosCloth.ChaosClothingInteractor.SetCollision
// Size: 0x10(Inherited: 0x0) 
struct FSetCollision
{
	float CollisionThickness;  // 0x0(0x4)
	float FrictionCoefficient;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bUseCCD : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float SelfCollisionThickness;  // 0xC(0x4)

}; 
// ScriptStruct ChaosCloth.ChaosClothWeightedValue
// Size: 0x8(Inherited: 0x0) 
struct FChaosClothWeightedValue
{
	float Low;  // 0x0(0x4)
	float High;  // 0x4(0x4)

}; 
// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
// Size: 0x2(Inherited: 0x0) 
struct FResetAndTeleport
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bReset : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bTeleport : 1;  // 0x1(0x1)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
// Size: 0x14(Inherited: 0x0) 
struct FSetAerodynamics
{
	float DragCoefficient;  // 0x0(0x4)
	float LiftCoefficient;  // 0x4(0x4)
	struct FVector WindVelocity;  // 0x8(0xC)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
// Size: 0x10(Inherited: 0x0) 
struct FSetAnimDrive
{
	struct FVector2D AnimDriveStiffness;  // 0x0(0x8)
	struct FVector2D AnimDriveDamping;  // 0x8(0x8)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetDamping
// Size: 0x4(Inherited: 0x0) 
struct FSetDamping
{
	float DampingCoefficient;  // 0x0(0x4)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
// Size: 0x4(Inherited: 0x0) 
struct FSetAnimDriveLinear
{
	float AnimDriveStiffness;  // 0x0(0x4)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetGravity
// Size: 0x14(Inherited: 0x0) 
struct FSetGravity
{
	float GravityScale;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bIsGravityOverridden : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	struct FVector GravityOverride;  // 0x8(0xC)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
// Size: 0x8(Inherited: 0x0) 
struct FSetLongRangeAttachment
{
	struct FVector2D TetherStiffness;  // 0x0(0x8)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
// Size: 0x4(Inherited: 0x0) 
struct FSetLongRangeAttachmentLinear
{
	float TetherStiffness;  // 0x0(0x4)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
// Size: 0xC(Inherited: 0x0) 
struct FSetMaterialLinear
{
	float EdgeStiffness;  // 0x0(0x4)
	float BendingStiffness;  // 0x4(0x4)
	float AreaStiffness;  // 0x8(0x4)

}; 
// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
// Size: 0x14(Inherited: 0x0) 
struct FSetVelocityScale
{
	struct FVector LinearVelocityScale;  // 0x0(0xC)
	float AngularVelocityScale;  // 0xC(0x4)
	float FictitiousAngularScale;  // 0x10(0x4)

}; 
