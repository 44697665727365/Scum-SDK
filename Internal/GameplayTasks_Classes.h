#pragma once 
#include <GameplayTasks_Structs.h>
 
 
 
// Class GameplayTasks.GameplayTaskResource
// Size: 0x38(Inherited: 0x28) 
struct UGameplayTaskResource : public UObject
{
	int32_t ManualResourceID;  // 0x28(0x4)
	int8_t AutoResourceID;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	char bManuallySetID : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)

}; 



// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28(Inherited: 0x28) 
struct UGameplayTaskOwnerInterface : public UInterface
{

}; 



// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x98(Inherited: 0x68) 
struct UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
	struct FMulticastInlineDelegate OnFinished;  // 0x68(0x10)
	struct FMulticastInlineDelegate OnTimeExpired;  // 0x78(0x10)
	char pad_136[16];  // 0x88(0x10)

}; 



// Class GameplayTasks.GameplayTask
// Size: 0x68(Inherited: 0x28) 
struct UGameplayTask : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FName InstanceName;  // 0x30(0x8)
	char pad_56[2];  // 0x38(0x2)
	uint8_t  ResourceOverlapPolicy;  // 0x3A(0x1)
	char pad_59[37];  // 0x3B(0x25)
	struct UGameplayTask* ChildTask;  // 0x60(0x8)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask
}; 



// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x80(Inherited: 0x68) 
struct UGameplayTask_WaitDelay : public UGameplayTask
{
	struct FMulticastInlineDelegate OnFinish;  // 0x68(0x10)
	char pad_120[8];  // 0x78(0x8)

	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
}; 



// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xA8(Inherited: 0x68) 
struct UGameplayTask_SpawnActor : public UGameplayTask
{
	struct FMulticastInlineDelegate Success;  // 0x68(0x10)
	struct FMulticastInlineDelegate DidNotSpawn;  // 0x78(0x10)
	char pad_136[24];  // 0x88(0x18)
	AActor* ClassToSpawn;  // 0xA0(0x8)

	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, AActor* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
}; 



// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x68(Inherited: 0x68) 
struct UGameplayTask_ClaimResource : public UGameplayTask
{

	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, UGameplayTaskResource* ResourceClass, char Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
}; 



// Class GameplayTasks.GameplayTasksComponent
// Size: 0x120(Inherited: 0xB0) 
struct UGameplayTasksComponent : public UActorComponent
{
	char pad_176[12];  // 0xB0(0xC)
	char pad_188_1 : 1;  // 0xBC(0x1)
	char bIsNetDirty : 1;  // 0xBC(0x1)
	char pad_188_2 : 6;  // 0xBC(0x1)
	char pad_189[4];  // 0xBD(0x4)
	struct TArray<struct UGameplayTask*> SimulatedTasks;  // 0xC0(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue;  // 0xD0(0x10)
	char pad_224[16];  // 0xE0(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks;  // 0xF0(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks;  // 0x100(0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange;  // 0x110(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	uint8_t  K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<UGameplayTaskResource*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
}; 



