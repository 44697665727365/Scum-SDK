#pragma once 
#include "SDK.h" 
 
 
// Function CableComponent.CableComponent.GetAttachedActor
// Size: 0x8(Inherited: 0x0) 
struct FGetAttachedActor
{
	struct AActor* ReturnValue;  // 0x0(0x8)

}; 
// Function CableComponent.CableComponent.SetAttachEndTo
// Size: 0x18(Inherited: 0x0) 
struct FSetAttachEndTo
{
	struct AActor* Actor;  // 0x0(0x8)
	struct FName ComponentProperty;  // 0x8(0x8)
	struct FName SocketName;  // 0x10(0x8)

}; 
// Function CableComponent.CableComponent.GetAttachedComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetAttachedComponent
{
	struct USceneComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function CableComponent.CableComponent.GetCableParticleLocations
// Size: 0x10(Inherited: 0x0) 
struct FGetCableParticleLocations
{
	struct TArray<struct FVector> Locations;  // 0x0(0x10)

}; 
// Function CableComponent.CableComponent.SetAttachEndToComponent
// Size: 0x10(Inherited: 0x0) 
struct FSetAttachEndToComponent
{
	struct USceneComponent* Component;  // 0x0(0x8)
	struct FName SocketName;  // 0x8(0x8)

}; 
