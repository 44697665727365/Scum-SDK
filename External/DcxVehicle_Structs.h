#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FDcxVehicleDriveInputRate
{
public:
	FDcxVehicleDriveInputRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetWheelData
{
public:
	FGetWheelData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDcxVehicleWheelData GetReturnValue() {
		return memory.read<struct FDcxVehicleWheelData>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxMath
{
public:
	FDcxMath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FDcxAnalogControlArray
{
public:
	FDcxAnalogControlArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetItems() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxAnimNodeWheelSimulator
{
public:
	FDcxAnimNodeWheelSimulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetWheelState
{
public:
	FGetWheelState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDcxVehicleWheelState GetWheelState() {
		return memory.read<struct FDcxVehicleWheelState>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDriveTorque
{
public:
	FGetDriveTorque(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxGear
{
public:
	FDcxGear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetGearNum() {
		return memory.read<int32_t>(m_addr + 0);
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
};class FDcxVehicleAnimInstanceProxy
{
public:
	FDcxVehicleAnimInstanceProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleClutchData
{
public:
	FDcxVehicleClutchData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBitePoint() {
		return memory.read<float>(m_addr + 0);
	}
	float GetStrength() {
		return memory.read<float>(m_addr + 4);
	}
	char EDcxVehicleClutchAccuracyMode GetAccuracyMode() {
		return memory.read<char EDcxVehicleClutchAccuracyMode>(m_addr + 8);
	}
	int32_t GetEstimateIterations() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsWheelDisabled
{
public:
	FIsWheelDisabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleDifferentialData4W
{
public:
	FDcxVehicleDifferentialData4W(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EDcxVehicleDifferential4W GetDifferentialType() {
		return memory.read<char EDcxVehicleDifferential4W>(m_addr + 0);
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
	float GetCenterBias() {
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
};class FSetChassisMass
{
public:
	FSetChassisMass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMass() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVehicleWheels
{
public:
	FGetVehicleWheels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleWheelsComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleWheelsComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleDriveState
{
public:
	FDcxVehicleDriveState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxAnalogControlArray GetAnalogControls() {
		return memory.read<struct FDcxAnalogControlArray>(m_addr + 0);
	}
	struct FDcxGear GetCurrentGear() {
		return memory.read<struct FDcxGear>(m_addr + 16);
	}
	struct FDcxGear GetTargetGear() {
		return memory.read<struct FDcxGear>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FDisableWheel
{
public:
	FDisableWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleEngineData
{
public:
	FDcxVehicleEngineData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRuntimeFloatCurve GetTorqueCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 0);
	}
	float GetMOI() {
		return memory.read<float>(m_addr + 136);
	}
	float GetIdleRPM() {
		return memory.read<float>(m_addr + 140);
	}
	float GetMaxRPM() {
		return memory.read<float>(m_addr + 144);
	}
	float GetDampingRateFullThrottle() {
		return memory.read<float>(m_addr + 148);
	}
	float GetDampingRateZeroThrottleClutchEngaged() {
		return memory.read<float>(m_addr + 152);
	}
	float GetDampingRateZeroThrottleClutchDisengaged() {
		return memory.read<float>(m_addr + 156);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleGearboxData
{
public:
	FDcxVehicleGearboxData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EDcxVehicleGearbox GetType() {
		return memory.read<char EDcxVehicleGearbox>(m_addr + 0);
	}
	float GetFinalRatio() {
		return memory.read<float>(m_addr + 4);
	}
	float GetSwitchTime() {
		return memory.read<float>(m_addr + 8);
	}
	struct TArray<struct FDcxVehicleGearData> GetForwardGears() {
		return memory.read<struct TArray<struct FDcxVehicleGearData>>(m_addr + 16);
	}
	float GetReverseGearRatio() {
		return memory.read<float>(m_addr + 32);
	}
	float GetLatency() {
		return memory.read<float>(m_addr + 36);
	}
	float GetNeutralGearUpRatio() {
		return memory.read<float>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStickyFrictionEnabled
{
public:
	FSetStickyFrictionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleGearData
{
public:
	FDcxVehicleGearData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FDcxVehicleSuspensionData
{
public:
	FDcxVehicleSuspensionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNaturalFrequency() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSpringDamperRatio() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxCompression() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxDroop() {
		return memory.read<float>(m_addr + 12);
	}
	float GetForceOffset() {
		return memory.read<float>(m_addr + 16);
	}
	float GetCamberAtRest() {
		return memory.read<float>(m_addr + 20);
	}
	float GetCamberAtMaxCompression() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCamberAtMaxDroop() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEngineData
{
public:
	FGetEngineData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleEngineData GetReturnValue() {
		return memory.read<struct FDcxVehicleEngineData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGearboxData
{
public:
	FGetGearboxData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleGearboxData GetReturnValue() {
		return memory.read<struct FDcxVehicleGearboxData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxDrivableSurfaceToTireFrictionPair
{
public:
	FDcxDrivableSurfaceToTireFrictionPair(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPhysicalMaterial GetSurfaceMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPhysicalMaterial(ptr_addr);
	}
	float GetFrictionScale() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleTireLoadFilterData
{
public:
	FDcxVehicleTireLoadFilterData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinNormalizedLoad() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMinFilteredNormalizedLoad() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxNormalizedLoad() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMaxFilteredNormalizedLoad() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWheelRotationSpeed
{
public:
	FGetWheelRotationSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleWheelData
{
public:
	FDcxVehicleWheelData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 0);
	}
	float GetWidth() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDampingRate() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaxBrakeTorque() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMaxHandBrakeTorque() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaxSteer() {
		return memory.read<float>(m_addr + 24);
	}
	float GetToeAngle() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGroupsToAvoid
{
public:
	FSetGroupsToAvoid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavAvoidanceMask GetMask() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDriveTorque
{
public:
	FSetDriveTorque(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetDriveTorque() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleWheelConfiguration
{
public:
	FDcxVehicleWheelConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetOffset() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct UStaticMesh GetCollisionMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UStaticMesh(ptr_addr);
	}
	bool GetbUsePresetShape() {
		return memory.read<bool>(m_addr + 32);
	}
	struct FDcxVehicleWheelData GetWheelData() {
		return memory.read<struct FDcxVehicleWheelData>(m_addr + 36);
	}
	struct FDcxVehicleSuspensionData GetSuspensionData() {
		return memory.read<struct FDcxVehicleSuspensionData>(m_addr + 68);
	}
	struct UDcxVehicleTire GetTire() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UDcxVehicleTire(ptr_addr);
	}
	bool GetbIsDriven() {
		return memory.read<bool>(m_addr + 112);
	}
	char EDcxVehicleWheelSweep GetSweepType() {
		return memory.read<char EDcxVehicleWheelSweep>(m_addr + 113);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleWheelState
{
public:
	FDcxVehicleWheelState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetSuspensionLineStart() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetSuspensionLineDirection() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	float GetSuspensionLineLength() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetbIsInAir() {
		return memory.read<bool>(m_addr + 28);
	}
	struct AActor GetTireContactActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct AActor(ptr_addr);
	}
	struct UPhysicalMaterial GetTireSurfaceMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct FVector GetTireContactPoint() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetTireContactNormal() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	float GetTireFriction() {
		return memory.read<float>(m_addr + 72);
	}
	float GetSuspensionJounce() {
		return memory.read<float>(m_addr + 76);
	}
	float GetSuspensionSpringForce() {
		return memory.read<float>(m_addr + 80);
	}
	struct FVector GetTireLongitudinalDirection() {
		return memory.read<struct FVector>(m_addr + 84);
	}
	struct FVector GetTireLateralDirection() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	float GetLongitudinalSlip() {
		return memory.read<float>(m_addr + 108);
	}
	float GetLateralSlip() {
		return memory.read<float>(m_addr + 112);
	}
	float GetSteerAngle() {
		return memory.read<float>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};class FDcxVehicleSetBasisVectors
{
public:
	FDcxVehicleSetBasisVectors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetUp() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetForward() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetClutchData
{
public:
	FGetClutchData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleClutchData GetReturnValue() {
		return memory.read<struct FDcxVehicleClutchData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAvoidanceGroup
{
public:
	FSetAvoidanceGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavAvoidanceMask GetMask() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVehicleDrive4W
{
public:
	FGetVehicleDrive4W(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleDriveComponent4W GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleDriveComponent4W(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMesh
{
public:
	FGetMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeletalMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableAvoidance
{
public:
	FEnableAvoidance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnableWheel
{
public:
	FEnableWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
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
};class FIsWheelInAir
{
public:
	FIsWheelInAir(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnalogControl
{
public:
	FGetAnalogControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetControl() {
		return memory.read<char>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetClutchData
{
public:
	FSetClutchData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleClutchData GetNewClutchData() {
		return memory.read<struct FDcxVehicleClutchData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoneName
{
public:
	FGetBoneName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChassisMass
{
public:
	FGetChassisMass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEngineData
{
public:
	FSetEngineData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleEngineData GetNewEngineData() {
		return memory.read<struct FDcxVehicleEngineData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHandbrake
{
public:
	FSetHandbrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHandbrake() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumWheels
{
public:
	FGetNumWheels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRawInput
{
public:
	FGetRawInput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleWheelsRawInput GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleWheelsRawInput(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSuspensionData
{
public:
	FGetSuspensionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDcxVehicleSuspensionData GetReturnValue() {
		return memory.read<struct FDcxVehicleSuspensionData>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWheelOffset
{
public:
	FGetWheelOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTire
{
public:
	FGetTire(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UDcxVehicleTire GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UDcxVehicleTire(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWheelRotationAngle
{
public:
	FGetWheelRotationAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrakeTorque
{
public:
	FSetBrakeTorque(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetBrakeTorque() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FServerUpdateState
{
public:
	FServerUpdateState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxAnalogControlArray GetAnalogControls() {
		return memory.read<struct FDcxAnalogControlArray>(m_addr + 0);
	}
	struct FDcxGear GetCurrentGear() {
		return memory.read<struct FDcxGear>(m_addr + 16);
	}
	struct FDcxGear GetTargetGear() {
		return memory.read<struct FDcxGear>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGroupsToIgnore
{
public:
	FSetGroupsToIgnore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavAvoidanceMask GetMask() {
		return memory.read<struct FNavAvoidanceMask>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSuspensionData
{
public:
	FSetSuspensionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDcxVehicleSuspensionData GetNewSuspensionData() {
		return memory.read<struct FDcxVehicleSuspensionData>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGearboxType
{
public:
	FSetGearboxType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EDcxVehicleGearbox GetNewGearboxType() {
		return memory.read<char EDcxVehicleGearbox>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWheelOffset
{
public:
	FSetWheelOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVector GetOffset() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTire
{
public:
	FSetTire(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UDcxVehicleTire GetNewTire() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UDcxVehicleTire(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWheelData
{
public:
	FSetWheelData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FDcxVehicleWheelData GetNewWheelData() {
		return memory.read<struct FDcxVehicleWheelData>(m_addr + 4);
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
};class FGetGearboxType
{
public:
	FGetGearboxType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EDcxVehicleGearbox GetReturnValue() {
		return memory.read<char EDcxVehicleGearbox>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStickyFrictionEnabled
{
public:
	FGetStickyFrictionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEngineRotationSpeed
{
public:
	FSetEngineRotationSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRPM() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGearboxData
{
public:
	FSetGearboxData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleGearboxData GetNewGearboxData() {
		return memory.read<struct FDcxVehicleGearboxData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTargetGear
{
public:
	FSetTargetGear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewGear() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbImmediate() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDifferentialData
{
public:
	FGetDifferentialData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleDifferentialData4W GetReturnValue() {
		return memory.read<struct FDcxVehicleDifferentialData4W>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRawInput4W
{
public:
	FGetRawInput4W(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleDriveRawInput4W GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleDriveRawInput4W(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDifferentialData
{
public:
	FSetDifferentialData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDcxVehicleDifferentialData4W GetNewDifferentialData() {
		return memory.read<struct FDcxVehicleDifferentialData4W>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRawInputNW
{
public:
	FGetRawInputNW(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleDriveRawInputNW GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleDriveRawInputNW(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDrivenWheel
{
public:
	FIsDrivenWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDrivenWheel
{
public:
	FSetDrivenWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbIsDriven() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDriveModel
{
public:
	FGetDriveModel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EDcxVehicleDriveControlModelTank GetReturnValue() {
		return memory.read<char EDcxVehicleDriveControlModelTank>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHandbrake
{
public:
	FGetHandbrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRawInputTank
{
public:
	FGetRawInputTank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleDriveRawInputTank GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleDriveRawInputTank(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDriveModel
{
public:
	FSetDriveModel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EDcxVehicleDriveControlModelTank GetControlModel() {
		return memory.read<char EDcxVehicleDriveControlModelTank>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetThrottle
{
public:
	FGetThrottle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetThrottle
{
public:
	FSetThrottle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetThrottle() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetClutch
{
public:
	FGetClutch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLeftThrust
{
public:
	FSetLeftThrust(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetThrust() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGearDown
{
public:
	FGetGearDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGearUp
{
public:
	FGetGearUp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrake
{
public:
	FSetBrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewBrake() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetClutch
{
public:
	FSetClutch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetClutch() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGearDown
{
public:
	FSetGearDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbGearDownPressed() {
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

	bool GetbGearUpPressed() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBrake
{
public:
	FGetBrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSteer
{
public:
	FGetSteer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBrakeTorque
{
public:
	FGetBrakeTorque(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSteer
{
public:
	FSetSteer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewSteer() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLeftBrake
{
public:
	FGetLeftBrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLeftThrust
{
public:
	FGetLeftThrust(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRightBrake
{
public:
	FGetRightBrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRightThrust
{
public:
	FGetRightThrust(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLeftBrake
{
public:
	FSetLeftBrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBrake() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRightBrake
{
public:
	FSetRightBrake(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBrake() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRightThrust
{
public:
	FSetRightThrust(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetThrust() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVehicleNoDrive
{
public:
	FGetVehicleNoDrive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleNoDriveComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleNoDriveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRawInputND
{
public:
	FGetRawInputND(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleNoDriveRawInput GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleNoDriveRawInput(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSteerAngle
{
public:
	FGetSteerAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSteerAngle
{
public:
	FSetSteerAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetWheelIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetSteerAngle() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVehicleDriveNW
{
public:
	FGetVehicleDriveNW(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleDriveComponentNW GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleDriveComponentNW(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVehicleDriveTank
{
public:
	FGetVehicleDriveTank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDcxVehicleDriveComponentTank GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDcxVehicleDriveComponentTank(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};