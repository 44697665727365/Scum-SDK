#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetGravityScale
{
public:
	FGetGravityScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateParticle
{
public:
	FCreateParticle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVDParticleInfo GetParticleInfo() {
		return memory.read<struct FVDParticleInfo>(m_addr + 0);
	}
	struct UVDSimulatedParticle GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UVDSimulatedParticle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDSimulationTickFunction
{
public:
	FVDSimulationTickFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSetMass
{
public:
	FSetMass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewMass() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDestroyParticle
{
public:
	FDestroyParticle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDSimulatedParticle GetParticle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDSimulatedParticle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTensionConstraintCount
{
public:
	FGetTensionConstraintCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDCollisionDelegate__DelegateSignature
{
public:
	FVDCollisionDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBaseVDComponent GetVDComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBaseVDComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetOtherComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetHitLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetHitNormal() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct UVDSimulatedParticle GetParticle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UVDSimulatedParticle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsConstraining
{
public:
	FIsConstraining(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDSimulatedParticle GetParticle1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDSimulatedParticle(ptr_addr);
	}
	struct UVDSimulatedParticle GetParticle2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UVDSimulatedParticle(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDCachedParticleStartLocation
{
public:
	FVDCachedParticleStartLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	bool GetbIsAttached() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDParticleInfo
{
public:
	FVDParticleInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetIsFree() {
		return memory.read<char>(m_addr + 0);
	}
	char GetIsRigidBodyCollisionEnabled() {
		return memory.read<char>(m_addr + 0);
	}
	char GetIsParticleCollisionEnabled() {
		return memory.read<char>(m_addr + 0);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 4);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDragCoefficient() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAffectiveWindVector
{
public:
	FGetAffectiveWindVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCopyAttachment
{
public:
	FCopyAttachment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVDParticleAttachment GetAttachment() {
		return memory.read<struct FVDParticleAttachment>(m_addr + 0);
	}
	bool GetUseCurrentMass() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMinimumConstraintSatisfactionDistance
{
public:
	FGetMinimumConstraintSatisfactionDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDCollision
{
public:
	FVDCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRopePiece
{
public:
	FRopePiece(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetStartParticleIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetEndParticleIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSkipRelativeVelocityCheckDuringCollision
{
public:
	FGetSkipRelativeVelocityCheckDuringCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPieces
{
public:
	FGetPieces(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRopePiece> GetReturnValue() {
		return memory.read<struct TArray<struct FRopePiece>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDParticleAttachment
{
public:
	FVDParticleAttachment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetParticleIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetAttachingToAnotherParticle() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetSimulateTensionForces() {
		return memory.read<bool>(m_addr + 5);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	bool GetIsRelative() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FComponentReference GetComponentRef() {
		return memory.read<struct FComponentReference>(m_addr + 24);
	}
	struct FName GetSocket() {
		return memory.read<struct FName>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateVolumeConstraint
{
public:
	FCreateVolumeConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetIndexList() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 16);
	}
	float GetRestVolume() {
		return memory.read<float>(m_addr + 20);
	}
	struct UVDMeshVolumeConstraint GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UVDMeshVolumeConstraint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDCollisionSettings
{
public:
	FVDCollisionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char ECollisionChannel GetObjectType() {
		return memory.read<char ECollisionChannel>(m_addr + 0);
	}
	char ECollisionEnabled GetCollisionEnabled() {
		return memory.read<char ECollisionEnabled>(m_addr + 1);
	}
	struct FCollisionResponse GetCollisionResponse() {
		return memory.read<struct FCollisionResponse>(m_addr + 8);
	}
	struct FName GetCollisionProfileName() {
		return memory.read<struct FName>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDragCoefficient
{
public:
	FGetDragCoefficient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVDSettings
{
public:
	FVDSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbOverride_ReserveParticleBudget() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_ReserveConstraintBudget() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_ReserveVolumeConstraintBudget() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_BroadphaseNumCellsToAllocate() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_BroadphaseCellDimension() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_BroadphaseMaxParticlesPerCell() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_NumberOfThreadsToUse() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_EnableSelfCollision() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_EnablePhysXSceneCollision() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_PerformExtraCollisionResolutionLoop() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_EnableExplicitRigidBodyCollision() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_SimulationFramerate() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_RunSimulationOnWorkerThread() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_WorkerThreadCoreAffinity() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_SimulationIterations() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_ConstraintIterations() {
		return memory.read<char>(m_addr + 1);
	}
	char GetbOverride_ConstrainSimulationTo2DPlane() {
		return memory.read<char>(m_addr + 2);
	}
	char GetbOverride_PlaneOrigin() {
		return memory.read<char>(m_addr + 2);
	}
	char GetbOverride_PlaneNormal() {
		return memory.read<char>(m_addr + 2);
	}
	char GetbOverride_CachePerFrameResults() {
		return memory.read<char>(m_addr + 2);
	}
	char GetbOverride_CacheOnlyCollisionsWithStaticRigidBodies() {
		return memory.read<char>(m_addr + 2);
	}
	char GetbOverride_CacheNonHitsAlso() {
		return memory.read<char>(m_addr + 2);
	}
	int32_t GetReserveParticleBudget() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetReserveConstraintBudget() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetReserveVolumeConstraintBudget() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetBroadphaseNumCellsToAllocate() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetBroadphaseCellDimension() {
		return memory.read<float>(m_addr + 20);
	}
	int32_t GetBroadphaseMaxParticlesPerCell() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetNumberOfThreadsToUse() {
		return memory.read<int32_t>(m_addr + 28);
	}
	bool GetEnableSelfCollision() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetEnablePhysXSceneCollision() {
		return memory.read<bool>(m_addr + 33);
	}
	bool GetPerformExtraCollisionResolutionLoop() {
		return memory.read<bool>(m_addr + 34);
	}
	bool GetEnableExplicitRigidBodyCollision() {
		return memory.read<bool>(m_addr + 35);
	}
	int32_t GetSimulationFramerate() {
		return memory.read<int32_t>(m_addr + 36);
	}
	bool GetRunSimulationOnWorkerThread() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t GetWorkerThreadCoreAffinity() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetSimulationIterations() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetConstraintIterations() {
		return memory.read<int32_t>(m_addr + 52);
	}
	bool GetConstrainSimulationTo2DPlane() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FVector GetPlaneOrigin() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	struct FVector GetPlaneNormal() {
		return memory.read<struct FVector>(m_addr + 72);
	}
	char GetbCachePerFrameResults() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbCacheOnlyCollisionsWithStaticRigidBodies() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbCacheNonHitsAlso() {
		return memory.read<char>(m_addr + 84);
	}
	char GetDrawCollisionDebug() {
		return memory.read<char>(m_addr + 84);
	}
	char GetbShowOnScreenStats() {
		return memory.read<char>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLastAppliedForceFromTensionConstraint
{
public:
	FGetLastAppliedForceFromTensionConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTensionConstraintIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAffectedByGlobalWind
{
public:
	FSetAffectedByGlobalWind(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsAffected() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrueLength
{
public:
	FGetTrueLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPieceIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGravityScale
{
public:
	FSetGravityScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScale() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateSpringConstraint
{
public:
	FCreateSpringConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDSimulatedParticle GetParticle1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDSimulatedParticle(ptr_addr);
	}
	struct UVDSimulatedParticle GetParticle2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UVDSimulatedParticle(ptr_addr);
	}
	float GetRestDistance() {
		return memory.read<float>(m_addr + 16);
	}
	float GetStiffness() {
		return memory.read<float>(m_addr + 20);
	}
	struct UVDParticleSpringConstraint GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UVDParticleSpringConstraint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUseExplicitRigidBodyCollision
{
public:
	FSetUseExplicitRigidBodyCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetUseExplicitCollision() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVICODynamicsSimulationInstance
{
public:
	FGetVICODynamicsSimulationInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDSimulation GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDSimulation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCollisionEnabled
{
public:
	FSetCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParticles
{
public:
	FGetParticles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UVDSimulatedParticle> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UVDSimulatedParticle>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBreakAtSegment
{
public:
	FBreakAtSegment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSegmentIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBendConstraintsArray
{
public:
	FGetBendConstraintsArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UVDParticleSpringConstraint> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNewRestLength
{
public:
	FSetNewRestLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewLength() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetPieceIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRestitutionCoefficient
{
public:
	FSetRestitutionCoefficient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewRestitutionCoefficient() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRestDistance
{
public:
	FGetRestDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNewRestLengthStartingAtParticle
{
public:
	FSetNewRestLengthStartingAtParticle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetParticleIndexStart() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetNewLength() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRebuildRopeAtPoints
{
public:
	FRebuildRopeAtPoints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistancePerSegment() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector GetStartLocation() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetEndLocation() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	bool GetbRelativeLocations() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FRebuildRopeAttached
{
public:
	FRebuildRopeAttached(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistancePerSegment() {
		return memory.read<float>(m_addr + 0);
	}
	struct USceneComponent GetStartAttachedTo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetStartSocket() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetStartSimulateTension() {
		return memory.read<bool>(m_addr + 24);
	}
	struct USceneComponent GetEndAttachedTo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetEndSocket() {
		return memory.read<struct FName>(m_addr + 40);
	}
	bool GetEndSimulateTension() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStretchConstraintsArray
{
public:
	FGetStretchConstraintsArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UVDParticleSpringConstraint> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFrictionCoefficient
{
public:
	FGetFrictionCoefficient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAttachToLocation
{
public:
	FAttachToLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	bool GetIsRelative() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 13);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVolumeConstraint
{
public:
	FGetVolumeConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDMeshVolumeConstraint GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDMeshVolumeConstraint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentVolume
{
public:
	FGetCurrentVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRestVolume
{
public:
	FGetRestVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRestVolume
{
public:
	FSetRestVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewVolume() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStifffness
{
public:
	FGetStifffness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParticle1
{
public:
	FGetParticle1(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDSimulatedParticle GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDSimulatedParticle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParticle2
{
public:
	FGetParticle2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDSimulatedParticle GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDSimulatedParticle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRestDistance
{
public:
	FSetRestDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewRestDistance() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCollisionResponseToObjectType
{
public:
	FSetCollisionResponseToObjectType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char ECollisionChannel GetObjectType() {
		return memory.read<char ECollisionChannel>(m_addr + 0);
	}
	char ECollisionResponse GetResponse() {
		return memory.read<char ECollisionResponse>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStiffness
{
public:
	FSetStiffness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewStiffness() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAttachToActor
{
public:
	FAttachToActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AActor(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	bool GetSimulateTension() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FName GetSocket() {
		return memory.read<struct FName>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FDestroyConstraint
{
public:
	FDestroyConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDParticleSpringConstraint GetConstraint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDParticleSpringConstraint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDestroyVolumeConstraint
{
public:
	FDestroyVolumeConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDMeshVolumeConstraint GetConstraint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UVDMeshVolumeConstraint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCollisionEnabled
{
public:
	FGetCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCollisionSettings
{
public:
	FGetCollisionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVDCollisionSettings GetReturnValue() {
		return memory.read<struct FVDCollisionSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpringConstraints
{
public:
	FGetSpringConstraints(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UVDParticleSpringConstraint> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAttachment
{
public:
	FGetAttachment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVDParticleAttachment GetOutAttachment() {
		return memory.read<struct FVDParticleAttachment>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAffectiveWindVector
{
public:
	FSetAffectiveWindVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNewWindVector() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCollisionChannel
{
public:
	FSetCollisionChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char ECollisionChannel GetChannel() {
		return memory.read<char ECollisionChannel>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinimumConstraintSatisfactionDistance
{
public:
	FSetMinimumConstraintSatisfactionDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinDistance() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetObjectType
{
public:
	FSetObjectType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char ECollisionChannel GetObjectType() {
		return memory.read<char ECollisionChannel>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAttachToComponent
{
public:
	FAttachToComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	bool GetSimulateTension() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FName GetSocket() {
		return memory.read<struct FName>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSkipRelativeVelocityCheckDuringCollision
{
public:
	FSetSkipRelativeVelocityCheckDuringCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetSkip() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddForce
{
public:
	FAddForce(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getforce() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsFree
{
public:
	FGetIsFree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsParticleCollisionEnabled
{
public:
	FGetIsParticleCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsRigidBodyCollisionEnabled
{
public:
	FGetIsRigidBodyCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsWindOccluded
{
public:
	FGetIsWindOccluded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocation
{
public:
	FGetLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMass
{
public:
	FGetMass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRadius
{
public:
	FGetRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFrameRate
{
public:
	FSetFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetFrameRate() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRestitutionCoefficient
{
public:
	FGetRestitutionCoefficient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVelocity
{
public:
	FGetVelocity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDragCoefficient
{
public:
	FSetDragCoefficient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewDragCoefficient() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFrictionCoefficient
{
public:
	FSetFrictionCoefficient(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewFrictionCoefficient() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsFree
{
public:
	FSetIsFree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsFree() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsParticleCollisionEnabled
{
public:
	FSetIsParticleCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsRigidBodyCollisionEnabled
{
public:
	FSetIsRigidBodyCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsWindOccluded
{
public:
	FSetIsWindOccluded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsOccluded() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLocation
{
public:
	FSetLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNewLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRadius
{
public:
	FSetRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInRadius() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVelocity
{
public:
	FSetVelocity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNewVelocity() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddExplicitColliderMapping
{
public:
	FAddExplicitColliderMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBaseVDComponent GetVDComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBaseVDComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetCollider() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPrimitiveComponent(ptr_addr);
	}
	bool GetIgnoreConvexShapes() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDirectionalWindParameters
{
public:
	FGetDirectionalWindParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBaseVDComponent GetVDComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBaseVDComponent(ptr_addr);
	}
	struct FVector GetOutDirection() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetOutSpeed() {
		return memory.read<float>(m_addr + 20);
	}
	float GetOutGust() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsExplicitRigidBodyCollisionEnabled
{
public:
	FGetIsExplicitRigidBodyCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsRunningOnWorkerThread
{
public:
	FGetIsRunningOnWorkerThread(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSettings
{
public:
	FGetSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVDSettings GetReturnValue() {
		return memory.read<struct FVDSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class Fk2QueryBoxOverlaps
{
public:
	Fk2QueryBoxOverlaps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetHalfExtents() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct TArray<struct UVDSimulatedParticle> GetOverlaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct TArray<struct UVDSimulatedParticle>(ptr_addr);
	}
	struct TArray<struct UVDSimulatedObject> GetSimObjectsToIgnore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UVDSimulatedObject>(ptr_addr);
	}
	int32_t GetMaxOverlaps() {
		return memory.read<int32_t>(m_addr + 56);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class Fk2QuerySphereOverlaps
{
public:
	Fk2QuerySphereOverlaps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 12);
	}
	struct TArray<struct UVDSimulatedParticle> GetOverlaps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UVDSimulatedParticle>(ptr_addr);
	}
	struct TArray<struct UVDSimulatedObject> GetSimObjectsToIgnore() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UVDSimulatedObject>(ptr_addr);
	}
	int32_t GetMaxOverlaps() {
		return memory.read<int32_t>(m_addr + 48);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsExplicitRigidBodyCollisionEnabled
{
public:
	FSetIsExplicitRigidBodyCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveAllExplicitColliderMappings
{
public:
	FRemoveAllExplicitColliderMappings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBaseVDComponent GetVDComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBaseVDComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveExplicitColliderMapping
{
public:
	FRemoveExplicitColliderMapping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBaseVDComponent GetVDComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UBaseVDComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetCollider() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetConstrainPlaneNormal
{
public:
	FSetConstrainPlaneNormal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetConstrainPlaneOrigin
{
public:
	FSetConstrainPlaneOrigin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetConstrainSimulationTo2DPlane
{
public:
	FSetConstrainSimulationTo2DPlane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetConstraintIterationCount
{
public:
	FSetConstraintIterationCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetConstraintIterationCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPerformExtraCollisionResolutionLoop
{
public:
	FSetPerformExtraCollisionResolutionLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPerFrameCollisionCacheEnable
{
public:
	FSetPerFrameCollisionCacheEnable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPhysXSceneCollisionEnabled
{
public:
	FSetPhysXSceneCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSelfCollisionEnabled
{
public:
	FSetSelfCollisionEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSubstepCount
{
public:
	FSetSubstepCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSubstepCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentGust
{
public:
	FGetCurrentGust(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};