#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// Size: 0x20(Inherited: 0x0) 
struct FActorSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds;  // 0x0(0x10)
	struct TArray<struct FActorSequenceObjectReferences> References;  // 0x10(0x10)

}; 
// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// Size: 0x10(Inherited: 0x0) 
struct FActorSequenceObjectReferences
{
	struct TArray<struct FActorSequenceObjectReference> Array;  // 0x0(0x10)

}; 
// ScriptStruct ActorSequence.ActorSequenceObjectReference
// Size: 0x28(Inherited: 0x0) 
struct FActorSequenceObjectReference
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FGuid ActorId;  // 0x4(0x10)
	char pad_20[4];  // 0x14(0x4)
	struct FString PathToComponent;  // 0x18(0x10)

}; 
