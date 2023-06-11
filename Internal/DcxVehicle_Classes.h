#pragma once 
#include <DcxVehicle_Structs.h>
 
 
 
// Class DcxVehicle.DcxVehicle4W
// Size: 0x290(Inherited: 0x290) 
struct ADcxVehicle4W : public ADcxVehicle
{

	struct UDcxVehicleDriveComponent4W* GetVehicleDrive4W(); // Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W
}; 



// Class DcxVehicle.DcxVehicleDriveComponentNW
// Size: 0x3E8(Inherited: 0x3E8) 
struct UDcxVehicleDriveComponentNW : public UDcxVehicleDriveComponent
{

	void SetDrivenWheel(int32_t WheelIndex, bool bIsDriven); // Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel
	bool IsDrivenWheel(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel
	struct UDcxVehicleDriveRawInputNW* GetRawInputNW(); // Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW
}; 



// Class DcxVehicle.DcxVehicle
// Size: 0x290(Inherited: 0x280) 
struct ADcxVehicle : public APawn
{
	struct USkeletalMeshComponent* Mesh;  // 0x280(0x8)
	struct UDcxVehicleWheelsComponent* VehicleWheels;  // 0x288(0x8)

	struct UDcxVehicleWheelsComponent* GetVehicleWheels(); // Function DcxVehicle.DcxVehicle.GetVehicleWheels
	struct USkeletalMeshComponent* GetMesh(); // Function DcxVehicle.DcxVehicle.GetMesh
	void DcxVehicleSetBasisVectors(struct FVector& Up, struct FVector& Forward); // Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
}; 



// Class DcxVehicle.DcxVehicleDriveComponent4W
// Size: 0x408(Inherited: 0x3E8) 
struct UDcxVehicleDriveComponent4W : public UDcxVehicleDriveComponent
{
	struct FDcxVehicleDifferentialData4W DifferentialData;  // 0x3E8(0x1C)
	float AckermannGeometryAccuracy;  // 0x404(0x4)

	void SetDifferentialData(struct FDcxVehicleDifferentialData4W NewDifferentialData); // Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
	struct UDcxVehicleDriveRawInput4W* GetRawInput4W(); // Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
	struct FDcxVehicleDifferentialData4W GetDifferentialData(); // Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
}; 



// Class DcxVehicle.DcxVehicleNoDrive
// Size: 0x290(Inherited: 0x290) 
struct ADcxVehicleNoDrive : public ADcxVehicle
{

	struct UDcxVehicleNoDriveComponent* GetVehicleNoDrive(); // Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive
}; 



// Class DcxVehicle.DcxVehicleAnimInstance
// Size: 0xA50(Inherited: 0x2C0) 
struct UDcxVehicleAnimInstance : public UAnimInstance
{
	char pad_704[1920];  // 0x2C0(0x780)
	struct UDcxVehicleWheelsComponent* VehicleWheels;  // 0xA40(0x8)
	char pad_2632[8];  // 0xA48(0x8)

}; 



// Class DcxVehicle.DcxVehicleWheelsComponent
// Size: 0x270(Inherited: 0x138) 
struct UDcxVehicleWheelsComponent : public UPawnMovementComponent
{
	char pad_312[56];  // 0x138(0x38)
	float ChassisMass;  // 0x170(0x4)
	struct FVector InertiaTensorScale;  // 0x174(0xC)
	struct TArray<struct FDcxVehicleWheelConfiguration> WheelConfigurations;  // 0x180(0x10)
	struct FDcxVehicleTireLoadFilterData TireLoadFilter;  // 0x190(0x10)
	char pad_416_1 : 7;  // 0x1A0(0x1)
	bool bUseAvoidance : 1;  // 0x1A0(0x1)
	char pad_417[3];  // 0x1A1(0x3)
	float AvoidanceWeight;  // 0x1A4(0x4)
	int32_t AvoidanceUID;  // 0x1A8(0x4)
	struct FNavAvoidanceMask AvoidanceGroup;  // 0x1AC(0x4)
	struct FNavAvoidanceMask GroupsToAvoid;  // 0x1B0(0x4)
	struct FNavAvoidanceMask GroupsToIgnore;  // 0x1B4(0x4)
	float ThresholdLongitudinalSpeed;  // 0x1B8(0x4)
	int32_t LowForwardSpeedSubStepCount;  // 0x1BC(0x4)
	int32_t HighForwardSpeedSubStepCount;  // 0x1C0(0x4)
	float DragCoefficient;  // 0x1C4(0x4)
	float DragArea;  // 0x1C8(0x4)
	struct FDcxVehicleDriveInputRate ThrottleRate;  // 0x1CC(0x8)
	struct FDcxVehicleDriveInputRate BrakeRate;  // 0x1D4(0x8)
	struct FDcxVehicleDriveInputRate HandbrakeRate;  // 0x1DC(0x8)
	struct FDcxVehicleDriveInputRate SteerRate;  // 0x1E4(0x8)
	float AvoidanceRadius;  // 0x1EC(0x4)
	float AvoidanceHeight;  // 0x1F0(0x4)
	float AvoidanceConsiderationRadius;  // 0x1F4(0x4)
	float AvoidanceThrottleStep;  // 0x1F8(0x4)
	float AvoidanceBrakeStep;  // 0x1FC(0x4)
	float AvoidanceSteerStep;  // 0x200(0x4)
	char pad_516_1 : 7;  // 0x204(0x1)
	bool bRecreateRequired : 1;  // 0x204(0x1)
	char pad_517[3];  // 0x205(0x3)
	struct UDcxVehicleWheelsRawInput* RawInput;  // 0x208(0x8)
	struct TArray<float> SmoothAnalogControls;  // 0x210(0x10)
	struct FDcxVehicleDriveState ReplicatedState;  // 0x220(0x18)
	char pad_568_1 : 7;  // 0x238(0x1)
	bool bWasAvoidanceUpdated : 1;  // 0x238(0x1)
	char pad_569[3];  // 0x239(0x3)
	struct FVector AvoidanceVelocity;  // 0x23C(0xC)
	struct FVector AvoidanceLockVelocity;  // 0x248(0xC)
	float AvoidanceLockTimer;  // 0x254(0x4)
	char pad_600[24];  // 0x258(0x18)

	void SetWheelOffset(int32_t WheelIndex, struct FVector Offset); // Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
	void SetWheelData(int32_t WheelIndex, struct FDcxVehicleWheelData NewWheelData); // Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
	void SetTire(int32_t WheelId, struct UDcxVehicleTire* NewTire); // Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
	void SetSuspensionData(int32_t WheelIndex, struct FDcxVehicleSuspensionData NewSuspensionData); // Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
	void SetGroupsToIgnore(struct FNavAvoidanceMask& Mask); // Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
	void SetGroupsToAvoid(struct FNavAvoidanceMask& Mask); // Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
	void SetChassisMass(float Mass); // Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
	void SetAvoidanceGroup(struct FNavAvoidanceMask& Mask); // Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
	void ServerUpdateState(struct FDcxAnalogControlArray AnalogControls, struct FDcxGear CurrentGear, struct FDcxGear TargetGear); // Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
	bool IsWheelInAir(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelInAir
	bool IsWheelDisabled(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
	bool GetWheelState(int32_t WheelIndex, struct FDcxVehicleWheelState& WheelState); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
	float GetWheelRotationSpeed(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
	float GetWheelRotationAngle(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
	struct FVector GetWheelOffset(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
	struct FDcxVehicleWheelData GetWheelData(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
	struct UDcxVehicleTire* GetTire(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
	struct FDcxVehicleSuspensionData GetSuspensionData(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
	struct UDcxVehicleWheelsRawInput* GetRawInput(); // Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
	int32_t GetNumWheels(); // Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
	float GetForwardSpeed(); // Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
	float GetChassisMass(); // Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
	struct FName GetBoneName(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
	float GetAnalogControl(char Control); // Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
	void EnableWheel(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
	void EnableAvoidance(bool bEnabled); // Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
	void DisableWheel(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
}; 



// Class DcxVehicle.DcxVehicleDriveComponent
// Size: 0x3E8(Inherited: 0x270) 
struct UDcxVehicleDriveComponent : public UDcxVehicleWheelsComponent
{
	struct FDcxVehicleEngineData EngineData;  // 0x270(0xA0)
	struct FDcxVehicleGearboxData GearboxData;  // 0x310(0x30)
	struct FDcxVehicleClutchData ClutchData;  // 0x340(0x10)
	char pad_848_1 : 7;  // 0x350(0x1)
	bool bAutoReverse : 1;  // 0x350(0x1)
	char pad_849[3];  // 0x351(0x3)
	float WrongDirectionThreshold;  // 0x354(0x4)
	char pad_856_1 : 7;  // 0x358(0x1)
	bool bAutoBrake : 1;  // 0x358(0x1)
	char pad_857[3];  // 0x359(0x3)
	float StopThreshold;  // 0x35C(0x4)
	struct FRuntimeFloatCurve SteerCurve;  // 0x360(0x88)

	void SetTargetGear(int32_t NewGear, bool bImmediate); // Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
	void SetStickyFrictionEnabled(bool Value); // Function DcxVehicle.DcxVehicleDriveComponent.SetStickyFrictionEnabled
	void SetGearboxType(char EDcxVehicleGearbox NewGearboxType); // Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
	void SetGearboxData(struct FDcxVehicleGearboxData NewGearboxData); // Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
	void SetEngineRotationSpeed(float RPM); // Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
	void SetEngineData(struct FDcxVehicleEngineData NewEngineData); // Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
	void SetClutchData(struct FDcxVehicleClutchData NewClutchData); // Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
	int32_t GetTargetGear(); // Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
	bool GetStickyFrictionEnabled(); // Function DcxVehicle.DcxVehicleDriveComponent.GetStickyFrictionEnabled
	char EDcxVehicleGearbox GetGearboxType(); // Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
	struct FDcxVehicleGearboxData GetGearboxData(); // Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
	float GetEngineRotationSpeed(); // Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
	struct FDcxVehicleEngineData GetEngineData(); // Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
	int32_t GetCurrentGear(); // Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
	struct FDcxVehicleClutchData GetClutchData(); // Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
}; 



// Class DcxVehicle.DcxVehicleDriveComponentTank
// Size: 0x3F0(Inherited: 0x3E8) 
struct UDcxVehicleDriveComponentTank : public UDcxVehicleDriveComponent
{
	char EDcxVehicleDriveControlModelTank DriveModel;  // 0x3E8(0x1)
	char pad_1001[7];  // 0x3E9(0x7)

	void SetDriveModel(char EDcxVehicleDriveControlModelTank ControlModel); // Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
	struct UDcxVehicleDriveRawInputTank* GetRawInputTank(); // Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
	char EDcxVehicleDriveControlModelTank GetDriveModel(); // Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
}; 



// Class DcxVehicle.DcxVehicleWheelsRawInput
// Size: 0x40(Inherited: 0x28) 
struct UDcxVehicleWheelsRawInput : public UObject
{
	int32_t ThrottleIndex;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct TArray<float> RawAnalogControls;  // 0x30(0x10)

	void SetThrottle(float Throttle); // Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
	float GetThrottle(); // Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
}; 



// Class DcxVehicle.DcxVehicleDriveRawInput
// Size: 0x48(Inherited: 0x40) 
struct UDcxVehicleDriveRawInput : public UDcxVehicleWheelsRawInput
{
	int32_t ClutchIndex;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bGearUp : 1;  // 0x44(0x1)
	char pad_69_1 : 7;  // 0x45(0x1)
	bool bGearDown : 1;  // 0x45(0x1)
	char pad_70[2];  // 0x46(0x2)

	void SetGearUp(bool bGearUpPressed); // Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
	void SetGearDown(bool bGearDownPressed); // Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
	void SetClutch(float Clutch); // Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
	bool GetGearUp(); // Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
	bool GetGearDown(); // Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
	float GetClutch(); // Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
}; 



// Class DcxVehicle.DcxVehicleDriveRawInput4W
// Size: 0x48(Inherited: 0x48) 
struct UDcxVehicleDriveRawInput4W : public UDcxVehicleDriveRawInput
{

	void SetSteer(float Steer); // Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer
	void SetHandbrake(float Handbrake); // Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake
	void SetBrake(float Brake); // Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake
	float GetSteer(); // Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer
	float GetHandbrake(); // Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake
	float GetBrake(); // Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake
}; 



// Class DcxVehicle.DcxVehicleDriveRawInputNW
// Size: 0x48(Inherited: 0x48) 
struct UDcxVehicleDriveRawInputNW : public UDcxVehicleDriveRawInput4W
{

}; 



// Class DcxVehicle.DcxVehicleDriveRawInputTank
// Size: 0x50(Inherited: 0x48) 
struct UDcxVehicleDriveRawInputTank : public UDcxVehicleDriveRawInput
{
	char pad_72[8];  // 0x48(0x8)

	void SetRightThrust(float Thrust); // Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust
	void SetRightBrake(float Brake); // Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake
	void SetLeftThrust(float Thrust); // Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust
	void SetLeftBrake(float Brake); // Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake
	float GetRightThrust(); // Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust
	float GetRightBrake(); // Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake
	float GetLeftThrust(); // Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust
	float GetLeftBrake(); // Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake
}; 



// Class DcxVehicle.DcxVehicleNoDriveComponent
// Size: 0x278(Inherited: 0x270) 
struct UDcxVehicleNoDriveComponent : public UDcxVehicleWheelsComponent
{
	char pad_624_1 : 7;  // 0x270(0x1)
	bool bUseRawInput : 1;  // 0x270(0x1)
	char pad_625[3];  // 0x271(0x3)
	float MaxDriveTorque;  // 0x274(0x4)

	void SetSteerAngle(int32_t WheelIndex, float SteerAngle); // Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
	void SetDriveTorque(int32_t WheelIndex, float DriveTorque); // Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
	void SetBrakeTorque(int32_t WheelIndex, float BrakeTorque); // Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
	float GetSteerAngle(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
	struct UDcxVehicleNoDriveRawInput* GetRawInputND(); // Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
	float GetDriveTorque(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
	float GetBrakeTorque(int32_t WheelIndex); // Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
}; 



// Class DcxVehicle.DcxVehicleNoDriveRawInput
// Size: 0x40(Inherited: 0x40) 
struct UDcxVehicleNoDriveRawInput : public UDcxVehicleWheelsRawInput
{

	void SetSteer(float NewSteer); // Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer
	void SetBrake(float NewBrake); // Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake
	float GetSteer(); // Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer
	float GetBrake(); // Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake
}; 



// Class DcxVehicle.DcxVehicleNW
// Size: 0x290(Inherited: 0x290) 
struct ADcxVehicleNW : public ADcxVehicle
{

	struct UDcxVehicleDriveComponentNW* GetVehicleDriveNW(); // Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW
}; 



// Class DcxVehicle.DcxVehicleTank
// Size: 0x290(Inherited: 0x290) 
struct ADcxVehicleTank : public ADcxVehicle
{

	struct UDcxVehicleDriveComponentTank* GetVehicleDriveTank(); // Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank
}; 



// Class DcxVehicle.DcxVehicleTire
// Size: 0xE0(Inherited: 0x30) 
struct UDcxVehicleTire : public UDataAsset
{
	char pad_48[4];  // 0x30(0x4)
	float LateralStiffnessX;  // 0x34(0x4)
	float LateralStiffnessY;  // 0x38(0x4)
	float LongitudinalStiffnessPerUnitGravity;  // 0x3C(0x4)
	float CamberStiffnessPerUnitGravity;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)
	struct FRuntimeFloatCurve FrictionVsSlipGraph;  // 0x48(0x88)
	struct TArray<struct FDcxDrivableSurfaceToTireFrictionPair> DrivableSurfaceToTireFrictionPairs;  // 0xD0(0x10)

}; 



