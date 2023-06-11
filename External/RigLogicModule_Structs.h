#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FRigUnit_RigLogic_Data
{
public:
	FRigUnit_RigLogic_Data(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<USkeletalMeshComponent> GetSkelMeshComponent() {
		return memory.read<struct TWeakObjectPtr<USkeletalMeshComponent>>(m_addr + 0);
	}
	struct TArray<int32_t> GetInputCurveIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 24);
	}
	struct TArray<int32_t> GetHierarchyBoneIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 40);
	}
	struct TArray<struct FRigUnit_RigLogic_IntArray> GetMorphTargetCurveIndices() {
		return memory.read<struct TArray<struct FRigUnit_RigLogic_IntArray>>(m_addr + 56);
	}
	struct TArray<struct FRigUnit_RigLogic_IntArray> GetBlendShapeIndices() {
		return memory.read<struct TArray<struct FRigUnit_RigLogic_IntArray>>(m_addr + 72);
	}
	struct TArray<struct FRigUnit_RigLogic_IntArray> GetCurveContainerIndicesForAnimMaps() {
		return memory.read<struct TArray<struct FRigUnit_RigLogic_IntArray>>(m_addr + 88);
	}
	struct TArray<struct FRigUnit_RigLogic_IntArray> GetRigLogicIndicesForAnimMaps() {
		return memory.read<struct TArray<struct FRigUnit_RigLogic_IntArray>>(m_addr + 104);
	}
	uint32_t GetCurrentLOD() {
		return memory.read<uint32_t>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexLayout
{
public:
	FVertexLayout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getposition() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTextureCoordinate() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetNormal() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCoordinateSystem
{
public:
	FCoordinateSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetXAxis() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	uint8_t  GetYAxis() {
		return memory.read<uint8_t >(m_addr + 1);
	}
	uint8_t  GetZAxis() {
		return memory.read<uint8_t >(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FTextureCoordinate
{
public:
	FTextureCoordinate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetU() {
		return memory.read<float>(m_addr + 0);
	}
	float GetV() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_RigLogic_IntArray
{
public:
	FRigUnit_RigLogic_IntArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetValues() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_RigLogic
{
public:
	FRigUnit_RigLogic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigUnit_RigLogic_Data GetData() {
		return memory.read<struct FRigUnit_RigLogic_Data>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FMeshBlendShapeChannelMapping
{
public:
	FMeshBlendShapeChannelMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMeshIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetBlendShapeChannelIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};