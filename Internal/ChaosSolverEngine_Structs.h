#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction ChaosSolverEngine.OnChaosPhysicsCollision__DelegateSignature
// Size: 0x70(Inherited: 0x0) 
struct FOnChaosPhysicsCollision__DelegateSignature
{
	struct FChaosPhysicsCollisionInfo CollisionInfo;  // 0x0(0x70)

}; 
// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// Size: 0x70(Inherited: 0x0) 
struct FChaosPhysicsCollisionInfo
{
	struct UPrimitiveComponent* Component;  // 0x0(0x8)
	struct UPrimitiveComponent* OtherComponent;  // 0x8(0x8)
	struct FVector Location;  // 0x10(0xC)
	struct FVector Normal;  // 0x1C(0xC)
	struct FVector AccumulatedImpulse;  // 0x28(0xC)
	struct FVector Velocity;  // 0x34(0xC)
	struct FVector OtherVelocity;  // 0x40(0xC)
	struct FVector AngularVelocity;  // 0x4C(0xC)
	struct FVector OtherAngularVelocity;  // 0x58(0xC)
	float Mass;  // 0x64(0x4)
	float OtherMass;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 
// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// Size: 0x1(Inherited: 0x0) 
struct FSetSolverActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bActive : 1;  // 0x0(0x1)

}; 
// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// Size: 0xF8(Inherited: 0x0) 
struct FConvertPhysicsCollisionToHitResult
{
	struct FChaosPhysicsCollisionInfo PhysicsCollision;  // 0x0(0x70)
	struct FHitResult ReturnValue;  // 0x70(0x88)

}; 
// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// Size: 0x30(Inherited: 0x0) 
struct FChaosBreakEvent
{
	struct UPrimitiveComponent* Component;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FVector Velocity;  // 0x14(0xC)
	struct FVector AngularVelocity;  // 0x20(0xC)
	float Mass;  // 0x2C(0x4)

}; 
// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// Size: 0x58(Inherited: 0x0) 
struct FChaosHandlerSet
{
	char pad_0[8];  // 0x0(0x8)
	struct TSet<struct UObject*> ChaosHandlers;  // 0x8(0x50)

}; 
// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// Size: 0x40(Inherited: 0x0) 
struct FBreakEventCallbackWrapper
{
	char pad_0[64];  // 0x0(0x40)

}; 
// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// Size: 0x3(Inherited: 0x0) 
struct FChaosDebugSubstepControl
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bPause : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bSubstep : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bStep : 1;  // 0x2(0x1)

}; 
