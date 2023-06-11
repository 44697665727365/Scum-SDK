#pragma once 
#include <ArchVisCharacter_Structs.h>
 
 
 
// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x530(Inherited: 0x4D0) 
struct AArchVisCharacter : public ACharacter
{
	struct FString LookUpAxisName;  // 0x4C8(0x10)
	struct FString LookUpAtRateAxisName;  // 0x4D8(0x10)
	struct FString TurnAxisName;  // 0x4E8(0x10)
	struct FString TurnAtRateAxisName;  // 0x4F8(0x10)
	struct FString MoveForwardAxisName;  // 0x508(0x10)
	struct FString MoveRightAxisName;  // 0x518(0x10)
	float MouseSensitivityScale_Pitch;  // 0x528(0x4)
	float MouseSensitivityScale_Yaw;  // 0x52C(0x4)

}; 



// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xB40(Inherited: 0xAF0) 
struct UArchVisCharMovementComponent : public UCharacterMovementComponent
{
	struct FRotator RotationalAcceleration;  // 0xAF0(0xC)
	struct FRotator RotationalDeceleration;  // 0xAFC(0xC)
	struct FRotator MaxRotationalVelocity;  // 0xB08(0xC)
	float MinPitch;  // 0xB14(0x4)
	float MaxPitch;  // 0xB18(0x4)
	float WalkingFriction;  // 0xB1C(0x4)
	float WalkingSpeed;  // 0xB20(0x4)
	float WalkingAcceleration;  // 0xB24(0x4)
	char pad_2856[24];  // 0xB28(0x18)

}; 



