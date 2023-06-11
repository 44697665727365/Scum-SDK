#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// Size: 0x780(Inherited: 0x770) 
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	char pad_1904[16];  // 0x770(0x10)

}; 
// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// Size: 0x10(Inherited: 0x0) 
struct FTireConfigMaterialFriction
{
	struct UPhysicalMaterial* PhysicalMaterial;  // 0x0(0x8)
	float FrictionScale;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0xE0(Inherited: 0xC8) 
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	char pad_200[24];  // 0xC8(0x18)

}; 
// ScriptStruct PhysXVehicles.VehicleInputRate
// Size: 0x8(Inherited: 0x0) 
struct FVehicleInputRate
{
	float RiseRate;  // 0x0(0x4)
	float FallRate;  // 0x4(0x4)

}; 
// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// Size: 0x14(Inherited: 0x0) 
struct FReplicatedVehicleState
{
	float SteeringInput;  // 0x0(0x4)
	float ThrottleInput;  // 0x4(0x4)
	float BrakeInput;  // 0x8(0x4)
	float HandbrakeInput;  // 0xC(0x4)
	int32_t CurrentGear;  // 0x10(0x4)

}; 
// ScriptStruct PhysXVehicles.WheelSetup
// Size: 0x20(Inherited: 0x0) 
struct FWheelSetup
{
	UVehicleWheel* WheelClass;  // 0x0(0x8)
	struct FName BoneName;  // 0x8(0x8)
	struct FVector AdditionalOffset;  // 0x10(0xC)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bDisableSteering : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)

}; 
// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// Size: 0x8(Inherited: 0x0) 
struct FSetSteerAngle
{
	float SteerAngle;  // 0x0(0x4)
	int32_t WheelIndex;  // 0x4(0x4)

}; 
// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30(Inherited: 0x0) 
struct FVehicleTransmissionData
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseGearAutoBox : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float GearSwitchTime;  // 0x4(0x4)
	float GearAutoBoxLatency;  // 0x8(0x4)
	float FinalRatio;  // 0xC(0x4)
	struct TArray<struct FVehicleGearData> ForwardGears;  // 0x10(0x10)
	float ReverseGearRatio;  // 0x20(0x4)
	float NeutralGearUpRatio;  // 0x24(0x4)
	float ClutchStrength;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct PhysXVehicles.VehicleGearData
// Size: 0xC(Inherited: 0x0) 
struct FVehicleGearData
{
	float Ratio;  // 0x0(0x4)
	float DownRatio;  // 0x4(0x4)
	float UpRatio;  // 0x8(0x4)

}; 
// ScriptStruct PhysXVehicles.VehicleEngineData
// Size: 0xA0(Inherited: 0x0) 
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve TorqueCurve;  // 0x0(0x88)
	float MaxRPM;  // 0x88(0x4)
	float MOI;  // 0x8C(0x4)
	float DampingRateFullThrottle;  // 0x90(0x4)
	float DampingRateZeroThrottleClutchEngaged;  // 0x94(0x4)
	float DampingRateZeroThrottleClutchDisengaged;  // 0x98(0x4)
	char pad_156[4];  // 0x9C(0x4)

}; 
// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// Size: 0x1C(Inherited: 0x0) 
struct FVehicleDifferential4WData
{
	char EVehicleDifferential4W DifferentialType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float FrontRearSplit;  // 0x4(0x4)
	float FrontLeftRightSplit;  // 0x8(0x4)
	float RearLeftRightSplit;  // 0xC(0x4)
	float CentreBias;  // 0x10(0x4)
	float FrontBias;  // 0x14(0x4)
	float RearBias;  // 0x18(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// Size: 0x4(Inherited: 0x0) 
struct FSetGroupsToAvoidMask
{
	struct FNavAvoidanceMask GroupMask;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentGear
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// Size: 0x4(Inherited: 0x0) 
struct FGetEngineMaxRotationSpeed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// Size: 0x4(Inherited: 0x0) 
struct FGetEngineRotationSpeed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// Size: 0x4(Inherited: 0x0) 
struct FGetForwardSpeed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicle
{
	struct AWheeledVehicle* ReturnValue;  // 0x0(0x8)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// Size: 0x4(Inherited: 0x0) 
struct FGetTargetGear
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// Size: 0x1(Inherited: 0x0) 
struct FSetHandbrakeInput
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewHandbrake : 1;  // 0x0(0x1)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// Size: 0x1(Inherited: 0x0) 
struct FGetUseAutoGears
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetRotationAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// Size: 0x8(Inherited: 0x0) 
struct FSetBrakeTorque
{
	float BrakeTorque;  // 0x0(0x4)
	int32_t WheelIndex;  // 0x4(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// Size: 0x14(Inherited: 0x0) 
struct FServerUpdateState
{
	float InSteeringInput;  // 0x0(0x4)
	float InThrottleInput;  // 0x4(0x4)
	float InBrakeInput;  // 0x8(0x4)
	float InHandbrakeInput;  // 0xC(0x4)
	int32_t CurrentGear;  // 0x10(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetAvoidanceEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnable : 1;  // 0x0(0x1)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// Size: 0x4(Inherited: 0x0) 
struct FSetAvoidanceGroup
{
	int32_t GroupFlags;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// Size: 0x4(Inherited: 0x0) 
struct FSetAvoidanceGroupMask
{
	struct FNavAvoidanceMask GroupMask;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// Size: 0x4(Inherited: 0x0) 
struct FSetBrakeInput
{
	float Brake;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// Size: 0x4(Inherited: 0x0) 
struct FSetGroupsToIgnoreMask
{
	struct FNavAvoidanceMask GroupMask;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// Size: 0x1(Inherited: 0x0) 
struct FSetGearDown
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewGearDown : 1;  // 0x0(0x1)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// Size: 0x1(Inherited: 0x0) 
struct FSetGearUp
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewGearUp : 1;  // 0x0(0x1)

}; 
// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// Size: 0x8(Inherited: 0x0) 
struct FSetDriveTorque
{
	float DriveTorque;  // 0x0(0x4)
	int32_t WheelIndex;  // 0x4(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// Size: 0x4(Inherited: 0x0) 
struct FSetGroupsToAvoid
{
	int32_t GroupFlags;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// Size: 0x4(Inherited: 0x0) 
struct FSetGroupsToIgnore
{
	int32_t GroupFlags;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// Size: 0x4(Inherited: 0x0) 
struct FSetSteeringInput
{
	float Steering;  // 0x0(0x4)

}; 
// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// Size: 0x4(Inherited: 0x0) 
struct FGetSuspensionOffset
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// Size: 0x8(Inherited: 0x0) 
struct FSetTargetGear
{
	int32_t GearNum;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bImmediate : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// Size: 0x4(Inherited: 0x0) 
struct FSetThrottleInput
{
	float Throttle;  // 0x0(0x4)

}; 
// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// Size: 0x1(Inherited: 0x0) 
struct FSetUseAutoGears
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseAuto : 1;  // 0x0(0x1)

}; 
// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetSteerAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function PhysXVehicles.VehicleWheel.IsInAir
// Size: 0x1(Inherited: 0x0) 
struct FIsInAir
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
