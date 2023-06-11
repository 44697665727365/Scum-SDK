#pragma once 
#include <ChaosSolverEngine_Structs.h>
 
 
 
// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xB8(Inherited: 0xB0) 
struct UChaosDebugDrawComponent : public UActorComponent
{
	char pad_176[8];  // 0xB0(0x8)

}; 



// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x318(Inherited: 0x220) 
struct AChaosSolverActor : public AActor
{
	struct FChaosSolverConfiguration Properties;  // 0x220(0x68)
	float TimeStepMultiplier;  // 0x288(0x4)
	int32_t CollisionIterations;  // 0x28C(0x4)
	int32_t PushOutIterations;  // 0x290(0x4)
	int32_t PushOutPairIterations;  // 0x294(0x4)
	float ClusterConnectionFactor;  // 0x298(0x4)
	uint8_t  ClusterUnionConnectionType;  // 0x29C(0x1)
	char pad_669_1 : 7;  // 0x29D(0x1)
	bool DoGenerateCollisionData : 1;  // 0x29D(0x1)
	char pad_670[2];  // 0x29E(0x2)
	struct FSolverCollisionFilterSettings CollisionFilterSettings;  // 0x2A0(0x10)
	char pad_688_1 : 7;  // 0x2B0(0x1)
	bool DoGenerateBreakingData : 1;  // 0x2B0(0x1)
	char pad_689[3];  // 0x2B1(0x3)
	struct FSolverBreakingFilterSettings BreakingFilterSettings;  // 0x2B4(0x10)
	char pad_708_1 : 7;  // 0x2C4(0x1)
	bool DoGenerateTrailingData : 1;  // 0x2C4(0x1)
	char pad_709[3];  // 0x2C5(0x3)
	struct FSolverTrailingFilterSettings TrailingFilterSettings;  // 0x2C8(0x10)
	float MassScale;  // 0x2D8(0x4)
	char pad_732_1 : 7;  // 0x2DC(0x1)
	bool bGenerateContactGraph : 1;  // 0x2DC(0x1)
	char pad_733_1 : 7;  // 0x2DD(0x1)
	bool bHasFloor : 1;  // 0x2DD(0x1)
	char pad_734[2];  // 0x2DE(0x2)
	float FloorHeight;  // 0x2E0(0x4)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl;  // 0x2E4(0x3)
	char pad_743[1];  // 0x2E7(0x1)
	struct UBillboardComponent* SpriteComponent;  // 0x2E8(0x8)
	char pad_752[24];  // 0x2F0(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;  // 0x308(0x8)
	char pad_784[8];  // 0x310(0x8)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
}; 



// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xB8(Inherited: 0xB0) 
struct UChaosEventListenerComponent : public UActorComponent
{
	char pad_176[8];  // 0xB0(0x8)

}; 



// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28(Inherited: 0x28) 
struct UChaosSolver : public UObject
{

}; 



// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x270(Inherited: 0xB8) 
struct UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
	char pad_184[272];  // 0xB8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;  // 0x1C8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;  // 0x218(0x50)
	char pad_616[8];  // 0x268(0x8)

}; 



// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58(Inherited: 0x38) 
struct UChaosSolverSettings : public UDeveloperSettings
{
	char pad_56[8];  // 0x38(0x8)
	struct FSoftClassPath DefaultChaosSolverActorClass;  // 0x40(0x18)

}; 



// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28(Inherited: 0x28) 
struct UChaosNotifyHandlerInterface : public UInterface
{

}; 



// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
}; 



