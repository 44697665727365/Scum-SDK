#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FVehicleAnimInstanceProxy
{
public:
	FVehicleAnimInstanceProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FTireConfigMaterialFriction
{
public:
	FTireConfigMaterialFriction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicalMaterial GetPhysicalMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPhysicalMaterial(ptr_addr);
	}
	float GetFrictionScale() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_WheelHandler
{
public:
	FAnimNode_WheelHandler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FVehicleInputRate
{
public:
	FVehicleInputRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRiseRate() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFallRate() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplicatedVehicleState
{
public:
	FReplicatedVehicleState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSteeringInput() {
		return memory.read<float>(m_addr + 0);
	}
	float GetThrottleInput() {
		return memory.read<float>(m_addr + 4);
	}
	float GetBrakeInput() {
		return memory.read<float>(m_addr + 8);
	}
	float GetHandbrakeInput() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetCurrentGear() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FWheelSetup
{
public:
	FWheelSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UVehicleWheel GetWheelClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UVehicleWheel(ptr_addr);
	}
	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FVector GetAdditionalOffset() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	bool GetbDisableSteering() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSteerAngle
{
public:
	FSetSteerAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSteerAngle() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FVehicleTransmissionData
{
public:
	FVehicleTransmissionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseGearAutoBox() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetGearSwitchTime() {
		return memory.read<float>(m_addr + 4);
	}
	float GetGearAutoBoxLatency() {
		return memory.read<float>(m_addr + 8);
	}
	float GetFinalRatio() {
		return memory.read<float>(m_addr + 12);
	}
	struct TArray<struct FVehicleGearData> GetForwardGears() {
		return memory.read<struct TArray<struct FVehicleGearData>>(m_addr + 16);
	}
	float GetReverseGearRatio() {
		return memory.read<float>(m_addr + 32);
	}
	float GetNeutralGearUpRatio() {
		return memory.read<float>(m_addr + 36);
	}
	float GetClutchStrength() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FVehicleGearData
{
public:
	FVehicleGearData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRatio() {
		return memory.read<float>(m_addr + 0);
	}
	float GetDownRatio() {
		return memory.read<float>(m_addr + 4);
	}
	float GetUpRatio() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVehicleEngineData
{
public:
	FVehicleEngineData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRuntimeFloatCurve GetTorqueCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 0);
	}
	float GetMaxRPM() {
		return memory.read<float>(m_addr + 136);
	}
	float GetMOI() {
		return memory.read<float>(m_addr + 140);
	}
	float GetDampingRateFullThrottle() {
		return memory.read<float>(m_addr + 144);
	}
	float GetDampingRateZeroThrottleClutchEngaged() {
		return memory.read<float>(m_addr + 148);
	}
	float GetDampingRateZeroThrottleClutchDisengaged() {
		return memory.read<float>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FVehicleDifferential4WData
{
public:
	FVehicleDifferential4WData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EVehicleDifferential4W GetDifferentialType() {
		return memory.read<char EVehicleDifferential4W>(m_addr + 0);
	}
	float GetFrontRearSplit() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFrontLeftRightSplit() {
		return memory.read<float>(m_addr + 8);
	}
	float GetRearLeftRightSplit() {
		return memory.read<float>(m_addr + 12);
	}
	float GetCentreBias() {
		return memory.read<float>(m_addr + 16);
	}
	float GetFrontBias() {
		return memory.read<float>(m_addr + 20);
	}
	float GetRearBias() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGroupsToAvoidMask
{
public:
	FSetGroupsToAvoidMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavAvoidanceMask GetGroupMask() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentGear
{
public:
	FGetCurrentGear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEngineMaxRotationSpeed
{
public:
	FGetEngineMaxRotationSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEngineRotationSpeed
{
public:
	FGetEngineRotationSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetForwardSpeed
{
public:
	FGetForwardSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVehicle
{
public:
	FGetVehicle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AWheeledVehicle GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AWheeledVehicle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTargetGear
{
public:
	FGetTargetGear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHandbrakeInput
{
public:
	FSetHandbrakeInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewHandbrake() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUseAutoGears
{
public:
	FGetUseAutoGears(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRotationAngle
{
public:
	FGetRotationAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrakeTorque
{
public:
	FSetBrakeTorque(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBrakeTorque() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerUpdateState
{
public:
	FServerUpdateState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSteeringInput() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInThrottleInput() {
		return memory.read<float>(m_addr + 4);
	}
	float GetInBrakeInput() {
		return memory.read<float>(m_addr + 8);
	}
	float GetInHandbrakeInput() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetCurrentGear() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAvoidanceEnabled
{
public:
	FSetAvoidanceEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAvoidanceGroup
{
public:
	FSetAvoidanceGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGroupFlags() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAvoidanceGroupMask
{
public:
	FSetAvoidanceGroupMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavAvoidanceMask GetGroupMask() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrakeInput
{
public:
	FSetBrakeInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBrake() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGroupsToIgnoreMask
{
public:
	FSetGroupsToIgnoreMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavAvoidanceMask GetGroupMask() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGearDown
{
public:
	FSetGearDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewGearDown() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGearUp
{
public:
	FSetGearUp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewGearUp() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDriveTorque
{
public:
	FSetDriveTorque(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDriveTorque() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGroupsToAvoid
{
public:
	FSetGroupsToAvoid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGroupFlags() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGroupsToIgnore
{
public:
	FSetGroupsToIgnore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGroupFlags() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSteeringInput
{
public:
	FSetSteeringInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSteering() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSuspensionOffset
{
public:
	FGetSuspensionOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTargetGear
{
public:
	FSetTargetGear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGearNum() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbImmediate() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetThrottleInput
{
public:
	FSetThrottleInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetThrottle() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUseAutoGears
{
public:
	FSetUseAutoGears(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseAuto() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSteerAngle
{
public:
	FGetSteerAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsInAir
{
public:
	FIsInAir(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};