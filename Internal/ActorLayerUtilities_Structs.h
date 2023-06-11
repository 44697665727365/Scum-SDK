#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct ActorLayerUtilities.ActorLayer
// Size: 0x8(Inherited: 0x0) 
struct FActorLayer
{
	struct FName Name;  // 0x0(0x8)

}; 
// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// Size: 0x10(Inherited: 0x0) 
struct FAddActorToLayer
{
	struct AActor* InActor;  // 0x0(0x8)
	struct FActorLayer Layer;  // 0x8(0x8)

}; 
// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// Size: 0x20(Inherited: 0x0) 
struct FGetActors
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FActorLayer ActorLayer;  // 0x8(0x8)
	struct TArray<struct AActor*> ReturnValue;  // 0x10(0x10)

}; 
// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
// Size: 0x10(Inherited: 0x0) 
struct FRemoveActorFromLayer
{
	struct AActor* InActor;  // 0x0(0x8)
	struct FActorLayer Layer;  // 0x8(0x8)

}; 
