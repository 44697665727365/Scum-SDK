#pragma once 
#include <DcxVehicle_Structs.h>
 
 
 
class ADcxVehicle4W
{
public:
	ADcxVehicle4W(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleDriveComponentNW
{
public:
	UDcxVehicleDriveComponentNW(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ADcxVehicle
{
public:
	ADcxVehicle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct UDcxVehicleWheelsComponent GetVehicleWheels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UDcxVehicleWheelsComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleDriveComponent4W
{
public:
	UDcxVehicleDriveComponent4W(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleDifferentialData4W GetDifferentialData() {
		return memory.read<struct FDcxVehicleDifferentialData4W>(m_addr + 1000);
	}
	float GetAckermannGeometryAccuracy() {
		return memory.read<float>(m_addr + 1028);
	}

private:
	std::uint64_t m_addr = 0;
};


class ADcxVehicleNoDrive
{
public:
	ADcxVehicleNoDrive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleAnimInstance
{
public:
	UDcxVehicleAnimInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleWheelsComponent GetVehicleWheels() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2624);
		return struct UDcxVehicleWheelsComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleWheelsComponent
{
public:
	UDcxVehicleWheelsComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetChassisMass() {
		return memory.read<float>(m_addr + 368);
	}
	struct FVector GetInertiaTensorScale() {
		return memory.read<struct FVector>(m_addr + 372);
	}
	struct TArray<struct FDcxVehicleWheelConfiguration> GetWheelConfigurations() {
		return memory.read<struct TArray<struct FDcxVehicleWheelConfiguration>>(m_addr + 384);
	}
	struct FDcxVehicleTireLoadFilterData GetTireLoadFilter() {
		return memory.read<struct FDcxVehicleTireLoadFilterData>(m_addr + 400);
	}
	bool GetbUseAvoidance() {
		return memory.read<bool>(m_addr + 416);
	}
	float GetAvoidanceWeight() {
		return memory.read<float>(m_addr + 420);
	}
	int32_t GetAvoidanceUID() {
		return memory.read<int32_t>(m_addr + 424);
	}
	struct FNavAvoidanceMask GetAvoidanceGroup() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 428);
	}
	struct FNavAvoidanceMask GetGroupsToAvoid() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 432);
	}
	struct FNavAvoidanceMask GetGroupsToIgnore() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 436);
	}
	float GetThresholdLongitudinalSpeed() {
		return memory.read<float>(m_addr + 440);
	}
	int32_t GetLowForwardSpeedSubStepCount() {
		return memory.read<int32_t>(m_addr + 444);
	}
	int32_t GetHighForwardSpeedSubStepCount() {
		return memory.read<int32_t>(m_addr + 448);
	}
	float GetDragCoefficient() {
		return memory.read<float>(m_addr + 452);
	}
	float GetDragArea() {
		return memory.read<float>(m_addr + 456);
	}
	struct FDcxVehicleDriveInputRate GetThrottleRate() {
		return memory.read<struct FDcxVehicleDriveInputRate>(m_addr + 460);
	}
	struct FDcxVehicleDriveInputRate GetBrakeRate() {
		return memory.read<struct FDcxVehicleDriveInputRate>(m_addr + 468);
	}
	struct FDcxVehicleDriveInputRate GetHandbrakeRate() {
		return memory.read<struct FDcxVehicleDriveInputRate>(m_addr + 476);
	}
	struct FDcxVehicleDriveInputRate GetSteerRate() {
		return memory.read<struct FDcxVehicleDriveInputRate>(m_addr + 484);
	}
	float GetAvoidanceRadius() {
		return memory.read<float>(m_addr + 492);
	}
	float GetAvoidanceHeight() {
		return memory.read<float>(m_addr + 496);
	}
	float GetAvoidanceConsiderationRadius() {
		return memory.read<float>(m_addr + 500);
	}
	float GetAvoidanceThrottleStep() {
		return memory.read<float>(m_addr + 504);
	}
	float GetAvoidanceBrakeStep() {
		return memory.read<float>(m_addr + 508);
	}
	float GetAvoidanceSteerStep() {
		return memory.read<float>(m_addr + 512);
	}
	bool GetbRecreateRequired() {
		return memory.read<bool>(m_addr + 516);
	}
	struct UDcxVehicleWheelsRawInput GetRawInput() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UDcxVehicleWheelsRawInput(ptr_addr);
	}
	struct TArray<float> GetSmoothAnalogControls() {
		return memory.read<struct TArray<float>>(m_addr + 528);
	}
	struct FDcxVehicleDriveState GetReplicatedState() {
		return memory.read<struct FDcxVehicleDriveState>(m_addr + 544);
	}
	bool GetbWasAvoidanceUpdated() {
		return memory.read<bool>(m_addr + 568);
	}
	struct FVector GetAvoidanceVelocity() {
		return memory.read<struct FVector>(m_addr + 572);
	}
	struct FVector GetAvoidanceLockVelocity() {
		return memory.read<struct FVector>(m_addr + 584);
	}
	float GetAvoidanceLockTimer() {
		return memory.read<float>(m_addr + 596);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleDriveComponent
{
public:
	UDcxVehicleDriveComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleEngineData GetEngineData() {
		return memory.read<struct FDcxVehicleEngineData>(m_addr + 624);
	}
	struct FDcxVehicleGearboxData GetGearboxData() {
		return memory.read<struct FDcxVehicleGearboxData>(m_addr + 784);
	}
	struct FDcxVehicleClutchData GetClutchData() {
		return memory.read<struct FDcxVehicleClutchData>(m_addr + 832);
	}
	bool GetbAutoReverse() {
		return memory.read<bool>(m_addr + 848);
	}
	float GetWrongDirectionThreshold() {
		return memory.read<float>(m_addr + 852);
	}
	bool GetbAutoBrake() {
		return memory.read<bool>(m_addr + 856);
	}
	float GetStopThreshold() {
		return memory.read<float>(m_addr + 860);
	}
	struct FRuntimeFloatCurve GetSteerCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 864);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleDriveComponentTank
{
public:
	UDcxVehicleDriveComponentTank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EDcxVehicleDriveControlModelTank GetDriveModel() {
		return memory.read<char EDcxVehicleDriveControlModelTank>(m_addr + 1000);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleWheelsRawInput
{
public:
	UDcxVehicleWheelsRawInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetThrottleIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct TArray<float> GetRawAnalogControls() {
		return memory.read<struct TArray<float>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleDriveRawInput
{
public:
	UDcxVehicleDriveRawInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetClutchIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}
	bool GetbGearUp() {
		return memory.read<bool>(m_addr + 68);
	}
	bool GetbGearDown() {
		return memory.read<bool>(m_addr + 69);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleDriveRawInput4W
{
public:
	UDcxVehicleDriveRawInput4W(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleDriveRawInputNW
{
public:
	UDcxVehicleDriveRawInputNW(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleDriveRawInputTank
{
public:
	UDcxVehicleDriveRawInputTank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleNoDriveComponent
{
public:
	UDcxVehicleNoDriveComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseRawInput() {
		return memory.read<bool>(m_addr + 624);
	}
	float GetMaxDriveTorque() {
		return memory.read<float>(m_addr + 628);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleNoDriveRawInput
{
public:
	UDcxVehicleNoDriveRawInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ADcxVehicleNW
{
public:
	ADcxVehicleNW(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ADcxVehicleTank
{
public:
	ADcxVehicleTank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDcxVehicleTire
{
public:
	UDcxVehicleTire(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLateralStiffnessX() {
		return memory.read<float>(m_addr + 52);
	}
	float GetLateralStiffnessY() {
		return memory.read<float>(m_addr + 56);
	}
	float GetLongitudinalStiffnessPerUnitGravity() {
		return memory.read<float>(m_addr + 60);
	}
	float GetCamberStiffnessPerUnitGravity() {
		return memory.read<float>(m_addr + 64);
	}
	struct FRuntimeFloatCurve GetFrictionVsSlipGraph() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 72);
	}
	struct TArray<struct FDcxDrivableSurfaceToTireFrictionPair> GetDrivableSurfaceToTireFrictionPairs() {
		return memory.read<struct TArray<struct FDcxDrivableSurfaceToTireFrictionPair>>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


