#pragma once 
#include <AIModule_Structs.h>
 
 
 
// Class AIModule.BTDecorator_TagCooldown
// Size: 0x78(Inherited: 0x68) 
struct UBTDecorator_TagCooldown : public UBTDecorator
{
	struct FGameplayTag CooldownTag;  // 0x68(0x8)
	float CooldownDuration;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bAddToExistingDuration : 1;  // 0x74(0x1)
	char pad_117_1 : 7;  // 0x75(0x1)
	bool bActivatesCooldown : 1;  // 0x75(0x1)
	char pad_118[2];  // 0x76(0x2)

}; 



// Class AIModule.AISenseConfig_Sight
// Size: 0x70(Inherited: 0x48) 
struct UAISenseConfig_Sight : public UAISenseConfig
{
	UAISense_Sight* Implementation;  // 0x48(0x8)
	float SightRadius;  // 0x50(0x4)
	float LoseSightRadius;  // 0x54(0x4)
	float PeripheralVisionAngleDegrees;  // 0x58(0x4)
	struct FAISenseAffiliationFilter DetectionByAffiliation;  // 0x5C(0x4)
	float AutoSuccessRangeFromLastSeenLocation;  // 0x60(0x4)
	float PointOfViewBackwardOffset;  // 0x64(0x4)
	float NearClippingRadius;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xC8(Inherited: 0x68) 
struct UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
	struct FBlackboardKeySelector ActorToCheck;  // 0x68(0x28)
	uint8_t  TagsToMatch;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct FGameplayTagContainer GameplayTags;  // 0x98(0x20)
	struct FString CachedDescription;  // 0xB8(0x10)

}; 



// Class AIModule.AIDataProvider
// Size: 0x28(Inherited: 0x28) 
struct UAIDataProvider : public UObject
{

}; 



// Class AIModule.BlackboardKeyType_Int
// Size: 0x30(Inherited: 0x30) 
struct UBlackboardKeyType_Int : public UBlackboardKeyType
{

}; 



// Class AIModule.AIController
// Size: 0x328(Inherited: 0x298) 
struct AAIController : public AController
{
	char pad_664[56];  // 0x298(0x38)
	char bStartAILogicOnPossess : 1;  // 0x2D0(0x1)
	char bStopAILogicOnUnposses : 1;  // 0x2D0(0x1)
	char bLOSflag : 1;  // 0x2D0(0x1)
	char bSkipExtraLOSChecks : 1;  // 0x2D0(0x1)
	char bAllowStrafe : 1;  // 0x2D0(0x1)
	char bWantsPlayerState : 1;  // 0x2D0(0x1)
	char bSetControlRotationFromPawnOrientation : 1;  // 0x2D0(0x1)
	char pad_720_1 : 1;  // 0x2D0(0x1)
	char pad_721[8];  // 0x2D1(0x8)
	struct UPathFollowingComponent* PathFollowingComponent;  // 0x2D8(0x8)
	struct UBrainComponent* BrainComponent;  // 0x2E0(0x8)
	struct UAIPerceptionComponent* PerceptionComponent;  // 0x2E8(0x8)
	struct UPawnActionsComponent* ActionsComp;  // 0x2F0(0x8)
	struct UBlackboardComponent* Blackboard;  // 0x2F8(0x8)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent;  // 0x300(0x8)
	UNavigationQueryFilter* DefaultNavigationFilterClass;  // 0x308(0x8)
	struct FMulticastInlineDelegate ReceiveMoveCompleted;  // 0x310(0x10)
	char pad_800[8];  // 0x320(0x8)

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // Function AIModule.AIController.UseBlackboard
	void UnclaimTaskResource(UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	char EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation
	char EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent
	char EPathFollowingStatus GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent
	void ClaimTaskResource(UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.ClaimTaskResource
}; 



// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68(Inherited: 0x28) 
struct UAIAsyncTaskBlueprintProxy : public UObject
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnFail;  // 0x38(0x10)
	char pad_72[32];  // 0x48(0x20)

	void OnMoveCompleted(struct FAIRequestID RequestID, char EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
}; 



// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28(Inherited: 0x28) 
struct UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{

	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	int32_t GetNextNavLinkIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	struct TArray<struct FVector> GetCurrentPathPoints(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	int32_t GetCurrentPathIndex(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* targetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
}; 



// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30(Inherited: 0x30) 
struct UBlackboardKeyType_Rotator : public UBlackboardKeyType
{

}; 



// Class AIModule.BehaviorTreeTypes
// Size: 0x28(Inherited: 0x28) 
struct UBehaviorTreeTypes : public UObject
{

}; 



// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xA0(Inherited: 0x68) 
struct UBTDecorator_BlueprintBase : public UBTDecorator
{
	struct AAIController* AIOwner;  // 0x68(0x8)
	struct AActor* ActorOwner;  // 0x70(0x8)
	struct TArray<struct FName> ObservedKeyNames;  // 0x78(0x10)
	char pad_136[16];  // 0x88(0x10)
	char bShowPropertyDetails : 1;  // 0x98(0x1)
	char bCheckConditionOnlyBlackBoardChanges : 1;  // 0x98(0x1)
	char bIsObservingBB : 1;  // 0x98(0x1)
	char pad_152_1 : 5;  // 0x98(0x1)
	char pad_153[8];  // 0x99(0x8)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, char EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	void ReceiveExecutionFinish(struct AActor* OwnerActor, char EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
}; 



// Class AIModule.BlackboardKeyType_Float
// Size: 0x30(Inherited: 0x30) 
struct UBlackboardKeyType_Float : public UBlackboardKeyType
{

}; 



// Class AIModule.AIDataProvider_QueryParams
// Size: 0x40(Inherited: 0x28) 
struct UAIDataProvider_QueryParams : public UAIDataProvider
{
	struct FName ParamName;  // 0x28(0x8)
	float FloatValue;  // 0x30(0x4)
	int32_t IntValue;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool BoolValue : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 



// Class AIModule.AIDataProvider_Random
// Size: 0x50(Inherited: 0x40) 
struct UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
	float Min;  // 0x40(0x4)
	float Max;  // 0x44(0x4)
	char bInteger : 1;  // 0x48(0x1)
	char pad_72_1 : 7;  // 0x48(0x1)
	char pad_73[8];  // 0x49(0x8)

}; 



// Class AIModule.AITask_RunEQS
// Size: 0xE8(Inherited: 0x70) 
struct UAITask_RunEQS : public UAITask
{
	char pad_112[120];  // 0x70(0x78)

	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS
}; 



// Class AIModule.AIHotSpotManager
// Size: 0x28(Inherited: 0x28) 
struct UAIHotSpotManager : public UObject
{

}; 



// Class AIModule.AIPerceptionComponent
// Size: 0x190(Inherited: 0xB0) 
struct UAIPerceptionComponent : public UActorComponent
{
	struct TArray<struct UAISenseConfig*> SensesConfig;  // 0xB0(0x10)
	UAISense* DominantSense;  // 0xC0(0x8)
	char pad_200[16];  // 0xC8(0x10)
	struct AAIController* AIOwner;  // 0xD8(0x8)
	char pad_224[128];  // 0xE0(0x80)
	struct FMulticastInlineDelegate OnPerceptionUpdated;  // 0x160(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated;  // 0x170(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionInfoUpdated;  // 0x180(0x10)

	void SetSenseEnabled(UAISense* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	void OnOwnerEndPlay(struct AActor* Actor, char EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	void GetPerceivedHostileActorsBySense(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	void GetPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors
	void GetKnownPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	void GetCurrentlyPerceivedActors(UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll
}; 



// Class AIModule.AIPerceptionListenerInterface
// Size: 0x28(Inherited: 0x28) 
struct UAIPerceptionListenerInterface : public UInterface
{

}; 



// Class AIModule.AISenseConfig_Team
// Size: 0x48(Inherited: 0x48) 
struct UAISenseConfig_Team : public UAISenseConfig
{

}; 



// Class AIModule.AISenseConfig_Prediction
// Size: 0x48(Inherited: 0x48) 
struct UAISenseConfig_Prediction : public UAISenseConfig
{

}; 



// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80(Inherited: 0x50) 
struct UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
	struct FEnvTraceData ProjectionData;  // 0x50(0x30)

}; 



// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0xC8(Inherited: 0xB0) 
struct UAIPerceptionStimuliSourceComponent : public UActorComponent
{
	char bAutoRegisterAsSource : 1;  // 0xB0(0x1)
	char pad_176_1 : 7;  // 0xB0(0x1)
	char pad_177[8];  // 0xB1(0x8)
	struct TArray<UAISense*> RegisterAsSourceForSenses;  // 0xB8(0x10)

	void UnregisterFromSense(UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	void RegisterForSense(UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
}; 



// Class AIModule.PathFollowingManager
// Size: 0x28(Inherited: 0x28) 
struct UPathFollowingManager : public UObject
{

}; 



// Class AIModule.AISubsystem
// Size: 0x38(Inherited: 0x28) 
struct UAISubsystem : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UAISystem* AISystem;  // 0x30(0x8)

}; 



// Class AIModule.BlackboardComponent
// Size: 0x1B8(Inherited: 0xB0) 
struct UBlackboardComponent : public UActorComponent
{
	struct UBrainComponent* BrainComp;  // 0xB0(0x8)
	struct UBlackboardData* DefaultBlackboardAsset;  // 0xB8(0x8)
	struct UBlackboardData* BlackboardAsset;  // 0xC0(0x8)
	char pad_200[32];  // 0xC8(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances;  // 0xE8(0x10)
	char pad_248[192];  // 0xF8(0xC0)

	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum
	void SetValueAsClass(struct FName& KeyName, UObject* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool
	bool IsVectorValueSet(struct FName& KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet
	struct FVector GetValueAsVector(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector
	struct FString GetValueAsString(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsString
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator
	struct UObject* GetValueAsObject(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject
	struct FName GetValueAsName(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsName
	int32_t GetValueAsInt(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt
	float GetValueAsFloat(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat
	char GetValueAsEnum(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum
	UObject* GetValueAsClass(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass
	bool GetValueAsBool(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry
	void ClearValue(struct FName& KeyName); // Function AIModule.BlackboardComponent.ClearValue
}; 



// Class AIModule.AISenseEvent_Damage
// Size: 0x60(Inherited: 0x28) 
struct UAISenseEvent_Damage : public UAISenseEvent
{
	struct FAIDamageEvent Event;  // 0x28(0x38)

}; 



// Class AIModule.PawnAction_Sequence
// Size: 0xB8(Inherited: 0x90) 
struct UPawnAction_Sequence : public UPawnAction
{
	struct TArray<struct UPawnAction*> ActionSequence;  // 0x90(0x10)
	char EPawnActionFailHandling ChildFailureHandlingMode;  // 0xA0(0x1)
	char pad_161[7];  // 0xA1(0x7)
	struct UPawnAction* RecentActionCopy;  // 0xA8(0x8)
	char pad_176[8];  // 0xB0(0x8)

}; 



// Class AIModule.AIResource_Logic
// Size: 0x38(Inherited: 0x38) 
struct UAIResource_Logic : public UGameplayTaskResource
{

}; 



// Class AIModule.AIPerceptionSystem
// Size: 0x130(Inherited: 0x38) 
struct UAIPerceptionSystem : public UAISubsystem
{
	char pad_56[80];  // 0x38(0x50)
	struct TArray<struct UAISense*> Senses;  // 0x88(0x10)
	float PerceptionAgingRate;  // 0x98(0x4)
	char pad_156[148];  // 0x9C(0x94)

	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, UAISense* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, char EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
}; 



// Class AIModule.EnvQueryTest_Dot
// Size: 0x240(Inherited: 0x1F8) 
struct UEnvQueryTest_Dot : public UEnvQueryTest
{
	struct FEnvDirection LineA;  // 0x1F8(0x20)
	struct FEnvDirection LineB;  // 0x218(0x20)
	uint8_t  TestMode;  // 0x238(0x1)
	char pad_569_1 : 7;  // 0x239(0x1)
	bool bAbsoluteValue : 1;  // 0x239(0x1)
	char pad_570[6];  // 0x23A(0x6)

}; 



// Class AIModule.AIResourceInterface
// Size: 0x28(Inherited: 0x28) 
struct UAIResourceInterface : public UInterface
{

}; 



// Class AIModule.BlackboardKeyType_Object
// Size: 0x38(Inherited: 0x30) 
struct UBlackboardKeyType_Object : public UBlackboardKeyType
{
	UObject* BaseClass;  // 0x30(0x8)

}; 



// Class AIModule.EnvQueryContext
// Size: 0x28(Inherited: 0x28) 
struct UEnvQueryContext : public UObject
{

}; 



// Class AIModule.AIResource_Movement
// Size: 0x38(Inherited: 0x38) 
struct UAIResource_Movement : public UGameplayTaskResource
{

}; 



// Class AIModule.AISenseConfig_Hearing
// Size: 0x70(Inherited: 0x48) 
struct UAISenseConfig_Hearing : public UAISenseConfig
{
	UAISense_Hearing* Implementation;  // 0x48(0x8)
	float HearingRange;  // 0x50(0x4)
	float LoSHearingRange;  // 0x54(0x4)
	char bUseLoSHearing : 1;  // 0x58(0x1)
	char pad_88_1 : 7;  // 0x58(0x1)
	char pad_89[4];  // 0x59(0x4)
	struct FAISenseAffiliationFilter DetectionByAffiliation;  // 0x5C(0x4)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bHearingOcclusionEnabled : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	float HearingRangeReductionIfOccluded;  // 0x64(0x4)
	char ECollisionChannel HearingOcclusionCollisionChannel;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class AIModule.BlackboardKeyType_Class
// Size: 0x38(Inherited: 0x30) 
struct UBlackboardKeyType_Class : public UBlackboardKeyType
{
	UObject* BaseClass;  // 0x30(0x8)

}; 



// Class AIModule.AISense
// Size: 0x80(Inherited: 0x28) 
struct UAISense : public UObject
{
	float DefaultExpirationAge;  // 0x28(0x4)
	uint8_t  notifyType;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	char bWantsNewPawnNotification : 1;  // 0x30(0x1)
	char bAutoRegisterAllPawnsAsSources : 1;  // 0x30(0x1)
	char pad_48_1 : 6;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)
	struct UAIPerceptionSystem* PerceptionSystemInstance;  // 0x38(0x8)
	char pad_64[64];  // 0x40(0x40)

}; 



// Class AIModule.BehaviorTreeManager
// Size: 0x50(Inherited: 0x28) 
struct UBehaviorTreeManager : public UObject
{
	int32_t MaxDebuggerSteps;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates;  // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents;  // 0x40(0x10)

}; 



// Class AIModule.VisualLoggerExtension
// Size: 0x28(Inherited: 0x28) 
struct UVisualLoggerExtension : public UObject
{

}; 



// Class AIModule.AISense_Blueprint
// Size: 0xA8(Inherited: 0x80) 
struct UAISense_Blueprint : public UAISense
{
	UUserDefinedStruct* ListenerDataType;  // 0x80(0x8)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer;  // 0x88(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents;  // 0x98(0x10)

	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors
}; 



// Class AIModule.AISense_Damage
// Size: 0x90(Inherited: 0x80) 
struct UAISense_Damage : public UAISense
{
	struct TArray<struct FAIDamageEvent> RegisteredEvents;  // 0x80(0x10)

	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float damageAmount, struct FVector EventLocation, struct FVector HitLocation, struct FName Tag); // Function AIModule.AISense_Damage.ReportDamageEvent
}; 



// Class AIModule.AISense_Hearing
// Size: 0xE8(Inherited: 0x80) 
struct UAISense_Hearing : public UAISense
{
	struct TArray<struct FAINoiseEvent> NoiseEvents;  // 0x80(0x10)
	float SpeedOfSoundSq;  // 0x90(0x4)
	char pad_148[84];  // 0x94(0x54)

	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent
}; 



// Class AIModule.AISense_Prediction
// Size: 0x90(Inherited: 0x80) 
struct UAISense_Prediction : public UAISense
{
	struct TArray<struct FAIPredictionEvent> RegisteredEvents;  // 0x80(0x10)

	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
}; 



// Class AIModule.BlackboardKeyType_Name
// Size: 0x30(Inherited: 0x30) 
struct UBlackboardKeyType_Name : public UBlackboardKeyType
{

}; 



// Class AIModule.AISense_Sight
// Size: 0x170(Inherited: 0x80) 
struct UAISense_Sight : public UAISense
{
	char pad_128[200];  // 0x80(0xC8)
	int32_t MaxTracesPerTick;  // 0x148(0x4)
	int32_t MinQueriesPerTimeSliceCheck;  // 0x14C(0x4)
	double MaxTimeSlicePerTick;  // 0x150(0x8)
	float HighImportanceQueryDistanceThreshold;  // 0x158(0x4)
	char pad_348[4];  // 0x15C(0x4)
	float MaxQueryImportance;  // 0x160(0x4)
	float SightLimitQueryImportance;  // 0x164(0x4)
	char pad_360[8];  // 0x168(0x8)

}; 



// Class AIModule.AISense_Team
// Size: 0x90(Inherited: 0x80) 
struct UAISense_Team : public UAISense
{
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents;  // 0x80(0x10)

}; 



// Class AIModule.AISense_Touch
// Size: 0x90(Inherited: 0x80) 
struct UAISense_Touch : public UAISense
{
	struct TArray<struct FAITouchEvent> RegisteredEvents;  // 0x80(0x10)

}; 



// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xC0(Inherited: 0x68) 
struct UBTDecorator_CompareBBEntries : public UBTDecorator
{
	char EBlackBoardEntryComparison Operator;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)
	struct FBlackboardKeySelector BlackboardKeyA;  // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyB;  // 0x98(0x28)

}; 



// Class AIModule.AISightTargetInterface
// Size: 0x28(Inherited: 0x28) 
struct UAISightTargetInterface : public UInterface
{

}; 



// Class AIModule.AISenseBlueprintListener
// Size: 0x108(Inherited: 0x108) 
struct UAISenseBlueprintListener : public UUserDefinedStruct
{

}; 



// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x170(Inherited: 0xF8) 
struct UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
	struct FAIDataProviderBoolValue PathToItem;  // 0xF8(0x38)
	UNavigationQueryFilter* NavigationFilter;  // 0x130(0x8)
	struct FAIDataProviderFloatValue ScanRangeMultiplier;  // 0x138(0x38)

}; 



// Class AIModule.AISenseConfig
// Size: 0x48(Inherited: 0x28) 
struct UAISenseConfig : public UObject
{
	struct FColor DebugColor;  // 0x28(0x4)
	float MaxAge;  // 0x2C(0x4)
	char bStartsEnabled : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[24];  // 0x31(0x18)

}; 



// Class AIModule.AISenseConfig_Blueprint
// Size: 0x50(Inherited: 0x48) 
struct UAISenseConfig_Blueprint : public UAISenseConfig
{
	UAISense_Blueprint* Implementation;  // 0x48(0x8)

}; 



// Class AIModule.AISenseConfig_Damage
// Size: 0x50(Inherited: 0x48) 
struct UAISenseConfig_Damage : public UAISenseConfig
{
	UAISense_Damage* Implementation;  // 0x48(0x8)

}; 



// Class AIModule.BTAuxiliaryNode
// Size: 0x60(Inherited: 0x58) 
struct UBTAuxiliaryNode : public UBTNode
{
	char pad_88[8];  // 0x58(0x8)

}; 



// Class AIModule.AISenseConfig_Touch
// Size: 0x48(Inherited: 0x48) 
struct UAISenseConfig_Touch : public UAISenseConfig
{

}; 



// Class AIModule.BehaviorTreeComponent
// Size: 0x298(Inherited: 0x108) 
struct UBehaviorTreeComponent : public UBrainComponent
{
	char pad_264[32];  // 0x108(0x20)
	struct TArray<struct UBTNode*> NodeInstances;  // 0x128(0x10)
	char pad_312[320];  // 0x138(0x140)
	struct UBehaviorTree* DefaultBehaviorTreeAsset;  // 0x278(0x8)
	char pad_640[24];  // 0x280(0x18)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
}; 



// Class AIModule.AITask_MoveTo
// Size: 0x110(Inherited: 0x70) 
struct UAITask_MoveTo : public UAITask
{
	struct FMulticastInlineDelegate OnRequestFailed;  // 0x70(0x10)
	struct FMulticastInlineDelegate OnMoveFinished;  // 0x80(0x10)
	struct FAIMoveRequest MoveRequest;  // 0x90(0x40)
	char pad_208[64];  // 0xD0(0x40)

	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, char EAIOptionFlag StopOnOverlap, char EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, char EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo
}; 



// Class AIModule.AISenseEvent
// Size: 0x28(Inherited: 0x28) 
struct UAISenseEvent : public UObject
{

}; 



// Class AIModule.AISenseEvent_Hearing
// Size: 0x58(Inherited: 0x28) 
struct UAISenseEvent_Hearing : public UAISenseEvent
{
	struct FAINoiseEvent Event;  // 0x28(0x30)

}; 



// Class AIModule.AISystem
// Size: 0x130(Inherited: 0x58) 
struct UAISystem : public UAISystemBase
{
	struct FSoftClassPath PerceptionSystemClassName;  // 0x58(0x18)
	struct FSoftClassPath HotSpotManagerClassName;  // 0x70(0x18)
	float AcceptanceRadius;  // 0x88(0x4)
	float PathfollowingRegularPathPointAcceptanceRadius;  // 0x8C(0x4)
	float PathfollowingNavLinkAcceptanceRadius;  // 0x90(0x4)
	char pad_148_1 : 7;  // 0x94(0x1)
	bool bFinishMoveOnGoalOverlap : 1;  // 0x94(0x1)
	char pad_149_1 : 7;  // 0x95(0x1)
	bool bAcceptPartialPaths : 1;  // 0x95(0x1)
	char pad_150_1 : 7;  // 0x96(0x1)
	bool bAllowStrafing : 1;  // 0x96(0x1)
	char pad_151_1 : 7;  // 0x97(0x1)
	bool bEnableBTAITasks : 1;  // 0x97(0x1)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bAllowControllersAsEQSQuerier : 1;  // 0x98(0x1)
	char pad_153_1 : 7;  // 0x99(0x1)
	bool bEnableDebuggerPlugin : 1;  // 0x99(0x1)
	char pad_154_1 : 7;  // 0x9A(0x1)
	bool bForgetStaleActors : 1;  // 0x9A(0x1)
	char pad_155_1 : 7;  // 0x9B(0x1)
	bool bAddBlackboardSelfKey : 1;  // 0x9B(0x1)
	char ECollisionChannel DefaultSightCollisionChannel;  // 0x9C(0x1)
	char pad_157[3];  // 0x9D(0x3)
	struct UBehaviorTreeManager* BehaviorTreeManager;  // 0xA0(0x8)
	struct UEnvQueryManager* EnvironmentQueryManager;  // 0xA8(0x8)
	struct UAIPerceptionSystem* PerceptionSystem;  // 0xB0(0x8)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects;  // 0xB8(0x10)
	struct UAIHotSpotManager* HotSpotManager;  // 0xC8(0x8)
	struct UNavLocalGridManager* NavLocalGrids;  // 0xD0(0x8)
	char pad_216[88];  // 0xD8(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers
}; 



// Class AIModule.BlackboardKeyType_String
// Size: 0x40(Inherited: 0x30) 
struct UBlackboardKeyType_String : public UBlackboardKeyType
{
	struct FString StringValue;  // 0x30(0x10)

}; 



// Class AIModule.AITask
// Size: 0x70(Inherited: 0x68) 
struct UAITask : public UGameplayTask
{
	struct AAIController* OwnerController;  // 0x68(0x8)

}; 



// Class AIModule.AITask_LockLogic
// Size: 0x70(Inherited: 0x70) 
struct UAITask_LockLogic : public UAITask
{

}; 



// Class AIModule.BehaviorTree
// Size: 0x68(Inherited: 0x28) 
struct UBehaviorTree : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UBTCompositeNode* RootNode;  // 0x30(0x8)
	struct UBlackboardData* BlackboardAsset;  // 0x38(0x8)
	struct TArray<struct UBTDecorator*> RootDecorators;  // 0x40(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps;  // 0x50(0x10)
	char pad_96[8];  // 0x60(0x8)

}; 



// Class AIModule.BrainComponent
// Size: 0x108(Inherited: 0xB0) 
struct UBrainComponent : public UActorComponent
{
	char pad_176[8];  // 0xB0(0x8)
	struct UBlackboardComponent* BlackboardComp;  // 0xB8(0x8)
	struct AAIController* AIOwner;  // 0xC0(0x8)
	char pad_200[64];  // 0xC8(0x40)

	void StopLogic(struct FString reason); // Function AIModule.BrainComponent.StopLogic
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused
}; 



// Class AIModule.BlackboardAssetProvider
// Size: 0x28(Inherited: 0x28) 
struct UBlackboardAssetProvider : public UInterface
{

	struct UBlackboardData* GetBlackboardAsset(); // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
}; 



// Class AIModule.BlackboardData
// Size: 0x50(Inherited: 0x30) 
struct UBlackboardData : public UDataAsset
{
	struct UBlackboardData* Parent;  // 0x30(0x8)
	struct TArray<struct FBlackboardEntry> Keys;  // 0x38(0x10)
	char bHasSynchronizedKeys : 1;  // 0x48(0x1)
	char pad_72_1 : 7;  // 0x48(0x1)
	char pad_73[8];  // 0x49(0x8)

}; 



// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x68(Inherited: 0x68) 
struct UBTDecorator_ReachedMoveGoal : public UBTDecorator
{

}; 



// Class AIModule.BlackboardKeyType
// Size: 0x30(Inherited: 0x28) 
struct UBlackboardKeyType : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class AIModule.BlackboardKeyType_Bool
// Size: 0x30(Inherited: 0x30) 
struct UBlackboardKeyType_Bool : public UBlackboardKeyType
{

}; 



// Class AIModule.BlackboardKeyType_Enum
// Size: 0x50(Inherited: 0x30) 
struct UBlackboardKeyType_Enum : public UBlackboardKeyType
{
	struct UEnum* EnumType;  // 0x30(0x8)
	struct FString EnumName;  // 0x38(0x10)
	char bIsEnumNameValid : 1;  // 0x48(0x1)
	char pad_72_1 : 7;  // 0x48(0x1)
	char pad_73[8];  // 0x49(0x8)

}; 



// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x48(Inherited: 0x30) 
struct UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
	struct FString EnumName;  // 0x30(0x10)
	struct UEnum* EnumType;  // 0x40(0x8)

}; 



// Class AIModule.BlackboardKeyType_Vector
// Size: 0x30(Inherited: 0x30) 
struct UBlackboardKeyType_Vector : public UBlackboardKeyType
{

}; 



// Class AIModule.BTNode
// Size: 0x58(Inherited: 0x28) 
struct UBTNode : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FString NodeName;  // 0x30(0x10)
	struct UBehaviorTree* TreeAsset;  // 0x40(0x8)
	struct UBTCompositeNode* ParentNode;  // 0x48(0x8)
	char pad_80[8];  // 0x50(0x8)

}; 



// Class AIModule.EnvQueryTest_Volume
// Size: 0x210(Inherited: 0x1F8) 
struct UEnvQueryTest_Volume : public UEnvQueryTest
{
	UEnvQueryContext* VolumeContext;  // 0x1F8(0x8)
	AVolume* VolumeClass;  // 0x200(0x8)
	char bDoComplexVolumeTest : 1;  // 0x208(0x1)
	char pad_520_1 : 7;  // 0x208(0x1)
	char pad_521[8];  // 0x209(0x8)

}; 



// Class AIModule.BTCompositeNode
// Size: 0x90(Inherited: 0x58) 
struct UBTCompositeNode : public UBTNode
{
	struct TArray<struct FBTCompositeChild> Children;  // 0x58(0x10)
	struct TArray<struct UBTService*> Services;  // 0x68(0x10)
	char pad_120[16];  // 0x78(0x10)
	char bApplyDecoratorScope : 1;  // 0x88(0x1)
	char pad_136_1 : 7;  // 0x88(0x1)
	char pad_137[8];  // 0x89(0x8)

}; 



// Class AIModule.BTComposite_Selector
// Size: 0x90(Inherited: 0x90) 
struct UBTComposite_Selector : public UBTCompositeNode
{

}; 



// Class AIModule.BTComposite_Sequence
// Size: 0x90(Inherited: 0x90) 
struct UBTComposite_Sequence : public UBTCompositeNode
{

}; 



// Class AIModule.BTComposite_SimpleParallel
// Size: 0x98(Inherited: 0x90) 
struct UBTComposite_SimpleParallel : public UBTCompositeNode
{
	char EBTParallelMode FinishMode;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)

}; 



// Class AIModule.BTDecorator
// Size: 0x68(Inherited: 0x60) 
struct UBTDecorator : public UBTAuxiliaryNode
{
	char pad_96_1 : 7;  // 0x60(0x1)
	char bInverseCondition : 1;  // 0x60(0x1)
	char pad_97[3];  // 0x61(0x3)
	char EBTFlowAbortMode FlowAbortMode;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)

}; 



// Class AIModule.BTDecorator_BlackboardBase
// Size: 0x90(Inherited: 0x68) 
struct UBTDecorator_BlackboardBase : public UBTDecorator
{
	struct FBlackboardKeySelector BlackboardKey;  // 0x68(0x28)

}; 



// Class AIModule.BTDecorator_Blackboard
// Size: 0xC0(Inherited: 0x90) 
struct UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
	int32_t IntValue;  // 0x90(0x4)
	float FloatValue;  // 0x94(0x4)
	struct FString StringValue;  // 0x98(0x10)
	struct FString CachedDescription;  // 0xA8(0x10)
	char OperationType;  // 0xB8(0x1)
	char EBTBlackboardRestart NotifyObserver;  // 0xB9(0x1)
	char pad_186[6];  // 0xBA(0x6)

}; 



// Class AIModule.EnvQueryGenerator
// Size: 0x50(Inherited: 0x30) 
struct UEnvQueryGenerator : public UEnvQueryNode
{
	struct FString OptionName;  // 0x30(0x10)
	UEnvQueryItemType* ItemType;  // 0x40(0x8)
	char bAutoSortTests : 1;  // 0x48(0x1)
	char pad_72_1 : 7;  // 0x48(0x1)
	char pad_73[8];  // 0x49(0x8)

}; 



// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xC0(Inherited: 0xC0) 
struct UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{

}; 



// Class AIModule.BTDecorator_ConeCheck
// Size: 0xF0(Inherited: 0x68) 
struct UBTDecorator_ConeCheck : public UBTDecorator
{
	float ConeHalfAngle;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)
	struct FBlackboardKeySelector ConeOrigin;  // 0x70(0x28)
	struct FBlackboardKeySelector ConeDirection;  // 0x98(0x28)
	struct FBlackboardKeySelector Observed;  // 0xC0(0x28)
	char pad_232[8];  // 0xE8(0x8)

}; 



// Class AIModule.EnvQueryItemType_Point
// Size: 0x30(Inherited: 0x30) 
struct UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{

}; 



// Class AIModule.BTDecorator_Cooldown
// Size: 0x70(Inherited: 0x68) 
struct UBTDecorator_Cooldown : public UBTDecorator
{
	float CoolDownTime;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xC8(Inherited: 0x68) 
struct UBTDecorator_DoesPathExist : public UBTDecorator
{
	struct FBlackboardKeySelector BlackboardKeyA;  // 0x68(0x28)
	struct FBlackboardKeySelector BlackboardKeyB;  // 0x90(0x28)
	char bUseSelf : 1;  // 0xB8(0x1)
	char pad_184_1 : 7;  // 0xB8(0x1)
	char pad_185[4];  // 0xB9(0x4)
	char EPathExistanceQueryType PathQueryType;  // 0xBC(0x1)
	char pad_189[3];  // 0xBD(0x3)
	UNavigationQueryFilter* FilterClass;  // 0xC0(0x8)

}; 



// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x68(Inherited: 0x68) 
struct UBTDecorator_ForceSuccess : public UBTDecorator
{

}; 



// Class AIModule.BTDecorator_IsAtLocation
// Size: 0xD8(Inherited: 0x90) 
struct UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
	float AcceptableRadius;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius;  // 0x98(0x38)
	uint8_t  GeometricDistanceType;  // 0xD0(0x1)
	char pad_209[3];  // 0xD1(0x3)
	char bUseParametrizedRadius : 1;  // 0xD4(0x1)
	char bUseNavAgentGoalLocation : 1;  // 0xD4(0x1)
	char bPathFindingBasedTest : 1;  // 0xD4(0x1)
	char pad_212_1 : 5;  // 0xD4(0x1)
	char pad_213[4];  // 0xD5(0x4)

}; 



// Class AIModule.CrowdManager
// Size: 0xF0(Inherited: 0x28) 
struct UCrowdManager : public UCrowdManagerBase
{
	struct ANavigationData* MyNavData;  // 0x28(0x8)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig;  // 0x30(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;  // 0x40(0x10)
	int32_t MaxAgents;  // 0x50(0x4)
	float MaxAgentRadius;  // 0x54(0x4)
	int32_t MaxAvoidedAgents;  // 0x58(0x4)
	int32_t MaxAvoidedWalls;  // 0x5C(0x4)
	float NavmeshCheckInterval;  // 0x60(0x4)
	float PathOptimizationInterval;  // 0x64(0x4)
	float SeparationDirClamp;  // 0x68(0x4)
	float PathOffsetRadiusMultiplier;  // 0x6C(0x4)
	char pad_112_1 : 4;  // 0x70(0x1)
	char bResolveCollisions : 1;  // 0x70(0x1)
	char pad_112_2 : 3;  // 0x70(0x1)
	char pad_113[128];  // 0x71(0x80)

}; 



// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x98(Inherited: 0x90) 
struct UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
	UObject* TestClass;  // 0x90(0x8)

}; 



// Class AIModule.BTDecorator_KeepInCone
// Size: 0xC8(Inherited: 0x68) 
struct UBTDecorator_KeepInCone : public UBTDecorator
{
	float ConeHalfAngle;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)
	struct FBlackboardKeySelector ConeOrigin;  // 0x70(0x28)
	struct FBlackboardKeySelector Observed;  // 0x98(0x28)
	char bUseSelfAsOrigin : 1;  // 0xC0(0x1)
	char bUseSelfAsObserved : 1;  // 0xC0(0x1)
	char pad_192_1 : 6;  // 0xC0(0x1)
	char pad_193[8];  // 0xC1(0x8)

}; 



// Class AIModule.BTDecorator_Loop
// Size: 0x78(Inherited: 0x68) 
struct UBTDecorator_Loop : public UBTDecorator
{
	int32_t NumLoops;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool bInfiniteLoop : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)
	float InfiniteLoopTimeoutTime;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x78(Inherited: 0x68) 
struct UBTDecorator_SetTagCooldown : public UBTDecorator
{
	struct FGameplayTag CooldownTag;  // 0x68(0x8)
	float CooldownDuration;  // 0x70(0x4)
	char pad_116_1 : 7;  // 0x74(0x1)
	bool bAddToExistingDuration : 1;  // 0x74(0x1)
	char pad_117[3];  // 0x75(0x3)

}; 



// Class AIModule.BTDecorator_TimeLimit
// Size: 0x70(Inherited: 0x68) 
struct UBTDecorator_TimeLimit : public UBTDecorator
{
	float TimeLimit;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class AIModule.BTFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UBTFunctionLibrary : public UBlueprintFunctionLibrary
{

	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue
}; 



// Class AIModule.BTService
// Size: 0x70(Inherited: 0x60) 
struct UBTService : public UBTAuxiliaryNode
{
	float Interval;  // 0x60(0x4)
	float RandomDeviation;  // 0x64(0x4)
	char bCallTickOnSearchStart : 1;  // 0x68(0x1)
	char bRestartTimerOnEachActivation : 1;  // 0x68(0x1)
	char pad_104_1 : 6;  // 0x68(0x1)
	char pad_105[8];  // 0x69(0x8)

}; 



// Class AIModule.BTService_BlackboardBase
// Size: 0x98(Inherited: 0x70) 
struct UBTService_BlackboardBase : public UBTService
{
	struct FBlackboardKeySelector BlackboardKey;  // 0x70(0x28)

}; 



// Class AIModule.BTService_BlueprintBase
// Size: 0x98(Inherited: 0x70) 
struct UBTService_BlueprintBase : public UBTService
{
	struct AAIController* AIOwner;  // 0x70(0x8)
	struct AActor* ActorOwner;  // 0x78(0x8)
	char pad_128[16];  // 0x80(0x10)
	char bShowPropertyDetails : 1;  // 0x90(0x1)
	char bShowEventDetails : 1;  // 0x90(0x1)
	char pad_144_1 : 6;  // 0x90(0x1)
	char pad_145[8];  // 0x91(0x8)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive
}; 



// Class AIModule.BTService_DefaultFocus
// Size: 0xA0(Inherited: 0x98) 
struct UBTService_DefaultFocus : public UBTService_BlackboardBase
{
	char FocusPriority;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)

}; 



// Class AIModule.BTService_RunEQS
// Size: 0xF0(Inherited: 0x98) 
struct UBTService_RunEQS : public UBTService_BlackboardBase
{
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;  // 0x98(0x48)
	char pad_224[16];  // 0xE0(0x10)

}; 



// Class AIModule.BTTaskNode
// Size: 0x70(Inherited: 0x58) 
struct UBTTaskNode : public UBTNode
{
	struct TArray<struct UBTService*> Services;  // 0x58(0x10)
	char bIgnoreRestartSelf : 1;  // 0x68(0x1)
	char pad_104_1 : 7;  // 0x68(0x1)
	char pad_105[8];  // 0x69(0x8)

}; 



// Class AIModule.BTTask_BlackboardBase
// Size: 0x98(Inherited: 0x70) 
struct UBTTask_BlackboardBase : public UBTTaskNode
{
	struct FBlackboardKeySelector BlackboardKey;  // 0x70(0x28)

}; 



// Class AIModule.BTTask_BlueprintBase
// Size: 0xA8(Inherited: 0x70) 
struct UBTTask_BlueprintBase : public UBTTaskNode
{
	struct AAIController* AIOwner;  // 0x70(0x8)
	struct AActor* ActorOwner;  // 0x78(0x8)
	struct FIntervalCountdown TickInterval;  // 0x80(0x8)
	char pad_136[24];  // 0x88(0x18)
	char bShowPropertyDetails : 1;  // 0xA0(0x1)
	char pad_160_1 : 7;  // 0xA0(0x1)
	char pad_161[8];  // 0xA1(0x8)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort
}; 



// Class AIModule.BTTask_FinishWithResult
// Size: 0x78(Inherited: 0x70) 
struct UBTTask_FinishWithResult : public UBTTaskNode
{
	char EBTNodeResult Result;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)

}; 



// Class AIModule.BTTask_GameplayTaskBase
// Size: 0x78(Inherited: 0x70) 
struct UBTTask_GameplayTaskBase : public UBTTaskNode
{
	char bWaitForGameplayTask : 1;  // 0x70(0x1)
	char pad_112_1 : 7;  // 0x70(0x1)
	char pad_113[8];  // 0x71(0x8)

}; 



// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x78(Inherited: 0x28) 
struct UEnvQueryInstanceBlueprintWrapper : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	int32_t QueryID;  // 0x30(0x4)
	char pad_52[36];  // 0x34(0x24)
	UEnvQueryItemType* ItemType;  // 0x58(0x8)
	int32_t OptionIndex;  // 0x60(0x4)
	char pad_100[4];  // 0x64(0x4)
	struct FMulticastInlineDelegate OnQueryFinishedEvent;  // 0x68(0x10)

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, char EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
}; 



// Class AIModule.BTTask_MakeNoise
// Size: 0x78(Inherited: 0x70) 
struct UBTTask_MakeNoise : public UBTTaskNode
{
	float Loudnes;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class AIModule.BTTask_MoveTo
// Size: 0xB0(Inherited: 0x98) 
struct UBTTask_MoveTo : public UBTTask_BlackboardBase
{
	float AcceptableRadius;  // 0x98(0x4)
	char pad_156[4];  // 0x9C(0x4)
	UNavigationQueryFilter* FilterClass;  // 0xA0(0x8)
	float ObservedBlackboardValueTolerance;  // 0xA8(0x4)
	char bObserveBlackboardValue : 1;  // 0xAC(0x1)
	char bAllowStrafe : 1;  // 0xAC(0x1)
	char bAllowPartialPath : 1;  // 0xAC(0x1)
	char bTrackMovingGoal : 1;  // 0xAC(0x1)
	char bProjectGoalLocation : 1;  // 0xAC(0x1)
	char bReachTestIncludesAgentRadius : 1;  // 0xAC(0x1)
	char bReachTestIncludesGoalRadius : 1;  // 0xAC(0x1)
	char bStopOnOverlap : 1;  // 0xAC(0x1)
	char bStopOnOverlapNeedsUpdate : 1;  // 0xAD(0x1)
	char pad_173_1 : 7;  // 0xAD(0x1)
	char pad_174[3];  // 0xAE(0x3)

}; 



// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xB8(Inherited: 0xB0) 
struct UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
	char bDisablePathUpdateOnGoalLocationChange : 1;  // 0xB0(0x1)
	char bProjectVectorGoalToNavigation : 1;  // 0xB0(0x1)
	char bUpdatedDeprecatedProperties : 1;  // 0xB0(0x1)
	char pad_176_1 : 5;  // 0xB0(0x1)
	char pad_177[8];  // 0xB1(0x8)

}; 



// Class AIModule.BTTask_PlaySound
// Size: 0x78(Inherited: 0x70) 
struct UBTTask_PlaySound : public UBTTaskNode
{
	struct USoundCue* SoundToPlay;  // 0x70(0x8)

}; 



// Class AIModule.BTTask_PawnActionBase
// Size: 0x70(Inherited: 0x70) 
struct UBTTask_PawnActionBase : public UBTTaskNode
{

}; 



// Class AIModule.BTTask_PlayAnimation
// Size: 0xB0(Inherited: 0x70) 
struct UBTTask_PlayAnimation : public UBTTaskNode
{
	struct UAnimationAsset* AnimationToPlay;  // 0x70(0x8)
	char bLooping : 1;  // 0x78(0x1)
	char bNonBlocking : 1;  // 0x78(0x1)
	char pad_120_1 : 6;  // 0x78(0x1)
	char pad_121[8];  // 0x79(0x8)
	struct UBehaviorTreeComponent* MyOwnerComp;  // 0x80(0x8)
	struct USkeletalMeshComponent* CachedSkelMesh;  // 0x88(0x8)
	char pad_144[32];  // 0x90(0x20)

}; 



// Class AIModule.BTTask_PushPawnAction
// Size: 0x78(Inherited: 0x70) 
struct UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
	struct UPawnAction* Action;  // 0x70(0x8)

}; 



// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xA0(Inherited: 0x98) 
struct UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
	float Precision;  // 0x98(0x4)
	char pad_156[4];  // 0x9C(0x4)

}; 



// Class AIModule.BTTask_RunBehavior
// Size: 0x78(Inherited: 0x70) 
struct UBTTask_RunBehavior : public UBTTaskNode
{
	struct UBehaviorTree* BehaviorAsset;  // 0x70(0x8)

}; 



// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x88(Inherited: 0x70) 
struct UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
	struct FGameplayTag InjectionTag;  // 0x70(0x8)
	struct UBehaviorTree* DefaultBehaviorAsset;  // 0x78(0x8)
	struct UBehaviorTree* BehaviorAsset;  // 0x80(0x8)

}; 



// Class AIModule.BTTask_RunEQSQuery
// Size: 0x150(Inherited: 0x98) 
struct UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
	struct UEnvQuery* QueryTemplate;  // 0x98(0x8)
	struct TArray<struct FEnvNamedValue> QueryParams;  // 0xA0(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig;  // 0xB0(0x10)
	char EEnvQueryRunMode RunMode;  // 0xC0(0x1)
	char pad_193[7];  // 0xC1(0x7)
	struct FBlackboardKeySelector EQSQueryBlackboardKey;  // 0xC8(0x28)
	char pad_240_1 : 7;  // 0xF0(0x1)
	bool bUseBBKey : 1;  // 0xF0(0x1)
	char pad_241[7];  // 0xF1(0x7)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;  // 0xF8(0x48)
	char pad_320[16];  // 0x140(0x10)

}; 



// Class AIModule.BTTask_SetTagCooldown
// Size: 0x80(Inherited: 0x70) 
struct UBTTask_SetTagCooldown : public UBTTaskNode
{
	struct FGameplayTag CooldownTag;  // 0x70(0x8)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bAddToExistingDuration : 1;  // 0x78(0x1)
	char pad_121[3];  // 0x79(0x3)
	float CooldownDuration;  // 0x7C(0x4)

}; 



// Class AIModule.BTTask_Wait
// Size: 0x78(Inherited: 0x70) 
struct UBTTask_Wait : public UBTTaskNode
{
	float WaitTime;  // 0x70(0x4)
	float RandomDeviation;  // 0x74(0x4)

}; 



// Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xA0(Inherited: 0x78) 
struct UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
	struct FBlackboardKeySelector BlackboardKey;  // 0x78(0x28)

}; 



// Class AIModule.CrowdAgentInterface
// Size: 0x28(Inherited: 0x28) 
struct UCrowdAgentInterface : public UInterface
{

}; 



// Class AIModule.PathFollowingComponent
// Size: 0x250(Inherited: 0xB0) 
struct UPathFollowingComponent : public UActorComponent
{
	char pad_176[56];  // 0xB0(0x38)
	struct UNavMovementComponent* MovementComp;  // 0xE8(0x8)
	char pad_240[8];  // 0xF0(0x8)
	struct ANavigationData* MyNavData;  // 0xF8(0x8)
	char pad_256[336];  // 0x100(0x150)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function AIModule.PathFollowingComponent.OnActorBump
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination
	char EPathFollowingAction GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType
}; 



// Class AIModule.CrowdFollowingComponent
// Size: 0x298(Inherited: 0x250) 
struct UCrowdFollowingComponent : public UPathFollowingComponent
{
	char pad_592[24];  // 0x250(0x18)
	struct FVector CrowdAgentMoveDirection;  // 0x268(0xC)
	char pad_628[36];  // 0x274(0x24)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
}; 



// Class AIModule.DetourCrowdAIController
// Size: 0x328(Inherited: 0x328) 
struct ADetourCrowdAIController : public AAIController
{

}; 



// Class AIModule.EnvQuery
// Size: 0x48(Inherited: 0x30) 
struct UEnvQuery : public UDataAsset
{
	struct FName QueryName;  // 0x30(0x8)
	struct TArray<struct UEnvQueryOption*> Options;  // 0x38(0x10)

}; 



// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30(Inherited: 0x28) 
struct UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
	char pad_40[8];  // 0x28(0x8)

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
}; 



// Class AIModule.EnvQueryContext_Item
// Size: 0x28(Inherited: 0x28) 
struct UEnvQueryContext_Item : public UEnvQueryContext
{

}; 



// Class AIModule.EnvQueryContext_Querier
// Size: 0x28(Inherited: 0x28) 
struct UEnvQueryContext_Querier : public UEnvQueryContext
{

}; 



// Class AIModule.EnvQueryDebugHelpers
// Size: 0x28(Inherited: 0x28) 
struct UEnvQueryDebugHelpers : public UObject
{

}; 



// Class AIModule.EnvQueryNode
// Size: 0x30(Inherited: 0x28) 
struct UEnvQueryNode : public UObject
{
	int32_t VerNum;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 



// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xD0(Inherited: 0x50) 
struct UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
	AActor* SearchedActorClass;  // 0x50(0x8)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius;  // 0x58(0x38)
	struct FAIDataProviderFloatValue SearchRadius;  // 0x90(0x38)
	UEnvQueryContext* SearchCenter;  // 0xC8(0x8)

}; 



// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x80(Inherited: 0x50) 
struct UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
	struct FText GeneratorsActionDescription;  // 0x50(0x18)
	UEnvQueryContext* Context;  // 0x68(0x8)
	UEnvQueryItemType* GeneratedItemType;  // 0x70(0x8)
	char pad_120[8];  // 0x78(0x8)

	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
}; 



// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70(Inherited: 0x50) 
struct UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
	struct TArray<struct UEnvQueryGenerator*> Generators;  // 0x50(0x10)
	char bAllowDifferentItemTypes : 1;  // 0x60(0x1)
	char bHasMatchingItemType : 1;  // 0x60(0x1)
	char pad_96_1 : 6;  // 0x60(0x1)
	char pad_97[8];  // 0x61(0x8)
	UEnvQueryItemType* ForcedItemType;  // 0x68(0x8)

}; 



// Class AIModule.EnvQueryGenerator_Cone
// Size: 0x170(Inherited: 0x80) 
struct UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue AlignedPointsDistance;  // 0x80(0x38)
	struct FAIDataProviderFloatValue ConeDegrees;  // 0xB8(0x38)
	struct FAIDataProviderFloatValue AngleStep;  // 0xF0(0x38)
	struct FAIDataProviderFloatValue Range;  // 0x128(0x38)
	UEnvQueryContext* CenterActor;  // 0x160(0x8)
	char bIncludeContextLocation : 1;  // 0x168(0x1)
	char pad_360_1 : 7;  // 0x168(0x1)
	char pad_361[8];  // 0x169(0x8)

}; 



// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x58(Inherited: 0x50) 
struct UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
	UEnvQueryContext* QueryContext;  // 0x50(0x8)

}; 



// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1D0(Inherited: 0x80) 
struct UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue InnerRadius;  // 0x80(0x38)
	struct FAIDataProviderFloatValue OuterRadius;  // 0xB8(0x38)
	struct FAIDataProviderIntValue NumberOfRings;  // 0xF0(0x38)
	struct FAIDataProviderIntValue PointsPerRing;  // 0x128(0x38)
	struct FEnvDirection ArcDirection;  // 0x160(0x20)
	struct FAIDataProviderFloatValue ArcAngle;  // 0x180(0x38)
	char pad_440_1 : 7;  // 0x1B8(0x1)
	bool bUseSpiralPattern : 1;  // 0x1B8(0x1)
	char pad_441[7];  // 0x1B9(0x7)
	UEnvQueryContext* Center;  // 0x1C0(0x8)
	char bDefineArc : 1;  // 0x1C8(0x1)
	char pad_456_1 : 7;  // 0x1C8(0x1)
	char pad_457[8];  // 0x1C9(0x8)

}; 



// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x210(Inherited: 0x80) 
struct UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue circleRadius;  // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween;  // 0xB8(0x38)
	struct FAIDataProviderIntValue NumberOfPoints;  // 0xF0(0x38)
	uint8_t  PointOnCircleSpacingMethod;  // 0x128(0x1)
	char pad_297[7];  // 0x129(0x7)
	struct FEnvDirection ArcDirection;  // 0x130(0x20)
	struct FAIDataProviderFloatValue ArcAngle;  // 0x150(0x38)
	float AngleRadians;  // 0x188(0x4)
	char pad_396[4];  // 0x18C(0x4)
	UEnvQueryContext* circleCenter;  // 0x190(0x8)
	char pad_408_1 : 7;  // 0x198(0x1)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle : 1;  // 0x198(0x1)
	char pad_409[7];  // 0x199(0x7)
	struct FAIDataProviderFloatValue CircleCenterZOffset;  // 0x1A0(0x38)
	struct FEnvTraceData TraceData;  // 0x1D8(0x30)
	char bDefineArc : 1;  // 0x208(0x1)
	char pad_520_1 : 7;  // 0x208(0x1)
	char pad_521[8];  // 0x209(0x8)

}; 



// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xF8(Inherited: 0x80) 
struct UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue GridSize;  // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween;  // 0xB8(0x38)
	UEnvQueryContext* GenerateAround;  // 0xF0(0x8)

}; 



// Class AIModule.EnvQueryItemType
// Size: 0x30(Inherited: 0x28) 
struct UEnvQueryItemType : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x30(Inherited: 0x30) 
struct UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{

}; 



// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x30(Inherited: 0x30) 
struct UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{

}; 



// Class AIModule.EnvQueryItemType_Actor
// Size: 0x30(Inherited: 0x30) 
struct UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{

}; 



// Class AIModule.EnvQueryItemType_Direction
// Size: 0x30(Inherited: 0x30) 
struct UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{

}; 



// Class AIModule.EnvQueryManager
// Size: 0x140(Inherited: 0x38) 
struct UEnvQueryManager : public UAISubsystem
{
	char pad_56[112];  // 0x38(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache;  // 0xA8(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts;  // 0xB8(0x10)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;  // 0xC8(0x10)
	char pad_216[84];  // 0xD8(0x54)
	float MaxAllowedTestingTime;  // 0x12C(0x4)
	char pad_304_1 : 7;  // 0x130(0x1)
	bool bTestQueriesUsingBreadth : 1;  // 0x130(0x1)
	char pad_305[3];  // 0x131(0x3)
	int32_t QueryCountWarningThreshold;  // 0x134(0x4)
	double QueryCountWarningInterval;  // 0x138(0x8)

	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, char EEnvQueryRunMode RunMode, UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery
}; 



// Class AIModule.EnvQueryOption
// Size: 0x40(Inherited: 0x28) 
struct UEnvQueryOption : public UObject
{
	struct UEnvQueryGenerator* Generator;  // 0x28(0x8)
	struct TArray<struct UEnvQueryTest*> Tests;  // 0x30(0x10)

}; 



// Class AIModule.EnvQueryTest
// Size: 0x1F8(Inherited: 0x30) 
struct UEnvQueryTest : public UEnvQueryNode
{
	int32_t TestOrder;  // 0x30(0x4)
	char EEnvTestPurpose TestPurpose;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	struct FString TestComment;  // 0x38(0x10)
	char EEnvTestFilterOperator MultipleContextFilterOp;  // 0x48(0x1)
	char EEnvTestScoreOperator MultipleContextScoreOp;  // 0x49(0x1)
	char EEnvTestFilterType FilterType;  // 0x4A(0x1)
	char pad_75[5];  // 0x4B(0x5)
	struct FAIDataProviderBoolValue BoolValue;  // 0x50(0x38)
	struct FAIDataProviderFloatValue FloatValueMin;  // 0x88(0x38)
	struct FAIDataProviderFloatValue FloatValueMax;  // 0xC0(0x38)
	char pad_248[1];  // 0xF8(0x1)
	char EEnvTestScoreEquation ScoringEquation;  // 0xF9(0x1)
	char EEnvQueryTestClamping ClampMinType;  // 0xFA(0x1)
	char EEnvQueryTestClamping ClampMaxType;  // 0xFB(0x1)
	uint8_t  NormalizationType;  // 0xFC(0x1)
	char pad_253[3];  // 0xFD(0x3)
	struct FAIDataProviderFloatValue ScoreClampMin;  // 0x100(0x38)
	struct FAIDataProviderFloatValue ScoreClampMax;  // 0x138(0x38)
	struct FAIDataProviderFloatValue ScoringFactor;  // 0x170(0x38)
	struct FAIDataProviderFloatValue ReferenceValue;  // 0x1A8(0x38)
	char pad_480_1 : 7;  // 0x1E0(0x1)
	bool bDefineReferenceValue : 1;  // 0x1E0(0x1)
	char pad_481[15];  // 0x1E1(0xF)
	char bWorkOnFloatValues : 1;  // 0x1F0(0x1)
	char pad_496_1 : 7;  // 0x1F0(0x1)
	char pad_497[8];  // 0x1F1(0x8)

}; 



// Class AIModule.EnvQueryTest_Distance
// Size: 0x208(Inherited: 0x1F8) 
struct UEnvQueryTest_Distance : public UEnvQueryTest
{
	char EEnvTestDistance TestMode;  // 0x1F8(0x1)
	char pad_505[7];  // 0x1F9(0x7)
	UEnvQueryContext* DistanceTo;  // 0x200(0x8)

}; 



// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x268(Inherited: 0x1F8) 
struct UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
	struct FGameplayTagQuery TagQueryToMatch;  // 0x1F8(0x48)
	char pad_576_1 : 7;  // 0x240(0x1)
	bool bUpdatedToUseQuery : 1;  // 0x240(0x1)
	uint8_t  TagsToMatch;  // 0x241(0x1)
	char pad_578[6];  // 0x242(0x6)
	struct FGameplayTagContainer GameplayTags;  // 0x248(0x20)

}; 



// Class AIModule.EnvQueryTest_Overlap
// Size: 0x218(Inherited: 0x1F8) 
struct UEnvQueryTest_Overlap : public UEnvQueryTest
{
	struct FEnvOverlapData OverlapData;  // 0x1F8(0x20)

}; 



// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x280(Inherited: 0x1F8) 
struct UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
	char EEnvTestPathfinding TestMode;  // 0x1F8(0x1)
	char pad_505[7];  // 0x1F9(0x7)
	UEnvQueryContext* Context;  // 0x200(0x8)
	struct FAIDataProviderBoolValue PathFromContext;  // 0x208(0x38)
	struct FAIDataProviderBoolValue SkipUnreachable;  // 0x240(0x38)
	UNavigationQueryFilter* FilterClass;  // 0x278(0x8)

}; 



// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x2B8(Inherited: 0x280) 
struct UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
	struct FAIDataProviderFloatValue ScanRangeMultiplier;  // 0x280(0x38)

}; 



// Class AIModule.EnvQueryTest_Project
// Size: 0x228(Inherited: 0x1F8) 
struct UEnvQueryTest_Project : public UEnvQueryTest
{
	struct FEnvTraceData ProjectionData;  // 0x1F8(0x30)

}; 



// Class AIModule.EnvQueryTest_Random
// Size: 0x1F8(Inherited: 0x1F8) 
struct UEnvQueryTest_Random : public UEnvQueryTest
{

}; 



// Class AIModule.EnvQueryTest_Trace
// Size: 0x2D8(Inherited: 0x1F8) 
struct UEnvQueryTest_Trace : public UEnvQueryTest
{
	struct FEnvTraceData TraceData;  // 0x1F8(0x30)
	struct FAIDataProviderBoolValue TraceFromContext;  // 0x228(0x38)
	struct FAIDataProviderFloatValue ItemHeightOffset;  // 0x260(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset;  // 0x298(0x38)
	UEnvQueryContext* Context;  // 0x2D0(0x8)

}; 



// Class AIModule.EnvQueryTypes
// Size: 0x28(Inherited: 0x28) 
struct UEnvQueryTypes : public UObject
{

}; 



// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28(Inherited: 0x28) 
struct UEQSQueryResultSourceInterface : public UInterface
{

}; 



// Class AIModule.EQSRenderingComponent
// Size: 0x490(Inherited: 0x450) 
struct UEQSRenderingComponent : public UPrimitiveComponent
{
	char pad_1104[64];  // 0x450(0x40)

}; 



// Class AIModule.EQSTestingPawn
// Size: 0x560(Inherited: 0x4D0) 
struct AEQSTestingPawn : public ACharacter
{
	struct UEnvQuery* QueryTemplate;  // 0x4D0(0x8)
	struct TArray<struct FEnvNamedValue> QueryParams;  // 0x4D8(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig;  // 0x4E8(0x10)
	float TimeLimitPerStep;  // 0x4F8(0x4)
	int32_t StepToDebugDraw;  // 0x4FC(0x4)
	uint8_t  HighlightMode;  // 0x500(0x1)
	char pad_1281[3];  // 0x501(0x3)
	char bDrawLabels : 1;  // 0x504(0x1)
	char bDrawFailedItems : 1;  // 0x504(0x1)
	char bReRunQueryOnlyOnFinishedMove : 1;  // 0x504(0x1)
	char bShouldBeVisibleInGame : 1;  // 0x504(0x1)
	char bTickDuringGame : 1;  // 0x504(0x1)
	char pad_1284_1 : 3;  // 0x504(0x1)
	char pad_1285[4];  // 0x505(0x4)
	char EEnvQueryRunMode QueryingMode;  // 0x508(0x1)
	char pad_1289[7];  // 0x509(0x7)
	struct FNavAgentProperties NavAgentProperties;  // 0x510(0x30)
	char pad_1344[32];  // 0x540(0x20)

}; 



// Class AIModule.GenericTeamAgentInterface
// Size: 0x28(Inherited: 0x28) 
struct UGenericTeamAgentInterface : public UInterface
{

}; 



// Class AIModule.GridPathAIController
// Size: 0x328(Inherited: 0x328) 
struct AGridPathAIController : public AAIController
{

}; 



// Class AIModule.GridPathFollowingComponent
// Size: 0x280(Inherited: 0x250) 
struct UGridPathFollowingComponent : public UPathFollowingComponent
{
	struct UNavLocalGridManager* GridManager;  // 0x250(0x8)
	char pad_600[40];  // 0x258(0x28)

}; 



// Class AIModule.NavFilter_AIControllerDefault
// Size: 0x48(Inherited: 0x48) 
struct UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{

}; 



// Class AIModule.NavLinkProxy
// Size: 0x270(Inherited: 0x220) 
struct ANavLinkProxy : public AActor
{
	char pad_544[16];  // 0x220(0x10)
	struct TArray<struct FNavigationLink> PointLinks;  // 0x230(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks;  // 0x240(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp;  // 0x250(0x8)
	char pad_600_1 : 7;  // 0x258(0x1)
	bool bSmartLinkIsRelevant : 1;  // 0x258(0x1)
	char pad_601[7];  // 0x259(0x7)
	struct FMulticastInlineDelegate OnSmartLinkReached;  // 0x260(0x10)

	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled
	void ResumePathFollowing(struct AActor* Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents
}; 



// Class AIModule.NavLocalGridManager
// Size: 0x58(Inherited: 0x28) 
struct UNavLocalGridManager : public UObject
{
	char pad_40[48];  // 0x28(0x30)

	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
}; 



// Class AIModule.PawnAction
// Size: 0x90(Inherited: 0x28) 
struct UPawnAction : public UObject
{
	struct UPawnAction* ChildAction;  // 0x28(0x8)
	struct UPawnAction* ParentAction;  // 0x30(0x8)
	struct UPawnActionsComponent* OwnerComponent;  // 0x38(0x8)
	struct UObject* Instigator;  // 0x40(0x8)
	struct UBrainComponent* BrainComp;  // 0x48(0x8)
	char pad_80[48];  // 0x50(0x30)
	char bAllowNewSameClassInstance : 1;  // 0x80(0x1)
	char bReplaceActiveSameClassInstance : 1;  // 0x80(0x1)
	char bShouldPauseMovement : 1;  // 0x80(0x1)
	char bAlwaysNotifyOnFinished : 1;  // 0x80(0x1)
	char pad_128_1 : 4;  // 0x80(0x1)
	char pad_129[16];  // 0x81(0x10)

	char EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority
	void Finish(char EPawnActionResult WithResult); // Function AIModule.PawnAction.Finish
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, UPawnAction* ActionClass); // Function AIModule.PawnAction.CreateActionInstance
}; 



// Class AIModule.PawnAction_BlueprintBase
// Size: 0x90(Inherited: 0x90) 
struct UPawnAction_BlueprintBase : public UPawnAction
{

	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause
	void ActionFinished(struct APawn* ControlledPawn, char EPawnActionResult WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished
}; 



// Class AIModule.PawnAction_Move
// Size: 0xE0(Inherited: 0x90) 
struct UPawnAction_Move : public UPawnAction
{
	struct AActor* GoalActor;  // 0x90(0x8)
	struct FVector GoalLocation;  // 0x98(0xC)
	float AcceptableRadius;  // 0xA4(0x4)
	UNavigationQueryFilter* FilterClass;  // 0xA8(0x8)
	char bAllowStrafe : 1;  // 0xB0(0x1)
	char bFinishOnOverlap : 1;  // 0xB0(0x1)
	char bUsePathfinding : 1;  // 0xB0(0x1)
	char bAllowPartialPath : 1;  // 0xB0(0x1)
	char bProjectGoalToNavigation : 1;  // 0xB0(0x1)
	char bUpdatePathToGoal : 1;  // 0xB0(0x1)
	char bAbortChildActionOnPathChange : 1;  // 0xB0(0x1)
	char pad_176_1 : 1;  // 0xB0(0x1)
	char pad_177[48];  // 0xB1(0x30)

}; 



// Class AIModule.PawnAction_Repeat
// Size: 0xB0(Inherited: 0x90) 
struct UPawnAction_Repeat : public UPawnAction
{
	struct UPawnAction* ActionToRepeat;  // 0x90(0x8)
	struct UPawnAction* RecentActionCopy;  // 0x98(0x8)
	char EPawnActionFailHandling ChildFailureHandlingMode;  // 0xA0(0x1)
	char pad_161[15];  // 0xA1(0xF)

}; 



// Class AIModule.PawnAction_Wait
// Size: 0xA0(Inherited: 0x90) 
struct UPawnAction_Wait : public UPawnAction
{
	float TimeToWait;  // 0x90(0x4)
	char pad_148[12];  // 0x94(0xC)

}; 



// Class AIModule.PawnActionsComponent
// Size: 0xE8(Inherited: 0xB0) 
struct UPawnActionsComponent : public UActorComponent
{
	struct APawn* ControlledPawn;  // 0xB0(0x8)
	struct TArray<struct FPawnActionStack> ActionStacks;  // 0xB8(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents;  // 0xC8(0x10)
	struct UPawnAction* CurrentAction;  // 0xD8(0x8)
	char pad_224[8];  // 0xE0(0x8)

	bool K2_PushAction(struct UPawnAction* newAction, char EAIRequestPriority Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, char EAIRequestPriority Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction
	char EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	char EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction
}; 



// Class AIModule.PawnSensingComponent
// Size: 0xF8(Inherited: 0xB0) 
struct UPawnSensingComponent : public UActorComponent
{
	float HearingThreshold;  // 0xB0(0x4)
	float LOSHearingThreshold;  // 0xB4(0x4)
	float SightRadius;  // 0xB8(0x4)
	float SensingInterval;  // 0xBC(0x4)
	float HearingMaxSoundAge;  // 0xC0(0x4)
	char bEnableSensingUpdates : 1;  // 0xC4(0x1)
	char bOnlySensePlayers : 1;  // 0xC4(0x1)
	char bSeePawns : 1;  // 0xC4(0x1)
	char bHearNoises : 1;  // 0xC4(0x1)
	char pad_196_1 : 4;  // 0xC4(0x1)
	char pad_197[12];  // 0xC5(0xC)
	struct FMulticastInlineDelegate OnSeePawn;  // 0xD0(0x10)
	struct FMulticastInlineDelegate OnHearNoise;  // 0xE0(0x10)
	float PeripheralVisionAngle;  // 0xF0(0x4)
	float PeripheralVisionCosine;  // 0xF4(0x4)

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
}; 



