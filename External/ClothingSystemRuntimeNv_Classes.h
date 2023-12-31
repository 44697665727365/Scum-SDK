#pragma once 
#include <ClothingSystemRuntimeNv_Structs.h>
 
 
 
class UClothConfigNv
{
public:
	UClothConfigNv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetClothingWindMethod() {
		return memory.read<uint8_t >(m_addr + 40);
	}
	struct FClothConstraintSetupNv GetVerticalConstraint() {
		return memory.read<struct FClothConstraintSetupNv>(m_addr + 44);
	}
	struct FClothConstraintSetupNv GetHorizontalConstraint() {
		return memory.read<struct FClothConstraintSetupNv>(m_addr + 60);
	}
	struct FClothConstraintSetupNv GetBendConstraint() {
		return memory.read<struct FClothConstraintSetupNv>(m_addr + 76);
	}
	struct FClothConstraintSetupNv GetShearConstraint() {
		return memory.read<struct FClothConstraintSetupNv>(m_addr + 92);
	}
	float GetSelfCollisionRadius() {
		return memory.read<float>(m_addr + 108);
	}
	float GetSelfCollisionStiffness() {
		return memory.read<float>(m_addr + 112);
	}
	float GetSelfCollisionCullScale() {
		return memory.read<float>(m_addr + 116);
	}
	struct FVector GetDamping() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	float GetFriction() {
		return memory.read<float>(m_addr + 132);
	}
	float GetWindDragCoefficient() {
		return memory.read<float>(m_addr + 136);
	}
	float GetWindLiftCoefficient() {
		return memory.read<float>(m_addr + 140);
	}
	float GetWindIntensityScale() {
		return memory.read<float>(m_addr + 144);
	}
	struct FVector GetLinearDrag() {
		return memory.read<struct FVector>(m_addr + 148);
	}
	struct FVector GetAngularDrag() {
		return memory.read<struct FVector>(m_addr + 160);
	}
	struct FVector GetLinearInertiaScale() {
		return memory.read<struct FVector>(m_addr + 172);
	}
	struct FVector GetAngularInertiaScale() {
		return memory.read<struct FVector>(m_addr + 184);
	}
	struct FVector GetCentrifugalInertiaScale() {
		return memory.read<struct FVector>(m_addr + 196);
	}
	float GetSolverFrequency() {
		return memory.read<float>(m_addr + 208);
	}
	float GetStiffnessFrequency() {
		return memory.read<float>(m_addr + 212);
	}
	float GetGravityScale() {
		return memory.read<float>(m_addr + 216);
	}
	struct FVector GetGravityOverride() {
		return memory.read<struct FVector>(m_addr + 220);
	}
	bool GetbUseGravityOverride() {
		return memory.read<bool>(m_addr + 232);
	}
	float GetTetherStiffness() {
		return memory.read<float>(m_addr + 236);
	}
	float GetTetherLimit() {
		return memory.read<float>(m_addr + 240);
	}
	float GetCollisionThickness() {
		return memory.read<float>(m_addr + 244);
	}
	float GetAnimDriveSpringStiffness() {
		return memory.read<float>(m_addr + 248);
	}
	float GetAnimDriveDamperStiffness() {
		return memory.read<float>(m_addr + 252);
	}
	uint8_t  GetWindMethod() {
		return memory.read<uint8_t >(m_addr + 256);
	}
	struct FClothConstraintSetup_Legacy GetVerticalConstraintConfig() {
		return memory.read<struct FClothConstraintSetup_Legacy>(m_addr + 260);
	}
	struct FClothConstraintSetup_Legacy GetHorizontalConstraintConfig() {
		return memory.read<struct FClothConstraintSetup_Legacy>(m_addr + 276);
	}
	struct FClothConstraintSetup_Legacy GetBendConstraintConfig() {
		return memory.read<struct FClothConstraintSetup_Legacy>(m_addr + 292);
	}
	struct FClothConstraintSetup_Legacy GetShearConstraintConfig() {
		return memory.read<struct FClothConstraintSetup_Legacy>(m_addr + 308);
	}

private:
	std::uint64_t m_addr = 0;
};


class UClothingSimulationFactoryNv
{
public:
	UClothingSimulationFactoryNv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothingSimulationInteractorNv
{
public:
	UClothingSimulationInteractorNv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClothPhysicalMeshDataNv_Legacy
{
public:
	UClothPhysicalMeshDataNv_Legacy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetMaxDistances() {
		return memory.read<struct TArray<float>>(m_addr + 224);
	}
	struct TArray<float> GetBackstopDistances() {
		return memory.read<struct TArray<float>>(m_addr + 240);
	}
	struct TArray<float> GetBackstopRadiuses() {
		return memory.read<struct TArray<float>>(m_addr + 256);
	}
	struct TArray<float> GetAnimDriveMultipliers() {
		return memory.read<struct TArray<float>>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};


