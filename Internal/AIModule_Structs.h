#pragma once 
#include "SDK.h" 
 
 
// DelegateFunction AIModule.AIMoveCompletedSignature__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FAIMoveCompletedSignature__DelegateSignature
{
	struct FAIRequestID RequestID;  // 0x0(0x4)
	char EPathFollowingResult Result;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// ScriptStruct AIModule.AIRequestID
// Size: 0x4(Inherited: 0x0) 
struct FAIRequestID
{
	uint32_t RequestID;  // 0x0(0x4)

}; 
// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// Size: 0x4(Inherited: 0x0) 
struct FSetPeripheralVisionAngle
{
	float NewPeripheralVisionAngle;  // 0x0(0x4)

}; 
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// Size: 0x8(Inherited: 0x0) 
struct FGetItemScore
{
	int32_t ItemIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// ScriptStruct AIModule.BTDecoratorLogic
// Size: 0x4(Inherited: 0x0) 
struct FBTDecoratorLogic
{
	char EBTDecoratorLogic Operation;  // 0x0(0x1)
	char pad_1[1];  // 0x1(0x1)
	uint16_t Number;  // 0x2(0x2)

}; 
// ScriptStruct AIModule.AIPredictionEvent
// Size: 0x18(Inherited: 0x0) 
struct FAIPredictionEvent
{
	struct AActor* Requestor;  // 0x0(0x8)
	struct AActor* PredictedActor;  // 0x8(0x8)
	char pad_16[8];  // 0x10(0x8)

}; 
// ScriptStruct AIModule.AITouchEvent
// Size: 0x20(Inherited: 0x0) 
struct FAITouchEvent
{
	char pad_0[16];  // 0x0(0x10)
	struct AActor* TouchReceiver;  // 0x10(0x8)
	struct AActor* OtherActor;  // 0x18(0x8)

}; 
// DelegateFunction AIModule.OAISimpleDelegate__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FOAISimpleDelegate__DelegateSignature
{
	char EPathFollowingResult MovementResult;  // 0x0(0x1)

}; 
// Function AIModule.BlackboardComponent.SetValueAsObject
// Size: 0x10(Inherited: 0x0) 
struct FSetValueAsObject
{
	struct FName KeyName;  // 0x0(0x8)
	struct UObject* ObjectValue;  // 0x8(0x8)

}; 
// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FHearNoiseDelegate__DelegateSignature
{
	struct APawn* Instigator;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	float Volume;  // 0x14(0x4)

}; 
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
// Size: 0x18(Inherited: 0x0) 
struct FGetQueryResultsAsLocations
{
	struct TArray<struct FVector> ResultLocations;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct AIModule.EnvQueryInstanceCache
// Size: 0x178(Inherited: 0x0) 
struct FEnvQueryInstanceCache
{
	struct UEnvQuery* Template;  // 0x0(0x8)
	char pad_8[368];  // 0x8(0x170)

}; 
// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FEQSQueryDoneSignature__DelegateSignature
{
	struct UEnvQueryInstanceBlueprintWrapper* QueryInstance;  // 0x0(0x8)
	char EEnvQueryStatus QueryStatus;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
// Size: 0x18(Inherited: 0x0) 
struct FGetQueryResultsAsActors
{
	struct TArray<struct AActor*> ResultActors;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size: 0x48(Inherited: 0x0) 
struct FEQSParametrizedQueryExecutionRequest
{
	struct UEnvQuery* QueryTemplate;  // 0x0(0x8)
	struct TArray<struct FAIDynamicParam> QueryConfig;  // 0x8(0x10)
	struct FBlackboardKeySelector EQSQueryBlackboardKey;  // 0x18(0x28)
	char EEnvQueryRunMode RunMode;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	char bUseBBKeyForQueryTemplate : 1;  // 0x44(0x1)
	char pad_68_1 : 7;  // 0x44(0x1)
	char pad_69[4];  // 0x45(0x4)

}; 
// ScriptStruct AIModule.AINoiseEvent
// Size: 0x30(Inherited: 0x0) 
struct FAINoiseEvent
{
	char pad_0[4];  // 0x0(0x4)
	struct FVector NoiseLocation;  // 0x4(0xC)
	float Loudness;  // 0x10(0x4)
	float MaxRange;  // 0x14(0x4)
	struct AActor* Instigator;  // 0x18(0x8)
	struct FName Tag;  // 0x20(0x8)
	char pad_40[8];  // 0x28(0x8)

}; 
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// Size: 0x10(Inherited: 0x0) 
struct FGetResultsAsActors
{
	struct TArray<struct AActor*> ReturnValue;  // 0x0(0x10)

}; 
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// Size: 0x10(Inherited: 0x0) 
struct FGetResultsAsLocations
{
	struct TArray<struct FVector> ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x4(Inherited: 0x0) 
struct FAISenseAffiliationFilter
{
	char bDetectEnemies : 1;  // 0x0(0x1)
	char bDetectNeutrals : 1;  // 0x0(0x1)
	char bDetectFriendlies : 1;  // 0x0(0x1)
	char pad_0_1 : 5;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)

}; 
// DelegateFunction AIModule.MoveTaskCompletedSignature__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FMoveTaskCompletedSignature__DelegateSignature
{
	char EPathFollowingResult Result;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct AAIController* AIController;  // 0x8(0x8)

}; 
// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// Size: 0xC(Inherited: 0x0) 
struct FSetNamedParam
{
	struct FName ParamName;  // 0x0(0x8)
	float Value;  // 0x8(0x4)

}; 
// Function AIModule.BrainComponent.IsPaused
// Size: 0x1(Inherited: 0x0) 
struct FIsPaused
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct AIModule.IntervalCountdown
// Size: 0x8(Inherited: 0x0) 
struct FIntervalCountdown
{
	float Interval;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)

}; 
// DelegateFunction AIModule.SmartLinkReachedSignature__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FSmartLinkReachedSignature__DelegateSignature
{
	struct AActor* MovingActor;  // 0x0(0x8)
	struct FVector DestinationPoint;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// DelegateFunction AIModule.PerceptionUpdatedDelegate__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FPerceptionUpdatedDelegate__DelegateSignature
{
	struct TArray<struct AActor*> UpdatedActors;  // 0x0(0x10)

}; 
// ScriptStruct AIModule.ActorPerceptionUpdateInfo
// Size: 0x48(Inherited: 0x0) 
struct FActorPerceptionUpdateInfo
{
	int32_t TargetId;  // 0x0(0x4)
	struct TWeakObjectPtr<AActor> Target;  // 0x4(0x8)
	struct FAIStimulus Stimulus;  // 0xC(0x3C)

}; 
// Function AIModule.BlackboardComponent.SetValueAsBool
// Size: 0xC(Inherited: 0x0) 
struct FSetValueAsBool
{
	struct FName KeyName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool BoolValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// DelegateFunction AIModule.ActorPerceptionUpdatedDelegate__DelegateSignature
// Size: 0x48(Inherited: 0x0) 
struct FActorPerceptionUpdatedDelegate__DelegateSignature
{
	struct AActor* Actor;  // 0x0(0x8)
	struct FAIStimulus Stimulus;  // 0x8(0x3C)
	char pad_68[4];  // 0x44(0x4)

}; 
// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x0) 
struct FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)

}; 
// ScriptStruct AIModule.AIStimulus
// Size: 0x3C(Inherited: 0x0) 
struct FAIStimulus
{
	float Age;  // 0x0(0x4)
	float ExpirationAge;  // 0x4(0x4)
	float Strength;  // 0x8(0x4)
	struct FVector StimulusLocation;  // 0xC(0xC)
	struct FVector ReceiverLocation;  // 0x18(0xC)
	struct FName Tag;  // 0x24(0x8)
	char pad_44[12];  // 0x2C(0xC)
	char pad_56_1 : 1;  // 0x38(0x1)
	char bSuccessfullySensed : 1;  // 0x38(0x1)
	char pad_56_2 : 6;  // 0x38(0x1)
	char pad_57[4];  // 0x39(0x4)

}; 
// Function AIModule.PawnActionsComponent.K2_PerformAction
// Size: 0x18(Inherited: 0x0) 
struct FK2_PerformAction
{
	struct APawn* Pawn;  // 0x0(0x8)
	struct UPawnAction* Action;  // 0x8(0x8)
	char EAIRequestPriority Priority;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool ReturnValue : 1;  // 0x11(0x1)
	char pad_18[6];  // 0x12(0x6)

}; 
// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// Size: 0x10(Inherited: 0x0) 
struct FReceiveActivationAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)

}; 
// DelegateFunction AIModule.ActorPerceptionInfoUpdatedDelegate__DelegateSignature
// Size: 0x48(Inherited: 0x0) 
struct FActorPerceptionInfoUpdatedDelegate__DelegateSignature
{
	struct FActorPerceptionUpdateInfo UpdateInfo;  // 0x0(0x48)

}; 
// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// Size: 0x4(Inherited: 0x0) 
struct FGetPeripheralVisionAngle
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// Size: 0x4(Inherited: 0x0) 
struct FGetPeripheralVisionCosine
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AIModule.AIController.GetFocalPointOnActor
// Size: 0x18(Inherited: 0x0) 
struct FGetFocalPointOnActor
{
	struct AActor* Actor;  // 0x0(0x8)
	struct FVector ReturnValue;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// ScriptStruct AIModule.BTCompositeChild
// Size: 0x30(Inherited: 0x0) 
struct FBTCompositeChild
{
	struct UBTCompositeNode* ChildComposite;  // 0x0(0x8)
	struct UBTTaskNode* ChildTask;  // 0x8(0x8)
	struct TArray<struct UBTDecorator*> Decorators;  // 0x10(0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps;  // 0x20(0x10)

}; 
// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FSeePawnDelegate__DelegateSignature
{
	struct APawn* Pawn;  // 0x0(0x8)

}; 
// Function AIModule.BlackboardComponent.IsVectorValueSet
// Size: 0xC(Inherited: 0x0) 
struct FIsVectorValueSet
{
	struct FName KeyName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function AIModule.PawnSensingComponent.SetSensingInterval
// Size: 0x4(Inherited: 0x0) 
struct FSetSensingInterval
{
	float NewSensingInterval;  // 0x0(0x4)

}; 
// ScriptStruct AIModule.AIMoveRequest
// Size: 0x40(Inherited: 0x0) 
struct FAIMoveRequest
{
	struct AActor* GoalActor;  // 0x0(0x8)
	char pad_8[56];  // 0x8(0x38)

}; 
// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetSensingUpdatesEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)

}; 
// Function AIModule.BlackboardComponent.GetRotationFromEntry
// Size: 0x18(Inherited: 0x0) 
struct FGetRotationFromEntry
{
	struct FName KeyName;  // 0x0(0x8)
	struct FRotator ResultRotation;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// Size: 0x20(Inherited: 0x0) 
struct FRegisterPerceptionStimuliSource
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	UAISense* Sense;  // 0x8(0x8)
	struct AActor* Target;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct AIModule.AIDataProviderValue
// Size: 0x20(Inherited: 0x0) 
struct FAIDataProviderValue
{
	char pad_0[16];  // 0x0(0x10)
	struct UAIDataProvider* DataBinding;  // 0x10(0x8)
	struct FName DataField;  // 0x18(0x8)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// Size: 0x40(Inherited: 0x0) 
struct FSetBlackboardValueAsRotator
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct FRotator Value;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x38(Inherited: 0x30) 
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
	float DefaultValue;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x30(Inherited: 0x20) 
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
	UObject* PropertyType;  // 0x20(0x8)
	char pad_40[8];  // 0x28(0x8)

}; 
// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x38(Inherited: 0x30) 
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool DefaultValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// Size: 0x4(Inherited: 0x0) 
struct FOnGameplayTaskResourcesClaimed
{
	struct FGameplayResourceSet NewlyClaimed;  // 0x0(0x2)
	struct FGameplayResourceSet FreshlyReleased;  // 0x2(0x2)

}; 
// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x38(Inherited: 0x30) 
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
	int32_t DefaultValue;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// Size: 0x30(Inherited: 0x0) 
struct FAddLocalNavigationGridForCapsule
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	float CapsuleRadius;  // 0x14(0x4)
	float CapsuleHalfHeight;  // 0x18(0x4)
	int32_t Radius2D;  // 0x1C(0x4)
	float Height;  // 0x20(0x4)
	char pad_36_1 : 7;  // 0x24(0x1)
	bool bRebuildGrids : 1;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	int32_t ReturnValue;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 
// ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x30(Inherited: 0x20) 
struct FAIDataProviderStructValue : public FAIDataProviderValue
{
	char pad_32[16];  // 0x20(0x10)

}; 
// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20(Inherited: 0x0) 
struct FActorPerceptionBlueprintInfo
{
	struct AActor* Target;  // 0x0(0x8)
	struct TArray<struct FAIStimulus> LastSensedStimuli;  // 0x8(0x10)
	char bIsHostile : 1;  // 0x18(0x1)
	char pad_24_1 : 7;  // 0x18(0x1)
	char pad_25[8];  // 0x19(0x8)

}; 
// ScriptStruct AIModule.AIDamageEvent
// Size: 0x38(Inherited: 0x0) 
struct FAIDamageEvent
{
	float Amount;  // 0x0(0x4)
	struct FVector Location;  // 0x4(0xC)
	struct FVector HitLocation;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)
	struct AActor* DamagedActor;  // 0x20(0x8)
	struct AActor* Instigator;  // 0x28(0x8)
	struct FName Tag;  // 0x30(0x8)

}; 
// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// Size: 0x38(Inherited: 0x0) 
struct FFindLocalNavigationGridPath
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Start;  // 0x8(0xC)
	struct FVector End;  // 0x14(0xC)
	struct TArray<struct FVector> PathPoints;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
// Size: 0x18(Inherited: 0x0) 
struct FGetCurrentPathPoints
{
	struct AController* Controller;  // 0x0(0x8)
	struct TArray<struct FVector> ReturnValue;  // 0x8(0x10)

}; 
// ScriptStruct AIModule.AISightEvent
// Size: 0x18(Inherited: 0x0) 
struct FAISightEvent
{
	char pad_0[8];  // 0x0(0x8)
	struct AActor* SeenActor;  // 0x8(0x8)
	struct AActor* Observer;  // 0x10(0x8)

}; 
// Function AIModule.PawnAction.Finish
// Size: 0x1(Inherited: 0x0) 
struct FFinish
{
	char EPawnActionResult WithResult;  // 0x0(0x1)

}; 
// ScriptStruct AIModule.AITeamStimulusEvent
// Size: 0x38(Inherited: 0x0) 
struct FAITeamStimulusEvent
{
	char pad_0[40];  // 0x0(0x28)
	struct AActor* Broadcaster;  // 0x28(0x8)
	struct AActor* Enemy;  // 0x30(0x8)

}; 
// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// Size: 0xC(Inherited: 0x0) 
struct FSetFinishOnMessageWithId
{
	struct FName MessageName;  // 0x0(0x8)
	int32_t RequestID;  // 0x8(0x4)

}; 
// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size: 0x18(Inherited: 0x0) 
struct FBehaviorTreeTemplateInfo
{
	struct UBehaviorTree* Asset;  // 0x0(0x8)
	struct UBTCompositeNode* Template;  // 0x8(0x8)
	char pad_16[8];  // 0x10(0x8)

}; 
// ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28(Inherited: 0x0) 
struct FBlackboardKeySelector
{
	struct TArray<struct UBlackboardKeyType*> AllowedTypes;  // 0x0(0x10)
	struct FName SelectedKeyName;  // 0x10(0x8)
	UBlackboardKeyType* SelectedKeyType;  // 0x18(0x8)
	char SelectedKeyID;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	char bNoneIsAllowedValue : 1;  // 0x24(0x1)
	char pad_36_1 : 7;  // 0x24(0x1)
	char pad_37[4];  // 0x25(0x4)

}; 
// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// Size: 0x10(Inherited: 0x0) 
struct FReceiveSearchStartAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)

}; 
// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18(Inherited: 0x0) 
struct FBlackboardEntry
{
	struct FName EntryName;  // 0x0(0x8)
	struct UBlackboardKeyType* KeyType;  // 0x8(0x8)
	char bInstanceSynced : 1;  // 0x10(0x1)
	char pad_16_1 : 7;  // 0x10(0x1)
	char pad_17[8];  // 0x11(0x8)

}; 
// ScriptStruct AIModule.EnvQueryRequest
// Size: 0x68(Inherited: 0x0) 
struct FEnvQueryRequest
{
	struct UEnvQuery* QueryTemplate;  // 0x0(0x8)
	struct UObject* Owner;  // 0x8(0x8)
	struct UWorld* World;  // 0x10(0x8)
	char pad_24[80];  // 0x18(0x50)

}; 
// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20(Inherited: 0x0) 
struct FCrowdAvoidanceSamplingPattern
{
	struct TArray<float> Angles;  // 0x0(0x10)
	struct TArray<float> Radii;  // 0x10(0x10)

}; 
// ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1C(Inherited: 0x0) 
struct FCrowdAvoidanceConfig
{
	float VelocityBias;  // 0x0(0x4)
	float DesiredVelocityWeight;  // 0x4(0x4)
	float CurrentVelocityWeight;  // 0x8(0x4)
	float SideBiasWeight;  // 0xC(0x4)
	float ImpactTimeWeight;  // 0x10(0x4)
	float ImpactTimeRange;  // 0x14(0x4)
	char CustomPatternIdx;  // 0x18(0x1)
	char AdaptiveDivisions;  // 0x19(0x1)
	char AdaptiveRings;  // 0x1A(0x1)
	char AdaptiveDepth;  // 0x1B(0x1)

}; 
// ScriptStruct AIModule.AIDynamicParam
// Size: 0x38(Inherited: 0x0) 
struct FAIDynamicParam
{
	struct FName ParamName;  // 0x0(0x8)
	uint8_t  ParamType;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float Value;  // 0xC(0x4)
	struct FBlackboardKeySelector BBKey;  // 0x10(0x28)

}; 
// Function AIModule.BrainComponent.StopLogic
// Size: 0x10(Inherited: 0x0) 
struct FStopLogic
{
	struct FString reason;  // 0x0(0x10)

}; 
// ScriptStruct AIModule.EnvQueryResult
// Size: 0x40(Inherited: 0x0) 
struct FEnvQueryResult
{
	char pad_0[16];  // 0x0(0x10)
	UEnvQueryItemType* ItemType;  // 0x10(0x8)
	char pad_24[20];  // 0x18(0x14)
	int32_t OptionIndex;  // 0x2C(0x4)
	int32_t QueryID;  // 0x30(0x4)
	char pad_52[12];  // 0x34(0xC)

}; 
// ScriptStruct AIModule.EnvOverlapData
// Size: 0x20(Inherited: 0x0) 
struct FEnvOverlapData
{
	float ExtentX;  // 0x0(0x4)
	float ExtentY;  // 0x4(0x4)
	float ExtentZ;  // 0x8(0x4)
	struct FVector ShapeOffset;  // 0xC(0xC)
	char ECollisionChannel OverlapChannel;  // 0x18(0x1)
	char EEnvOverlapShape OverlapShape;  // 0x19(0x1)
	char pad_26[2];  // 0x1A(0x2)
	char bOnlyBlockingHits : 1;  // 0x1C(0x1)
	char bOverlapComplex : 1;  // 0x1C(0x1)
	char bSkipOverlapQuerier : 1;  // 0x1C(0x1)
	char pad_28_1 : 5;  // 0x1C(0x1)
	char pad_29[4];  // 0x1D(0x4)

}; 
// Function AIModule.AIController.OnUsingBlackBoard
// Size: 0x10(Inherited: 0x0) 
struct FOnUsingBlackBoard
{
	struct UBlackboardComponent* BlackboardComp;  // 0x0(0x8)
	struct UBlackboardData* BlackboardAsset;  // 0x8(0x8)

}; 
// ScriptStruct AIModule.EnvTraceData
// Size: 0x30(Inherited: 0x0) 
struct FEnvTraceData
{
	int32_t VersionNum;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	UNavigationQueryFilter* NavigationFilter;  // 0x8(0x8)
	float ProjectDown;  // 0x10(0x4)
	float ProjectUp;  // 0x14(0x4)
	float ExtentX;  // 0x18(0x4)
	float ExtentY;  // 0x1C(0x4)
	float ExtentZ;  // 0x20(0x4)
	float PostProjectionVerticalOffset;  // 0x24(0x4)
	char ETraceTypeQuery TraceChannel;  // 0x28(0x1)
	char ECollisionChannel SerializedChannel;  // 0x29(0x1)
	char EEnvTraceShape TraceShape;  // 0x2A(0x1)
	char EEnvQueryTrace TraceMode;  // 0x2B(0x1)
	char bTraceComplex : 1;  // 0x2C(0x1)
	char bOnlyBlockingHits : 1;  // 0x2C(0x1)
	char bCanTraceOnNavMesh : 1;  // 0x2C(0x1)
	char bCanTraceOnGeometry : 1;  // 0x2C(0x1)
	char bCanDisableTrace : 1;  // 0x2C(0x1)
	char bCanProjectDown : 1;  // 0x2C(0x1)
	char pad_44_1 : 2;  // 0x2C(0x1)
	char pad_45[4];  // 0x2D(0x4)

}; 
// ScriptStruct AIModule.EnvDirection
// Size: 0x20(Inherited: 0x0) 
struct FEnvDirection
{
	UEnvQueryContext* LineFrom;  // 0x0(0x8)
	UEnvQueryContext* LineTo;  // 0x8(0x8)
	UEnvQueryContext* Rotation;  // 0x10(0x8)
	char EEnvDirection DirMode;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// ScriptStruct AIModule.EnvNamedValue
// Size: 0x10(Inherited: 0x0) 
struct FEnvNamedValue
{
	struct FName ParamName;  // 0x0(0x8)
	uint8_t  ParamType;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	float Value;  // 0xC(0x4)

}; 
// ScriptStruct AIModule.GenericTeamId
// Size: 0x1(Inherited: 0x0) 
struct FGenericTeamId
{
	char TeamID;  // 0x0(0x1)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// Size: 0x38(Inherited: 0x0) 
struct FSetBlackboardValueAsBool
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool Value : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// ScriptStruct AIModule.PawnActionEvent
// Size: 0x18(Inherited: 0x0) 
struct FPawnActionEvent
{
	struct UPawnAction* Action;  // 0x0(0x8)
	char pad_8[16];  // 0x8(0x10)

}; 
// ScriptStruct AIModule.PawnActionStack
// Size: 0x8(Inherited: 0x0) 
struct FPawnActionStack
{
	struct UPawnAction* TopAction;  // 0x0(0x8)

}; 
// ScriptStruct AIModule.RecastGraphWrapper
// Size: 0x98(Inherited: 0x0) 
struct FRecastGraphWrapper
{
	struct ARecastNavMesh* RecastNavMeshActor;  // 0x0(0x8)
	char pad_8[144];  // 0x8(0x90)

}; 
// Function AIModule.AIController.ClaimTaskResource
// Size: 0x8(Inherited: 0x0) 
struct FClaimTaskResource
{
	UGameplayTaskResource* ResourceClass;  // 0x0(0x8)

}; 
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// Size: 0x20(Inherited: 0x0) 
struct FProvideSingleLocation
{
	struct UObject* QuerierObject;  // 0x0(0x8)
	struct AActor* QuerierActor;  // 0x8(0x8)
	struct FVector ResultingLocation;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function AIModule.AIController.UseBlackboard
// Size: 0x18(Inherited: 0x0) 
struct FUseBlackboard
{
	struct UBlackboardData* BlackboardAsset;  // 0x0(0x8)
	struct UBlackboardComponent* BlackboardComponent;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AIModule.AIController.GetAIPerceptionComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetAIPerceptionComponent
{
	struct UAIPerceptionComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function AIModule.AIController.GetFocalPoint
// Size: 0xC(Inherited: 0x0) 
struct FGetFocalPoint
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function AIModule.AIController.GetFocusActor
// Size: 0x8(Inherited: 0x0) 
struct FGetFocusActor
{
	struct AActor* ReturnValue;  // 0x0(0x8)

}; 
// Function AIModule.AIController.GetImmediateMoveDestination
// Size: 0xC(Inherited: 0x0) 
struct FGetImmediateMoveDestination
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function AIModule.AIController.GetMoveStatus
// Size: 0x1(Inherited: 0x0) 
struct FGetMoveStatus
{
	char EPathFollowingStatus ReturnValue;  // 0x0(0x1)

}; 
// Function AIModule.AIController.GetPathFollowingComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetPathFollowingComponent
{
	struct UPathFollowingComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function AIModule.AIController.HasPartialPath
// Size: 0x1(Inherited: 0x0) 
struct FHasPartialPath
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.AIController.K2_SetFocalPoint
// Size: 0xC(Inherited: 0x0) 
struct FK2_SetFocalPoint
{
	struct FVector FP;  // 0x0(0xC)

}; 
// Function AIModule.AIController.K2_SetFocus
// Size: 0x8(Inherited: 0x0) 
struct FK2_SetFocus
{
	struct AActor* NewFocus;  // 0x0(0x8)

}; 
// Function AIModule.PathFollowingComponent.GetPathActionType
// Size: 0x1(Inherited: 0x0) 
struct FGetPathActionType
{
	char EPathFollowingAction ReturnValue;  // 0x0(0x1)

}; 
// Function AIModule.AIController.MoveToActor
// Size: 0x20(Inherited: 0x0) 
struct FMoveToActor
{
	struct AActor* Goal;  // 0x0(0x8)
	float AcceptanceRadius;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bStopOnOverlap : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool bUsePathfinding : 1;  // 0xD(0x1)
	char pad_14_1 : 7;  // 0xE(0x1)
	bool bCanStrafe : 1;  // 0xE(0x1)
	char pad_15[1];  // 0xF(0x1)
	UNavigationQueryFilter* FilterClass;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bAllowPartialPath : 1;  // 0x18(0x1)
	char EPathFollowingRequestResult ReturnValue;  // 0x19(0x1)
	char pad_26[6];  // 0x1A(0x6)

}; 
// Function AIModule.AIController.MoveToLocation
// Size: 0x28(Inherited: 0x0) 
struct FMoveToLocation
{
	struct FVector Dest;  // 0x0(0xC)
	float AcceptanceRadius;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bStopOnOverlap : 1;  // 0x10(0x1)
	char pad_17_1 : 7;  // 0x11(0x1)
	bool bUsePathfinding : 1;  // 0x11(0x1)
	char pad_18_1 : 7;  // 0x12(0x1)
	bool bProjectDestinationToNavigation : 1;  // 0x12(0x1)
	char pad_19_1 : 7;  // 0x13(0x1)
	bool bCanStrafe : 1;  // 0x13(0x1)
	char pad_20[4];  // 0x14(0x4)
	UNavigationQueryFilter* FilterClass;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bAllowPartialPath : 1;  // 0x20(0x1)
	char EPathFollowingRequestResult ReturnValue;  // 0x21(0x1)
	char pad_34[6];  // 0x22(0x6)

}; 
// Function AIModule.AIController.RunBehaviorTree
// Size: 0x10(Inherited: 0x0) 
struct FRunBehaviorTree
{
	struct UBehaviorTree* BTAsset;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.AIController.SetMoveBlockDetection
// Size: 0x1(Inherited: 0x0) 
struct FSetMoveBlockDetection
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnable : 1;  // 0x0(0x1)

}; 
// Function AIModule.AIController.SetPathFollowingComponent
// Size: 0x8(Inherited: 0x0) 
struct FSetPathFollowingComponent
{
	struct UPathFollowingComponent* NewPFComponent;  // 0x0(0x8)

}; 
// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// Size: 0x18(Inherited: 0x0) 
struct FRequestPawnPredictionEvent
{
	struct APawn* Requestor;  // 0x0(0x8)
	struct AActor* PredictedActor;  // 0x8(0x8)
	float PredictionTime;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AIModule.AIController.UnclaimTaskResource
// Size: 0x8(Inherited: 0x0) 
struct FUnclaimTaskResource
{
	UGameplayTaskResource* ResourceClass;  // 0x0(0x8)

}; 
// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// Size: 0x8(Inherited: 0x0) 
struct FOnMoveCompleted
{
	struct FAIRequestID RequestID;  // 0x0(0x4)
	char EPathFollowingResult MovementResult;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// Size: 0x50(Inherited: 0x0) 
struct FGetSenseClassForStimulus
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FAIStimulus Stimulus;  // 0x8(0x3C)
	char pad_68[4];  // 0x44(0x4)
	UAISense* ReturnValue;  // 0x48(0x8)

}; 
// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// Size: 0x38(Inherited: 0x0) 
struct FCreateMoveToProxyObject
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct APawn* Pawn;  // 0x8(0x8)
	struct FVector Destination;  // 0x10(0xC)
	char pad_28[4];  // 0x1C(0x4)
	struct AActor* targetActor;  // 0x20(0x8)
	float AcceptanceRadius;  // 0x28(0x4)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool bStopOnOverlap : 1;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	struct UAIAsyncTaskBlueprintProxy* ReturnValue;  // 0x30(0x8)

}; 
// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// Size: 0x10(Inherited: 0x0) 
struct FGetAIController
{
	struct AActor* ControlledActor;  // 0x0(0x8)
	struct AAIController* ReturnValue;  // 0x8(0x8)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// Size: 0x40(Inherited: 0x0) 
struct FGetBlackboardValueAsString
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct FString ReturnValue;  // 0x30(0x10)

}; 
// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// Size: 0x10(Inherited: 0x0) 
struct FGetBlackboard
{
	struct AActor* Target;  // 0x0(0x8)
	struct UBlackboardComponent* ReturnValue;  // 0x8(0x8)

}; 
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// Size: 0x10(Inherited: 0x0) 
struct FGetCurrentPath
{
	struct AController* Controller;  // 0x0(0x8)
	struct UNavigationPath* ReturnValue;  // 0x8(0x8)

}; 
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
// Size: 0x10(Inherited: 0x0) 
struct FGetCurrentPathIndex
{
	struct AController* Controller;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
// Size: 0x10(Inherited: 0x0) 
struct FGetNextNavLinkIndex
{
	struct AController* Controller;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AIModule.NavLinkProxy.ResumePathFollowing
// Size: 0x8(Inherited: 0x0) 
struct FResumePathFollowing
{
	struct AActor* Agent;  // 0x0(0x8)

}; 
// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// Size: 0x8(Inherited: 0x0) 
struct FK2_OnNewPawn
{
	struct APawn* NewPawn;  // 0x0(0x8)

}; 
// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// Size: 0x10(Inherited: 0x0) 
struct FIsValidAIDirection
{
	struct FVector DirectionVector;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// Size: 0x10(Inherited: 0x0) 
struct FIsValidAILocation
{
	struct FVector Location;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// Size: 0x10(Inherited: 0x0) 
struct FIsValidAIRotation
{
	struct FRotator Rotation;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// Size: 0x10(Inherited: 0x0) 
struct FLockAIResourcesWithAnimation
{
	struct UAnimInstance* AnimInstance;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bLockMovement : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool LockAILogic : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// Size: 0x20(Inherited: 0x0) 
struct FSendAIMessage
{
	struct APawn* Target;  // 0x0(0x8)
	struct FName Message;  // 0x8(0x8)
	struct UObject* MessageSource;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bSuccess : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// Size: 0x40(Inherited: 0x0) 
struct FGetBlackboardValueAsVector
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct FVector ReturnValue;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
// Size: 0x10(Inherited: 0x0) 
struct FSimpleMoveToActor
{
	struct AController* Controller;  // 0x0(0x8)
	struct AActor* Goal;  // 0x8(0x8)

}; 
// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
// Size: 0x18(Inherited: 0x0) 
struct FSimpleMoveToLocation
{
	struct AController* Controller;  // 0x0(0x8)
	struct FVector Goal;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// Size: 0x48(Inherited: 0x0) 
struct FSpawnAIFromClass
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	APawn* PawnClass;  // 0x8(0x8)
	struct UBehaviorTree* BehaviorTree;  // 0x10(0x8)
	struct FVector Location;  // 0x18(0xC)
	struct FRotator Rotation;  // 0x24(0xC)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bNoCollisionFail : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct AActor* Owner;  // 0x38(0x8)
	struct APawn* ReturnValue;  // 0x40(0x8)

}; 
// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// Size: 0x10(Inherited: 0x0) 
struct FUnlockAIResourcesWithAnimation
{
	struct UAnimInstance* AnimInstance;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bUnlockMovement : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool UnlockAILogic : 1;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function AIModule.AIPerceptionComponent.GetActorsPerception
// Size: 0x30(Inherited: 0x0) 
struct FGetActorsPerception
{
	struct AActor* Actor;  // 0x0(0x8)
	struct FActorPerceptionBlueprintInfo Info;  // 0x8(0x20)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool ReturnValue : 1;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// Size: 0x18(Inherited: 0x0) 
struct FGetCurrentlyPerceivedActors
{
	UAISense* SenseToUse;  // 0x0(0x8)
	struct TArray<struct AActor*> OutActors;  // 0x8(0x10)

}; 
// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// Size: 0x18(Inherited: 0x0) 
struct FRequestControllerPredictionEvent
{
	struct AAIController* Requestor;  // 0x0(0x8)
	struct AActor* PredictedActor;  // 0x8(0x8)
	float PredictionTime;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// Size: 0x18(Inherited: 0x0) 
struct FGetKnownPerceivedActors
{
	UAISense* SenseToUse;  // 0x0(0x8)
	struct TArray<struct AActor*> OutActors;  // 0x8(0x10)

}; 
// Function AIModule.AIPerceptionComponent.GetPerceivedActors
// Size: 0x18(Inherited: 0x0) 
struct FGetPerceivedActors
{
	UAISense* SenseToUse;  // 0x0(0x8)
	struct TArray<struct AActor*> OutActors;  // 0x8(0x10)

}; 
// Function AIModule.PawnAction_BlueprintBase.ActionResume
// Size: 0x8(Inherited: 0x0) 
struct FActionResume
{
	struct APawn* ControlledPawn;  // 0x0(0x8)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// Size: 0x38(Inherited: 0x0) 
struct FSetBlackboardValueAsName
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct FName Value;  // 0x30(0x8)

}; 
// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// Size: 0x10(Inherited: 0x0) 
struct FGetPerceivedHostileActors
{
	struct TArray<struct AActor*> OutActors;  // 0x0(0x10)

}; 
// Function AIModule.BlackboardComponent.SetValueAsEnum
// Size: 0xC(Inherited: 0x0) 
struct FSetValueAsEnum
{
	struct FName KeyName;  // 0x0(0x8)
	char EnumValue;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
// Size: 0x18(Inherited: 0x0) 
struct FGetPerceivedHostileActorsBySense
{
	UAISense* SenseToUse;  // 0x0(0x8)
	struct TArray<struct AActor*> OutActors;  // 0x8(0x10)

}; 
// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// Size: 0x8(Inherited: 0x0) 
struct FGetQuerier
{
	struct UObject* ReturnValue;  // 0x0(0x8)

}; 
// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// Size: 0x10(Inherited: 0x0) 
struct FOnOwnerEndPlay
{
	struct AActor* Actor;  // 0x0(0x8)
	char EEndPlayReason EndPlayReason;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// Size: 0x1(Inherited: 0x0) 
struct FIsTaskExecuting
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.AIPerceptionComponent.SetSenseEnabled
// Size: 0x10(Inherited: 0x0) 
struct FSetSenseEnabled
{
	UAISense* SenseClass;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bEnable : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// Size: 0x8(Inherited: 0x0) 
struct FRegisterForSense
{
	UAISense* SenseClass;  // 0x0(0x8)

}; 
// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// Size: 0x8(Inherited: 0x0) 
struct FUnregisterFromSense
{
	UAISense* SenseClass;  // 0x0(0x8)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// Size: 0x38(Inherited: 0x0) 
struct FSetBlackboardValueAsEnum
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	char Value;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// Size: 0x10(Inherited: 0x0) 
struct FOnPerceptionStimuliSourceEndPlay
{
	struct AActor* Actor;  // 0x0(0x8)
	char EEndPlayReason EndPlayReason;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.AIPerceptionSystem.ReportEvent
// Size: 0x8(Inherited: 0x0) 
struct FReportEvent
{
	struct UAISenseEvent* PerceptionEvent;  // 0x0(0x8)

}; 
// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// Size: 0x10(Inherited: 0x0) 
struct FReportPerceptionEvent
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAISenseEvent* PerceptionEvent;  // 0x8(0x8)

}; 
// Function AIModule.AISense_Blueprint.GetAllListenerActors
// Size: 0x10(Inherited: 0x0) 
struct FGetAllListenerActors
{
	struct TArray<struct AActor*> ListenerActors;  // 0x0(0x10)

}; 
// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// Size: 0x10(Inherited: 0x0) 
struct FGetAllListenerComponents
{
	struct TArray<struct UAIPerceptionComponent*> ListenerComponents;  // 0x0(0x10)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// Size: 0x38(Inherited: 0x0) 
struct FGetBlackboardValueAsName
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct FName ReturnValue;  // 0x30(0x8)

}; 
// Function AIModule.AISense_Blueprint.OnListenerRegistered
// Size: 0x10(Inherited: 0x0) 
struct FOnListenerRegistered
{
	struct AActor* ActorListener;  // 0x0(0x8)
	struct UAIPerceptionComponent* PerceptionComponent;  // 0x8(0x8)

}; 
// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// Size: 0x10(Inherited: 0x0) 
struct FOnListenerUnregistered
{
	struct AActor* ActorListener;  // 0x0(0x8)
	struct UAIPerceptionComponent* PerceptionComponent;  // 0x8(0x8)

}; 
// Function AIModule.AISense_Blueprint.OnListenerUpdated
// Size: 0x10(Inherited: 0x0) 
struct FOnListenerUpdated
{
	struct AActor* ActorListener;  // 0x0(0x8)
	struct UAIPerceptionComponent* PerceptionComponent;  // 0x8(0x8)

}; 
// Function AIModule.AISense_Blueprint.OnUpdate
// Size: 0x18(Inherited: 0x0) 
struct FOnUpdate
{
	struct TArray<struct UAISenseEvent*> EventsToProcess;  // 0x0(0x10)
	float ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AIModule.AISense_Damage.ReportDamageEvent
// Size: 0x40(Inherited: 0x0) 
struct FReportDamageEvent
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct AActor* DamagedActor;  // 0x8(0x8)
	struct AActor* Instigator;  // 0x10(0x8)
	float damageAmount;  // 0x18(0x4)
	struct FVector EventLocation;  // 0x1C(0xC)
	struct FVector HitLocation;  // 0x28(0xC)
	struct FName Tag;  // 0x34(0x8)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function AIModule.AISense_Hearing.ReportNoiseEvent
// Size: 0x30(Inherited: 0x0) 
struct FReportNoiseEvent
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector NoiseLocation;  // 0x8(0xC)
	float Loudness;  // 0x14(0x4)
	struct AActor* Instigator;  // 0x18(0x8)
	float MaxRange;  // 0x20(0x4)
	struct FName Tag;  // 0x24(0x8)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function AIModule.AITask_MoveTo.AIMoveTo
// Size: 0x38(Inherited: 0x0) 
struct FAIMoveTo
{
	struct AAIController* Controller;  // 0x0(0x8)
	struct FVector GoalLocation;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)
	struct AActor* GoalActor;  // 0x18(0x8)
	float AcceptanceRadius;  // 0x20(0x4)
	char EAIOptionFlag StopOnOverlap;  // 0x24(0x1)
	char EAIOptionFlag AcceptPartialPath;  // 0x25(0x1)
	char pad_38_1 : 7;  // 0x26(0x1)
	bool bUsePathfinding : 1;  // 0x26(0x1)
	char pad_39_1 : 7;  // 0x27(0x1)
	bool bLockAILogic : 1;  // 0x27(0x1)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bUseContinuosGoalTracking : 1;  // 0x28(0x1)
	char EAIOptionFlag ProjectGoalOnNavigation;  // 0x29(0x1)
	char pad_42[6];  // 0x2A(0x6)
	struct UAITask_MoveTo* ReturnValue;  // 0x30(0x8)

}; 
// Function AIModule.AITask_RunEQS.RunEQS
// Size: 0x18(Inherited: 0x0) 
struct FRunEQS
{
	struct AAIController* Controller;  // 0x0(0x8)
	struct UEnvQuery* QueryTemplate;  // 0x8(0x8)
	struct UAITask_RunEQS* ReturnValue;  // 0x10(0x8)

}; 
// Function AIModule.BrainComponent.IsRunning
// Size: 0x1(Inherited: 0x0) 
struct FIsRunning
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// Size: 0x10(Inherited: 0x0) 
struct FAddCooldownTagDuration
{
	struct FGameplayTag CooldownTag;  // 0x0(0x8)
	float CooldownDuration;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bAddToExistingDuration : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// Size: 0xC(Inherited: 0x0) 
struct FGetTagCooldownEndTime
{
	struct FGameplayTag CooldownTag;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// Size: 0x10(Inherited: 0x0) 
struct FSetDynamicSubtree
{
	struct FGameplayTag InjectTag;  // 0x0(0x8)
	struct UBehaviorTree* BehaviorAsset;  // 0x8(0x8)

}; 
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// Size: 0x10(Inherited: 0x0) 
struct FReceiveExecutionStartAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)

}; 
// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
// Size: 0x8(Inherited: 0x0) 
struct FGetBlackboardAsset
{
	struct UBlackboardData* ReturnValue;  // 0x0(0x8)

}; 
// Function AIModule.BlackboardComponent.ClearValue
// Size: 0x8(Inherited: 0x0) 
struct FClearValue
{
	struct FName KeyName;  // 0x0(0x8)

}; 
// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// Size: 0x10(Inherited: 0x0) 
struct FK2_ForceAbortAction
{
	struct UPawnAction* ActionToAbort;  // 0x0(0x8)
	char EPawnActionAbortState ReturnValue;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.BlackboardComponent.GetLocationFromEntry
// Size: 0x18(Inherited: 0x0) 
struct FGetLocationFromEntry
{
	struct FName KeyName;  // 0x0(0x8)
	struct FVector ResultLocation;  // 0x8(0xC)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool ReturnValue : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// Size: 0x40(Inherited: 0x0) 
struct FSetBlackboardValueAsVector
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct FVector Value;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function AIModule.BlackboardComponent.GetValueAsBool
// Size: 0xC(Inherited: 0x0) 
struct FGetValueAsBool
{
	struct FName KeyName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function AIModule.BlackboardComponent.GetValueAsClass
// Size: 0x10(Inherited: 0x0) 
struct FGetValueAsClass
{
	struct FName KeyName;  // 0x0(0x8)
	UObject* ReturnValue;  // 0x8(0x8)

}; 
// Function AIModule.BlackboardComponent.GetValueAsEnum
// Size: 0xC(Inherited: 0x0) 
struct FGetValueAsEnum
{
	struct FName KeyName;  // 0x0(0x8)
	char ReturnValue;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function AIModule.BlackboardComponent.GetValueAsFloat
// Size: 0xC(Inherited: 0x0) 
struct FGetValueAsFloat
{
	struct FName KeyName;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function AIModule.BlackboardComponent.GetValueAsInt
// Size: 0xC(Inherited: 0x0) 
struct FGetValueAsInt
{
	struct FName KeyName;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// Function AIModule.BlackboardComponent.GetValueAsName
// Size: 0x10(Inherited: 0x0) 
struct FGetValueAsName
{
	struct FName KeyName;  // 0x0(0x8)
	struct FName ReturnValue;  // 0x8(0x8)

}; 
// Function AIModule.BlackboardComponent.GetValueAsObject
// Size: 0x10(Inherited: 0x0) 
struct FGetValueAsObject
{
	struct FName KeyName;  // 0x0(0x8)
	struct UObject* ReturnValue;  // 0x8(0x8)

}; 
// Function AIModule.BlackboardComponent.SetValueAsString
// Size: 0x18(Inherited: 0x0) 
struct FSetValueAsString
{
	struct FName KeyName;  // 0x0(0x8)
	struct FString StringValue;  // 0x8(0x10)

}; 
// Function AIModule.BlackboardComponent.GetValueAsRotator
// Size: 0x14(Inherited: 0x0) 
struct FGetValueAsRotator
{
	struct FName KeyName;  // 0x0(0x8)
	struct FRotator ReturnValue;  // 0x8(0xC)

}; 
// Function AIModule.BlackboardComponent.GetValueAsString
// Size: 0x18(Inherited: 0x0) 
struct FGetValueAsString
{
	struct FName KeyName;  // 0x0(0x8)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function AIModule.BlackboardComponent.GetValueAsVector
// Size: 0x14(Inherited: 0x0) 
struct FGetValueAsVector
{
	struct FName KeyName;  // 0x0(0x8)
	struct FVector ReturnValue;  // 0x8(0xC)

}; 
// Function AIModule.BlackboardComponent.SetValueAsClass
// Size: 0x10(Inherited: 0x0) 
struct FSetValueAsClass
{
	struct FName KeyName;  // 0x0(0x8)
	UObject* ClassValue;  // 0x8(0x8)

}; 
// Function AIModule.BlackboardComponent.SetValueAsFloat
// Size: 0xC(Inherited: 0x0) 
struct FSetValueAsFloat
{
	struct FName KeyName;  // 0x0(0x8)
	float FloatValue;  // 0x8(0x4)

}; 
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// Size: 0x18(Inherited: 0x0) 
struct FReceiveExecutionFinishAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)
	char EBTNodeResult NodeResult;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AIModule.BlackboardComponent.SetValueAsInt
// Size: 0xC(Inherited: 0x0) 
struct FSetValueAsInt
{
	struct FName KeyName;  // 0x0(0x8)
	int32_t IntValue;  // 0x8(0x4)

}; 
// Function AIModule.BlackboardComponent.SetValueAsName
// Size: 0x10(Inherited: 0x0) 
struct FSetValueAsName
{
	struct FName KeyName;  // 0x0(0x8)
	struct FName NameValue;  // 0x8(0x8)

}; 
// Function AIModule.BlackboardComponent.SetValueAsRotator
// Size: 0x14(Inherited: 0x0) 
struct FSetValueAsRotator
{
	struct FName KeyName;  // 0x0(0x8)
	struct FRotator VectorValue;  // 0x8(0xC)

}; 
// Function AIModule.BlackboardComponent.SetValueAsVector
// Size: 0x14(Inherited: 0x0) 
struct FSetValueAsVector
{
	struct FName KeyName;  // 0x0(0x8)
	struct FVector VectorValue;  // 0x8(0xC)

}; 
// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// Size: 0x1(Inherited: 0x0) 
struct FIsDecoratorExecutionActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// Size: 0x1(Inherited: 0x0) 
struct FIsDecoratorObserverActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// Size: 0x10(Inherited: 0x0) 
struct FPerformConditionCheck
{
	struct AActor* OwnerActor;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// Size: 0x18(Inherited: 0x0) 
struct FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// Size: 0x10(Inherited: 0x0) 
struct FReceiveExecutionFinish
{
	struct AActor* OwnerActor;  // 0x0(0x8)
	char EBTNodeResult NodeResult;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// Size: 0x8(Inherited: 0x0) 
struct FReceiveExecutionStart
{
	struct AActor* OwnerActor;  // 0x0(0x8)

}; 
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// Size: 0x8(Inherited: 0x0) 
struct FReceiveObserverActivated
{
	struct AActor* OwnerActor;  // 0x0(0x8)

}; 
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// Size: 0x10(Inherited: 0x0) 
struct FReceiveObserverActivatedAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)

}; 
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// Size: 0x8(Inherited: 0x0) 
struct FReceiveObserverDeactivated
{
	struct AActor* OwnerActor;  // 0x0(0x8)

}; 
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// Size: 0x10(Inherited: 0x0) 
struct FReceiveObserverDeactivatedAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)

}; 
// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// Size: 0x10(Inherited: 0x0) 
struct FReceiveTick
{
	struct AActor* OwnerActor;  // 0x0(0x8)
	float DeltaSeconds;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AIModule.BTTask_BlueprintBase.FinishExecute
// Size: 0x1(Inherited: 0x0) 
struct FFinishExecute
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bSuccess : 1;  // 0x0(0x1)

}; 
// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// Size: 0x18(Inherited: 0x0) 
struct FReceiveTickAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)
	float DeltaSeconds;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// Size: 0x30(Inherited: 0x0) 
struct FClearBlackboardValue
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)

}; 
// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// Size: 0x30(Inherited: 0x0) 
struct FClearBlackboardValueAsVector
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// Size: 0x38(Inherited: 0x0) 
struct FGetBlackboardValueAsActor
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct AActor* ReturnValue;  // 0x30(0x8)

}; 
// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// Size: 0x1(Inherited: 0x0) 
struct FSuspendCrowdSteering
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bSuspend : 1;  // 0x0(0x1)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// Size: 0x38(Inherited: 0x0) 
struct FGetBlackboardValueAsBool
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool ReturnValue : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// Size: 0x38(Inherited: 0x0) 
struct FGetBlackboardValueAsClass
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	UObject* ReturnValue;  // 0x30(0x8)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// Size: 0x38(Inherited: 0x0) 
struct FGetBlackboardValueAsEnum
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	char ReturnValue;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// Size: 0x38(Inherited: 0x0) 
struct FGetBlackboardValueAsFloat
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	float ReturnValue;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// Size: 0x38(Inherited: 0x0) 
struct FGetBlackboardValueAsInt
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	int32_t ReturnValue;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// Size: 0x38(Inherited: 0x0) 
struct FGetBlackboardValueAsObject
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct UObject* ReturnValue;  // 0x30(0x8)

}; 
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// Size: 0x40(Inherited: 0x0) 
struct FGetBlackboardValueAsRotator
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct FRotator ReturnValue;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// Size: 0x10(Inherited: 0x0) 
struct FGetOwnerComponent
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct UBehaviorTreeComponent* ReturnValue;  // 0x8(0x8)

}; 
// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// Size: 0x10(Inherited: 0x0) 
struct FGetOwnersBlackboard
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct UBlackboardComponent* ReturnValue;  // 0x8(0x8)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// Size: 0x38(Inherited: 0x0) 
struct FSetBlackboardValueAsClass
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	UObject* Value;  // 0x30(0x8)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// Size: 0x38(Inherited: 0x0) 
struct FSetBlackboardValueAsFloat
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	float Value;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// Size: 0x38(Inherited: 0x0) 
struct FSetBlackboardValueAsInt
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	int32_t Value;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// Size: 0x38(Inherited: 0x0) 
struct FSetBlackboardValueAsObject
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct UObject* Value;  // 0x30(0x8)

}; 
// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// Size: 0xC(Inherited: 0x0) 
struct FAddGeneratedVector
{
	struct FVector GeneratedVector;  // 0x0(0xC)

}; 
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// Size: 0x40(Inherited: 0x0) 
struct FSetBlackboardValueAsString
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct FBlackboardKeySelector Key;  // 0x8(0x28)
	struct FString Value;  // 0x30(0x10)

}; 
// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// Size: 0x10(Inherited: 0x0) 
struct FStartUsingExternalEvent
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)
	struct AActor* OwningActor;  // 0x8(0x8)

}; 
// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// Size: 0x8(Inherited: 0x0) 
struct FStopUsingExternalEvent
{
	struct UBTNode* NodeOwner;  // 0x0(0x8)

}; 
// Function AIModule.BTService_BlueprintBase.IsServiceActive
// Size: 0x1(Inherited: 0x0) 
struct FIsServiceActive
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// Size: 0x8(Inherited: 0x0) 
struct FReceiveActivation
{
	struct AActor* OwnerActor;  // 0x0(0x8)

}; 
// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// Size: 0x8(Inherited: 0x0) 
struct FReceiveDeactivation
{
	struct AActor* OwnerActor;  // 0x0(0x8)

}; 
// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// Size: 0x10(Inherited: 0x0) 
struct FReceiveDeactivationAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)

}; 
// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// Size: 0x8(Inherited: 0x0) 
struct FReceiveSearchStart
{
	struct AActor* OwnerActor;  // 0x0(0x8)

}; 
// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// Size: 0x1(Inherited: 0x0) 
struct FIsTaskAborting
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// Size: 0x8(Inherited: 0x0) 
struct FReceiveAbort
{
	struct AActor* OwnerActor;  // 0x0(0x8)

}; 
// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// Size: 0x10(Inherited: 0x0) 
struct FReceiveAbortAI
{
	struct AAIController* OwnerController;  // 0x0(0x8)
	struct APawn* ControlledPawn;  // 0x8(0x8)

}; 
// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// Size: 0x8(Inherited: 0x0) 
struct FReceiveExecute
{
	struct AActor* OwnerActor;  // 0x0(0x8)

}; 
// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// Size: 0x8(Inherited: 0x0) 
struct FSetFinishOnMessage
{
	struct FName MessageName;  // 0x0(0x8)

}; 
// Function AIModule.PathFollowingComponent.GetPathDestination
// Size: 0xC(Inherited: 0x0) 
struct FGetPathDestination
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function AIModule.PathFollowingComponent.OnActorBump
// Size: 0xA8(Inherited: 0x0) 
struct FOnActorBump
{
	struct AActor* SelfActor;  // 0x0(0x8)
	struct AActor* OtherActor;  // 0x8(0x8)
	struct FVector NormalImpulse;  // 0x10(0xC)
	struct FHitResult Hit;  // 0x1C(0x88)
	char pad_164[4];  // 0xA4(0x4)

}; 
// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// Size: 0x10(Inherited: 0x0) 
struct FDoItemGeneration
{
	struct TArray<struct FVector> ContextLocations;  // 0x0(0x10)

}; 
// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// Size: 0x8(Inherited: 0x0) 
struct FOnNavDataRegistered
{
	struct ANavigationData* NavData;  // 0x0(0x8)

}; 
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// Size: 0x20(Inherited: 0x0) 
struct FProvideActorsSet
{
	struct UObject* QuerierObject;  // 0x0(0x8)
	struct AActor* QuerierActor;  // 0x8(0x8)
	struct TArray<struct AActor*> ResultingActorsSet;  // 0x10(0x10)

}; 
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// Size: 0x20(Inherited: 0x0) 
struct FProvideLocationsSet
{
	struct UObject* QuerierObject;  // 0x0(0x8)
	struct AActor* QuerierActor;  // 0x8(0x8)
	struct TArray<struct FVector> ResultingLocationSet;  // 0x10(0x10)

}; 
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// Size: 0x18(Inherited: 0x0) 
struct FProvideSingleActor
{
	struct UObject* QuerierObject;  // 0x0(0x8)
	struct AActor* QuerierActor;  // 0x8(0x8)
	struct AActor* ResultingActor;  // 0x10(0x8)

}; 
// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// Size: 0x8(Inherited: 0x0) 
struct FAddGeneratedActor
{
	struct AActor* GeneratedActor;  // 0x0(0x8)

}; 
// Function AIModule.EnvQueryManager.RunEQSQuery
// Size: 0x30(Inherited: 0x0) 
struct FRunEQSQuery
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UEnvQuery* QueryTemplate;  // 0x8(0x8)
	struct UObject* Querier;  // 0x10(0x8)
	char EEnvQueryRunMode RunMode;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)
	UEnvQueryInstanceBlueprintWrapper* WrapperClass;  // 0x20(0x8)
	struct UEnvQueryInstanceBlueprintWrapper* ReturnValue;  // 0x28(0x8)

}; 
// Function AIModule.NavLinkProxy.HasMovingAgents
// Size: 0x1(Inherited: 0x0) 
struct FHasMovingAgents
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsSmartLinkEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
// Size: 0x18(Inherited: 0x0) 
struct FReceiveSmartLinkReached
{
	struct AActor* Agent;  // 0x0(0x8)
	struct FVector Destination;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetSmartLinkEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)

}; 
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// Size: 0x40(Inherited: 0x0) 
struct FAddLocalNavigationGridForBox
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FVector Extent;  // 0x14(0xC)
	struct FRotator Rotation;  // 0x20(0xC)
	int32_t Radius2D;  // 0x2C(0x4)
	float Height;  // 0x30(0x4)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bRebuildGrids : 1;  // 0x34(0x1)
	char pad_53[3];  // 0x35(0x3)
	int32_t ReturnValue;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// Size: 0x28(Inherited: 0x0) 
struct FAddLocalNavigationGridForPoint
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	int32_t Radius2D;  // 0x14(0x4)
	float Height;  // 0x18(0x4)
	char pad_28_1 : 7;  // 0x1C(0x1)
	bool bRebuildGrids : 1;  // 0x1C(0x1)
	char pad_29[3];  // 0x1D(0x3)
	int32_t ReturnValue;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// Size: 0x28(Inherited: 0x0) 
struct FAddLocalNavigationGridForPoints
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct TArray<struct FVector> Locations;  // 0x8(0x10)
	int32_t Radius2D;  // 0x18(0x4)
	float Height;  // 0x1C(0x4)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bRebuildGrids : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	int32_t ReturnValue;  // 0x24(0x4)

}; 
// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// Size: 0x10(Inherited: 0x0) 
struct FRemoveLocalNavigationGrid
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	int32_t GridId;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bRebuildGrids : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// Size: 0x10(Inherited: 0x0) 
struct FSetLocalNavigationGridDensity
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float CellSize;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function AIModule.PawnAction.CreateActionInstance
// Size: 0x18(Inherited: 0x0) 
struct FCreateActionInstance
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	UPawnAction* ActionClass;  // 0x8(0x8)
	struct UPawnAction* ReturnValue;  // 0x10(0x8)

}; 
// Function AIModule.PawnAction.GetActionPriority
// Size: 0x1(Inherited: 0x0) 
struct FGetActionPriority
{
	char EAIRequestPriority ReturnValue;  // 0x0(0x1)

}; 
// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// Size: 0x10(Inherited: 0x0) 
struct FActionFinished
{
	struct APawn* ControlledPawn;  // 0x0(0x8)
	char EPawnActionResult WithResult;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.PawnAction_BlueprintBase.ActionPause
// Size: 0x8(Inherited: 0x0) 
struct FActionPause
{
	struct APawn* ControlledPawn;  // 0x0(0x8)

}; 
// Function AIModule.PawnAction_BlueprintBase.ActionStart
// Size: 0x8(Inherited: 0x0) 
struct FActionStart
{
	struct APawn* ControlledPawn;  // 0x0(0x8)

}; 
// Function AIModule.PawnAction_BlueprintBase.ActionTick
// Size: 0x10(Inherited: 0x0) 
struct FActionTick
{
	struct APawn* ControlledPawn;  // 0x0(0x8)
	float DeltaSeconds;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AIModule.PawnActionsComponent.K2_AbortAction
// Size: 0x10(Inherited: 0x0) 
struct FK2_AbortAction
{
	struct UPawnAction* ActionToAbort;  // 0x0(0x8)
	char EPawnActionAbortState ReturnValue;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AIModule.PawnActionsComponent.K2_PushAction
// Size: 0x20(Inherited: 0x0) 
struct FK2_PushAction
{
	struct UPawnAction* newAction;  // 0x0(0x8)
	char EAIRequestPriority Priority;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct UObject* Instigator;  // 0x10(0x8)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
