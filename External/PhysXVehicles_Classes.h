#pragma once 
#include <PhysXVehicles_Structs.h>
 
 
 
class UWheeledVehicleMovementComponent
{
public:
	UWheeledVehicleMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbDeprecatedSpringOffsetMode() {
		return memory.read<char>(m_addr + 320);
	}
	char GetbReverseAsBrake() {
		return memory.read<char>(m_addr + 320);
	}
	char GetbUseRVOAvoidance() {
		return memory.read<char>(m_addr + 320);
	}
	char GetbRawHandbrakeInput() {
		return memory.read<char>(m_addr + 320);
	}
	char GetbRawGearUpInput() {
		return memory.read<char>(m_addr + 320);
	}
	char GetbRawGearDownInput() {
		return memory.read<char>(m_addr + 320);
	}
	char GetbWasAvoidanceUpdated() {
		return memory.read<char>(m_addr + 324);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 328);
	}
	struct TArray<struct FWheelSetup> GetWheelSetups() {
		return memory.read<struct TArray<struct FWheelSetup>>(m_addr + 336);
	}
	float GetDragCoefficient() {
		return memory.read<float>(m_addr + 352);
	}
	float GetChassisWidth() {
		return memory.read<float>(m_addr + 356);
	}
	float GetChassisHeight() {
		return memory.read<float>(m_addr + 360);
	}
	float GetDragArea() {
		return memory.read<float>(m_addr + 364);
	}
	float GetEstimatedMaxEngineSpeed() {
		return memory.read<float>(m_addr + 368);
	}
	float GetMaxEngineRPM() {
		return memory.read<float>(m_addr + 372);
	}
	float GetDebugDragMagnitude() {
		return memory.read<float>(m_addr + 376);
	}
	struct FVector GetInertiaTensorScale() {
		return memory.read<struct FVector>(m_addr + 380);
	}
	float GetMinNormalizedTireLoad() {
		return memory.read<float>(m_addr + 392);
	}
	float GetMinNormalizedTireLoadFiltered() {
		return memory.read<float>(m_addr + 396);
	}
	float GetMaxNormalizedTireLoad() {
		return memory.read<float>(m_addr + 400);
	}
	float GetMaxNormalizedTireLoadFiltered() {
		return memory.read<float>(m_addr + 404);
	}
	float GetThresholdLongitudinalSpeed() {
		return memory.read<float>(m_addr + 408);
	}
	int32_t GetLowForwardSpeedSubStepCount() {
		return memory.read<int32_t>(m_addr + 412);
	}
	int32_t GetHighForwardSpeedSubStepCount() {
		return memory.read<int32_t>(m_addr + 416);
	}
	struct TArray<struct UVehicleWheel> GetWheels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 424);
		return struct TArray<struct UVehicleWheel>(ptr_addr);
	}
	float GetRVOAvoidanceRadius() {
		return memory.read<float>(m_addr + 464);
	}
	float GetRVOAvoidanceHeight() {
		return memory.read<float>(m_addr + 468);
	}
	float GetAvoidanceConsiderationRadius() {
		return memory.read<float>(m_addr + 472);
	}
	float GetRVOSteeringStep() {
		return memory.read<float>(m_addr + 476);
	}
	float GetRVOThrottleStep() {
		return memory.read<float>(m_addr + 480);
	}
	int32_t GetAvoidanceUID() {
		return memory.read<int32_t>(m_addr + 484);
	}
	struct FNavAvoidanceMask GetAvoidanceGroup() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 488);
	}
	struct FNavAvoidanceMask GetGroupsToAvoid() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 492);
	}
	struct FNavAvoidanceMask GetGroupsToIgnore() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 496);
	}
	float GetAvoidanceWeight() {
		return memory.read<float>(m_addr + 500);
	}
	struct FVector GetPendingLaunchVelocity() {
		return memory.read<struct FVector>(m_addr + 504);
	}
	struct FReplicatedVehicleState GetReplicatedState() {
		return memory.read<struct FReplicatedVehicleState>(m_addr + 516);
	}
	float GetRawSteeringInput() {
		return memory.read<float>(m_addr + 540);
	}
	float GetRawThrottleInput() {
		return memory.read<float>(m_addr + 544);
	}
	float GetRawBrakeInput() {
		return memory.read<float>(m_addr + 548);
	}
	float GetSteeringInput() {
		return memory.read<float>(m_addr + 552);
	}
	float GetThrottleInput() {
		return memory.read<float>(m_addr + 556);
	}
	float GetBrakeInput() {
		return memory.read<float>(m_addr + 560);
	}
	float GetHandbrakeInput() {
		return memory.read<float>(m_addr + 564);
	}
	float GetIdleBrakeInput() {
		return memory.read<float>(m_addr + 568);
	}
	float GetStopThreshold() {
		return memory.read<float>(m_addr + 572);
	}
	float GetWrongDirectionThreshold() {
		return memory.read<float>(m_addr + 576);
	}
	struct FVehicleInputRate GetThrottleInputRate() {
		return memory.read<struct FVehicleInputRate>(m_addr + 580);
	}
	struct FVehicleInputRate GetBrakeInputRate() {
		return memory.read<struct FVehicleInputRate>(m_addr + 588);
	}
	struct FVehicleInputRate GetHandbrakeInputRate() {
		return memory.read<struct FVehicleInputRate>(m_addr + 596);
	}
	struct FVehicleInputRate GetSteeringInputRate() {
		return memory.read<struct FVehicleInputRate>(m_addr + 604);
	}
	struct AController GetOverrideController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct AController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USimpleWheeledVehicleMovementComponent
{
public:
	USimpleWheeledVehicleMovementComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AWheeledVehicle
{
public:
	AWheeledVehicle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct UWheeledVehicleMovementComponent GetVehicleMovement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWheeledVehicleMovementComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVehicleAnimInstance
{
public:
	UVehicleAnimInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWheeledVehicleMovementComponent GetWheeledVehicleMovementComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2640);
		return struct UWheeledVehicleMovementComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTireConfig
{
public:
	UTireConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrictionScale() {
		return memory.read<float>(m_addr + 48);
	}
	struct TArray<struct FTireConfigMaterialFriction> GetTireFrictionScales() {
		return memory.read<struct TArray<struct FTireConfigMaterialFriction>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVehicleWheel
{
public:
	UVehicleWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetCollisionMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UStaticMesh(ptr_addr);
	}
	bool GetbDontCreateShape() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbAutoAdjustCollisionSize() {
		return memory.read<bool>(m_addr + 49);
	}
	struct FVector GetOffset() {
		return memory.read<struct FVector>(m_addr + 52);
	}
	float GetShapeRadius() {
		return memory.read<float>(m_addr + 64);
	}
	float GetShapeWidth() {
		return memory.read<float>(m_addr + 68);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 72);
	}
	float GetDampingRate() {
		return memory.read<float>(m_addr + 76);
	}
	float GetSteerAngle() {
		return memory.read<float>(m_addr + 80);
	}
	bool GetbAffectedByHandbrake() {
		return memory.read<bool>(m_addr + 84);
	}
	struct UTireType GetTireType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UTireType(ptr_addr);
	}
	struct UTireConfig GetTireConfig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UTireConfig(ptr_addr);
	}
	float GetLatStiffMaxLoad() {
		return memory.read<float>(m_addr + 104);
	}
	float GetLatStiffValue() {
		return memory.read<float>(m_addr + 108);
	}
	float GetLongStiffValue() {
		return memory.read<float>(m_addr + 112);
	}
	float GetSuspensionForceOffset() {
		return memory.read<float>(m_addr + 116);
	}
	float GetSuspensionMaxRaise() {
		return memory.read<float>(m_addr + 120);
	}
	float GetSuspensionMaxDrop() {
		return memory.read<float>(m_addr + 124);
	}
	float GetSuspensionNaturalFrequency() {
		return memory.read<float>(m_addr + 128);
	}
	float GetSuspensionDampingRatio() {
		return memory.read<float>(m_addr + 132);
	}
	char EWheelSweepType GetSweepType() {
		return memory.read<char EWheelSweepType>(m_addr + 136);
	}
	float GetMaxBrakeTorque() {
		return memory.read<float>(m_addr + 140);
	}
	float GetMaxHandBrakeTorque() {
		return memory.read<float>(m_addr + 144);
	}
	struct UWheeledVehicleMovementComponent GetVehicleSim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UWheeledVehicleMovementComponent(ptr_addr);
	}
	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 160);
	}
	float GetDebugLongSlip() {
		return memory.read<float>(m_addr + 164);
	}
	float GetDebugLatSlip() {
		return memory.read<float>(m_addr + 168);
	}
	float GetDebugNormalizedTireLoad() {
		return memory.read<float>(m_addr + 172);
	}
	float GetDebugWheelTorque() {
		return memory.read<float>(m_addr + 180);
	}
	float GetDebugLongForce() {
		return memory.read<float>(m_addr + 184);
	}
	float GetDebugLatForce() {
		return memory.read<float>(m_addr + 188);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 192);
	}
	struct FVector GetOldLocation() {
		return memory.read<struct FVector>(m_addr + 204);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWheeledVehicleMovementComponent4W
{
public:
	UWheeledVehicleMovementComponent4W(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVehicleEngineData GetEngineSetup() {
		return memory.read<struct FVehicleEngineData>(m_addr + 656);
	}
	struct FVehicleDifferential4WData GetDifferentialSetup() {
		return memory.read<struct FVehicleDifferential4WData>(m_addr + 816);
	}
	float GetAckermannAccuracy() {
		return memory.read<float>(m_addr + 844);
	}
	struct FVehicleTransmissionData GetTransmissionSetup() {
		return memory.read<struct FVehicleTransmissionData>(m_addr + 848);
	}
	struct FRuntimeFloatCurve GetSteeringCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 896);
	}

private:
	std::uint64_t m_addr = 0;
};


