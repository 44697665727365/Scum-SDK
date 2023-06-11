#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct DcxVehicle.DcxVehicleDriveInputRate
// Size: 0x8(Inherited: 0x0) 
struct FDcxVehicleDriveInputRate
{
	float RiseRate;  // 0x0(0x4)
	float FallRate;  // 0x4(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
// Size: 0x24(Inherited: 0x0) 
struct FGetWheelData
{
	int32_t WheelIndex;  // 0x0(0x4)
	struct FDcxVehicleWheelData ReturnValue;  // 0x4(0x20)

}; 
// ScriptStruct DcxVehicle.DcxMath
// Size: 0x1(Inherited: 0x0) 
struct FDcxMath
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct DcxVehicle.DcxAnalogControlArray
// Size: 0x10(Inherited: 0x0) 
struct FDcxAnalogControlArray
{
	struct TArray<float> Items;  // 0x0(0x10)

}; 
// ScriptStruct DcxVehicle.DcxAnimNodeWheelSimulator
// Size: 0xE0(Inherited: 0xC8) 
struct FDcxAnimNodeWheelSimulator : public FAnimNode_SkeletalControlBase
{
	char pad_200[24];  // 0xC8(0x18)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
// Size: 0xD0(Inherited: 0x0) 
struct FGetWheelState
{
	int32_t WheelIndex;  // 0x0(0x4)
	char pad_4[12];  // 0x4(0xC)
	struct FDcxVehicleWheelState WheelState;  // 0x10(0xB0)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool ReturnValue : 1;  // 0xC0(0x1)
	char pad_193[15];  // 0xC1(0xF)

}; 
// Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
// Size: 0x8(Inherited: 0x0) 
struct FGetDriveTorque
{
	int32_t WheelIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct DcxVehicle.DcxGear
// Size: 0x4(Inherited: 0x0) 
struct FDcxGear
{
	int32_t GearNum;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
// Size: 0x4(Inherited: 0x0) 
struct FGetForwardSpeed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct DcxVehicle.DcxVehicleAnimInstanceProxy
// Size: 0x780(Inherited: 0x770) 
struct FDcxVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	char pad_1904[16];  // 0x770(0x10)

}; 
// ScriptStruct DcxVehicle.DcxVehicleClutchData
// Size: 0x10(Inherited: 0x0) 
struct FDcxVehicleClutchData
{
	float BitePoint;  // 0x0(0x4)
	float Strength;  // 0x4(0x4)
	char EDcxVehicleClutchAccuracyMode AccuracyMode;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	int32_t EstimateIterations;  // 0xC(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
// Size: 0x8(Inherited: 0x0) 
struct FIsWheelDisabled
{
	int32_t WheelIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct DcxVehicle.DcxVehicleDifferentialData4W
// Size: 0x1C(Inherited: 0x0) 
struct FDcxVehicleDifferentialData4W
{
	char EDcxVehicleDifferential4W DifferentialType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float FrontRearSplit;  // 0x4(0x4)
	float FrontLeftRightSplit;  // 0x8(0x4)
	float RearLeftRightSplit;  // 0xC(0x4)
	float CenterBias;  // 0x10(0x4)
	float FrontBias;  // 0x14(0x4)
	float RearBias;  // 0x18(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
// Size: 0x4(Inherited: 0x0) 
struct FSetChassisMass
{
	float Mass;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleWheels
{
	struct UDcxVehicleWheelsComponent* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct DcxVehicle.DcxVehicleDriveState
// Size: 0x18(Inherited: 0x0) 
struct FDcxVehicleDriveState
{
	struct FDcxAnalogControlArray AnalogControls;  // 0x0(0x10)
	struct FDcxGear CurrentGear;  // 0x10(0x4)
	struct FDcxGear TargetGear;  // 0x14(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
// Size: 0x4(Inherited: 0x0) 
struct FDisableWheel
{
	int32_t WheelIndex;  // 0x0(0x4)

}; 
// ScriptStruct DcxVehicle.DcxVehicleEngineData
// Size: 0xA0(Inherited: 0x0) 
struct FDcxVehicleEngineData
{
	struct FRuntimeFloatCurve TorqueCurve;  // 0x0(0x88)
	float MOI;  // 0x88(0x4)
	float IdleRPM;  // 0x8C(0x4)
	float MaxRPM;  // 0x90(0x4)
	float DampingRateFullThrottle;  // 0x94(0x4)
	float DampingRateZeroThrottleClutchEngaged;  // 0x98(0x4)
	float DampingRateZeroThrottleClutchDisengaged;  // 0x9C(0x4)

}; 
// ScriptStruct DcxVehicle.DcxVehicleGearboxData
// Size: 0x30(Inherited: 0x0) 
struct FDcxVehicleGearboxData
{
	char EDcxVehicleGearbox Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float FinalRatio;  // 0x4(0x4)
	float SwitchTime;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FDcxVehicleGearData> ForwardGears;  // 0x10(0x10)
	float ReverseGearRatio;  // 0x20(0x4)
	float Latency;  // 0x24(0x4)
	float NeutralGearUpRatio;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.SetStickyFrictionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetStickyFrictionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Value : 1;  // 0x0(0x1)

}; 
// ScriptStruct DcxVehicle.DcxVehicleGearData
// Size: 0xC(Inherited: 0x0) 
struct FDcxVehicleGearData
{
	float Ratio;  // 0x0(0x4)
	float DownRatio;  // 0x4(0x4)
	float UpRatio;  // 0x8(0x4)

}; 
// ScriptStruct DcxVehicle.DcxVehicleSuspensionData
// Size: 0x20(Inherited: 0x0) 
struct FDcxVehicleSuspensionData
{
	float NaturalFrequency;  // 0x0(0x4)
	float SpringDamperRatio;  // 0x4(0x4)
	float MaxCompression;  // 0x8(0x4)
	float MaxDroop;  // 0xC(0x4)
	float ForceOffset;  // 0x10(0x4)
	float CamberAtRest;  // 0x14(0x4)
	float CamberAtMaxCompression;  // 0x18(0x4)
	float CamberAtMaxDroop;  // 0x1C(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
// Size: 0xA0(Inherited: 0x0) 
struct FGetEngineData
{
	struct FDcxVehicleEngineData ReturnValue;  // 0x0(0xA0)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
// Size: 0x30(Inherited: 0x0) 
struct FGetGearboxData
{
	struct FDcxVehicleGearboxData ReturnValue;  // 0x0(0x30)

}; 
// ScriptStruct DcxVehicle.DcxDrivableSurfaceToTireFrictionPair
// Size: 0x10(Inherited: 0x0) 
struct FDcxDrivableSurfaceToTireFrictionPair
{
	struct UPhysicalMaterial* SurfaceMaterial;  // 0x0(0x8)
	float FrictionScale;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// ScriptStruct DcxVehicle.DcxVehicleTireLoadFilterData
// Size: 0x10(Inherited: 0x0) 
struct FDcxVehicleTireLoadFilterData
{
	float MinNormalizedLoad;  // 0x0(0x4)
	float MinFilteredNormalizedLoad;  // 0x4(0x4)
	float MaxNormalizedLoad;  // 0x8(0x4)
	float MaxFilteredNormalizedLoad;  // 0xC(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
// Size: 0x8(Inherited: 0x0) 
struct FGetWheelRotationSpeed
{
	int32_t WheelIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct DcxVehicle.DcxVehicleWheelData
// Size: 0x20(Inherited: 0x0) 
struct FDcxVehicleWheelData
{
	float Radius;  // 0x0(0x4)
	float Width;  // 0x4(0x4)
	float Mass;  // 0x8(0x4)
	float DampingRate;  // 0xC(0x4)
	float MaxBrakeTorque;  // 0x10(0x4)
	float MaxHandBrakeTorque;  // 0x14(0x4)
	float MaxSteer;  // 0x18(0x4)
	float ToeAngle;  // 0x1C(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
// Size: 0x4(Inherited: 0x0) 
struct FSetGroupsToAvoid
{
	struct FNavAvoidanceMask Mask;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
// Size: 0x8(Inherited: 0x0) 
struct FSetDriveTorque
{
	int32_t WheelIndex;  // 0x0(0x4)
	float DriveTorque;  // 0x4(0x4)

}; 
// ScriptStruct DcxVehicle.DcxVehicleWheelConfiguration
// Size: 0x78(Inherited: 0x0) 
struct FDcxVehicleWheelConfiguration
{
	struct FName BoneName;  // 0x0(0x8)
	struct FVector Offset;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)
	struct UStaticMesh* CollisionMesh;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bUsePresetShape : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FDcxVehicleWheelData WheelData;  // 0x24(0x20)
	struct FDcxVehicleSuspensionData SuspensionData;  // 0x44(0x20)
	char pad_100[4];  // 0x64(0x4)
	struct UDcxVehicleTire* Tire;  // 0x68(0x8)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bIsDriven : 1;  // 0x70(0x1)
	char EDcxVehicleWheelSweep SweepType;  // 0x71(0x1)
	char pad_114[6];  // 0x72(0x6)

}; 
// ScriptStruct DcxVehicle.DcxVehicleWheelState
// Size: 0xB0(Inherited: 0x0) 
struct FDcxVehicleWheelState
{
	struct FVector SuspensionLineStart;  // 0x0(0xC)
	struct FVector SuspensionLineDirection;  // 0xC(0xC)
	float SuspensionLineLength;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bIsInAir : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	struct AActor* TireContactActor;  // 0x20(0x8)
	struct UPhysicalMaterial* TireSurfaceMaterial;  // 0x28(0x8)
	struct FVector TireContactPoint;  // 0x30(0xC)
	struct FVector TireContactNormal;  // 0x3C(0xC)
	float TireFriction;  // 0x48(0x4)
	float SuspensionJounce;  // 0x4C(0x4)
	float SuspensionSpringForce;  // 0x50(0x4)
	struct FVector TireLongitudinalDirection;  // 0x54(0xC)
	struct FVector TireLateralDirection;  // 0x60(0xC)
	float LongitudinalSlip;  // 0x6C(0x4)
	float LateralSlip;  // 0x70(0x4)
	float SteerAngle;  // 0x74(0x4)
	char pad_120[56];  // 0x78(0x38)

}; 
// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// Size: 0x18(Inherited: 0x0) 
struct FDcxVehicleSetBasisVectors
{
	struct FVector Up;  // 0x0(0xC)
	struct FVector Forward;  // 0xC(0xC)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
// Size: 0x10(Inherited: 0x0) 
struct FGetClutchData
{
	struct FDcxVehicleClutchData ReturnValue;  // 0x0(0x10)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
// Size: 0x4(Inherited: 0x0) 
struct FSetAvoidanceGroup
{
	struct FNavAvoidanceMask Mask;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleDrive4W
{
	struct UDcxVehicleDriveComponent4W* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicle.GetMesh
// Size: 0x8(Inherited: 0x0) 
struct FGetMesh
{
	struct USkeletalMeshComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
// Size: 0x1(Inherited: 0x0) 
struct FEnableAvoidance
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
// Size: 0x4(Inherited: 0x0) 
struct FEnableWheel
{
	int32_t WheelIndex;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
// Size: 0x4(Inherited: 0x0) 
struct FGetTargetGear
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelInAir
// Size: 0x8(Inherited: 0x0) 
struct FIsWheelInAir
{
	int32_t WheelIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
// Size: 0x8(Inherited: 0x0) 
struct FGetAnalogControl
{
	char Control;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
// Size: 0x10(Inherited: 0x0) 
struct FSetClutchData
{
	struct FDcxVehicleClutchData NewClutchData;  // 0x0(0x10)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
// Size: 0xC(Inherited: 0x0) 
struct FGetBoneName
{
	int32_t WheelIndex;  // 0x0(0x4)
	struct FName ReturnValue;  // 0x4(0x8)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
// Size: 0x4(Inherited: 0x0) 
struct FGetChassisMass
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
// Size: 0xA0(Inherited: 0x0) 
struct FSetEngineData
{
	struct FDcxVehicleEngineData NewEngineData;  // 0x0(0xA0)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake
// Size: 0x4(Inherited: 0x0) 
struct FSetHandbrake
{
	float Handbrake;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
// Size: 0x4(Inherited: 0x0) 
struct FGetNumWheels
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
// Size: 0x8(Inherited: 0x0) 
struct FGetRawInput
{
	struct UDcxVehicleWheelsRawInput* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
// Size: 0x24(Inherited: 0x0) 
struct FGetSuspensionData
{
	int32_t WheelIndex;  // 0x0(0x4)
	struct FDcxVehicleSuspensionData ReturnValue;  // 0x4(0x20)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
// Size: 0x10(Inherited: 0x0) 
struct FGetWheelOffset
{
	int32_t WheelIndex;  // 0x0(0x4)
	struct FVector ReturnValue;  // 0x4(0xC)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
// Size: 0x10(Inherited: 0x0) 
struct FGetTire
{
	int32_t WheelIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UDcxVehicleTire* ReturnValue;  // 0x8(0x8)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
// Size: 0x8(Inherited: 0x0) 
struct FGetWheelRotationAngle
{
	int32_t WheelIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
// Size: 0x8(Inherited: 0x0) 
struct FSetBrakeTorque
{
	int32_t WheelIndex;  // 0x0(0x4)
	float BrakeTorque;  // 0x4(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
// Size: 0x18(Inherited: 0x0) 
struct FServerUpdateState
{
	struct FDcxAnalogControlArray AnalogControls;  // 0x0(0x10)
	struct FDcxGear CurrentGear;  // 0x10(0x4)
	struct FDcxGear TargetGear;  // 0x14(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
// Size: 0x4(Inherited: 0x0) 
struct FSetGroupsToIgnore
{
	struct FNavAvoidanceMask Mask;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
// Size: 0x24(Inherited: 0x0) 
struct FSetSuspensionData
{
	int32_t WheelIndex;  // 0x0(0x4)
	struct FDcxVehicleSuspensionData NewSuspensionData;  // 0x4(0x20)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
// Size: 0x1(Inherited: 0x0) 
struct FSetGearboxType
{
	char EDcxVehicleGearbox NewGearboxType;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
// Size: 0x10(Inherited: 0x0) 
struct FSetWheelOffset
{
	int32_t WheelIndex;  // 0x0(0x4)
	struct FVector Offset;  // 0x4(0xC)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
// Size: 0x10(Inherited: 0x0) 
struct FSetTire
{
	int32_t WheelId;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UDcxVehicleTire* NewTire;  // 0x8(0x8)

}; 
// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
// Size: 0x24(Inherited: 0x0) 
struct FSetWheelData
{
	int32_t WheelIndex;  // 0x0(0x4)
	struct FDcxVehicleWheelData NewWheelData;  // 0x4(0x20)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentGear
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
// Size: 0x4(Inherited: 0x0) 
struct FGetEngineRotationSpeed
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
// Size: 0x1(Inherited: 0x0) 
struct FGetGearboxType
{
	char EDcxVehicleGearbox ReturnValue;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.GetStickyFrictionEnabled
// Size: 0x1(Inherited: 0x0) 
struct FGetStickyFrictionEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
// Size: 0x4(Inherited: 0x0) 
struct FSetEngineRotationSpeed
{
	float RPM;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
// Size: 0x30(Inherited: 0x0) 
struct FSetGearboxData
{
	struct FDcxVehicleGearboxData NewGearboxData;  // 0x0(0x30)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
// Size: 0x8(Inherited: 0x0) 
struct FSetTargetGear
{
	int32_t NewGear;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bImmediate : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
// Size: 0x1C(Inherited: 0x0) 
struct FGetDifferentialData
{
	struct FDcxVehicleDifferentialData4W ReturnValue;  // 0x0(0x1C)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
// Size: 0x8(Inherited: 0x0) 
struct FGetRawInput4W
{
	struct UDcxVehicleDriveRawInput4W* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
// Size: 0x1C(Inherited: 0x0) 
struct FSetDifferentialData
{
	struct FDcxVehicleDifferentialData4W NewDifferentialData;  // 0x0(0x1C)

}; 
// Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW
// Size: 0x8(Inherited: 0x0) 
struct FGetRawInputNW
{
	struct UDcxVehicleDriveRawInputNW* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel
// Size: 0x8(Inherited: 0x0) 
struct FIsDrivenWheel
{
	int32_t WheelIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel
// Size: 0x8(Inherited: 0x0) 
struct FSetDrivenWheel
{
	int32_t WheelIndex;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bIsDriven : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
// Size: 0x1(Inherited: 0x0) 
struct FGetDriveModel
{
	char EDcxVehicleDriveControlModelTank ReturnValue;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake
// Size: 0x4(Inherited: 0x0) 
struct FGetHandbrake
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
// Size: 0x8(Inherited: 0x0) 
struct FGetRawInputTank
{
	struct UDcxVehicleDriveRawInputTank* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
// Size: 0x1(Inherited: 0x0) 
struct FSetDriveModel
{
	char EDcxVehicleDriveControlModelTank ControlModel;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
// Size: 0x4(Inherited: 0x0) 
struct FGetThrottle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
// Size: 0x4(Inherited: 0x0) 
struct FSetThrottle
{
	float Throttle;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
// Size: 0x4(Inherited: 0x0) 
struct FGetClutch
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust
// Size: 0x4(Inherited: 0x0) 
struct FSetLeftThrust
{
	float Thrust;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
// Size: 0x1(Inherited: 0x0) 
struct FGetGearDown
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
// Size: 0x1(Inherited: 0x0) 
struct FGetGearUp
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake
// Size: 0x4(Inherited: 0x0) 
struct FSetBrake
{
	float NewBrake;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
// Size: 0x4(Inherited: 0x0) 
struct FSetClutch
{
	float Clutch;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
// Size: 0x1(Inherited: 0x0) 
struct FSetGearDown
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bGearDownPressed : 1;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
// Size: 0x1(Inherited: 0x0) 
struct FSetGearUp
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bGearUpPressed : 1;  // 0x0(0x1)

}; 
// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake
// Size: 0x4(Inherited: 0x0) 
struct FGetBrake
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer
// Size: 0x4(Inherited: 0x0) 
struct FGetSteer
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
// Size: 0x8(Inherited: 0x0) 
struct FGetBrakeTorque
{
	int32_t WheelIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer
// Size: 0x4(Inherited: 0x0) 
struct FSetSteer
{
	float NewSteer;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake
// Size: 0x4(Inherited: 0x0) 
struct FGetLeftBrake
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust
// Size: 0x4(Inherited: 0x0) 
struct FGetLeftThrust
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake
// Size: 0x4(Inherited: 0x0) 
struct FGetRightBrake
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust
// Size: 0x4(Inherited: 0x0) 
struct FGetRightThrust
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake
// Size: 0x4(Inherited: 0x0) 
struct FSetLeftBrake
{
	float Brake;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake
// Size: 0x4(Inherited: 0x0) 
struct FSetRightBrake
{
	float Brake;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust
// Size: 0x4(Inherited: 0x0) 
struct FSetRightThrust
{
	float Thrust;  // 0x0(0x4)

}; 
// Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleNoDrive
{
	struct UDcxVehicleNoDriveComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
// Size: 0x8(Inherited: 0x0) 
struct FGetRawInputND
{
	struct UDcxVehicleNoDriveRawInput* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
// Size: 0x8(Inherited: 0x0) 
struct FGetSteerAngle
{
	int32_t WheelIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
// Size: 0x8(Inherited: 0x0) 
struct FSetSteerAngle
{
	int32_t WheelIndex;  // 0x0(0x4)
	float SteerAngle;  // 0x4(0x4)

}; 
// Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleDriveNW
{
	struct UDcxVehicleDriveComponentNW* ReturnValue;  // 0x0(0x8)

}; 
// Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank
// Size: 0x8(Inherited: 0x0) 
struct FGetVehicleDriveTank
{
	struct UDcxVehicleDriveComponentTank* ReturnValue;  // 0x0(0x8)

}; 
