#pragma once 
#include <PhysXVehicles_Structs.h>
 
 
 
// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x290(Inherited: 0x138) 
struct UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
	char pad_312[8];  // 0x138(0x8)
	char bDeprecatedSpringOffsetMode : 1;  // 0x140(0x1)
	char bReverseAsBrake : 1;  // 0x140(0x1)
	char bUseRVOAvoidance : 1;  // 0x140(0x1)
	char bRawHandbrakeInput : 1;  // 0x140(0x1)
	char bRawGearUpInput : 1;  // 0x140(0x1)
	char bRawGearDownInput : 1;  // 0x140(0x1)
	char pad_320_1 : 2;  // 0x140(0x1)
	char pad_321[4];  // 0x141(0x4)
	char bWasAvoidanceUpdated : 1;  // 0x144(0x1)
	char pad_324_1 : 7;  // 0x144(0x1)
	char pad_325[4];  // 0x145(0x4)
	float Mass;  // 0x148(0x4)
	char pad_332[4];  // 0x14C(0x4)
	struct TArray<struct FWheelSetup> WheelSetups;  // 0x150(0x10)
	float DragCoefficient;  // 0x160(0x4)
	float ChassisWidth;  // 0x164(0x4)
	float ChassisHeight;  // 0x168(0x4)
	float DragArea;  // 0x16C(0x4)
	float EstimatedMaxEngineSpeed;  // 0x170(0x4)
	float MaxEngineRPM;  // 0x174(0x4)
	float DebugDragMagnitude;  // 0x178(0x4)
	struct FVector InertiaTensorScale;  // 0x17C(0xC)
	float MinNormalizedTireLoad;  // 0x188(0x4)
	float MinNormalizedTireLoadFiltered;  // 0x18C(0x4)
	float MaxNormalizedTireLoad;  // 0x190(0x4)
	float MaxNormalizedTireLoadFiltered;  // 0x194(0x4)
	float ThresholdLongitudinalSpeed;  // 0x198(0x4)
	int32_t LowForwardSpeedSubStepCount;  // 0x19C(0x4)
	int32_t HighForwardSpeedSubStepCount;  // 0x1A0(0x4)
	char pad_420[4];  // 0x1A4(0x4)
	struct TArray<struct UVehicleWheel*> Wheels;  // 0x1A8(0x10)
	char pad_440[24];  // 0x1B8(0x18)
	float RVOAvoidanceRadius;  // 0x1D0(0x4)
	float RVOAvoidanceHeight;  // 0x1D4(0x4)
	float AvoidanceConsiderationRadius;  // 0x1D8(0x4)
	float RVOSteeringStep;  // 0x1DC(0x4)
	float RVOThrottleStep;  // 0x1E0(0x4)
	int32_t AvoidanceUID;  // 0x1E4(0x4)
	struct FNavAvoidanceMask AvoidanceGroup;  // 0x1E8(0x4)
	struct FNavAvoidanceMask GroupsToAvoid;  // 0x1EC(0x4)
	struct FNavAvoidanceMask GroupsToIgnore;  // 0x1F0(0x4)
	float AvoidanceWeight;  // 0x1F4(0x4)
	struct FVector PendingLaunchVelocity;  // 0x1F8(0xC)
	struct FReplicatedVehicleState ReplicatedState;  // 0x204(0x14)
	char pad_536[4];  // 0x218(0x4)
	float RawSteeringInput;  // 0x21C(0x4)
	float RawThrottleInput;  // 0x220(0x4)
	float RawBrakeInput;  // 0x224(0x4)
	float SteeringInput;  // 0x228(0x4)
	float ThrottleInput;  // 0x22C(0x4)
	float BrakeInput;  // 0x230(0x4)
	float HandbrakeInput;  // 0x234(0x4)
	float IdleBrakeInput;  // 0x238(0x4)
	float StopThreshold;  // 0x23C(0x4)
	float WrongDirectionThreshold;  // 0x240(0x4)
	struct FVehicleInputRate ThrottleInputRate;  // 0x244(0x8)
	struct FVehicleInputRate BrakeInputRate;  // 0x24C(0x8)
	struct FVehicleInputRate HandbrakeInputRate;  // 0x254(0x8)
	struct FVehicleInputRate SteeringInputRate;  // 0x25C(0x8)
	char pad_612[36];  // 0x264(0x24)
	struct AController* OverrideController;  // 0x288(0x8)

	void SetUseAutoGears(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	void SetThrottleInput(float Throttle); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	void SetTargetGear(int32_t GearNum, bool bImmediate); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	void SetSteeringInput(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	void SetHandbrakeInput(bool bNewHandbrake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	void SetGroupsToIgnore(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	void SetGroupsToAvoid(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	void SetGearUp(bool bNewGearUp); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	void SetGearDown(bool bNewGearDown); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	void SetBrakeInput(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	void SetAvoidanceGroup(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	void SetAvoidanceEnabled(bool bEnable); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	bool GetUseAutoGears(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	int32_t GetTargetGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	float GetForwardSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	float GetEngineRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	float GetEngineMaxRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	int32_t GetCurrentGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
}; 



// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x290(Inherited: 0x290) 
struct USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{

	void SetSteerAngle(float SteerAngle, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
}; 



// Class PhysXVehicles.WheeledVehicle
// Size: 0x290(Inherited: 0x280) 
struct AWheeledVehicle : public APawn
{
	struct USkeletalMeshComponent* Mesh;  // 0x280(0x8)
	struct UWheeledVehicleMovementComponent* VehicleMovement;  // 0x288(0x8)

}; 



// Class PhysXVehicles.VehicleAnimInstance
// Size: 0xA60(Inherited: 0x2C0) 
struct UVehicleAnimInstance : public UAnimInstance
{
	char pad_704[1936];  // 0x2C0(0x790)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent;  // 0xA50(0x8)
	char pad_2648[8];  // 0xA58(0x8)

	struct AWheeledVehicle* GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle
}; 



// Class PhysXVehicles.TireConfig
// Size: 0x50(Inherited: 0x30) 
struct UTireConfig : public UDataAsset
{
	float FrictionScale;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales;  // 0x38(0x10)
	char pad_72[8];  // 0x48(0x8)

}; 



// Class PhysXVehicles.VehicleWheel
// Size: 0xF0(Inherited: 0x28) 
struct UVehicleWheel : public UObject
{
	struct UStaticMesh* CollisionMesh;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bDontCreateShape : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bAutoAdjustCollisionSize : 1;  // 0x31(0x1)
	char pad_50[2];  // 0x32(0x2)
	struct FVector Offset;  // 0x34(0xC)
	float ShapeRadius;  // 0x40(0x4)
	float ShapeWidth;  // 0x44(0x4)
	float Mass;  // 0x48(0x4)
	float DampingRate;  // 0x4C(0x4)
	float SteerAngle;  // 0x50(0x4)
	char pad_84_1 : 7;  // 0x54(0x1)
	bool bAffectedByHandbrake : 1;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)
	struct UTireType* TireType;  // 0x58(0x8)
	struct UTireConfig* TireConfig;  // 0x60(0x8)
	float LatStiffMaxLoad;  // 0x68(0x4)
	float LatStiffValue;  // 0x6C(0x4)
	float LongStiffValue;  // 0x70(0x4)
	float SuspensionForceOffset;  // 0x74(0x4)
	float SuspensionMaxRaise;  // 0x78(0x4)
	float SuspensionMaxDrop;  // 0x7C(0x4)
	float SuspensionNaturalFrequency;  // 0x80(0x4)
	float SuspensionDampingRatio;  // 0x84(0x4)
	char EWheelSweepType SweepType;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	float MaxBrakeTorque;  // 0x8C(0x4)
	float MaxHandBrakeTorque;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)
	struct UWheeledVehicleMovementComponent* VehicleSim;  // 0x98(0x8)
	int32_t WheelIndex;  // 0xA0(0x4)
	float DebugLongSlip;  // 0xA4(0x4)
	float DebugLatSlip;  // 0xA8(0x4)
	float DebugNormalizedTireLoad;  // 0xAC(0x4)
	char pad_176[4];  // 0xB0(0x4)
	float DebugWheelTorque;  // 0xB4(0x4)
	float DebugLongForce;  // 0xB8(0x4)
	float DebugLatForce;  // 0xBC(0x4)
	struct FVector Location;  // 0xC0(0xC)
	struct FVector OldLocation;  // 0xCC(0xC)
	struct FVector Velocity;  // 0xD8(0xC)
	char pad_228[12];  // 0xE4(0xC)

	bool IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir
	float GetSuspensionOffset(); // Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	float GetSteerAngle(); // Function PhysXVehicles.VehicleWheel.GetSteerAngle
	float GetRotationAngle(); // Function PhysXVehicles.VehicleWheel.GetRotationAngle
}; 



// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x408(Inherited: 0x290) 
struct UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
	struct FVehicleEngineData EngineSetup;  // 0x290(0xA0)
	struct FVehicleDifferential4WData DifferentialSetup;  // 0x330(0x1C)
	float AckermannAccuracy;  // 0x34C(0x4)
	struct FVehicleTransmissionData TransmissionSetup;  // 0x350(0x30)
	struct FRuntimeFloatCurve SteeringCurve;  // 0x380(0x88)

}; 



