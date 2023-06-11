#pragma once 
#include <CableComponent_Structs.h>
 
 
 
class ACableActor
{
public:
	ACableActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCableComponent GetCableComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UCableComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCableComponent
{
public:
	UCableComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAttachStart() {
		return memory.read<bool>(m_addr + 1144);
	}
	bool GetbAttachEnd() {
		return memory.read<bool>(m_addr + 1145);
	}
	struct FComponentReference GetAttachEndTo() {
		return memory.read<struct FComponentReference>(m_addr + 1152);
	}
	struct FName GetAttachEndToSocketName() {
		return memory.read<struct FName>(m_addr + 1192);
	}
	struct FVector GetEndLocation() {
		return memory.read<struct FVector>(m_addr + 1200);
	}
	float GetCableLength() {
		return memory.read<float>(m_addr + 1212);
	}
	int32_t GetNumSegments() {
		return memory.read<int32_t>(m_addr + 1216);
	}
	float GetSubstepTime() {
		return memory.read<float>(m_addr + 1220);
	}
	int32_t GetSolverIterations() {
		return memory.read<int32_t>(m_addr + 1224);
	}
	bool GetbEnableStiffness() {
		return memory.read<bool>(m_addr + 1228);
	}
	bool GetbUseSubstepping() {
		return memory.read<bool>(m_addr + 1229);
	}
	bool GetbSkipCableUpdateWhenNotVisible() {
		return memory.read<bool>(m_addr + 1230);
	}
	bool GetbSkipCableUpdateWhenNotOwnerRecentlyRendered() {
		return memory.read<bool>(m_addr + 1231);
	}
	bool GetbEnableCollision() {
		return memory.read<bool>(m_addr + 1232);
	}
	float GetCollisionFriction() {
		return memory.read<float>(m_addr + 1236);
	}
	struct FVector GetCableForce() {
		return memory.read<struct FVector>(m_addr + 1240);
	}
	float GetCableGravityScale() {
		return memory.read<float>(m_addr + 1252);
	}
	float GetCableWidth() {
		return memory.read<float>(m_addr + 1256);
	}
	int32_t GetNumSides() {
		return memory.read<int32_t>(m_addr + 1260);
	}
	float GetTileMaterial() {
		return memory.read<float>(m_addr + 1264);
	}

private:
	std::uint64_t m_addr = 0;
};


