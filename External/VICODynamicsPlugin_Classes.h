#pragma once 
#include <VICODynamicsPlugin_Structs.h>
 
 
 
class UVDSimulatedObject
{
public:
	UVDSimulatedObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBaseVDComponent
{
public:
	UBaseVDComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDSimulation GetSimulationInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UVDSimulation(ptr_addr);
	}
	struct UVDSimulatedObject GetVDSimObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UVDSimulatedObject(ptr_addr);
	}
	struct TArray<struct UVDSimulatedParticle> GetParticles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct TArray<struct UVDSimulatedParticle>(ptr_addr);
	}
	float GetFrictionCoefficient() {
		return memory.read<float>(m_addr + 1184);
	}
	float GetRestitutionCoefficient() {
		return memory.read<float>(m_addr + 1188);
	}
	struct FVDCollisionSettings GetCollisionSettings() {
		return memory.read<struct FVDCollisionSettings>(m_addr + 1192);
	}
	float GetParticleRadius() {
		return memory.read<float>(m_addr + 1256);
	}
	bool GetAttachToRigids() {
		return memory.read<bool>(m_addr + 1260);
	}
	bool GetAttachToParticles() {
		return memory.read<bool>(m_addr + 1261);
	}
	float GetAttachToParticlesConstraintStiffness() {
		return memory.read<float>(m_addr + 1264);
	}
	float GetEndOffset() {
		return memory.read<float>(m_addr + 1268);
	}
	float GetDetectionRadiusInflationFactor() {
		return memory.read<float>(m_addr + 1272);
	}
	bool GetCreateTensionConstraintsForSimulatingRigids() {
		return memory.read<bool>(m_addr + 1276);
	}
	bool GetbSnapToSimulatingAttachment() {
		return memory.read<bool>(m_addr + 1277);
	}
	bool GetManuallyAttachParticles() {
		return memory.read<bool>(m_addr + 1278);
	}
	struct TArray<struct FVDParticleAttachment> GetParticleAttachments() {
		return memory.read<struct TArray<struct FVDParticleAttachment>>(m_addr + 1280);
	}
	float GetTensionForce() {
		return memory.read<float>(m_addr + 1296);
	}
	float GetTensionDampening() {
		return memory.read<float>(m_addr + 1300);
	}
	char GetAdjustOtherParticleLocationsBasedOnAttachments() {
		return memory.read<char>(m_addr + 1304);
	}
	char GetAffectedByGlobalWind() {
		return memory.read<char>(m_addr + 1304);
	}
	char GetUseExplicitRigidBodyCollision() {
		return memory.read<char>(m_addr + 1304);
	}
	float GetWindResistance() {
		return memory.read<float>(m_addr + 1308);
	}
	struct TArray<struct FComponentReference> GetAffectedByWindSources() {
		return memory.read<struct TArray<struct FComponentReference>>(m_addr + 1312);
	}
	bool GetCheckForWindOccluders() {
		return memory.read<bool>(m_addr + 1328);
	}
	float GetMaxWindOccluderDistance() {
		return memory.read<float>(m_addr + 1332);
	}
	struct FVDCollisionSettings GetWindOccluderTraceSettings() {
		return memory.read<struct FVDCollisionSettings>(m_addr + 1336);
	}
	struct FMulticastInlineDelegate GetOnSimulationDataCreated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1400);
	}
	struct FMulticastInlineDelegate GetOnPreSimulationSync() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1416);
	}
	struct FMulticastInlineDelegate GetOnSimulationSync() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1432);
	}
	char GetShowParticles() {
		return memory.read<char>(m_addr + 1448);
	}
	float GetGravityScale() {
		return memory.read<float>(m_addr + 1452);
	}
	float GetMinConstraintDistance() {
		return memory.read<float>(m_addr + 1456);
	}
	bool GetSimulateOnlyWhenRendered() {
		return memory.read<bool>(m_addr + 1460);
	}
	float GetSimulationToggleThreshold() {
		return memory.read<float>(m_addr + 1464);
	}
	char GetEnableParticleToParticleCollisions() {
		return memory.read<char>(m_addr + 1468);
	}
	char GetConsiderInnerCollisions() {
		return memory.read<char>(m_addr + 1468);
	}
	char GetSkipRelativeVelocityCheckDuringRigidBodyCollisions() {
		return memory.read<char>(m_addr + 1468);
	}
	char GetbNotifyOnVDCollision() {
		return memory.read<char>(m_addr + 1469);
	}
	struct FMulticastInlineDelegate GetOnVDCollisionEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1472);
	}
	struct TMap<struct UVDSimulatedParticle, struct FVDCollision> GetPendingCollisionNotifications() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct TMap<struct UVDSimulatedParticle, struct FVDCollision>(ptr_addr);
	}
	struct TArray<struct UVDParticleSpringConstraint> GetConstraintsToOtherParticles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1600);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}
	char GetbUseLocationCache() {
		return memory.read<char>(m_addr + 1648);
	}
	char GetbApplyCachedStartLocationBeforeAttachToRigids() {
		return memory.read<char>(m_addr + 1648);
	}
	struct TArray<struct FVDCachedParticleStartLocation> GetCachedStartLocations() {
		return memory.read<struct TArray<struct FVDCachedParticleStartLocation>>(m_addr + 1656);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDMeshClothComponent
{
public:
	UVDMeshClothComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetHullMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct UStaticMesh(ptr_addr);
	}
	float GetStretchStiffness() {
		return memory.read<float>(m_addr + 1680);
	}
	float GetBendStiffness() {
		return memory.read<float>(m_addr + 1684);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 1688);
	}
	float GetDragCoefficient() {
		return memory.read<float>(m_addr + 1692);
	}
	bool GetPreserveVolume() {
		return memory.read<bool>(m_addr + 1696);
	}
	float GetCurrentVolume() {
		return memory.read<float>(m_addr + 1700);
	}
	float GetOverrideRestVolume() {
		return memory.read<float>(m_addr + 1704);
	}
	char GetUseVertexColorDataForSetup() {
		return memory.read<char>(m_addr + 1712);
	}
	float GetMaxBendConstraintDistance() {
		return memory.read<float>(m_addr + 1716);
	}
	struct TArray<struct UVDParticleSpringConstraint> GetStretchConstraints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}
	struct TArray<struct UVDParticleSpringConstraint> GetBendConstraints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}
	struct UVDMeshVolumeConstraint GetVolumeConstraint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UVDMeshVolumeConstraint(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDBlueprintFunctionLibrary
{
public:
	UVDBlueprintFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVDDynamicRopeComponent
{
public:
	UVDDynamicRopeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVICODynamicsSettings
{
public:
	UVICODynamicsSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReserveParticleBudget() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetReserveConstraintBudget() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetReserveVolumeConstraintBudget() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetBroadphaseNumCellsToAllocate() {
		return memory.read<int32_t>(m_addr + 52);
	}
	float GetBroadphaseCellDimension() {
		return memory.read<float>(m_addr + 56);
	}
	int32_t GetBroadphaseMaxParticlesPerCell() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetNumberOfThreadsToUse() {
		return memory.read<int32_t>(m_addr + 64);
	}
	bool GetEnableSelfCollision() {
		return memory.read<bool>(m_addr + 68);
	}
	bool GetEnablePhysXSceneCollision() {
		return memory.read<bool>(m_addr + 69);
	}
	bool GetPerformExtraCollisionResolutionLoop() {
		return memory.read<bool>(m_addr + 70);
	}
	bool GetEnableExplicitRigidBodyCollision() {
		return memory.read<bool>(m_addr + 71);
	}
	int32_t GetSimulationFramerate() {
		return memory.read<int32_t>(m_addr + 72);
	}
	bool GetRunSimulationOnWorkerThread() {
		return memory.read<bool>(m_addr + 76);
	}
	int32_t GetWorkerThreadCoreAffinity() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetSimulationIterations() {
		return memory.read<int32_t>(m_addr + 84);
	}
	int32_t GetConstraintIterations() {
		return memory.read<int32_t>(m_addr + 88);
	}
	bool GetConstrainSimulationTo2DPlane() {
		return memory.read<bool>(m_addr + 92);
	}
	struct FVector GetPlaneOrigin() {
		return memory.read<struct FVector>(m_addr + 96);
	}
	struct FVector GetPlaneNormal() {
		return memory.read<struct FVector>(m_addr + 108);
	}
	char GetbCachePerFrameResults() {
		return memory.read<char>(m_addr + 120);
	}
	char GetbCacheOnlyCollisionsWithStaticRigidBodies() {
		return memory.read<char>(m_addr + 120);
	}
	char GetbCacheNonHitsAlso() {
		return memory.read<char>(m_addr + 120);
	}
	char GetDrawCollisionDebug() {
		return memory.read<char>(m_addr + 120);
	}
	char GetbShowOnScreenStats() {
		return memory.read<char>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDRopeComponent
{
public:
	UVDRopeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStretchStiffness() {
		return memory.read<float>(m_addr + 1672);
	}
	float GetBendStiffness() {
		return memory.read<float>(m_addr + 1676);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 1680);
	}
	float GetDragCoefficient() {
		return memory.read<float>(m_addr + 1684);
	}
	float GetLength() {
		return memory.read<float>(m_addr + 1688);
	}
	float GetWidth() {
		return memory.read<float>(m_addr + 1692);
	}
	int32_t GetNumSegments() {
		return memory.read<int32_t>(m_addr + 1696);
	}
	int32_t GetNumSides() {
		return memory.read<int32_t>(m_addr + 1700);
	}
	float GetTileMaterial() {
		return memory.read<float>(m_addr + 1704);
	}
	struct TArray<struct UVDParticleSpringConstraint> GetStretchConstraints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}
	struct TArray<struct UVDParticleSpringConstraint> GetBendConstraints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}
	struct TArray<struct FRopePiece> GetPieces() {
		return memory.read<struct TArray<struct FRopePiece>>(m_addr + 1776);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDColliderComponent
{
public:
	UVDColliderComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDSimulation GetSimulationInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UVDSimulation(ptr_addr);
	}
	struct TArray<struct FComponentReference> GetAssociatedVDComponents() {
		return memory.read<struct TArray<struct FComponentReference>>(m_addr + 184);
	}
	char GetbAddAllComponents() {
		return memory.read<char>(m_addr + 200);
	}
	char GetbIgnoreConvexShapes() {
		return memory.read<char>(m_addr + 200);
	}
	struct TArray<struct FName> GetSpecificColliders() {
		return memory.read<struct TArray<struct FName>>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDMeshVolumeConstraint
{
public:
	UVDMeshVolumeConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVDParticleSpringConstraint
{
public:
	UVDParticleSpringConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVDProceduralClothComponent
{
public:
	UVDProceduralClothComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStretchStiffness() {
		return memory.read<float>(m_addr + 1672);
	}
	float GetBendStiffness() {
		return memory.read<float>(m_addr + 1676);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 1680);
	}
	float GetDragCoefficient() {
		return memory.read<float>(m_addr + 1684);
	}
	float GetWidth() {
		return memory.read<float>(m_addr + 1688);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 1692);
	}
	int32_t GetNumParticlesWide() {
		return memory.read<int32_t>(m_addr + 1696);
	}
	int32_t GetNumParticlesHigh() {
		return memory.read<int32_t>(m_addr + 1700);
	}
	float GetTileMaterialAlongWidth() {
		return memory.read<float>(m_addr + 1704);
	}
	float GetTileMaterialAlongHeight() {
		return memory.read<float>(m_addr + 1708);
	}
	struct TArray<struct UVDParticleSpringConstraint> GetStretchConstraints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}
	struct TArray<struct UVDParticleSpringConstraint> GetBendConstraints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct TArray<struct UVDParticleSpringConstraint>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDSimulatedParticle
{
public:
	UVDSimulatedParticle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsAttached() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FVDParticleAttachment GetAttachment() {
		return memory.read<struct FVDParticleAttachment>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDSimulation
{
public:
	UVDSimulation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UVDWindDirectionalSourceComponent> GetWindSources() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 360);
		return struct TArray<struct UVDWindDirectionalSourceComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AVDSimulationSettingsActor
{
public:
	AVDSimulationSettingsActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVDSettings GetSettings() {
		return memory.read<struct FVDSettings>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDSkinnedRopeComponent
{
public:
	UVDSkinnedRopeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FComponentReference GetPoseableMeshRef() {
		return memory.read<struct FComponentReference>(m_addr + 1800);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDSplineRopeComponent
{
public:
	UVDSplineRopeComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FComponentReference GetSplineRef() {
		return memory.read<struct FComponentReference>(m_addr + 1800);
	}
	char GetbAutoAttachToSplineEndPoints() {
		return memory.read<char>(m_addr + 1840);
	}
	char GetbStretchToSplineLength() {
		return memory.read<char>(m_addr + 1840);
	}
	float GetSplineLength() {
		return memory.read<float>(m_addr + 1844);
	}

private:
	std::uint64_t m_addr = 0;
};


class AVDWindDirectionalSourceActor
{
public:
	AVDWindDirectionalSourceActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVDWindDirectionalSourceComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UVDWindDirectionalSourceComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVDWindDirectionalSourceComponent
{
public:
	UVDWindDirectionalSourceComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 504);
	}
	float GetStrength() {
		return memory.read<float>(m_addr + 508);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 512);
	}
	float GetMinGustAmount() {
		return memory.read<float>(m_addr + 516);
	}
	float GetMaxGustAmount() {
		return memory.read<float>(m_addr + 520);
	}
	float GetMinGustDuration() {
		return memory.read<float>(m_addr + 524);
	}
	float GetMaxGustDuration() {
		return memory.read<float>(m_addr + 528);
	}
	float GetMinGustTransitionSpeed() {
		return memory.read<float>(m_addr + 532);
	}
	float GetMaxGustTransitionSpeed() {
		return memory.read<float>(m_addr + 536);
	}
	float GetMinSecondsBetweenGusts() {
		return memory.read<float>(m_addr + 540);
	}
	float GetMaxSecondsBetweenGusts() {
		return memory.read<float>(m_addr + 544);
	}

private:
	std::uint64_t m_addr = 0;
};


