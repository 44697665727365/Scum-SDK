#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction GameplayTasks.OnClaimedResourcesChangeSignature__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnClaimedResourcesChangeSignature__DelegateSignature
{
	struct FGameplayResourceSet NewlyClaimed;  // 0x0(0x2)
	struct FGameplayResourceSet FreshlyReleased;  // 0x2(0x2)

}; 
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
// Size: 0x30(Inherited: 0x0) 
struct FClaimResource
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;  // 0x0(0x10)
	UGameplayTaskResource* ResourceClass;  // 0x10(0x8)
	char Priority;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FName TaskInstanceName;  // 0x1C(0x8)
	char pad_36[4];  // 0x24(0x4)
	struct UGameplayTask_ClaimResource* ReturnValue;  // 0x28(0x8)

}; 
// ScriptStruct GameplayTasks.GameplayResourceSet
// Size: 0x2(Inherited: 0x0) 
struct FGameplayResourceSet
{
	char pad_0[2];  // 0x0(0x2)

}; 
// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// Size: 0x18(Inherited: 0x0) 
struct FBeginSpawningActor
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct AActor* SpawnedActor;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
// Size: 0x38(Inherited: 0x0) 
struct FClaimResources
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;  // 0x0(0x10)
	struct TArray<UGameplayTaskResource*> ResourceClasses;  // 0x10(0x10)
	char Priority;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FName TaskInstanceName;  // 0x24(0x8)
	char pad_44[4];  // 0x2C(0x4)
	struct UGameplayTask_ClaimResource* ReturnValue;  // 0x30(0x8)

}; 
// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// Size: 0x20(Inherited: 0x0) 
struct FTaskWaitDelay
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // 0x0(0x10)
	float Time;  // 0x10(0x4)
	char Priority;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct UGameplayTask_WaitDelay* ReturnValue;  // 0x18(0x8)

}; 
// DelegateFunction GameplayTasks.GameplayTaskSpawnActorDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FGameplayTaskSpawnActorDelegate__DelegateSignature
{
	struct AActor* SpawnedActor;  // 0x0(0x8)

}; 
// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// Size: 0x10(Inherited: 0x0) 
struct FFinishSpawningActor
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct AActor* SpawnedActor;  // 0x8(0x8)

}; 
// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// Size: 0x40(Inherited: 0x0) 
struct FSpawnActor
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // 0x0(0x10)
	struct FVector SpawnLocation;  // 0x10(0xC)
	struct FRotator SpawnRotation;  // 0x1C(0xC)
	AActor* Class;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bSpawnOnlyOnAuthority : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct UGameplayTask_SpawnActor* ReturnValue;  // 0x38(0x8)

}; 
// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// Size: 0x48(Inherited: 0x0) 
struct FK2_RunGameplayTask
{
	struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;  // 0x0(0x10)
	struct UGameplayTask* Task;  // 0x10(0x8)
	char Priority;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	struct TArray<UGameplayTaskResource*> AdditionalRequiredResources;  // 0x20(0x10)
	struct TArray<UGameplayTaskResource*> AdditionalClaimedResources;  // 0x30(0x10)
	uint8_t  ReturnValue;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 
