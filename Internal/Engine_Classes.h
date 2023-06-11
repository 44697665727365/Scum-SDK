#pragma once 
#include <Engine_Structs.h>
 
 
 
// Class Engine.LightmassPortalComponent
// Size: 0x200(Inherited: 0x200) 
struct ULightmassPortalComponent : public USceneComponent
{
	struct UBoxComponent* PreviewBox;  // 0x1F8(0x8)

}; 



// Class Engine.Player
// Size: 0x48(Inherited: 0x28) 
struct UPlayer : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct APlayerController* PlayerController;  // 0x30(0x8)
	int32_t CurrentNetSpeed;  // 0x38(0x4)
	int32_t ConfiguredInternetSpeed;  // 0x3C(0x4)
	int32_t ConfiguredLanSpeed;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 



// Class Engine.Actor
// Size: 0x220(Inherited: 0x28) 
struct AActor : public UObject
{
	struct FActorTickFunction PrimaryActorTick;  // 0x28(0x30)
	char bNetTemporary : 1;  // 0x58(0x1)
	char bNetStartup : 1;  // 0x58(0x1)
	char bOnlyRelevantToOwner : 1;  // 0x58(0x1)
	char bAlwaysRelevant : 1;  // 0x58(0x1)
	char bReplicateMovement : 1;  // 0x58(0x1)
	char bHidden : 1;  // 0x58(0x1)
	char bTearOff : 1;  // 0x58(0x1)
	char bForceNetAddressable : 1;  // 0x58(0x1)
	char bExchangedRoles : 1;  // 0x59(0x1)
	char bNetLoadOnClient : 1;  // 0x59(0x1)
	char bNetUseOwnerRelevancy : 1;  // 0x59(0x1)
	char bRelevantForNetworkReplays : 1;  // 0x59(0x1)
	char bRelevantForLevelBounds : 1;  // 0x59(0x1)
	char bReplayRewindable : 1;  // 0x59(0x1)
	char bAllowTickBeforeBeginPlay : 1;  // 0x59(0x1)
	char bAutoDestroyWhenFinished : 1;  // 0x59(0x1)
	char bCanBeDamaged : 1;  // 0x5A(0x1)
	char bBlockInput : 1;  // 0x5A(0x1)
	char bCollideWhenPlacing : 1;  // 0x5A(0x1)
	char bFindCameraComponentWhenViewTarget : 1;  // 0x5A(0x1)
	char bGenerateOverlapEventsDuringLevelStreaming : 1;  // 0x5A(0x1)
	char bIgnoresOriginShifting : 1;  // 0x5A(0x1)
	char bEnableAutoLODGeneration : 1;  // 0x5A(0x1)
	char bIsEditorOnlyActor : 1;  // 0x5A(0x1)
	char bActorSeamlessTraveled : 1;  // 0x5B(0x1)
	char bReplicates : 1;  // 0x5B(0x1)
	char bCanBeInCluster : 1;  // 0x5B(0x1)
	char bAllowReceiveTickEventOnDedicatedServer : 1;  // 0x5B(0x1)
	char pad_91_1 : 4;  // 0x5B(0x1)
	char pad_92_1 : 3;  // 0x5C(0x1)
	char bActorEnableCollision : 1;  // 0x5C(0x1)
	char bActorIsBeingDestroyed : 1;  // 0x5C(0x1)
	char pad_92_2 : 3;  // 0x5C(0x1)
	uint8_t  UpdateOverlapsMethodDuringLevelStreaming;  // 0x5D(0x1)
	uint8_t  DefaultUpdateOverlapsMethodDuringLevelStreaming;  // 0x5E(0x1)
	char ENetRole RemoteRole;  // 0x5F(0x1)
	struct FRepMovement ReplicatedMovement;  // 0x60(0x34)
	float InitialLifeSpan;  // 0x94(0x4)
	float CustomTimeDilation;  // 0x98(0x4)
	char pad_156[4];  // 0x9C(0x4)
	struct FRepAttachment AttachmentReplication;  // 0xA0(0x40)
	struct AActor* Owner;  // 0xE0(0x8)
	struct FName NetDriverName;  // 0xE8(0x8)
	char ENetRole Role;  // 0xF0(0x1)
	char ENetDormancy NetDormancy;  // 0xF1(0x1)
	uint8_t  SpawnCollisionHandlingMethod;  // 0xF2(0x1)
	char EAutoReceiveInput AutoReceiveInput;  // 0xF3(0x1)
	int32_t InputPriority;  // 0xF4(0x4)
	struct UInputComponent* InputComponent;  // 0xF8(0x8)
	float NetCullDistanceSquared;  // 0x100(0x4)
	int32_t NetTag;  // 0x104(0x4)
	float NetUpdateFrequency;  // 0x108(0x4)
	float MinNetUpdateFrequency;  // 0x10C(0x4)
	float NetPriority;  // 0x110(0x4)
	char pad_276[4];  // 0x114(0x4)
	struct APawn* Instigator;  // 0x118(0x8)
	struct TArray<struct AActor*> Children;  // 0x120(0x10)
	struct USceneComponent* RootComponent;  // 0x130(0x8)
	struct TArray<struct AMatineeActor*> ControllingMatineeActors;  // 0x138(0x10)
	char pad_328[8];  // 0x148(0x8)
	struct TArray<struct FName> Layers;  // 0x150(0x10)
	struct TWeakObjectPtr<UChildActorComponent> ParentComponent;  // 0x160(0x8)
	char pad_360[8];  // 0x168(0x8)
	struct TArray<struct FName> Tags;  // 0x170(0x10)
	struct FMulticastSparseDelegate OnTakeAnyDamage;  // 0x180(0x1)
	struct FMulticastSparseDelegate OnTakePointDamage;  // 0x181(0x1)
	struct FMulticastSparseDelegate OnTakeRadialDamage;  // 0x182(0x1)
	struct FMulticastSparseDelegate OnActorBeginOverlap;  // 0x183(0x1)
	struct FMulticastSparseDelegate OnActorEndOverlap;  // 0x184(0x1)
	struct FMulticastSparseDelegate OnBeginCursorOver;  // 0x185(0x1)
	struct FMulticastSparseDelegate OnEndCursorOver;  // 0x186(0x1)
	struct FMulticastSparseDelegate OnClicked;  // 0x187(0x1)
	struct FMulticastSparseDelegate OnReleased;  // 0x188(0x1)
	struct FMulticastSparseDelegate OnInputTouchBegin;  // 0x189(0x1)
	struct FMulticastSparseDelegate OnInputTouchEnd;  // 0x18A(0x1)
	struct FMulticastSparseDelegate OnInputTouchEnter;  // 0x18B(0x1)
	struct FMulticastSparseDelegate OnInputTouchLeave;  // 0x18C(0x1)
	struct FMulticastSparseDelegate OnActorHit;  // 0x18D(0x1)
	struct FMulticastSparseDelegate OnDestroyed;  // 0x18E(0x1)
	struct FMulticastSparseDelegate OnEndPlay;  // 0x18F(0x1)
	char pad_400[96];  // 0x190(0x60)
	struct TArray<struct UActorComponent*> InstanceComponents;  // 0x1F0(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents;  // 0x200(0x10)
	char pad_528[16];  // 0x210(0x10)

	bool WasRecentlyRendered(float Tolerance); // Function Engine.Actor.WasRecentlyRendered
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript
	void TearOff(); // Function Engine.Actor.TearOff
	void SnapRootComponentTo(struct AActor* InParentActor, struct FName InSocketName); // Function Engine.Actor.SnapRootComponentTo
	void SetTickGroup(char ETickingGroup NewTickGroup); // Function Engine.Actor.SetTickGroup
	void SetTickableWhenPaused(bool bTickableWhenPaused); // Function Engine.Actor.SetTickableWhenPaused
	void SetReplicates(bool bInReplicates); // Function Engine.Actor.SetReplicates
	void SetReplicateMovement(bool bInReplicateMovement); // Function Engine.Actor.SetReplicateMovement
	void SetOwner(struct AActor* NewOwner); // Function Engine.Actor.SetOwner
	void SetNetDormancy(char ENetDormancy NewDormancy); // Function Engine.Actor.SetNetDormancy
	void SetLifeSpan(float InLifespan); // Function Engine.Actor.SetLifeSpan
	void SetAutoDestroyWhenFinished(bool bVal); // Function Engine.Actor.SetAutoDestroyWhenFinished
	void SetActorTickInterval(float TickInterval); // Function Engine.Actor.SetActorTickInterval
	void SetActorTickEnabled(bool bEnabled); // Function Engine.Actor.SetActorTickEnabled
	void SetActorScale3D(struct FVector NewScale3D); // Function Engine.Actor.SetActorScale3D
	void SetActorRelativeScale3D(struct FVector NewRelativeScale); // Function Engine.Actor.SetActorRelativeScale3D
	void SetActorHiddenInGame(bool bNewHidden); // Function Engine.Actor.SetActorHiddenInGame
	void SetActorEnableCollision(bool bNewActorEnableCollision); // Function Engine.Actor.SetActorEnableCollision
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.RemoveTickPrerequisiteComponent
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.Actor.RemoveTickPrerequisiteActor
	void ReceiveTick(float DeltaSeconds); // Function Engine.Actor.ReceiveTick
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveRadialDamage
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult& HitInfo); // Function Engine.Actor.ReceivePointDamage
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Engine.Actor.ReceiveHit
	void ReceiveEndPlay(char EEndPlayReason EndPlayReason); // Function Engine.Actor.ReceiveEndPlay
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveAnyDamage
	void ReceiveActorOnReleased(struct FKey ButtonReleased); // Function Engine.Actor.ReceiveActorOnReleased
	void ReceiveActorOnInputTouchLeave(char ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchLeave
	void ReceiveActorOnInputTouchEnter(char ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnter
	void ReceiveActorOnInputTouchEnd(char ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnd
	void ReceiveActorOnInputTouchBegin(char ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchBegin
	void ReceiveActorOnClicked(struct FKey ButtonPressed); // Function Engine.Actor.ReceiveActorOnClicked
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorEndOverlap
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorBeginOverlap
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver
	void PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.Actor.PrestreamTextures
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication
	void MakeNoise(float Loudness, struct APawn* NoiseInstigator, struct FVector NoiseLocation, float MaxRange, struct FName Tag); // Function Engine.Actor.MakeNoise
	struct UMaterialInstanceDynamic* MakeMIDForMaterial(struct UMaterialInterface* Parent); // Function Engine.Actor.MakeMIDForMaterial
	bool K2_TeleportTo(struct FVector DestLocation, struct FRotator DestRotation); // Function Engine.Actor.K2_TeleportTo
	bool K2_SetActorTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorTransform
	bool K2_SetActorRotation(struct FRotator NewRotation, bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation
	void K2_SetActorRelativeTransform(struct FTransform& NewRelativeTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeTransform
	void K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeRotation
	void K2_SetActorRelativeLocation(struct FVector NewRelativeLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeLocation
	bool K2_SetActorLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorLocationAndRotation
	bool K2_SetActorLocation(struct FVector NewLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorLocation
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnEndViewTarget
	void K2_OnBecomeViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnBecomeViewTarget
	struct USceneComponent* K2_GetRootComponent(); // Function Engine.Actor.K2_GetRootComponent
	struct TArray<struct UActorComponent*> K2_GetComponentsByClass(UActorComponent* ComponentClass); // Function Engine.Actor.K2_GetComponentsByClass
	struct FRotator K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation
	struct FVector K2_GetActorLocation(); // Function Engine.Actor.K2_GetActorLocation
	void K2_DetachFromActor(uint8_t  LocationRule, uint8_t  RotationRule, uint8_t  ScaleRule); // Function Engine.Actor.K2_DetachFromActor
	void K2_DestroyComponent(struct UActorComponent* Component); // Function Engine.Actor.K2_DestroyComponent
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor
	void K2_AttachToComponent(struct USceneComponent* Parent, struct FName SocketName, uint8_t  LocationRule, uint8_t  RotationRule, uint8_t  ScaleRule, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachToComponent
	void K2_AttachToActor(struct AActor* ParentActor, struct FName SocketName, uint8_t  LocationRule, uint8_t  RotationRule, uint8_t  ScaleRule, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachToActor
	void K2_AttachRootComponentToActor(struct AActor* InParentActor, struct FName InSocketName, char EAttachLocation AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentToActor
	void K2_AttachRootComponentTo(struct USceneComponent* InParent, struct FName InSocketName, char EAttachLocation AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentTo
	void K2_AddActorWorldTransformKeepScale(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldTransformKeepScale
	void K2_AddActorWorldTransform(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldTransform
	void K2_AddActorWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldRotation
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldOffset
	void K2_AddActorLocalTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalTransform
	void K2_AddActorLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalRotation
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalOffset
	bool IsOverlappingActor(struct AActor* Other); // Function Engine.Actor.IsOverlappingActor
	bool IsChildActor(); // Function Engine.Actor.IsChildActor
	bool IsActorTickEnabled(); // Function Engine.Actor.IsActorTickEnabled
	bool IsActorBeingDestroyed(); // Function Engine.Actor.IsActorBeingDestroyed
	bool HasAuthority(); // Function Engine.Actor.HasAuthority
	float GetVerticalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetVerticalDistanceTo
	struct FVector GetVelocity(); // Function Engine.Actor.GetVelocity
	struct FTransform GetTransform(); // Function Engine.Actor.GetTransform
	bool GetTickableWhenPaused(); // Function Engine.Actor.GetTickableWhenPaused
	float GetSquaredHorizontalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetSquaredHorizontalDistanceTo
	float GetSquaredDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetSquaredDistanceTo
	char ENetRole GetRemoteRole(); // Function Engine.Actor.GetRemoteRole
	struct UChildActorComponent* GetParentComponent(); // Function Engine.Actor.GetParentComponent
	struct AActor* GetParentActor(); // Function Engine.Actor.GetParentActor
	struct AActor* GetOwner(); // Function Engine.Actor.GetOwner
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*>& OverlappingComponents); // Function Engine.Actor.GetOverlappingComponents
	void GetOverlappingActors(struct TArray<struct AActor*>& OverlappingActors, AActor* ClassFilter); // Function Engine.Actor.GetOverlappingActors
	char ENetRole GetLocalRole(); // Function Engine.Actor.GetLocalRole
	float GetLifeSpan(); // Function Engine.Actor.GetLifeSpan
	struct AController* GetInstigatorController(); // Function Engine.Actor.GetInstigatorController
	struct APawn* GetInstigator(); // Function Engine.Actor.GetInstigator
	struct FVector GetInputVectorAxisValue(struct FKey InputAxisKey); // Function Engine.Actor.GetInputVectorAxisValue
	float GetInputAxisValue(struct FName InputAxisName); // Function Engine.Actor.GetInputAxisValue
	float GetInputAxisKeyValue(struct FKey InputAxisKey); // Function Engine.Actor.GetInputAxisKeyValue
	float GetHorizontalDotProductTo(struct AActor* OtherActor); // Function Engine.Actor.GetHorizontalDotProductTo
	float GetHorizontalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetHorizontalDistanceTo
	float GetGameTimeSinceCreation(); // Function Engine.Actor.GetGameTimeSinceCreation
	float GetDotProductTo(struct AActor* OtherActor); // Function Engine.Actor.GetDotProductTo
	float GetDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetDistanceTo
	struct TArray<struct UActorComponent*> GetComponentsByTag(UActorComponent* ComponentClass, struct FName Tag); // Function Engine.Actor.GetComponentsByTag
	struct TArray<struct UActorComponent*> GetComponentsByInterface(UInterface* Interface); // Function Engine.Actor.GetComponentsByInterface
	struct UActorComponent* GetComponentByClass(UActorComponent* ComponentClass); // Function Engine.Actor.GetComponentByClass
	struct FName GetAttachParentSocketName(); // Function Engine.Actor.GetAttachParentSocketName
	struct AActor* GetAttachParentActor(); // Function Engine.Actor.GetAttachParentActor
	void GetAttachedActors(struct TArray<struct AActor*>& OutActors, bool bResetArray); // Function Engine.Actor.GetAttachedActors
	void GetAllChildActors(struct TArray<struct AActor*>& ChildActors, bool bIncludeDescendants); // Function Engine.Actor.GetAllChildActors
	struct FVector GetActorUpVector(); // Function Engine.Actor.GetActorUpVector
	float GetActorTimeDilation(); // Function Engine.Actor.GetActorTimeDilation
	float GetActorTickInterval(); // Function Engine.Actor.GetActorTickInterval
	struct FVector GetActorScale3D(); // Function Engine.Actor.GetActorScale3D
	struct FVector GetActorRightVector(); // Function Engine.Actor.GetActorRightVector
	struct FVector GetActorRelativeScale3D(); // Function Engine.Actor.GetActorRelativeScale3D
	struct FVector GetActorForwardVector(); // Function Engine.Actor.GetActorForwardVector
	void GetActorEyesViewPoint(struct FVector& OutLocation, struct FRotator& OutRotation); // Function Engine.Actor.GetActorEyesViewPoint
	bool GetActorEnableCollision(); // Function Engine.Actor.GetActorEnableCollision
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate
	void FlushNetDormancy(); // Function Engine.Actor.FlushNetDormancy
	void FinishAddComponent(struct UActorComponent* Component, bool bManualAttachment, struct FTransform& RelativeTransform); // Function Engine.Actor.FinishAddComponent
	void EnableInput(struct APlayerController* PlayerController); // Function Engine.Actor.EnableInput
	void DisableInput(struct APlayerController* PlayerController); // Function Engine.Actor.DisableInput
	void DetachRootComponentFromParent(bool bMaintainWorldPosition); // Function Engine.Actor.DetachRootComponentFromParent
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.AddTickPrerequisiteComponent
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.Actor.AddTickPrerequisiteActor
	struct UActorComponent* AddComponentByClass(UActorComponent* Class, bool bManualAttachment, struct FTransform& RelativeTransform, bool bDeferredFinish); // Function Engine.Actor.AddComponentByClass
	struct UActorComponent* AddComponent(struct FName TemplateName, bool bManualAttachment, struct FTransform& RelativeTransform, struct UObject* ComponentTemplateContext, bool bDeferredFinish); // Function Engine.Actor.AddComponent
	bool ActorHasTag(struct FName Tag); // Function Engine.Actor.ActorHasTag
}; 



// Class Engine.MaterialExpressionScreenPosition
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionScreenPosition : public UMaterialExpression
{

}; 



// Class Engine.BlueprintCore
// Size: 0x50(Inherited: 0x28) 
struct UBlueprintCore : public UObject
{
	UObject* SkeletonGeneratedClass;  // 0x28(0x8)
	UObject* GeneratedClass;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bLegacyNeedToPurgeSkelRefs : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	struct FGuid BlueprintGuid;  // 0x3C(0x10)
	char pad_76[4];  // 0x4C(0x4)

}; 



// Class Engine.MaterialExpressionParticleMotionBlurFade
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{

}; 



// Class Engine.Pawn
// Size: 0x280(Inherited: 0x220) 
struct APawn : public AActor
{
	char pad_544[8];  // 0x220(0x8)
	char bUseControllerRotationPitch : 1;  // 0x228(0x1)
	char bUseControllerRotationYaw : 1;  // 0x228(0x1)
	char bUseControllerRotationRoll : 1;  // 0x228(0x1)
	char bCanAffectNavigationGeneration : 1;  // 0x228(0x1)
	char pad_552_1 : 4;  // 0x228(0x1)
	char pad_553[4];  // 0x229(0x4)
	float BaseEyeHeight;  // 0x22C(0x4)
	char EAutoReceiveInput AutoPossessPlayer;  // 0x230(0x1)
	uint8_t  AutoPossessAI;  // 0x231(0x1)
	char RemoteViewPitch;  // 0x232(0x1)
	char pad_563[5];  // 0x233(0x5)
	AController* AIControllerClass;  // 0x238(0x8)
	struct APlayerState* PlayerState;  // 0x240(0x8)
	char pad_584[8];  // 0x248(0x8)
	struct AController* LastHitBy;  // 0x250(0x8)
	struct AController* Controller;  // 0x258(0x8)
	char pad_608[4];  // 0x260(0x4)
	struct FVector ControlInputVector;  // 0x264(0xC)
	struct FVector LastControlInputVector;  // 0x270(0xC)
	char pad_636[4];  // 0x27C(0x4)

	void SpawnDefaultController(); // Function Engine.Pawn.SpawnDefaultController
	void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate); // Function Engine.Pawn.SetCanAffectNavigationGeneration
	void ReceiveUnpossessed(struct AController* OldController); // Function Engine.Pawn.ReceiveUnpossessed
	void ReceivePossessed(struct AController* NewController); // Function Engine.Pawn.ReceivePossessed
	void PawnMakeNoise(float Loudness, struct FVector NoiseLocation, bool bUseNoiseMakerLocation, struct AActor* NoiseMaker); // Function Engine.Pawn.PawnMakeNoise
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller
	void LaunchPawn(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Pawn.LaunchPawn
	struct FVector K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector
	bool IsPlayerControlled(); // Function Engine.Pawn.IsPlayerControlled
	bool IsPawnControlled(); // Function Engine.Pawn.IsPawnControlled
	bool IsMoveInputIgnored(); // Function Engine.Pawn.IsMoveInputIgnored
	bool IsLocallyControlled(); // Function Engine.Pawn.IsLocallyControlled
	bool IsControlled(); // Function Engine.Pawn.IsControlled
	bool IsBotControlled(); // Function Engine.Pawn.IsBotControlled
	struct FVector GetPendingMovementInputVector(); // Function Engine.Pawn.GetPendingMovementInputVector
	struct FVector GetNavAgentLocation(); // Function Engine.Pawn.GetNavAgentLocation
	struct UPawnMovementComponent* GetMovementComponent(); // Function Engine.Pawn.GetMovementComponent
	struct AActor* GetMovementBaseActor(struct APawn* Pawn); // Function Engine.Pawn.GetMovementBaseActor
	struct FVector GetLastMovementInputVector(); // Function Engine.Pawn.GetLastMovementInputVector
	struct FRotator GetControlRotation(); // Function Engine.Pawn.GetControlRotation
	struct AController* GetController(); // Function Engine.Pawn.GetController
	struct FRotator GetBaseAimRotation(); // Function Engine.Pawn.GetBaseAimRotation
	void DetachFromControllerPendingDestroy(); // Function Engine.Pawn.DetachFromControllerPendingDestroy
	struct FVector ConsumeMovementInputVector(); // Function Engine.Pawn.ConsumeMovementInputVector
	void AddMovementInput(struct FVector WorldDirection, float ScaleValue, bool bForce); // Function Engine.Pawn.AddMovementInput
	void AddControllerYawInput(float Val); // Function Engine.Pawn.AddControllerYawInput
	void AddControllerRollInput(float Val); // Function Engine.Pawn.AddControllerRollInput
	void AddControllerPitchInput(float Val); // Function Engine.Pawn.AddControllerPitchInput
}; 



// Class Engine.MaterialExpressionLogarithm2
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionLogarithm2 : public UMaterialExpression
{
	struct FExpressionInput X;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.LocalLightComponent
// Size: 0x340(Inherited: 0x330) 
struct ULocalLightComponent : public ULightComponent
{
	uint8_t  IntensityUnits;  // 0x328(0x1)
	float Radius;  // 0x32C(0x4)
	float AttenuationRadius;  // 0x330(0x4)
	struct FLightmassPointLightSettings LightmassSettings;  // 0x334(0xC)

	void SetIntensityUnits(uint8_t  NewIntensityUnits); // Function Engine.LocalLightComponent.SetIntensityUnits
	void SetAttenuationRadius(float NewRadius); // Function Engine.LocalLightComponent.SetAttenuationRadius
	float GetUnitsConversionFactor(uint8_t  SrcUnits, uint8_t  TargetUnits, float CosHalfConeAngle); // Function Engine.LocalLightComponent.GetUnitsConversionFactor
}; 



// Class Engine.SoundWaveProcedural
// Size: 0x3C0(Inherited: 0x370) 
struct USoundWaveProcedural : public USoundWave
{
	char pad_880[80];  // 0x370(0x50)

}; 



// Class Engine.SkeletalMeshComponent
// Size: 0xED0(Inherited: 0x6A0) 
struct USkeletalMeshComponent : public USkinnedMeshComponent
{
	UObject* AnimBlueprintGeneratedClass;  // 0x6A0(0x8)
	UAnimInstance* AnimClass;  // 0x6A8(0x8)
	struct UAnimInstance* AnimScriptInstance;  // 0x6B0(0x8)
	struct UAnimInstance* PostProcessAnimInstance;  // 0x6B8(0x8)
	struct FSingleAnimationPlayData AnimationData;  // 0x6C0(0x18)
	char pad_1752[16];  // 0x6D8(0x10)
	struct FVector RootBoneTranslation;  // 0x6E8(0xC)
	struct FVector LineCheckBoundsScale;  // 0x6F4(0xC)
	char pad_1792[48];  // 0x700(0x30)
	struct TArray<struct UAnimInstance*> LinkedInstances;  // 0x730(0x10)
	struct TArray<struct FTransform> CachedBoneSpaceTransforms;  // 0x740(0x10)
	struct TArray<struct FTransform> CachedComponentSpaceTransforms;  // 0x750(0x10)
	char pad_1888[336];  // 0x760(0x150)
	float GlobalAnimRateScale;  // 0x8B0(0x4)
	char EKinematicBonesUpdateToPhysics KinematicBonesUpdateType;  // 0x8B4(0x1)
	char EPhysicsTransformUpdateMode PhysicsTransformUpdateMode;  // 0x8B5(0x1)
	char pad_2230[1];  // 0x8B6(0x1)
	char EAnimationMode AnimationMode;  // 0x8B7(0x1)
	char pad_2232[1];  // 0x8B8(0x1)
	char bDisablePostProcessBlueprint : 1;  // 0x8B9(0x1)
	char pad_2233_1 : 1;  // 0x8B9(0x1)
	char bUpdateOverlapsOnAnimationFinalize : 1;  // 0x8B9(0x1)
	char pad_2233_2 : 1;  // 0x8B9(0x1)
	char bHasValidBodies : 1;  // 0x8B9(0x1)
	char bBlendPhysics : 1;  // 0x8B9(0x1)
	char bEnablePhysicsOnDedicatedServer : 1;  // 0x8B9(0x1)
	char bUpdateJointsFromAnimation : 1;  // 0x8B9(0x1)
	char bDisableClothSimulation : 1;  // 0x8BA(0x1)
	char pad_2234_1 : 7;  // 0x8BA(0x1)
	char pad_2235[6];  // 0x8BB(0x6)
	char pad_2240_1 : 1;  // 0x8C0(0x1)
	char bDisableRigidBodyAnimNode : 1;  // 0x8C0(0x1)
	char bAllowAnimCurveEvaluation : 1;  // 0x8C0(0x1)
	char bDisableAnimCurves : 1;  // 0x8C0(0x1)
	char pad_2240_2 : 3;  // 0x8C0(0x1)
	char bCollideWithEnvironment : 1;  // 0x8C0(0x1)
	char bCollideWithAttachedChildren : 1;  // 0x8C1(0x1)
	char bLocalSpaceSimulation : 1;  // 0x8C1(0x1)
	char bResetAfterTeleport : 1;  // 0x8C1(0x1)
	char pad_2241_1 : 1;  // 0x8C1(0x1)
	char bDeferKinematicBoneUpdate : 1;  // 0x8C1(0x1)
	char bNoSkeletonUpdate : 1;  // 0x8C1(0x1)
	char bPauseAnims : 1;  // 0x8C1(0x1)
	char bUseRefPoseOnInitAnim : 1;  // 0x8C1(0x1)
	char bEnablePerPolyCollision : 1;  // 0x8C2(0x1)
	char bForceRefpose : 1;  // 0x8C2(0x1)
	char bOnlyAllowAutonomousTickPose : 1;  // 0x8C2(0x1)
	char bIsAutonomousTickPose : 1;  // 0x8C2(0x1)
	char bOldForceRefPose : 1;  // 0x8C2(0x1)
	char bShowPrePhysBones : 1;  // 0x8C2(0x1)
	char bRequiredBonesUpToDate : 1;  // 0x8C2(0x1)
	char bAnimTreeInitialised : 1;  // 0x8C2(0x1)
	char bIncludeComponentLocationIntoBounds : 1;  // 0x8C3(0x1)
	char bEnableLineCheckWithBounds : 1;  // 0x8C3(0x1)
	char bPropagateCurvesToSlaves : 1;  // 0x8C3(0x1)
	char bSkipKinematicUpdateWhenInterpolating : 1;  // 0x8C3(0x1)
	char bSkipBoundsUpdateWhenInterpolating : 1;  // 0x8C3(0x1)
	char pad_2243_1 : 2;  // 0x8C3(0x1)
	char bNeedsQueuedAnimEventsDispatched : 1;  // 0x8C3(0x1)
	char pad_2244[2];  // 0x8C4(0x2)
	uint16_t CachedAnimCurveUidVersion;  // 0x8C6(0x2)
	float ClothBlendWeight;  // 0x8C8(0x4)
	char pad_2252_1 : 7;  // 0x8CC(0x1)
	bool bWaitForParallelClothTask : 1;  // 0x8CC(0x1)
	char pad_2253[3];  // 0x8CD(0x3)
	struct TArray<struct FName> DisallowedAnimCurves;  // 0x8D0(0x10)
	struct UBodySetup* BodySetup;  // 0x8E0(0x8)
	char pad_2280[8];  // 0x8E8(0x8)
	struct FMulticastInlineDelegate OnConstraintBroken;  // 0x8F0(0x10)
	UClothingSimulationFactory* ClothingSimulationFactory;  // 0x900(0x8)
	char pad_2312[208];  // 0x908(0xD0)
	float TeleportDistanceThreshold;  // 0x9D8(0x4)
	float TeleportRotationThreshold;  // 0x9DC(0x4)
	char pad_2528[8];  // 0x9E0(0x8)
	uint32_t LastPoseTickFrame;  // 0x9E8(0x4)
	char pad_2540[84];  // 0x9EC(0x54)
	struct UClothingSimulationInteractor* ClothingInteractor;  // 0xA40(0x8)
	char pad_2632[200];  // 0xA48(0xC8)
	struct FMulticastInlineDelegate OnAnimInitialized;  // 0xB10(0x10)
	char pad_2848[944];  // 0xB20(0x3B0)

	void UnlinkAnimClassLayers(UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.UnlinkAnimClassLayers
	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace); // Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent
	void ToggleDisablePostProcessBlueprint(); // Function Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint
	void TermBodiesBelow(struct FName ParentBoneName); // Function Engine.SkeletalMeshComponent.TermBodiesBelow
	void SuspendClothingSimulation(); // Function Engine.SkeletalMeshComponent.SuspendClothingSimulation
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop
	void SnapshotPose(struct FPoseSnapshot& Snapshot); // Function Engine.SkeletalMeshComponent.SnapshotPose
	void SetUpdateClothInEditor(bool NewUpdateState); // Function Engine.SkeletalMeshComponent.SetUpdateClothInEditor
	void SetUpdateAnimationInEditor(bool NewUpdateState); // Function Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor
	void SetTeleportRotationThreshold(float Threshold); // Function Engine.SkeletalMeshComponent.SetTeleportRotationThreshold
	void SetTeleportDistanceThreshold(float Threshold); // Function Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold
	void SetPosition(float InPos, bool bFireNotifies); // Function Engine.SkeletalMeshComponent.SetPosition
	void SetPlayRate(float Rate); // Function Engine.SkeletalMeshComponent.SetPlayRate
	void SetPhysicsBlendWeight(float PhysicsBlendWeight); // Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight
	void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, struct FName BoneName, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow
	void SetMorphTarget(struct FName MorphTargetName, float Value, bool bRemoveZeroWeight); // Function Engine.SkeletalMeshComponent.SetMorphTarget
	void SetEnablePhysicsBlending(bool bNewBlendPhysics); // Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending
	void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, struct FName BoneName, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow
	void SetEnableBodyGravity(bool bEnableGravity, struct FName BoneName); // Function Engine.SkeletalMeshComponent.SetEnableBodyGravity
	void SetDisablePostProcessBlueprint(bool bInDisablePostProcess); // Function Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint
	void SetDisableAnimCurves(bool bInDisableAnimCurves); // Function Engine.SkeletalMeshComponent.SetDisableAnimCurves
	void SetConstraintProfileForAll(struct FName ProfileName, bool bDefaultIfNotFound); // Function Engine.SkeletalMeshComponent.SetConstraintProfileForAll
	void SetConstraintProfile(struct FName JointName, struct FName ProfileName, bool bDefaultIfNotFound); // Function Engine.SkeletalMeshComponent.SetConstraintProfile
	void SetClothMaxDistanceScale(float Scale); // Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale
	void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, struct FName BoneName); // Function Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision
	void SetAnimClass(UObject* NewClass); // Function Engine.SkeletalMeshComponent.SetAnimClass
	void SetAnimationMode(char EAnimationMode InAnimationMode); // Function Engine.SkeletalMeshComponent.SetAnimationMode
	void SetAnimation(struct UAnimationAsset* NewAnimToPlay); // Function Engine.SkeletalMeshComponent.SetAnimation
	void SetAngularLimits(struct FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle); // Function Engine.SkeletalMeshComponent.SetAngularLimits
	void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim); // Function Engine.SkeletalMeshComponent.SetAllowRigidBodyAnimNode
	void SetAllowedAnimCurvesEvaluation(struct TArray<struct FName>& List, bool bAllow); // Function Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation
	void SetAllowAnimCurveEvaluation(bool bInAllow); // Function Engine.SkeletalMeshComponent.SetAllowAnimCurveEvaluation
	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive
	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams
	void SetAllBodiesSimulatePhysics(bool bNewSimulate); // Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight
	void SetAllBodiesBelowSimulatePhysics(struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics
	void SetAllBodiesBelowPhysicsBlendWeight(struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight
	void ResumeClothingSimulation(); // Function Engine.SkeletalMeshComponent.ResumeClothingSimulation
	void ResetClothTeleportMode(); // Function Engine.SkeletalMeshComponent.ResetClothTeleportMode
	void ResetAnimInstanceDynamics(uint8_t  InTeleportType); // Function Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics
	void ResetAllowedAnimCurveEvaluation(); // Function Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation
	void ResetAllBodiesSimulatePhysics(); // Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics
	void PlayAnimation(struct UAnimationAsset* NewAnimToPlay, bool bLooping); // Function Engine.SkeletalMeshComponent.PlayAnimation
	void Play(bool bLooping); // Function Engine.SkeletalMeshComponent.Play
	void OverrideAnimationData(struct UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float position, float PlayRate); // Function Engine.SkeletalMeshComponent.OverrideAnimationData
	void LinkAnimGraphByTag(struct FName InTag, UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.LinkAnimGraphByTag
	void LinkAnimClassLayers(UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.LinkAnimClassLayers
	bool K2_GetClosestPointOnPhysicsAsset(struct FVector& WorldPosition, struct FVector& ClosestWorldPosition, struct FVector& Normal, struct FName& BoneName, float& Distance); // Function Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset
	bool IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying
	bool IsClothingSimulationSuspended(); // Function Engine.SkeletalMeshComponent.IsClothingSimulationSuspended
	bool IsBodyGravityEnabled(struct FName BoneName); // Function Engine.SkeletalMeshComponent.IsBodyGravityEnabled
	bool HasValidAnimationInstance(); // Function Engine.SkeletalMeshComponent.HasValidAnimationInstance
	float GetTeleportRotationThreshold(); // Function Engine.SkeletalMeshComponent.GetTeleportRotationThreshold
	float GetTeleportDistanceThreshold(); // Function Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold
	bool GetStringAttribute_Ref(struct FName& BoneName, struct FName& AttributeName, struct FString& OutValue, uint8_t  LookupType); // Function Engine.SkeletalMeshComponent.GetStringAttribute_Ref
	bool GetStringAttribute(struct FName& BoneName, struct FName& AttributeName, struct FString DefaultValue, struct FString& OutValue, uint8_t  LookupType); // Function Engine.SkeletalMeshComponent.GetStringAttribute
	struct FVector GetSkeletalCenterOfMass(); // Function Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass
	struct UAnimInstance* GetPostProcessInstance(); // Function Engine.SkeletalMeshComponent.GetPostProcessInstance
	float GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition
	float GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate
	float GetMorphTarget(struct FName MorphTargetName); // Function Engine.SkeletalMeshComponent.GetMorphTarget
	struct UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName InGroup); // Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByGroup
	struct UAnimInstance* GetLinkedAnimLayerInstanceByClass(UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByClass
	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, struct TArray<struct UAnimInstance*>& OutLinkedInstances); // Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstancesByTag
	struct UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName InTag); // Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstanceByTag
	bool GetIntegerAttribute_Ref(struct FName& BoneName, struct FName& AttributeName, int32_t& OutValue, uint8_t  LookupType); // Function Engine.SkeletalMeshComponent.GetIntegerAttribute_Ref
	bool GetIntegerAttribute(struct FName& BoneName, struct FName& AttributeName, int32_t DefaultValue, int32_t& OutValue, uint8_t  LookupType); // Function Engine.SkeletalMeshComponent.GetIntegerAttribute
	bool GetFloatAttribute_Ref(struct FName& BoneName, struct FName& AttributeName, float& OutValue, uint8_t  LookupType); // Function Engine.SkeletalMeshComponent.GetFloatAttribute_Ref
	bool GetFloatAttribute(struct FName& BoneName, struct FName& AttributeName, float DefaultValue, float& OutValue, uint8_t  LookupType); // Function Engine.SkeletalMeshComponent.GetFloatAttribute
	bool GetDisablePostProcessBlueprint(); // Function Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint
	bool GetDisableAnimCurves(); // Function Engine.SkeletalMeshComponent.GetDisableAnimCurves
	void GetCurrentJointAngles(struct FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle); // Function Engine.SkeletalMeshComponent.GetCurrentJointAngles
	float GetClothMaxDistanceScale(); // Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale
	struct UClothingSimulationInteractor* GetClothingSimulationInteractor(); // Function Engine.SkeletalMeshComponent.GetClothingSimulationInteractor
	float GetBoneMass(struct FName BoneName, bool bScaleMass); // Function Engine.SkeletalMeshComponent.GetBoneMass
	struct UAnimInstance* GetAnimInstance(); // Function Engine.SkeletalMeshComponent.GetAnimInstance
	UObject* GetAnimClass(); // Function Engine.SkeletalMeshComponent.GetAnimClass
	char EAnimationMode GetAnimationMode(); // Function Engine.SkeletalMeshComponent.GetAnimationMode
	bool GetAllowRigidBodyAnimNode(); // Function Engine.SkeletalMeshComponent.GetAllowRigidBodyAnimNode
	bool GetAllowedAnimCurveEvaluate(); // Function Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate
	void ForceClothNextUpdateTeleportAndReset(); // Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset
	void ForceClothNextUpdateTeleport(); // Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport
	struct FName FindConstraintBoneName(int32_t ConstraintIndex); // Function Engine.SkeletalMeshComponent.FindConstraintBoneName
	void ClearMorphTargets(); // Function Engine.SkeletalMeshComponent.ClearMorphTargets
	void BreakConstraint(struct FVector Impulse, struct FVector HitLocation, struct FName InBoneName); // Function Engine.SkeletalMeshComponent.BreakConstraint
	void BindClothToMasterPoseComponent(); // Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent
	void AllowAnimCurveEvaluation(struct FName NameOfCurve, bool bAllow); // Function Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation
	void AddImpulseToAllBodiesBelow(struct FVector Impulse, struct FName BoneName, bool bVelChange, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow
	void AddForceToAllBodiesBelow(struct FVector force, struct FName BoneName, bool bAccelChange, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow
	void AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight
}; 



// Class Engine.DynamicSubsystem
// Size: 0x30(Inherited: 0x30) 
struct UDynamicSubsystem : public USubsystem
{

}; 



// Class Engine.KismetStringTableLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{

	bool IsRegisteredTableId(struct FName TableId); // Function Engine.KismetStringTableLibrary.IsRegisteredTableId
	bool IsRegisteredTableEntry(struct FName TableId, struct FString Key); // Function Engine.KismetStringTableLibrary.IsRegisteredTableEntry
	struct FString GetTableNamespace(struct FName TableId); // Function Engine.KismetStringTableLibrary.GetTableNamespace
	struct FString GetTableEntrySourceString(struct FName TableId, struct FString Key); // Function Engine.KismetStringTableLibrary.GetTableEntrySourceString
	struct FString GetTableEntryMetaData(struct FName TableId, struct FString Key, struct FName MetaDataId); // Function Engine.KismetStringTableLibrary.GetTableEntryMetaData
	struct TArray<struct FName> GetRegisteredStringTables(); // Function Engine.KismetStringTableLibrary.GetRegisteredStringTables
	struct TArray<struct FName> GetMetaDataIdsFromStringTableEntry(struct FName TableId, struct FString Key); // Function Engine.KismetStringTableLibrary.GetMetaDataIdsFromStringTableEntry
	struct TArray<struct FString> GetKeysFromStringTable(struct FName TableId); // Function Engine.KismetStringTableLibrary.GetKeysFromStringTable
}; 



// Class Engine.KismetSystemLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetSystemLibrary : public UBlueprintFunctionLibrary
{

	void UnregisterForRemoteNotifications(); // Function Engine.KismetSystemLibrary.UnregisterForRemoteNotifications
	void UnloadPrimaryAssetList(struct TArray<struct FPrimaryAssetId>& PrimaryAssetIdList); // Function Engine.KismetSystemLibrary.UnloadPrimaryAssetList
	void UnloadPrimaryAsset(struct FPrimaryAssetId PrimaryAssetId); // Function Engine.KismetSystemLibrary.UnloadPrimaryAsset
	void TransactObject(struct UObject* Object); // Function Engine.KismetSystemLibrary.TransactObject
	void TickLatentActionsEditorOnly(struct UObject* WorldContextObject, struct UObject* Object, float dTime); // Function Engine.KismetSystemLibrary.TickLatentActionsEditorOnly
	void StackTrace(); // Function Engine.KismetSystemLibrary.StackTrace
	bool SphereTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects
	bool SphereTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceSingleByProfile
	bool SphereTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceSingle
	bool SphereTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects
	bool SphereTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceMultiByProfile
	bool SphereTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceMulti
	bool SphereOverlapComponents(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, struct TArray<char EObjectTypeQuery>& ObjectTypes, UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // Function Engine.KismetSystemLibrary.SphereOverlapComponents
	bool SphereOverlapActors(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, struct TArray<char EObjectTypeQuery>& ObjectTypes, UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // Function Engine.KismetSystemLibrary.SphereOverlapActors
	void SnapshotObject(struct UObject* Object); // Function Engine.KismetSystemLibrary.SnapshotObject
	void ShowPlatformSpecificLeaderboardScreen(struct FString CategoryName); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen
	void ShowPlatformSpecificAchievementsScreen(struct APlayerController* SpecificPlayer); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen
	void ShowInterstitialAd(); // Function Engine.KismetSystemLibrary.ShowInterstitialAd
	void ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen); // Function Engine.KismetSystemLibrary.ShowAdBanner
	void SetWindowTitle(struct FText& Title); // Function Engine.KismetSystemLibrary.SetWindowTitle
	void SetVolumeButtonsHandledBySystem(bool bEnabled); // Function Engine.KismetSystemLibrary.SetVolumeButtonsHandledBySystem
	void SetVectorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FVector& Value); // Function Engine.KismetSystemLibrary.SetVectorPropertyByName
	void SetUserActivity(struct FUserActivity& UserActivity); // Function Engine.KismetSystemLibrary.SetUserActivity
	void SetTransformPropertyByName(struct UObject* Object, struct FName PropertyName, struct FTransform& Value); // Function Engine.KismetSystemLibrary.SetTransformPropertyByName
	void SetTextPropertyByName(struct UObject* Object, struct FName PropertyName, struct FText& Value); // Function Engine.KismetSystemLibrary.SetTextPropertyByName
	void SetSuppressViewportTransitionMessage(struct UObject* WorldContextObject, bool bState); // Function Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage
	void SetStructurePropertyByName(struct UObject* Object, struct FName PropertyName, struct FGenericStruct& Value); // Function Engine.KismetSystemLibrary.SetStructurePropertyByName
	void SetStringPropertyByName(struct UObject* Object, struct FName PropertyName, struct FString Value); // Function Engine.KismetSystemLibrary.SetStringPropertyByName
	void SetSoftObjectPropertyByName(struct UObject* Object, struct FName PropertyName, struct TSoftObjectPtr<UObject>& Value); // Function Engine.KismetSystemLibrary.SetSoftObjectPropertyByName
	void SetSoftClassPropertyByName(struct UObject* Object, struct FName PropertyName, struct TSoftClassPtr<UObject>& Value); // Function Engine.KismetSystemLibrary.SetSoftClassPropertyByName
	void SetRotatorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FRotator& Value); // Function Engine.KismetSystemLibrary.SetRotatorPropertyByName
	void SetObjectPropertyByName(struct UObject* Object, struct FName PropertyName, struct UObject* Value); // Function Engine.KismetSystemLibrary.SetObjectPropertyByName
	void SetNamePropertyByName(struct UObject* Object, struct FName PropertyName, struct FName& Value); // Function Engine.KismetSystemLibrary.SetNamePropertyByName
	void SetLinearColorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FLinearColor& Value); // Function Engine.KismetSystemLibrary.SetLinearColorPropertyByName
	void SetIntPropertyByName(struct UObject* Object, struct FName PropertyName, int32_t Value); // Function Engine.KismetSystemLibrary.SetIntPropertyByName
	void SetInterfacePropertyByName(struct UObject* Object, struct FName PropertyName, struct TScriptInterface<IInterface>& Value); // Function Engine.KismetSystemLibrary.SetInterfacePropertyByName
	void SetInt64PropertyByName(struct UObject* Object, struct FName PropertyName, int64_t Value); // Function Engine.KismetSystemLibrary.SetInt64PropertyByName
	void SetGamepadsBlockDeviceFeedback(bool bBlock); // Function Engine.KismetSystemLibrary.SetGamepadsBlockDeviceFeedback
	void SetFloatPropertyByName(struct UObject* Object, struct FName PropertyName, float Value); // Function Engine.KismetSystemLibrary.SetFloatPropertyByName
	void SetFieldPathPropertyByName(struct UObject* Object, struct FName PropertyName, struct TFieldPath<FNone>& Value); // Function Engine.KismetSystemLibrary.SetFieldPathPropertyByName
	void SetColorPropertyByName(struct UObject* Object, struct FName PropertyName, struct FColor& Value); // Function Engine.KismetSystemLibrary.SetColorPropertyByName
	void SetCollisionProfileNameProperty(struct UObject* Object, struct FName PropertyName, struct FCollisionProfileName& Value); // Function Engine.KismetSystemLibrary.SetCollisionProfileNameProperty
	void SetClassPropertyByName(struct UObject* Object, struct FName PropertyName, UObject* Value); // Function Engine.KismetSystemLibrary.SetClassPropertyByName
	void SetBytePropertyByName(struct UObject* Object, struct FName PropertyName, char Value); // Function Engine.KismetSystemLibrary.SetBytePropertyByName
	void SetBoolPropertyByName(struct UObject* Object, struct FName PropertyName, bool Value); // Function Engine.KismetSystemLibrary.SetBoolPropertyByName
	void RetriggerableDelay(struct UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.RetriggerableDelay
	void ResetGamepadAssignmentToController(int32_t ControllerId); // Function Engine.KismetSystemLibrary.ResetGamepadAssignmentToController
	void ResetGamepadAssignments(); // Function Engine.KismetSystemLibrary.ResetGamepadAssignments
	void RegisterForRemoteNotifications(); // Function Engine.KismetSystemLibrary.RegisterForRemoteNotifications
	void QuitGame(struct UObject* WorldContextObject, struct APlayerController* SpecificPlayer, char EQuitPreference QuitPreference, bool bIgnorePlatformRestrictions); // Function Engine.KismetSystemLibrary.QuitGame
	void PrintWarning(struct FString inString); // Function Engine.KismetSystemLibrary.PrintWarning
	void PrintText(struct UObject* WorldContextObject, struct FText InText, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration); // Function Engine.KismetSystemLibrary.PrintText
	void PrintString(struct UObject* WorldContextObject, struct FString inString, bool bPrintToScreen, bool bPrintToLog, struct FLinearColor TextColor, float Duration); // Function Engine.KismetSystemLibrary.PrintString
	bool ParseParamValue(struct FString inString, struct FString InParam, struct FString& OutValue); // Function Engine.KismetSystemLibrary.ParseParamValue
	bool ParseParam(struct FString inString, struct FString InParam); // Function Engine.KismetSystemLibrary.ParseParam
	void ParseCommandLine(struct FString InCmdLine, struct TArray<struct FString>& OutTokens, struct TArray<struct FString>& OutSwitches, struct TMap<struct FString, struct FString>& OutParams); // Function Engine.KismetSystemLibrary.ParseCommandLine
	void OnAssetLoaded__DelegateSignature(struct UObject* Loaded); // DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature
	void OnAssetClassLoaded__DelegateSignature(UObject* Loaded); // DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature
	bool NotEqual_SoftObjectReference(struct TSoftObjectPtr<UObject>& A, struct TSoftObjectPtr<UObject>& B); // Function Engine.KismetSystemLibrary.NotEqual_SoftObjectReference
	bool NotEqual_SoftClassReference(struct TSoftClassPtr<UObject>& A, struct TSoftClassPtr<UObject>& B); // Function Engine.KismetSystemLibrary.NotEqual_SoftClassReference
	bool NotEqual_PrimaryAssetType(struct FPrimaryAssetType A, struct FPrimaryAssetType B); // Function Engine.KismetSystemLibrary.NotEqual_PrimaryAssetType
	bool NotEqual_PrimaryAssetId(struct FPrimaryAssetId A, struct FPrimaryAssetId B); // Function Engine.KismetSystemLibrary.NotEqual_PrimaryAssetId
	struct FString NormalizeFilename(struct FString InFilename); // Function Engine.KismetSystemLibrary.NormalizeFilename
	void MoveComponentTo(struct USceneComponent* Component, struct FVector TargetRelativeLocation, struct FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, char EMoveComponentAction MoveAction, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.MoveComponentTo
	struct FSoftObjectPath MakeSoftObjectPath(struct FString PathString); // Function Engine.KismetSystemLibrary.MakeSoftObjectPath
	struct FSoftClassPath MakeSoftClassPath(struct FString PathString); // Function Engine.KismetSystemLibrary.MakeSoftClassPath
	struct FText MakeLiteralText(struct FText Value); // Function Engine.KismetSystemLibrary.MakeLiteralText
	struct FString MakeLiteralString(struct FString Value); // Function Engine.KismetSystemLibrary.MakeLiteralString
	struct FName MakeLiteralName(struct FName Value); // Function Engine.KismetSystemLibrary.MakeLiteralName
	int32_t MakeLiteralInt(int32_t Value); // Function Engine.KismetSystemLibrary.MakeLiteralInt
	float MakeLiteralFloat(float Value); // Function Engine.KismetSystemLibrary.MakeLiteralFloat
	char MakeLiteralByte(char Value); // Function Engine.KismetSystemLibrary.MakeLiteralByte
	bool MakeLiteralBool(bool Value); // Function Engine.KismetSystemLibrary.MakeLiteralBool
	void LoadInterstitialAd(int32_t AdIdIndex); // Function Engine.KismetSystemLibrary.LoadInterstitialAd
	UObject* LoadClassAsset_Blocking(struct TSoftClassPtr<UObject> AssetClass); // Function Engine.KismetSystemLibrary.LoadClassAsset_Blocking
	void LoadAssetClass(struct UObject* WorldContextObject, struct TSoftClassPtr<UObject> AssetClass, struct FDelegate OnLoaded, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.LoadAssetClass
	struct UObject* LoadAsset_Blocking(struct TSoftObjectPtr<UObject> Asset); // Function Engine.KismetSystemLibrary.LoadAsset_Blocking
	void LoadAsset(struct UObject* WorldContextObject, struct TSoftObjectPtr<UObject> Asset, struct FDelegate OnLoaded, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.LoadAsset
	bool LineTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.LineTraceSingleForObjects
	bool LineTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.LineTraceSingleByProfile
	bool LineTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.LineTraceSingle
	bool LineTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.LineTraceMultiForObjects
	bool LineTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.LineTraceMultiByProfile
	bool LineTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.LineTraceMulti
	void LaunchURL(struct FString URL); // Function Engine.KismetSystemLibrary.LaunchURL
	void K2_UnPauseTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_UnPauseTimerHandle
	void K2_UnPauseTimerDelegate(struct FDelegate Delegate); // Function Engine.KismetSystemLibrary.K2_UnPauseTimerDelegate
	void K2_UnPauseTimer(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_UnPauseTimer
	bool K2_TimerExistsHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_TimerExistsHandle
	bool K2_TimerExistsDelegate(struct FDelegate Delegate); // Function Engine.KismetSystemLibrary.K2_TimerExistsDelegate
	bool K2_TimerExists(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_TimerExists
	struct FTimerHandle K2_SetTimerDelegate(struct FDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance); // Function Engine.KismetSystemLibrary.K2_SetTimerDelegate
	struct FTimerHandle K2_SetTimer(struct UObject* Object, struct FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance); // Function Engine.KismetSystemLibrary.K2_SetTimer
	void K2_PauseTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_PauseTimerHandle
	void K2_PauseTimerDelegate(struct FDelegate Delegate); // Function Engine.KismetSystemLibrary.K2_PauseTimerDelegate
	void K2_PauseTimer(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_PauseTimer
	bool K2_IsValidTimerHandle(struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_IsValidTimerHandle
	bool K2_IsTimerPausedHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_IsTimerPausedHandle
	bool K2_IsTimerPausedDelegate(struct FDelegate Delegate); // Function Engine.KismetSystemLibrary.K2_IsTimerPausedDelegate
	bool K2_IsTimerPaused(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_IsTimerPaused
	bool K2_IsTimerActiveHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_IsTimerActiveHandle
	bool K2_IsTimerActiveDelegate(struct FDelegate Delegate); // Function Engine.KismetSystemLibrary.K2_IsTimerActiveDelegate
	bool K2_IsTimerActive(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_IsTimerActive
	struct FTimerHandle K2_InvalidateTimerHandle(struct FTimerHandle& Handle); // Function Engine.KismetSystemLibrary.K2_InvalidateTimerHandle
	float K2_GetTimerRemainingTimeHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeHandle
	float K2_GetTimerRemainingTimeDelegate(struct FDelegate Delegate); // Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeDelegate
	float K2_GetTimerRemainingTime(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_GetTimerRemainingTime
	float K2_GetTimerElapsedTimeHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeHandle
	float K2_GetTimerElapsedTimeDelegate(struct FDelegate Delegate); // Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeDelegate
	float K2_GetTimerElapsedTime(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_GetTimerElapsedTime
	void K2_ClearTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle Handle); // Function Engine.KismetSystemLibrary.K2_ClearTimerHandle
	void K2_ClearTimerDelegate(struct FDelegate Delegate); // Function Engine.KismetSystemLibrary.K2_ClearTimerDelegate
	void K2_ClearTimer(struct UObject* Object, struct FString FunctionName); // Function Engine.KismetSystemLibrary.K2_ClearTimer
	void K2_ClearAndInvalidateTimerHandle(struct UObject* WorldContextObject, struct FTimerHandle& Handle); // Function Engine.KismetSystemLibrary.K2_ClearAndInvalidateTimerHandle
	bool IsValidSoftObjectReference(struct TSoftObjectPtr<UObject>& SoftObjectReference); // Function Engine.KismetSystemLibrary.IsValidSoftObjectReference
	bool IsValidSoftClassReference(struct TSoftClassPtr<UObject>& SoftClassReference); // Function Engine.KismetSystemLibrary.IsValidSoftClassReference
	bool IsValidPrimaryAssetType(struct FPrimaryAssetType PrimaryAssetType); // Function Engine.KismetSystemLibrary.IsValidPrimaryAssetType
	bool IsValidPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // Function Engine.KismetSystemLibrary.IsValidPrimaryAssetId
	bool IsValidClass(UObject* Class); // Function Engine.KismetSystemLibrary.IsValidClass
	bool IsValid(struct UObject* Object); // Function Engine.KismetSystemLibrary.IsValid
	bool IsUnattended(); // Function Engine.KismetSystemLibrary.IsUnattended
	bool IsStandalone(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.IsStandalone
	bool IsSplitScreen(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.IsSplitScreen
	bool IsServer(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.IsServer
	bool IsScreensaverEnabled(); // Function Engine.KismetSystemLibrary.IsScreensaverEnabled
	bool IsPackagedForDistribution(); // Function Engine.KismetSystemLibrary.IsPackagedForDistribution
	bool IsLoggedIn(struct APlayerController* SpecificPlayer); // Function Engine.KismetSystemLibrary.IsLoggedIn
	bool IsInterstitialAdRequested(); // Function Engine.KismetSystemLibrary.IsInterstitialAdRequested
	bool IsInterstitialAdAvailable(); // Function Engine.KismetSystemLibrary.IsInterstitialAdAvailable
	bool IsDedicatedServer(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.IsDedicatedServer
	bool IsControllerAssignedToGamepad(int32_t ControllerId); // Function Engine.KismetSystemLibrary.IsControllerAssignedToGamepad
	void HideAdBanner(); // Function Engine.KismetSystemLibrary.HideAdBanner
	bool GetVolumeButtonsHandledBySystem(); // Function Engine.KismetSystemLibrary.GetVolumeButtonsHandledBySystem
	struct FRotator GetViewportRotationEditorOnly(struct UObject* WorldContextObject, int32_t ID); // Function Engine.KismetSystemLibrary.GetViewportRotationEditorOnly
	struct FVector GetViewportLocation(struct UObject* WorldContextObject, int32_t ID); // Function Engine.KismetSystemLibrary.GetViewportLocation
	struct FString GetUniqueDeviceId(); // Function Engine.KismetSystemLibrary.GetUniqueDeviceId
	struct FString GetSystemPath(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetSystemPath
	bool GetSupportedFullscreenResolutions(struct TArray<struct FIntPoint>& Resolutions); // Function Engine.KismetSystemLibrary.GetSupportedFullscreenResolutions
	struct TSoftObjectPtr<UObject> GetSoftObjectReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // Function Engine.KismetSystemLibrary.GetSoftObjectReferenceFromPrimaryAssetId
	struct TSoftClassPtr<UObject> GetSoftClassReferenceFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // Function Engine.KismetSystemLibrary.GetSoftClassReferenceFromPrimaryAssetId
	int32_t GetRenderingMaterialQualityLevel(); // Function Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel
	int32_t GetRenderingDetailMode(); // Function Engine.KismetSystemLibrary.GetRenderingDetailMode
	struct FString GetProjectSavedDirectory(); // Function Engine.KismetSystemLibrary.GetProjectSavedDirectory
	struct FString GetProjectDirectory(); // Function Engine.KismetSystemLibrary.GetProjectDirectory
	struct FString GetProjectContentDirectory(); // Function Engine.KismetSystemLibrary.GetProjectContentDirectory
	void GetPrimaryAssetsWithBundleState(struct TArray<struct FName>& RequiredBundles, struct TArray<struct FName>& ExcludedBundles, struct TArray<struct FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, struct TArray<struct FPrimaryAssetId>& OutPrimaryAssetIdList); // Function Engine.KismetSystemLibrary.GetPrimaryAssetsWithBundleState
	void GetPrimaryAssetIdList(struct FPrimaryAssetType PrimaryAssetType, struct TArray<struct FPrimaryAssetId>& OutPrimaryAssetIdList); // Function Engine.KismetSystemLibrary.GetPrimaryAssetIdList
	struct FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(struct TSoftObjectPtr<UObject> SoftObjectReference); // Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromSoftObjectReference
	struct FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(struct TSoftClassPtr<UObject> SoftClassReference); // Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromSoftClassReference
	struct FPrimaryAssetId GetPrimaryAssetIdFromObject(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromObject
	struct FPrimaryAssetId GetPrimaryAssetIdFromClass(UObject* Class); // Function Engine.KismetSystemLibrary.GetPrimaryAssetIdFromClass
	struct TArray<struct FString> GetPreferredLanguages(); // Function Engine.KismetSystemLibrary.GetPreferredLanguages
	struct FString GetPlatformUserName(); // Function Engine.KismetSystemLibrary.GetPlatformUserName
	struct FString GetPlatformUserDir(); // Function Engine.KismetSystemLibrary.GetPlatformUserDir
	struct FString GetPathName(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetPathName
	struct UObject* GetOuterObject(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetOuterObject
	struct FString GetObjectName(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetObjectName
	struct UObject* GetObjectFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // Function Engine.KismetSystemLibrary.GetObjectFromPrimaryAssetId
	int32_t GetMinYResolutionForUI(); // Function Engine.KismetSystemLibrary.GetMinYResolutionForUI
	int32_t GetMinYResolutionFor3DView(); // Function Engine.KismetSystemLibrary.GetMinYResolutionFor3DView
	struct FString GetLocalCurrencySymbol(); // Function Engine.KismetSystemLibrary.GetLocalCurrencySymbol
	struct FString GetLocalCurrencyCode(); // Function Engine.KismetSystemLibrary.GetLocalCurrencyCode
	float GetGameTimeInSeconds(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.GetGameTimeInSeconds
	struct FString GetGamepadControllerName(int32_t ControllerId); // Function Engine.KismetSystemLibrary.GetGamepadControllerName
	struct UTexture2D* GetGamepadButtonGlyph(struct FString ButtonKey, int32_t ControllerIndex); // Function Engine.KismetSystemLibrary.GetGamepadButtonGlyph
	struct FString GetGameName(); // Function Engine.KismetSystemLibrary.GetGameName
	struct FString GetGameBundleId(); // Function Engine.KismetSystemLibrary.GetGameBundleId
	int64_t GetFrameCount(); // Function Engine.KismetSystemLibrary.GetFrameCount
	struct FString GetEngineVersion(); // Function Engine.KismetSystemLibrary.GetEngineVersion
	struct FString GetDisplayName(struct UObject* Object); // Function Engine.KismetSystemLibrary.GetDisplayName
	struct FString GetDeviceId(); // Function Engine.KismetSystemLibrary.GetDeviceId
	struct FString GetDefaultLocale(); // Function Engine.KismetSystemLibrary.GetDefaultLocale
	struct FString GetDefaultLanguage(); // Function Engine.KismetSystemLibrary.GetDefaultLanguage
	bool GetCurrentBundleState(struct FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, struct TArray<struct FName>& OutBundles); // Function Engine.KismetSystemLibrary.GetCurrentBundleState
	bool GetConvenientWindowedResolutions(struct TArray<struct FIntPoint>& Resolutions); // Function Engine.KismetSystemLibrary.GetConvenientWindowedResolutions
	int32_t GetConsoleVariableIntValue(struct FString VariableName); // Function Engine.KismetSystemLibrary.GetConsoleVariableIntValue
	float GetConsoleVariableFloatValue(struct FString VariableName); // Function Engine.KismetSystemLibrary.GetConsoleVariableFloatValue
	bool GetConsoleVariableBoolValue(struct FString VariableName); // Function Engine.KismetSystemLibrary.GetConsoleVariableBoolValue
	void GetComponentBounds(struct USceneComponent* Component, struct FVector& Origin, struct FVector& BoxExtent, float& SphereRadius); // Function Engine.KismetSystemLibrary.GetComponentBounds
	struct FString GetCommandLine(); // Function Engine.KismetSystemLibrary.GetCommandLine
	UObject* GetClassFromPrimaryAssetId(struct FPrimaryAssetId PrimaryAssetId); // Function Engine.KismetSystemLibrary.GetClassFromPrimaryAssetId
	struct FString GetClassDisplayName(UObject* Class); // Function Engine.KismetSystemLibrary.GetClassDisplayName
	int32_t GetAdIDCount(); // Function Engine.KismetSystemLibrary.GetAdIDCount
	void GetActorListFromComponentList(struct TArray<struct UPrimitiveComponent*>& ComponentList, UObject* ActorClassFilter, struct TArray<struct AActor*>& OutActorList); // Function Engine.KismetSystemLibrary.GetActorListFromComponentList
	void GetActorBounds(struct AActor* Actor, struct FVector& Origin, struct FVector& BoxExtent); // Function Engine.KismetSystemLibrary.GetActorBounds
	void ForceCloseAdBanner(); // Function Engine.KismetSystemLibrary.ForceCloseAdBanner
	void FlushPersistentDebugLines(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.FlushPersistentDebugLines
	void FlushDebugStrings(struct UObject* WorldContextObject); // Function Engine.KismetSystemLibrary.FlushDebugStrings
	void ExecuteConsoleCommand(struct UObject* WorldContextObject, struct FString Command, struct APlayerController* SpecificPlayer); // Function Engine.KismetSystemLibrary.ExecuteConsoleCommand
	bool EqualEqual_SoftObjectReference(struct TSoftObjectPtr<UObject>& A, struct TSoftObjectPtr<UObject>& B); // Function Engine.KismetSystemLibrary.EqualEqual_SoftObjectReference
	bool EqualEqual_SoftClassReference(struct TSoftClassPtr<UObject>& A, struct TSoftClassPtr<UObject>& B); // Function Engine.KismetSystemLibrary.EqualEqual_SoftClassReference
	bool EqualEqual_PrimaryAssetType(struct FPrimaryAssetType A, struct FPrimaryAssetType B); // Function Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetType
	bool EqualEqual_PrimaryAssetId(struct FPrimaryAssetId A, struct FPrimaryAssetId B); // Function Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetId
	int32_t EndTransaction(); // Function Engine.KismetSystemLibrary.EndTransaction
	void DrawDebugString(struct UObject* WorldContextObject, struct FVector TextLocation, struct FString Text, struct AActor* TestBaseActor, struct FLinearColor TextColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugString
	void DrawDebugSphere(struct UObject* WorldContextObject, struct FVector Center, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugSphere
	void DrawDebugPoint(struct UObject* WorldContextObject, struct FVector position, float Size, struct FLinearColor PointColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugPoint
	void DrawDebugPlane(struct UObject* WorldContextObject, struct FPlane& PlaneCoordinates, struct FVector Location, float Size, struct FLinearColor PlaneColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugPlane
	void DrawDebugLine(struct UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, struct FLinearColor LineColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugLine
	void DrawDebugFrustum(struct UObject* WorldContextObject, struct FTransform& FrustumTransform, struct FLinearColor FrustumColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugFrustum
	void DrawDebugFloatHistoryTransform(struct UObject* WorldContextObject, struct FDebugFloatHistory& FloatHistory, struct FTransform& DrawTransform, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform
	void DrawDebugFloatHistoryLocation(struct UObject* WorldContextObject, struct FDebugFloatHistory& FloatHistory, struct FVector DrawLocation, struct FVector2D DrawSize, struct FLinearColor DrawColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation
	void DrawDebugCylinder(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, int32_t Segments, struct FLinearColor LineColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugCylinder
	void DrawDebugCoordinateSystem(struct UObject* WorldContextObject, struct FVector AxisLoc, struct FRotator AxisRot, float Scale, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugCoordinateSystem
	void DrawDebugConeInDegrees(struct UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugConeInDegrees
	void DrawDebugCone(struct UObject* WorldContextObject, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FLinearColor LineColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugCone
	void DrawDebugCircle(struct UObject* WorldContextObject, struct FVector Center, float Radius, int32_t NumSegments, struct FLinearColor LineColor, float Duration, float Thickness, struct FVector YAxis, struct FVector ZAxis, bool bDrawAxis); // Function Engine.KismetSystemLibrary.DrawDebugCircle
	void DrawDebugCapsule(struct UObject* WorldContextObject, struct FVector Center, float HalfHeight, float Radius, struct FRotator Rotation, struct FLinearColor LineColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugCapsule
	void DrawDebugCamera(struct ACameraActor* CameraActor, struct FLinearColor CameraColor, float Duration); // Function Engine.KismetSystemLibrary.DrawDebugCamera
	void DrawDebugBox(struct UObject* WorldContextObject, struct FVector Center, struct FVector Extent, struct FLinearColor LineColor, struct FRotator Rotation, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugBox
	void DrawDebugArrow(struct UObject* WorldContextObject, struct FVector LineStart, struct FVector LineEnd, float ArrowSize, struct FLinearColor LineColor, float Duration, float Thickness); // Function Engine.KismetSystemLibrary.DrawDebugArrow
	bool DoesImplementInterface(struct UObject* TestObject, UInterface* Interface); // Function Engine.KismetSystemLibrary.DoesImplementInterface
	void Delay(struct UObject* WorldContextObject, float Duration, struct FLatentActionInfo LatentInfo); // Function Engine.KismetSystemLibrary.Delay
	void CreateCopyForUndoBuffer(struct UObject* ObjectToModify); // Function Engine.KismetSystemLibrary.CreateCopyForUndoBuffer
	struct FString ConvertToRelativePath(struct FString Filename); // Function Engine.KismetSystemLibrary.ConvertToRelativePath
	struct FString ConvertToAbsolutePath(struct FString Filename); // Function Engine.KismetSystemLibrary.ConvertToAbsolutePath
	struct TSoftObjectPtr<UObject> Conv_SoftObjPathToSoftObjRef(struct FSoftObjectPath& SoftObjectPath); // Function Engine.KismetSystemLibrary.Conv_SoftObjPathToSoftObjRef
	struct FString Conv_SoftObjectReferenceToString(struct TSoftObjectPtr<UObject>& SoftObjectReference); // Function Engine.KismetSystemLibrary.Conv_SoftObjectReferenceToString
	struct UObject* Conv_SoftObjectReferenceToObject(struct TSoftObjectPtr<UObject>& SoftObject); // Function Engine.KismetSystemLibrary.Conv_SoftObjectReferenceToObject
	struct FString Conv_SoftClassReferenceToString(struct TSoftClassPtr<UObject>& SoftClassReference); // Function Engine.KismetSystemLibrary.Conv_SoftClassReferenceToString
	UObject* Conv_SoftClassReferenceToClass(struct TSoftClassPtr<UObject>& SoftClass); // Function Engine.KismetSystemLibrary.Conv_SoftClassReferenceToClass
	struct TSoftClassPtr<UObject> Conv_SoftClassPathToSoftClassRef(struct FSoftClassPath& SoftClassPath); // Function Engine.KismetSystemLibrary.Conv_SoftClassPathToSoftClassRef
	struct FString Conv_PrimaryAssetTypeToString(struct FPrimaryAssetType PrimaryAssetType); // Function Engine.KismetSystemLibrary.Conv_PrimaryAssetTypeToString
	struct FString Conv_PrimaryAssetIdToString(struct FPrimaryAssetId PrimaryAssetId); // Function Engine.KismetSystemLibrary.Conv_PrimaryAssetIdToString
	struct TSoftObjectPtr<UObject> Conv_ObjectToSoftObjectReference(struct UObject* Object); // Function Engine.KismetSystemLibrary.Conv_ObjectToSoftObjectReference
	struct UObject* Conv_InterfaceToObject(struct TScriptInterface<IInterface>& Interface); // Function Engine.KismetSystemLibrary.Conv_InterfaceToObject
	struct TSoftClassPtr<UObject> Conv_ClassToSoftClassReference(UObject*& Class); // Function Engine.KismetSystemLibrary.Conv_ClassToSoftClassReference
	void ControlScreensaver(bool bAllowScreenSaver); // Function Engine.KismetSystemLibrary.ControlScreensaver
	bool ComponentOverlapComponents(struct UPrimitiveComponent* Component, struct FTransform& ComponentTransform, struct TArray<char EObjectTypeQuery>& ObjectTypes, UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // Function Engine.KismetSystemLibrary.ComponentOverlapComponents
	bool ComponentOverlapActors(struct UPrimitiveComponent* Component, struct FTransform& ComponentTransform, struct TArray<char EObjectTypeQuery>& ObjectTypes, UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // Function Engine.KismetSystemLibrary.ComponentOverlapActors
	void CollectGarbage(); // Function Engine.KismetSystemLibrary.CollectGarbage
	bool CapsuleTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects
	bool CapsuleTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile
	bool CapsuleTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceSingle
	bool CapsuleTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects
	bool CapsuleTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile
	bool CapsuleTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, float Radius, float HalfHeight, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceMulti
	bool CapsuleOverlapComponents(struct UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, struct TArray<char EObjectTypeQuery>& ObjectTypes, UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // Function Engine.KismetSystemLibrary.CapsuleOverlapComponents
	bool CapsuleOverlapActors(struct UObject* WorldContextObject, struct FVector CapsulePos, float Radius, float HalfHeight, struct TArray<char EObjectTypeQuery>& ObjectTypes, UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // Function Engine.KismetSystemLibrary.CapsuleOverlapActors
	bool CanLaunchURL(struct FString URL); // Function Engine.KismetSystemLibrary.CanLaunchURL
	void CancelTransaction(int32_t Index); // Function Engine.KismetSystemLibrary.CancelTransaction
	void BreakSoftObjectPath(struct FSoftObjectPath InSoftObjectPath, struct FString& PathString); // Function Engine.KismetSystemLibrary.BreakSoftObjectPath
	void BreakSoftClassPath(struct FSoftClassPath InSoftClassPath, struct FString& PathString); // Function Engine.KismetSystemLibrary.BreakSoftClassPath
	bool BoxTraceSingleForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects
	bool BoxTraceSingleByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.BoxTraceSingleByProfile
	bool BoxTraceSingle(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct FHitResult& OutHit, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.BoxTraceSingle
	bool BoxTraceMultiForObjects(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects
	bool BoxTraceMultiByProfile(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, struct FName ProfileName, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.BoxTraceMultiByProfile
	bool BoxTraceMulti(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct FVector HalfSize, struct FRotator Orientation, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool bIgnoreSelf, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime); // Function Engine.KismetSystemLibrary.BoxTraceMulti
	bool BoxOverlapComponents(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector Extent, struct TArray<char EObjectTypeQuery>& ObjectTypes, UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // Function Engine.KismetSystemLibrary.BoxOverlapComponents
	bool BoxOverlapActors(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, struct TArray<char EObjectTypeQuery>& ObjectTypes, UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // Function Engine.KismetSystemLibrary.BoxOverlapActors
	int32_t BeginTransaction(struct FString Context, struct FText Description, struct UObject* PrimaryObject); // Function Engine.KismetSystemLibrary.BeginTransaction
	struct FDebugFloatHistory AddFloatHistorySample(float Value, struct FDebugFloatHistory& FloatHistory); // Function Engine.KismetSystemLibrary.AddFloatHistorySample
}; 



// Class Engine.MaterialExpressionShadingPathSwitch
// Size: 0x90(Inherited: 0x40) 
struct UMaterialExpressionShadingPathSwitch : public UMaterialExpression
{
	struct FExpressionInput Default;  // 0x40(0x14)
	struct FExpressionInput Inputs[3];  // 0x54(0x3C)

}; 



// Class Engine.AnimNotify
// Size: 0x38(Inherited: 0x28) 
struct UAnimNotify : public UObject
{
	char pad_40[16];  // 0x28(0x10)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotify.Received_Notify
	struct FString GetNotifyName(); // Function Engine.AnimNotify.GetNotifyName
}; 



// Class Engine.ParticleSystemReplay
// Size: 0x40(Inherited: 0x28) 
struct UParticleSystemReplay : public UObject
{
	int32_t ClipIDNumber;  // 0x28(0x4)
	char pad_44[20];  // 0x2C(0x14)

}; 



// Class Engine.PrimitiveComponent
// Size: 0x450(Inherited: 0x200) 
struct UPrimitiveComponent : public USceneComponent
{
	float MinDrawDistance;  // 0x200(0x4)
	char pad_516_1 : 7;  // 0x204(0x1)
	bool UseHLODMinDrawDistance : 1;  // 0x204(0x1)
	char pad_517[3];  // 0x205(0x3)
	float LDMaxDrawDistance;  // 0x208(0x4)
	float CachedMaxDrawDistance;  // 0x20C(0x4)
	char ESceneDepthPriorityGroup DepthPriorityGroup;  // 0x210(0x1)
	char ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup;  // 0x211(0x1)
	char EIndirectLightingCacheQuality IndirectLightingCacheQuality;  // 0x212(0x1)
	uint8_t  LightmapType;  // 0x213(0x1)
	char bUseMaxLODAsImposter : 1;  // 0x214(0x1)
	char bBatchImpostersAsInstances : 1;  // 0x214(0x1)
	char bNeverDistanceCull : 1;  // 0x214(0x1)
	char pad_532_1 : 4;  // 0x214(0x1)
	char bAlwaysCreatePhysicsState : 1;  // 0x214(0x1)
	char bGenerateOverlapEvents : 1;  // 0x215(0x1)
	char bMultiBodyOverlap : 1;  // 0x215(0x1)
	char bTraceComplexOnMove : 1;  // 0x215(0x1)
	char bReturnMaterialOnMove : 1;  // 0x215(0x1)
	char bUseViewOwnerDepthPriorityGroup : 1;  // 0x215(0x1)
	char bAllowCullDistanceVolume : 1;  // 0x215(0x1)
	char bHasMotionBlurVelocityMeshes : 1;  // 0x215(0x1)
	char bVisibleInReflectionCaptures : 1;  // 0x215(0x1)
	char bVisibleInRealTimeSkyCaptures : 1;  // 0x216(0x1)
	char bVisibleInRayTracing : 1;  // 0x216(0x1)
	char bRenderInMainPass : 1;  // 0x216(0x1)
	char bRenderInDepthPass : 1;  // 0x216(0x1)
	char bReceivesDecals : 1;  // 0x216(0x1)
	char bOwnerNoSee : 1;  // 0x216(0x1)
	char bOnlyOwnerSee : 1;  // 0x216(0x1)
	char bTreatAsBackgroundForOcclusion : 1;  // 0x216(0x1)
	char bUseAsOccluder : 1;  // 0x217(0x1)
	char bSelectable : 1;  // 0x217(0x1)
	char bForceMipStreaming : 1;  // 0x217(0x1)
	char bHasPerInstanceHitProxies : 1;  // 0x217(0x1)
	char CastShadow : 1;  // 0x217(0x1)
	char bAffectDynamicIndirectLighting : 1;  // 0x217(0x1)
	char bAffectDistanceFieldLighting : 1;  // 0x217(0x1)
	char bCastDynamicShadow : 1;  // 0x217(0x1)
	char bCastStaticShadow : 1;  // 0x218(0x1)
	char bCastVolumetricTranslucentShadow : 1;  // 0x218(0x1)
	char bCastContactShadow : 1;  // 0x218(0x1)
	char bSelfShadowOnly : 1;  // 0x218(0x1)
	char bCastFarShadow : 1;  // 0x218(0x1)
	char bCastInsetShadow : 1;  // 0x218(0x1)
	char bCastCinematicShadow : 1;  // 0x218(0x1)
	char bCastHiddenShadow : 1;  // 0x218(0x1)
	char bCastShadowAsTwoSided : 1;  // 0x219(0x1)
	char bLightAsIfStatic : 1;  // 0x219(0x1)
	char bLightAttachmentsAsGroup : 1;  // 0x219(0x1)
	char bExcludeFromLightAttachmentGroup : 1;  // 0x219(0x1)
	char bReceiveMobileCSMShadows : 1;  // 0x219(0x1)
	char bSingleSampleShadowFromStationaryLights : 1;  // 0x219(0x1)
	char bIgnoreRadialImpulse : 1;  // 0x219(0x1)
	char bIgnoreRadialForce : 1;  // 0x219(0x1)
	char bApplyImpulseOnDamage : 1;  // 0x21A(0x1)
	char bReplicatePhysicsToAutonomousProxy : 1;  // 0x21A(0x1)
	char bFillCollisionUnderneathForNavmesh : 1;  // 0x21A(0x1)
	char AlwaysLoadOnClient : 1;  // 0x21A(0x1)
	char AlwaysLoadOnServer : 1;  // 0x21A(0x1)
	char bUseEditorCompositing : 1;  // 0x21A(0x1)
	char bRenderCustomDepth : 1;  // 0x21A(0x1)
	char bVisibleInSceneCaptureOnly : 1;  // 0x21A(0x1)
	char bHiddenInSceneCapture : 1;  // 0x21B(0x1)
	char pad_539_1 : 7;  // 0x21B(0x1)
	char EHasCustomNavigableGeometry bHasCustomNavigableGeometry;  // 0x21C(0x1)
	char pad_541[1];  // 0x21D(0x1)
	char ECanBeCharacterBase CanCharacterStepUpOn;  // 0x21E(0x1)
	struct FLightingChannels LightingChannels;  // 0x21F(0x1)
	uint8_t  CustomDepthStencilWriteMask;  // 0x220(0x1)
	char pad_545[3];  // 0x221(0x3)
	int32_t CustomDepthStencilValue;  // 0x224(0x4)
	struct FCustomPrimitiveData CustomPrimitiveData;  // 0x228(0x10)
	struct FCustomPrimitiveData CustomPrimitiveDataInternal;  // 0x238(0x10)
	char pad_584[8];  // 0x248(0x8)
	int32_t TranslucencySortPriority;  // 0x250(0x4)
	float TranslucencySortDistanceOffset;  // 0x254(0x4)
	int32_t VisibilityId;  // 0x258(0x4)
	char pad_604[4];  // 0x25C(0x4)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures;  // 0x260(0x10)
	int8_t VirtualTextureLodBias;  // 0x270(0x1)
	int8_t VirtualTextureCullMips;  // 0x271(0x1)
	int8_t VirtualTextureMinCoverage;  // 0x272(0x1)
	uint8_t  VirtualTextureRenderPassType;  // 0x273(0x1)
	char pad_628[4];  // 0x274(0x4)
	float LpvBiasMultiplier;  // 0x278(0x4)
	char pad_636[8];  // 0x27C(0x8)
	float BoundsScale;  // 0x284(0x4)
	char pad_648[16];  // 0x288(0x10)
	struct TArray<struct AActor*> MoveIgnoreActors;  // 0x298(0x10)
	struct TArray<struct UPrimitiveComponent*> MoveIgnoreComponents;  // 0x2A8(0x10)
	char pad_696[16];  // 0x2B8(0x10)
	struct FBodyInstance BodyInstance;  // 0x2C8(0x158)
	struct FMulticastSparseDelegate OnComponentHit;  // 0x420(0x1)
	struct FMulticastSparseDelegate OnComponentBeginOverlap;  // 0x421(0x1)
	struct FMulticastSparseDelegate OnComponentEndOverlap;  // 0x422(0x1)
	struct FMulticastSparseDelegate OnComponentWake;  // 0x423(0x1)
	struct FMulticastSparseDelegate OnComponentSleep;  // 0x424(0x1)
	char pad_1061[1];  // 0x425(0x1)
	struct FMulticastSparseDelegate OnBeginCursorOver;  // 0x426(0x1)
	struct FMulticastSparseDelegate OnEndCursorOver;  // 0x427(0x1)
	struct FMulticastSparseDelegate OnClicked;  // 0x428(0x1)
	struct FMulticastSparseDelegate OnReleased;  // 0x429(0x1)
	struct FMulticastSparseDelegate OnInputTouchBegin;  // 0x42A(0x1)
	struct FMulticastSparseDelegate OnInputTouchEnd;  // 0x42B(0x1)
	struct FMulticastSparseDelegate OnInputTouchEnter;  // 0x42C(0x1)
	struct FMulticastSparseDelegate OnInputTouchLeave;  // 0x42D(0x1)
	char pad_1070[26];  // 0x42E(0x1A)
	struct UPrimitiveComponent* LODParentPrimitive;  // 0x448(0x8)

	bool WasRecentlyRendered(float Tolerance); // Function Engine.PrimitiveComponent.WasRecentlyRendered
	void WakeRigidBody(struct FName BoneName); // Function Engine.PrimitiveComponent.WakeRigidBody
	void WakeAllRigidBodies(); // Function Engine.PrimitiveComponent.WakeAllRigidBodies
	void SetWalkableSlopeOverride(struct FWalkableSlopeOverride& NewOverride); // Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
	void SetVisibleInSceneCaptureOnly(bool bValue); // Function Engine.PrimitiveComponent.SetVisibleInSceneCaptureOnly
	void SetUseCCD(bool InUseCCD, struct FName BoneName); // Function Engine.PrimitiveComponent.SetUseCCD
	void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority); // Function Engine.PrimitiveComponent.SetTranslucentSortPriority
	void SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset); // Function Engine.PrimitiveComponent.SetTranslucencySortDistanceOffset
	void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights); // Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
	void SetSimulatePhysics(bool bSimulate); // Function Engine.PrimitiveComponent.SetSimulatePhysics
	void SetRenderInMainPass(bool bValue); // Function Engine.PrimitiveComponent.SetRenderInMainPass
	void SetRenderCustomDepth(bool bValue); // Function Engine.PrimitiveComponent.SetRenderCustomDepth
	void SetReceivesDecals(bool bNewReceivesDecals); // Function Engine.PrimitiveComponent.SetReceivesDecals
	void SetPhysMaterialOverride(struct UPhysicalMaterial* NewPhysMaterial); // Function Engine.PrimitiveComponent.SetPhysMaterialOverride
	void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
	void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
	void SetPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
	void SetPhysicsAngularVelocityInRadians(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
	void SetPhysicsAngularVelocityInDegrees(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
	void SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
	void SetOwnerNoSee(bool bNewOwnerNoSee); // Function Engine.PrimitiveComponent.SetOwnerNoSee
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee); // Function Engine.PrimitiveComponent.SetOnlyOwnerSee
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision); // Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
	void SetMinDrawDistance(float NewMinDrawDistance); // Function Engine.PrimitiveComponent.SetMinDrawDistance
	void SetMaterialByName(struct FName MaterialSlotName, struct UMaterialInterface* Material); // Function Engine.PrimitiveComponent.SetMaterialByName
	void SetMaterial(int32_t ElementIndex, struct UMaterialInterface* Material); // Function Engine.PrimitiveComponent.SetMaterial
	void SetMassScale(struct FName BoneName, float InMassScale); // Function Engine.PrimitiveComponent.SetMassScale
	void SetMassOverrideInKg(struct FName BoneName, float MassInKg, bool bOverrideMass); // Function Engine.PrimitiveComponent.SetMassOverrideInKg
	void SetLinearDamping(float InDamping); // Function Engine.PrimitiveComponent.SetLinearDamping
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2); // Function Engine.PrimitiveComponent.SetLightingChannels
	void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup); // Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup
	void SetHiddenInSceneCapture(bool bValue); // Function Engine.PrimitiveComponent.SetHiddenInSceneCapture
	void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents); // Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
	void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup); // Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup
	void SetEnableGravity(bool bGravityEnabled); // Function Engine.PrimitiveComponent.SetEnableGravity
	void SetDefaultCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value); // Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector4
	void SetDefaultCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value); // Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector3
	void SetDefaultCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value); // Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector2
	void SetDefaultCustomPrimitiveDataFloat(int32_t DataIndex, float Value); // Function Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataFloat
	void SetCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4
	void SetCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3
	void SetCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2
	void SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat
	void SetCustomDepthStencilWriteMask(uint8_t  WriteMaskBit); // Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
	void SetCustomDepthStencilValue(int32_t Value); // Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
	void SetCullDistance(float NewCullDistance); // Function Engine.PrimitiveComponent.SetCullDistance
	void SetConstraintMode(char EDOFMode ConstraintMode); // Function Engine.PrimitiveComponent.SetConstraintMode
	void SetCollisionResponseToChannel(char ECollisionChannel Channel, char ECollisionResponse NewResponse); // Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
	void SetCollisionResponseToAllChannels(char ECollisionResponse NewResponse); // Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
	void SetCollisionProfileName(struct FName InCollisionProfileName, bool bUpdateOverlaps); // Function Engine.PrimitiveComponent.SetCollisionProfileName
	void SetCollisionObjectType(char ECollisionChannel Channel); // Function Engine.PrimitiveComponent.SetCollisionObjectType
	void SetCollisionEnabled(char ECollisionEnabled NewType); // Function Engine.PrimitiveComponent.SetCollisionEnabled
	void SetCenterOfMass(struct FVector CenterOfMassOffset, struct FName BoneName); // Function Engine.PrimitiveComponent.SetCenterOfMass
	void SetCastShadow(bool NewCastShadow); // Function Engine.PrimitiveComponent.SetCastShadow
	void SetCastInsetShadow(bool bInCastInsetShadow); // Function Engine.PrimitiveComponent.SetCastInsetShadow
	void SetCastHiddenShadow(bool NewCastHiddenShadow); // Function Engine.PrimitiveComponent.SetCastHiddenShadow
	void SetBoundsScale(float NewBoundsScale); // Function Engine.PrimitiveComponent.SetBoundsScale
	void SetAngularDamping(float InDamping); // Function Engine.PrimitiveComponent.SetAngularDamping
	void SetAllUseCCD(bool InUseCCD); // Function Engine.PrimitiveComponent.SetAllUseCCD
	void SetAllPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
	void SetAllPhysicsAngularVelocityInRadians(struct FVector& NewAngVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
	void SetAllPhysicsAngularVelocityInDegrees(struct FVector& NewAngVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
	void SetAllMassScale(float InMassScale); // Function Engine.PrimitiveComponent.SetAllMassScale
	struct FVector ScaleByMomentOfInertia(struct FVector InputVector, struct FName BoneName); // Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
	void PutRigidBodyToSleep(struct FName BoneName); // Function Engine.PrimitiveComponent.PutRigidBodyToSleep
	bool K2_SphereTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // Function Engine.PrimitiveComponent.K2_SphereTraceComponent
	bool K2_SphereOverlapComponent(struct FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
	bool K2_LineTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // Function Engine.PrimitiveComponent.K2_LineTraceComponent
	bool K2_IsQueryCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
	bool K2_IsPhysicsCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
	bool K2_IsCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
	bool K2_BoxOverlapComponent(struct FVector InBoxCentre, struct FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
	bool IsOverlappingComponent(struct UPrimitiveComponent* OtherComp); // Function Engine.PrimitiveComponent.IsOverlappingComponent
	bool IsOverlappingActor(struct AActor* Other); // Function Engine.PrimitiveComponent.IsOverlappingActor
	bool IsGravityEnabled(); // Function Engine.PrimitiveComponent.IsGravityEnabled
	bool IsAnyRigidBodyAwake(); // Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
	void IgnoreComponentWhenMoving(struct UPrimitiveComponent* Component, bool bShouldIgnore); // Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
	void IgnoreActorWhenMoving(struct AActor* Actor, bool bShouldIgnore); // Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
	struct FWalkableSlopeOverride GetWalkableSlopeOverride(); // Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
	struct FVector GetPhysicsLinearVelocityAtPoint(struct FVector Point, struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
	struct FVector GetPhysicsLinearVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
	struct FVector GetPhysicsAngularVelocityInRadians(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
	struct FVector GetPhysicsAngularVelocityInDegrees(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
	struct FVector GetPhysicsAngularVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*>& OutOverlappingComponents); // Function Engine.PrimitiveComponent.GetOverlappingComponents
	void GetOverlappingActors(struct TArray<struct AActor*>& OverlappingActors, AActor* ClassFilter); // Function Engine.PrimitiveComponent.GetOverlappingActors
	int32_t GetNumMaterials(); // Function Engine.PrimitiveComponent.GetNumMaterials
	struct UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t& SectionIndex); // Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
	struct UMaterialInterface* GetMaterial(int32_t ElementIndex); // Function Engine.PrimitiveComponent.GetMaterial
	float GetMassScale(struct FName BoneName); // Function Engine.PrimitiveComponent.GetMassScale
	float GetMass(); // Function Engine.PrimitiveComponent.GetMass
	float GetLinearDamping(); // Function Engine.PrimitiveComponent.GetLinearDamping
	struct FVector GetInertiaTensor(struct FName BoneName); // Function Engine.PrimitiveComponent.GetInertiaTensor
	bool GetGenerateOverlapEvents(); // Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
	char ECollisionResponse GetCollisionResponseToChannel(char ECollisionChannel Channel); // Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
	struct FName GetCollisionProfileName(); // Function Engine.PrimitiveComponent.GetCollisionProfileName
	char ECollisionChannel GetCollisionObjectType(); // Function Engine.PrimitiveComponent.GetCollisionObjectType
	char ECollisionEnabled GetCollisionEnabled(); // Function Engine.PrimitiveComponent.GetCollisionEnabled
	float GetClosestPointOnCollision(struct FVector& Point, struct FVector& OutPointOnBody, struct FName BoneName); // Function Engine.PrimitiveComponent.GetClosestPointOnCollision
	struct FVector GetCenterOfMass(struct FName BoneName); // Function Engine.PrimitiveComponent.GetCenterOfMass
	float GetAngularDamping(); // Function Engine.PrimitiveComponent.GetAngularDamping
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, struct UMaterialInterface* SourceMaterial, struct FName OptionalName); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, struct UMaterialInterface* Parent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
	struct TArray<struct UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
	struct TArray<struct AActor*> CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
	void ClearMoveIgnoreComponents(); // Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
	void ClearMoveIgnoreActors(); // Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
	bool CanCharacterStepUp(struct APawn* Pawn); // Function Engine.PrimitiveComponent.CanCharacterStepUp
	void AddTorqueInRadians(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorqueInRadians
	void AddTorqueInDegrees(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorqueInDegrees
	void AddTorque(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorque
	void AddRadialImpulse(struct FVector Origin, float Radius, float Strength, char ERadialImpulseFalloff Falloff, bool bVelChange); // Function Engine.PrimitiveComponent.AddRadialImpulse
	void AddRadialForce(struct FVector Origin, float Radius, float Strength, char ERadialImpulseFalloff Falloff, bool bAccelChange); // Function Engine.PrimitiveComponent.AddRadialForce
	void AddImpulseAtLocation(struct FVector Impulse, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddImpulseAtLocation
	void AddImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddImpulse
	void AddForceAtLocationLocal(struct FVector force, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal
	void AddForceAtLocation(struct FVector force, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocation
	void AddForce(struct FVector force, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddForce
	void AddAngularImpulseInRadians(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
	void AddAngularImpulseInDegrees(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
	void AddAngularImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulse
}; 



// Class Engine.LightComponent
// Size: 0x330(Inherited: 0x230) 
struct ULightComponent : public ULightComponentBase
{
	float Temperature;  // 0x228(0x4)
	float MaxDrawDistance;  // 0x22C(0x4)
	float MaxDistanceFadeRange;  // 0x230(0x4)
	char bUseTemperature : 1;  // 0x234(0x1)
	int32_t ShadowMapChannel;  // 0x238(0x4)
	float MinRoughness;  // 0x240(0x4)
	float SpecularScale;  // 0x244(0x4)
	float ShadowResolutionScale;  // 0x248(0x4)
	float ShadowBias;  // 0x24C(0x4)
	float ShadowSlopeBias;  // 0x250(0x4)
	float ShadowSharpen;  // 0x254(0x4)
	float ContactShadowLength;  // 0x258(0x4)
	char ContactShadowLengthInWS : 1;  // 0x25C(0x1)
	char InverseSquaredFalloff : 1;  // 0x25C(0x1)
	char CastTranslucentShadows : 1;  // 0x25C(0x1)
	char bCastShadowsFromCinematicObjectsOnly : 1;  // 0x25C(0x1)
	char bAffectDynamicIndirectLighting : 1;  // 0x25C(0x1)
	char bForceCachedShadowsForMovablePrimitives : 1;  // 0x25C(0x1)
	char pad_604_1 : 1;  // 0x25C(0x1)
	char pad_605[4];  // 0x25D(0x4)
	struct FLightingChannels LightingChannels;  // 0x260(0x1)
	char pad_609[7];  // 0x261(0x7)
	struct UMaterialInterface* LightFunctionMaterial;  // 0x268(0x8)
	struct FVector LightFunctionScale;  // 0x270(0xC)
	char pad_636[4];  // 0x27C(0x4)
	struct UTextureLightProfile* IESTexture;  // 0x280(0x8)
	char bUseIESBrightness : 1;  // 0x288(0x1)
	char pad_648_1 : 7;  // 0x288(0x1)
	char pad_649[4];  // 0x289(0x4)
	float IESBrightnessScale;  // 0x28C(0x4)
	float LightFunctionFadeDistance;  // 0x290(0x4)
	float DisabledBrightness;  // 0x294(0x4)
	char bEnableLightShaftBloom : 1;  // 0x298(0x1)
	char pad_664_1 : 7;  // 0x298(0x1)
	char pad_665[4];  // 0x299(0x4)
	float BloomScale;  // 0x29C(0x4)
	float BloomThreshold;  // 0x2A0(0x4)
	float BloomMaxBrightness;  // 0x2A4(0x4)
	struct FColor BloomTint;  // 0x2A8(0x4)
	char pad_684_1 : 7;  // 0x2AC(0x1)
	bool bUseRayTracedDistanceFieldShadows : 1;  // 0x2AC(0x1)
	char pad_685[3];  // 0x2AD(0x3)
	float RayStartOffsetDepthScale;  // 0x2B0(0x4)
	char pad_692[124];  // 0x2B4(0x7C)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.LightComponent.SetVolumetricScatteringIntensity
	void SetUseTemperature(bool bNewValue); // Function Engine.LightComponent.SetUseTemperature
	void SetUseIESBrightness(bool bNewValue); // Function Engine.LightComponent.SetUseIESBrightness
	void SetTransmission(bool bNewValue); // Function Engine.LightComponent.SetTransmission
	void SetTemperature(float NewTemperature); // Function Engine.LightComponent.SetTemperature
	void SetSpecularScale(float NewValue); // Function Engine.LightComponent.SetSpecularScale
	void SetShadowSlopeBias(float NewValue); // Function Engine.LightComponent.SetShadowSlopeBias
	void SetShadowBias(float NewValue); // Function Engine.LightComponent.SetShadowBias
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2); // Function Engine.LightComponent.SetLightingChannels
	void SetLightFunctionScale(struct FVector NewLightFunctionScale); // Function Engine.LightComponent.SetLightFunctionScale
	void SetLightFunctionMaterial(struct UMaterialInterface* NewLightFunctionMaterial); // Function Engine.LightComponent.SetLightFunctionMaterial
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // Function Engine.LightComponent.SetLightFunctionFadeDistance
	void SetLightFunctionDisabledBrightness(float NewValue); // Function Engine.LightComponent.SetLightFunctionDisabledBrightness
	void SetLightColor(struct FLinearColor NewLightColor, bool bSRGB); // Function Engine.LightComponent.SetLightColor
	void SetIntensity(float NewIntensity); // Function Engine.LightComponent.SetIntensity
	void SetIndirectLightingIntensity(float NewIntensity); // Function Engine.LightComponent.SetIndirectLightingIntensity
	void SetIESTexture(struct UTextureLightProfile* NewValue); // Function Engine.LightComponent.SetIESTexture
	void SetIESBrightnessScale(float NewValue); // Function Engine.LightComponent.SetIESBrightnessScale
	void SetForceCachedShadowsForMovablePrimitives(bool bNewValue); // Function Engine.LightComponent.SetForceCachedShadowsForMovablePrimitives
	void SetEnableLightShaftBloom(bool bNewValue); // Function Engine.LightComponent.SetEnableLightShaftBloom
	void SetBloomTint(struct FColor NewValue); // Function Engine.LightComponent.SetBloomTint
	void SetBloomThreshold(float NewValue); // Function Engine.LightComponent.SetBloomThreshold
	void SetBloomScale(float NewValue); // Function Engine.LightComponent.SetBloomScale
	void SetBloomMaxBrightness(float NewValue); // Function Engine.LightComponent.SetBloomMaxBrightness
	void SetAffectTranslucentLighting(bool bNewValue); // Function Engine.LightComponent.SetAffectTranslucentLighting
	void SetAffectDynamicIndirectLighting(bool bNewValue); // Function Engine.LightComponent.SetAffectDynamicIndirectLighting
}; 



// Class Engine.MaterialExpressionArcsine
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionArcsine : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.BookMark2D
// Size: 0x38(Inherited: 0x28) 
struct UBookMark2D : public UBookmarkBase
{
	float Zoom2D;  // 0x28(0x4)
	struct FIntPoint Location;  // 0x2C(0x8)
	char pad_52[4];  // 0x34(0x4)

}; 



// Class Engine.InterpTrackSound
// Size: 0xA8(Inherited: 0x90) 
struct UInterpTrackSound : public UInterpTrackVectorBase
{
	struct TArray<struct FSoundTrackKey> Sounds;  // 0x90(0x10)
	char bPlayOnReverse : 1;  // 0xA0(0x1)
	char bContinueSoundOnMatineeEnd : 1;  // 0xA0(0x1)
	char bSuppressSubtitles : 1;  // 0xA0(0x1)
	char bTreatAsDialogue : 1;  // 0xA0(0x1)
	char bAttach : 1;  // 0xA0(0x1)
	char pad_160_1 : 3;  // 0xA0(0x1)
	char pad_161[8];  // 0xA1(0x8)

}; 



// Class Engine.ParticleModuleAttractorBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleAttractorBase : public UParticleModule
{

}; 



// Class Engine.MaterialExpressionTextureSampleParameter
// Size: 0x80(Inherited: 0x60) 
struct UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
	struct FName ParameterName;  // 0x60(0x8)
	struct FGuid ExpressionGUID;  // 0x68(0x10)
	struct FName Group;  // 0x78(0x8)

}; 



// Class Engine.StereoLayerShapeCubemap
// Size: 0x28(Inherited: 0x28) 
struct UStereoLayerShapeCubemap : public UStereoLayerShape
{

}; 



// Class Engine.InterpTrackVectorMaterialParam
// Size: 0xA8(Inherited: 0x90) 
struct UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
	struct TArray<struct UMaterialInterface*> TargetMaterials;  // 0x90(0x10)
	struct FName ParamName;  // 0xA0(0x8)

}; 



// Class Engine.ActorComponent
// Size: 0xB0(Inherited: 0x28) 
struct UActorComponent : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FActorComponentTickFunction PrimaryComponentTick;  // 0x30(0x30)
	struct TArray<struct FName> ComponentTags;  // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x70(0x10)
	char pad_128[4];  // 0x80(0x4)
	int32_t UCSSerializationIndex;  // 0x84(0x4)
	char pad_136_1 : 3;  // 0x88(0x1)
	char bNetAddressable : 1;  // 0x88(0x1)
	char bReplicates : 1;  // 0x88(0x1)
	char pad_136_2 : 3;  // 0x88(0x1)
	char pad_137_1 : 7;  // 0x89(0x1)
	char bAutoActivate : 1;  // 0x89(0x1)
	char bIsActive : 1;  // 0x8A(0x1)
	char bEditableWhenInherited : 1;  // 0x8A(0x1)
	char pad_138_1 : 1;  // 0x8A(0x1)
	char bCanEverAffectNavigation : 1;  // 0x8A(0x1)
	char pad_138_2 : 1;  // 0x8A(0x1)
	char bIsEditorOnly : 1;  // 0x8A(0x1)
	char pad_138_3 : 2;  // 0x8A(0x1)
	char pad_139[2];  // 0x8B(0x2)
	uint8_t  CreationMethod;  // 0x8C(0x1)
	struct FMulticastSparseDelegate OnComponentActivated;  // 0x8D(0x1)
	struct FMulticastSparseDelegate OnComponentDeactivated;  // 0x8E(0x1)
	char pad_143[1];  // 0x8F(0x1)
	struct TArray<struct FSimpleMemberReference> UCSModifiedProperties;  // 0x90(0x10)
	char pad_160[16];  // 0xA0(0x10)

	void ToggleActive(); // Function Engine.ActorComponent.ToggleActive
	void SetTickGroup(char ETickingGroup NewTickGroup); // Function Engine.ActorComponent.SetTickGroup
	void SetTickableWhenPaused(bool bTickableWhenPaused); // Function Engine.ActorComponent.SetTickableWhenPaused
	void SetIsReplicated(bool ShouldReplicate); // Function Engine.ActorComponent.SetIsReplicated
	void SetComponentTickIntervalAndCooldown(float TickInterval); // Function Engine.ActorComponent.SetComponentTickIntervalAndCooldown
	void SetComponentTickInterval(float TickInterval); // Function Engine.ActorComponent.SetComponentTickInterval
	void SetComponentTickEnabled(bool bEnabled); // Function Engine.ActorComponent.SetComponentTickEnabled
	void SetAutoActivate(bool bNewAutoActivate); // Function Engine.ActorComponent.SetAutoActivate
	void SetActive(bool bNewActive, bool bReset); // Function Engine.ActorComponent.SetActive
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.ActorComponent.RemoveTickPrerequisiteActor
	void ReceiveTick(float DeltaSeconds); // Function Engine.ActorComponent.ReceiveTick
	void ReceiveEndPlay(char EEndPlayReason EndPlayReason); // Function Engine.ActorComponent.ReceiveEndPlay
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive
	void K2_DestroyComponent(struct UObject* Object); // Function Engine.ActorComponent.K2_DestroyComponent
	bool IsComponentTickEnabled(); // Function Engine.ActorComponent.IsComponentTickEnabled
	bool IsBeingDestroyed(); // Function Engine.ActorComponent.IsBeingDestroyed
	bool IsActive(); // Function Engine.ActorComponent.IsActive
	struct AActor* GetOwner(); // Function Engine.ActorComponent.GetOwner
	float GetComponentTickInterval(); // Function Engine.ActorComponent.GetComponentTickInterval
	void Deactivate(); // Function Engine.ActorComponent.Deactivate
	bool ComponentHasTag(struct FName Tag); // Function Engine.ActorComponent.ComponentHasTag
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.ActorComponent.AddTickPrerequisiteComponent
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.ActorComponent.AddTickPrerequisiteActor
	void Activate(bool bReset); // Function Engine.ActorComponent.Activate
}; 



// Class Engine.AnimStateMachineTypes
// Size: 0x28(Inherited: 0x28) 
struct UAnimStateMachineTypes : public UObject
{

}; 



// Class Engine.FontImportOptions
// Size: 0xD8(Inherited: 0x28) 
struct UFontImportOptions : public UObject
{
	struct FFontImportOptionsData Data;  // 0x28(0xB0)

}; 



// Class Engine.AnimInstance
// Size: 0x2C0(Inherited: 0x28) 
struct UAnimInstance : public UObject
{
	struct USkeleton* CurrentSkeleton;  // 0x28(0x8)
	char ERootMotionMode RootMotionMode;  // 0x30(0x1)
	char bUseMultiThreadedAnimationUpdate : 1;  // 0x31(0x1)
	char bUsingCopyPoseFromMesh : 1;  // 0x31(0x1)
	char pad_49_1 : 2;  // 0x31(0x1)
	char bReceiveNotifiesFromLinkedInstances : 1;  // 0x31(0x1)
	char bPropagateNotifiesToLinkedInstances : 1;  // 0x31(0x1)
	char bQueueMontageEvents : 1;  // 0x31(0x1)
	char pad_49_2 : 1;  // 0x31(0x1)
	char pad_50[7];  // 0x32(0x7)
	struct FMulticastInlineDelegate OnMontageBlendingOut;  // 0x38(0x10)
	struct FMulticastInlineDelegate OnMontageStarted;  // 0x48(0x10)
	struct FMulticastInlineDelegate OnMontageEnded;  // 0x58(0x10)
	struct FMulticastInlineDelegate OnAllMontageInstancesEnded;  // 0x68(0x10)
	char pad_120[136];  // 0x78(0x88)
	struct FAnimNotifyQueue NotifyQueue;  // 0x100(0x70)
	struct TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState;  // 0x170(0x10)
	char pad_384[320];  // 0x180(0x140)

	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic); // Function Engine.AnimInstance.UnlockAIResources
	void UnlinkAnimClassLayers(UAnimInstance* InClass); // Function Engine.AnimInstance.UnlinkAnimClassLayers
	struct APawn* TryGetPawnOwner(); // Function Engine.AnimInstance.TryGetPawnOwner
	void StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName); // Function Engine.AnimInstance.StopSlotAnimation
	void SnapshotPose(struct FPoseSnapshot& Snapshot); // Function Engine.AnimInstance.SnapshotPose
	void SetRootMotionMode(char ERootMotionMode Value); // Function Engine.AnimInstance.SetRootMotionMode
	void SetReceiveNotifiesFromLinkedInstances(bool bSet); // Function Engine.AnimInstance.SetReceiveNotifiesFromLinkedInstances
	void SetPropagateNotifiesToLinkedInstances(bool bSet); // Function Engine.AnimInstance.SetPropagateNotifiesToLinkedInstances
	void SetMorphTarget(struct FName MorphTargetName, float Value); // Function Engine.AnimInstance.SetMorphTarget
	void SavePoseSnapshot(struct FName SnapshotName); // Function Engine.AnimInstance.SavePoseSnapshot
	void ResetDynamics(uint8_t  InTeleportType); // Function Engine.AnimInstance.ResetDynamics
	struct UAnimMontage* PlaySlotAnimationAsDynamicMontage(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
	float PlaySlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount); // Function Engine.AnimInstance.PlaySlotAnimation
	void Montage_StopGroupByName(float InBlendOutTime, struct FName GroupName); // Function Engine.AnimInstance.Montage_StopGroupByName
	void Montage_Stop(float InBlendOutTime, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Stop
	void Montage_SetPosition(struct UAnimMontage* Montage, float NewPosition); // Function Engine.AnimInstance.Montage_SetPosition
	void Montage_SetPlayRate(struct UAnimMontage* Montage, float NewPlayRate); // Function Engine.AnimInstance.Montage_SetPlayRate
	void Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_SetNextSection
	void Montage_Resume(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Resume
	float Montage_Play(struct UAnimMontage* MontageToPlay, float InPlayRate, uint8_t  ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages); // Function Engine.AnimInstance.Montage_Play
	void Montage_Pause(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Pause
	void Montage_JumpToSectionsEnd(struct FName SectionName, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_JumpToSectionsEnd
	void Montage_JumpToSection(struct FName SectionName, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_JumpToSection
	bool Montage_IsPlaying(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_IsPlaying
	bool Montage_IsActive(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_IsActive
	float Montage_GetPosition(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetPosition
	float Montage_GetPlayRate(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetPlayRate
	bool Montage_GetIsStopped(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetIsStopped
	struct FName Montage_GetCurrentSection(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetCurrentSection
	float Montage_GetBlendTime(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetBlendTime
	void LockAIResources(bool bLockMovement, bool LockAILogic); // Function Engine.AnimInstance.LockAIResources
	void LinkAnimGraphByTag(struct FName InTag, UAnimInstance* InClass); // Function Engine.AnimInstance.LinkAnimGraphByTag
	void LinkAnimClassLayers(UAnimInstance* InClass); // Function Engine.AnimInstance.LinkAnimClassLayers
	bool IsSyncGroupBetweenMarkers(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, bool bRespectMarkerOrder); // Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
	bool IsPlayingSlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName); // Function Engine.AnimInstance.IsPlayingSlotAnimation
	bool IsAnyMontagePlaying(); // Function Engine.AnimInstance.IsAnyMontagePlaying
	bool HasMarkerBeenHitThisFrame(struct FName SyncGroup, struct FName MarkerName); // Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
	bool GetTimeToClosestMarker(struct FName SyncGroup, struct FName MarkerName, float& OutMarkerTime); // Function Engine.AnimInstance.GetTimeToClosestMarker
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName InSyncGroupName); // Function Engine.AnimInstance.GetSyncGroupPosition
	float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
	float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
	float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeFraction
	float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTime
	float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimLength
	bool GetReceiveNotifiesFromLinkedInstances(); // Function Engine.AnimInstance.GetReceiveNotifiesFromLinkedInstances
	bool GetPropagateNotifiesToLinkedInstances(); // Function Engine.AnimInstance.GetPropagateNotifiesToLinkedInstances
	struct USkeletalMeshComponent* GetOwningComponent(); // Function Engine.AnimInstance.GetOwningComponent
	struct AActor* GetOwningActor(); // Function Engine.AnimInstance.GetOwningActor
	void GetLinkedAnimLayerInstancesByGroup(struct FName InGroup, struct TArray<struct UAnimInstance*>& OutLinkedInstances); // Function Engine.AnimInstance.GetLinkedAnimLayerInstancesByGroup
	struct UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(struct FName InGroup, UAnimInstance* InClass); // Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroupAndClass
	struct UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName InGroup); // Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup
	struct UAnimInstance* GetLinkedAnimLayerInstanceByClass(UAnimInstance* InClass); // Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass
	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, struct TArray<struct UAnimInstance*>& OutLinkedInstances); // Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag
	struct UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName InTag); // Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag
	float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
	float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
	float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
	float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetInstanceStateWeight
	float GetInstanceMachineWeight(int32_t MachineIndex); // Function Engine.AnimInstance.GetInstanceMachineWeight
	float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex); // Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
	float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
	float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
	float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
	float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTime
	float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerLength
	float GetCurveValue(struct FName CurveName); // Function Engine.AnimInstance.GetCurveValue
	struct FName GetCurrentStateName(int32_t MachineIndex); // Function Engine.AnimInstance.GetCurrentStateName
	struct UAnimMontage* GetCurrentActiveMontage(); // Function Engine.AnimInstance.GetCurrentActiveMontage
	void GetAllCurveNames(struct TArray<struct FName>& OutNames); // Function Engine.AnimInstance.GetAllCurveNames
	void GetActiveCurveNames(uint8_t  curveType, struct TArray<struct FName>& OutNames); // Function Engine.AnimInstance.GetActiveCurveNames
	void ClearMorphTargets(); // Function Engine.AnimInstance.ClearMorphTargets
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // Function Engine.AnimInstance.CalculateDirection
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Engine.AnimInstance.BlueprintUpdateAnimation
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
	void BlueprintLinkedAnimationLayersInitialized(); // Function Engine.AnimInstance.BlueprintLinkedAnimationLayersInitialized
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation
	void BlueprintBeginPlay(); // Function Engine.AnimInstance.BlueprintBeginPlay
}; 



// Class Engine.ProjectileMovementComponent
// Size: 0x1D0(Inherited: 0xF0) 
struct UProjectileMovementComponent : public UMovementComponent
{
	float InitialSpeed;  // 0xF0(0x4)
	float MaxSpeed;  // 0xF4(0x4)
	char bRotationFollowsVelocity : 1;  // 0xF8(0x1)
	char bRotationRemainsVertical : 1;  // 0xF8(0x1)
	char bShouldBounce : 1;  // 0xF8(0x1)
	char bInitialVelocityInLocalSpace : 1;  // 0xF8(0x1)
	char bForceSubStepping : 1;  // 0xF8(0x1)
	char bSimulationEnabled : 1;  // 0xF8(0x1)
	char bSweepCollision : 1;  // 0xF8(0x1)
	char bIsHomingProjectile : 1;  // 0xF8(0x1)
	char bBounceAngleAffectsFriction : 1;  // 0xF9(0x1)
	char bIsSliding : 1;  // 0xF9(0x1)
	char bInterpMovement : 1;  // 0xF9(0x1)
	char bInterpRotation : 1;  // 0xF9(0x1)
	char pad_249_1 : 4;  // 0xF9(0x1)
	char pad_250[3];  // 0xFA(0x3)
	float PreviousHitTime;  // 0xFC(0x4)
	struct FVector PreviousHitNormal;  // 0x100(0xC)
	float ProjectileGravityScale;  // 0x10C(0x4)
	float Buoyancy;  // 0x110(0x4)
	float Bounciness;  // 0x114(0x4)
	float Friction;  // 0x118(0x4)
	float BounceVelocityStopSimulatingThreshold;  // 0x11C(0x4)
	float MinFrictionFraction;  // 0x120(0x4)
	char pad_292[4];  // 0x124(0x4)
	struct FMulticastInlineDelegate OnProjectileBounce;  // 0x128(0x10)
	struct FMulticastInlineDelegate OnProjectileStop;  // 0x138(0x10)
	float HomingAccelerationMagnitude;  // 0x148(0x4)
	struct TWeakObjectPtr<USceneComponent> HomingTargetComponent;  // 0x14C(0x8)
	float MaxSimulationTimeStep;  // 0x154(0x4)
	int32_t MaxSimulationIterations;  // 0x158(0x4)
	int32_t BounceAdditionalIterations;  // 0x15C(0x4)
	float InterpLocationTime;  // 0x160(0x4)
	float InterpRotationTime;  // 0x164(0x4)
	float InterpLocationMaxLagDistance;  // 0x168(0x4)
	float InterpLocationSnapToTargetDistance;  // 0x16C(0x4)
	char pad_368[96];  // 0x170(0x60)

	void StopSimulating(struct FHitResult& HitResult); // Function Engine.ProjectileMovementComponent.StopSimulating
	void SetVelocityInLocalSpace(struct FVector NewVelocity); // Function Engine.ProjectileMovementComponent.SetVelocityInLocalSpace
	void SetInterpolatedComponent(struct USceneComponent* Component); // Function Engine.ProjectileMovementComponent.SetInterpolatedComponent
	void ResetInterpolation(); // Function Engine.ProjectileMovementComponent.ResetInterpolation
	void OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature
	void OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature
	void MoveInterpolationTarget(struct FVector& NewLocation, struct FRotator& NewRotation); // Function Engine.ProjectileMovementComponent.MoveInterpolationTarget
	struct FVector LimitVelocity(struct FVector NewVelocity); // Function Engine.ProjectileMovementComponent.LimitVelocity
	bool IsVelocityUnderSimulationThreshold(); // Function Engine.ProjectileMovementComponent.IsVelocityUnderSimulationThreshold
	bool IsInterpolationComplete(); // Function Engine.ProjectileMovementComponent.IsInterpolationComplete
}; 



// Class Engine.AssetMappingTable
// Size: 0x38(Inherited: 0x28) 
struct UAssetMappingTable : public UObject
{
	struct TArray<struct FAssetMapping> MappedAssets;  // 0x28(0x10)

}; 



// Class Engine.MaterialExpressionNamedRerouteDeclaration
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionNamedRerouteDeclaration : public UMaterialExpressionNamedRerouteBase
{
	struct FExpressionInput Input;  // 0x40(0x14)
	struct FName Name;  // 0x54(0x8)
	struct FGuid VariableGuid;  // 0x5C(0x10)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionHairAttributes
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionHairAttributes : public UMaterialExpression
{
	char bUseTangentSpace : 1;  // 0x40(0x1)
	char pad_64_1 : 7;  // 0x40(0x1)
	char pad_65[8];  // 0x41(0x8)

}; 



// Class Engine.SceneComponent
// Size: 0x200(Inherited: 0xB0) 
struct USceneComponent : public UActorComponent
{
	char pad_176[8];  // 0xB0(0x8)
	struct TWeakObjectPtr<APhysicsVolume> PhysicsVolume;  // 0xB8(0x8)
	struct USceneComponent* AttachParent;  // 0xC0(0x8)
	struct FName AttachSocketName;  // 0xC8(0x8)
	struct TArray<struct USceneComponent*> AttachChildren;  // 0xD0(0x10)
	struct TArray<struct USceneComponent*> ClientAttachedChildren;  // 0xE0(0x10)
	char pad_240[44];  // 0xF0(0x2C)
	struct FVector RelativeLocation;  // 0x11C(0xC)
	struct FRotator RelativeRotation;  // 0x128(0xC)
	struct FVector RelativeScale3D;  // 0x134(0xC)
	struct FVector ComponentVelocity;  // 0x140(0xC)
	char bComponentToWorldUpdated : 1;  // 0x14C(0x1)
	char pad_332_1 : 1;  // 0x14C(0x1)
	char bAbsoluteLocation : 1;  // 0x14C(0x1)
	char bAbsoluteRotation : 1;  // 0x14C(0x1)
	char bAbsoluteScale : 1;  // 0x14C(0x1)
	char bVisible : 1;  // 0x14C(0x1)
	char bShouldBeAttached : 1;  // 0x14C(0x1)
	char bShouldSnapLocationWhenAttached : 1;  // 0x14C(0x1)
	char bShouldSnapRotationWhenAttached : 1;  // 0x14D(0x1)
	char bShouldUpdatePhysicsVolume : 1;  // 0x14D(0x1)
	char bHiddenInGame : 1;  // 0x14D(0x1)
	char bBoundsChangeTriggersStreamingDataRebuild : 1;  // 0x14D(0x1)
	char bUseAttachParentBound : 1;  // 0x14D(0x1)
	char pad_333_1 : 3;  // 0x14D(0x1)
	char pad_334[2];  // 0x14E(0x2)
	char EComponentMobility Mobility;  // 0x14F(0x1)
	char EDetailMode DetailMode;  // 0x150(0x1)
	struct FMulticastSparseDelegate PhysicsVolumeChangedDelegate;  // 0x151(0x1)
	char pad_338[174];  // 0x152(0xAE)

	void ToggleVisibility(bool bPropagateToChildren); // Function Engine.SceneComponent.ToggleVisibility
	bool SnapTo(struct USceneComponent* InParent, struct FName InSocketName); // Function Engine.SceneComponent.SnapTo
	void SetWorldScale3D(struct FVector NewScale); // Function Engine.SceneComponent.SetWorldScale3D
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren); // Function Engine.SceneComponent.SetVisibility
	void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume); // Function Engine.SceneComponent.SetShouldUpdatePhysicsVolume
	void SetRelativeScale3D(struct FVector NewScale3D); // Function Engine.SceneComponent.SetRelativeScale3D
	void SetMobility(char EComponentMobility NewMobility); // Function Engine.SceneComponent.SetMobility
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren); // Function Engine.SceneComponent.SetHiddenInGame
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale); // Function Engine.SceneComponent.SetAbsolute
	void ResetRelativeTransform(); // Function Engine.SceneComponent.ResetRelativeTransform
	void OnRep_Visibility(bool oldValue); // Function Engine.SceneComponent.OnRep_Visibility
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren
	void K2_SetWorldTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldTransform
	void K2_SetWorldRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldRotation
	void K2_SetWorldLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldLocationAndRotation
	void K2_SetWorldLocation(struct FVector NewLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldLocation
	void K2_SetRelativeTransform(struct FTransform& NewTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeTransform
	void K2_SetRelativeRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeRotation
	void K2_SetRelativeLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
	void K2_SetRelativeLocation(struct FVector NewLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeLocation
	struct FTransform K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld
	struct FVector K2_GetComponentScale(); // Function Engine.SceneComponent.K2_GetComponentScale
	struct FRotator K2_GetComponentRotation(); // Function Engine.SceneComponent.K2_GetComponentRotation
	struct FVector K2_GetComponentLocation(); // Function Engine.SceneComponent.K2_GetComponentLocation
	void K2_DetachFromComponent(uint8_t  LocationRule, uint8_t  RotationRule, uint8_t  ScaleRule, bool bCallModify); // Function Engine.SceneComponent.K2_DetachFromComponent
	bool K2_AttachToComponent(struct USceneComponent* Parent, struct FName SocketName, uint8_t  LocationRule, uint8_t  RotationRule, uint8_t  ScaleRule, bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachToComponent
	bool K2_AttachTo(struct USceneComponent* InParent, struct FName InSocketName, char EAttachLocation AttachType, bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo
	void K2_AddWorldTransformKeepScale(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldTransformKeepScale
	void K2_AddWorldTransform(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldTransform
	void K2_AddWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldRotation
	void K2_AddWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldOffset
	void K2_AddRelativeRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddRelativeRotation
	void K2_AddRelativeLocation(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddRelativeLocation
	void K2_AddLocalTransform(struct FTransform& DeltaTransform, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalTransform
	void K2_AddLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalRotation
	void K2_AddLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult& SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalOffset
	bool IsVisible(); // Function Engine.SceneComponent.IsVisible
	bool IsSimulatingPhysics(struct FName BoneName); // Function Engine.SceneComponent.IsSimulatingPhysics
	bool IsAnySimulatingPhysics(); // Function Engine.SceneComponent.IsAnySimulatingPhysics
	struct FVector GetUpVector(); // Function Engine.SceneComponent.GetUpVector
	struct FTransform GetSocketTransform(struct FName InSocketName, char ERelativeTransformSpace TransformSpace); // Function Engine.SceneComponent.GetSocketTransform
	struct FRotator GetSocketRotation(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketRotation
	struct FQuat GetSocketQuaternion(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketQuaternion
	struct FVector GetSocketLocation(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketLocation
	bool GetShouldUpdatePhysicsVolume(); // Function Engine.SceneComponent.GetShouldUpdatePhysicsVolume
	struct FVector GetRightVector(); // Function Engine.SceneComponent.GetRightVector
	struct FTransform GetRelativeTransform(); // Function Engine.SceneComponent.GetRelativeTransform
	struct APhysicsVolume* GetPhysicsVolume(); // Function Engine.SceneComponent.GetPhysicsVolume
	void GetParentComponents(struct TArray<struct USceneComponent*>& Parents); // Function Engine.SceneComponent.GetParentComponents
	int32_t GetNumChildrenComponents(); // Function Engine.SceneComponent.GetNumChildrenComponents
	struct FVector GetForwardVector(); // Function Engine.SceneComponent.GetForwardVector
	struct FVector GetComponentVelocity(); // Function Engine.SceneComponent.GetComponentVelocity
	void GetChildrenComponents(bool bIncludeAllDescendants, struct TArray<struct USceneComponent*>& Children); // Function Engine.SceneComponent.GetChildrenComponents
	struct USceneComponent* GetChildComponent(int32_t ChildIndex); // Function Engine.SceneComponent.GetChildComponent
	struct FName GetAttachSocketName(); // Function Engine.SceneComponent.GetAttachSocketName
	struct USceneComponent* GetAttachParent(); // Function Engine.SceneComponent.GetAttachParent
	struct TArray<struct FName> GetAllSocketNames(); // Function Engine.SceneComponent.GetAllSocketNames
	bool DoesSocketExist(struct FName InSocketName); // Function Engine.SceneComponent.DoesSocketExist
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify); // Function Engine.SceneComponent.DetachFromParent
}; 



// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x150(Inherited: 0x30) 
struct UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
	char EBeam2Method BeamMethod;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	int32_t TextureTile;  // 0x34(0x4)
	float TextureTileDistance;  // 0x38(0x4)
	int32_t Sheets;  // 0x3C(0x4)
	int32_t MaxBeamCount;  // 0x40(0x4)
	float Speed;  // 0x44(0x4)
	int32_t InterpolationPoints;  // 0x48(0x4)
	char bAlwaysOn : 1;  // 0x4C(0x1)
	char pad_76_1 : 7;  // 0x4C(0x1)
	char pad_77[4];  // 0x4D(0x4)
	int32_t UpVectorStepSize;  // 0x50(0x4)
	struct FName BranchParentName;  // 0x54(0x8)
	char pad_92[4];  // 0x5C(0x4)
	struct FRawDistributionFloat Distance;  // 0x60(0x30)
	char EBeamTaperMethod TaperMethod;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct FRawDistributionFloat TaperFactor;  // 0x98(0x30)
	struct FRawDistributionFloat TaperScale;  // 0xC8(0x30)
	char RenderGeometry : 1;  // 0xF8(0x1)
	char RenderDirectLine : 1;  // 0xF8(0x1)
	char RenderLines : 1;  // 0xF8(0x1)
	char RenderTessellation : 1;  // 0xF8(0x1)
	char pad_248_1 : 4;  // 0xF8(0x1)
	char pad_249[88];  // 0xF9(0x58)

}; 



// Class Engine.SkinnedMeshComponent
// Size: 0x6A0(Inherited: 0x480) 
struct USkinnedMeshComponent : public UMeshComponent
{
	struct USkeletalMesh* SkeletalMesh;  // 0x480(0x8)
	struct TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent;  // 0x488(0x8)
	struct TArray<uint8_t > SkinCacheUsage;  // 0x490(0x10)
	struct TArray<struct FVertexOffsetUsage> VertexOffsetUsage;  // 0x4A0(0x10)
	char pad_1200[248];  // 0x4B0(0xF8)
	struct UPhysicsAsset* PhysicsAssetOverride;  // 0x5A8(0x8)
	int32_t ForcedLodModel;  // 0x5B0(0x4)
	int32_t MinLodModel;  // 0x5B4(0x4)
	char pad_1464[8];  // 0x5B8(0x8)
	float StreamingDistanceMultiplier;  // 0x5C0(0x4)
	char pad_1476[12];  // 0x5C4(0xC)
	struct TArray<struct FSkelMeshComponentLODInfo> LODInfo;  // 0x5D0(0x10)
	char pad_1504[36];  // 0x5E0(0x24)
	uint8_t  VisibilityBasedAnimTickOption;  // 0x604(0x1)
	char pad_1541[1];  // 0x605(0x1)
	char pad_1542_1 : 3;  // 0x606(0x1)
	char bOverrideMinLOD : 1;  // 0x606(0x1)
	char bUseBoundsFromMasterPoseComponent : 1;  // 0x606(0x1)
	char bForceWireframe : 1;  // 0x606(0x1)
	char bDisplayBones : 1;  // 0x606(0x1)
	char bDisableMorphTarget : 1;  // 0x606(0x1)
	char bHideSkin : 1;  // 0x607(0x1)
	char bPerBoneMotionBlur : 1;  // 0x607(0x1)
	char bComponentUseFixedSkelBounds : 1;  // 0x607(0x1)
	char bConsiderAllBodiesForBounds : 1;  // 0x607(0x1)
	char bSyncAttachParentLOD : 1;  // 0x607(0x1)
	char bCanHighlightSelectedSections : 1;  // 0x607(0x1)
	char bRecentlyRendered : 1;  // 0x607(0x1)
	char bCastCapsuleDirectShadow : 1;  // 0x607(0x1)
	char bCastCapsuleIndirectShadow : 1;  // 0x608(0x1)
	char bCPUSkinning : 1;  // 0x608(0x1)
	char bEnableUpdateRateOptimizations : 1;  // 0x608(0x1)
	char bDisplayDebugUpdateRateOptimizations : 1;  // 0x608(0x1)
	char bRenderStatic : 1;  // 0x608(0x1)
	char bIgnoreMasterPoseComponentLOD : 1;  // 0x608(0x1)
	char pad_1544_1 : 2;  // 0x608(0x1)
	char bCachedLocalBoundsUpToDate : 1;  // 0x609(0x1)
	char pad_1545_1 : 1;  // 0x609(0x1)
	char bForceMeshObjectUpdate : 1;  // 0x609(0x1)
	char pad_1545_2 : 5;  // 0x609(0x1)
	char pad_1546[3];  // 0x60A(0x3)
	float CapsuleIndirectShadowMinVisibility;  // 0x60C(0x4)
	char pad_1552[16];  // 0x610(0x10)
	struct FBoxSphereBounds CachedWorldSpaceBounds;  // 0x620(0x1C)
	char pad_1596[4];  // 0x63C(0x4)
	struct FMatrix CachedWorldToLocalTransform;  // 0x640(0x40)
	char pad_1664[32];  // 0x680(0x20)

	void UnloadSkinWeightProfile(struct FName InProfileName); // Function Engine.SkinnedMeshComponent.UnloadSkinWeightProfile
	void UnHideBoneByName(struct FName BoneName); // Function Engine.SkinnedMeshComponent.UnHideBoneByName
	void TransformToBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector& OutPosition, struct FRotator& OutRotation); // Function Engine.SkinnedMeshComponent.TransformToBoneSpace
	void TransformFromBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector& OutPosition, struct FRotator& OutRotation); // Function Engine.SkinnedMeshComponent.TransformFromBoneSpace
	void ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, bool bShow, int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ShowMaterialSection
	void ShowAllMaterialSections(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ShowAllMaterialSections
	void SetVertexOffsetUsage(int32_t LODIndex, int32_t Usage); // Function Engine.SkinnedMeshComponent.SetVertexOffsetUsage
	void SetVertexColorOverride_LinearColor(int32_t LODIndex, struct TArray<struct FLinearColor>& VertexColors); // Function Engine.SkinnedMeshComponent.SetVertexColorOverride_LinearColor
	bool SetSkinWeightProfile(struct FName InProfileName); // Function Engine.SkinnedMeshComponent.SetSkinWeightProfile
	void SetSkinWeightOverride(int32_t LODIndex, struct TArray<struct FSkelMeshSkinWeightInfo>& SkinWeights); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride
	void SetSkeletalMesh(struct USkeletalMesh* NewMesh, bool bReinitPose); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh
	void SetRenderStatic(bool bNewValue); // Function Engine.SkinnedMeshComponent.SetRenderStatic
	void SetPreSkinningOffsets(int32_t LODIndex, struct TArray<struct FVector> Offsets); // Function Engine.SkinnedMeshComponent.SetPreSkinningOffsets
	void SetPostSkinningOffsets(int32_t LODIndex, struct TArray<struct FVector> Offsets); // Function Engine.SkinnedMeshComponent.SetPostSkinningOffsets
	void SetPhysicsAsset(struct UPhysicsAsset* NewPhysicsAsset, bool bForceReInit); // Function Engine.SkinnedMeshComponent.SetPhysicsAsset
	void SetMinLOD(int32_t InNewMinLOD); // Function Engine.SkinnedMeshComponent.SetMinLOD
	void SetMasterPoseComponent(struct USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate); // Function Engine.SkinnedMeshComponent.SetMasterPoseComponent
	void SetForcedLOD(int32_t InNewForcedLOD); // Function Engine.SkinnedMeshComponent.SetForcedLOD
	void SetCastCapsuleIndirectShadow(bool bNewValue); // Function Engine.SkinnedMeshComponent.SetCastCapsuleIndirectShadow
	void SetCastCapsuleDirectShadow(bool bNewValue); // Function Engine.SkinnedMeshComponent.SetCastCapsuleDirectShadow
	void SetCapsuleIndirectShadowMinVisibility(float NewValue); // Function Engine.SkinnedMeshComponent.SetCapsuleIndirectShadowMinVisibility
	bool IsUsingSkinWeightProfile(); // Function Engine.SkinnedMeshComponent.IsUsingSkinWeightProfile
	bool IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex); // Function Engine.SkinnedMeshComponent.IsMaterialSectionShown
	bool IsBoneHiddenByName(struct FName BoneName); // Function Engine.SkinnedMeshComponent.IsBoneHiddenByName
	void HideBoneByName(struct FName BoneName, char EPhysBodyOp PhysBodyOption); // Function Engine.SkinnedMeshComponent.HideBoneByName
	int32_t GetVertexOffsetUsage(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.GetVertexOffsetUsage
	bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(struct FName BoneName, float& OutTwistAngle, float& OutSwingAngle); // Function Engine.SkinnedMeshComponent.GetTwistAndSwingAngleOfDeltaRotationFromRefPose
	struct FName GetSocketBoneName(struct FName InSocketName); // Function Engine.SkinnedMeshComponent.GetSocketBoneName
	struct FVector GetRefPosePosition(int32_t BoneIndex); // Function Engine.SkinnedMeshComponent.GetRefPosePosition
	struct FName GetParentBone(struct FName BoneName); // Function Engine.SkinnedMeshComponent.GetParentBone
	int32_t GetNumLODs(); // Function Engine.SkinnedMeshComponent.GetNumLODs
	int32_t GetNumBones(); // Function Engine.SkinnedMeshComponent.GetNumBones
	int32_t GetForcedLOD(); // Function Engine.SkinnedMeshComponent.GetForcedLOD
	struct FTransform GetDeltaTransformFromRefPose(struct FName BoneName, struct FName BaseName); // Function Engine.SkinnedMeshComponent.GetDeltaTransformFromRefPose
	struct FName GetCurrentSkinWeightProfileName(); // Function Engine.SkinnedMeshComponent.GetCurrentSkinWeightProfileName
	struct FName GetBoneName(int32_t BoneIndex); // Function Engine.SkinnedMeshComponent.GetBoneName
	int32_t GetBoneIndex(struct FName BoneName); // Function Engine.SkinnedMeshComponent.GetBoneIndex
	struct FName FindClosestBone_K2(struct FVector TestLocation, struct FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset); // Function Engine.SkinnedMeshComponent.FindClosestBone_K2
	void ClearVertexColorOverride(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ClearVertexColorOverride
	void ClearSkinWeightProfile(); // Function Engine.SkinnedMeshComponent.ClearSkinWeightProfile
	void ClearSkinWeightOverride(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ClearSkinWeightOverride
	bool BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName); // Function Engine.SkinnedMeshComponent.BoneIsChildOf
}; 



// Class Engine.SoundSubmixWithParentBase
// Size: 0x40(Inherited: 0x38) 
struct USoundSubmixWithParentBase : public USoundSubmixBase
{
	struct USoundSubmixBase* ParentSubmix;  // 0x38(0x8)

}; 



// Class Engine.MaterialExpressionDecalDerivative
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionDecalDerivative : public UMaterialExpression
{

}; 



// Class Engine.MovementComponent
// Size: 0xF0(Inherited: 0xB0) 
struct UMovementComponent : public UActorComponent
{
	struct USceneComponent* UpdatedComponent;  // 0xB0(0x8)
	struct UPrimitiveComponent* UpdatedPrimitive;  // 0xB8(0x8)
	char pad_192[4];  // 0xC0(0x4)
	struct FVector Velocity;  // 0xC4(0xC)
	struct FVector PlaneConstraintNormal;  // 0xD0(0xC)
	struct FVector PlaneConstraintOrigin;  // 0xDC(0xC)
	char bUpdateOnlyIfRendered : 1;  // 0xE8(0x1)
	char bAutoUpdateTickRegistration : 1;  // 0xE8(0x1)
	char bTickBeforeOwner : 1;  // 0xE8(0x1)
	char bAutoRegisterUpdatedComponent : 1;  // 0xE8(0x1)
	char bConstrainToPlane : 1;  // 0xE8(0x1)
	char bSnapToPlaneAtStart : 1;  // 0xE8(0x1)
	char bAutoRegisterPhysicsVolumeUpdates : 1;  // 0xE8(0x1)
	char bComponentShouldUpdatePhysicsVolume : 1;  // 0xE8(0x1)
	char pad_233[2];  // 0xE9(0x2)
	uint8_t  PlaneConstraintAxisSetting;  // 0xEB(0x1)
	char pad_236[4];  // 0xEC(0x4)

	void StopMovementImmediately(); // Function Engine.MovementComponent.StopMovementImmediately
	void SnapUpdatedComponentToPlane(); // Function Engine.MovementComponent.SnapUpdatedComponentToPlane
	void SetUpdatedComponent(struct USceneComponent* NewUpdatedComponent); // Function Engine.MovementComponent.SetUpdatedComponent
	void SetPlaneConstraintOrigin(struct FVector PlaneOrigin); // Function Engine.MovementComponent.SetPlaneConstraintOrigin
	void SetPlaneConstraintNormal(struct FVector PlaneNormal); // Function Engine.MovementComponent.SetPlaneConstraintNormal
	void SetPlaneConstraintFromVectors(struct FVector Forward, struct FVector Up); // Function Engine.MovementComponent.SetPlaneConstraintFromVectors
	void SetPlaneConstraintEnabled(bool bEnabled); // Function Engine.MovementComponent.SetPlaneConstraintEnabled
	void SetPlaneConstraintAxisSetting(uint8_t  NewAxisSetting); // Function Engine.MovementComponent.SetPlaneConstraintAxisSetting
	void PhysicsVolumeChanged(struct APhysicsVolume* NewVolume); // Function Engine.MovementComponent.PhysicsVolumeChanged
	bool K2_MoveUpdatedComponent(struct FVector Delta, struct FRotator NewRotation, struct FHitResult& OutHit, bool bSweep, bool bTeleport); // Function Engine.MovementComponent.K2_MoveUpdatedComponent
	float K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed
	float K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier
	bool IsExceedingMaxSpeed(float MaxSpeed); // Function Engine.MovementComponent.IsExceedingMaxSpeed
	struct FVector GetPlaneConstraintOrigin(); // Function Engine.MovementComponent.GetPlaneConstraintOrigin
	struct FVector GetPlaneConstraintNormal(); // Function Engine.MovementComponent.GetPlaneConstraintNormal
	uint8_t  GetPlaneConstraintAxisSetting(); // Function Engine.MovementComponent.GetPlaneConstraintAxisSetting
	struct APhysicsVolume* GetPhysicsVolume(); // Function Engine.MovementComponent.GetPhysicsVolume
	float GetMaxSpeed(); // Function Engine.MovementComponent.GetMaxSpeed
	float GetGravityZ(); // Function Engine.MovementComponent.GetGravityZ
	struct FVector ConstrainNormalToPlane(struct FVector Normal); // Function Engine.MovementComponent.ConstrainNormalToPlane
	struct FVector ConstrainLocationToPlane(struct FVector Location); // Function Engine.MovementComponent.ConstrainLocationToPlane
	struct FVector ConstrainDirectionToPlane(struct FVector Direction); // Function Engine.MovementComponent.ConstrainDirectionToPlane
}; 



// Class Engine.MeshComponent
// Size: 0x480(Inherited: 0x450) 
struct UMeshComponent : public UPrimitiveComponent
{
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // 0x450(0x10)
	char pad_1120[16];  // 0x460(0x10)
	char bEnableMaterialParameterCaching : 1;  // 0x470(0x1)
	char pad_1136_1 : 7;  // 0x470(0x1)
	char pad_1137[16];  // 0x471(0x10)

	void SetVectorParameterValueOnMaterials(struct FName ParameterName, struct FVector ParameterValue); // Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
	void SetScalarParameterValueOnMaterials(struct FName ParameterName, float ParameterValue); // Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
	void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups); // Function Engine.MeshComponent.PrestreamTextures
	bool IsMaterialSlotNameValid(struct FName MaterialSlotName); // Function Engine.MeshComponent.IsMaterialSlotNameValid
	struct TArray<struct FName> GetMaterialSlotNames(); // Function Engine.MeshComponent.GetMaterialSlotNames
	struct TArray<struct UMaterialInterface*> GetMaterials(); // Function Engine.MeshComponent.GetMaterials
	int32_t GetMaterialIndex(struct FName MaterialSlotName); // Function Engine.MeshComponent.GetMaterialIndex
}; 



// Class Engine.MaterialExpressionVertexNormalWS
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionVertexNormalWS : public UMaterialExpression
{

}; 



// Class Engine.OnlineBlueprintCallProxyBase
// Size: 0x30(Inherited: 0x30) 
struct UOnlineBlueprintCallProxyBase : public UBlueprintAsyncActionBase
{

}; 



// Class Engine.NavMovementComponent
// Size: 0x130(Inherited: 0xF0) 
struct UNavMovementComponent : public UMovementComponent
{
	struct FNavAgentProperties NavAgentProps;  // 0xF0(0x30)
	float FixedPathBrakingDistance;  // 0x120(0x4)
	char bUpdateNavAgentWithOwnersCollision : 1;  // 0x124(0x1)
	char bUseAccelerationForPaths : 1;  // 0x124(0x1)
	char bUseFixedBrakingDistanceForPaths : 1;  // 0x124(0x1)
	char pad_292_1 : 5;  // 0x124(0x1)
	struct FMovementProperties MovementState;  // 0x125(0x1)
	char pad_294[2];  // 0x126(0x2)
	struct UObject* PathFollowingComp;  // 0x128(0x8)

	void StopMovementKeepPathing(); // Function Engine.NavMovementComponent.StopMovementKeepPathing
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement
	bool IsSwimming(); // Function Engine.NavMovementComponent.IsSwimming
	bool IsMovingOnGround(); // Function Engine.NavMovementComponent.IsMovingOnGround
	bool IsFlying(); // Function Engine.NavMovementComponent.IsFlying
	bool IsFalling(); // Function Engine.NavMovementComponent.IsFalling
	bool IsCrouching(); // Function Engine.NavMovementComponent.IsCrouching
}; 



// Class Engine.BoneMaskFilter
// Size: 0x38(Inherited: 0x28) 
struct UBoneMaskFilter : public UObject
{
	struct TArray<struct FInputBlendPose> BlendPoses;  // 0x28(0x10)

}; 



// Class Engine.SoundEffectSourcePreset
// Size: 0x68(Inherited: 0x68) 
struct USoundEffectSourcePreset : public USoundEffectPreset
{

}; 



// Class Engine.PawnMovementComponent
// Size: 0x138(Inherited: 0x130) 
struct UPawnMovementComponent : public UNavMovementComponent
{
	struct APawn* PawnOwner;  // 0x130(0x8)

	struct FVector K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector
	bool IsMoveInputIgnored(); // Function Engine.PawnMovementComponent.IsMoveInputIgnored
	struct FVector GetPendingInputVector(); // Function Engine.PawnMovementComponent.GetPendingInputVector
	struct APawn* GetPawnOwner(); // Function Engine.PawnMovementComponent.GetPawnOwner
	struct FVector GetLastInputVector(); // Function Engine.PawnMovementComponent.GetLastInputVector
	struct FVector ConsumeInputVector(); // Function Engine.PawnMovementComponent.ConsumeInputVector
	void AddInputVector(struct FVector WorldVector, bool bForce); // Function Engine.PawnMovementComponent.AddInputVector
}; 



// Class Engine.OnlineEngineInterface
// Size: 0x28(Inherited: 0x28) 
struct UOnlineEngineInterface : public UObject
{

}; 



// Class Engine.DataAsset
// Size: 0x30(Inherited: 0x28) 
struct UDataAsset : public UObject
{
	UDataAsset* NativeClass;  // 0x28(0x8)

}; 



// Class Engine.KismetMaterialLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{

	void SetVectorParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName, struct FLinearColor& ParameterValue); // Function Engine.KismetMaterialLibrary.SetVectorParameterValue
	void SetScalarParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName, float ParameterValue); // Function Engine.KismetMaterialLibrary.SetScalarParameterValue
	struct FLinearColor GetVectorParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName); // Function Engine.KismetMaterialLibrary.GetVectorParameterValue
	float GetScalarParameterValue(struct UObject* WorldContextObject, struct UMaterialParameterCollection* Collection, struct FName ParameterName); // Function Engine.KismetMaterialLibrary.GetScalarParameterValue
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(struct UObject* WorldContextObject, struct UMaterialInterface* Parent, struct FName OptionalName, uint8_t  CreationFlags); // Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance
}; 



// Class Engine.PackageMapClient
// Size: 0x408(Inherited: 0xE0) 
struct UPackageMapClient : public UPackageMap
{
	char pad_224[808];  // 0xE0(0x328)

}; 



// Class Engine.BookMark
// Size: 0x50(Inherited: 0x28) 
struct UBookMark : public UBookmarkBase
{
	struct FVector Location;  // 0x28(0xC)
	struct FRotator Rotation;  // 0x34(0xC)
	struct TArray<struct FString> HiddenLevels;  // 0x40(0x10)

}; 



// Class Engine.InterpTrackParticleReplay
// Size: 0x80(Inherited: 0x70) 
struct UInterpTrackParticleReplay : public UInterpTrack
{
	struct TArray<struct FParticleReplayTrackKey> TrackKeys;  // 0x70(0x10)

}; 



// Class Engine.ParticleModuleColorScaleOverLife
// Size: 0xB0(Inherited: 0x30) 
struct UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
	struct FRawDistributionVector ColorScaleOverLife;  // 0x30(0x48)
	struct FRawDistributionFloat AlphaScaleOverLife;  // 0x78(0x30)
	char bEmitterTime : 1;  // 0xA8(0x1)
	char pad_168_1 : 7;  // 0xA8(0x1)
	char pad_169[8];  // 0xA9(0x8)

}; 



// Class Engine.BlueprintFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UBlueprintFunctionLibrary : public UObject
{

}; 



// Class Engine.MaterialFunctionMaterialLayerBlend
// Size: 0x58(Inherited: 0x58) 
struct UMaterialFunctionMaterialLayerBlend : public UMaterialFunction
{

}; 



// Class Engine.LightComponentBase
// Size: 0x230(Inherited: 0x200) 
struct ULightComponentBase : public USceneComponent
{
	struct FGuid LightGuid;  // 0x1F8(0x10)
	float Brightness;  // 0x208(0x4)
	float Intensity;  // 0x20C(0x4)
	struct FColor LightColor;  // 0x210(0x4)
	char bAffectsWorld : 1;  // 0x214(0x1)
	char CastShadows : 1;  // 0x214(0x1)
	char CastStaticShadows : 1;  // 0x214(0x1)
	char CastDynamicShadows : 1;  // 0x214(0x1)
	char bAffectTranslucentLighting : 1;  // 0x214(0x1)
	char bTransmission : 1;  // 0x214(0x1)
	char bCastVolumetricShadow : 1;  // 0x214(0x1)
	char bCastDeepShadow : 1;  // 0x214(0x1)
	char bCastRaytracedShadow : 1;  // 0x215(0x1)
	char bAffectReflection : 1;  // 0x215(0x1)
	char bAffectGlobalIllumination : 1;  // 0x215(0x1)
	float DeepShadowLayerDistribution;  // 0x218(0x4)
	float IndirectLightingIntensity;  // 0x21C(0x4)
	float VolumetricScatteringIntensity;  // 0x220(0x4)
	int32_t SamplesPerPixel;  // 0x224(0x4)
	char pad_557_1 : 5;  // 0x22D(0x1)
	char pad_558[3];  // 0x22E(0x3)

	void SetSamplesPerPixel(int32_t NewValue); // Function Engine.LightComponentBase.SetSamplesPerPixel
	void SetCastVolumetricShadow(bool bNewValue); // Function Engine.LightComponentBase.SetCastVolumetricShadow
	void SetCastShadows(bool bNewValue); // Function Engine.LightComponentBase.SetCastShadows
	void SetCastRaytracedShadow(bool bNewValue); // Function Engine.LightComponentBase.SetCastRaytracedShadow
	void SetCastDeepShadow(bool bNewValue); // Function Engine.LightComponentBase.SetCastDeepShadow
	void SetAffectReflection(bool bNewValue); // Function Engine.LightComponentBase.SetAffectReflection
	void SetAffectGlobalIllumination(bool bNewValue); // Function Engine.LightComponentBase.SetAffectGlobalIllumination
	struct FLinearColor GetLightColor(); // Function Engine.LightComponentBase.GetLightColor
}; 



// Class Engine.SplineMeshComponent
// Size: 0x580(Inherited: 0x4E0) 
struct USplineMeshComponent : public UStaticMeshComponent
{
	char pad_1248[8];  // 0x4E0(0x8)
	struct FSplineMeshParams SplineParams;  // 0x4E8(0x58)
	struct FVector SplineUpDir;  // 0x540(0xC)
	float SplineBoundaryMin;  // 0x54C(0x4)
	struct FGuid CachedMeshBodySetupGuid;  // 0x550(0x10)
	struct UBodySetup* BodySetup;  // 0x560(0x8)
	float SplineBoundaryMax;  // 0x568(0x4)
	char bAllowSplineEditingPerInstance : 1;  // 0x56C(0x1)
	char bSmoothInterpRollScale : 1;  // 0x56C(0x1)
	char bMeshDirty : 1;  // 0x56C(0x1)
	char pad_1388_1 : 5;  // 0x56C(0x1)
	char ESplineMeshAxis ForwardAxis;  // 0x56D(0x1)
	char pad_1390[2];  // 0x56E(0x2)
	float VirtualTextureMainPassMaxDrawDistance;  // 0x570(0x4)
	char pad_1396[12];  // 0x574(0xC)

	void UpdateMesh(); // Function Engine.SplineMeshComponent.UpdateMesh
	void SetStartTangent(struct FVector StartTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartTangent
	void SetStartScale(struct FVector2D StartScale, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartScale
	void SetStartRoll(float StartRoll, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartRoll
	void SetStartPosition(struct FVector StartPos, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartPosition
	void SetStartOffset(struct FVector2D StartOffset, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartOffset
	void SetStartAndEnd(struct FVector StartPos, struct FVector StartTangent, struct FVector EndPos, struct FVector EndTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartAndEnd
	void SetSplineUpDir(struct FVector& InSplineUpDir, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetSplineUpDir
	void SetForwardAxis(char ESplineMeshAxis InForwardAxis, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetForwardAxis
	void SetEndTangent(struct FVector EndTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndTangent
	void SetEndScale(struct FVector2D EndScale, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndScale
	void SetEndRoll(float EndRoll, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndRoll
	void SetEndPosition(struct FVector EndPos, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndPosition
	void SetEndOffset(struct FVector2D EndOffset, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndOffset
	void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetBoundaryMin
	void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetBoundaryMax
	struct FVector GetStartTangent(); // Function Engine.SplineMeshComponent.GetStartTangent
	struct FVector2D GetStartScale(); // Function Engine.SplineMeshComponent.GetStartScale
	float GetStartRoll(); // Function Engine.SplineMeshComponent.GetStartRoll
	struct FVector GetStartPosition(); // Function Engine.SplineMeshComponent.GetStartPosition
	struct FVector2D GetStartOffset(); // Function Engine.SplineMeshComponent.GetStartOffset
	struct FVector GetSplineUpDir(); // Function Engine.SplineMeshComponent.GetSplineUpDir
	char ESplineMeshAxis GetForwardAxis(); // Function Engine.SplineMeshComponent.GetForwardAxis
	struct FVector GetEndTangent(); // Function Engine.SplineMeshComponent.GetEndTangent
	struct FVector2D GetEndScale(); // Function Engine.SplineMeshComponent.GetEndScale
	float GetEndRoll(); // Function Engine.SplineMeshComponent.GetEndRoll
	struct FVector GetEndPosition(); // Function Engine.SplineMeshComponent.GetEndPosition
	struct FVector2D GetEndOffset(); // Function Engine.SplineMeshComponent.GetEndOffset
	float GetBoundaryMin(); // Function Engine.SplineMeshComponent.GetBoundaryMin
	float GetBoundaryMax(); // Function Engine.SplineMeshComponent.GetBoundaryMax
}; 



// Class Engine.CameraShakeBase
// Size: 0xB0(Inherited: 0x28) 
struct UCameraShakeBase : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bSingleInstance : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float ShakeScale;  // 0x2C(0x4)
	struct UCameraShakePattern* RootShakePattern;  // 0x30(0x8)
	struct APlayerCameraManager* cameraManager;  // 0x38(0x8)
	char pad_64[112];  // 0x40(0x70)

	void SetRootShakePattern(struct UCameraShakePattern* InPattern); // Function Engine.CameraShakeBase.SetRootShakePattern
	struct UCameraShakePattern* GetRootShakePattern(); // Function Engine.CameraShakeBase.GetRootShakePattern
}; 



// Class Engine.CurveVector
// Size: 0x1B0(Inherited: 0x30) 
struct UCurveVector : public UCurveBase
{
	struct FRichCurve FloatCurves[3];  // 0x30(0x180)

	struct FVector GetVectorValue(float InTime); // Function Engine.CurveVector.GetVectorValue
}; 



// Class Engine.MaterialExpressionPrecomputedAOMask
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{

}; 



// Class Engine.CameraShakePattern
// Size: 0x28(Inherited: 0x28) 
struct UCameraShakePattern : public UObject
{

}; 



// Class Engine.TargetPoint
// Size: 0x220(Inherited: 0x220) 
struct ATargetPoint : public AActor
{

}; 



// Class Engine.AssetImportData
// Size: 0x28(Inherited: 0x28) 
struct UAssetImportData : public UObject
{

}; 



// Class Engine.TimecodeProvider
// Size: 0x30(Inherited: 0x28) 
struct UTimecodeProvider : public UObject
{
	float FrameDelay;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

	struct FTimecode GetTimecode(); // Function Engine.TimecodeProvider.GetTimecode
	uint8_t  GetSynchronizationState(); // Function Engine.TimecodeProvider.GetSynchronizationState
	struct FQualifiedFrameTime GetQualifiedFrameTime(); // Function Engine.TimecodeProvider.GetQualifiedFrameTime
	struct FFrameRate GetFrameRate(); // Function Engine.TimecodeProvider.GetFrameRate
	struct FTimecode GetDelayedTimecode(); // Function Engine.TimecodeProvider.GetDelayedTimecode
	struct FQualifiedFrameTime GetDelayedQualifiedFrameTime(); // Function Engine.TimecodeProvider.GetDelayedQualifiedFrameTime
	bool FetchTimecode(struct FQualifiedFrameTime& OutFrameTime); // Function Engine.TimecodeProvider.FetchTimecode
	void FetchAndUpdate(); // Function Engine.TimecodeProvider.FetchAndUpdate
}; 



// Class Engine.Font
// Size: 0x1D0(Inherited: 0x28) 
struct UFont : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	uint8_t  FontCacheType;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct TArray<struct FFontCharacter> Characters;  // 0x38(0x10)
	struct TArray<struct UTexture2D*> Textures;  // 0x48(0x10)
	int32_t IsRemapped;  // 0x58(0x4)
	float EmScale;  // 0x5C(0x4)
	float Ascent;  // 0x60(0x4)
	float Descent;  // 0x64(0x4)
	float Leading;  // 0x68(0x4)
	int32_t Kerning;  // 0x6C(0x4)
	struct FFontImportOptionsData ImportOptions;  // 0x70(0xB0)
	int32_t NumCharacters;  // 0x120(0x4)
	char pad_292[4];  // 0x124(0x4)
	struct TArray<int32_t> MaxCharHeight;  // 0x128(0x10)
	float ScalingFactor;  // 0x138(0x4)
	int32_t LegacyFontSize;  // 0x13C(0x4)
	struct FName LegacyFontName;  // 0x140(0x8)
	struct FCompositeFont CompositeFont;  // 0x148(0x38)
	char pad_384[80];  // 0x180(0x50)

}; 



// Class Engine.PlayerStartPIE
// Size: 0x250(Inherited: 0x250) 
struct APlayerStartPIE : public APlayerStart
{

}; 



// Class Engine.AnimCompress_LeastDestructive
// Size: 0x40(Inherited: 0x40) 
struct UAnimCompress_LeastDestructive : public UAnimCompress_BitwiseCompressOnly
{

}; 



// Class Engine.SpotLight
// Size: 0x238(Inherited: 0x230) 
struct ASpotLight : public ALight
{
	struct USpotLightComponent* SpotLightComponent;  // 0x230(0x8)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLight.SetOuterConeAngle
	void SetInnerConeAngle(float NewInnerConeAngle); // Function Engine.SpotLight.SetInnerConeAngle
}; 



// Class Engine.InterpTrackLinearColorProp
// Size: 0x98(Inherited: 0x90) 
struct UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
	struct FName PropertyName;  // 0x90(0x8)

}; 



// Class Engine.AudioComponent
// Size: 0x860(Inherited: 0x200) 
struct UAudioComponent : public USceneComponent
{
	struct USoundBase* Sound;  // 0x1F8(0x8)
	struct TArray<struct FAudioComponentParam> InstanceParameters;  // 0x200(0x10)
	struct USoundClass* SoundClassOverride;  // 0x210(0x8)
	char bAutoDestroy : 1;  // 0x218(0x1)
	char bStopWhenOwnerDestroyed : 1;  // 0x218(0x1)
	char bShouldRemainActiveIfDropped : 1;  // 0x218(0x1)
	char bAllowSpatialization : 1;  // 0x218(0x1)
	char bOverrideAttenuation : 1;  // 0x218(0x1)
	char bOverrideSubtitlePriority : 1;  // 0x218(0x1)
	char bIsUISound : 1;  // 0x218(0x1)
	char bEnableLowPassFilter : 1;  // 0x218(0x1)
	char bOverridePriority : 1;  // 0x219(0x1)
	char bSuppressSubtitles : 1;  // 0x219(0x1)
	char pad_545_1 : 2;  // 0x221(0x1)
	char bAutoManageAttachment : 1;  // 0x21A(0x1)
	struct FName AudioComponentUserID;  // 0x220(0x8)
	float PitchModulationMin;  // 0x228(0x4)
	float PitchModulationMax;  // 0x22C(0x4)
	float VolumeModulationMin;  // 0x230(0x4)
	float VolumeModulationMax;  // 0x234(0x4)
	float VolumeMultiplier;  // 0x238(0x4)
	int32_t EnvelopeFollowerAttackTime;  // 0x23C(0x4)
	int32_t EnvelopeFollowerReleaseTime;  // 0x240(0x4)
	float Priority;  // 0x244(0x4)
	float SubtitlePriority;  // 0x248(0x4)
	char pad_589_1 : 3;  // 0x24D(0x1)
	char pad_590[3];  // 0x24E(0x3)
	struct USoundEffectSourcePresetChain* SourceEffectChain;  // 0x250(0x8)
	float PitchMultiplier;  // 0x258(0x4)
	float LowPassFilterFrequency;  // 0x25C(0x4)
	char pad_608[8];  // 0x260(0x8)
	struct USoundAttenuation* AttenuationSettings;  // 0x268(0x8)
	struct FSoundAttenuationSettings AttenuationOverrides;  // 0x270(0x3A0)
	struct USoundConcurrency* ConcurrencySettings;  // 0x610(0x8)
	struct TSet<struct USoundConcurrency*> ConcurrencySet;  // 0x618(0x50)
	char pad_1640[12];  // 0x668(0xC)
	uint8_t  AutoAttachLocationRule;  // 0x674(0x1)
	uint8_t  AutoAttachRotationRule;  // 0x675(0x1)
	uint8_t  AutoAttachScaleRule;  // 0x676(0x1)
	char pad_1655[1];  // 0x677(0x1)
	struct FSoundModulationDefaultRoutingSettings ModulationRouting;  // 0x678(0x48)
	struct FMulticastInlineDelegate OnAudioPlayStateChanged;  // 0x6C0(0x10)
	char pad_1744[24];  // 0x6D0(0x18)
	struct FMulticastInlineDelegate OnAudioVirtualizationChanged;  // 0x6E8(0x10)
	char pad_1784[24];  // 0x6F8(0x18)
	struct FMulticastInlineDelegate OnAudioFinished;  // 0x710(0x10)
	char pad_1824[24];  // 0x720(0x18)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent;  // 0x738(0x10)
	char pad_1864[24];  // 0x748(0x18)
	struct FMulticastInlineDelegate OnAudioSingleEnvelopeValue;  // 0x760(0x10)
	char pad_1904[24];  // 0x770(0x18)
	struct FMulticastInlineDelegate OnAudioMultiEnvelopeValue;  // 0x788(0x10)
	char pad_1944[24];  // 0x798(0x18)
	struct FDelegate OnQueueSubtitles;  // 0x7B0(0x10)
	struct TWeakObjectPtr<USceneComponent> AutoAttachParent;  // 0x7C0(0x8)
	struct FName AutoAttachSocketName;  // 0x7C8(0x8)
	char pad_2000[144];  // 0x7D0(0x90)

	void StopDelayed(float DelayTime); // Function Engine.AudioComponent.StopDelayed
	void Stop(); // Function Engine.AudioComponent.Stop
	void SetWaveParameter(struct FName InName, struct USoundWave* InWave); // Function Engine.AudioComponent.SetWaveParameter
	void SetVolumeMultiplier(float NewVolumeMultiplier); // Function Engine.AudioComponent.SetVolumeMultiplier
	void SetUISound(bool bInUISound); // Function Engine.AudioComponent.SetUISound
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function Engine.AudioComponent.SetSubmixSend
	void SetSourceBusSendPreEffect(struct USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // Function Engine.AudioComponent.SetSourceBusSendPreEffect
	void SetSourceBusSendPostEffect(struct USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // Function Engine.AudioComponent.SetSourceBusSendPostEffect
	void SetSound(struct USoundBase* NewSound); // Function Engine.AudioComponent.SetSound
	void SetPitchMultiplier(float NewPitchMultiplier); // Function Engine.AudioComponent.SetPitchMultiplier
	void SetPaused(bool bPause); // Function Engine.AudioComponent.SetPaused
	void SetOutputToBusOnly(bool bInOutputToBusOnly); // Function Engine.AudioComponent.SetOutputToBusOnly
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Function Engine.AudioComponent.SetLowPassFilterFrequency
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // Function Engine.AudioComponent.SetLowPassFilterEnabled
	void SetIntParameter(struct FName InName, int32_t inInt); // Function Engine.AudioComponent.SetIntParameter
	void SetFloatParameter(struct FName InName, float InFloat); // Function Engine.AudioComponent.SetFloatParameter
	void SetBoolParameter(struct FName InName, bool InBool); // Function Engine.AudioComponent.SetBoolParameter
	void SetAudioBusSendPreEffect(struct UAudioBus* AudioBus, float AudioBusSendLevel); // Function Engine.AudioComponent.SetAudioBusSendPreEffect
	void SetAudioBusSendPostEffect(struct UAudioBus* AudioBus, float AudioBusSendLevel); // Function Engine.AudioComponent.SetAudioBusSendPostEffect
	void PlayQuantized(struct UObject* WorldContextObject, struct UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, struct FDelegate& InDelegate, float InStartTime, float InFadeInDuration, float InFadeVolumeLevel, uint8_t  InFadeCurve); // Function Engine.AudioComponent.PlayQuantized
	void Play(float StartTime); // Function Engine.AudioComponent.Play
	bool IsVirtualized(); // Function Engine.AudioComponent.IsVirtualized
	bool IsPlaying(); // Function Engine.AudioComponent.IsPlaying
	bool HasCookedFFTData(); // Function Engine.AudioComponent.HasCookedFFTData
	bool HasCookedAmplitudeEnvelopeData(); // Function Engine.AudioComponent.HasCookedAmplitudeEnvelopeData
	uint8_t  GetPlayState(); // Function Engine.AudioComponent.GetPlayState
	bool GetCookedFFTDataForAllPlayingSounds(struct TArray<struct FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData); // Function Engine.AudioComponent.GetCookedFFTDataForAllPlayingSounds
	bool GetCookedFFTData(struct TArray<float>& FrequenciesToGet, struct TArray<struct FSoundWaveSpectralData>& OutSoundWaveSpectralData); // Function Engine.AudioComponent.GetCookedFFTData
	bool GetCookedEnvelopeDataForAllPlayingSounds(struct TArray<struct FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData); // Function Engine.AudioComponent.GetCookedEnvelopeDataForAllPlayingSounds
	bool GetCookedEnvelopeData(float& OutEnvelopeData); // Function Engine.AudioComponent.GetCookedEnvelopeData
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, uint8_t  FadeCurve); // Function Engine.AudioComponent.FadeOut
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, uint8_t  FadeCurve); // Function Engine.AudioComponent.FadeIn
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function Engine.AudioComponent.BP_GetAttenuationSettingsToApply
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, uint8_t  FadeCurve); // Function Engine.AudioComponent.AdjustVolume
	void AdjustAttenuation(struct FSoundAttenuationSettings& InAttenuationSettings); // Function Engine.AudioComponent.AdjustAttenuation
}; 



// Class Engine.BlueprintGeneratedClass
// Size: 0x328(Inherited: 0x230) 
struct UBlueprintGeneratedClass : public UClass
{
	int32_t NumReplicatedProperties;  // 0x230(0x4)
	char bHasNativizedParent : 1;  // 0x234(0x1)
	char bHasCookedComponentInstancingData : 1;  // 0x234(0x1)
	char pad_564_1 : 6;  // 0x234(0x1)
	char pad_565[4];  // 0x235(0x4)
	struct TArray<struct UDynamicBlueprintBinding*> DynamicBindingObjects;  // 0x238(0x10)
	struct TArray<struct UActorComponent*> ComponentTemplates;  // 0x248(0x10)
	struct TArray<struct UTimelineTemplate*> Timelines;  // 0x258(0x10)
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides;  // 0x268(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript;  // 0x278(0x8)
	struct UInheritableComponentHandler* InheritableComponentHandler;  // 0x280(0x8)
	struct UStructProperty* UberGraphFramePointerProperty;  // 0x288(0x8)
	char pad_656[8];  // 0x290(0x8)
	struct UFunction* UberGraphFunction;  // 0x298(0x8)
	struct TMap<struct FName, struct FBlueprintCookedComponentInstancingData> CookedComponentInstancingData;  // 0x2A0(0x50)
	char pad_752[56];  // 0x2F0(0x38)

}; 



// Class Engine.FXSystemComponent
// Size: 0x450(Inherited: 0x450) 
struct UFXSystemComponent : public UPrimitiveComponent
{

	void SetVectorParameter(struct FName ParameterName, struct FVector Param); // Function Engine.FXSystemComponent.SetVectorParameter
	void SetUseAutoManageAttachment(bool bAutoManage); // Function Engine.FXSystemComponent.SetUseAutoManageAttachment
	void SetIntParameter(struct FName ParameterName, int32_t Param); // Function Engine.FXSystemComponent.SetIntParameter
	void SetFloatParameter(struct FName ParameterName, float Param); // Function Engine.FXSystemComponent.SetFloatParameter
	void SetEmitterEnable(struct FName EmitterName, bool bNewEnableState); // Function Engine.FXSystemComponent.SetEmitterEnable
	void SetColorParameter(struct FName ParameterName, struct FLinearColor Param); // Function Engine.FXSystemComponent.SetColorParameter
	void SetBoolParameter(struct FName ParameterName, bool Param); // Function Engine.FXSystemComponent.SetBoolParameter
	void SetAutoAttachmentParameters(struct USceneComponent* Parent, struct FName SocketName, uint8_t  LocationRule, uint8_t  RotationRule, uint8_t  ScaleRule); // Function Engine.FXSystemComponent.SetAutoAttachmentParameters
	void SetActorParameter(struct FName ParameterName, struct AActor* Param); // Function Engine.FXSystemComponent.SetActorParameter
	void ReleaseToPool(); // Function Engine.FXSystemComponent.ReleaseToPool
	struct UFXSystemAsset* GetFXSystemAsset(); // Function Engine.FXSystemComponent.GetFXSystemAsset
}; 



// Class Engine.DPICustomScalingRule
// Size: 0x28(Inherited: 0x28) 
struct UDPICustomScalingRule : public UObject
{

}; 



// Class Engine.ParticleModuleEventReceiverSpawn
// Size: 0xD8(Inherited: 0x40) 
struct UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
	struct FRawDistributionFloat SpawnCount;  // 0x40(0x30)
	char bUseParticleTime : 1;  // 0x70(0x1)
	char bUsePSysLocation : 1;  // 0x70(0x1)
	char bInheritVelocity : 1;  // 0x70(0x1)
	char pad_112_1 : 5;  // 0x70(0x1)
	char pad_113[8];  // 0x71(0x8)
	struct FRawDistributionVector InheritVelocityScale;  // 0x78(0x48)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials;  // 0xC0(0x10)
	char bBanPhysicalMaterials : 1;  // 0xD0(0x1)
	char pad_208_1 : 7;  // 0xD0(0x1)
	char pad_209[8];  // 0xD1(0x8)

}; 



// Class Engine.FXSystemAsset
// Size: 0x30(Inherited: 0x28) 
struct UFXSystemAsset : public UObject
{
	uint32_t MaxPoolSize;  // 0x28(0x4)
	uint32_t PoolPrimeSize;  // 0x2C(0x4)

}; 



// Class Engine.SoundEffectPreset
// Size: 0x68(Inherited: 0x28) 
struct USoundEffectPreset : public UObject
{
	char pad_40[64];  // 0x28(0x40)

}; 



// Class Engine.InterpTrackFloatParticleParam
// Size: 0x98(Inherited: 0x90) 
struct UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
	struct FName ParamName;  // 0x90(0x8)

}; 



// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x258(Inherited: 0x258) 
struct ALightmassCharacterIndirectDetailVolume : public AVolume
{

}; 



// Class Engine.HLODProxy
// Size: 0x88(Inherited: 0x28) 
struct UHLODProxy : public UObject
{
	struct TArray<struct FHLODProxyMesh> ProxyMeshes;  // 0x28(0x10)
	struct TMap<struct UHLODProxyDesc*, struct FHLODProxyMesh> HLODActors;  // 0x38(0x50)

}; 



// Class Engine.MaterialExpressionShadowReplace
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionShadowReplace : public UMaterialExpression
{
	struct FExpressionInput Default;  // 0x40(0x14)
	struct FExpressionInput Shadow;  // 0x54(0x14)

}; 



// Class Engine.AnimNotifyState
// Size: 0x30(Inherited: 0x28) 
struct UAnimNotifyState : public UObject
{
	char pad_40[8];  // 0x28(0x8)

	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function Engine.AnimNotifyState.Received_NotifyTick
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState.Received_NotifyEnd
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function Engine.AnimNotifyState.Received_NotifyBegin
	struct FString GetNotifyName(); // Function Engine.AnimNotifyState.GetNotifyName
}; 



// Class Engine.NetConnection
// Size: 0x1BA8(Inherited: 0x48) 
struct UNetConnection : public UPlayer
{
	struct TArray<struct UChildConnection*> Children;  // 0x48(0x10)
	struct UNetDriver* Driver;  // 0x58(0x8)
	UPackageMap* PackageMapClass;  // 0x60(0x8)
	struct UPackageMap* PackageMap;  // 0x68(0x8)
	struct TArray<struct UChannel*> OpenChannels;  // 0x70(0x10)
	struct TArray<struct AActor*> SentTemporaries;  // 0x80(0x10)
	struct AActor* ViewTarget;  // 0x90(0x8)
	struct AActor* OwningActor;  // 0x98(0x8)
	int32_t MaxPacket;  // 0xA0(0x4)
	char InternalAck : 1;  // 0xA4(0x1)
	char pad_164_1 : 7;  // 0xA4(0x1)
	char pad_165[188];  // 0xA5(0xBC)
	struct FUniqueNetIdRepl PlayerId;  // 0x160(0x28)
	char pad_392[72];  // 0x188(0x48)
	double LastReceiveTime;  // 0x1D0(0x8)
	char pad_472[4920];  // 0x1D8(0x1338)
	struct TArray<struct UChannel*> ChannelsToTick;  // 0x1510(0x10)
	char pad_5408[1672];  // 0x1520(0x688)

}; 



// Class Engine.SoundEffectSourcePresetChain
// Size: 0x40(Inherited: 0x28) 
struct USoundEffectSourcePresetChain : public UObject
{
	struct TArray<struct FSourceEffectChainEntry> Chain;  // 0x28(0x10)
	char bPlayEffectChainTails : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[8];  // 0x39(0x8)

}; 



// Class Engine.DirectionalLight
// Size: 0x230(Inherited: 0x230) 
struct ADirectionalLight : public ALight
{

}; 



// Class Engine.MaterialExpressionTextureSampleParameter2D
// Size: 0x80(Inherited: 0x80) 
struct UMaterialExpressionTextureSampleParameter2D : public UMaterialExpressionTextureSampleParameter
{

}; 



// Class Engine.NetDriver
// Size: 0x770(Inherited: 0x28) 
struct UNetDriver : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FString NetConnectionClassName;  // 0x30(0x10)
	struct FString ReplicationDriverClassName;  // 0x40(0x10)
	int32_t MaxDownloadSize;  // 0x50(0x4)
	char bClampListenServerTickRate : 1;  // 0x54(0x1)
	char pad_84_1 : 7;  // 0x54(0x1)
	char pad_85[4];  // 0x55(0x4)
	int32_t bClampBandwithDeltaTime;  // 0x58(0x4)
	float MinBandwithDeltaTime;  // 0x5C(0x4)
	float DeltaBitsMultiplier;  // 0x60(0x4)
	int32_t NetServerMaxTickRate;  // 0x64(0x4)
	int32_t MaxNetTickRate;  // 0x68(0x4)
	int32_t MaxInternetClientRate;  // 0x6C(0x4)
	int32_t MaxClientRate;  // 0x70(0x4)
	float ServerTravelPause;  // 0x74(0x4)
	float SpawnPrioritySeconds;  // 0x78(0x4)
	float RelevantTimeout;  // 0x7C(0x4)
	float KeepAliveTime;  // 0x80(0x4)
	float InitialConnectTimeout;  // 0x84(0x4)
	float ConnectionTimeout;  // 0x88(0x4)
	float TimeoutMultiplierForUnoptimizedBuilds;  // 0x8C(0x4)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool bNoTimeouts : 1;  // 0x90(0x1)
	char pad_145_1 : 7;  // 0x91(0x1)
	bool bNeverApplyNetworkEmulationSettings : 1;  // 0x91(0x1)
	char pad_146[6];  // 0x92(0x6)
	struct UNetConnection* ServerConnection;  // 0x98(0x8)
	struct TArray<struct UNetConnection*> ClientConnections;  // 0xA0(0x10)
	char pad_176[96];  // 0xB0(0x60)
	int32_t RecentlyDisconnectedTrackingTime;  // 0x110(0x4)
	char pad_276[60];  // 0x114(0x3C)
	struct UWorld* World;  // 0x150(0x8)
	struct UPackage* WorldPackage;  // 0x158(0x8)
	char pad_352[32];  // 0x160(0x20)
	UObject* NetConnectionClass;  // 0x180(0x8)
	UObject* ReplicationDriverClass;  // 0x188(0x8)
	char pad_400[16];  // 0x190(0x10)
	struct FName NetDriverName;  // 0x1A0(0x8)
	struct TArray<struct FChannelDefinition> ChannelDefinitions;  // 0x1A8(0x10)
	struct TMap<struct FName, struct FChannelDefinition> ChannelDefinitionMap;  // 0x1B8(0x50)
	struct TArray<struct UChannel*> ActorChannelPool;  // 0x208(0x10)
	char pad_536[8];  // 0x218(0x8)
	float Time;  // 0x220(0x4)
	char pad_548[1260];  // 0x224(0x4EC)
	struct UReplicationDriver* ReplicationDriver;  // 0x710(0x8)
	char pad_1816[88];  // 0x718(0x58)

}; 



// Class Engine.InputSettings
// Size: 0x140(Inherited: 0x28) 
struct UInputSettings : public UObject
{
	struct TArray<struct FInputAxisConfigEntry> AxisConfig;  // 0x28(0x10)
	char bAltEnterTogglesFullscreen : 1;  // 0x38(0x1)
	char bF11TogglesFullscreen : 1;  // 0x38(0x1)
	char bUseMouseForTouch : 1;  // 0x38(0x1)
	char bEnableMouseSmoothing : 1;  // 0x38(0x1)
	char bEnableFOVScaling : 1;  // 0x38(0x1)
	char bCaptureMouseOnLaunch : 1;  // 0x38(0x1)
	char bDefaultViewportMouseLock : 1;  // 0x38(0x1)
	char bAlwaysShowTouchInterface : 1;  // 0x38(0x1)
	char bShowConsoleOnFourFingerTap : 1;  // 0x39(0x1)
	char bEnableGestureRecognizer : 1;  // 0x39(0x1)
	char pad_57_1 : 6;  // 0x39(0x1)
	char pad_58_1 : 7;  // 0x3A(0x1)
	bool bUseAutocorrect : 1;  // 0x3A(0x1)
	char pad_59[5];  // 0x3B(0x5)
	struct TArray<struct FString> ExcludedAutocorrectOS;  // 0x40(0x10)
	struct TArray<struct FString> ExcludedAutocorrectCultures;  // 0x50(0x10)
	struct TArray<struct FString> ExcludedAutocorrectDeviceModels;  // 0x60(0x10)
	uint8_t  DefaultViewportMouseCaptureMode;  // 0x70(0x1)
	uint8_t  DefaultViewportMouseLockMode;  // 0x71(0x1)
	char pad_114[2];  // 0x72(0x2)
	float FOVScale;  // 0x74(0x4)
	float DoubleClickTime;  // 0x78(0x4)
	char pad_124[4];  // 0x7C(0x4)
	struct TArray<struct FInputActionKeyMapping> ActionMappings;  // 0x80(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings;  // 0x90(0x10)
	struct TArray<struct FInputActionSpeechMapping> SpeechMappings;  // 0xA0(0x10)
	struct TSoftClassPtr<UObject> DefaultPlayerInputClass;  // 0xB0(0x28)
	struct TSoftClassPtr<UObject> DefaultInputComponentClass;  // 0xD8(0x28)
	struct FSoftObjectPath DefaultTouchInterface;  // 0x100(0x18)
	struct FKey ConsoleKey;  // 0x118(0x18)
	struct TArray<struct FKey> ConsoleKeys;  // 0x130(0x10)

	void SaveKeyMappings(); // Function Engine.InputSettings.SaveKeyMappings
	void RemoveAxisMapping(struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps); // Function Engine.InputSettings.RemoveAxisMapping
	void RemoveActionMapping(struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps); // Function Engine.InputSettings.RemoveActionMapping
	struct UInputSettings* GetInputSettings(); // Function Engine.InputSettings.GetInputSettings
	void GetAxisNames(struct TArray<struct FName>& AxisNames); // Function Engine.InputSettings.GetAxisNames
	void GetAxisMappingByName(struct FName InAxisName, struct TArray<struct FInputAxisKeyMapping>& OutMappings); // Function Engine.InputSettings.GetAxisMappingByName
	void GetActionNames(struct TArray<struct FName>& ActionNames); // Function Engine.InputSettings.GetActionNames
	void GetActionMappingByName(struct FName InActionName, struct TArray<struct FInputActionKeyMapping>& OutMappings); // Function Engine.InputSettings.GetActionMappingByName
	void ForceRebuildKeymaps(); // Function Engine.InputSettings.ForceRebuildKeymaps
	void AddAxisMapping(struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps); // Function Engine.InputSettings.AddAxisMapping
	void AddActionMapping(struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps); // Function Engine.InputSettings.AddActionMapping
}; 



// Class Engine.ExponentialHeightFog
// Size: 0x230(Inherited: 0x220) 
struct AExponentialHeightFog : public AInfo
{
	struct UExponentialHeightFogComponent* Component;  // 0x220(0x8)
	char bEnabled : 1;  // 0x228(0x1)
	char pad_552_1 : 7;  // 0x228(0x1)
	char pad_553[8];  // 0x229(0x8)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled
}; 



// Class Engine.BlueprintAsyncActionBase
// Size: 0x30(Inherited: 0x28) 
struct UBlueprintAsyncActionBase : public UObject
{
	char pad_40[8];  // 0x28(0x8)

	void Activate(); // Function Engine.BlueprintAsyncActionBase.Activate
}; 



// Class Engine.SoundWave
// Size: 0x370(Inherited: 0x170) 
struct USoundWave : public USoundBase
{
	int32_t CompressionQuality;  // 0x170(0x4)
	int32_t StreamingPriority;  // 0x174(0x4)
	uint8_t  SampleRateQuality;  // 0x178(0x1)
	char pad_377[1];  // 0x179(0x1)
	char ESoundGroup SoundGroup;  // 0x17A(0x1)
	char bLooping : 1;  // 0x17B(0x1)
	char bStreaming : 1;  // 0x17B(0x1)
	char bSeekableStreaming : 1;  // 0x17B(0x1)
	char pad_379_1 : 5;  // 0x17B(0x1)
	uint8_t  LoadingBehavior;  // 0x17C(0x1)
	char pad_381_1 : 6;  // 0x17D(0x1)
	char bMature : 1;  // 0x17D(0x1)
	char bManualWordWrap : 1;  // 0x17D(0x1)
	char bSingleLine : 1;  // 0x17E(0x1)
	char bIsAmbisonics : 1;  // 0x17E(0x1)
	char pad_382_1 : 6;  // 0x17E(0x1)
	char pad_383[2];  // 0x17F(0x2)
	struct FSoundModulationDefaultRoutingSettings ModulationSettings;  // 0x180(0x48)
	struct TArray<float> FrequenciesToAnalyze;  // 0x1C8(0x10)
	struct TArray<struct FSoundWaveSpectralTimeData> CookedSpectralTimeData;  // 0x1D8(0x10)
	struct TArray<struct FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData;  // 0x1E8(0x10)
	int32_t InitialChunkSize;  // 0x1F8(0x4)
	char pad_508[68];  // 0x1FC(0x44)
	struct FString SpokenText;  // 0x240(0x10)
	float SubtitlePriority;  // 0x250(0x4)
	float Volume;  // 0x254(0x4)
	float Pitch;  // 0x258(0x4)
	int32_t NumChannels;  // 0x25C(0x4)
	int32_t SampleRate;  // 0x260(0x4)
	char pad_612[12];  // 0x264(0xC)
	struct TArray<struct FSubtitleCue> Subtitles;  // 0x270(0x10)
	struct UCurveTable* Curves;  // 0x280(0x8)
	struct UCurveTable* InternalCurves;  // 0x288(0x8)
	char pad_656[224];  // 0x290(0xE0)

}; 



// Class Engine.OnlineSession
// Size: 0x28(Inherited: 0x28) 
struct UOnlineSession : public UObject
{

}; 



// Class Engine.BoneReferenceSkeletonProvider
// Size: 0x28(Inherited: 0x28) 
struct UBoneReferenceSkeletonProvider : public UInterface
{

}; 



// Class Engine.MaterialExpressionTextureBase
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionTextureBase : public UMaterialExpression
{
	struct UTexture* Texture;  // 0x40(0x8)

}; 



// Class Engine.AnimNotify_PauseClothingSimulation
// Size: 0x38(Inherited: 0x38) 
struct UAnimNotify_PauseClothingSimulation : public UAnimNotify
{

}; 



// Class Engine.AssetUserData
// Size: 0x28(Inherited: 0x28) 
struct UAssetUserData : public UObject
{

}; 



// Class Engine.SoundBase
// Size: 0x170(Inherited: 0x28) 
struct USoundBase : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct USoundClass* SoundClassObject;  // 0x30(0x8)
	char bDebug : 1;  // 0x38(0x1)
	char bOverrideConcurrency : 1;  // 0x38(0x1)
	char bEnableBusSends : 1;  // 0x38(0x1)
	char bEnableBaseSubmix : 1;  // 0x38(0x1)
	char bEnableSubmixSends : 1;  // 0x38(0x1)
	char bHasDelayNode : 1;  // 0x38(0x1)
	char bHasConcatenatorNode : 1;  // 0x38(0x1)
	char bBypassVolumeScaleForPriority : 1;  // 0x38(0x1)
	uint8_t  VirtualizationMode;  // 0x39(0x1)
	char pad_58[86];  // 0x3A(0x56)
	struct TSet<struct USoundConcurrency*> ConcurrencySet;  // 0x90(0x50)
	struct FSoundConcurrencySettings ConcurrencyOverrides;  // 0xE0(0x28)
	float Duration;  // 0x108(0x4)
	float MaxDistance;  // 0x10C(0x4)
	float TotalSamples;  // 0x110(0x4)
	float Priority;  // 0x114(0x4)
	struct USoundAttenuation* AttenuationSettings;  // 0x118(0x8)
	struct USoundSubmixBase* SoundSubmixObject;  // 0x120(0x8)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends;  // 0x128(0x10)
	struct USoundEffectSourcePresetChain* SourceEffectChain;  // 0x138(0x8)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends;  // 0x140(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends;  // 0x150(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x160(0x10)

}; 



// Class Engine.GameInstance
// Size: 0x1A8(Inherited: 0x28) 
struct UGameInstance : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct TArray<struct ULocalPlayer*> LocalPlayers;  // 0x38(0x10)
	struct UOnlineSession* OnlineSession;  // 0x48(0x8)
	struct TArray<struct UObject*> ReferencedObjects;  // 0x50(0x10)
	char pad_96[24];  // 0x60(0x18)
	struct FMulticastInlineDelegate OnPawnControllerChangedDelegates;  // 0x78(0x10)
	char pad_136[288];  // 0x88(0x120)

	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit
	void HandleTravelError(char ETravelFailure FailureType); // Function Engine.GameInstance.HandleTravelError
	void HandleNetworkError(char ENetworkFailure FailureType, bool bIsServer); // Function Engine.GameInstance.HandleNetworkError
	void DebugRemovePlayer(int32_t ControllerId); // Function Engine.GameInstance.DebugRemovePlayer
	void DebugCreatePlayer(int32_t ControllerId); // Function Engine.GameInstance.DebugCreatePlayer
}; 



// Class Engine.CurveTable
// Size: 0xA0(Inherited: 0x28) 
struct UCurveTable : public UObject
{
	char pad_40[120];  // 0x28(0x78)

}; 



// Class Engine.PlatformInterfaceWebResponse
// Size: 0xB0(Inherited: 0x28) 
struct UPlatformInterfaceWebResponse : public UObject
{
	struct FString OriginalURL;  // 0x28(0x10)
	int32_t ResponseCode;  // 0x38(0x4)
	int32_t Tag;  // 0x3C(0x4)
	struct FString StringResponse;  // 0x40(0x10)
	struct TArray<char> BinaryResponse;  // 0x50(0x10)
	char pad_96[80];  // 0x60(0x50)

	int32_t GetNumHeaders(); // Function Engine.PlatformInterfaceWebResponse.GetNumHeaders
	struct FString GetHeaderValue(struct FString HeaderName); // Function Engine.PlatformInterfaceWebResponse.GetHeaderValue
	void GetHeader(int32_t HeaderIndex, struct FString& Header, struct FString& Value); // Function Engine.PlatformInterfaceWebResponse.GetHeader
}; 



// Class Engine.Channel
// Size: 0x68(Inherited: 0x28) 
struct UChannel : public UObject
{
	struct UNetConnection* Connection;  // 0x28(0x8)
	char pad_48[56];  // 0x30(0x38)

}; 



// Class Engine.ExponentialHeightFogComponent
// Size: 0x2A0(Inherited: 0x200) 
struct UExponentialHeightFogComponent : public USceneComponent
{
	float FogDensity;  // 0x1F8(0x4)
	float FogHeightFalloff;  // 0x1FC(0x4)
	struct FExponentialHeightFogData SecondFogData;  // 0x200(0xC)
	struct FLinearColor FogInscatteringColor;  // 0x20C(0x10)
	struct UTextureCube* InscatteringColorCubemap;  // 0x220(0x8)
	float InscatteringColorCubemapAngle;  // 0x228(0x4)
	struct FLinearColor InscatteringTextureTint;  // 0x22C(0x10)
	float FullyDirectionalInscatteringColorDistance;  // 0x23C(0x4)
	float NonDirectionalInscatteringColorDistance;  // 0x240(0x4)
	float DirectionalInscatteringExponent;  // 0x244(0x4)
	float DirectionalInscatteringStartDistance;  // 0x248(0x4)
	struct FLinearColor DirectionalInscatteringColor;  // 0x24C(0x10)
	float FogMaxOpacity;  // 0x25C(0x4)
	float StartDistance;  // 0x260(0x4)
	float FogCutoffDistance;  // 0x264(0x4)
	char pad_620_1 : 7;  // 0x26C(0x1)
	bool bEnableVolumetricFog : 1;  // 0x268(0x1)
	float VolumetricFogScatteringDistribution;  // 0x26C(0x4)
	struct FColor VolumetricFogAlbedo;  // 0x270(0x4)
	struct FLinearColor VolumetricFogEmissive;  // 0x274(0x10)
	float VolumetricFogExtinctionScale;  // 0x284(0x4)
	float VolumetricFogDistance;  // 0x288(0x4)
	float VolumetricFogStaticLightingScatteringIntensity;  // 0x28C(0x4)
	char pad_657_1 : 7;  // 0x291(0x1)
	bool bOverrideLightColorsWithFogInscatteringColors : 1;  // 0x290(0x1)
	char pad_658[14];  // 0x292(0xE)

	void SetVolumetricFogScatteringDistribution(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogScatteringDistribution
	void SetVolumetricFogExtinctionScale(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogExtinctionScale
	void SetVolumetricFogEmissive(struct FLinearColor NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogEmissive
	void SetVolumetricFogDistance(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogDistance
	void SetVolumetricFogAlbedo(struct FColor NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogAlbedo
	void SetVolumetricFog(bool bNewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFog
	void SetStartDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetStartDistance
	void SetNonDirectionalInscatteringColorDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetNonDirectionalInscatteringColorDistance
	void SetInscatteringTextureTint(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringTextureTint
	void SetInscatteringColorCubemapAngle(float Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemapAngle
	void SetInscatteringColorCubemap(struct UTextureCube* Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemap
	void SetFullyDirectionalInscatteringColorDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetFullyDirectionalInscatteringColorDistance
	void SetFogMaxOpacity(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogMaxOpacity
	void SetFogInscatteringColor(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetFogInscatteringColor
	void SetFogHeightFalloff(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogHeightFalloff
	void SetFogDensity(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogDensity
	void SetFogCutoffDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogCutoffDistance
	void SetDirectionalInscatteringStartDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance
	void SetDirectionalInscatteringExponent(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent
	void SetDirectionalInscatteringColor(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor
}; 



// Class Engine.Subsystem
// Size: 0x30(Inherited: 0x28) 
struct USubsystem : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class Engine.MaterialExpressionTextureSample
// Size: 0x60(Inherited: 0x48) 
struct UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
	struct FExpressionInput Coordinates;  // 0x48(0x14)
	char pad_92[4];  // 0x5C(0x4)

}; 



// Class Engine.InterpTrackMoveAxis
// Size: 0xA8(Inherited: 0x90) 
struct UInterpTrackMoveAxis : public UInterpTrackFloatBase
{
	char EInterpMoveAxis MoveAxis;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct FInterpLookupTrack LookupTrack;  // 0x98(0x10)

}; 



// Class Engine.GameInstanceSubsystem
// Size: 0x30(Inherited: 0x30) 
struct UGameInstanceSubsystem : public USubsystem
{

}; 



// Class Engine.TextureRenderTargetCube
// Size: 0x1A0(Inherited: 0x180) 
struct UTextureRenderTargetCube : public UTextureRenderTarget
{
	int32_t SizeX;  // 0x180(0x4)
	struct FLinearColor ClearColor;  // 0x184(0x10)
	char EPixelFormat OverrideFormat;  // 0x194(0x1)
	char bHDR : 1;  // 0x195(0x1)
	char bForceLinearGamma : 1;  // 0x195(0x1)
	char pad_405_1 : 6;  // 0x195(0x1)
	char pad_406[11];  // 0x196(0xB)

}; 



// Class Engine.EdGraphNode_Documentation
// Size: 0xB8(Inherited: 0x98) 
struct UEdGraphNode_Documentation : public UEdGraphNode
{
	struct FString Link;  // 0x98(0x10)
	struct FString Excerpt;  // 0xA8(0x10)

}; 



// Class Engine.Info
// Size: 0x220(Inherited: 0x220) 
struct AInfo : public AActor
{

}; 



// Class Engine.Light
// Size: 0x230(Inherited: 0x220) 
struct ALight : public AActor
{
	struct ULightComponent* LightComponent;  // 0x220(0x8)
	char bEnabled : 1;  // 0x228(0x1)
	char pad_552_1 : 7;  // 0x228(0x1)
	char pad_553[8];  // 0x229(0x8)

	void ToggleEnabled(); // Function Engine.Light.ToggleEnabled
	void SetLightFunctionScale(struct FVector NewLightFunctionScale); // Function Engine.Light.SetLightFunctionScale
	void SetLightFunctionMaterial(struct UMaterialInterface* NewLightFunctionMaterial); // Function Engine.Light.SetLightFunctionMaterial
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // Function Engine.Light.SetLightFunctionFadeDistance
	void SetLightColor(struct FLinearColor NewLightColor); // Function Engine.Light.SetLightColor
	void SetEnabled(bool bSetEnabled); // Function Engine.Light.SetEnabled
	void SetCastShadows(bool bNewValue); // Function Engine.Light.SetCastShadows
	void SetBrightness(float NewBrightness); // Function Engine.Light.SetBrightness
	void SetAffectTranslucentLighting(bool bNewValue); // Function Engine.Light.SetAffectTranslucentLighting
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled
	bool IsEnabled(); // Function Engine.Light.IsEnabled
	struct FLinearColor GetLightColor(); // Function Engine.Light.GetLightColor
	float GetBrightness(); // Function Engine.Light.GetBrightness
}; 



// Class Engine.Controller
// Size: 0x298(Inherited: 0x220) 
struct AController : public AActor
{
	char pad_544[8];  // 0x220(0x8)
	struct APlayerState* PlayerState;  // 0x228(0x8)
	char pad_560[8];  // 0x230(0x8)
	struct FMulticastInlineDelegate OnInstigatedAnyDamage;  // 0x238(0x10)
	struct FName StateName;  // 0x248(0x8)
	struct APawn* Pawn;  // 0x250(0x8)
	char pad_600[8];  // 0x258(0x8)
	struct ACharacter* Character;  // 0x260(0x8)
	struct USceneComponent* TransformComponent;  // 0x268(0x8)
	char pad_624[24];  // 0x270(0x18)
	struct FRotator ControlRotation;  // 0x288(0xC)
	char bAttachToPawn : 1;  // 0x294(0x1)
	char pad_660_1 : 7;  // 0x294(0x1)
	char pad_661[4];  // 0x295(0x4)

	void UnPossess(); // Function Engine.Controller.UnPossess
	void StopMovement(); // Function Engine.Controller.StopMovement
	void SetInitialLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation); // Function Engine.Controller.SetInitialLocationAndRotation
	void SetIgnoreMoveInput(bool bNewMoveInput); // Function Engine.Controller.SetIgnoreMoveInput
	void SetIgnoreLookInput(bool bNewLookInput); // Function Engine.Controller.SetIgnoreLookInput
	void SetControlRotation(struct FRotator& NewRotation); // Function Engine.Controller.SetControlRotation
	void ResetIgnoreMoveInput(); // Function Engine.Controller.ResetIgnoreMoveInput
	void ResetIgnoreLookInput(); // Function Engine.Controller.ResetIgnoreLookInput
	void ResetIgnoreInputFlags(); // Function Engine.Controller.ResetIgnoreInputFlags
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // Function Engine.Controller.ReceiveUnPossess
	void ReceivePossess(struct APawn* PossessedPawn); // Function Engine.Controller.ReceivePossess
	void ReceiveInstigatedAnyDamage(float Damage, struct UDamageType* DamageType, struct AActor* DamagedActor, struct AActor* DamageCauser); // Function Engine.Controller.ReceiveInstigatedAnyDamage
	void Possess(struct APawn* InPawn); // Function Engine.Controller.Possess
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn
	bool LineOfSightTo(struct AActor* Other, struct FVector ViewPoint, bool bAlternateChecks); // Function Engine.Controller.LineOfSightTo
	struct APawn* K2_GetPawn(); // Function Engine.Controller.K2_GetPawn
	bool IsPlayerController(); // Function Engine.Controller.IsPlayerController
	bool IsMoveInputIgnored(); // Function Engine.Controller.IsMoveInputIgnored
	bool IsLookInputIgnored(); // Function Engine.Controller.IsLookInputIgnored
	bool IsLocalPlayerController(); // Function Engine.Controller.IsLocalPlayerController
	bool IsLocalController(); // Function Engine.Controller.IsLocalController
	struct AActor* GetViewTarget(); // Function Engine.Controller.GetViewTarget
	struct FRotator GetDesiredRotation(); // Function Engine.Controller.GetDesiredRotation
	struct FRotator GetControlRotation(); // Function Engine.Controller.GetControlRotation
	void ClientSetRotation(struct FRotator NewRotation, bool bResetCamera); // Function Engine.Controller.ClientSetRotation
	void ClientSetLocation(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.Controller.ClientSetLocation
	struct APlayerController* CastToPlayerController(); // Function Engine.Controller.CastToPlayerController
}; 



// Class Engine.Distribution
// Size: 0x30(Inherited: 0x28) 
struct UDistribution : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x68(Inherited: 0x30) 
struct UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
	struct UDistributionFloat* VectorFieldScale;  // 0x30(0x8)
	struct FRawDistributionFloat VectorFieldScaleRaw;  // 0x38(0x30)

}; 



// Class Engine.ParticleModuleAcceleration
// Size: 0x88(Inherited: 0x38) 
struct UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
	struct FRawDistributionVector Acceleration;  // 0x38(0x48)
	char bApplyOwnerScale : 1;  // 0x80(0x1)
	char pad_128_1 : 7;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 



// Class Engine.Brush
// Size: 0x258(Inherited: 0x220) 
struct ABrush : public AActor
{
	char EBrushType BrushType;  // 0x220(0x1)
	char pad_545[3];  // 0x221(0x3)
	struct FColor BrushColor;  // 0x224(0x4)
	int32_t PolyFlags;  // 0x228(0x4)
	char bColored : 1;  // 0x22C(0x1)
	char bSolidWhenSelected : 1;  // 0x22C(0x1)
	char bPlaceableFromClassBrowser : 1;  // 0x22C(0x1)
	char bNotForClientOrServer : 1;  // 0x22C(0x1)
	char pad_556_1 : 4;  // 0x22C(0x1)
	char pad_557[4];  // 0x22D(0x4)
	struct UModel* Brush;  // 0x230(0x8)
	struct UBrushComponent* BrushComponent;  // 0x238(0x8)
	char bInManipulation : 1;  // 0x240(0x1)
	char pad_576_1 : 7;  // 0x240(0x1)
	char pad_577[8];  // 0x241(0x8)
	struct TArray<struct FGeomSelection> SavedSelections;  // 0x248(0x10)

}; 



// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x50(Inherited: 0x40) 
struct UMaterialExpressionConstant4Vector : public UMaterialExpression
{
	struct FLinearColor Constant;  // 0x40(0x10)

}; 



// Class Engine.Volume
// Size: 0x258(Inherited: 0x258) 
struct AVolume : public ABrush
{

}; 



// Class Engine.DialogueWave
// Size: 0x70(Inherited: 0x28) 
struct UDialogueWave : public UObject
{
	char bMature : 1;  // 0x28(0x1)
	char bOverride_SubtitleOverride : 1;  // 0x28(0x1)
	char pad_40_1 : 6;  // 0x28(0x1)
	char pad_41[8];  // 0x29(0x8)
	struct FString SpokenText;  // 0x30(0x10)
	struct FString SubtitleOverride;  // 0x40(0x10)
	struct TArray<struct FDialogueContextMapping> ContextMappings;  // 0x50(0x10)
	struct FGuid LocalizationGUID;  // 0x60(0x10)

}; 



// Class Engine.ParticleModuleTrailBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleTrailBase : public UParticleModule
{

}; 



// Class Engine.Character
// Size: 0x4D0(Inherited: 0x280) 
struct ACharacter : public APawn
{
	struct USkeletalMeshComponent* Mesh;  // 0x280(0x8)
	struct UCharacterMovementComponent* CharacterMovement;  // 0x288(0x8)
	struct UCapsuleComponent* CapsuleComponent;  // 0x290(0x8)
	struct FBasedMovementInfo BasedMovement;  // 0x298(0x30)
	struct FBasedMovementInfo ReplicatedBasedMovement;  // 0x2C8(0x30)
	float AnimRootMotionTranslationScale;  // 0x2F8(0x4)
	struct FVector BaseTranslationOffset;  // 0x2FC(0xC)
	char pad_776[8];  // 0x308(0x8)
	struct FQuat BaseRotationOffset;  // 0x310(0x10)
	float ReplicatedServerLastTransformUpdateTimeStamp;  // 0x320(0x4)
	float ReplayLastTransformUpdateTimeStamp;  // 0x324(0x4)
	char ReplicatedMovementMode;  // 0x328(0x1)
	char pad_809_1 : 7;  // 0x329(0x1)
	bool bInBaseReplication : 1;  // 0x329(0x1)
	char pad_810[2];  // 0x32A(0x2)
	float CrouchedEyeHeight;  // 0x32C(0x4)
	char bIsCrouched : 1;  // 0x330(0x1)
	char pad_816_1 : 7;  // 0x330(0x1)
	char pad_817[4];  // 0x331(0x4)
	uint32_t ReplicatedCrouchedStateAndCapsuleHalfHeight;  // 0x334(0x4)
	char bProxyIsJumpForceApplied : 1;  // 0x338(0x1)
	char bPressedJump : 1;  // 0x338(0x1)
	char bClientUpdating : 1;  // 0x338(0x1)
	char bClientWasFalling : 1;  // 0x338(0x1)
	char bClientResimulateRootMotion : 1;  // 0x338(0x1)
	char bClientResimulateRootMotionSources : 1;  // 0x338(0x1)
	char bSimGravityDisabled : 1;  // 0x338(0x1)
	char bClientCheckEncroachmentOnNetUpdate : 1;  // 0x338(0x1)
	char bServerMoveIgnoreRootMotion : 1;  // 0x339(0x1)
	char bWasJumping : 1;  // 0x339(0x1)
	char pad_825_1 : 6;  // 0x339(0x1)
	char pad_826[3];  // 0x33A(0x3)
	float JumpKeyHoldTime;  // 0x33C(0x4)
	float JumpForceTimeRemaining;  // 0x340(0x4)
	float ProxyJumpForceStartedTime;  // 0x344(0x4)
	float JumpMaxHoldTime;  // 0x348(0x4)
	int32_t JumpMaxCount;  // 0x34C(0x4)
	int32_t JumpCurrentCount;  // 0x350(0x4)
	int32_t JumpCurrentCountPreJump;  // 0x354(0x4)
	char pad_856[8];  // 0x358(0x8)
	struct FMulticastInlineDelegate OnReachedJumpApex;  // 0x360(0x10)
	char pad_880[16];  // 0x370(0x10)
	struct FMulticastInlineDelegate MovementModeChangedDelegate;  // 0x380(0x10)
	struct FMulticastInlineDelegate OnCharacterMovementUpdated;  // 0x390(0x10)
	struct FRootMotionSourceGroup SavedRootMotion;  // 0x3A0(0x38)
	char pad_984[8];  // 0x3D8(0x8)
	struct FRootMotionMovementParams ClientRootMotionParams;  // 0x3E0(0x40)
	struct TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;  // 0x420(0x10)
	struct FRepRootMotionMontage RepRootMotion;  // 0x430(0x98)
	char pad_1224[8];  // 0x4C8(0x8)

	void UnCrouch(bool bClientSimulation); // Function Engine.Character.UnCrouch
	void StopJumping(); // Function Engine.Character.StopJumping
	void StopAnimMontage(struct UAnimMontage* AnimMontage); // Function Engine.Character.StopAnimMontage
	void ServerMovePacked(struct FCharacterServerMovePackedBits PackedBits); // Function Engine.Character.ServerMovePacked
	void ServerMoveOld(float OldTimeStamp, struct FVector_NetQuantize10 OldAccel, char OldMoveFlags, float InCrouchedHalfHeight); // Function Engine.Character.ServerMoveOld
	void ServerMoveNoBase(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, char ClientMovementMode, float InCrouchedHalfHeight); // Function Engine.Character.ServerMoveNoBase
	void ServerMoveDualNoBase(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, char ClientMovementMode, float InCrouchedHalfHeight); // Function Engine.Character.ServerMoveDualNoBase
	void ServerMoveDualHybridRootMotion(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode, float InCrouchedHalfHeight); // Function Engine.Character.ServerMoveDualHybridRootMotion
	void ServerMoveDual(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode, float InCrouchedHalfHeight); // Function Engine.Character.ServerMoveDual
	void ServerMove(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode, float InCrouchedHalfHeight); // Function Engine.Character.ServerMove
	void RootMotionDebugClientPrintOnScreen(struct FString inString); // Function Engine.Character.RootMotionDebugClientPrintOnScreen
	float PlayAnimMontage(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // Function Engine.Character.PlayAnimMontage
	void OnWalkingOffLedge(struct FVector& PreviousFloorImpactNormal, struct FVector& PreviousFloorContactNormal, struct FVector& PreviousLocation, float TimeDelta); // Function Engine.Character.OnWalkingOffLedge
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion
	void OnRep_ReplicatedCrouchedStateAndCapsuleHalfHeight(); // Function Engine.Character.OnRep_ReplicatedCrouchedStateAndCapsuleHalfHeight
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement
	void OnRep_ReplayLastTransformUpdateTimeStamp(); // Function Engine.Character.OnRep_ReplayLastTransformUpdateTimeStamp
	void OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Character.OnLaunched
	void OnLanded(struct FHitResult& Hit); // Function Engine.Character.OnLanded
	void OnJumped(); // Function Engine.Character.OnJumped
	void LaunchCharacter(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Character.LaunchCharacter
	void K2_UpdateCustomMovement(float DeltaTime); // Function Engine.Character.K2_UpdateCustomMovement
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnStartCrouch
	void K2_OnMovementModeChanged(char EMovementMode PrevMovementMode, char EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function Engine.Character.K2_OnMovementModeChanged
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnEndCrouch
	void Jump(); // Function Engine.Character.Jump
	bool IsPlayingRootMotion(); // Function Engine.Character.IsPlayingRootMotion
	bool IsPlayingNetworkedRootMotionMontage(); // Function Engine.Character.IsPlayingNetworkedRootMotionMontage
	bool IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce
	bool HasAnyRootMotion(); // Function Engine.Character.HasAnyRootMotion
	struct UAnimMontage* GetCurrentMontage(); // Function Engine.Character.GetCurrentMontage
	struct FVector GetBaseTranslationOffset(); // Function Engine.Character.GetBaseTranslationOffset
	struct FRotator GetBaseRotationOffsetRotator(); // Function Engine.Character.GetBaseRotationOffsetRotator
	float GetAnimRootMotionTranslationScale(); // Function Engine.Character.GetAnimRootMotionTranslationScale
	void Crouch(bool bClientSimulation); // Function Engine.Character.Crouch
	void ClientVeryShortAdjustPosition(float Timestamp, struct FVector NewLoc, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientVeryShortAdjustPosition
	void ClientMoveResponsePacked(struct FCharacterMoveResponsePackedBits PackedBits); // Function Engine.Character.ClientMoveResponsePacked
	void ClientCheatWalk(); // Function Engine.Character.ClientCheatWalk
	void ClientCheatGhost(); // Function Engine.Character.ClientCheatGhost
	void ClientCheatFly(); // Function Engine.Character.ClientCheatFly
	void ClientAdjustRootMotionSourcePosition(float Timestamp, struct FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustRootMotionSourcePosition
	void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustRootMotionPosition
	void ClientAdjustPosition(float Timestamp, struct FVector NewLoc, struct FVector NewVel, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustPosition
	void ClientAckGoodMove(float Timestamp); // Function Engine.Character.ClientAckGoodMove
	bool CanJumpInternal(); // Function Engine.Character.CanJumpInternal
	bool CanJump(); // Function Engine.Character.CanJump
	bool CanCrouch(); // Function Engine.Character.CanCrouch
	void CacheInitialMeshOffset(struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation); // Function Engine.Character.CacheInitialMeshOffset
}; 



// Class Engine.MaterialExpressionDistanceFieldGradient
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
	struct FExpressionInput position;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.WorldSettings
// Size: 0x380(Inherited: 0x220) 
struct AWorldSettings : public AInfo
{
	char pad_544[8];  // 0x220(0x8)
	int32_t VisibilityCellSize;  // 0x228(0x4)
	char EVisibilityAggressiveness VisibilityAggressiveness;  // 0x22C(0x1)
	char bPrecomputeVisibility : 1;  // 0x22D(0x1)
	char bPlaceCellsOnlyAlongCameraTracks : 1;  // 0x22D(0x1)
	char bEnableWorldBoundsChecks : 1;  // 0x22D(0x1)
	char bEnableNavigationSystem : 1;  // 0x22D(0x1)
	char bEnableAISystem : 1;  // 0x22D(0x1)
	char bEnableWorldComposition : 1;  // 0x22D(0x1)
	char bUseClientSideLevelStreamingVolumes : 1;  // 0x22D(0x1)
	char bEnableWorldOriginRebasing : 1;  // 0x22D(0x1)
	char bWorldGravitySet : 1;  // 0x22E(0x1)
	char bGlobalGravitySet : 1;  // 0x22E(0x1)
	char bMinimizeBSPSections : 1;  // 0x22E(0x1)
	char bForceNoPrecomputedLighting : 1;  // 0x22E(0x1)
	char bHighPriorityLoading : 1;  // 0x22E(0x1)
	char bHighPriorityLoadingLocal : 1;  // 0x22E(0x1)
	char bOverrideDefaultBroadphaseSettings : 1;  // 0x22E(0x1)
	char pad_558_1 : 1;  // 0x22E(0x1)
	char pad_559[2];  // 0x22F(0x2)
	struct UNavigationSystemConfig* NavigationSystemConfig;  // 0x230(0x8)
	struct UNavigationSystemConfig* NavigationSystemConfigOverride;  // 0x238(0x8)
	float WorldToMeters;  // 0x240(0x4)
	float KillZ;  // 0x244(0x4)
	UDamageType* KillZDamageType;  // 0x248(0x8)
	float WorldGravityZ;  // 0x250(0x4)
	float GlobalGravityZ;  // 0x254(0x4)
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass;  // 0x258(0x8)
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass;  // 0x260(0x8)
	AGameModeBase* DefaultGameMode;  // 0x268(0x8)
	AGameNetworkManager* GameNetworkManagerClass;  // 0x270(0x8)
	int32_t PackedLightAndShadowMapTextureSize;  // 0x278(0x4)
	struct FVector DefaultColorScale;  // 0x27C(0xC)
	float DefaultMaxDistanceFieldOcclusionDistance;  // 0x288(0x4)
	float GlobalDistanceFieldViewDistance;  // 0x28C(0x4)
	float DynamicIndirectShadowsSelfShadowingIntensity;  // 0x290(0x4)
	char pad_660[4];  // 0x294(0x4)
	struct FReverbSettings DefaultReverbSettings;  // 0x298(0x20)
	struct FInteriorSettings DefaultAmbientZoneSettings;  // 0x2B8(0x24)
	char pad_732[4];  // 0x2DC(0x4)
	struct USoundMix* DefaultBaseSoundMix;  // 0x2E0(0x8)
	float TimeDilation;  // 0x2E8(0x4)
	float MatineeTimeDilation;  // 0x2EC(0x4)
	float DemoPlayTimeDilation;  // 0x2F0(0x4)
	float MinGlobalTimeDilation;  // 0x2F4(0x4)
	float MaxGlobalTimeDilation;  // 0x2F8(0x4)
	float MinUndilatedFrameTime;  // 0x2FC(0x4)
	float MaxUndilatedFrameTime;  // 0x300(0x4)
	struct FBroadphaseSettings BroadphaseSettings;  // 0x304(0x24)
	struct APlayerState* Pauser;  // 0x328(0x8)
	struct TArray<struct FNetViewer> ReplicationViewers;  // 0x330(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x340(0x10)
	struct APlayerState* PauserPlayerState;  // 0x350(0x8)
	int32_t MaxNumberOfBookmarks;  // 0x358(0x4)
	char pad_860[4];  // 0x35C(0x4)
	UBookmarkBase* DefaultBookmarkClass;  // 0x360(0x8)
	struct TArray<struct UBookmarkBase*> BookmarkArray;  // 0x368(0x10)
	UBookmarkBase* LastBookmarkClass;  // 0x378(0x8)

	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ
}; 



// Class Engine.InputKeyDelegateBinding
// Size: 0x38(Inherited: 0x28) 
struct UInputKeyDelegateBinding : public UInputDelegateBinding
{
	struct TArray<struct FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;  // 0x28(0x10)

}; 



// Class Engine.MaterialExpressionArctangentFast
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionArctangentFast : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.SphereReflectionCaptureComponent
// Size: 0x280(Inherited: 0x270) 
struct USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
	float InfluenceRadius;  // 0x270(0x4)
	float CaptureDistanceScale;  // 0x274(0x4)
	struct UDrawSphereComponent* PreviewInfluenceRadius;  // 0x278(0x8)

}; 



// Class Engine.World
// Size: 0x7B0(Inherited: 0x28) 
struct UWorld : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct ULevel* PersistentLevel;  // 0x30(0x8)
	struct UNetDriver* NetDriver;  // 0x38(0x8)
	struct ULineBatchComponent* LineBatcher;  // 0x40(0x8)
	struct ULineBatchComponent* PersistentLineBatcher;  // 0x48(0x8)
	struct ULineBatchComponent* ForegroundLineBatcher;  // 0x50(0x8)
	struct AGameNetworkManager* NetworkManager;  // 0x58(0x8)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler;  // 0x60(0x8)
	struct TArray<struct UObject*> ExtraReferencedObjects;  // 0x68(0x10)
	struct TArray<struct UObject*> PerModuleDataObjects;  // 0x78(0x10)
	struct TArray<struct ULevelStreaming*> StreamingLevels;  // 0x88(0x10)
	struct FStreamingLevelsToConsider StreamingLevelsToConsider;  // 0x98(0x28)
	struct FString StreamingLevelsPrefix;  // 0xC0(0x10)
	struct ULevel* CurrentLevelPendingVisibility;  // 0xD0(0x8)
	struct ULevel* CurrentLevelPendingInvisibility;  // 0xD8(0x8)
	struct UDemoNetDriver* DemoNetDriver;  // 0xE0(0x8)
	struct AParticleEventManager* MyParticleEventManager;  // 0xE8(0x8)
	struct APhysicsVolume* DefaultPhysicsVolume;  // 0xF0(0x8)
	char pad_248[22];  // 0xF8(0x16)
	char pad_270_1 : 2;  // 0x10E(0x1)
	char bAreConstraintsDirty : 1;  // 0x10E(0x1)
	char pad_270_2 : 5;  // 0x10E(0x1)
	char pad_271[2];  // 0x10F(0x2)
	struct UNavigationSystemBase* NavigationSystem;  // 0x110(0x8)
	struct AGameModeBase* AuthorityGameMode;  // 0x118(0x8)
	struct AGameStateBase* GameState;  // 0x120(0x8)
	struct UAISystemBase* AISystem;  // 0x128(0x8)
	struct UAvoidanceManager* AvoidanceManager;  // 0x130(0x8)
	struct TArray<struct ULevel*> Levels;  // 0x138(0x10)
	struct TArray<struct FLevelCollection> LevelCollections;  // 0x148(0x10)
	char pad_344[40];  // 0x158(0x28)
	struct UGameInstance* OwningGameInstance;  // 0x180(0x8)
	struct TArray<struct UMaterialParameterCollectionInstance*> ParameterCollectionInstances;  // 0x188(0x10)
	struct UCanvas* CanvasForRenderingToTarget;  // 0x198(0x8)
	struct UCanvas* CanvasForDrawMaterialToRenderTarget;  // 0x1A0(0x8)
	char pad_424[80];  // 0x1A8(0x50)
	struct UPhysicsFieldComponent* PhysicsField;  // 0x1F8(0x8)
	struct TSet<struct UActorComponent*> ComponentsThatNeedPreEndOfFrameSync;  // 0x200(0x50)
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate;  // 0x250(0x10)
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;  // 0x260(0x10)
	char pad_624[880];  // 0x270(0x370)
	struct UWorldComposition* WorldComposition;  // 0x5E0(0x8)
	char pad_1512[168];  // 0x5E8(0xA8)
	struct FWorldPSCPool PSCPool;  // 0x690(0x58)
	char pad_1768[200];  // 0x6E8(0xC8)

	struct AWorldSettings* K2_GetWorldSettings(); // Function Engine.World.K2_GetWorldSettings
	void HandleTimelineScrubbed(); // Function Engine.World.HandleTimelineScrubbed
}; 



// Class Engine.ControlChannel
// Size: 0x80(Inherited: 0x68) 
struct UControlChannel : public UChannel
{
	char pad_104[24];  // 0x68(0x18)

}; 



// Class Engine.InterpTrackInst
// Size: 0x28(Inherited: 0x28) 
struct UInterpTrackInst : public UObject
{

}; 



// Class Engine.TimelineTemplate
// Size: 0xB8(Inherited: 0x28) 
struct UTimelineTemplate : public UObject
{
	float TimelineLength;  // 0x28(0x4)
	char ETimelineLengthMode LengthMode;  // 0x2C(0x1)
	char bAutoPlay : 1;  // 0x2D(0x1)
	char bLoop : 1;  // 0x2D(0x1)
	char bReplicated : 1;  // 0x2D(0x1)
	char bIgnoreTimeDilation : 1;  // 0x2D(0x1)
	char pad_45_1 : 4;  // 0x2D(0x1)
	char pad_46[3];  // 0x2E(0x3)
	struct TArray<struct FTTEventTrack> EventTracks;  // 0x30(0x10)
	struct TArray<struct FTTFloatTrack> FloatTracks;  // 0x40(0x10)
	struct TArray<struct FTTVectorTrack> VectorTracks;  // 0x50(0x10)
	struct TArray<struct FTTLinearColorTrack> LinearColorTracks;  // 0x60(0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray;  // 0x70(0x10)
	struct FGuid TimelineGuid;  // 0x80(0x10)
	char ETickingGroup TimelineTickGroup;  // 0x90(0x1)
	char pad_145[3];  // 0x91(0x3)
	struct FName VariableName;  // 0x94(0x8)
	struct FName DirectionPropertyName;  // 0x9C(0x8)
	struct FName UpdateFunctionName;  // 0xA4(0x8)
	struct FName FinishedFunctionName;  // 0xAC(0x8)
	char pad_180[4];  // 0xB4(0x4)

}; 



// Class Engine.NavPathObserverInterface
// Size: 0x28(Inherited: 0x28) 
struct UNavPathObserverInterface : public UInterface
{

}; 



// Class Engine.WorldSubsystem
// Size: 0x30(Inherited: 0x30) 
struct UWorldSubsystem : public USubsystem
{

}; 



// Class Engine.MaterialExpression
// Size: 0x40(Inherited: 0x28) 
struct UMaterialExpression : public UObject
{
	struct UMaterial* Material;  // 0x28(0x8)
	struct UMaterialFunction* Function;  // 0x30(0x8)
	char bIsParameterExpression : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[8];  // 0x39(0x8)

}; 



// Class Engine.SoundNodeParamCrossFade
// Size: 0x60(Inherited: 0x58) 
struct USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
	struct FName ParamName;  // 0x58(0x8)

}; 



// Class Engine.SoundEffectSubmixPreset
// Size: 0x68(Inherited: 0x68) 
struct USoundEffectSubmixPreset : public USoundEffectPreset
{

}; 



// Class Engine.LevelPartitionInterface
// Size: 0x28(Inherited: 0x28) 
struct ULevelPartitionInterface : public UInterface
{

}; 



// Class Engine.SplineComponent
// Size: 0x550(Inherited: 0x450) 
struct USplineComponent : public UPrimitiveComponent
{
	struct FSplineCurves SplineCurves;  // 0x450(0x70)
	struct FInterpCurveVector SplineInfo;  // 0x4C0(0x18)
	struct FInterpCurveQuat SplineRotInfo;  // 0x4D8(0x18)
	struct FInterpCurveVector SplineScaleInfo;  // 0x4F0(0x18)
	struct FInterpCurveFloat SplineReparamTable;  // 0x508(0x18)
	char pad_1312_1 : 7;  // 0x520(0x1)
	bool bAllowSplineEditingPerInstance : 1;  // 0x520(0x1)
	char pad_1313[3];  // 0x521(0x3)
	int32_t ReparamStepsPerSegment;  // 0x524(0x4)
	float Duration;  // 0x528(0x4)
	char pad_1324_1 : 7;  // 0x52C(0x1)
	bool bStationaryEndpoints : 1;  // 0x52C(0x1)
	char pad_1325_1 : 7;  // 0x52D(0x1)
	bool bSplineHasBeenEdited : 1;  // 0x52D(0x1)
	char pad_1326_1 : 7;  // 0x52E(0x1)
	bool bModifiedByConstructionScript : 1;  // 0x52E(0x1)
	char pad_1327_1 : 7;  // 0x52F(0x1)
	bool bInputSplinePointsToConstructionScript : 1;  // 0x52F(0x1)
	char pad_1328_1 : 7;  // 0x530(0x1)
	bool bDrawDebug : 1;  // 0x530(0x1)
	char pad_1329_1 : 7;  // 0x531(0x1)
	bool bClosedLoop : 1;  // 0x531(0x1)
	char pad_1330_1 : 7;  // 0x532(0x1)
	bool bLoopPositionOverride : 1;  // 0x532(0x1)
	char pad_1331[1];  // 0x533(0x1)
	float LoopPosition;  // 0x534(0x4)
	struct FVector DefaultUpVector;  // 0x538(0xC)
	char pad_1348[12];  // 0x544(0xC)

	void UpdateSpline(); // Function Engine.SplineComponent.UpdateSpline
	void SetWorldLocationAtSplinePoint(int32_t PointIndex, struct FVector& InLocation); // Function Engine.SplineComponent.SetWorldLocationAtSplinePoint
	void SetUpVectorAtSplinePoint(int32_t PointIndex, struct FVector& InUpVector, char ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetUpVectorAtSplinePoint
	void SetUnselectedSplineSegmentColor(struct FLinearColor& SegmentColor); // Function Engine.SplineComponent.SetUnselectedSplineSegmentColor
	void SetTangentsAtSplinePoint(int32_t PointIndex, struct FVector& InArriveTangent, struct FVector& InLeaveTangent, char ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetTangentsAtSplinePoint
	void SetTangentColor(struct FLinearColor& TangentColor); // Function Engine.SplineComponent.SetTangentColor
	void SetTangentAtSplinePoint(int32_t PointIndex, struct FVector& InTangent, char ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetTangentAtSplinePoint
	void SetSplineWorldPoints(struct TArray<struct FVector>& Points); // Function Engine.SplineComponent.SetSplineWorldPoints
	void SetSplinePointType(int32_t PointIndex, char ESplinePointType Type, bool bUpdateSpline); // Function Engine.SplineComponent.SetSplinePointType
	void SetSplinePoints(struct TArray<struct FVector>& Points, char ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetSplinePoints
	void SetSplineLocalPoints(struct TArray<struct FVector>& Points); // Function Engine.SplineComponent.SetSplineLocalPoints
	void SetSelectedSplineSegmentColor(struct FLinearColor& SegmentColor); // Function Engine.SplineComponent.SetSelectedSplineSegmentColor
	void SetScaleAtSplinePoint(int32_t PointIndex, struct FVector& InScaleVector, bool bUpdateSpline); // Function Engine.SplineComponent.SetScaleAtSplinePoint
	void SetRotationAtSplinePoint(int32_t PointIndex, struct FRotator& InRotation, char ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetRotationAtSplinePoint
	void SetLocationAtSplinePoint(int32_t PointIndex, struct FVector& InLocation, char ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetLocationAtSplinePoint
	void SetDrawDebug(bool bShow); // Function Engine.SplineComponent.SetDrawDebug
	void SetDefaultUpVector(struct FVector& UpVector, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.SetDefaultUpVector
	void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline); // Function Engine.SplineComponent.SetClosedLoopAtPosition
	void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline); // Function Engine.SplineComponent.SetClosedLoop
	void RemoveSplinePoint(int32_t Index, bool bUpdateSpline); // Function Engine.SplineComponent.RemoveSplinePoint
	bool IsClosedLoop(); // Function Engine.SplineComponent.IsClosedLoop
	struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline
	struct FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldRotationAtTime
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline
	struct FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldLocationAtTime
	struct FVector GetWorldLocationAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetWorldLocationAtSplinePoint
	struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline
	struct FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldDirectionAtTime
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline
	struct FVector GetVectorPropertyAtSplinePoint(int32_t Index, struct FName PropertyName); // Function Engine.SplineComponent.GetVectorPropertyAtSplinePoint
	struct FVector GetVectorPropertyAtSplineInputKey(float InKey, struct FName PropertyName); // Function Engine.SplineComponent.GetVectorPropertyAtSplineInputKey
	struct FVector GetUpVectorAtTime(float Time, char ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetUpVectorAtTime
	struct FVector GetUpVectorAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtSplinePoint
	struct FVector GetUpVectorAtSplineInputKey(float InKey, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtSplineInputKey
	struct FVector GetUpVectorAtDistanceAlongSpline(float Distance, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline
	struct FTransform GetTransformAtTime(float Time, char ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtTime
	struct FTransform GetTransformAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtSplinePoint
	struct FTransform GetTransformAtSplineInputKey(float InKey, char ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtSplineInputKey
	struct FTransform GetTransformAtDistanceAlongSpline(float Distance, char ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline
	struct FVector GetTangentAtTime(float Time, char ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetTangentAtTime
	struct FVector GetTangentAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtSplinePoint
	struct FVector GetTangentAtSplineInputKey(float InKey, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtSplineInputKey
	struct FVector GetTangentAtDistanceAlongSpline(float Distance, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline
	char ESplinePointType GetSplinePointType(int32_t PointIndex); // Function Engine.SplineComponent.GetSplinePointType
	float GetSplineLength(); // Function Engine.SplineComponent.GetSplineLength
	struct FVector GetScaleAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetScaleAtTime
	struct FVector GetScaleAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetScaleAtSplinePoint
	struct FVector GetScaleAtSplineInputKey(float InKey); // Function Engine.SplineComponent.GetScaleAtSplineInputKey
	struct FVector GetScaleAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline
	struct FRotator GetRotationAtTime(float Time, char ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRotationAtTime
	struct FRotator GetRotationAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtSplinePoint
	struct FRotator GetRotationAtSplineInputKey(float InKey, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtSplineInputKey
	struct FRotator GetRotationAtDistanceAlongSpline(float Distance, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline
	float GetRollAtTime(float Time, char ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRollAtTime
	float GetRollAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRollAtSplinePoint
	float GetRollAtSplineInputKey(float InKey, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRollAtSplineInputKey
	float GetRollAtDistanceAlongSpline(float Distance, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRollAtDistanceAlongSpline
	struct FVector GetRightVectorAtTime(float Time, char ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRightVectorAtTime
	struct FVector GetRightVectorAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtSplinePoint
	struct FVector GetRightVectorAtSplineInputKey(float InKey, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtSplineInputKey
	struct FVector GetRightVectorAtDistanceAlongSpline(float Distance, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline
	int32_t GetNumberOfSplineSegments(); // Function Engine.SplineComponent.GetNumberOfSplineSegments
	int32_t GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints
	struct FVector GetLocationAtTime(float Time, char ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetLocationAtTime
	struct FVector GetLocationAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtSplinePoint
	struct FVector GetLocationAtSplineInputKey(float InKey, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtSplineInputKey
	struct FVector GetLocationAtDistanceAlongSpline(float Distance, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline
	void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, struct FVector& Location, struct FVector& Tangent, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint
	void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, struct FVector& LocalLocation, struct FVector& LocalTangent); // Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint
	struct FVector GetLeaveTangentAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetLeaveTangentAtSplinePoint
	float GetInputKeyAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline
	float GetFloatPropertyAtSplinePoint(int32_t Index, struct FName PropertyName); // Function Engine.SplineComponent.GetFloatPropertyAtSplinePoint
	float GetFloatPropertyAtSplineInputKey(float InKey, struct FName PropertyName); // Function Engine.SplineComponent.GetFloatPropertyAtSplineInputKey
	float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint
	float GetDistanceAlongSplineAtSplineInputKey(float InKey); // Function Engine.SplineComponent.GetDistanceAlongSplineAtSplineInputKey
	struct FVector GetDirectionAtTime(float Time, char ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetDirectionAtTime
	struct FVector GetDirectionAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtSplinePoint
	struct FVector GetDirectionAtSplineInputKey(float InKey, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtSplineInputKey
	struct FVector GetDirectionAtDistanceAlongSpline(float Distance, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline
	struct FVector GetDefaultUpVector(char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetDefaultUpVector
	struct FVector GetArriveTangentAtSplinePoint(int32_t PointIndex, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.GetArriveTangentAtSplinePoint
	struct FVector FindUpVectorClosestToWorldLocation(struct FVector& WorldLocation, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.FindUpVectorClosestToWorldLocation
	struct FTransform FindTransformClosestToWorldLocation(struct FVector& WorldLocation, char ESplineCoordinateSpace CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.FindTransformClosestToWorldLocation
	struct FVector FindTangentClosestToWorldLocation(struct FVector& WorldLocation, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.FindTangentClosestToWorldLocation
	struct FVector FindScaleClosestToWorldLocation(struct FVector& WorldLocation); // Function Engine.SplineComponent.FindScaleClosestToWorldLocation
	struct FRotator FindRotationClosestToWorldLocation(struct FVector& WorldLocation, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.FindRotationClosestToWorldLocation
	float FindRollClosestToWorldLocation(struct FVector& WorldLocation, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.FindRollClosestToWorldLocation
	struct FVector FindRightVectorClosestToWorldLocation(struct FVector& WorldLocation, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.FindRightVectorClosestToWorldLocation
	struct FVector FindLocationClosestToWorldLocation(struct FVector& WorldLocation, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.FindLocationClosestToWorldLocation
	float FindInputKeyClosestToWorldLocation(struct FVector& WorldLocation); // Function Engine.SplineComponent.FindInputKeyClosestToWorldLocation
	struct FVector FindDirectionClosestToWorldLocation(struct FVector& WorldLocation, char ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.FindDirectionClosestToWorldLocation
	void ClearSplinePoints(bool bUpdateSpline); // Function Engine.SplineComponent.ClearSplinePoints
	void AddSplineWorldPoint(struct FVector& position); // Function Engine.SplineComponent.AddSplineWorldPoint
	void AddSplinePointAtIndex(struct FVector& position, int32_t Index, char ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.AddSplinePointAtIndex
	void AddSplinePoint(struct FVector& position, char ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.AddSplinePoint
	void AddSplineLocalPoint(struct FVector& position); // Function Engine.SplineComponent.AddSplineLocalPoint
	void AddPoints(struct TArray<struct FSplinePoint>& Points, bool bUpdateSpline); // Function Engine.SplineComponent.AddPoints
	void AddPoint(struct FSplinePoint& Point, bool bUpdateSpline); // Function Engine.SplineComponent.AddPoint
}; 



// Class Engine.Commandlet
// Size: 0x80(Inherited: 0x28) 
struct UCommandlet : public UObject
{
	struct FString HelpDescription;  // 0x28(0x10)
	struct FString HelpUsage;  // 0x38(0x10)
	struct FString HelpWebLink;  // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames;  // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions;  // 0x68(0x10)
	char IsServer : 1;  // 0x78(0x1)
	char IsClient : 1;  // 0x78(0x1)
	char IsEditor : 1;  // 0x78(0x1)
	char LogToConsole : 1;  // 0x78(0x1)
	char ShowErrorCount : 1;  // 0x78(0x1)
	char ShowProgress : 1;  // 0x78(0x1)
	char pad_120_1 : 2;  // 0x78(0x1)
	char pad_121[8];  // 0x79(0x8)

}; 



// Class Engine.AtmosphericFog
// Size: 0x228(Inherited: 0x220) 
struct AAtmosphericFog : public AInfo
{
	struct UAtmosphericFogComponent* AtmosphericFogComponent;  // 0x220(0x8)

}; 



// Class Engine.CharacterMovementComponent
// Size: 0xAF0(Inherited: 0x138) 
struct UCharacterMovementComponent : public UPawnMovementComponent
{
	char pad_312[16];  // 0x138(0x10)
	struct ACharacter* CharacterOwner;  // 0x148(0x8)
	float GravityScale;  // 0x150(0x4)
	float MaxStepHeight;  // 0x154(0x4)
	float JumpZVelocity;  // 0x158(0x4)
	float JumpOffJumpZFactor;  // 0x15C(0x4)
	float WalkableFloorAngle;  // 0x160(0x4)
	float WalkableFloorZ;  // 0x164(0x4)
	char EMovementMode MovementMode;  // 0x168(0x1)
	char CustomMovementMode;  // 0x169(0x1)
	uint8_t  NetworkSmoothingMode;  // 0x16A(0x1)
	char pad_363[1];  // 0x16B(0x1)
	float GroundFriction;  // 0x16C(0x4)
	char pad_368[28];  // 0x170(0x1C)
	float MaxWalkSpeed;  // 0x18C(0x4)
	float MaxWalkSpeedCrouched;  // 0x190(0x4)
	float MaxSwimSpeed;  // 0x194(0x4)
	float MaxFlySpeed;  // 0x198(0x4)
	float MaxCustomMovementSpeed;  // 0x19C(0x4)
	float MaxAcceleration;  // 0x1A0(0x4)
	float MinAnalogWalkSpeed;  // 0x1A4(0x4)
	float BrakingFrictionFactor;  // 0x1A8(0x4)
	float BrakingFriction;  // 0x1AC(0x4)
	float BrakingSubStepTime;  // 0x1B0(0x4)
	float BrakingDecelerationWalking;  // 0x1B4(0x4)
	float BrakingDecelerationFalling;  // 0x1B8(0x4)
	float BrakingDecelerationSwimming;  // 0x1BC(0x4)
	float BrakingDecelerationFlying;  // 0x1C0(0x4)
	float AirControl;  // 0x1C4(0x4)
	float AirControlBoostMultiplier;  // 0x1C8(0x4)
	float AirControlBoostVelocityThreshold;  // 0x1CC(0x4)
	float FallingLateralFriction;  // 0x1D0(0x4)
	float CrouchedHalfHeight;  // 0x1D4(0x4)
	float Buoyancy;  // 0x1D8(0x4)
	float PerchRadiusThreshold;  // 0x1DC(0x4)
	float PerchAdditionalHeight;  // 0x1E0(0x4)
	struct FRotator RotationRate;  // 0x1E4(0xC)
	char bUseSeparateBrakingFriction : 1;  // 0x1F0(0x1)
	char bApplyGravityWhileJumping : 1;  // 0x1F0(0x1)
	char bUseControllerDesiredRotation : 1;  // 0x1F0(0x1)
	char bOrientRotationToMovement : 1;  // 0x1F0(0x1)
	char bSweepWhileNavWalking : 1;  // 0x1F0(0x1)
	char pad_496_1 : 1;  // 0x1F0(0x1)
	char bMovementInProgress : 1;  // 0x1F0(0x1)
	char bEnableScopedMovementUpdates : 1;  // 0x1F0(0x1)
	char bEnableServerDualMoveScopedMovementUpdates : 1;  // 0x1F1(0x1)
	char bForceMaxAccel : 1;  // 0x1F1(0x1)
	char bRunPhysicsWithNoController : 1;  // 0x1F1(0x1)
	char bForceNextFloorCheck : 1;  // 0x1F1(0x1)
	char bShrinkProxyCapsule : 1;  // 0x1F1(0x1)
	char bCanWalkOffLedges : 1;  // 0x1F1(0x1)
	char bCanWalkOffLedgesWhenCrouching : 1;  // 0x1F1(0x1)
	char pad_497_1 : 1;  // 0x1F1(0x1)
	char pad_498_1 : 1;  // 0x1F2(0x1)
	char bNetworkSkipProxyPredictionOnNetUpdate : 1;  // 0x1F2(0x1)
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1;  // 0x1F2(0x1)
	char bDeferUpdateMoveComponent : 1;  // 0x1F2(0x1)
	char bEnablePhysicsInteraction : 1;  // 0x1F2(0x1)
	char bTouchForceScaledToMass : 1;  // 0x1F2(0x1)
	char bPushForceScaledToMass : 1;  // 0x1F2(0x1)
	char bPushForceUsingZOffset : 1;  // 0x1F2(0x1)
	char bScalePushForceToVelocity : 1;  // 0x1F3(0x1)
	char pad_499_1 : 7;  // 0x1F3(0x1)
	char pad_500[5];  // 0x1F4(0x5)
	struct USceneComponent* DeferredUpdatedMoveComponent;  // 0x1F8(0x8)
	float MaxOutOfWaterStepHeight;  // 0x200(0x4)
	float OutofWaterZ;  // 0x204(0x4)
	float Mass;  // 0x208(0x4)
	float StandingDownwardForceScale;  // 0x20C(0x4)
	float InitialPushForceFactor;  // 0x210(0x4)
	float PushForceFactor;  // 0x214(0x4)
	float PushForcePointZOffsetFactor;  // 0x218(0x4)
	float TouchForceFactor;  // 0x21C(0x4)
	float MinTouchForce;  // 0x220(0x4)
	float MaxTouchForce;  // 0x224(0x4)
	float RepulsionForce;  // 0x228(0x4)
	struct FVector Acceleration;  // 0x22C(0xC)
	char pad_568[8];  // 0x238(0x8)
	struct FQuat LastUpdateRotation;  // 0x240(0x10)
	struct FVector LastUpdateLocation;  // 0x250(0xC)
	struct FVector LastUpdateVelocity;  // 0x25C(0xC)
	float ServerLastTransformUpdateTimeStamp;  // 0x268(0x4)
	float ServerLastClientGoodMoveAckTime;  // 0x26C(0x4)
	float ServerLastClientAdjustmentTime;  // 0x270(0x4)
	struct FVector PendingImpulseToApply;  // 0x274(0xC)
	struct FVector PendingForceToApply;  // 0x280(0xC)
	float AnalogInputModifier;  // 0x28C(0x4)
	char pad_656[12];  // 0x290(0xC)
	float MaxSimulationTimeStep;  // 0x29C(0x4)
	int32_t MaxSimulationIterations;  // 0x2A0(0x4)
	int32_t MaxJumpApexAttemptsPerSimulation;  // 0x2A4(0x4)
	float MaxDepenetrationWithGeometry;  // 0x2A8(0x4)
	float MaxDepenetrationWithGeometryAsProxy;  // 0x2AC(0x4)
	float MaxDepenetrationWithPawn;  // 0x2B0(0x4)
	float MaxDepenetrationWithPawnAsProxy;  // 0x2B4(0x4)
	float NetworkSimulatedSmoothLocationTime;  // 0x2B8(0x4)
	float NetworkSimulatedSmoothRotationTime;  // 0x2BC(0x4)
	float ListenServerNetworkSimulatedSmoothLocationTime;  // 0x2C0(0x4)
	float ListenServerNetworkSimulatedSmoothRotationTime;  // 0x2C4(0x4)
	float NetProxyShrinkRadius;  // 0x2C8(0x4)
	float NetProxyShrinkHalfHeight;  // 0x2CC(0x4)
	float NetworkMaxSmoothUpdateDistance;  // 0x2D0(0x4)
	float NetworkNoSmoothUpdateDistance;  // 0x2D4(0x4)
	float NetworkMinTimeBetweenClientAckGoodMoves;  // 0x2D8(0x4)
	float NetworkMinTimeBetweenClientAdjustments;  // 0x2DC(0x4)
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection;  // 0x2E0(0x4)
	float NetworkLargeClientCorrectionDistance;  // 0x2E4(0x4)
	float LedgeCheckThreshold;  // 0x2E8(0x4)
	float JumpOutOfWaterPitch;  // 0x2EC(0x4)
	struct FFindFloorResult CurrentFloor;  // 0x2F0(0x94)
	char EMovementMode DefaultLandMovementMode;  // 0x384(0x1)
	char EMovementMode DefaultWaterMovementMode;  // 0x385(0x1)
	char EMovementMode GroundMovementMode;  // 0x386(0x1)
	char bMaintainHorizontalGroundVelocity : 1;  // 0x387(0x1)
	char bImpartBaseVelocityX : 1;  // 0x387(0x1)
	char bImpartBaseVelocityY : 1;  // 0x387(0x1)
	char bImpartBaseVelocityZ : 1;  // 0x387(0x1)
	char bImpartBaseAngularVelocity : 1;  // 0x387(0x1)
	char bJustTeleported : 1;  // 0x387(0x1)
	char bNetworkUpdateReceived : 1;  // 0x387(0x1)
	char bNetworkMovementModeChanged : 1;  // 0x387(0x1)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1;  // 0x388(0x1)
	char bServerAcceptClientAuthoritativePosition : 1;  // 0x388(0x1)
	char bNotifyApex : 1;  // 0x388(0x1)
	char bCheatFlying : 1;  // 0x388(0x1)
	char bWantsToCrouch : 1;  // 0x388(0x1)
	char bCrouchMaintainsBaseLocation : 1;  // 0x388(0x1)
	char bIgnoreBaseRotation : 1;  // 0x388(0x1)
	char bFastAttachedMove : 1;  // 0x388(0x1)
	char bAlwaysCheckFloor : 1;  // 0x389(0x1)
	char bUseFlatBaseForFloorChecks : 1;  // 0x389(0x1)
	char bPerformingJumpOff : 1;  // 0x389(0x1)
	char bWantsToLeaveNavWalking : 1;  // 0x389(0x1)
	char bUseRVOAvoidance : 1;  // 0x389(0x1)
	char bRequestedMoveUseAcceleration : 1;  // 0x389(0x1)
	char pad_905_1 : 1;  // 0x389(0x1)
	char bWasSimulatingRootMotion : 1;  // 0x389(0x1)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1;  // 0x38A(0x1)
	char bHasRequestedVelocity : 1;  // 0x38A(0x1)
	char bRequestedMoveWithMaxSpeed : 1;  // 0x38A(0x1)
	char bWasAvoidanceUpdated : 1;  // 0x38A(0x1)
	char pad_906_1 : 2;  // 0x38A(0x1)
	char bProjectNavMeshWalking : 1;  // 0x38A(0x1)
	char bProjectNavMeshOnBothWorldChannels : 1;  // 0x38A(0x1)
	char pad_907[17];  // 0x38B(0x11)
	float AvoidanceConsiderationRadius;  // 0x39C(0x4)
	struct FVector RequestedVelocity;  // 0x3A0(0xC)
	int32_t AvoidanceUID;  // 0x3AC(0x4)
	struct FNavAvoidanceMask AvoidanceGroup;  // 0x3B0(0x4)
	struct FNavAvoidanceMask GroupsToAvoid;  // 0x3B4(0x4)
	struct FNavAvoidanceMask GroupsToIgnore;  // 0x3B8(0x4)
	float AvoidanceWeight;  // 0x3BC(0x4)
	struct FVector PendingLaunchVelocity;  // 0x3C0(0xC)
	char pad_972[164];  // 0x3CC(0xA4)
	float NavMeshProjectionInterval;  // 0x470(0x4)
	float NavMeshProjectionTimer;  // 0x474(0x4)
	float NavMeshProjectionInterpSpeed;  // 0x478(0x4)
	float NavMeshProjectionHeightScaleUp;  // 0x47C(0x4)
	float NavMeshProjectionHeightScaleDown;  // 0x480(0x4)
	float NavWalkingFloorDistTolerance;  // 0x484(0x4)
	struct FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction;  // 0x488(0x30)
	char pad_1208[24];  // 0x4B8(0x18)
	float MinTimeBetweenTimeStampResets;  // 0x4D0(0x4)
	char pad_1236[1196];  // 0x4D4(0x4AC)
	struct FRootMotionSourceGroup CurrentRootMotion;  // 0x980(0x38)
	struct FRootMotionSourceGroup ServerCorrectionRootMotion;  // 0x9B8(0x38)
	char pad_2544[144];  // 0x9F0(0x90)
	struct FRootMotionMovementParams RootMotionParams;  // 0xA80(0x40)
	struct FVector AnimRootMotionVelocity;  // 0xAC0(0xC)
	char pad_2764[36];  // 0xACC(0x24)

	void SetWalkableFloorZ(float InWalkableFloorZ); // Function Engine.CharacterMovementComponent.SetWalkableFloorZ
	void SetWalkableFloorAngle(float InWalkableFloorAngle); // Function Engine.CharacterMovementComponent.SetWalkableFloorAngle
	void SetMovementMode(char EMovementMode NewMovementMode, char NewCustomMode); // Function Engine.CharacterMovementComponent.SetMovementMode
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask); // Function Engine.CharacterMovementComponent.SetGroupsToIgnoreMask
	void SetGroupsToIgnore(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetGroupsToIgnore
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask); // Function Engine.CharacterMovementComponent.SetGroupsToAvoidMask
	void SetGroupsToAvoid(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetGroupsToAvoid
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask); // Function Engine.CharacterMovementComponent.SetAvoidanceGroupMask
	void SetAvoidanceGroup(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetAvoidanceGroup
	void SetAvoidanceEnabled(bool bEnable); // Function Engine.CharacterMovementComponent.SetAvoidanceEnabled
	float K2_GetWalkableFloorZ(); // Function Engine.CharacterMovementComponent.K2_GetWalkableFloorZ
	float K2_GetWalkableFloorAngle(); // Function Engine.CharacterMovementComponent.K2_GetWalkableFloorAngle
	float K2_GetModifiedMaxAcceleration(); // Function Engine.CharacterMovementComponent.K2_GetModifiedMaxAcceleration
	void K2_FindFloor(struct FVector CapsuleLocation, struct FFindFloorResult& FloorResult); // Function Engine.CharacterMovementComponent.K2_FindFloor
	void K2_ComputeFloorDist(struct FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult& FloorResult); // Function Engine.CharacterMovementComponent.K2_ComputeFloorDist
	bool IsWalking(); // Function Engine.CharacterMovementComponent.IsWalking
	bool IsWalkable(struct FHitResult& Hit); // Function Engine.CharacterMovementComponent.IsWalkable
	float GetValidPerchRadius(); // Function Engine.CharacterMovementComponent.GetValidPerchRadius
	float GetPerchRadiusThreshold(); // Function Engine.CharacterMovementComponent.GetPerchRadiusThreshold
	struct UPrimitiveComponent* GetMovementBase(); // Function Engine.CharacterMovementComponent.GetMovementBase
	float GetMinAnalogSpeed(); // Function Engine.CharacterMovementComponent.GetMinAnalogSpeed
	float GetMaxJumpHeightWithJumpTime(); // Function Engine.CharacterMovementComponent.GetMaxJumpHeightWithJumpTime
	float GetMaxJumpHeight(); // Function Engine.CharacterMovementComponent.GetMaxJumpHeight
	float GetMaxBrakingDeceleration(); // Function Engine.CharacterMovementComponent.GetMaxBrakingDeceleration
	float GetMaxAcceleration(); // Function Engine.CharacterMovementComponent.GetMaxAcceleration
	struct FVector GetLastUpdateVelocity(); // Function Engine.CharacterMovementComponent.GetLastUpdateVelocity
	struct FRotator GetLastUpdateRotation(); // Function Engine.CharacterMovementComponent.GetLastUpdateRotation
	struct FVector GetLastUpdateLocation(); // Function Engine.CharacterMovementComponent.GetLastUpdateLocation
	struct FVector GetImpartedMovementBaseVelocity(); // Function Engine.CharacterMovementComponent.GetImpartedMovementBaseVelocity
	struct FVector GetCurrentAcceleration(); // Function Engine.CharacterMovementComponent.GetCurrentAcceleration
	struct ACharacter* GetCharacterOwner(); // Function Engine.CharacterMovementComponent.GetCharacterOwner
	float GetAnalogInputModifier(); // Function Engine.CharacterMovementComponent.GetAnalogInputModifier
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement
	void ClearAccumulatedForces(); // Function Engine.CharacterMovementComponent.ClearAccumulatedForces
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Engine.CharacterMovementComponent.CapsuleTouched
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration); // Function Engine.CharacterMovementComponent.CalcVelocity
	void AddImpulse(struct FVector Impulse, bool bVelocityChange); // Function Engine.CharacterMovementComponent.AddImpulse
	void AddForce(struct FVector force); // Function Engine.CharacterMovementComponent.AddForce
}; 



// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x60(Inherited: 0x30) 
struct UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
	struct UParticleSystem* PSTemplate;  // 0x30(0x8)
	struct FName SocketName;  // 0x38(0x8)
	struct FVector LocationOffset;  // 0x40(0xC)
	struct FRotator RotationOffset;  // 0x4C(0xC)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bDestroyAtEnd : 1;  // 0x58(0x1)
	char pad_89[7];  // 0x59(0x7)

}; 



// Class Engine.DistributionFloatUniformCurve
// Size: 0x50(Inherited: 0x38) 
struct UDistributionFloatUniformCurve : public UDistributionFloat
{
	struct FInterpCurveVector2D ConstantCurve;  // 0x38(0x18)

}; 



// Class Engine.StereoLayerComponent
// Size: 0x2E0(Inherited: 0x200) 
struct UStereoLayerComponent : public USceneComponent
{
	char bLiveTexture : 1;  // 0x1F8(0x1)
	char bSupportsDepth : 1;  // 0x1F8(0x1)
	char bNoAlphaChannel : 1;  // 0x1F8(0x1)
	struct UTexture* Texture;  // 0x200(0x8)
	struct UTexture* LeftTexture;  // 0x208(0x8)
	char bQuadPreserveTextureRatio : 1;  // 0x210(0x1)
	char pad_528_1 : 4;  // 0x210(0x1)
	char pad_529[4];  // 0x211(0x4)
	struct FVector2D QuadSize;  // 0x214(0x8)
	struct FBox2D UVRect;  // 0x21C(0x14)
	float CylinderRadius;  // 0x230(0x4)
	float CylinderOverlayArc;  // 0x234(0x4)
	int32_t CylinderHeight;  // 0x238(0x4)
	struct FEquirectProps EquirectProps;  // 0x23C(0x48)
	char EStereoLayerType StereoLayerType;  // 0x284(0x1)
	char EStereoLayerShape StereoLayerShape;  // 0x285(0x1)
	char pad_646[2];  // 0x286(0x2)
	struct UStereoLayerShape* Shape;  // 0x288(0x8)
	int32_t Priority;  // 0x290(0x4)
	char pad_660[76];  // 0x294(0x4C)

	void SetUVRect(struct FBox2D InUVRect); // Function Engine.StereoLayerComponent.SetUVRect
	void SetTexture(struct UTexture* InTexture); // Function Engine.StereoLayerComponent.SetTexture
	void SetQuadSize(struct FVector2D InQuadSize); // Function Engine.StereoLayerComponent.SetQuadSize
	void SetPriority(int32_t InPriority); // Function Engine.StereoLayerComponent.SetPriority
	void SetLeftTexture(struct UTexture* InTexture); // Function Engine.StereoLayerComponent.SetLeftTexture
	void SetEquirectProps(struct FEquirectProps InScaleBiases); // Function Engine.StereoLayerComponent.SetEquirectProps
	void MarkTextureForUpdate(); // Function Engine.StereoLayerComponent.MarkTextureForUpdate
	struct FBox2D GetUVRect(); // Function Engine.StereoLayerComponent.GetUVRect
	struct UTexture* GetTexture(); // Function Engine.StereoLayerComponent.GetTexture
	struct FVector2D GetQuadSize(); // Function Engine.StereoLayerComponent.GetQuadSize
	int32_t GetPriority(); // Function Engine.StereoLayerComponent.GetPriority
	struct UTexture* GetLeftTexture(); // Function Engine.StereoLayerComponent.GetLeftTexture
}; 



// Class Engine.DataTableFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{

	void GetDataTableRowNames(struct UDataTable* Table, struct TArray<struct FName>& OutRowNames); // Function Engine.DataTableFunctionLibrary.GetDataTableRowNames
	bool GetDataTableRowFromName(struct UDataTable* Table, struct FName RowName, struct FTableRowBase& OutRow); // Function Engine.DataTableFunctionLibrary.GetDataTableRowFromName
	struct TArray<struct FString> GetDataTableColumnAsString(struct UDataTable* DataTable, struct FName PropertyName); // Function Engine.DataTableFunctionLibrary.GetDataTableColumnAsString
	void EvaluateCurveTableRow(struct UCurveTable* CurveTable, struct FName RowName, float InXY, char EEvaluateCurveTableResult& OutResult, float& OutXY, struct FString ContextString); // Function Engine.DataTableFunctionLibrary.EvaluateCurveTableRow
	bool DoesDataTableRowExist(struct UDataTable* Table, struct FName RowName); // Function Engine.DataTableFunctionLibrary.DoesDataTableRowExist
}; 



// Class Engine.SphereReflectionCapture
// Size: 0x230(Inherited: 0x228) 
struct ASphereReflectionCapture : public AReflectionCapture
{
	struct UDrawSphereComponent* DrawCaptureRadius;  // 0x228(0x8)

}; 



// Class Engine.InstancedStaticMeshComponent
// Size: 0x590(Inherited: 0x4E0) 
struct UInstancedStaticMeshComponent : public UStaticMeshComponent
{
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData;  // 0x4E0(0x10)
	int32_t NumCustomDataFloats;  // 0x4F0(0x4)
	char pad_1268_1 : 7;  // 0x4F4(0x1)
	bool bKeepInstanceBufferCPUAccess : 1;  // 0x4F4(0x1)
	char pad_1269[3];  // 0x4F5(0x3)
	struct TArray<float> PerInstanceSMCustomData;  // 0x4F8(0x10)
	int32_t InstancingRandomSeed;  // 0x508(0x4)
	int32_t InstanceStartCullDistance;  // 0x50C(0x4)
	int32_t InstanceEndCullDistance;  // 0x510(0x4)
	char pad_1300[4];  // 0x514(0x4)
	struct TArray<int32_t> InstanceReorderTable;  // 0x518(0x10)
	char pad_1320[72];  // 0x528(0x48)
	int32_t NumPendingLightmaps;  // 0x570(0x4)
	char pad_1396[4];  // 0x574(0x4)
	struct TArray<struct FInstancedStaticMeshMappingInfo> CachedMappings;  // 0x578(0x10)
	char pad_1416[8];  // 0x588(0x8)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform
	bool SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // Function Engine.InstancedStaticMeshComponent.SetCustomDataValue
	void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance); // Function Engine.InstancedStaticMeshComponent.SetCullDistances
	bool RemoveInstance(int32_t InstanceIndex); // Function Engine.InstancedStaticMeshComponent.RemoveInstance
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstanceTransform
	struct TArray<int32_t> GetInstancesOverlappingSphere(struct FVector& Center, float Radius, bool bSphereInWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere
	struct TArray<int32_t> GetInstancesOverlappingBox(struct FBox& Box, bool bBoxInWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingBox
	int32_t GetInstanceCount(); // Function Engine.InstancedStaticMeshComponent.GetInstanceCount
	void ClearInstances(); // Function Engine.InstancedStaticMeshComponent.ClearInstances
	bool BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, struct TArray<struct FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransforms
	bool BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, struct FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransform
	int32_t AddInstanceWorldSpace(struct FTransform& WorldTransform); // Function Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace
	struct TArray<int32_t> AddInstances(struct TArray<struct FTransform>& InstanceTransforms, bool bShouldReturnIndices); // Function Engine.InstancedStaticMeshComponent.AddInstances
	int32_t AddInstance(struct FTransform& InstanceTransform); // Function Engine.InstancedStaticMeshComponent.AddInstance
}; 



// Class Engine.AnimMetaData
// Size: 0x28(Inherited: 0x28) 
struct UAnimMetaData : public UObject
{

}; 



// Class Engine.MaterialExpressionDecalLifetimeOpacity
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionDecalLifetimeOpacity : public UMaterialExpression
{

}; 



// Class Engine.ParticleModuleCollisionGPU
// Size: 0xA8(Inherited: 0x30) 
struct UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
	struct FRawDistributionFloat Resilience;  // 0x30(0x30)
	struct FRawDistributionFloat ResilienceScaleOverLife;  // 0x60(0x30)
	float Friction;  // 0x90(0x4)
	float RandomSpread;  // 0x94(0x4)
	float RandomDistribution;  // 0x98(0x4)
	float RadiusScale;  // 0x9C(0x4)
	float RadiusBias;  // 0xA0(0x4)
	char EParticleCollisionResponse Response;  // 0xA4(0x1)
	char EParticleCollisionMode CollisionMode;  // 0xA5(0x1)
	char pad_166[2];  // 0xA6(0x2)

}; 



// Class Engine.MaterialParameterCollection
// Size: 0x70(Inherited: 0x28) 
struct UMaterialParameterCollection : public UObject
{
	struct FGuid StateId;  // 0x28(0x10)
	struct TArray<struct FCollectionScalarParameter> ScalarParameters;  // 0x38(0x10)
	struct TArray<struct FCollectionVectorParameter> VectorParameters;  // 0x48(0x10)
	char pad_88[24];  // 0x58(0x18)

}; 



// Class Engine.MaterialExpressionQualitySwitch
// Size: 0xA8(Inherited: 0x40) 
struct UMaterialExpressionQualitySwitch : public UMaterialExpression
{
	struct FExpressionInput Default;  // 0x40(0x14)
	struct FExpressionInput Inputs[4];  // 0x54(0x50)
	char pad_164[4];  // 0xA4(0x4)

}; 



// Class Engine.EngineSubsystem
// Size: 0x30(Inherited: 0x30) 
struct UEngineSubsystem : public UDynamicSubsystem
{

}; 



// Class Engine.InterpTrackInstVectorProp
// Size: 0x68(Inherited: 0x50) 
struct UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
	char pad_80[8];  // 0x50(0x8)
	struct FVector ResetVector;  // 0x58(0xC)
	char pad_100[4];  // 0x64(0x4)

}; 



// Class Engine.LocalPlayer
// Size: 0x258(Inherited: 0x48) 
struct ULocalPlayer : public UPlayer
{
	char pad_72[40];  // 0x48(0x28)
	struct UGameViewportClient* ViewportClient;  // 0x70(0x8)
	char pad_120[28];  // 0x78(0x1C)
	char EAspectRatioAxisConstraint AspectRatioAxisConstraint;  // 0x94(0x1)
	char pad_149[3];  // 0x95(0x3)
	APlayerController* PendingLevelPlayerControllerClass;  // 0x98(0x8)
	char bSentSplitJoin : 1;  // 0xA0(0x1)
	char pad_160_1 : 7;  // 0xA0(0x1)
	char pad_161[24];  // 0xA1(0x18)
	int32_t ControllerId;  // 0xB8(0x4)
	char pad_188[412];  // 0xBC(0x19C)

}; 



// Class Engine.MaterialExpressionPixelNormalWS
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionPixelNormalWS : public UMaterialExpression
{

}; 



// Class Engine.PlayerController
// Size: 0x570(Inherited: 0x298) 
struct APlayerController : public AController
{
	struct UPlayer* Player;  // 0x298(0x8)
	struct APawn* AcknowledgedPawn;  // 0x2A0(0x8)
	struct UInterpTrackInstDirector* ControllingDirTrackInst;  // 0x2A8(0x8)
	struct AHUD* MyHUD;  // 0x2B0(0x8)
	struct APlayerCameraManager* PlayerCameraManager;  // 0x2B8(0x8)
	APlayerCameraManager* PlayerCameraManagerClass;  // 0x2C0(0x8)
	char pad_712_1 : 7;  // 0x2C8(0x1)
	bool bAutoManageActiveCameraTarget : 1;  // 0x2C8(0x1)
	char pad_713[3];  // 0x2C9(0x3)
	struct FRotator TargetViewRotation;  // 0x2CC(0xC)
	char pad_728[12];  // 0x2D8(0xC)
	float SmoothTargetViewRotationSpeed;  // 0x2E4(0x4)
	char pad_744[8];  // 0x2E8(0x8)
	struct TArray<struct AActor*> HiddenActors;  // 0x2F0(0x10)
	struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents;  // 0x300(0x10)
	char pad_784[4];  // 0x310(0x4)
	float LastSpectatorStateSynchTime;  // 0x314(0x4)
	struct FVector LastSpectatorSyncLocation;  // 0x318(0xC)
	struct FRotator LastSpectatorSyncRotation;  // 0x324(0xC)
	int32_t ClientCap;  // 0x330(0x4)
	char pad_820[4];  // 0x334(0x4)
	struct UCheatManager* CheatManager;  // 0x338(0x8)
	UCheatManager* CheatClass;  // 0x340(0x8)
	struct UPlayerInput* PlayerInput;  // 0x348(0x8)
	struct TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects;  // 0x350(0x10)
	char pad_864[112];  // 0x360(0x70)
	char pad_976_1 : 4;  // 0x3D0(0x1)
	char bPlayerIsWaiting : 1;  // 0x3D0(0x1)
	char pad_976_2 : 3;  // 0x3D0(0x1)
	char pad_977[4];  // 0x3D1(0x4)
	char NetPlayerIndex;  // 0x3D4(0x1)
	char pad_981[59];  // 0x3D5(0x3B)
	struct UNetConnection* PendingSwapConnection;  // 0x410(0x8)
	struct UNetConnection* NetConnection;  // 0x418(0x8)
	char pad_1056[12];  // 0x420(0xC)
	float InputYawScale;  // 0x42C(0x4)
	float InputPitchScale;  // 0x430(0x4)
	float InputRollScale;  // 0x434(0x4)
	char bShowMouseCursor : 1;  // 0x438(0x1)
	char bEnableClickEvents : 1;  // 0x438(0x1)
	char bEnableTouchEvents : 1;  // 0x438(0x1)
	char bEnableMouseOverEvents : 1;  // 0x438(0x1)
	char bEnableTouchOverEvents : 1;  // 0x438(0x1)
	char bForceFeedbackEnabled : 1;  // 0x438(0x1)
	char pad_1080_1 : 2;  // 0x438(0x1)
	char pad_1081[4];  // 0x439(0x4)
	float ForceFeedbackScale;  // 0x43C(0x4)
	struct TArray<struct FKey> ClickEventKeys;  // 0x440(0x10)
	char EMouseCursor DefaultMouseCursor;  // 0x450(0x1)
	char EMouseCursor CurrentMouseCursor;  // 0x451(0x1)
	char ECollisionChannel DefaultClickTraceChannel;  // 0x452(0x1)
	char ECollisionChannel CurrentClickTraceChannel;  // 0x453(0x1)
	float HitResultTraceDistance;  // 0x454(0x4)
	uint16_t SeamlessTravelCount;  // 0x458(0x2)
	uint16_t LastCompletedSeamlessTravelCount;  // 0x45A(0x2)
	char pad_1116[116];  // 0x45C(0x74)
	struct UInputComponent* InactiveStateInputComponent;  // 0x4D0(0x8)
	char pad_1240_1 : 2;  // 0x4D8(0x1)
	char bShouldPerformFullTickWhenPaused : 1;  // 0x4D8(0x1)
	char pad_1240_2 : 5;  // 0x4D8(0x1)
	char pad_1241[24];  // 0x4D9(0x18)
	struct UTouchInterface* CurrentTouchInterface;  // 0x4F0(0x8)
	char pad_1272[80];  // 0x4F8(0x50)
	struct ASpectatorPawn* SpectatorPawn;  // 0x548(0x8)
	char pad_1360[4];  // 0x550(0x4)
	char pad_1364_1 : 7;  // 0x554(0x1)
	bool bIsLocalPlayerController : 1;  // 0x554(0x1)
	char pad_1365[3];  // 0x555(0x3)
	struct FVector SpawnLocation;  // 0x558(0xC)
	char pad_1380[12];  // 0x564(0xC)

	bool WasInputKeyJustReleased(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustReleased
	bool WasInputKeyJustPressed(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustPressed
	void ToggleSpeaking(bool bInSpeaking); // Function Engine.PlayerController.ToggleSpeaking
	void TestServerLevelVisibilityChange(struct FName PackageName, struct FName Filename); // Function Engine.PlayerController.TestServerLevelVisibilityChange
	void SwitchLevel(struct FString URL); // Function Engine.PlayerController.SwitchLevel
	void StopHapticEffect(uint8_t  Hand); // Function Engine.PlayerController.StopHapticEffect
	void StartFire(char FireModeNum); // Function Engine.PlayerController.StartFire
	void SetVirtualJoystickVisibility(bool bVisible); // Function Engine.PlayerController.SetVirtualJoystickVisibility
	void SetViewTargetWithBlend(struct AActor* NewViewTarget, float BlendTime, char EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing); // Function Engine.PlayerController.SetViewTargetWithBlend
	void SetName(struct FString S); // Function Engine.PlayerController.SetName
	void SetMouseLocation(int32_t X, int32_t Y); // Function Engine.PlayerController.SetMouseLocation
	void SetMouseCursorWidget(char EMouseCursor Cursor, struct UUserWidget* CursorWidget); // Function Engine.PlayerController.SetMouseCursorWidget
	void SetHapticsByValue(float Frequency, float Amplitude, uint8_t  Hand); // Function Engine.PlayerController.SetHapticsByValue
	void SetDisableHaptics(bool bNewDisabled); // Function Engine.PlayerController.SetDisableHaptics
	void SetControllerLightColor(struct FColor Color); // Function Engine.PlayerController.SetControllerLightColor
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // Function Engine.PlayerController.SetCinematicMode
	void SetAudioListenerOverride(struct USceneComponent* AttachToComponent, struct FVector Location, struct FRotator Rotation); // Function Engine.PlayerController.SetAudioListenerOverride
	void SetAudioListenerAttenuationOverride(struct USceneComponent* AttachToComponent, struct FVector AttenuationLocationOVerride); // Function Engine.PlayerController.SetAudioListenerAttenuationOverride
	void ServerViewSelf(struct FViewTargetTransitionParams TransitionParams); // Function Engine.PlayerController.ServerViewSelf
	void ServerViewPrevPlayer(); // Function Engine.PlayerController.ServerViewPrevPlayer
	void ServerViewNextPlayer(); // Function Engine.PlayerController.ServerViewNextPlayer
	void ServerVerifyViewTarget(); // Function Engine.PlayerController.ServerVerifyViewTarget
	void ServerUpdateMultipleLevelsVisibility(struct TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities); // Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo LevelVisibility); // Function Engine.PlayerController.ServerUpdateLevelVisibility
	void ServerUpdateCamera(struct FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw); // Function Engine.PlayerController.ServerUpdateCamera
	void ServerUnmutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ServerUnmutePlayer
	void ServerToggleAILogging(); // Function Engine.PlayerController.ServerToggleAILogging
	void ServerShortTimeout(); // Function Engine.PlayerController.ServerShortTimeout
	void ServerSetSpectatorWaiting(bool bWaiting); // Function Engine.PlayerController.ServerSetSpectatorWaiting
	void ServerSetSpectatorLocation(struct FVector NewLoc, struct FRotator NewRot); // Function Engine.PlayerController.ServerSetSpectatorLocation
	void ServerRestartPlayer(); // Function Engine.PlayerController.ServerRestartPlayer
	void ServerPause(); // Function Engine.PlayerController.ServerPause
	void ServerNotifyLoadedWorld(struct FName WorldPackageName); // Function Engine.PlayerController.ServerNotifyLoadedWorld
	void ServerMutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ServerMutePlayer
	void ServerExecRPC(struct FString Msg); // Function Engine.PlayerController.ServerExecRPC
	void ServerExec(struct FString Msg); // Function Engine.PlayerController.ServerExec
	void ServerCheckClientPossessionReliable(); // Function Engine.PlayerController.ServerCheckClientPossessionReliable
	void ServerCheckClientPossession(); // Function Engine.PlayerController.ServerCheckClientPossession
	void ServerChangeName(struct FString S); // Function Engine.PlayerController.ServerChangeName
	void ServerCamera(struct FName NewMode); // Function Engine.PlayerController.ServerCamera
	void ServerAcknowledgePossession(struct APawn* P); // Function Engine.PlayerController.ServerAcknowledgePossession
	void SendToConsole(struct FString Command); // Function Engine.PlayerController.SendToConsole
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel
	void ResetControllerLightColor(); // Function Engine.PlayerController.ResetControllerLightColor
	bool ProjectWorldLocationToScreen(struct FVector WorldLocation, struct FVector2D& ScreenLocation, bool bPlayerViewportRelative); // Function Engine.PlayerController.ProjectWorldLocationToScreen
	void PlayHapticEffect(struct UHapticFeedbackEffect_Base* HapticEffect, uint8_t  Hand, float Scale, bool bLoop); // Function Engine.PlayerController.PlayHapticEffect
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, char EDynamicForceFeedbackAction Action, struct FLatentActionInfo LatentInfo); // Function Engine.PlayerController.PlayDynamicForceFeedback
	void Pause(); // Function Engine.PlayerController.Pause
	void OnServerStartedVisualLogger(bool bIsLogging); // Function Engine.PlayerController.OnServerStartedVisualLogger
	void LocalTravel(struct FString URL); // Function Engine.PlayerController.LocalTravel
	void K2_ClientPlayForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused); // Function Engine.PlayerController.K2_ClientPlayForceFeedback
	bool IsInputKeyDown(struct FKey Key); // Function Engine.PlayerController.IsInputKeyDown
	void GetViewportSize(int32_t& SizeX, int32_t& SizeY); // Function Engine.PlayerController.GetViewportSize
	struct ASpectatorPawn* GetSpectatorPawn(); // Function Engine.PlayerController.GetSpectatorPawn
	bool GetMousePosition(float& LocationX, float& LocationY); // Function Engine.PlayerController.GetMousePosition
	struct FVector GetInputVectorKeyState(struct FKey Key); // Function Engine.PlayerController.GetInputVectorKeyState
	void GetInputTouchState(char ETouchIndex FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed); // Function Engine.PlayerController.GetInputTouchState
	void GetInputMouseDelta(float& DeltaX, float& DeltaY); // Function Engine.PlayerController.GetInputMouseDelta
	void GetInputMotionState(struct FVector& Tilt, struct FVector& RotationRate, struct FVector& Gravity, struct FVector& Acceleration); // Function Engine.PlayerController.GetInputMotionState
	float GetInputKeyTimeDown(struct FKey Key); // Function Engine.PlayerController.GetInputKeyTimeDown
	void GetInputAnalogStickState(char EControllerAnalogStick WhichStick, float& StickX, float& StickY); // Function Engine.PlayerController.GetInputAnalogStickState
	float GetInputAnalogKeyState(struct FKey Key); // Function Engine.PlayerController.GetInputAnalogKeyState
	struct AHUD* GetHUD(); // Function Engine.PlayerController.GetHUD
	bool GetHitResultUnderFingerForObjects(char ETouchIndex FingerIndex, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerForObjects
	bool GetHitResultUnderFingerByChannel(char ETouchIndex FingerIndex, char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerByChannel
	bool GetHitResultUnderFinger(char ETouchIndex FingerIndex, char ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderFinger
	bool GetHitResultUnderCursorForObjects(struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorForObjects
	bool GetHitResultUnderCursorByChannel(char ETraceTypeQuery TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorByChannel
	bool GetHitResultUnderCursor(char ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursor
	struct FVector GetFocalLocation(); // Function Engine.PlayerController.GetFocalLocation
	void FOV(float NewFOV); // Function Engine.PlayerController.FOV
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector& WorldLocation, struct FVector& WorldDirection); // Function Engine.PlayerController.DeprojectScreenPositionToWorld
	bool DeprojectMousePositionToWorld(struct FVector& WorldLocation, struct FVector& WorldDirection); // Function Engine.PlayerController.DeprojectMousePositionToWorld
	void ConsoleKey(struct FKey Key); // Function Engine.PlayerController.ConsoleKey
	void ClientWasKicked(struct FText KickReason); // Function Engine.PlayerController.ClientWasKicked
	void ClientVoiceHandshakeComplete(); // Function Engine.PlayerController.ClientVoiceHandshakeComplete
	void ClientUpdateMultipleLevelsStreamingStatus(struct TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses); // Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus
	void ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex); // Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
	void ClientUnmutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ClientUnmutePlayer
	void ClientTravelInternal(struct FString URL, char ETravelType TravelType, bool bSeamless, struct FGuid MapPackageGuid); // Function Engine.PlayerController.ClientTravelInternal
	void ClientTravel(struct FString URL, char ETravelType TravelType, bool bSeamless, struct FGuid MapPackageGuid); // Function Engine.PlayerController.ClientTravel
	void ClientTeamMessage(struct APlayerState* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientTeamMessage
	void ClientStopForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag); // Function Engine.PlayerController.ClientStopForceFeedback
	void ClientStopCameraShakesFromSource(struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // Function Engine.PlayerController.ClientStopCameraShakesFromSource
	void ClientStopCameraShake(UCameraShakeBase* Shake, bool bImmediately); // Function Engine.PlayerController.ClientStopCameraShake
	void ClientStopCameraAnim(struct UCameraAnim* AnimToStop); // Function Engine.PlayerController.ClientStopCameraAnim
	void ClientStartOnlineSession(); // Function Engine.PlayerController.ClientStartOnlineSession
	void ClientStartCameraShakeFromSource(UCameraShakeBase* Shake, struct UCameraShakeSourceComponent* SourceComponent); // Function Engine.PlayerController.ClientStartCameraShakeFromSource
	void ClientStartCameraShake(UCameraShakeBase* Shake, float Scale, uint8_t  PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerController.ClientStartCameraShake
	void ClientSpawnCameraLensEffect(AEmitterCameraLensEffectBase* LensEffectEmitterClass); // Function Engine.PlayerController.ClientSpawnCameraLensEffect
	void ClientSetViewTarget(struct AActor* A, struct FViewTargetTransitionParams TransitionParams); // Function Engine.PlayerController.ClientSetViewTarget
	void ClientSetSpectatorWaiting(bool bWaiting); // Function Engine.PlayerController.ClientSetSpectatorWaiting
	void ClientSetHUD(AHUD* NewHUDClass); // Function Engine.PlayerController.ClientSetHUD
	void ClientSetForceMipLevelsToBeResident(struct UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); // Function Engine.PlayerController.ClientSetCinematicMode
	void ClientSetCameraMode(struct FName NewCamMode); // Function Engine.PlayerController.ClientSetCameraMode
	void ClientSetCameraFade(bool bEnableFading, struct FColor FadeColor, struct FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished); // Function Engine.PlayerController.ClientSetCameraFade
	void ClientSetBlockOnAsyncLoading(); // Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
	void ClientReturnToMainMenuWithTextReason(struct FText ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason
	void ClientReturnToMainMenu(struct FString ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenu
	void ClientRetryClientRestart(struct APawn* NewPawn); // Function Engine.PlayerController.ClientRetryClientRestart
	void ClientRestart(struct APawn* NewPawn); // Function Engine.PlayerController.ClientRestart
	void ClientReset(); // Function Engine.PlayerController.ClientReset
	void ClientRepObjRef(struct UObject* Object); // Function Engine.PlayerController.ClientRepObjRef
	void ClientReceiveLocalizedMessage(ULocalMessage* Message, int32_t Switch, struct APlayerState* RelatedPlayerState_2, struct APlayerState* RelatedPlayerState_3, struct UObject* OptionalObject); // Function Engine.PlayerController.ClientReceiveLocalizedMessage
	void ClientPrestreamTextures(struct AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientPrestreamTextures
	void ClientPrepareMapChange(struct FName LevelName, bool bFirst, bool bLast); // Function Engine.PlayerController.ClientPrepareMapChange
	void ClientPlaySoundAtLocation(struct USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySoundAtLocation
	void ClientPlaySound(struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySound
	void ClientPlayForceFeedback_Internal(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FForceFeedbackParameters Params); // Function Engine.PlayerController.ClientPlayForceFeedback_Internal
	void ClientPlayCameraAnim(struct UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, uint8_t  Space, struct FRotator CustomPlaySpace); // Function Engine.PlayerController.ClientPlayCameraAnim
	void ClientMutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ClientMutePlayer
	void ClientMessage(struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientMessage
	void ClientIgnoreMoveInput(bool bIgnore); // Function Engine.PlayerController.ClientIgnoreMoveInput
	void ClientIgnoreLookInput(bool bIgnore); // Function Engine.PlayerController.ClientIgnoreLookInput
	void ClientGotoState(struct FName NewState); // Function Engine.PlayerController.ClientGotoState
	void ClientGameEnded(struct AActor* EndGameFocus, bool bIsWinner); // Function Engine.PlayerController.ClientGameEnded
	void ClientForceGarbageCollection(); // Function Engine.PlayerController.ClientForceGarbageCollection
	void ClientFlushLevelStreaming(); // Function Engine.PlayerController.ClientFlushLevelStreaming
	void ClientEndOnlineSession(); // Function Engine.PlayerController.ClientEndOnlineSession
	void ClientEnableNetworkVoice(bool bEnable); // Function Engine.PlayerController.ClientEnableNetworkVoice
	void ClientCommitMapChange(); // Function Engine.PlayerController.ClientCommitMapChange
	void ClientClearCameraLensEffects(); // Function Engine.PlayerController.ClientClearCameraLensEffects
	void ClientCapBandwidth(int32_t Cap); // Function Engine.PlayerController.ClientCapBandwidth
	void ClientCancelPendingMapChange(); // Function Engine.PlayerController.ClientCancelPendingMapChange
	void ClientAddTextureStreamingLoc(struct FVector InLoc, float Duration, bool bOverrideLocation); // Function Engine.PlayerController.ClientAddTextureStreamingLoc
	void ClearAudioListenerOverride(); // Function Engine.PlayerController.ClearAudioListenerOverride
	void ClearAudioListenerAttenuationOverride(); // Function Engine.PlayerController.ClearAudioListenerAttenuationOverride
	bool CanRestartPlayer(); // Function Engine.PlayerController.CanRestartPlayer
	void Camera(struct FName NewMode); // Function Engine.PlayerController.Camera
	void AddYawInput(float Val); // Function Engine.PlayerController.AddYawInput
	void AddRollInput(float Val); // Function Engine.PlayerController.AddRollInput
	void AddPitchInput(float Val); // Function Engine.PlayerController.AddPitchInput
	void ActivateTouchInterface(struct UTouchInterface* NewTouchInterface); // Function Engine.PlayerController.ActivateTouchInterface
}; 



// Class Engine.BlueprintExtension
// Size: 0x28(Inherited: 0x28) 
struct UBlueprintExtension : public UObject
{

}; 



// Class Engine.CompositeCurveTable
// Size: 0xC8(Inherited: 0xA0) 
struct UCompositeCurveTable : public UCurveTable
{
	struct TArray<struct UCurveTable*> ParentTables;  // 0xA0(0x10)
	struct TArray<struct UCurveTable*> OldParentTables;  // 0xB0(0x10)
	char pad_192[8];  // 0xC0(0x8)

}; 



// Class Engine.ChildActorComponent
// Size: 0x230(Inherited: 0x200) 
struct UChildActorComponent : public USceneComponent
{
	AActor* ChildActorClass;  // 0x1F8(0x8)
	struct AActor* ChildActor;  // 0x200(0x8)
	struct AActor* ChildActorTemplate;  // 0x208(0x8)
	char pad_536[24];  // 0x218(0x18)

	void SetChildActorClass(AActor* InClass); // Function Engine.ChildActorComponent.SetChildActorClass
}; 



// Class Engine.Interface_ActorSubobject
// Size: 0x28(Inherited: 0x28) 
struct UInterface_ActorSubobject : public UInterface
{

}; 



// Class Engine.PointLightComponent
// Size: 0x360(Inherited: 0x340) 
struct UPointLightComponent : public ULocalLightComponent
{
	char bUseInverseSquaredFalloff : 1;  // 0x340(0x1)
	char pad_832_1 : 7;  // 0x340(0x1)
	char pad_833[4];  // 0x341(0x4)
	float LightFalloffExponent;  // 0x344(0x4)
	float SourceRadius;  // 0x348(0x4)
	float SoftSourceRadius;  // 0x34C(0x4)
	float SourceLength;  // 0x350(0x4)
	char pad_852[12];  // 0x354(0xC)

	void SetSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSourceRadius
	void SetSourceLength(float NewValue); // Function Engine.PointLightComponent.SetSourceLength
	void SetSoftSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSoftSourceRadius
	void SetLightFalloffExponent(float NewLightFalloffExponent); // Function Engine.PointLightComponent.SetLightFalloffExponent
}; 



// Class Engine.MaterialExpressionFloor
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionFloor : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.StaticMeshComponent
// Size: 0x4E0(Inherited: 0x480) 
struct UStaticMeshComponent : public UMeshComponent
{
	int32_t ForcedLodModel;  // 0x478(0x4)
	int32_t PreviousLODLevel;  // 0x47C(0x4)
	int32_t MinLOD;  // 0x480(0x4)
	int32_t SubDivisionStepSize;  // 0x484(0x4)
	struct UStaticMesh* StaticMesh;  // 0x488(0x8)
	struct FColor WireframeColorOverride;  // 0x490(0x4)
	char bEvaluateWorldPositionOffset : 1;  // 0x494(0x1)
	char bOverrideWireframeColor : 1;  // 0x494(0x1)
	char bOverrideMinLOD : 1;  // 0x494(0x1)
	char bOverrideNavigationExport : 1;  // 0x494(0x1)
	char bForceNavigationObstacle : 1;  // 0x494(0x1)
	char bDisallowMeshPaintPerInstance : 1;  // 0x494(0x1)
	char bIgnoreInstanceForTextureStreaming : 1;  // 0x494(0x1)
	char bOverrideLightMapRes : 1;  // 0x494(0x1)
	char bCastDistanceFieldIndirectShadow : 1;  // 0x495(0x1)
	char bOverrideDistanceFieldSelfShadowBias : 1;  // 0x495(0x1)
	char bUseSubDivisions : 1;  // 0x495(0x1)
	char bUseDefaultCollision : 1;  // 0x495(0x1)
	char bReverseCulling : 1;  // 0x495(0x1)
	int32_t OverriddenLightMapRes;  // 0x498(0x4)
	float DistanceFieldIndirectShadowMinVisibility;  // 0x49C(0x4)
	float DistanceFieldSelfShadowBias;  // 0x4A0(0x4)
	float StreamingDistanceMultiplier;  // 0x4A4(0x4)
	struct TArray<struct FStaticMeshComponentLODInfo> LODData;  // 0x4A8(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData;  // 0x4B8(0x10)
	struct FLightmassPrimitiveSettings LightmassSettings;  // 0x4C8(0x18)

	bool SetStaticMesh(struct UStaticMesh* NewMesh); // Function Engine.StaticMeshComponent.SetStaticMesh
	void SetReverseCulling(bool ReverseCulling); // Function Engine.StaticMeshComponent.SetReverseCulling
	void SetForcedLodModel(int32_t NewForcedLodModel); // Function Engine.StaticMeshComponent.SetForcedLodModel
	void SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue); // Function Engine.StaticMeshComponent.SetEvaluateWorldPositionOffsetInRayTracing
	void SetDistanceFieldSelfShadowBias(float NewValue); // Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias
	void OnRep_StaticMesh(struct UStaticMesh* OldStaticMesh); // Function Engine.StaticMeshComponent.OnRep_StaticMesh
	void GetLocalBounds(struct FVector& Min, struct FVector& Max); // Function Engine.StaticMeshComponent.GetLocalBounds
}; 



// Class Engine.ParticleModuleEventGenerator
// Size: 0x40(Inherited: 0x30) 
struct UParticleModuleEventGenerator : public UParticleModuleEventBase
{
	struct TArray<struct FParticleEvent_GenerateInfo> Events;  // 0x30(0x10)

}; 



// Class Engine.DamageType
// Size: 0x40(Inherited: 0x28) 
struct UDamageType : public UObject
{
	char bCausedByWorld : 1;  // 0x28(0x1)
	char bScaleMomentumByMass : 1;  // 0x28(0x1)
	char bRadialDamageVelChange : 1;  // 0x28(0x1)
	char pad_40_1 : 5;  // 0x28(0x1)
	char pad_41[4];  // 0x29(0x4)
	float DamageImpulse;  // 0x2C(0x4)
	float DestructibleImpulse;  // 0x30(0x4)
	float DestructibleDamageSpreadScale;  // 0x34(0x4)
	float DamageFalloff;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.AssetManager
// Size: 0x478(Inherited: 0x28) 
struct UAssetManager : public UObject
{
	char pad_40[696];  // 0x28(0x2B8)
	struct TArray<struct UObject*> ObjectReferenceList;  // 0x2E0(0x10)
	char pad_752_1 : 7;  // 0x2F0(0x1)
	bool bIsGlobalAsyncScanEnvironment : 1;  // 0x2F0(0x1)
	char pad_753_1 : 7;  // 0x2F1(0x1)
	bool bShouldGuessTypeAndName : 1;  // 0x2F1(0x1)
	char pad_754_1 : 7;  // 0x2F2(0x1)
	bool bShouldUseSynchronousLoad : 1;  // 0x2F2(0x1)
	char pad_755_1 : 7;  // 0x2F3(0x1)
	bool bIsLoadingFromPakFiles : 1;  // 0x2F3(0x1)
	char pad_756_1 : 7;  // 0x2F4(0x1)
	bool bShouldAcquireMissingChunksOnLoad : 1;  // 0x2F4(0x1)
	char pad_757_1 : 7;  // 0x2F5(0x1)
	bool bOnlyCookProductionAssets : 1;  // 0x2F5(0x1)
	char pad_758_1 : 7;  // 0x2F6(0x1)
	bool bIsBulkScanning : 1;  // 0x2F6(0x1)
	char pad_759_1 : 7;  // 0x2F7(0x1)
	bool bIsPrimaryAssetDirectoryCurrent : 1;  // 0x2F7(0x1)
	char pad_760_1 : 7;  // 0x2F8(0x1)
	bool bIsManagementDatabaseCurrent : 1;  // 0x2F8(0x1)
	char pad_761_1 : 7;  // 0x2F9(0x1)
	bool bUpdateManagementDatabaseAfterScan : 1;  // 0x2F9(0x1)
	char pad_762_1 : 7;  // 0x2FA(0x1)
	bool bIncludeOnlyOnDiskAssets : 1;  // 0x2FA(0x1)
	char pad_763_1 : 7;  // 0x2FB(0x1)
	bool bHasCompletedInitialScan : 1;  // 0x2FB(0x1)
	int32_t NumberOfSpawnedNotifications;  // 0x2FC(0x4)
	char pad_768[376];  // 0x300(0x178)

}; 



// Class Engine.PlayerCameraManager
// Size: 0x2810(Inherited: 0x220) 
struct APlayerCameraManager : public AActor
{
	struct APlayerController* PCOwner;  // 0x220(0x8)
	struct USceneComponent* TransformComponent;  // 0x228(0x8)
	char pad_560[8];  // 0x230(0x8)
	float DefaultFOV;  // 0x238(0x4)
	char pad_572[4];  // 0x23C(0x4)
	float DefaultOrthoWidth;  // 0x240(0x4)
	char pad_580[4];  // 0x244(0x4)
	float DefaultAspectRatio;  // 0x248(0x4)
	char pad_588[68];  // 0x24C(0x44)
	struct FCameraCacheEntry CameraCache;  // 0x290(0x600)
	struct FCameraCacheEntry LastFrameCameraCache;  // 0x890(0x600)
	struct FTViewTarget ViewTarget;  // 0xE90(0x610)
	struct FTViewTarget PendingViewTarget;  // 0x14A0(0x610)
	char pad_6832[48];  // 0x1AB0(0x30)
	struct FCameraCacheEntry CameraCachePrivate;  // 0x1AE0(0x600)
	struct FCameraCacheEntry LastFrameCameraCachePrivate;  // 0x20E0(0x600)
	struct TArray<struct UCameraModifier*> ModifierList;  // 0x26E0(0x10)
	struct TArray<UCameraModifier*> DefaultModifiers;  // 0x26F0(0x10)
	float FreeCamDistance;  // 0x2700(0x4)
	struct FVector FreeCamOffset;  // 0x2704(0xC)
	struct FVector ViewTargetOffset;  // 0x2710(0xC)
	char pad_10012[4];  // 0x271C(0x4)
	struct FMulticastInlineDelegate OnAudioFadeChangeEvent;  // 0x2720(0x10)
	char pad_10032[16];  // 0x2730(0x10)
	struct TArray<struct AEmitterCameraLensEffectBase*> CameraLensEffects;  // 0x2740(0x10)
	struct UCameraModifier_CameraShake* CachedCameraShakeMod;  // 0x2750(0x8)
	struct UCameraAnimInst* AnimInstPool[8];  // 0x2758(0x40)
	struct TArray<struct FPostProcessSettings> PostProcessBlendCache;  // 0x2798(0x10)
	char pad_10152[16];  // 0x27A8(0x10)
	struct TArray<struct UCameraAnimInst*> ActiveAnims;  // 0x27B8(0x10)
	struct TArray<struct UCameraAnimInst*> FreeAnims;  // 0x27C8(0x10)
	struct ACameraActor* AnimCameraActor;  // 0x27D8(0x8)
	char bIsOrthographic : 1;  // 0x27E0(0x1)
	char bDefaultConstrainAspectRatio : 1;  // 0x27E0(0x1)
	char pad_10208_1 : 4;  // 0x27E0(0x1)
	char bClientSimulatingViewTarget : 1;  // 0x27E0(0x1)
	char bUseClientSideCameraUpdates : 1;  // 0x27E0(0x1)
	char pad_10209_1 : 2;  // 0x27E1(0x1)
	char bGameCameraCutThisFrame : 1;  // 0x27E1(0x1)
	char pad_10209_2 : 5;  // 0x27E1(0x1)
	char pad_10210[3];  // 0x27E2(0x3)
	float ViewPitchMin;  // 0x27E4(0x4)
	float ViewPitchMax;  // 0x27E8(0x4)
	float ViewYawMin;  // 0x27EC(0x4)
	float ViewYawMax;  // 0x27F0(0x4)
	float ViewRollMin;  // 0x27F4(0x4)
	float ViewRollMax;  // 0x27F8(0x4)
	char pad_10236[4];  // 0x27FC(0x4)
	float ServerUpdateCameraTimeout;  // 0x2800(0x4)
	char pad_10244[12];  // 0x2804(0xC)

	void SwapPendingViewTargetWhenUsingClientSideCameraUpdates(); // Function Engine.PlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates
	void StopCameraShake(struct UCameraShakeBase* ShakeInstance, bool bImmediately); // Function Engine.PlayerCameraManager.StopCameraShake
	void StopCameraFade(); // Function Engine.PlayerCameraManager.StopCameraFade
	void StopCameraAnimInst(struct UCameraAnimInst* AnimInst, bool bImmediate); // Function Engine.PlayerCameraManager.StopCameraAnimInst
	void StopAllInstancesOfCameraShakeFromSource(UCameraShakeBase* Shake, struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShakeFromSource
	void StopAllInstancesOfCameraShake(UCameraShakeBase* Shake, bool bImmediately); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShake
	void StopAllInstancesOfCameraAnim(struct UCameraAnim* Anim, bool bImmediate); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim
	void StopAllCameraShakesFromSource(struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // Function Engine.PlayerCameraManager.StopAllCameraShakesFromSource
	void StopAllCameraShakes(bool bImmediately); // Function Engine.PlayerCameraManager.StopAllCameraShakes
	void StopAllCameraAnims(bool bImmediate); // Function Engine.PlayerCameraManager.StopAllCameraAnims
	struct UCameraShakeBase* StartCameraShakeFromSource(UCameraShakeBase* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, uint8_t  PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerCameraManager.StartCameraShakeFromSource
	struct UCameraShakeBase* StartCameraShake(UCameraShakeBase* ShakeClass, float Scale, uint8_t  PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerCameraManager.StartCameraShake
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished); // Function Engine.PlayerCameraManager.StartCameraFade
	void SetManualCameraFade(float InFadeAmount, struct FLinearColor Color, bool bInFadeAudio); // Function Engine.PlayerCameraManager.SetManualCameraFade
	void SetGameCameraCutThisFrame(); // Function Engine.PlayerCameraManager.SetGameCameraCutThisFrame
	bool RemoveCameraModifier(struct UCameraModifier* ModifierToRemove); // Function Engine.PlayerCameraManager.RemoveCameraModifier
	void RemoveCameraLensEffect(struct AEmitterCameraLensEffectBase* Emitter); // Function Engine.PlayerCameraManager.RemoveCameraLensEffect
	struct UCameraAnimInst* PlayCameraAnim(struct UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, uint8_t  PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerCameraManager.PlayCameraAnim
	void PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector& ResultCameraLocation); // Function Engine.PlayerCameraManager.PhotographyCameraModify
	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd
	struct APlayerController* GetOwningPlayerController(); // Function Engine.PlayerCameraManager.GetOwningPlayerController
	float GetFOVAngle(); // Function Engine.PlayerCameraManager.GetFOVAngle
	struct FRotator GetCameraRotation(); // Function Engine.PlayerCameraManager.GetCameraRotation
	struct FVector GetCameraLocation(); // Function Engine.PlayerCameraManager.GetCameraLocation
	struct UCameraModifier* FindCameraModifierByClass(UCameraModifier* ModifierClass); // Function Engine.PlayerCameraManager.FindCameraModifierByClass
	void ClearCameraLensEffects(); // Function Engine.PlayerCameraManager.ClearCameraLensEffects
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector& NewCameraLocation, struct FRotator& NewCameraRotation, float& NewCameraFOV); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera
	struct UCameraModifier* AddNewCameraModifier(UCameraModifier* ModifierClass); // Function Engine.PlayerCameraManager.AddNewCameraModifier
	struct AEmitterCameraLensEffectBase* AddCameraLensEffect(AEmitterCameraLensEffectBase* LensEffectEmitterClass); // Function Engine.PlayerCameraManager.AddCameraLensEffect
}; 



// Class Engine.SoundNodeSwitch
// Size: 0x50(Inherited: 0x48) 
struct USoundNodeSwitch : public USoundNode
{
	struct FName IntParameterName;  // 0x48(0x8)

}; 



// Class Engine.GameModeBase
// Size: 0x2C0(Inherited: 0x220) 
struct AGameModeBase : public AInfo
{
	struct FString OptionsString;  // 0x220(0x10)
	AGameSession* GameSessionClass;  // 0x230(0x8)
	AGameStateBase* GameStateClass;  // 0x238(0x8)
	APlayerController* PlayerControllerClass;  // 0x240(0x8)
	APlayerState* PlayerStateClass;  // 0x248(0x8)
	AHUD* HUDClass;  // 0x250(0x8)
	APawn* DefaultPawnClass;  // 0x258(0x8)
	ASpectatorPawn* SpectatorClass;  // 0x260(0x8)
	APlayerController* ReplaySpectatorPlayerControllerClass;  // 0x268(0x8)
	AServerStatReplicator* ServerStatReplicatorClass;  // 0x270(0x8)
	struct AGameSession* GameSession;  // 0x278(0x8)
	struct AGameStateBase* GameState;  // 0x280(0x8)
	struct AServerStatReplicator* ServerStatReplicator;  // 0x288(0x8)
	struct FText DefaultPlayerName;  // 0x290(0x18)
	char bUseSeamlessTravel : 1;  // 0x2A8(0x1)
	char bStartPlayersAsSpectators : 1;  // 0x2A8(0x1)
	char bPauseable : 1;  // 0x2A8(0x1)
	char pad_680_1 : 5;  // 0x2A8(0x1)
	char pad_681[24];  // 0x2A9(0x18)

	void StartPlay(); // Function Engine.GameModeBase.StartPlay
	struct APawn* SpawnDefaultPawnFor(struct AController* NewPlayer, struct AActor* StartSpot); // Function Engine.GameModeBase.SpawnDefaultPawnFor
	struct APawn* SpawnDefaultPawnAtTransform(struct AController* NewPlayer, struct FTransform& SpawnTransform); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform
	bool ShouldReset(struct AActor* ActorToReset); // Function Engine.GameModeBase.ShouldReset
	void ReturnToMainMenuHost(); // Function Engine.GameModeBase.ReturnToMainMenuHost
	void RestartPlayerAtTransform(struct AController* NewPlayer, struct FTransform& SpawnTransform); // Function Engine.GameModeBase.RestartPlayerAtTransform
	void RestartPlayerAtPlayerStart(struct AController* NewPlayer, struct AActor* StartSpot); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart
	void RestartPlayer(struct AController* NewPlayer); // Function Engine.GameModeBase.RestartPlayer
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel
	bool PlayerCanRestart(struct APlayerController* Player); // Function Engine.GameModeBase.PlayerCanRestart
	bool MustSpectate(struct APlayerController* NewPlayerController); // Function Engine.GameModeBase.MustSpectate
	void K2_PostLogin(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.K2_PostLogin
	void K2_OnSwapPlayerControllers(struct APlayerController* OldPC, struct APlayerController* NewPC); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers
	void K2_OnRestartPlayer(struct AController* NewPlayer); // Function Engine.GameModeBase.K2_OnRestartPlayer
	void K2_OnLogout(struct AController* ExitingController); // Function Engine.GameModeBase.K2_OnLogout
	void K2_OnChangeName(struct AController* Other, struct FString NewName, bool bNameChange); // Function Engine.GameModeBase.K2_OnChangeName
	struct AActor* K2_FindPlayerStart(struct AController* Player, struct FString IncomingName); // Function Engine.GameModeBase.K2_FindPlayerStart
	void InitStartSpot(struct AActor* StartSpot, struct AController* NewPlayer); // Function Engine.GameModeBase.InitStartSpot
	void InitializeHUDForPlayer(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.InitializeHUDForPlayer
	bool HasMatchStarted(); // Function Engine.GameModeBase.HasMatchStarted
	bool HasMatchEnded(); // Function Engine.GameModeBase.HasMatchEnded
	void HandleStartingNewPlayer(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.HandleStartingNewPlayer
	int32_t GetNumSpectators(); // Function Engine.GameModeBase.GetNumSpectators
	int32_t GetNumPlayers(); // Function Engine.GameModeBase.GetNumPlayers
	UObject* GetDefaultPawnClassForController(struct AController* InController); // Function Engine.GameModeBase.GetDefaultPawnClassForController
	struct AActor* FindPlayerStart(struct AController* Player, struct FString IncomingName); // Function Engine.GameModeBase.FindPlayerStart
	struct AActor* ChoosePlayerStart(struct AController* Player); // Function Engine.GameModeBase.ChoosePlayerStart
	void ChangeName(struct AController* Controller, struct FString NewName, bool bNameChange); // Function Engine.GameModeBase.ChangeName
	bool CanSpectate(struct APlayerController* Viewer, struct APlayerState* ViewTarget); // Function Engine.GameModeBase.CanSpectate
}; 



// Class Engine.GameMode
// Size: 0x308(Inherited: 0x2C0) 
struct AGameMode : public AGameModeBase
{
	struct FName MatchState;  // 0x2C0(0x8)
	char bDelayedStart : 1;  // 0x2C8(0x1)
	char pad_712_1 : 7;  // 0x2C8(0x1)
	char pad_713[4];  // 0x2C9(0x4)
	int32_t NumSpectators;  // 0x2CC(0x4)
	int32_t NumPlayers;  // 0x2D0(0x4)
	int32_t NumBots;  // 0x2D4(0x4)
	float MinRespawnDelay;  // 0x2D8(0x4)
	int32_t NumTravellingPlayers;  // 0x2DC(0x4)
	ULocalMessage* EngineMessageClass;  // 0x2E0(0x8)
	struct TArray<struct APlayerState*> InactivePlayerArray;  // 0x2E8(0x10)
	float InactivePlayerStateLifeSpan;  // 0x2F8(0x4)
	int32_t MaxInactivePlayers;  // 0x2FC(0x4)
	char pad_768_1 : 7;  // 0x300(0x1)
	bool bHandleDedicatedServerReplays : 1;  // 0x300(0x1)
	char pad_769[7];  // 0x301(0x7)

	void StartMatch(); // Function Engine.GameMode.StartMatch
	void SetBandwidthLimit(float AsyncIOBandwidthLimit); // Function Engine.GameMode.SetBandwidthLimit
	void Say(struct FString Msg); // Function Engine.GameMode.Say
	void RestartGame(); // Function Engine.GameMode.RestartGame
	bool ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch
	bool ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch
	void K2_OnSetMatchState(struct FName NewState); // Function Engine.GameMode.K2_OnSetMatchState
	bool IsMatchInProgress(); // Function Engine.GameMode.IsMatchInProgress
	struct FName GetMatchState(); // Function Engine.GameMode.GetMatchState
	void EndMatch(); // Function Engine.GameMode.EndMatch
	void AbortMatch(); // Function Engine.GameMode.AbortMatch
}; 



// Class Engine.AnimNotify_ResumeClothingSimulation
// Size: 0x38(Inherited: 0x38) 
struct UAnimNotify_ResumeClothingSimulation : public UAnimNotify
{

}; 



// Class Engine.TextRenderComponent
// Size: 0x4A0(Inherited: 0x450) 
struct UTextRenderComponent : public UPrimitiveComponent
{
	struct FText Text;  // 0x450(0x18)
	struct UMaterialInterface* TextMaterial;  // 0x468(0x8)
	struct UFont* Font;  // 0x470(0x8)
	char EHorizTextAligment HorizontalAlignment;  // 0x478(0x1)
	char EVerticalTextAligment VerticalAlignment;  // 0x479(0x1)
	char pad_1146[2];  // 0x47A(0x2)
	struct FColor TextRenderColor;  // 0x47C(0x4)
	float XScale;  // 0x480(0x4)
	float YScale;  // 0x484(0x4)
	float WorldSize;  // 0x488(0x4)
	float InvDefaultSize;  // 0x48C(0x4)
	float HorizSpacingAdjust;  // 0x490(0x4)
	float VertSpacingAdjust;  // 0x494(0x4)
	char bAlwaysRenderAsText : 1;  // 0x498(0x1)
	char pad_1176_1 : 7;  // 0x498(0x1)
	char pad_1177[8];  // 0x499(0x8)

	void SetYScale(float Value); // Function Engine.TextRenderComponent.SetYScale
	void SetXScale(float Value); // Function Engine.TextRenderComponent.SetXScale
	void SetWorldSize(float Value); // Function Engine.TextRenderComponent.SetWorldSize
	void SetVertSpacingAdjust(float Value); // Function Engine.TextRenderComponent.SetVertSpacingAdjust
	void SetVerticalAlignment(char EVerticalTextAligment Value); // Function Engine.TextRenderComponent.SetVerticalAlignment
	void SetTextRenderColor(struct FColor Value); // Function Engine.TextRenderComponent.SetTextRenderColor
	void SetTextMaterial(struct UMaterialInterface* Material); // Function Engine.TextRenderComponent.SetTextMaterial
	void SetText(struct FString Value); // Function Engine.TextRenderComponent.SetText
	void SetHorizSpacingAdjust(float Value); // Function Engine.TextRenderComponent.SetHorizSpacingAdjust
	void SetHorizontalAlignment(char EHorizTextAligment Value); // Function Engine.TextRenderComponent.SetHorizontalAlignment
	void SetFont(struct UFont* Value); // Function Engine.TextRenderComponent.SetFont
	void K2_SetText(struct FText& Value); // Function Engine.TextRenderComponent.K2_SetText
	struct FVector GetTextWorldSize(); // Function Engine.TextRenderComponent.GetTextWorldSize
	struct FVector GetTextLocalSize(); // Function Engine.TextRenderComponent.GetTextLocalSize
}; 



// Class Engine.GameSession
// Size: 0x238(Inherited: 0x220) 
struct AGameSession : public AInfo
{
	int32_t MaxSpectators;  // 0x220(0x4)
	int32_t MaxPlayers;  // 0x224(0x4)
	int32_t MaxPartySize;  // 0x228(0x4)
	char MaxSplitscreensPerConnection;  // 0x22C(0x1)
	char pad_557_1 : 7;  // 0x22D(0x1)
	bool bRequiresPushToTalk : 1;  // 0x22D(0x1)
	char pad_558[2];  // 0x22E(0x2)
	struct FName SessionName;  // 0x230(0x8)

}; 



// Class Engine.GameStateBase
// Size: 0x270(Inherited: 0x220) 
struct AGameStateBase : public AInfo
{
	AGameModeBase* GameModeClass;  // 0x220(0x8)
	struct AGameModeBase* AuthorityGameMode;  // 0x228(0x8)
	ASpectatorPawn* SpectatorClass;  // 0x230(0x8)
	struct TArray<struct APlayerState*> PlayerArray;  // 0x238(0x10)
	char pad_584_1 : 7;  // 0x248(0x1)
	bool bReplicatedHasBegunPlay : 1;  // 0x248(0x1)
	char pad_585[3];  // 0x249(0x3)
	float ReplicatedWorldTimeSeconds;  // 0x24C(0x4)
	float ServerWorldTimeSecondsDelta;  // 0x250(0x4)
	float ServerWorldTimeSecondsUpdateFrequency;  // 0x254(0x4)
	char pad_600[24];  // 0x258(0x18)

	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass
	bool HasMatchStarted(); // Function Engine.GameStateBase.HasMatchStarted
	bool HasMatchEnded(); // Function Engine.GameStateBase.HasMatchEnded
	bool HasBegunPlay(); // Function Engine.GameStateBase.HasBegunPlay
	float GetServerWorldTimeSeconds(); // Function Engine.GameStateBase.GetServerWorldTimeSeconds
	float GetPlayerStartTime(struct AController* Controller); // Function Engine.GameStateBase.GetPlayerStartTime
	float GetPlayerRespawnDelay(struct AController* Controller); // Function Engine.GameStateBase.GetPlayerRespawnDelay
}; 



// Class Engine.Selection
// Size: 0xA0(Inherited: 0x28) 
struct USelection : public UObject
{
	char pad_40[120];  // 0x28(0x78)

}; 



// Class Engine.ParticleModuleOrientationBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleOrientationBase : public UParticleModule
{

}; 



// Class Engine.ParticleModuleOrbit
// Size: 0x130(Inherited: 0x38) 
struct UParticleModuleOrbit : public UParticleModuleOrbitBase
{
	char EOrbitChainMode ChainMode;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct FRawDistributionVector OffsetAmount;  // 0x40(0x48)
	struct FOrbitOptions OffsetOptions;  // 0x88(0x4)
	char pad_140[4];  // 0x8C(0x4)
	struct FRawDistributionVector RotationAmount;  // 0x90(0x48)
	struct FOrbitOptions RotationOptions;  // 0xD8(0x4)
	char pad_220[4];  // 0xDC(0x4)
	struct FRawDistributionVector RotationRateAmount;  // 0xE0(0x48)
	struct FOrbitOptions RotationRateOptions;  // 0x128(0x4)
	char pad_300[4];  // 0x12C(0x4)

}; 



// Class Engine.MaterialExpressionMaterialProxyReplace
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
	struct FExpressionInput Realtime;  // 0x40(0x14)
	struct FExpressionInput MaterialProxy;  // 0x54(0x14)

}; 



// Class Engine.InterpData
// Size: 0x70(Inherited: 0x28) 
struct UInterpData : public UObject
{
	float InterpLength;  // 0x28(0x4)
	float PathBuildTime;  // 0x2C(0x4)
	struct TArray<struct UInterpGroup*> InterpGroups;  // 0x30(0x10)
	struct UInterpCurveEdSetup* CurveEdSetup;  // 0x40(0x8)
	float EdSectionStart;  // 0x48(0x4)
	float EdSectionEnd;  // 0x4C(0x4)
	char bShouldBakeAndPrune : 1;  // 0x50(0x1)
	char pad_80_1 : 7;  // 0x50(0x1)
	char pad_81[8];  // 0x51(0x8)
	struct UInterpGroupDirector* CachedDirectorGroup;  // 0x58(0x8)
	struct TArray<struct FName> AllEventNames;  // 0x60(0x10)

}; 



// Class Engine.MaterialBillboardComponent
// Size: 0x460(Inherited: 0x450) 
struct UMaterialBillboardComponent : public UPrimitiveComponent
{
	struct TArray<struct FMaterialSpriteElement> Elements;  // 0x450(0x10)

	void SetElements(struct TArray<struct FMaterialSpriteElement>& NewElements); // Function Engine.MaterialBillboardComponent.SetElements
	void AddElement(struct UMaterialInterface* Material, struct UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, struct UCurveFloat* DistanceToSizeCurve); // Function Engine.MaterialBillboardComponent.AddElement
}; 



// Class Engine.MaterialExpressionParticleRandom
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleRandom : public UMaterialExpression
{

}; 



// Class Engine.GameState
// Size: 0x290(Inherited: 0x270) 
struct AGameState : public AGameStateBase
{
	struct FName MatchState;  // 0x270(0x8)
	struct FName PreviousMatchState;  // 0x278(0x8)
	int32_t ElapsedTime;  // 0x280(0x4)
	char pad_644[12];  // 0x284(0xC)

	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState
	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime
}; 



// Class Engine.AnimNotifyState_DisableRootMotion
// Size: 0x30(Inherited: 0x30) 
struct UAnimNotifyState_DisableRootMotion : public UAnimNotifyState
{

}; 



// Class Engine.MaterialFunctionMaterialLayer
// Size: 0x58(Inherited: 0x58) 
struct UMaterialFunctionMaterialLayer : public UMaterialFunction
{

}; 



// Class Engine.PlayerState
// Size: 0x320(Inherited: 0x220) 
struct APlayerState : public AInfo
{
	float Score;  // 0x220(0x4)
	int32_t PlayerId;  // 0x224(0x4)
	char ping;  // 0x228(0x1)
	char pad_553[1];  // 0x229(0x1)
	char bShouldUpdateReplicatedPing : 1;  // 0x22A(0x1)
	char bIsSpectator : 1;  // 0x22A(0x1)
	char bOnlySpectator : 1;  // 0x22A(0x1)
	char bIsABot : 1;  // 0x22A(0x1)
	char pad_554_1 : 1;  // 0x22A(0x1)
	char bIsInactive : 1;  // 0x22A(0x1)
	char bFromPreviousLevel : 1;  // 0x22A(0x1)
	char pad_554_2 : 1;  // 0x22A(0x1)
	char pad_555[2];  // 0x22B(0x2)
	int32_t StartTime;  // 0x22C(0x4)
	ULocalMessage* EngineMessageClass;  // 0x230(0x8)
	char pad_568[8];  // 0x238(0x8)
	struct FString SavedNetworkAddress;  // 0x240(0x10)
	struct FUniqueNetIdRepl UniqueId;  // 0x250(0x28)
	char pad_632[8];  // 0x278(0x8)
	struct APawn* PawnPrivate;  // 0x280(0x8)
	char pad_648[120];  // 0x288(0x78)
	struct FString PlayerNamePrivate;  // 0x300(0x10)
	char pad_784[16];  // 0x310(0x10)

	void ReceiveOverrideWith(struct APlayerState* OldPlayerState); // Function Engine.PlayerState.ReceiveOverrideWith
	void ReceiveCopyProperties(struct APlayerState* NewPlayerState); // Function Engine.PlayerState.ReceiveCopyProperties
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId
	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score
	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName
	void OnRep_PlayerId(); // Function Engine.PlayerState.OnRep_PlayerId
	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive
	bool IsOnlyASpectator(); // Function Engine.PlayerState.IsOnlyASpectator
	struct FString GetPlayerName(); // Function Engine.PlayerState.GetPlayerName
}; 



// Class Engine.DefaultPawn
// Size: 0x2A8(Inherited: 0x280) 
struct ADefaultPawn : public APawn
{
	float BaseTurnRate;  // 0x280(0x4)
	float BaseLookUpRate;  // 0x284(0x4)
	struct UPawnMovementComponent* MovementComponent;  // 0x288(0x8)
	struct USphereComponent* CollisionComponent;  // 0x290(0x8)
	struct UStaticMeshComponent* MeshComponent;  // 0x298(0x8)
	char bAddDefaultMovementBindings : 1;  // 0x2A0(0x1)
	char pad_672_1 : 7;  // 0x2A0(0x1)
	char pad_673[8];  // 0x2A1(0x8)

	void TurnAtRate(float Rate); // Function Engine.DefaultPawn.TurnAtRate
	void MoveUp_World(float Val); // Function Engine.DefaultPawn.MoveUp_World
	void MoveRight(float Val); // Function Engine.DefaultPawn.MoveRight
	void MoveForward(float Val); // Function Engine.DefaultPawn.MoveForward
	void LookUpAtRate(float Rate); // Function Engine.DefaultPawn.LookUpAtRate
}; 



// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x60(Inherited: 0x40) 
struct UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
	float MaxPosDiff;  // 0x40(0x4)
	float MaxAngleDiff;  // 0x44(0x4)
	float MaxScaleDiff;  // 0x48(0x4)
	float MaxEffectorDiff;  // 0x4C(0x4)
	float MinEffectorDiff;  // 0x50(0x4)
	float EffectorDiffSocket;  // 0x54(0x4)
	float ParentKeyScale;  // 0x58(0x4)
	char bRetarget : 1;  // 0x5C(0x1)
	char bActuallyFilterLinearKeys : 1;  // 0x5C(0x1)
	char pad_92_1 : 6;  // 0x5C(0x1)
	char pad_93[4];  // 0x5D(0x4)

}; 



// Class Engine.MaterialExpressionReflectionCapturePassSwitch
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionReflectionCapturePassSwitch : public UMaterialExpression
{
	struct FExpressionInput Default;  // 0x40(0x14)
	struct FExpressionInput Reflection;  // 0x54(0x14)

}; 



// Class Engine.SpectatorPawn
// Size: 0x2A8(Inherited: 0x2A8) 
struct ASpectatorPawn : public ADefaultPawn
{

}; 



// Class Engine.MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : public UMaterialExpression
{

}; 



// Class Engine.SpringArmComponent
// Size: 0x290(Inherited: 0x200) 
struct USpringArmComponent : public USceneComponent
{
	float TargetArmLength;  // 0x1F8(0x4)
	struct FVector SocketOffset;  // 0x1FC(0xC)
	struct FVector TargetOffset;  // 0x208(0xC)
	float ProbeSize;  // 0x214(0x4)
	char ECollisionChannel ProbeChannel;  // 0x21C(0x1)
	char bDoCollisionTest : 1;  // 0x220(0x1)
	char bUsePawnControlRotation : 1;  // 0x220(0x1)
	char bInheritPitch : 1;  // 0x220(0x1)
	char bInheritYaw : 1;  // 0x220(0x1)
	char bInheritRoll : 1;  // 0x220(0x1)
	char bEnableCameraLag : 1;  // 0x220(0x1)
	char bEnableCameraRotationLag : 1;  // 0x220(0x1)
	char bUseCameraLagSubstepping : 1;  // 0x220(0x1)
	char bDrawDebugLagMarkers : 1;  // 0x221(0x1)
	char pad_546_1 : 7;  // 0x222(0x1)
	char pad_547[2];  // 0x223(0x2)
	float CameraLagSpeed;  // 0x224(0x4)
	float CameraRotationLagSpeed;  // 0x228(0x4)
	float CameraLagMaxTimeStep;  // 0x22C(0x4)
	float CameraLagMaxDistance;  // 0x230(0x4)
	char pad_564[92];  // 0x234(0x5C)

	bool IsCollisionFixApplied(); // Function Engine.SpringArmComponent.IsCollisionFixApplied
	struct FVector GetUnfixedCameraPosition(); // Function Engine.SpringArmComponent.GetUnfixedCameraPosition
	struct FRotator GetTargetRotation(); // Function Engine.SpringArmComponent.GetTargetRotation
}; 



// Class Engine.PrimaryDataAsset
// Size: 0x30(Inherited: 0x30) 
struct UPrimaryDataAsset : public UDataAsset
{

}; 



// Class Engine.CameraActor
// Size: 0x7B0(Inherited: 0x220) 
struct ACameraActor : public AActor
{
	char EAutoReceiveInput AutoActivateForPlayer;  // 0x220(0x1)
	char pad_545[7];  // 0x221(0x7)
	struct UCameraComponent* CameraComponent;  // 0x228(0x8)
	struct USceneComponent* SceneComponent;  // 0x230(0x8)
	char pad_568[8];  // 0x238(0x8)
	char bConstrainAspectRatio : 1;  // 0x240(0x1)
	char pad_576_1 : 7;  // 0x240(0x1)
	char pad_577[4];  // 0x241(0x4)
	float AspectRatio;  // 0x244(0x4)
	float FOVAngle;  // 0x248(0x4)
	float PostProcessBlendWeight;  // 0x24C(0x4)
	struct FPostProcessSettings PostProcessSettings;  // 0x250(0x560)

	int32_t GetAutoActivatePlayerIndex(); // Function Engine.CameraActor.GetAutoActivatePlayerIndex
}; 



// Class Engine.MaterialExpressionCurveAtlasRowParameter
// Size: 0x88(Inherited: 0x60) 
struct UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter
{
	struct UCurveLinearColor* Curve;  // 0x60(0x8)
	struct UCurveLinearColorAtlas* Atlas;  // 0x68(0x8)
	struct FExpressionInput InputTime;  // 0x70(0x14)
	char pad_132[4];  // 0x84(0x4)

}; 



// Class Engine.ShapeComponent
// Size: 0x470(Inherited: 0x450) 
struct UShapeComponent : public UPrimitiveComponent
{
	struct UBodySetup* ShapeBodySetup;  // 0x450(0x8)
	UNavAreaBase* AreaClass;  // 0x458(0x8)
	struct FColor ShapeColor;  // 0x460(0x4)
	char bDrawOnlyIfSelected : 1;  // 0x464(0x1)
	char bShouldCollideWhenPlacing : 1;  // 0x464(0x1)
	char bDynamicObstacle : 1;  // 0x464(0x1)
	char pad_1124_1 : 5;  // 0x464(0x1)
	char pad_1125[12];  // 0x465(0xC)

}; 



// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x90(Inherited: 0x38) 
struct UAnimNotify_PlayParticleEffect : public UAnimNotify
{
	struct UParticleSystem* PSTemplate;  // 0x38(0x8)
	struct FVector LocationOffset;  // 0x40(0xC)
	struct FRotator RotationOffset;  // 0x4C(0xC)
	struct FVector Scale;  // 0x58(0xC)
	char pad_100[28];  // 0x64(0x1C)
	char Attached : 1;  // 0x80(0x1)
	char pad_128_1 : 7;  // 0x80(0x1)
	char pad_129[4];  // 0x81(0x4)
	struct FName SocketName;  // 0x84(0x8)
	char pad_140[4];  // 0x8C(0x4)

}; 



// Class Engine.CapsuleComponent
// Size: 0x470(Inherited: 0x470) 
struct UCapsuleComponent : public UShapeComponent
{
	float CapsuleHalfHeight;  // 0x468(0x4)
	float CapsuleRadius;  // 0x46C(0x4)

	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleSize
	void SetCapsuleRadius(float Radius, bool bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleRadius
	void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleHalfHeight
	void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // Function Engine.CapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere
	void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // Function Engine.CapsuleComponent.GetUnscaledCapsuleSize
	float GetUnscaledCapsuleRadius(); // Function Engine.CapsuleComponent.GetUnscaledCapsuleRadius
	float GetUnscaledCapsuleHalfHeight_WithoutHemisphere(); // Function Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere
	float GetUnscaledCapsuleHalfHeight(); // Function Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight
	float GetShapeScale(); // Function Engine.CapsuleComponent.GetShapeScale
	void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // Function Engine.CapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere
	void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // Function Engine.CapsuleComponent.GetScaledCapsuleSize
	float GetScaledCapsuleRadius(); // Function Engine.CapsuleComponent.GetScaledCapsuleRadius
	float GetScaledCapsuleHalfHeight_WithoutHemisphere(); // Function Engine.CapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere
	float GetScaledCapsuleHalfHeight(); // Function Engine.CapsuleComponent.GetScaledCapsuleHalfHeight
}; 



// Class Engine.ParticleModule
// Size: 0x30(Inherited: 0x28) 
struct UParticleModule : public UObject
{
	char bSpawnModule : 1;  // 0x28(0x1)
	char bUpdateModule : 1;  // 0x28(0x1)
	char bFinalUpdateModule : 1;  // 0x28(0x1)
	char bUpdateForGPUEmitter : 1;  // 0x28(0x1)
	char bCurvesAsColor : 1;  // 0x28(0x1)
	char b3DDrawMode : 1;  // 0x28(0x1)
	char bSupported3DDrawMode : 1;  // 0x28(0x1)
	char bEnabled : 1;  // 0x28(0x1)
	char bEditable : 1;  // 0x29(0x1)
	char LODDuplicate : 1;  // 0x29(0x1)
	char bSupportsRandomSeed : 1;  // 0x29(0x1)
	char bRequiresLoopingNotification : 1;  // 0x29(0x1)
	char pad_41_1 : 4;  // 0x29(0x1)
	char LODValidity;  // 0x2A(0x1)
	char pad_43[5];  // 0x2B(0x5)

}; 



// Class Engine.BlendableInterface
// Size: 0x28(Inherited: 0x28) 
struct UBlendableInterface : public UInterface
{

}; 



// Class Engine.MaterialExpressionClamp
// Size: 0x88(Inherited: 0x40) 
struct UMaterialExpressionClamp : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	struct FExpressionInput Min;  // 0x54(0x14)
	struct FExpressionInput Max;  // 0x68(0x14)
	char EClampMode ClampMode;  // 0x7C(0x1)
	char pad_125[3];  // 0x7D(0x3)
	float MinDefault;  // 0x80(0x4)
	float MaxDefault;  // 0x84(0x4)

}; 



// Class Engine.PreviewMeshCollection
// Size: 0x50(Inherited: 0x30) 
struct UPreviewMeshCollection : public UDataAsset
{
	char pad_48[8];  // 0x30(0x8)
	struct USkeleton* Skeleton;  // 0x38(0x8)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes;  // 0x40(0x10)

}; 



// Class Engine.MatineeInterface
// Size: 0x28(Inherited: 0x28) 
struct UMatineeInterface : public UInterface
{

}; 



// Class Engine.MaterialExpressionFontSampleParameter
// Size: 0x70(Inherited: 0x50) 
struct UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
	struct FName ParameterName;  // 0x50(0x8)
	struct FGuid ExpressionGUID;  // 0x58(0x10)
	struct FName Group;  // 0x68(0x8)

}; 



// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0x680(Inherited: 0x590) 
struct UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
	char pad_1424[8];  // 0x590(0x8)
	struct TArray<int32_t> SortedInstances;  // 0x598(0x10)
	int32_t NumBuiltInstances;  // 0x5A8(0x4)
	char pad_1452[4];  // 0x5AC(0x4)
	struct FBox BuiltInstanceBounds;  // 0x5B0(0x1C)
	struct FBox UnbuiltInstanceBounds;  // 0x5CC(0x1C)
	struct TArray<struct FBox> UnbuiltInstanceBoundsList;  // 0x5E8(0x10)
	char bEnableDensityScaling : 1;  // 0x5F8(0x1)
	char pad_1528_1 : 7;  // 0x5F8(0x1)
	char pad_1529[8];  // 0x5F9(0x8)
	int32_t OcclusionLayerNumNodes;  // 0x600(0x4)
	struct FBoxSphereBounds CacheMeshExtendedBounds;  // 0x604(0x1C)
	char pad_1568_1 : 7;  // 0x620(0x1)
	bool bDisableCollision : 1;  // 0x620(0x1)
	char pad_1569[3];  // 0x621(0x3)
	int32_t InstanceCountToRender;  // 0x624(0x4)
	char pad_1576[88];  // 0x628(0x58)

	bool RemoveInstances(struct TArray<int32_t>& InstancesToRemove); // Function Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances
}; 



// Class Engine.InterpFilter_Classes
// Size: 0x38(Inherited: 0x38) 
struct UInterpFilter_Classes : public UInterpFilter
{

}; 



// Class Engine.HUD
// Size: 0x310(Inherited: 0x220) 
struct AHUD : public AActor
{
	struct APlayerController* PlayerOwner;  // 0x220(0x8)
	char bLostFocusPaused : 1;  // 0x228(0x1)
	char bShowHUD : 1;  // 0x228(0x1)
	char bShowDebugInfo : 1;  // 0x228(0x1)
	char pad_552_1 : 5;  // 0x228(0x1)
	char pad_553[4];  // 0x229(0x4)
	int32_t CurrentTargetIndex;  // 0x22C(0x4)
	char bShowHitBoxDebugInfo : 1;  // 0x230(0x1)
	char bShowOverlays : 1;  // 0x230(0x1)
	char bEnableDebugTextShadow : 1;  // 0x230(0x1)
	char pad_560_1 : 5;  // 0x230(0x1)
	char pad_561[8];  // 0x231(0x8)
	struct TArray<struct AActor*> PostRenderedActors;  // 0x238(0x10)
	char pad_584[8];  // 0x248(0x8)
	struct TArray<struct FName> DebugDisplay;  // 0x250(0x10)
	struct TArray<struct FName> ToggledDebugCategories;  // 0x260(0x10)
	struct UCanvas* Canvas;  // 0x270(0x8)
	struct UCanvas* DebugCanvas;  // 0x278(0x8)
	struct TArray<struct FDebugTextInfo> DebugTextList;  // 0x280(0x10)
	AActor* ShowDebugTargetDesiredClass;  // 0x290(0x8)
	struct AActor* ShowDebugTargetActor;  // 0x298(0x8)
	char pad_672[112];  // 0x2A0(0x70)

	void ShowHUD(); // Function Engine.HUD.ShowHUD
	void ShowDebugToggleSubCategory(struct FName Category); // Function Engine.HUD.ShowDebugToggleSubCategory
	void ShowDebugForReticleTargetToggle(AActor* DesiredClass); // Function Engine.HUD.ShowDebugForReticleTargetToggle
	void ShowDebug(struct FName DebugType); // Function Engine.HUD.ShowDebug
	void RemoveDebugText(struct AActor* SrcActor, bool bLeaveDurationText); // Function Engine.HUD.RemoveDebugText
	void RemoveAllDebugStrings(); // Function Engine.HUD.RemoveAllDebugStrings
	void ReceiveHitBoxRelease(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxRelease
	void ReceiveHitBoxEndCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxEndCursorOver
	void ReceiveHitBoxClick(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxClick
	void ReceiveHitBoxBeginCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // Function Engine.HUD.ReceiveDrawHUD
	struct FVector Project(struct FVector Location); // Function Engine.HUD.Project
	void PreviousDebugTarget(); // Function Engine.HUD.PreviousDebugTarget
	void NextDebugTarget(); // Function Engine.HUD.NextDebugTarget
	void GetTextSize(struct FString Text, float& OutWidth, float& OutHeight, struct UFont* Font, float Scale); // Function Engine.HUD.GetTextSize
	struct APlayerController* GetOwningPlayerController(); // Function Engine.HUD.GetOwningPlayerController
	struct APawn* GetOwningPawn(); // Function Engine.HUD.GetOwningPawn
	void GetActorsInSelectionRectangle(AActor* ClassFilter, struct FVector2D& FirstPoint, struct FVector2D& SecondPoint, struct TArray<struct AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed); // Function Engine.HUD.GetActorsInSelectionRectangle
	void DrawTextureSimple(struct UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition); // Function Engine.HUD.DrawTextureSimple
	void DrawTexture(struct UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, struct FLinearColor TintColor, char EBlendMode BlendMode, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // Function Engine.HUD.DrawTexture
	void DrawText(struct FString Text, struct FLinearColor TextColor, float ScreenX, float ScreenY, struct UFont* Font, float Scale, bool bScalePosition); // Function Engine.HUD.DrawText
	void DrawRect(struct FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH); // Function Engine.HUD.DrawRect
	void DrawMaterialTriangle(struct UMaterialInterface* Material, struct FVector2D V0_Pos, struct FVector2D V1_Pos, struct FVector2D V2_Pos, struct FVector2D V0_UV, struct FVector2D V1_UV, struct FVector2D V2_UV, struct FLinearColor V0_Color, struct FLinearColor V1_Color, struct FLinearColor V2_Color); // Function Engine.HUD.DrawMaterialTriangle
	void DrawMaterialSimple(struct UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition); // Function Engine.HUD.DrawMaterialSimple
	void DrawMaterial(struct UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // Function Engine.HUD.DrawMaterial
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, struct FLinearColor LineColor, float LineThickness); // Function Engine.HUD.DrawLine
	void Deproject(float ScreenX, float ScreenY, struct FVector& WorldPosition, struct FVector& WorldDirection); // Function Engine.HUD.Deproject
	void AddHitBox(struct FVector2D position, struct FVector2D Size, struct FName InName, bool bConsumesInput, int32_t Priority); // Function Engine.HUD.AddHitBox
	void AddDebugText(struct FString DebugText, struct AActor* SrcActor, float Duration, struct FVector Offset, struct FVector DesiredOffset, struct FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, struct UFont* InFont, float FontScale, bool bDrawShadow); // Function Engine.HUD.AddDebugText
}; 



// Class Engine.Console
// Size: 0x130(Inherited: 0x28) 
struct UConsole : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct ULocalPlayer* ConsoleTargetPlayer;  // 0x38(0x8)
	struct UTexture2D* DefaultTexture_Black;  // 0x40(0x8)
	struct UTexture2D* DefaultTexture_White;  // 0x48(0x8)
	char pad_80[24];  // 0x50(0x18)
	struct TArray<struct FString> HistoryBuffer;  // 0x68(0x10)
	char pad_120[184];  // 0x78(0xB8)

}; 



// Class Engine.TriggerBase
// Size: 0x228(Inherited: 0x220) 
struct ATriggerBase : public AActor
{
	struct UShapeComponent* CollisionComponent;  // 0x220(0x8)

}; 



// Class Engine.InterpTrackInstFloatProp
// Size: 0x60(Inherited: 0x50) 
struct UInterpTrackInstFloatProp : public UInterpTrackInstProperty
{
	char pad_80[8];  // 0x50(0x8)
	float ResetFloat;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 



// Class Engine.ParticleModuleBeamModifier
// Size: 0x108(Inherited: 0x30) 
struct UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
	char BeamModifierType ModifierType;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	struct FBeamModifierOptions PositionOptions;  // 0x34(0x4)
	struct FRawDistributionVector position;  // 0x38(0x48)
	struct FBeamModifierOptions TangentOptions;  // 0x80(0x4)
	char pad_132[4];  // 0x84(0x4)
	struct FRawDistributionVector Tangent;  // 0x88(0x48)
	char bAbsoluteTangent : 1;  // 0xD0(0x1)
	char pad_208_1 : 7;  // 0xD0(0x1)
	char pad_209[4];  // 0xD1(0x4)
	struct FBeamModifierOptions StrengthOptions;  // 0xD4(0x4)
	struct FRawDistributionFloat Strength;  // 0xD8(0x30)

}; 



// Class Engine.TriggerBox
// Size: 0x228(Inherited: 0x228) 
struct ATriggerBox : public ATriggerBase
{

}; 



// Class Engine.DynamicBlueprintBinding
// Size: 0x28(Inherited: 0x28) 
struct UDynamicBlueprintBinding : public UObject
{

}; 



// Class Engine.AvoidanceManager
// Size: 0xE0(Inherited: 0x28) 
struct UAvoidanceManager : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	float DefaultTimeToLive;  // 0x30(0x4)
	float LockTimeAfterAvoid;  // 0x34(0x4)
	float LockTimeAfterClean;  // 0x38(0x4)
	float DeltaTimeToPredict;  // 0x3C(0x4)
	float ArtificialRadiusExpansion;  // 0x40(0x4)
	float TestHeightDifference;  // 0x44(0x4)
	float HeightCheckMargin;  // 0x48(0x4)
	char pad_76[148];  // 0x4C(0x94)

	bool RegisterMovementComponent(struct UMovementComponent* MovementComp, float AvoidanceWeight); // Function Engine.AvoidanceManager.RegisterMovementComponent
	int32_t GetObjectCount(); // Function Engine.AvoidanceManager.GetObjectCount
	int32_t GetNewAvoidanceUID(); // Function Engine.AvoidanceManager.GetNewAvoidanceUID
	struct FVector GetAvoidanceVelocityForComponent(struct UMovementComponent* MovementComp); // Function Engine.AvoidanceManager.GetAvoidanceVelocityForComponent
}; 



// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x138(Inherited: 0x28) 
struct UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base
{
	struct FHapticFeedbackDetails_Curve HapticDetails;  // 0x28(0x110)

}; 



// Class Engine.SceneCapture2D
// Size: 0x238(Inherited: 0x230) 
struct ASceneCapture2D : public ASceneCapture
{
	struct USceneCaptureComponent2D* CaptureComponent2D;  // 0x230(0x8)

	void OnInterpToggle(bool bEnable); // Function Engine.SceneCapture2D.OnInterpToggle
}; 



// Class Engine.ParticleModuleEventSendToGame
// Size: 0x28(Inherited: 0x28) 
struct UParticleModuleEventSendToGame : public UObject
{

}; 



// Class Engine.CameraComponent
// Size: 0x7D0(Inherited: 0x200) 
struct UCameraComponent : public USceneComponent
{
	float FieldOfView;  // 0x1F8(0x4)
	float OrthoWidth;  // 0x1FC(0x4)
	float OrthoNearClipPlane;  // 0x200(0x4)
	float OrthoFarClipPlane;  // 0x204(0x4)
	float AspectRatio;  // 0x208(0x4)
	char bConstrainAspectRatio : 1;  // 0x20C(0x1)
	char bUseFieldOfViewForLOD : 1;  // 0x20C(0x1)
	char bLockToHmd : 1;  // 0x20C(0x1)
	char bUsePawnControlRotation : 1;  // 0x20C(0x1)
	char ECameraProjectionMode ProjectionMode;  // 0x20D(0x1)
	char pad_533_1 : 4;  // 0x215(0x1)
	char pad_534[43];  // 0x216(0x2B)
	float PostProcessBlendWeight;  // 0x240(0x4)
	char pad_580[44];  // 0x244(0x2C)
	struct FPostProcessSettings PostProcessSettings;  // 0x270(0x560)

	void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD); // Function Engine.CameraComponent.SetUseFieldOfViewForLOD
	void SetProjectionMode(char ECameraProjectionMode InProjectionMode); // Function Engine.CameraComponent.SetProjectionMode
	void SetPostProcessBlendWeight(float InPostProcessBlendWeight); // Function Engine.CameraComponent.SetPostProcessBlendWeight
	void SetOrthoWidth(float InOrthoWidth); // Function Engine.CameraComponent.SetOrthoWidth
	void SetOrthoNearClipPlane(float InOrthoNearClipPlane); // Function Engine.CameraComponent.SetOrthoNearClipPlane
	void SetOrthoFarClipPlane(float InOrthoFarClipPlane); // Function Engine.CameraComponent.SetOrthoFarClipPlane
	void SetFieldOfView(float InFieldOfView); // Function Engine.CameraComponent.SetFieldOfView
	void SetConstraintAspectRatio(bool bInConstrainAspectRatio); // Function Engine.CameraComponent.SetConstraintAspectRatio
	void SetAspectRatio(float InAspectRatio); // Function Engine.CameraComponent.SetAspectRatio
	void RemoveBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject); // Function Engine.CameraComponent.RemoveBlendable
	void OnCameraMeshHiddenChanged(); // Function Engine.CameraComponent.OnCameraMeshHiddenChanged
	void GetCameraView(float DeltaTime, struct FMinimalViewInfo& DesiredView); // Function Engine.CameraComponent.GetCameraView
	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // Function Engine.CameraComponent.AddOrUpdateBlendable
}; 



// Class Engine.TextureRenderTarget
// Size: 0x180(Inherited: 0x180) 
struct UTextureRenderTarget : public UTexture
{
	float TargetGamma;  // 0x178(0x4)

}; 



// Class Engine.NavigationObjectBase
// Size: 0x248(Inherited: 0x220) 
struct ANavigationObjectBase : public AActor
{
	char pad_544[8];  // 0x220(0x8)
	struct UCapsuleComponent* CapsuleComponent;  // 0x228(0x8)
	struct UBillboardComponent* GoodSprite;  // 0x230(0x8)
	struct UBillboardComponent* BadSprite;  // 0x238(0x8)
	char bIsPIEPlayerStart : 1;  // 0x240(0x1)
	char pad_576_1 : 7;  // 0x240(0x1)
	char pad_577[8];  // 0x241(0x8)

}; 



// Class Engine.PlayerStart
// Size: 0x250(Inherited: 0x248) 
struct APlayerStart : public ANavigationObjectBase
{
	struct FName PlayerStartTag;  // 0x248(0x8)

}; 



// Class Engine.EdGraphPin_Deprecated
// Size: 0x118(Inherited: 0x28) 
struct UEdGraphPin_Deprecated : public UObject
{
	struct FString PinName;  // 0x28(0x10)
	struct FString PinToolTip;  // 0x38(0x10)
	char EEdGraphPinDirection Direction;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)
	struct FEdGraphPinType PinType;  // 0x50(0x58)
	struct FString DefaultValue;  // 0xA8(0x10)
	struct FString AutogeneratedDefaultValue;  // 0xB8(0x10)
	struct UObject* DefaultObject;  // 0xC8(0x8)
	struct FText DefaultTextValue;  // 0xD0(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> LinkedTo;  // 0xE8(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> SubPins;  // 0xF8(0x10)
	struct UEdGraphPin_Deprecated* ParentPin;  // 0x108(0x8)
	struct UEdGraphPin_Deprecated* ReferencePassThroughConnection;  // 0x110(0x8)

}; 



// Class Engine.BoxComponent
// Size: 0x480(Inherited: 0x470) 
struct UBoxComponent : public UShapeComponent
{
	struct FVector BoxExtent;  // 0x468(0xC)
	float LineThickness;  // 0x474(0x4)

	void SetBoxExtent(struct FVector InBoxExtent, bool bUpdateOverlaps); // Function Engine.BoxComponent.SetBoxExtent
	struct FVector GetUnscaledBoxExtent(); // Function Engine.BoxComponent.GetUnscaledBoxExtent
	struct FVector GetScaledBoxExtent(); // Function Engine.BoxComponent.GetScaledBoxExtent
}; 



// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// Size: 0x140(Inherited: 0x120) 
struct UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x120(0x20)

}; 



// Class Engine.ParticleModuleColorOverLife
// Size: 0xB0(Inherited: 0x30) 
struct UParticleModuleColorOverLife : public UParticleModuleColorBase
{
	struct FRawDistributionVector ColorOverLife;  // 0x30(0x48)
	struct FRawDistributionFloat AlphaOverLife;  // 0x78(0x30)
	char bClampAlpha : 1;  // 0xA8(0x1)
	char pad_168_1 : 7;  // 0xA8(0x1)
	char pad_169[8];  // 0xA9(0x8)

}; 



// Class Engine.PostProcessVolume
// Size: 0x7D0(Inherited: 0x258) 
struct APostProcessVolume : public AVolume
{
	char pad_600[8];  // 0x258(0x8)
	struct FPostProcessSettings Settings;  // 0x260(0x560)
	float Priority;  // 0x7C0(0x4)
	float BlendRadius;  // 0x7C4(0x4)
	float BlendWeight;  // 0x7C8(0x4)
	char bEnabled : 1;  // 0x7CC(0x1)
	char bUnbound : 1;  // 0x7CC(0x1)
	char pad_1996_1 : 6;  // 0x7CC(0x1)
	char pad_1997[4];  // 0x7CD(0x4)

	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // Function Engine.PostProcessVolume.AddOrUpdateBlendable
}; 



// Class Engine.MaterialExpressionBlackBody
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionBlackBody : public UMaterialExpression
{
	struct FExpressionInput Temp;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionSkinningVertexOffsets
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionSkinningVertexOffsets : public UMaterialExpression
{

}; 



// Class Engine.SkyLight
// Size: 0x230(Inherited: 0x220) 
struct ASkyLight : public AInfo
{
	struct USkyLightComponent* LightComponent;  // 0x220(0x8)
	char bEnabled : 1;  // 0x228(0x1)
	char pad_552_1 : 7;  // 0x228(0x1)
	char pad_553[8];  // 0x229(0x8)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled
}; 



// Class Engine.MaterialExpressionComment
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionComment : public UMaterialExpression
{
	int32_t SizeX;  // 0x40(0x4)
	int32_t SizeY;  // 0x44(0x4)
	struct FString Text;  // 0x48(0x10)
	struct FLinearColor CommentColor;  // 0x58(0x10)
	int32_t FontSize;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionRotator
// Size: 0x78(Inherited: 0x40) 
struct UMaterialExpressionRotator : public UMaterialExpression
{
	struct FExpressionInput Coordinate;  // 0x40(0x14)
	struct FExpressionInput Time;  // 0x54(0x14)
	float CenterX;  // 0x68(0x4)
	float CenterY;  // 0x6C(0x4)
	float Speed;  // 0x70(0x4)
	uint32_t ConstCoordinate;  // 0x74(0x4)

}; 



// Class Engine.StreamableRenderAsset
// Size: 0x60(Inherited: 0x28) 
struct UStreamableRenderAsset : public UObject
{
	char pad_40[24];  // 0x28(0x18)
	double ForceMipLevelsToBeResidentTimestamp;  // 0x40(0x8)
	int32_t NumCinematicMipLevels;  // 0x48(0x4)
	int32_t StreamingIndex;  // 0x4C(0x4)
	int32_t CachedCombinedLODBias;  // 0x50(0x4)
	char NeverStream : 1;  // 0x54(0x1)
	char bGlobalForceMipLevelsToBeResident : 1;  // 0x54(0x1)
	char bHasStreamingUpdatePending : 1;  // 0x54(0x1)
	char bForceMiplevelsToBeResident : 1;  // 0x54(0x1)
	char bIgnoreStreamingMipBias : 1;  // 0x54(0x1)
	char bUseCinematicMipLevels : 1;  // 0x54(0x1)
	char pad_84_1 : 2;  // 0x54(0x1)
	char pad_85[12];  // 0x55(0xC)

}; 



// Class Engine.DefaultPhysicsVolume
// Size: 0x268(Inherited: 0x268) 
struct ADefaultPhysicsVolume : public APhysicsVolume
{

}; 



// Class Engine.EmitterCameraLensEffectBase
// Size: 0x2E0(Inherited: 0x270) 
struct AEmitterCameraLensEffectBase : public AEmitter
{
	struct UParticleSystem* PS_CameraEffect;  // 0x270(0x8)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent;  // 0x278(0x8)
	struct APlayerCameraManager* BaseCamera;  // 0x280(0x8)
	char pad_648[8];  // 0x288(0x8)
	struct FTransform RelativeTransform;  // 0x290(0x30)
	float BaseFOV;  // 0x2C0(0x4)
	char bAllowMultipleInstances : 1;  // 0x2C4(0x1)
	char bResetWhenRetriggered : 1;  // 0x2C4(0x1)
	char pad_708_1 : 6;  // 0x2C4(0x1)
	char pad_709[4];  // 0x2C5(0x4)
	struct TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame;  // 0x2C8(0x10)
	float DistFromCamera;  // 0x2D8(0x4)
	char pad_732[4];  // 0x2DC(0x4)

}; 



// Class Engine.TextureMipDataProviderFactory
// Size: 0x28(Inherited: 0x28) 
struct UTextureMipDataProviderFactory : public UAssetUserData
{

}; 



// Class Engine.ParticleModuleOrientationAxisLock
// Size: 0x38(Inherited: 0x30) 
struct UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
	char EParticleAxisLock LockAxisFlags;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 



// Class Engine.Texture
// Size: 0x180(Inherited: 0x60) 
struct UTexture : public UStreamableRenderAsset
{
	char pad_96[8];  // 0x60(0x8)
	struct FGuid LightingGuid;  // 0x68(0x10)
	int32_t LODBias;  // 0x78(0x4)
	char TextureCompressionSettings CompressionSettings;  // 0x7C(0x1)
	char TextureFilter Filter;  // 0x7D(0x1)
	uint8_t  MipLoadOptions;  // 0x7E(0x1)
	char TextureGroup LODGroup;  // 0x7F(0x1)
	struct FPerPlatformFloat Downscale;  // 0x80(0x4)
	uint8_t  DownscaleOptions;  // 0x84(0x1)
	char sRGB : 1;  // 0x85(0x1)
	char bNoTiling : 1;  // 0x85(0x1)
	char VirtualTextureStreaming : 1;  // 0x85(0x1)
	char CompressionYCoCg : 1;  // 0x85(0x1)
	char bNotOfflineProcessed : 1;  // 0x85(0x1)
	char bAsyncResourceReleaseHasBeenStarted : 1;  // 0x85(0x1)
	char pad_133_1 : 2;  // 0x85(0x1)
	char pad_134[3];  // 0x86(0x3)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x88(0x10)
	char pad_152[232];  // 0x98(0xE8)

}; 



// Class Engine.TextureCube
// Size: 0x1D0(Inherited: 0x180) 
struct UTextureCube : public UTexture
{
	char pad_384[80];  // 0x180(0x50)

}; 



// Class Engine.AISystemBase
// Size: 0x58(Inherited: 0x28) 
struct UAISystemBase : public UObject
{
	struct FSoftClassPath AISystemClassName;  // 0x28(0x18)
	struct FName AISystemModuleName;  // 0x40(0x8)
	char pad_72[8];  // 0x48(0x8)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bInstantiateAISystemOnClient : 1;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)

}; 



// Class Engine.CullDistanceVolume
// Size: 0x270(Inherited: 0x258) 
struct ACullDistanceVolume : public AVolume
{
	struct TArray<struct FCullDistanceSizePair> CullDistances;  // 0x258(0x10)
	char bEnabled : 1;  // 0x268(0x1)
	char pad_616_1 : 7;  // 0x268(0x1)
	char pad_617[8];  // 0x269(0x8)

}; 



// Class Engine.ActorComponentInstanceDataTransientOuter
// Size: 0x28(Inherited: 0x28) 
struct UActorComponentInstanceDataTransientOuter : public UObject
{

}; 



// Class Engine.UserDefinedStruct
// Size: 0x108(Inherited: 0xC0) 
struct UUserDefinedStruct : public UScriptStruct
{
	char EUserDefinedStructureStatus Status;  // 0xC0(0x1)
	char pad_193[3];  // 0xC1(0x3)
	struct FGuid Guid;  // 0xC4(0x10)
	char pad_212[52];  // 0xD4(0x34)

}; 



// Class Engine.StaticMeshActor
// Size: 0x230(Inherited: 0x220) 
struct AStaticMeshActor : public AActor
{
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x220(0x8)
	char pad_552_1 : 7;  // 0x228(0x1)
	bool bStaticMeshReplicateMovement : 1;  // 0x228(0x1)
	uint8_t  NavigationGeometryGatheringMode;  // 0x229(0x1)
	char pad_554[6];  // 0x22A(0x6)

	void SetMobility(char EComponentMobility InMobility); // Function Engine.StaticMeshActor.SetMobility
}; 



// Class Engine.CameraAnimInst
// Size: 0x110(Inherited: 0x28) 
struct UCameraAnimInst : public UObject
{
	struct UCameraAnim* CamAnim;  // 0x28(0x8)
	struct UInterpGroupInst* InterpGroupInst;  // 0x30(0x8)
	char pad_56[24];  // 0x38(0x18)
	float PlayRate;  // 0x50(0x4)
	char pad_84[20];  // 0x54(0x14)
	struct UInterpTrackMove* MoveTrack;  // 0x68(0x8)
	struct UInterpTrackInstMove* MoveInst;  // 0x70(0x8)
	uint8_t  PlaySpace;  // 0x78(0x1)
	char pad_121[151];  // 0x79(0x97)

	void Stop(bool bImmediate); // Function Engine.CameraAnimInst.Stop
	void SetScale(float NewDuration); // Function Engine.CameraAnimInst.SetScale
	void SetDuration(float NewDuration); // Function Engine.CameraAnimInst.SetDuration
}; 



// Class Engine.ParticleModuleLocationPrimitiveCylinder
// Size: 0x120(Inherited: 0xB0) 
struct UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
	char RadialVelocity : 1;  // 0xB0(0x1)
	char pad_176_1 : 7;  // 0xB0(0x1)
	char pad_177[8];  // 0xB1(0x8)
	struct FRawDistributionFloat StartRadius;  // 0xB8(0x30)
	struct FRawDistributionFloat StartHeight;  // 0xE8(0x30)
	char CylinderHeightAxis HeightAxis;  // 0x118(0x1)
	char pad_281[7];  // 0x119(0x7)

}; 



// Class Engine.MaterialInterface
// Size: 0x88(Inherited: 0x28) 
struct UMaterialInterface : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct USubsurfaceProfile* SubsurfaceProfile;  // 0x38(0x8)
	char pad_64[16];  // 0x40(0x10)
	struct FLightmassMaterialInterfaceSettings LightmassSettings;  // 0x50(0x10)
	struct TArray<struct FMaterialTextureInfo> TextureStreamingData;  // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x70(0x10)
	char pad_128[8];  // 0x80(0x8)

	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse); // Function Engine.MaterialInterface.SetForceMipLevelsToBeResident
	struct UPhysicalMaterialMask* GetPhysicalMaterialMask(); // Function Engine.MaterialInterface.GetPhysicalMaterialMask
	struct UPhysicalMaterial* GetPhysicalMaterialFromMap(int32_t Index); // Function Engine.MaterialInterface.GetPhysicalMaterialFromMap
	struct UPhysicalMaterial* GetPhysicalMaterial(); // Function Engine.MaterialInterface.GetPhysicalMaterial
	struct FMaterialParameterInfo GetParameterInfo(char EMaterialParameterAssociation Association, struct FName ParameterName, struct UMaterialFunctionInterface* LayerFunction); // Function Engine.MaterialInterface.GetParameterInfo
	struct UMaterial* GetBaseMaterial(); // Function Engine.MaterialInterface.GetBaseMaterial
}; 



// Class Engine.EdGraphSchema
// Size: 0x28(Inherited: 0x28) 
struct UEdGraphSchema : public UObject
{

}; 



// Class Engine.MaterialInstance
// Size: 0x310(Inherited: 0x88) 
struct UMaterialInstance : public UMaterialInterface
{
	struct UPhysicalMaterial* PhysMaterial;  // 0x88(0x8)
	struct UPhysicalMaterial* PhysicalMaterialMap[8];  // 0x90(0x40)
	struct UMaterialInterface* Parent;  // 0xD0(0x8)
	char bHasStaticPermutationResource : 1;  // 0xD8(0x1)
	char bOverrideSubsurfaceProfile : 1;  // 0xD8(0x1)
	char pad_216_1 : 6;  // 0xD8(0x1)
	char pad_217[8];  // 0xD9(0x8)
	struct TArray<struct FScalarParameterValue> ScalarParameterValues;  // 0xE0(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues;  // 0xF0(0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues;  // 0x100(0x10)
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;  // 0x110(0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues;  // 0x120(0x10)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides;  // 0x130(0x8)
	char pad_312[16];  // 0x138(0x10)
	struct FStaticParameterSet StaticParameters;  // 0x148(0x40)
	struct FMaterialCachedParameters CachedLayerParameters;  // 0x188(0x150)
	struct TArray<struct UObject*> CachedReferencedTextures;  // 0x2D8(0x10)
	char pad_744[40];  // 0x2E8(0x28)

}; 



// Class Engine.InterpGroupInst
// Size: 0x48(Inherited: 0x28) 
struct UInterpGroupInst : public UObject
{
	struct UInterpGroup* Group;  // 0x28(0x8)
	struct AActor* GroupActor;  // 0x30(0x8)
	struct TArray<struct UInterpTrackInst*> TrackInst;  // 0x38(0x10)

}; 



// Class Engine.SoundNodeMature
// Size: 0x48(Inherited: 0x48) 
struct USoundNodeMature : public USoundNode
{

}; 



// Class Engine.MaterialInstanceConstant
// Size: 0x318(Inherited: 0x310) 
struct UMaterialInstanceConstant : public UMaterialInstance
{
	struct UPhysicalMaterialMask* PhysMaterialMask;  // 0x310(0x8)

	struct FLinearColor K2_GetVectorParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetVectorParameterValue
	struct UTexture* K2_GetTextureParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetTextureParameterValue
	float K2_GetScalarParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetScalarParameterValue
}; 



// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x68(Inherited: 0x30) 
struct UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
	struct UDistributionFloat* VectorFieldScaleOverLife;  // 0x30(0x8)
	struct FRawDistributionFloat VectorFieldScaleOverLifeRaw;  // 0x38(0x30)

}; 



// Class Engine.TickableWorldSubsystem
// Size: 0x40(Inherited: 0x30) 
struct UTickableWorldSubsystem : public UWorldSubsystem
{
	char pad_48[16];  // 0x30(0x10)

}; 



// Class Engine.MaterialExpressionCustomOutput
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionCustomOutput : public UMaterialExpression
{

}; 



// Class Engine.EngineCustomTimeStep
// Size: 0x28(Inherited: 0x28) 
struct UEngineCustomTimeStep : public UObject
{

}; 



// Class Engine.ParticleModuleLifetime
// Size: 0x60(Inherited: 0x30) 
struct UParticleModuleLifetime : public UParticleModuleLifetimeBase
{
	struct FRawDistributionFloat LifeTime;  // 0x30(0x30)

}; 



// Class Engine.Canvas
// Size: 0x2D0(Inherited: 0x28) 
struct UCanvas : public UObject
{
	float OrgX;  // 0x28(0x4)
	float OrgY;  // 0x2C(0x4)
	float ClipX;  // 0x30(0x4)
	float ClipY;  // 0x34(0x4)
	struct FColor DrawColor;  // 0x38(0x4)
	char bCenterX : 1;  // 0x3C(0x1)
	char bCenterY : 1;  // 0x3C(0x1)
	char bNoSmooth : 1;  // 0x3C(0x1)
	char pad_60_1 : 5;  // 0x3C(0x1)
	char pad_61[4];  // 0x3D(0x4)
	int32_t SizeX;  // 0x40(0x4)
	int32_t SizeY;  // 0x44(0x4)
	char pad_72[8];  // 0x48(0x8)
	struct FPlane ColorModulate;  // 0x50(0x10)
	struct UTexture2D* DefaultTexture;  // 0x60(0x8)
	struct UTexture2D* GradientTexture0;  // 0x68(0x8)
	struct UReporterGraph* ReporterGraph;  // 0x70(0x8)
	char pad_120[600];  // 0x78(0x258)

	struct FVector2D K2_TextSize(struct UFont* RenderFont, struct FString RenderText, struct FVector2D Scale); // Function Engine.Canvas.K2_TextSize
	struct FVector2D K2_StrLen(struct UFont* RenderFont, struct FString RenderText); // Function Engine.Canvas.K2_StrLen
	struct FVector K2_Project(struct FVector WorldLocation); // Function Engine.Canvas.K2_Project
	void K2_DrawTriangle(struct UTexture* RenderTexture, struct TArray<struct FCanvasUVTri> Triangles); // Function Engine.Canvas.K2_DrawTriangle
	void K2_DrawTexture(struct UTexture* RenderTexture, struct FVector2D screenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, struct FLinearColor RenderColor, char EBlendMode BlendMode, float Rotation, struct FVector2D PivotPoint); // Function Engine.Canvas.K2_DrawTexture
	void K2_DrawText(struct UFont* RenderFont, struct FString RenderText, struct FVector2D screenPosition, struct FVector2D Scale, struct FLinearColor RenderColor, float Kerning, struct FLinearColor ShadowColor, struct FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, struct FLinearColor OutlineColor); // Function Engine.Canvas.K2_DrawText
	void K2_DrawPolygon(struct UTexture* RenderTexture, struct FVector2D screenPosition, struct FVector2D Radius, int32_t numberOfSides, struct FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawPolygon
	void K2_DrawMaterialTriangle(struct UMaterialInterface* RenderMaterial, struct TArray<struct FCanvasUVTri> Triangles); // Function Engine.Canvas.K2_DrawMaterialTriangle
	void K2_DrawMaterial(struct UMaterialInterface* RenderMaterial, struct FVector2D screenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, float Rotation, struct FVector2D PivotPoint); // Function Engine.Canvas.K2_DrawMaterial
	void K2_DrawLine(struct FVector2D ScreenPositionA, struct FVector2D ScreenPositionB, float Thickness, struct FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawLine
	void K2_DrawBox(struct FVector2D screenPosition, struct FVector2D ScreenSize, float Thickness, struct FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawBox
	void K2_DrawBorder(struct UTexture* BorderTexture, struct UTexture* BackgroundTexture, struct UTexture* LeftBorderTexture, struct UTexture* RightBorderTexture, struct UTexture* TopBorderTexture, struct UTexture* BottomBorderTexture, struct FVector2D screenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, struct FLinearColor RenderColor, struct FVector2D BorderScale, struct FVector2D BackgroundScale, float Rotation, struct FVector2D PivotPoint, struct FVector2D CornerSize); // Function Engine.Canvas.K2_DrawBorder
	void K2_Deproject(struct FVector2D screenPosition, struct FVector& WorldOrigin, struct FVector& WorldDirection); // Function Engine.Canvas.K2_Deproject
}; 



// Class Engine.Blueprint
// Size: 0xA0(Inherited: 0x50) 
struct UBlueprint : public UBlueprintCore
{
	UObject* ParentClass;  // 0x50(0x8)
	char EBlueprintType BlueprintType;  // 0x58(0x1)
	char bRecompileOnLoad : 1;  // 0x59(0x1)
	char bHasBeenRegenerated : 1;  // 0x59(0x1)
	char bIsRegeneratingOnLoad : 1;  // 0x59(0x1)
	char pad_89_1 : 5;  // 0x59(0x1)
	char pad_90[3];  // 0x5A(0x3)
	int32_t BlueprintSystemVersion;  // 0x5C(0x4)
	struct USimpleConstructionScript* SimpleConstructionScript;  // 0x60(0x8)
	struct TArray<struct UActorComponent*> ComponentTemplates;  // 0x68(0x10)
	struct TArray<struct UTimelineTemplate*> Timelines;  // 0x78(0x10)
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides;  // 0x88(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler;  // 0x98(0x8)

}; 



// Class Engine.DistributionVectorUniform
// Size: 0x60(Inherited: 0x38) 
struct UDistributionVectorUniform : public UDistributionVector
{
	struct FVector Max;  // 0x38(0xC)
	struct FVector Min;  // 0x44(0xC)
	char bLockAxes : 1;  // 0x50(0x1)
	char pad_80_1 : 7;  // 0x50(0x1)
	char pad_81[4];  // 0x51(0x4)
	char EDistributionVectorLockFlags LockedAxes;  // 0x54(0x1)
	char EDistributionVectorMirrorFlags MirrorFlags[3];  // 0x55(0x3)
	char bUseExtremes : 1;  // 0x58(0x1)
	char pad_88_1 : 7;  // 0x58(0x1)
	char pad_89[8];  // 0x59(0x8)

}; 



// Class Engine.Model
// Size: 0x258(Inherited: 0x28) 
struct UModel : public UObject
{
	char pad_40[560];  // 0x28(0x230)

}; 



// Class Engine.ActorChannel
// Size: 0x290(Inherited: 0x68) 
struct UActorChannel : public UChannel
{
	struct AActor* Actor;  // 0x68(0x8)
	char pad_112[232];  // 0x70(0xE8)
	struct TArray<struct UObject*> CreateSubObjects;  // 0x158(0x10)
	char pad_360[296];  // 0x168(0x128)

}; 



// Class Engine.AnimationAsset
// Size: 0x80(Inherited: 0x28) 
struct UAnimationAsset : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct USkeleton* Skeleton;  // 0x38(0x8)
	char pad_64[32];  // 0x40(0x20)
	struct TArray<struct UAnimMetaData*> MetaData;  // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x70(0x10)

}; 



// Class Engine.AnimNotify_ResetClothingSimulation
// Size: 0x38(Inherited: 0x38) 
struct UAnimNotify_ResetClothingSimulation : public UAnimNotify
{

}; 



// Class Engine.KismetArrayLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetArrayLibrary : public UBlueprintFunctionLibrary
{

	void SetArrayPropertyByName(struct UObject* Object, struct FName PropertyName, struct TArray<int32_t>& Value); // Function Engine.KismetArrayLibrary.SetArrayPropertyByName
	void FilterArray(struct TArray<struct AActor*>& TargetArray, AActor* FilterClass, struct TArray<struct AActor*>& FilteredArray); // Function Engine.KismetArrayLibrary.FilterArray
	void Array_Swap(struct TArray<int32_t>& TargetArray, int32_t FirstIndex, int32_t SecondIndex); // Function Engine.KismetArrayLibrary.Array_Swap
	void Array_Shuffle(struct TArray<int32_t>& TargetArray); // Function Engine.KismetArrayLibrary.Array_Shuffle
	void Array_Set(struct TArray<int32_t>& TargetArray, int32_t Index, int32_t& Item, bool bSizeToFit); // Function Engine.KismetArrayLibrary.Array_Set
	void Array_Reverse(struct TArray<int32_t>& TargetArray); // Function Engine.KismetArrayLibrary.Array_Reverse
	void Array_Resize(struct TArray<int32_t>& TargetArray, int32_t Size); // Function Engine.KismetArrayLibrary.Array_Resize
	bool Array_RemoveItem(struct TArray<int32_t>& TargetArray, int32_t& Item); // Function Engine.KismetArrayLibrary.Array_RemoveItem
	void Array_Remove(struct TArray<int32_t>& TargetArray, int32_t IndexToRemove); // Function Engine.KismetArrayLibrary.Array_Remove
	void Array_RandomFromStream(struct TArray<int32_t>& TargetArray, struct FRandomStream& RandomStream, int32_t& OutItem, int32_t& OutIndex); // Function Engine.KismetArrayLibrary.Array_RandomFromStream
	void Array_Random(struct TArray<int32_t>& TargetArray, int32_t& OutItem, int32_t& OutIndex); // Function Engine.KismetArrayLibrary.Array_Random
	int32_t Array_Length(struct TArray<int32_t>& TargetArray); // Function Engine.KismetArrayLibrary.Array_Length
	int32_t Array_LastIndex(struct TArray<int32_t>& TargetArray); // Function Engine.KismetArrayLibrary.Array_LastIndex
	bool Array_IsValidIndex(struct TArray<int32_t>& TargetArray, int32_t IndexToTest); // Function Engine.KismetArrayLibrary.Array_IsValidIndex
	void Array_Insert(struct TArray<int32_t>& TargetArray, int32_t& NewItem, int32_t Index); // Function Engine.KismetArrayLibrary.Array_Insert
	bool Array_Identical(struct TArray<int32_t>& ArrayA, struct TArray<int32_t>& ArrayB); // Function Engine.KismetArrayLibrary.Array_Identical
	void Array_Get(struct TArray<int32_t>& TargetArray, int32_t Index, int32_t& Item); // Function Engine.KismetArrayLibrary.Array_Get
	int32_t Array_Find(struct TArray<int32_t>& TargetArray, int32_t& ItemToFind); // Function Engine.KismetArrayLibrary.Array_Find
	bool Array_Contains(struct TArray<int32_t>& TargetArray, int32_t& ItemToFind); // Function Engine.KismetArrayLibrary.Array_Contains
	void Array_Clear(struct TArray<int32_t>& TargetArray); // Function Engine.KismetArrayLibrary.Array_Clear
	void Array_Append(struct TArray<int32_t>& TargetArray, struct TArray<int32_t>& SourceArray); // Function Engine.KismetArrayLibrary.Array_Append
	int32_t Array_AddUnique(struct TArray<int32_t>& TargetArray, int32_t& NewItem); // Function Engine.KismetArrayLibrary.Array_AddUnique
	int32_t Array_Add(struct TArray<int32_t>& TargetArray, int32_t& NewItem); // Function Engine.KismetArrayLibrary.Array_Add
}; 



// Class Engine.BlendSpaceBase
// Size: 0x148(Inherited: 0x80) 
struct UBlendSpaceBase : public UAnimationAsset
{
	char pad_128[8];  // 0x80(0x8)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bRotationBlendInMeshSpace : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	float AnimLength;  // 0x8C(0x4)
	struct FInterpolationParameter InterpolationParam[3];  // 0x90(0x18)
	float TargetWeightInterpolationSpeedPerSec;  // 0xA8(0x4)
	char ENotifyTriggerMode NotifyTriggerMode;  // 0xAC(0x1)
	char pad_173[3];  // 0xAD(0x3)
	struct TArray<struct FPerBoneInterpolation> PerBoneBlend;  // 0xB0(0x10)
	int32_t SampleIndexWithMarkers;  // 0xC0(0x4)
	char pad_196[4];  // 0xC4(0x4)
	struct TArray<struct FBlendSample> SampleData;  // 0xC8(0x10)
	struct TArray<struct FEditorElement> GridSamples;  // 0xD8(0x10)
	struct FBlendParameter BlendParameters[3];  // 0xE8(0x60)

}; 



// Class Engine.ParticleModuleKillBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleKillBase : public UParticleModule
{

}; 



// Class Engine.MaterialExpressionCrossProduct
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionCrossProduct : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)

}; 



// Class Engine.BlendSpace
// Size: 0x150(Inherited: 0x148) 
struct UBlendSpace : public UBlendSpaceBase
{
	char EBlendSpaceAxis AxisToScaleAnimation;  // 0x148(0x1)
	char pad_329[7];  // 0x149(0x7)

}; 



// Class Engine.MaterialExpressionAppendVector
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionAppendVector : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)

}; 



// Class Engine.AimOffsetBlendSpace
// Size: 0x150(Inherited: 0x150) 
struct UAimOffsetBlendSpace : public UBlendSpace
{

}; 



// Class Engine.MaterialExpressionCameraVectorWS
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionCameraVectorWS : public UMaterialExpression
{

}; 



// Class Engine.SoundClass
// Size: 0xC8(Inherited: 0x28) 
struct USoundClass : public UObject
{
	struct FSoundClassProperties Properties;  // 0x28(0x78)
	struct TArray<struct USoundClass*> ChildClasses;  // 0xA0(0x10)
	struct TArray<struct FPassiveSoundMixModifier> PassiveSoundMixModifiers;  // 0xB0(0x10)
	struct USoundClass* ParentClass;  // 0xC0(0x8)

}; 



// Class Engine.CloudStorageBase
// Size: 0x50(Inherited: 0x38) 
struct UCloudStorageBase : public UPlatformInterfaceBase
{
	struct TArray<struct FString> LocalCloudFiles;  // 0x38(0x10)
	char bSuppressDelegateCalls : 1;  // 0x48(0x1)
	char pad_72_1 : 7;  // 0x48(0x1)
	char pad_73[8];  // 0x49(0x8)

}; 



// Class Engine.InGameAdManager
// Size: 0x60(Inherited: 0x38) 
struct UInGameAdManager : public UPlatformInterfaceBase
{
	char bShouldPauseWhileAdOpen : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[8];  // 0x39(0x8)
	struct TArray<struct FDelegate> ClickedBannerDelegates;  // 0x40(0x10)
	struct TArray<struct FDelegate> ClosedAdDelegates;  // 0x50(0x10)

}; 



// Class Engine.ReflectionCapture
// Size: 0x228(Inherited: 0x220) 
struct AReflectionCapture : public AActor
{
	struct UReflectionCaptureComponent* CaptureComponent;  // 0x220(0x8)

}; 



// Class Engine.BlendSpace1D
// Size: 0x150(Inherited: 0x148) 
struct UBlendSpace1D : public UBlendSpaceBase
{
	char pad_328_1 : 7;  // 0x148(0x1)
	bool bScaleAnimation : 1;  // 0x148(0x1)
	char pad_329[7];  // 0x149(0x7)

}; 



// Class Engine.ParticleModuleBeamBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleBeamBase : public UParticleModule
{

}; 



// Class Engine.Interface_PostProcessVolume
// Size: 0x28(Inherited: 0x28) 
struct UInterface_PostProcessVolume : public UInterface
{

}; 



// Class Engine.MaterialExpressionViewProperty
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionViewProperty : public UMaterialExpression
{
	char EMaterialExposedViewProperty Property;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 



// Class Engine.AimOffsetBlendSpace1D
// Size: 0x150(Inherited: 0x150) 
struct UAimOffsetBlendSpace1D : public UBlendSpace1D
{

}; 



// Class Engine.MaterialExpressionAtmosphericLightColor
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionAtmosphericLightColor : public UMaterialExpression
{

}; 



// Class Engine.TimelineComponent
// Size: 0x150(Inherited: 0xB0) 
struct UTimelineComponent : public UActorComponent
{
	struct FTimeline TheTimeline;  // 0xB0(0x98)
	char bIgnoreTimeDilation : 1;  // 0x148(0x1)
	char pad_328_1 : 7;  // 0x148(0x1)
	char pad_329[8];  // 0x149(0x8)

	void Stop(); // Function Engine.TimelineComponent.Stop
	void SetVectorCurve(struct UCurveVector* NewVectorCurve, struct FName VectorTrackName); // Function Engine.TimelineComponent.SetVectorCurve
	void SetTimelineLengthMode(char ETimelineLengthMode NewLengthMode); // Function Engine.TimelineComponent.SetTimelineLengthMode
	void SetTimelineLength(float NewLength); // Function Engine.TimelineComponent.SetTimelineLength
	void SetPlayRate(float NewRate); // Function Engine.TimelineComponent.SetPlayRate
	void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate); // Function Engine.TimelineComponent.SetPlaybackPosition
	void SetNewTime(float NewTime); // Function Engine.TimelineComponent.SetNewTime
	void SetLooping(bool bNewLooping); // Function Engine.TimelineComponent.SetLooping
	void SetLinearColorCurve(struct UCurveLinearColor* NewLinearColorCurve, struct FName LinearColorTrackName); // Function Engine.TimelineComponent.SetLinearColorCurve
	void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation); // Function Engine.TimelineComponent.SetIgnoreTimeDilation
	void SetFloatCurve(struct UCurveFloat* NewFloatCurve, struct FName FloatTrackName); // Function Engine.TimelineComponent.SetFloatCurve
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd
	void Reverse(); // Function Engine.TimelineComponent.Reverse
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart
	void Play(); // Function Engine.TimelineComponent.Play
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline
	bool IsReversing(); // Function Engine.TimelineComponent.IsReversing
	bool IsPlaying(); // Function Engine.TimelineComponent.IsPlaying
	bool IsLooping(); // Function Engine.TimelineComponent.IsLooping
	float GetTimelineLength(); // Function Engine.TimelineComponent.GetTimelineLength
	float GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate
	float GetPlaybackPosition(); // Function Engine.TimelineComponent.GetPlaybackPosition
	bool GetIgnoreTimeDilation(); // Function Engine.TimelineComponent.GetIgnoreTimeDilation
}; 



// Class Engine.AmbientSound
// Size: 0x228(Inherited: 0x220) 
struct AAmbientSound : public AActor
{
	struct UAudioComponent* AudioComponent;  // 0x220(0x8)

	void Stop(); // Function Engine.AmbientSound.Stop
	void Play(float StartTime); // Function Engine.AmbientSound.Play
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel); // Function Engine.AmbientSound.FadeOut
	void FadeIn(float FadeInDuration, float FadeVolumeLevel); // Function Engine.AmbientSound.FadeIn
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel); // Function Engine.AmbientSound.AdjustVolume
}; 



// Class Engine.LightmassPrimitiveSettingsObject
// Size: 0x40(Inherited: 0x28) 
struct ULightmassPrimitiveSettingsObject : public UObject
{
	struct FLightmassPrimitiveSettings LightmassSettings;  // 0x28(0x18)

}; 



// Class Engine.SoundNodeLooping
// Size: 0x50(Inherited: 0x48) 
struct USoundNodeLooping : public USoundNode
{
	int32_t LoopCount;  // 0x48(0x4)
	char bLoopIndefinitely : 1;  // 0x4C(0x1)
	char pad_76_1 : 7;  // 0x4C(0x1)
	char pad_77[4];  // 0x4D(0x4)

}; 



// Class Engine.AnimationSettings
// Size: 0xD0(Inherited: 0x38) 
struct UAnimationSettings : public UDeveloperSettings
{
	int32_t CompressCommandletVersion;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray;  // 0x40(0x10)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool ForceRecompression : 1;  // 0x50(0x1)
	char pad_81_1 : 7;  // 0x51(0x1)
	bool bForceBelowThreshold : 1;  // 0x51(0x1)
	char pad_82_1 : 7;  // 0x52(0x1)
	bool bFirstRecompressUsingCurrentOrDefault : 1;  // 0x52(0x1)
	char pad_83_1 : 7;  // 0x53(0x1)
	bool bRaiseMaxErrorToExisting : 1;  // 0x53(0x1)
	char pad_84_1 : 7;  // 0x54(0x1)
	bool bEnablePerformanceLog : 1;  // 0x54(0x1)
	char pad_85_1 : 7;  // 0x55(0x1)
	bool bStripAnimationDataOnDedicatedServer : 1;  // 0x55(0x1)
	char pad_86_1 : 7;  // 0x56(0x1)
	bool bTickAnimationOnSkeletalMeshInit : 1;  // 0x56(0x1)
	char pad_87[1];  // 0x57(0x1)
	struct TArray<struct FCustomAttributeSetting> BoneCustomAttributesNames;  // 0x58(0x10)
	struct TArray<struct FString> BoneNamesWithCustomAttributes;  // 0x68(0x10)
	struct TMap<struct FName, uint8_t > AttributeBlendModes;  // 0x78(0x50)
	uint8_t  DefaultAttributeBlendMode;  // 0xC8(0x1)
	char pad_201[7];  // 0xC9(0x7)

}; 



// Class Engine.AnimBlueprint
// Size: 0xC8(Inherited: 0xA0) 
struct UAnimBlueprint : public UBlueprint
{
	char pad_160[8];  // 0xA0(0x8)
	struct USkeleton* TargetSkeleton;  // 0xA8(0x8)
	struct TArray<struct FAnimGroupInfo> Groups;  // 0xB0(0x10)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool bUseMultiThreadedAnimationUpdate : 1;  // 0xC0(0x1)
	char pad_193_1 : 7;  // 0xC1(0x1)
	bool bWarnAboutBlueprintUsage : 1;  // 0xC1(0x1)
	char pad_194[6];  // 0xC2(0x6)

}; 



// Class Engine.MaterialExpressionCustom
// Size: 0xA8(Inherited: 0x40) 
struct UMaterialExpressionCustom : public UMaterialExpression
{
	struct FString code;  // 0x40(0x10)
	char ECustomMaterialOutputType OutputType;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)
	struct FString Description;  // 0x58(0x10)
	struct TArray<struct FCustomInput> Inputs;  // 0x68(0x10)
	struct TArray<struct FCustomOutput> AdditionalOutputs;  // 0x78(0x10)
	struct TArray<struct FCustomDefine> AdditionalDefines;  // 0x88(0x10)
	struct TArray<struct FString> IncludeFilePaths;  // 0x98(0x10)

}; 



// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x5B0(Inherited: 0x328) 
struct UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
	char pad_808[8];  // 0x328(0x8)
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines;  // 0x330(0x10)
	struct USkeleton* TargetSkeleton;  // 0x340(0x8)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies;  // 0x348(0x10)
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap;  // 0x358(0x50)
	char pad_936[128];  // 0x3A8(0x80)
	struct TArray<struct FName> SyncGroupNames;  // 0x428(0x10)
	struct TArray<struct FExposedValueHandler> EvaluateGraphExposedInputs;  // 0x438(0x10)
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation;  // 0x448(0x50)
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions;  // 0x498(0x50)
	struct FPropertyAccessLibrary PropertyAccessLibrary;  // 0x4E8(0xC8)

}; 



// Class Engine.DialogueVoice
// Size: 0x40(Inherited: 0x28) 
struct UDialogueVoice : public UObject
{
	char EGrammaticalGender Gender;  // 0x28(0x1)
	char EGrammaticalNumber Plurality;  // 0x29(0x1)
	char pad_42[2];  // 0x2A(0x2)
	struct FGuid LocalizationGUID;  // 0x2C(0x10)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.Polys
// Size: 0x38(Inherited: 0x28) 
struct UPolys : public UObject
{
	char pad_40[16];  // 0x28(0x10)

}; 



// Class Engine.AnimBoneCompressionCodec
// Size: 0x38(Inherited: 0x28) 
struct UAnimBoneCompressionCodec : public UObject
{
	struct FString Description;  // 0x28(0x10)

}; 



// Class Engine.MaterialExpressionVertexInterpolator
// Size: 0x60(Inherited: 0x40) 
struct UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[12];  // 0x54(0xC)

}; 



// Class Engine.LODSyncComponent
// Size: 0x140(Inherited: 0xB0) 
struct ULODSyncComponent : public UActorComponent
{
	int32_t NumLODs;  // 0xB0(0x4)
	int32_t ForcedLOD;  // 0xB4(0x4)
	struct TArray<struct FComponentSync> ComponentsToSync;  // 0xB8(0x10)
	struct TMap<struct FName, struct FLODMappingData> CustomLODMapping;  // 0xC8(0x50)
	int32_t CurrentLOD;  // 0x118(0x4)
	int32_t CurrentNumLODs;  // 0x11C(0x4)
	struct TArray<struct UPrimitiveComponent*> DriveComponents;  // 0x120(0x10)
	struct TArray<struct UPrimitiveComponent*> SubComponents;  // 0x130(0x10)

	struct FString GetLODSyncDebugText(); // Function Engine.LODSyncComponent.GetLODSyncDebugText
}; 



// Class Engine.RuntimeVirtualTextureVolume
// Size: 0x228(Inherited: 0x220) 
struct ARuntimeVirtualTextureVolume : public AActor
{
	struct URuntimeVirtualTextureComponent* VirtualTextureComponent;  // 0x220(0x8)

}; 



// Class Engine.AnimBoneCompressionSettings
// Size: 0x38(Inherited: 0x28) 
struct UAnimBoneCompressionSettings : public UObject
{
	struct TArray<struct UAnimBoneCompressionCodec*> Codecs;  // 0x28(0x10)

}; 



// Class Engine.AnimClassData
// Size: 0x330(Inherited: 0x28) 
struct UAnimClassData : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines;  // 0x30(0x10)
	struct USkeleton* TargetSkeleton;  // 0x40(0x8)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies;  // 0x48(0x10)
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap;  // 0x58(0x50)
	struct TArray<struct FAnimBlueprintFunction> AnimBlueprintFunctions;  // 0xA8(0x10)
	struct TArray<struct FAnimBlueprintFunctionData> AnimBlueprintFunctionData;  // 0xB8(0x10)
	struct TArray<struct TFieldPath<FNone>> AnimNodeProperties;  // 0xC8(0x10)
	char pad_216[16];  // 0xD8(0x10)
	struct TArray<struct TFieldPath<FNone>> LinkedAnimGraphNodeProperties;  // 0xE8(0x10)
	char pad_248[16];  // 0xF8(0x10)
	struct TArray<struct TFieldPath<FNone>> LinkedAnimLayerNodeProperties;  // 0x108(0x10)
	char pad_280[16];  // 0x118(0x10)
	struct TArray<struct TFieldPath<FNone>> PreUpdateNodeProperties;  // 0x128(0x10)
	char pad_312[16];  // 0x138(0x10)
	struct TArray<struct TFieldPath<FNone>> DynamicResetNodeProperties;  // 0x148(0x10)
	char pad_344[16];  // 0x158(0x10)
	struct TArray<struct TFieldPath<FNone>> StateMachineNodeProperties;  // 0x168(0x10)
	char pad_376[16];  // 0x178(0x10)
	struct TArray<struct TFieldPath<FNone>> InitializationNodeProperties;  // 0x188(0x10)
	char pad_408[16];  // 0x198(0x10)
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphNameAssetPlayers;  // 0x1A8(0x50)
	struct TArray<struct FName> SyncGroupNames;  // 0x1F8(0x10)
	struct TArray<struct FExposedValueHandler> EvaluateGraphExposedInputs;  // 0x208(0x10)
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions;  // 0x218(0x50)
	struct FPropertyAccessLibrary PropertyAccessLibrary;  // 0x268(0xC8)

}; 



// Class Engine.DestructibleInterface
// Size: 0x28(Inherited: 0x28) 
struct UDestructibleInterface : public UInterface
{

}; 



// Class Engine.PhysicsConstraintActor
// Size: 0x240(Inherited: 0x220) 
struct APhysicsConstraintActor : public ARigidBodyBase
{
	struct UPhysicsConstraintComponent* ConstraintComp;  // 0x220(0x8)
	struct AActor* ConstraintActor1;  // 0x228(0x8)
	struct AActor* ConstraintActor2;  // 0x230(0x8)
	char bDisableCollision : 1;  // 0x238(0x1)
	char pad_568_1 : 7;  // 0x238(0x1)
	char pad_569[8];  // 0x239(0x8)

}; 



// Class Engine.AnimClassInterface
// Size: 0x28(Inherited: 0x28) 
struct UAnimClassInterface : public UInterface
{

}; 



// Class Engine.AnimSequenceBase
// Size: 0xA8(Inherited: 0x80) 
struct UAnimSequenceBase : public UAnimationAsset
{
	struct TArray<struct FAnimNotifyEvent> Notifies;  // 0x80(0x10)
	float SequenceLength;  // 0x90(0x4)
	float RateScale;  // 0x94(0x4)
	struct FRawCurveTracks RawCurveData;  // 0x98(0x10)

	float GetPlayLength(); // Function Engine.AnimSequenceBase.GetPlayLength
}; 



// Class Engine.InterpTrackInstParticleReplay
// Size: 0x30(Inherited: 0x28) 
struct UInterpTrackInstParticleReplay : public UInterpTrackInst
{
	float LastUpdatePosition;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 



// Class Engine.PhysicsAsset
// Size: 0x138(Inherited: 0x28) 
struct UPhysicsAsset : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct TArray<int32_t> BoundsBodies;  // 0x30(0x10)
	struct TArray<struct USkeletalBodySetup*> SkeletalBodySetups;  // 0x40(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> ConstraintSetup;  // 0x50(0x10)
	struct FSolverIterations SolverIterations;  // 0x60(0x1C)
	uint8_t  SolverType;  // 0x7C(0x1)
	char bNotForDedicatedServer : 1;  // 0x7D(0x1)
	char pad_125_1 : 7;  // 0x7D(0x1)
	char pad_126[163];  // 0x7E(0xA3)
	struct UThumbnailInfo* ThumbnailInfo;  // 0x120(0x8)
	struct TArray<struct UBodySetup*> BodySetup;  // 0x128(0x10)

}; 



// Class Engine.ParticleSystem
// Size: 0x110(Inherited: 0x30) 
struct UParticleSystem : public UFXSystemAsset
{
	float UpdateTime_FPS;  // 0x30(0x4)
	float UpdateTime_Delta;  // 0x34(0x4)
	float WarmupTime;  // 0x38(0x4)
	float WarmupTickRate;  // 0x3C(0x4)
	struct TArray<struct UParticleEmitter*> Emitters;  // 0x40(0x10)
	struct UParticleSystemComponent* PreviewComponent;  // 0x50(0x8)
	struct UInterpCurveEdSetup* CurveEdSetup;  // 0x58(0x8)
	float LODDistanceCheckTime;  // 0x60(0x4)
	float MacroUVRadius;  // 0x64(0x4)
	struct TArray<float> LODDistances;  // 0x68(0x10)
	struct TArray<struct FParticleSystemLOD> LODSettings;  // 0x78(0x10)
	struct FBox FixedRelativeBoundingBox;  // 0x88(0x1C)
	float SecondsBeforeInactive;  // 0xA4(0x4)
	float Delay;  // 0xA8(0x4)
	float DelayLow;  // 0xAC(0x4)
	char bOrientZAxisTowardCamera : 1;  // 0xB0(0x1)
	char bUseFixedRelativeBoundingBox : 1;  // 0xB0(0x1)
	char bShouldResetPeakCounts : 1;  // 0xB0(0x1)
	char bHasPhysics : 1;  // 0xB0(0x1)
	char bUseRealtimeThumbnail : 1;  // 0xB0(0x1)
	char ThumbnailImageOutOfDate : 1;  // 0xB0(0x1)
	char pad_176_1 : 2;  // 0xB0(0x1)
	char bUseDelayRange : 1;  // 0xB1(0x1)
	char bAllowManagedTicking : 1;  // 0xB1(0x1)
	char bAutoDeactivate : 1;  // 0xB1(0x1)
	char bRegenerateLODDuplicate : 1;  // 0xB1(0x1)
	char pad_177_1 : 4;  // 0xB1(0x1)
	char EParticleSystemUpdateMode SystemUpdateMode;  // 0xB2(0x1)
	char ParticleSystemLODMethod LODMethod;  // 0xB3(0x1)
	uint8_t  InsignificantReaction;  // 0xB4(0x1)
	char EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod;  // 0xB5(0x1)
	char pad_182[1];  // 0xB6(0x1)
	uint8_t  MaxSignificanceLevel;  // 0xB7(0x1)
	uint32_t MinTimeBetweenTicks;  // 0xB8(0x4)
	float InsignificanceDelay;  // 0xBC(0x4)
	struct FVector MacroUVPosition;  // 0xC0(0xC)
	struct FBox CustomOcclusionBounds;  // 0xCC(0x1C)
	struct TArray<struct FLODSoloTrack> SoloTracking;  // 0xE8(0x10)
	struct TArray<struct FNamedEmitterMaterial> NamedMaterialSlots;  // 0xF8(0x10)
	char pad_264[8];  // 0x108(0x8)

	bool ContainsEmitterType(UObject* TypeData); // Function Engine.ParticleSystem.ContainsEmitterType
}; 



// Class Engine.Texture2D
// Size: 0x1A0(Inherited: 0x180) 
struct UTexture2D : public UTexture
{
	int32_t LevelIndex;  // 0x178(0x4)
	int32_t FirstResourceMemMip;  // 0x17C(0x4)
	char bTemporarilyDisableStreaming : 1;  // 0x180(0x1)
	char TextureAddress AddressX;  // 0x181(0x1)
	char TextureAddress AddressY;  // 0x182(0x1)
	struct FIntPoint ImportedSize;  // 0x184(0x8)
	char pad_402_1 : 7;  // 0x192(0x1)
	char pad_403[14];  // 0x193(0xE)

	int32_t Blueprint_GetSizeY(); // Function Engine.Texture2D.Blueprint_GetSizeY
	int32_t Blueprint_GetSizeX(); // Function Engine.Texture2D.Blueprint_GetSizeX
}; 



// Class Engine.DirectionalLightComponent
// Size: 0x3F0(Inherited: 0x330) 
struct UDirectionalLightComponent : public ULightComponent
{
	float ShadowCascadeBiasDistribution;  // 0x328(0x4)
	char bEnableLightShaftOcclusion : 1;  // 0x32C(0x1)
	float OcclusionMaskDarkness;  // 0x330(0x4)
	float OcclusionDepthRange;  // 0x334(0x4)
	struct FVector LightShaftOverrideDirection;  // 0x338(0xC)
	float WholeSceneDynamicShadowRadius;  // 0x344(0x4)
	float DynamicShadowDistanceMovableLight;  // 0x348(0x4)
	float DynamicShadowDistanceStationaryLight;  // 0x34C(0x4)
	int32_t DynamicShadowCascades;  // 0x350(0x4)
	float CascadeDistributionExponent;  // 0x354(0x4)
	float CascadeTransitionFraction;  // 0x358(0x4)
	float ShadowDistanceFadeoutFraction;  // 0x35C(0x4)
	char bUseInsetShadowsForMovableObjects : 1;  // 0x360(0x1)
	int32_t FarShadowCascadeCount;  // 0x364(0x4)
	float FarShadowDistance;  // 0x368(0x4)
	float DistanceFieldShadowDistance;  // 0x36C(0x4)
	float LightSourceAngle;  // 0x370(0x4)
	float LightSourceSoftAngle;  // 0x374(0x4)
	float ShadowSourceAngleFactor;  // 0x378(0x4)
	float TraceDistance;  // 0x37C(0x4)
	char bUsedAsAtmosphereSunLight : 1;  // 0x380(0x1)
	char pad_896_1 : 5;  // 0x380(0x1)
	char pad_897[4];  // 0x381(0x4)
	int32_t AtmosphereSunLightIndex;  // 0x384(0x4)
	struct FLinearColor AtmosphereSunDiskColorScale;  // 0x388(0x10)
	char bPerPixelAtmosphereTransmittance : 1;  // 0x398(0x1)
	char bCastShadowsOnClouds : 1;  // 0x398(0x1)
	char bCastShadowsOnAtmosphere : 1;  // 0x398(0x1)
	char bCastCloudShadows : 1;  // 0x398(0x1)
	char pad_920_1 : 4;  // 0x398(0x1)
	char pad_921[4];  // 0x399(0x4)
	float CloudShadowStrength;  // 0x39C(0x4)
	float CloudShadowOnAtmosphereStrength;  // 0x3A0(0x4)
	float CloudShadowOnSurfaceStrength;  // 0x3A4(0x4)
	float CloudShadowDepthBias;  // 0x3A8(0x4)
	float CloudShadowExtent;  // 0x3AC(0x4)
	float CloudShadowMapResolutionScale;  // 0x3B0(0x4)
	float CloudShadowRaySampleCountScale;  // 0x3B4(0x4)
	struct FLinearColor CloudScatteredLuminanceScale;  // 0x3B8(0x10)
	struct FLightmassDirectionalLightSettings LightmassSettings;  // 0x3C8(0x10)
	char bCastModulatedShadows : 1;  // 0x3D8(0x1)
	char pad_984_1 : 7;  // 0x3D8(0x1)
	char pad_985[4];  // 0x3D9(0x4)
	struct FColor ModulatedShadowColor;  // 0x3DC(0x4)
	float ShadowAmount;  // 0x3E0(0x4)
	char pad_996[12];  // 0x3E4(0xC)

	void SetShadowDistanceFadeoutFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction
	void SetShadowAmount(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowAmount
	void SetOcclusionMaskDarkness(float NewValue); // Function Engine.DirectionalLightComponent.SetOcclusionMaskDarkness
	void SetLightShaftOverrideDirection(struct FVector NewValue); // Function Engine.DirectionalLightComponent.SetLightShaftOverrideDirection
	void SetEnableLightShaftOcclusion(bool bNewValue); // Function Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion
	void SetDynamicShadowDistanceStationaryLight(float NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight
	void SetDynamicShadowDistanceMovableLight(float NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight
	void SetDynamicShadowCascades(int32_t NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowCascades
	void SetCascadeTransitionFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetCascadeTransitionFraction
	void SetCascadeDistributionExponent(float NewValue); // Function Engine.DirectionalLightComponent.SetCascadeDistributionExponent
	void SetAtmosphereSunLightIndex(int32_t NewValue); // Function Engine.DirectionalLightComponent.SetAtmosphereSunLightIndex
	void SetAtmosphereSunLight(bool bNewValue); // Function Engine.DirectionalLightComponent.SetAtmosphereSunLight
}; 



// Class Engine.LocalPlayerSubsystem
// Size: 0x30(Inherited: 0x30) 
struct ULocalPlayerSubsystem : public USubsystem
{

}; 



// Class Engine.AnimCompositeBase
// Size: 0xA8(Inherited: 0xA8) 
struct UAnimCompositeBase : public UAnimSequenceBase
{

}; 



// Class Engine.MaterialExpressionRayTracingQualitySwitch
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression
{
	struct FExpressionInput Normal;  // 0x40(0x14)
	struct FExpressionInput RayTraced;  // 0x54(0x14)

}; 



// Class Engine.GameNetworkManager
// Size: 0x2D0(Inherited: 0x220) 
struct AGameNetworkManager : public AInfo
{
	float BadPacketLossThreshold;  // 0x220(0x4)
	float SeverePacketLossThreshold;  // 0x224(0x4)
	int32_t BadPingThreshold;  // 0x228(0x4)
	int32_t SeverePingThreshold;  // 0x22C(0x4)
	int32_t AdjustedNetSpeed;  // 0x230(0x4)
	float LastNetSpeedUpdateTime;  // 0x234(0x4)
	int32_t TotalNetBandwidth;  // 0x238(0x4)
	int32_t MinDynamicBandwidth;  // 0x23C(0x4)
	int32_t MaxDynamicBandwidth;  // 0x240(0x4)
	char bIsStandbyCheckingEnabled : 1;  // 0x244(0x1)
	char bHasStandbyCheatTriggered : 1;  // 0x244(0x1)
	char pad_580_1 : 6;  // 0x244(0x1)
	char pad_581[4];  // 0x245(0x4)
	float StandbyRxCheatTime;  // 0x248(0x4)
	float StandbyTxCheatTime;  // 0x24C(0x4)
	float PercentMissingForRxStandby;  // 0x250(0x4)
	float PercentMissingForTxStandby;  // 0x254(0x4)
	float PercentForBadPing;  // 0x258(0x4)
	float JoinInProgressStandbyWaitTime;  // 0x25C(0x4)
	float MoveRepSize;  // 0x260(0x4)
	float MAXPOSITIONERRORSQUARED;  // 0x264(0x4)
	float MAXNEARZEROVELOCITYSQUARED;  // 0x268(0x4)
	float CLIENTADJUSTUPDATECOST;  // 0x26C(0x4)
	float MAXCLIENTUPDATEINTERVAL;  // 0x270(0x4)
	float MaxClientForcedUpdateDuration;  // 0x274(0x4)
	float ServerForcedUpdateHitchThreshold;  // 0x278(0x4)
	float ServerForcedUpdateHitchCooldown;  // 0x27C(0x4)
	float MaxMoveDeltaTime;  // 0x280(0x4)
	float MaxClientSmoothingDeltaTime;  // 0x284(0x4)
	float ClientNetSendMoveDeltaTime;  // 0x288(0x4)
	float ClientNetSendMoveDeltaTimeThrottled;  // 0x28C(0x4)
	float ClientNetSendMoveDeltaTimeStationary;  // 0x290(0x4)
	int32_t ClientNetSendMoveThrottleAtNetSpeed;  // 0x294(0x4)
	int32_t ClientNetSendMoveThrottleOverPlayerCount;  // 0x298(0x4)
	char pad_668_1 : 7;  // 0x29C(0x1)
	bool ClientAuthorativePosition : 1;  // 0x29C(0x1)
	char pad_669[3];  // 0x29D(0x3)
	float ClientErrorUpdateRateLimit;  // 0x2A0(0x4)
	float ClientNetCamUpdateDeltaTime;  // 0x2A4(0x4)
	float ClientNetCamUpdatePositionLimit;  // 0x2A8(0x4)
	char pad_684_1 : 7;  // 0x2AC(0x1)
	bool bMovementTimeDiscrepancyDetection : 1;  // 0x2AC(0x1)
	char pad_685_1 : 7;  // 0x2AD(0x1)
	bool bMovementTimeDiscrepancyResolution : 1;  // 0x2AD(0x1)
	char pad_686[2];  // 0x2AE(0x2)
	float MovementTimeDiscrepancyMaxTimeMargin;  // 0x2B0(0x4)
	float MovementTimeDiscrepancyMinTimeMargin;  // 0x2B4(0x4)
	float MovementTimeDiscrepancyResolutionRate;  // 0x2B8(0x4)
	float MovementTimeDiscrepancyDriftAllowance;  // 0x2BC(0x4)
	char pad_704_1 : 7;  // 0x2C0(0x1)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution : 1;  // 0x2C0(0x1)
	char pad_705_1 : 7;  // 0x2C1(0x1)
	bool bUseDistanceBasedRelevancy : 1;  // 0x2C1(0x1)
	char pad_706[14];  // 0x2C2(0xE)

}; 



// Class Engine.AnimComposite
// Size: 0xB8(Inherited: 0xA8) 
struct UAnimComposite : public UAnimCompositeBase
{
	struct FAnimTrack AnimationTrack;  // 0xA8(0x10)

}; 



// Class Engine.DrawFrustumComponent
// Size: 0x470(Inherited: 0x450) 
struct UDrawFrustumComponent : public UPrimitiveComponent
{
	struct FColor FrustumColor;  // 0x450(0x4)
	float FrustumAngle;  // 0x454(0x4)
	float FrustumAspectRatio;  // 0x458(0x4)
	float FrustumStartDist;  // 0x45C(0x4)
	float FrustumEndDist;  // 0x460(0x4)
	char pad_1124[4];  // 0x464(0x4)
	struct UTexture* Texture;  // 0x468(0x8)

}; 



// Class Engine.AnimCompress
// Size: 0x40(Inherited: 0x38) 
struct UAnimCompress : public UAnimBoneCompressionCodec
{
	char bNeedsSkeleton : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[4];  // 0x39(0x4)
	char AnimationCompressionFormat TranslationCompressionFormat;  // 0x3C(0x1)
	char AnimationCompressionFormat RotationCompressionFormat;  // 0x3D(0x1)
	char AnimationCompressionFormat ScaleCompressionFormat;  // 0x3E(0x1)
	char pad_63[1];  // 0x3F(0x1)

}; 



// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x40(Inherited: 0x40) 
struct UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{

}; 



// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xD8(Inherited: 0x60) 
struct UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
	float MaxZeroingThreshold;  // 0x60(0x4)
	float MaxPosDiffBitwise;  // 0x64(0x4)
	float MaxAngleDiffBitwise;  // 0x68(0x4)
	float MaxScaleDiffBitwise;  // 0x6C(0x4)
	struct TArray<char AnimationCompressionFormat> AllowedRotationFormats;  // 0x70(0x10)
	struct TArray<char AnimationCompressionFormat> AllowedTranslationFormats;  // 0x80(0x10)
	struct TArray<char AnimationCompressionFormat> AllowedScaleFormats;  // 0x90(0x10)
	char bResampleAnimation : 1;  // 0xA0(0x1)
	char pad_160_1 : 7;  // 0xA0(0x1)
	char pad_161[4];  // 0xA1(0x4)
	float ResampledFramerate;  // 0xA4(0x4)
	int32_t MinKeysForResampling;  // 0xA8(0x4)
	char bUseAdaptiveError : 1;  // 0xAC(0x1)
	char bUseOverrideForEndEffectors : 1;  // 0xAC(0x1)
	char pad_172_1 : 6;  // 0xAC(0x1)
	char pad_173[4];  // 0xAD(0x4)
	int32_t TrackHeightBias;  // 0xB0(0x4)
	float ParentingDivisor;  // 0xB4(0x4)
	float ParentingDivisorExponent;  // 0xB8(0x4)
	char bUseAdaptiveError2 : 1;  // 0xBC(0x1)
	char pad_188_1 : 7;  // 0xBC(0x1)
	char pad_189[4];  // 0xBD(0x4)
	float RotationErrorSourceRatio;  // 0xC0(0x4)
	float TranslationErrorSourceRatio;  // 0xC4(0x4)
	float ScaleErrorSourceRatio;  // 0xC8(0x4)
	float MaxErrorPerTrackRatio;  // 0xCC(0x4)
	float PerturbationProbeSize;  // 0xD0(0x4)
	char pad_212[4];  // 0xD4(0x4)

}; 



// Class Engine.CheatManager
// Size: 0x88(Inherited: 0x28) 
struct UCheatManager : public UObject
{
	struct ADebugCameraController* DebugCameraControllerRef;  // 0x28(0x8)
	ADebugCameraController* DebugCameraControllerClass;  // 0x30(0x8)
	char pad_56[64];  // 0x38(0x40)
	struct TArray<struct UCheatManagerExtension*> CheatManagerExtensions;  // 0x78(0x10)

	void Walk(); // Function Engine.CheatManager.Walk
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf
	void ViewPlayer(struct FString S); // Function Engine.CheatManager.ViewPlayer
	void ViewClass(AActor* DesiredClass); // Function Engine.CheatManager.ViewClass
	void ViewActor(struct FName ActorName); // Function Engine.CheatManager.ViewActor
	void UpdateSafeArea(); // Function Engine.CheatManager.UpdateSafeArea
	void ToggleServerStatReplicatorUpdateStatNet(); // Function Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet
	void ToggleServerStatReplicatorClientOverwrite(); // Function Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance
	void Teleport(); // Function Engine.CheatManager.Teleport
	void Summon(struct FString ClassName); // Function Engine.CheatManager.Summon
	void StreamLevelOut(struct FName PackageName); // Function Engine.CheatManager.StreamLevelOut
	void StreamLevelIn(struct FName PackageName); // Function Engine.CheatManager.StreamLevelIn
	void SpawnServerStatReplicator(); // Function Engine.CheatManager.SpawnServerStatReplicator
	void Slomo(float NewTimeDilation); // Function Engine.CheatManager.Slomo
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault
	void ServerToggleAILogging(); // Function Engine.CheatManager.ServerToggleAILogging
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly
	void OnlyLoadLevel(struct FName PackageName); // Function Engine.CheatManager.OnlyLoadLevel
	void LogLoc(); // Function Engine.CheatManager.LogLoc
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse
	void God(); // Function Engine.CheatManager.God
	void Ghost(); // Function Engine.CheatManager.Ghost
	void FreezeFrame(float Delay); // Function Engine.CheatManager.FreezeFrame
	void Fly(); // Function Engine.CheatManager.Fly
	void FlushLog(); // Function Engine.CheatManager.FlushLog
	void EnableDebugCamera(); // Function Engine.CheatManager.EnableDebugCamera
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState
	void DisableDebugCamera(); // Function Engine.CheatManager.DisableDebugCamera
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget
	void DestroyServerStatReplicator(); // Function Engine.CheatManager.DestroyServerStatReplicator
	void DestroyPawns(APawn* aClass); // Function Engine.CheatManager.DestroyPawns
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget
	void DestroyAll(AActor* aClass); // Function Engine.CheatManager.DestroyAll
	void DebugCapsuleSweepSize(float HalfHeight, float Radius); // Function Engine.CheatManager.DebugCapsuleSweepSize
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn
	void DebugCapsuleSweepComplex(bool bTraceComplex); // Function Engine.CheatManager.DebugCapsuleSweepComplex
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear
	void DebugCapsuleSweepChannel(char ECollisionChannel Channel); // Function Engine.CheatManager.DebugCapsuleSweepChannel
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep
	void DamageTarget(float damageAmount); // Function Engine.CheatManager.DamageTarget
	void CheatScript(struct FString ScriptName); // Function Engine.CheatManager.CheatScript
	void ChangeSize(float F); // Function Engine.CheatManager.ChangeSize
	void BugItStringCreator(struct FVector ViewLocation, struct FRotator ViewRotation, struct FString& GoString, struct FString& LocString); // Function Engine.CheatManager.BugItStringCreator
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll); // Function Engine.CheatManager.BugItGo
	void BugIt(struct FString ScreenShotDescription); // Function Engine.CheatManager.BugIt
}; 



// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x48(Inherited: 0x40) 
struct UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
	int32_t MinKeys;  // 0x40(0x4)
	char bStartAtSecondKey : 1;  // 0x44(0x1)
	char pad_68_1 : 7;  // 0x44(0x1)
	char pad_69[4];  // 0x45(0x4)

}; 



// Class Engine.NavAreaBase
// Size: 0x30(Inherited: 0x28) 
struct UNavAreaBase : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x50(Inherited: 0x40) 
struct UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
	float MaxPosDiff;  // 0x40(0x4)
	float MaxAngleDiff;  // 0x44(0x4)
	float MaxScaleDiff;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 



// Class Engine.DebugCameraHUD
// Size: 0x310(Inherited: 0x310) 
struct ADebugCameraHUD : public AHUD
{

}; 



// Class Engine.ParticleModuleSizeScale
// Size: 0x80(Inherited: 0x30) 
struct UParticleModuleSizeScale : public UParticleModuleSizeBase
{
	struct FRawDistributionVector SizeScale;  // 0x30(0x48)
	char EnableX : 1;  // 0x78(0x1)
	char EnableY : 1;  // 0x78(0x1)
	char EnableZ : 1;  // 0x78(0x1)
	char pad_120_1 : 5;  // 0x78(0x1)
	char pad_121[8];  // 0x79(0x8)

}; 



// Class Engine.AnimCurveCompressionCodec
// Size: 0x28(Inherited: 0x28) 
struct UAnimCurveCompressionCodec : public UObject
{

}; 



// Class Engine.DistributionFloatParticleParameter
// Size: 0x60(Inherited: 0x60) 
struct UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{

}; 



// Class Engine.AnimCurveCompressionCodec_CompressedRichCurve
// Size: 0x28(Inherited: 0x28) 
struct UAnimCurveCompressionCodec_CompressedRichCurve : public UAnimCurveCompressionCodec
{

}; 



// Class Engine.HLODEngineSubsystem
// Size: 0x30(Inherited: 0x30) 
struct UHLODEngineSubsystem : public UEngineSubsystem
{

}; 



// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x60(Inherited: 0x30) 
struct UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
	int32_t MaxTessellationBetweenParticles;  // 0x30(0x4)
	int32_t SheetsPerTrail;  // 0x34(0x4)
	int32_t MaxTrailCount;  // 0x38(0x4)
	int32_t MaxParticleInTrailCount;  // 0x3C(0x4)
	char bDeadTrailsOnDeactivate : 1;  // 0x40(0x1)
	char bDeadTrailsOnSourceLoss : 1;  // 0x40(0x1)
	char bClipSourceSegement : 1;  // 0x40(0x1)
	char bEnablePreviousTangentRecalculation : 1;  // 0x40(0x1)
	char bTangentRecalculationEveryFrame : 1;  // 0x40(0x1)
	char bSpawnInitialParticle : 1;  // 0x40(0x1)
	char pad_64_1 : 2;  // 0x40(0x1)
	char pad_65[4];  // 0x41(0x4)
	char ETrailsRenderAxisOption RenderAxis;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)
	float TangentSpawningScalar;  // 0x48(0x4)
	char bRenderGeometry : 1;  // 0x4C(0x1)
	char bRenderSpawnPoints : 1;  // 0x4C(0x1)
	char bRenderTangents : 1;  // 0x4C(0x1)
	char bRenderTessellation : 1;  // 0x4C(0x1)
	char pad_76_1 : 4;  // 0x4C(0x1)
	char pad_77[4];  // 0x4D(0x4)
	float TilingDistance;  // 0x50(0x4)
	float DistanceTessellationStepSize;  // 0x54(0x4)
	char bEnableTangentDiffInterpScale : 1;  // 0x58(0x1)
	char pad_88_1 : 7;  // 0x58(0x1)
	char pad_89[4];  // 0x59(0x4)
	float TangentTessellationScalar;  // 0x5C(0x4)

}; 



// Class Engine.AnimCurveCompressionCodec_UniformIndexable
// Size: 0x28(Inherited: 0x28) 
struct UAnimCurveCompressionCodec_UniformIndexable : public UAnimCurveCompressionCodec
{

}; 



// Class Engine.ParticleModuleVelocityCone
// Size: 0xA8(Inherited: 0x38) 
struct UParticleModuleVelocityCone : public UParticleModuleVelocityBase
{
	struct FRawDistributionFloat angle;  // 0x38(0x30)
	struct FRawDistributionFloat Velocity;  // 0x68(0x30)
	struct FVector Direction;  // 0x98(0xC)
	char pad_164[4];  // 0xA4(0x4)

}; 



// Class Engine.Skeleton
// Size: 0x390(Inherited: 0x28) 
struct USkeleton : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct TArray<struct FBoneNode> BoneTree;  // 0x38(0x10)
	struct TArray<struct FTransform> RefLocalPoses;  // 0x48(0x10)
	char pad_88[280];  // 0x58(0x118)
	struct FGuid VirtualBoneGuid;  // 0x170(0x10)
	struct TArray<struct FVirtualBone> VirtualBones;  // 0x180(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets;  // 0x190(0x10)
	char pad_416[80];  // 0x1A0(0x50)
	struct FSmartNameContainer SmartNames;  // 0x1F0(0x50)
	char pad_576[48];  // 0x240(0x30)
	struct TArray<struct UBlendProfile*> BlendProfiles;  // 0x270(0x10)
	struct TArray<struct FAnimSlotGroup> SlotGroups;  // 0x280(0x10)
	char pad_656[240];  // 0x290(0xF0)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x380(0x10)

}; 



// Class Engine.DebugDrawService
// Size: 0x28(Inherited: 0x28) 
struct UDebugDrawService : public UBlueprintFunctionLibrary
{

}; 



// Class Engine.AnimCurveCompressionCodec_UniformlySampled
// Size: 0x28(Inherited: 0x28) 
struct UAnimCurveCompressionCodec_UniformlySampled : public UAnimCurveCompressionCodec
{

}; 



// Class Engine.AnimCurveCompressionSettings
// Size: 0x30(Inherited: 0x28) 
struct UAnimCurveCompressionSettings : public UObject
{
	struct UAnimCurveCompressionCodec* Codec;  // 0x28(0x8)

}; 



// Class Engine.HapticFeedbackEffect_Base
// Size: 0x28(Inherited: 0x28) 
struct UHapticFeedbackEffect_Base : public UObject
{

}; 



// Class Engine.NullNavSysConfig
// Size: 0x50(Inherited: 0x50) 
struct UNullNavSysConfig : public UNavigationSystemConfig
{

}; 



// Class Engine.AnimLayerInterface
// Size: 0x28(Inherited: 0x28) 
struct UAnimLayerInterface : public UInterface
{

}; 



// Class Engine.AnimMontage
// Size: 0x1D0(Inherited: 0xA8) 
struct UAnimMontage : public UAnimCompositeBase
{
	struct FAlphaBlend BlendIn;  // 0xA8(0x30)
	float BlendInTime;  // 0xD8(0x4)
	char pad_220[4];  // 0xDC(0x4)
	struct FAlphaBlend BlendOut;  // 0xE0(0x30)
	float BlendOutTime;  // 0x110(0x4)
	float BlendOutTriggerTime;  // 0x114(0x4)
	struct FName SyncGroup;  // 0x118(0x8)
	int32_t SyncSlotIndex;  // 0x120(0x4)
	char pad_292[4];  // 0x124(0x4)
	struct FMarkerSyncData MarkerData;  // 0x128(0x20)
	struct TArray<struct FCompositeSection> CompositeSections;  // 0x148(0x10)
	struct TArray<struct FSlotAnimationTrack> SlotAnimTracks;  // 0x158(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints;  // 0x168(0x10)
	char pad_376_1 : 7;  // 0x178(0x1)
	bool bEnableRootMotionTranslation : 1;  // 0x178(0x1)
	char pad_377_1 : 7;  // 0x179(0x1)
	bool bEnableRootMotionRotation : 1;  // 0x179(0x1)
	char pad_378_1 : 7;  // 0x17A(0x1)
	bool bEnableAutoBlendOut : 1;  // 0x17A(0x1)
	char ERootMotionRootLock RootMotionRootLock;  // 0x17B(0x1)
	char pad_380[4];  // 0x17C(0x4)
	struct TArray<struct FBranchingPointMarker> BranchingPointMarkers;  // 0x180(0x10)
	struct TArray<int32_t> BranchingPointStateNotifyIndices;  // 0x190(0x10)
	struct FTimeStretchCurve TimeStretchCurve;  // 0x1A0(0x28)
	struct FName TimeStretchCurveName;  // 0x1C8(0x8)

	float GetDefaultBlendOutTime(); // Function Engine.AnimMontage.GetDefaultBlendOutTime
}; 



// Class Engine.GameViewportClient
// Size: 0x360(Inherited: 0x38) 
struct UGameViewportClient : public UScriptViewportClient
{
	char pad_56[8];  // 0x38(0x8)
	struct UConsole* ViewportConsole;  // 0x40(0x8)
	struct TArray<struct FDebugDisplayProperty> DebugProperties;  // 0x48(0x10)
	char pad_88[16];  // 0x58(0x10)
	int32_t MaxSplitscreenPlayers;  // 0x68(0x4)
	char pad_108[12];  // 0x6C(0xC)
	struct UWorld* World;  // 0x78(0x8)
	struct UGameInstance* GameInstance;  // 0x80(0x8)
	char pad_136[728];  // 0x88(0x2D8)

	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea
	void SetConsoleTarget(int32_t PlayerIndex); // Function Engine.GameViewportClient.SetConsoleTarget
}; 



// Class Engine.FloatingPawnMovement
// Size: 0x150(Inherited: 0x138) 
struct UFloatingPawnMovement : public UPawnMovementComponent
{
	float MaxSpeed;  // 0x138(0x4)
	float Acceleration;  // 0x13C(0x4)
	float Deceleration;  // 0x140(0x4)
	float TurningBoost;  // 0x144(0x4)
	char bPositionCorrected : 1;  // 0x148(0x1)
	char pad_328_1 : 7;  // 0x148(0x1)
	char pad_329[8];  // 0x149(0x8)

}; 



// Class Engine.ParticleModuleLocationPrimitiveTriangle
// Size: 0x108(Inherited: 0x30) 
struct UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
	struct FRawDistributionVector StartOffset;  // 0x30(0x48)
	struct FRawDistributionFloat Height;  // 0x78(0x30)
	struct FRawDistributionFloat angle;  // 0xA8(0x30)
	struct FRawDistributionFloat Thickness;  // 0xD8(0x30)

}; 



// Class Engine.AnimNotify_PlaySound
// Size: 0x58(Inherited: 0x38) 
struct UAnimNotify_PlaySound : public UAnimNotify
{
	struct USoundBase* Sound;  // 0x38(0x8)
	float VolumeMultiplier;  // 0x40(0x4)
	float PitchMultiplier;  // 0x44(0x4)
	char bFollow : 1;  // 0x48(0x1)
	char pad_72_1 : 7;  // 0x48(0x1)
	char pad_73[4];  // 0x49(0x4)
	struct FName AttachName;  // 0x4C(0x8)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.BlueprintPathsLibrary
// Size: 0x28(Inherited: 0x28) 
struct UBlueprintPathsLibrary : public UBlueprintFunctionLibrary
{

	struct FString VideoCaptureDir(); // Function Engine.BlueprintPathsLibrary.VideoCaptureDir
	void ValidatePath(struct FString InPath, bool& bDidSucceed, struct FText& OutReason); // Function Engine.BlueprintPathsLibrary.ValidatePath
	void Split(struct FString InPath, struct FString& PathPart, struct FString& FilenamePart, struct FString& ExtensionPart); // Function Engine.BlueprintPathsLibrary.Split
	struct FString SourceConfigDir(); // Function Engine.BlueprintPathsLibrary.SourceConfigDir
	bool ShouldSaveToUserDir(); // Function Engine.BlueprintPathsLibrary.ShouldSaveToUserDir
	struct FString ShaderWorkingDir(); // Function Engine.BlueprintPathsLibrary.ShaderWorkingDir
	void SetProjectFilePath(struct FString NewGameProjectFilePath); // Function Engine.BlueprintPathsLibrary.SetProjectFilePath
	struct FString SetExtension(struct FString InPath, struct FString InNewExtension); // Function Engine.BlueprintPathsLibrary.SetExtension
	struct FString ScreenShotDir(); // Function Engine.BlueprintPathsLibrary.ScreenShotDir
	struct FString SandboxesDir(); // Function Engine.BlueprintPathsLibrary.SandboxesDir
	struct FString RootDir(); // Function Engine.BlueprintPathsLibrary.RootDir
	void RemoveDuplicateSlashes(struct FString InPath, struct FString& OutPath); // Function Engine.BlueprintPathsLibrary.RemoveDuplicateSlashes
	struct FString ProjectUserDir(); // Function Engine.BlueprintPathsLibrary.ProjectUserDir
	struct FString ProjectSavedDir(); // Function Engine.BlueprintPathsLibrary.ProjectSavedDir
	struct FString ProjectPluginsDir(); // Function Engine.BlueprintPathsLibrary.ProjectPluginsDir
	struct FString ProjectPersistentDownloadDir(); // Function Engine.BlueprintPathsLibrary.ProjectPersistentDownloadDir
	struct FString ProjectModsDir(); // Function Engine.BlueprintPathsLibrary.ProjectModsDir
	struct FString ProjectLogDir(); // Function Engine.BlueprintPathsLibrary.ProjectLogDir
	struct FString ProjectIntermediateDir(); // Function Engine.BlueprintPathsLibrary.ProjectIntermediateDir
	struct FString ProjectDir(); // Function Engine.BlueprintPathsLibrary.ProjectDir
	struct FString ProjectContentDir(); // Function Engine.BlueprintPathsLibrary.ProjectContentDir
	struct FString ProjectConfigDir(); // Function Engine.BlueprintPathsLibrary.ProjectConfigDir
	struct FString ProfilingDir(); // Function Engine.BlueprintPathsLibrary.ProfilingDir
	void NormalizeFilename(struct FString InPath, struct FString& OutPath); // Function Engine.BlueprintPathsLibrary.NormalizeFilename
	void NormalizeDirectoryName(struct FString InPath, struct FString& OutPath); // Function Engine.BlueprintPathsLibrary.NormalizeDirectoryName
	struct FString MakeValidFileName(struct FString inString, struct FString InReplacementChar); // Function Engine.BlueprintPathsLibrary.MakeValidFileName
	void MakeStandardFilename(struct FString InPath, struct FString& OutPath); // Function Engine.BlueprintPathsLibrary.MakeStandardFilename
	void MakePlatformFilename(struct FString InPath, struct FString& OutPath); // Function Engine.BlueprintPathsLibrary.MakePlatformFilename
	bool MakePathRelativeTo(struct FString InPath, struct FString InRelativeTo, struct FString& OutPath); // Function Engine.BlueprintPathsLibrary.MakePathRelativeTo
	struct FString LaunchDir(); // Function Engine.BlueprintPathsLibrary.LaunchDir
	bool IsSamePath(struct FString PathA, struct FString PathB); // Function Engine.BlueprintPathsLibrary.IsSamePath
	bool IsRestrictedPath(struct FString InPath); // Function Engine.BlueprintPathsLibrary.IsRestrictedPath
	bool IsRelative(struct FString InPath); // Function Engine.BlueprintPathsLibrary.IsRelative
	bool IsProjectFilePathSet(); // Function Engine.BlueprintPathsLibrary.IsProjectFilePathSet
	bool IsDrive(struct FString InPath); // Function Engine.BlueprintPathsLibrary.IsDrive
	bool HasProjectPersistentDownloadDir(); // Function Engine.BlueprintPathsLibrary.HasProjectPersistentDownloadDir
	struct TArray<struct FString> GetToolTipLocalizationPaths(); // Function Engine.BlueprintPathsLibrary.GetToolTipLocalizationPaths
	struct TArray<struct FString> GetRestrictedFolderNames(); // Function Engine.BlueprintPathsLibrary.GetRestrictedFolderNames
	struct FString GetRelativePathToRoot(); // Function Engine.BlueprintPathsLibrary.GetRelativePathToRoot
	struct TArray<struct FString> GetPropertyNameLocalizationPaths(); // Function Engine.BlueprintPathsLibrary.GetPropertyNameLocalizationPaths
	struct FString GetProjectFilePath(); // Function Engine.BlueprintPathsLibrary.GetProjectFilePath
	struct FString GetPath(struct FString InPath); // Function Engine.BlueprintPathsLibrary.GetPath
	struct FString GetInvalidFileSystemChars(); // Function Engine.BlueprintPathsLibrary.GetInvalidFileSystemChars
	struct TArray<struct FString> GetGameLocalizationPaths(); // Function Engine.BlueprintPathsLibrary.GetGameLocalizationPaths
	struct FString GetExtension(struct FString InPath, bool bIncludeDot); // Function Engine.BlueprintPathsLibrary.GetExtension
	struct TArray<struct FString> GetEngineLocalizationPaths(); // Function Engine.BlueprintPathsLibrary.GetEngineLocalizationPaths
	struct TArray<struct FString> GetEditorLocalizationPaths(); // Function Engine.BlueprintPathsLibrary.GetEditorLocalizationPaths
	struct FString GetCleanFilename(struct FString InPath); // Function Engine.BlueprintPathsLibrary.GetCleanFilename
	struct FString GetBaseFilename(struct FString InPath, bool bRemovePath); // Function Engine.BlueprintPathsLibrary.GetBaseFilename
	struct FString GeneratedConfigDir(); // Function Engine.BlueprintPathsLibrary.GeneratedConfigDir
	struct FString GameUserDeveloperDir(); // Function Engine.BlueprintPathsLibrary.GameUserDeveloperDir
	struct FString GameSourceDir(); // Function Engine.BlueprintPathsLibrary.GameSourceDir
	struct FString GameDevelopersDir(); // Function Engine.BlueprintPathsLibrary.GameDevelopersDir
	struct FString GameAgnosticSavedDir(); // Function Engine.BlueprintPathsLibrary.GameAgnosticSavedDir
	bool FileExists(struct FString InPath); // Function Engine.BlueprintPathsLibrary.FileExists
	struct FString FeaturePackDir(); // Function Engine.BlueprintPathsLibrary.FeaturePackDir
	struct FString EnterprisePluginsDir(); // Function Engine.BlueprintPathsLibrary.EnterprisePluginsDir
	struct FString EnterpriseFeaturePackDir(); // Function Engine.BlueprintPathsLibrary.EnterpriseFeaturePackDir
	struct FString EnterpriseDir(); // Function Engine.BlueprintPathsLibrary.EnterpriseDir
	struct FString EngineVersionAgnosticUserDir(); // Function Engine.BlueprintPathsLibrary.EngineVersionAgnosticUserDir
	struct FString EngineUserDir(); // Function Engine.BlueprintPathsLibrary.EngineUserDir
	struct FString EngineSourceDir(); // Function Engine.BlueprintPathsLibrary.EngineSourceDir
	struct FString EngineSavedDir(); // Function Engine.BlueprintPathsLibrary.EngineSavedDir
	struct FString EnginePluginsDir(); // Function Engine.BlueprintPathsLibrary.EnginePluginsDir
	struct FString EngineIntermediateDir(); // Function Engine.BlueprintPathsLibrary.EngineIntermediateDir
	struct FString EngineDir(); // Function Engine.BlueprintPathsLibrary.EngineDir
	struct FString EngineContentDir(); // Function Engine.BlueprintPathsLibrary.EngineContentDir
	struct FString EngineConfigDir(); // Function Engine.BlueprintPathsLibrary.EngineConfigDir
	bool DirectoryExists(struct FString InPath); // Function Engine.BlueprintPathsLibrary.DirectoryExists
	struct FString DiffDir(); // Function Engine.BlueprintPathsLibrary.DiffDir
	struct FString CreateTempFilename(struct FString Path, struct FString prefix, struct FString Extension); // Function Engine.BlueprintPathsLibrary.CreateTempFilename
	struct FString ConvertToSandboxPath(struct FString InPath, struct FString InSandboxName); // Function Engine.BlueprintPathsLibrary.ConvertToSandboxPath
	struct FString ConvertRelativePathToFull(struct FString InPath, struct FString InBasePath); // Function Engine.BlueprintPathsLibrary.ConvertRelativePathToFull
	struct FString ConvertFromSandboxPath(struct FString InPath, struct FString InSandboxName); // Function Engine.BlueprintPathsLibrary.ConvertFromSandboxPath
	struct FString Combine(struct TArray<struct FString>& InPaths); // Function Engine.BlueprintPathsLibrary.Combine
	bool CollapseRelativeDirectories(struct FString InPath, struct FString& OutPath); // Function Engine.BlueprintPathsLibrary.CollapseRelativeDirectories
	struct FString CloudDir(); // Function Engine.BlueprintPathsLibrary.CloudDir
	struct FString ChangeExtension(struct FString InPath, struct FString InNewExtension); // Function Engine.BlueprintPathsLibrary.ChangeExtension
	struct FString BugItDir(); // Function Engine.BlueprintPathsLibrary.BugItDir
	struct FString AutomationTransientDir(); // Function Engine.BlueprintPathsLibrary.AutomationTransientDir
	struct FString AutomationLogDir(); // Function Engine.BlueprintPathsLibrary.AutomationLogDir
	struct FString AutomationDir(); // Function Engine.BlueprintPathsLibrary.AutomationDir
}; 



// Class Engine.AnimNotify_ResetDynamics
// Size: 0x38(Inherited: 0x38) 
struct UAnimNotify_ResetDynamics : public UAnimNotify
{

}; 



// Class Engine.BillboardComponent
// Size: 0x470(Inherited: 0x450) 
struct UBillboardComponent : public UPrimitiveComponent
{
	struct UTexture2D* Sprite;  // 0x450(0x8)
	char bIsScreenSizeScaled : 1;  // 0x458(0x1)
	char pad_1112_1 : 7;  // 0x458(0x1)
	char pad_1113[4];  // 0x459(0x4)
	float ScreenSize;  // 0x45C(0x4)
	float U;  // 0x460(0x4)
	float UL;  // 0x464(0x4)
	float V;  // 0x468(0x4)
	float VL;  // 0x46C(0x4)

	void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetUV
	void SetSpriteAndUV(struct UTexture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetSpriteAndUV
	void SetSprite(struct UTexture2D* NewSprite); // Function Engine.BillboardComponent.SetSprite
}; 



// Class Engine.SoundfieldSubmix
// Size: 0x68(Inherited: 0x40) 
struct USoundfieldSubmix : public USoundSubmixWithParentBase
{
	struct FName SoundfieldEncodingFormat;  // 0x40(0x8)
	struct USoundfieldEncodingSettingsBase* EncodingSettings;  // 0x48(0x8)
	struct TArray<struct USoundfieldEffectBase*> SoundfieldEffectChain;  // 0x50(0x10)
	USoundfieldEncodingSettingsBase* EncodingSettingsClass;  // 0x60(0x8)

}; 



// Class Engine.InterpTrackLinearColorBase
// Size: 0x90(Inherited: 0x70) 
struct UInterpTrackLinearColorBase : public UInterpTrack
{
	struct FInterpCurveLinearColor LinearColorTrack;  // 0x70(0x18)
	float CurveTension;  // 0x88(0x4)
	char pad_140[4];  // 0x8C(0x4)

}; 



// Class Engine.LineBatchComponent
// Size: 0x490(Inherited: 0x450) 
struct ULineBatchComponent : public UPrimitiveComponent
{
	char pad_1104[64];  // 0x450(0x40)

}; 



// Class Engine.MaterialFunctionInterface
// Size: 0x40(Inherited: 0x28) 
struct UMaterialFunctionInterface : public UObject
{
	struct FGuid StateId;  // 0x28(0x10)
	uint8_t  MaterialFunctionUsage;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 



// Class Engine.AnimNotifyState_Trail
// Size: 0x58(Inherited: 0x30) 
struct UAnimNotifyState_Trail : public UAnimNotifyState
{
	struct UParticleSystem* PSTemplate;  // 0x30(0x8)
	struct FName FirstSocketName;  // 0x38(0x8)
	struct FName SecondSocketName;  // 0x40(0x8)
	char ETrailWidthMode WidthScaleMode;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	struct FName WidthScaleCurve;  // 0x4C(0x8)
	char bRecycleSpawnedSystems : 1;  // 0x54(0x1)
	char pad_84_1 : 7;  // 0x54(0x1)
	char pad_85[4];  // 0x55(0x4)

	struct UParticleSystem* OverridePSTemplate(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate
}; 



// Class Engine.SoundConcurrency
// Size: 0x50(Inherited: 0x28) 
struct USoundConcurrency : public UObject
{
	struct FSoundConcurrencySettings Concurrency;  // 0x28(0x28)

}; 



// Class Engine.Material
// Size: 0x440(Inherited: 0x88) 
struct UMaterial : public UMaterialInterface
{
	struct UPhysicalMaterial* PhysMaterial;  // 0x88(0x8)
	struct UPhysicalMaterialMask* PhysMaterialMask;  // 0x90(0x8)
	struct UPhysicalMaterial* PhysicalMaterialMap[8];  // 0x98(0x40)
	struct FScalarMaterialInput Metallic;  // 0xD8(0x14)
	struct FScalarMaterialInput Specular;  // 0xEC(0x14)
	struct FScalarMaterialInput Anisotropy;  // 0x100(0x14)
	struct FVectorMaterialInput Normal;  // 0x114(0x14)
	struct FVectorMaterialInput Tangent;  // 0x128(0x14)
	struct FColorMaterialInput EmissiveColor;  // 0x13C(0x14)
	char EMaterialDomain MaterialDomain;  // 0x150(0x1)
	char EBlendMode BlendMode;  // 0x151(0x1)
	char EDecalBlendMode DecalBlendMode;  // 0x152(0x1)
	char EMaterialDecalResponse MaterialDecalResponse;  // 0x153(0x1)
	char EMaterialShadingModel ShadingModel;  // 0x154(0x1)
	char bCastDynamicShadowAsMasked : 1;  // 0x155(0x1)
	char pad_341_1 : 7;  // 0x155(0x1)
	struct FMaterialShadingModelField ShadingModels;  // 0x156(0x2)
	float OpacityMaskClipValue;  // 0x158(0x4)
	struct FVectorMaterialInput WorldPositionOffset;  // 0x15C(0x14)
	struct FScalarMaterialInput Refraction;  // 0x170(0x14)
	struct FMaterialAttributesInput MaterialAttributes;  // 0x184(0x18)
	struct FScalarMaterialInput PixelDepthOffset;  // 0x19C(0x14)
	struct FShadingModelMaterialInput ShadingModelFromMaterialExpression;  // 0x1B0(0x14)
	char bEnableSeparateTranslucency : 1;  // 0x1C4(0x1)
	char bEnableResponsiveAA : 1;  // 0x1C4(0x1)
	char bScreenSpaceReflections : 1;  // 0x1C4(0x1)
	char bContactShadows : 1;  // 0x1C4(0x1)
	char TwoSided : 1;  // 0x1C4(0x1)
	char DitheredLODTransition : 1;  // 0x1C4(0x1)
	char DitherOpacityMask : 1;  // 0x1C4(0x1)
	char bAllowNegativeEmissiveColor : 1;  // 0x1C4(0x1)
	char ETranslucencyLightingMode TranslucencyLightingMode;  // 0x1C5(0x1)
	char bEnableMobileSeparateTranslucency : 1;  // 0x1C6(0x1)
	char pad_454_1 : 7;  // 0x1C6(0x1)
	char pad_455[2];  // 0x1C7(0x2)
	int32_t NumCustomizedUVs;  // 0x1C8(0x4)
	float TranslucencyDirectionalLightingIntensity;  // 0x1CC(0x4)
	float TranslucentShadowDensityScale;  // 0x1D0(0x4)
	float TranslucentSelfShadowDensityScale;  // 0x1D4(0x4)
	float TranslucentSelfShadowSecondDensityScale;  // 0x1D8(0x4)
	float TranslucentSelfShadowSecondOpacity;  // 0x1DC(0x4)
	float TranslucentBackscatteringExponent;  // 0x1E0(0x4)
	struct FLinearColor TranslucentMultipleScatteringExtinction;  // 0x1E4(0x10)
	float TranslucentShadowStartOffset;  // 0x1F4(0x4)
	char bDisableDepthTest : 1;  // 0x1F8(0x1)
	char bWriteOnlyAlpha : 1;  // 0x1F8(0x1)
	char bGenerateSphericalParticleNormals : 1;  // 0x1F8(0x1)
	char bTangentSpaceNormal : 1;  // 0x1F8(0x1)
	char bUseEmissiveForDynamicAreaLighting : 1;  // 0x1F8(0x1)
	char bBlockGI : 1;  // 0x1F8(0x1)
	char bUsedAsSpecialEngineMaterial : 1;  // 0x1F8(0x1)
	char bUsedWithSkeletalMesh : 1;  // 0x1F8(0x1)
	char bUsedWithEditorCompositing : 1;  // 0x1F9(0x1)
	char bUsedWithParticleSprites : 1;  // 0x1F9(0x1)
	char bUsedWithBeamTrails : 1;  // 0x1F9(0x1)
	char bUsedWithMeshParticles : 1;  // 0x1F9(0x1)
	char bUsedWithNiagaraSprites : 1;  // 0x1F9(0x1)
	char bUsedWithNiagaraRibbons : 1;  // 0x1F9(0x1)
	char bUsedWithNiagaraMeshParticles : 1;  // 0x1F9(0x1)
	char bUsedWithGeometryCache : 1;  // 0x1F9(0x1)
	char bUsedWithStaticLighting : 1;  // 0x1FA(0x1)
	char bUsedWithMorphTargets : 1;  // 0x1FA(0x1)
	char bUsedWithSplineMeshes : 1;  // 0x1FA(0x1)
	char bUsedWithInstancedStaticMeshes : 1;  // 0x1FA(0x1)
	char bUsedWithGeometryCollections : 1;  // 0x1FA(0x1)
	char bUsesDistortion : 1;  // 0x1FA(0x1)
	char bUsedWithClothing : 1;  // 0x1FA(0x1)
	char pad_506_1 : 1;  // 0x1FA(0x1)
	char pad_507[2];  // 0x1FB(0x2)
	char bUsedWithWater : 1;  // 0x1FC(0x1)
	char bUsedWithHairStrands : 1;  // 0x1FC(0x1)
	char bUsedWithLidarPointCloud : 1;  // 0x1FC(0x1)
	char bUsedWithVirtualHeightfieldMesh : 1;  // 0x1FC(0x1)
	char pad_508_1 : 4;  // 0x1FC(0x1)
	char pad_509[4];  // 0x1FD(0x4)
	char bUsedWithUI : 1;  // 0x200(0x1)
	char bAutomaticallySetUsageInEditor : 1;  // 0x200(0x1)
	char bFullyRough : 1;  // 0x200(0x1)
	char bUseFullPrecision : 1;  // 0x200(0x1)
	char bUseLightmapDirectionality : 1;  // 0x200(0x1)
	char bUseAlphaToCoverage : 1;  // 0x200(0x1)
	char pad_512_1 : 2;  // 0x200(0x1)
	char pad_513[4];  // 0x201(0x4)
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1;  // 0x204(0x1)
	char pad_516_1 : 7;  // 0x204(0x1)
	char pad_517[4];  // 0x205(0x4)
	char bUseHQForwardReflections : 1;  // 0x208(0x1)
	char bForwardBlendsSkyLightCubemaps : 1;  // 0x208(0x1)
	char bUsePlanarForwardReflections : 1;  // 0x208(0x1)
	char bNormalCurvatureToRoughness : 1;  // 0x208(0x1)
	char pad_520_1 : 4;  // 0x208(0x1)
	char EMaterialTessellationMode D3D11TessellationMode;  // 0x209(0x1)
	char bEnableCrackFreeDisplacement : 1;  // 0x20A(0x1)
	char bEnableAdaptiveTessellation : 1;  // 0x20A(0x1)
	char AllowTranslucentCustomDepthWrites : 1;  // 0x20A(0x1)
	char Wireframe : 1;  // 0x20A(0x1)
	char WriteDepthToTranslucentMaterial : 1;  // 0x20A(0x1)
	char pad_522_1 : 3;  // 0x20A(0x1)
	char EMaterialShadingRate ShadingRate;  // 0x20B(0x1)
	char bCanMaskedBeAssumedOpaque : 1;  // 0x20C(0x1)
	char bIsMasked : 1;  // 0x20C(0x1)
	char bIsPreviewMaterial : 1;  // 0x20C(0x1)
	char bIsFunctionPreviewMaterial : 1;  // 0x20C(0x1)
	char bUseMaterialAttributes : 1;  // 0x20C(0x1)
	char bCastRayTracedShadows : 1;  // 0x20C(0x1)
	char bUseTranslucencyVertexFog : 1;  // 0x20C(0x1)
	char bApplyCloudFogging : 1;  // 0x20C(0x1)
	char bIsSky : 1;  // 0x20D(0x1)
	char bComputeFogPerPixel : 1;  // 0x20D(0x1)
	char bOutputTranslucentVelocity : 1;  // 0x20D(0x1)
	char bAllowDevelopmentShaderCompile : 1;  // 0x20D(0x1)
	char bIsMaterialEditorStatsMaterial : 1;  // 0x20D(0x1)
	char pad_525_1 : 3;  // 0x20D(0x1)
	char EBlendableLocation BlendableLocation;  // 0x20E(0x1)
	char BlendableOutputAlpha : 1;  // 0x20F(0x1)
	char bEnableStencilTest : 1;  // 0x20F(0x1)
	char pad_527_1 : 6;  // 0x20F(0x1)
	char EMaterialStencilCompare StencilCompare;  // 0x210(0x1)
	char StencilRefValue;  // 0x211(0x1)
	char ERefractionMode RefractionMode;  // 0x212(0x1)
	char pad_531[1];  // 0x213(0x1)
	int32_t BlendablePriority;  // 0x214(0x4)
	char bIsBlendable : 1;  // 0x218(0x1)
	char pad_536_1 : 7;  // 0x218(0x1)
	char pad_537[4];  // 0x219(0x4)
	uint32_t UsageFlagWarnings;  // 0x21C(0x4)
	float RefractionDepthBias;  // 0x220(0x4)
	struct FGuid StateId;  // 0x224(0x10)
	float MaxDisplacement;  // 0x234(0x4)
	char pad_568[48];  // 0x238(0x30)
	struct FMaterialCachedExpressionData CachedExpressionData;  // 0x268(0x1D8)

}; 



// Class Engine.AnimSequence
// Size: 0x1C0(Inherited: 0xA8) 
struct UAnimSequence : public UAnimSequenceBase
{
	int32_t NumFrames;  // 0xA8(0x4)
	char pad_172[4];  // 0xAC(0x4)
	struct TArray<struct FTrackToSkeletonMap> TrackToSkeletonMapTable;  // 0xB0(0x10)
	char pad_192[16];  // 0xC0(0x10)
	struct UAnimBoneCompressionSettings* BoneCompressionSettings;  // 0xD0(0x8)
	struct UAnimCurveCompressionSettings* CurveCompressionSettings;  // 0xD8(0x8)
	char pad_224[112];  // 0xE0(0x70)
	char EAdditiveAnimationType AdditiveAnimType;  // 0x150(0x1)
	char EAdditiveBasePoseType RefPoseType;  // 0x151(0x1)
	char pad_338[6];  // 0x152(0x6)
	struct UAnimSequence* RefPoseSeq;  // 0x158(0x8)
	int32_t RefFrameIndex;  // 0x160(0x4)
	struct FName RetargetSource;  // 0x164(0x8)
	char pad_364[4];  // 0x16C(0x4)
	struct TArray<struct FTransform> RetargetSourceAssetReferencePose;  // 0x170(0x10)
	uint8_t  Interpolation;  // 0x180(0x1)
	char pad_385_1 : 7;  // 0x181(0x1)
	bool bEnableRootMotion : 1;  // 0x181(0x1)
	char ERootMotionRootLock RootMotionRootLock;  // 0x182(0x1)
	char pad_387_1 : 7;  // 0x183(0x1)
	bool bForceRootLock : 1;  // 0x183(0x1)
	char pad_388_1 : 7;  // 0x184(0x1)
	bool bUseNormalizedRootMotionScale : 1;  // 0x184(0x1)
	char pad_389_1 : 7;  // 0x185(0x1)
	bool bRootMotionSettingsCopiedFromMontage : 1;  // 0x185(0x1)
	char pad_390[2];  // 0x186(0x2)
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers;  // 0x188(0x10)
	char pad_408[24];  // 0x198(0x18)
	struct TArray<struct FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData;  // 0x1B0(0x10)

}; 



// Class Engine.AnimSet
// Size: 0xF0(Inherited: 0x28) 
struct UAnimSet : public UObject
{
	char bAnimRotationOnly : 1;  // 0x28(0x1)
	char pad_40_1 : 7;  // 0x28(0x1)
	char pad_41[8];  // 0x29(0x8)
	struct TArray<struct FName> TrackBoneNames;  // 0x30(0x10)
	struct TArray<struct FAnimSetMeshLinkup> LinkupCache;  // 0x40(0x10)
	struct TArray<char> BoneUseAnimTranslation;  // 0x50(0x10)
	struct TArray<char> ForceUseMeshTranslation;  // 0x60(0x10)
	struct TArray<struct FName> UseTranslationBoneNames;  // 0x70(0x10)
	struct TArray<struct FName> ForceMeshTranslationBoneNames;  // 0x80(0x10)
	struct FName PreviewSkelMeshName;  // 0x90(0x8)
	struct FName BestRatioSkelMeshName;  // 0x98(0x8)
	char pad_160[80];  // 0xA0(0x50)

}; 



// Class Engine.StreamingSettings
// Size: 0x70(Inherited: 0x38) 
struct UStreamingSettings : public UDeveloperSettings
{
	char AsyncLoadingThreadEnabled : 1;  // 0x38(0x1)
	char WarnIfTimeLimitExceeded : 1;  // 0x38(0x1)
	char pad_56_1 : 6;  // 0x38(0x1)
	char pad_57[4];  // 0x39(0x4)
	float TimeLimitExceededMultiplier;  // 0x3C(0x4)
	float TimeLimitExceededMinTime;  // 0x40(0x4)
	int32_t MinBulkDataSizeForAsyncLoading;  // 0x44(0x4)
	char UseBackgroundLevelStreaming : 1;  // 0x48(0x1)
	char AsyncLoadingUseFullTimeLimit : 1;  // 0x48(0x1)
	char pad_72_1 : 6;  // 0x48(0x1)
	char pad_73[4];  // 0x49(0x4)
	float AsyncLoadingTimeLimit;  // 0x4C(0x4)
	float PriorityAsyncLoadingExtraTime;  // 0x50(0x4)
	float LevelStreamingActorsUpdateTimeLimit;  // 0x54(0x4)
	float PriorityLevelStreamingActorsUpdateExtraTime;  // 0x58(0x4)
	int32_t LevelStreamingComponentsRegistrationGranularity;  // 0x5C(0x4)
	float LevelStreamingUnregisterComponentsTimeLimit;  // 0x60(0x4)
	int32_t LevelStreamingComponentsUnregistrationGranularity;  // 0x64(0x4)
	char FlushStreamingOnExit : 1;  // 0x68(0x1)
	char EventDrivenLoaderEnabled : 1;  // 0x68(0x1)
	char pad_104_1 : 6;  // 0x68(0x1)
	char pad_105[8];  // 0x69(0x8)

}; 



// Class Engine.AnimSingleNodeInstance
// Size: 0x2D0(Inherited: 0x2C0) 
struct UAnimSingleNodeInstance : public UAnimInstance
{
	struct UAnimationAsset* CurrentAsset;  // 0x2B8(0x8)
	struct FDelegate PostEvaluateAnimEvent;  // 0x2C0(0x10)

	void StopAnim(); // Function Engine.AnimSingleNodeInstance.StopAnim
	void SetReverse(bool bInReverse); // Function Engine.AnimSingleNodeInstance.SetReverse
	void SetPreviewCurveOverride(struct FName& PoseName, float Value, bool bRemoveIfZero); // Function Engine.AnimSingleNodeInstance.SetPreviewCurveOverride
	void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies); // Function Engine.AnimSingleNodeInstance.SetPositionWithPreviousTime
	void SetPosition(float InPosition, bool bFireNotifies); // Function Engine.AnimSingleNodeInstance.SetPosition
	void SetPlayRate(float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetPlayRate
	void SetPlaying(bool bIsPlaying); // Function Engine.AnimSingleNodeInstance.SetPlaying
	void SetLooping(bool bIsLooping); // Function Engine.AnimSingleNodeInstance.SetLooping
	void SetBlendSpaceInput(struct FVector& InBlendInput); // Function Engine.AnimSingleNodeInstance.SetBlendSpaceInput
	void SetAnimationAsset(struct UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetAnimationAsset
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition); // Function Engine.AnimSingleNodeInstance.PlayAnim
	float GetLength(); // Function Engine.AnimSingleNodeInstance.GetLength
	struct UAnimationAsset* GetAnimationAsset(); // Function Engine.AnimSingleNodeInstance.GetAnimationAsset
}; 



// Class Engine.Interface_CollisionDataProvider
// Size: 0x28(Inherited: 0x28) 
struct UInterface_CollisionDataProvider : public UInterface
{

}; 



// Class Engine.LevelStreamingVolume
// Size: 0x270(Inherited: 0x258) 
struct ALevelStreamingVolume : public AVolume
{
	struct TArray<struct FName> StreamingLevelNames;  // 0x258(0x10)
	char bEditorPreVisOnly : 1;  // 0x268(0x1)
	char bDisabled : 1;  // 0x268(0x1)
	char pad_616_1 : 6;  // 0x268(0x1)
	char pad_617[4];  // 0x269(0x4)
	char EStreamingVolumeUsage StreamingUsage;  // 0x26C(0x1)
	char pad_621[3];  // 0x26D(0x3)

}; 



// Class Engine.PhysicsSpringComponent
// Size: 0x220(Inherited: 0x200) 
struct UPhysicsSpringComponent : public USceneComponent
{
	float SpringStiffness;  // 0x1F8(0x4)
	float SpringDamping;  // 0x1FC(0x4)
	float SpringLengthAtRest;  // 0x200(0x4)
	float SpringRadius;  // 0x204(0x4)
	char ECollisionChannel SpringChannel;  // 0x208(0x1)
	char pad_529_1 : 7;  // 0x211(0x1)
	bool bIgnoreSelf : 1;  // 0x209(0x1)
	float SpringCompression;  // 0x20C(0x4)
	char pad_534[10];  // 0x216(0xA)

	struct FVector GetSpringRestingPoint(); // Function Engine.PhysicsSpringComponent.GetSpringRestingPoint
	struct FVector GetSpringDirection(); // Function Engine.PhysicsSpringComponent.GetSpringDirection
	struct FVector GetSpringCurrentEndPoint(); // Function Engine.PhysicsSpringComponent.GetSpringCurrentEndPoint
	float GetNormalizedCompressionScalar(); // Function Engine.PhysicsSpringComponent.GetNormalizedCompressionScalar
}; 



// Class Engine.AnimStreamable
// Size: 0xE0(Inherited: 0xA8) 
struct UAnimStreamable : public UAnimSequenceBase
{
	int32_t NumFrames;  // 0xA8(0x4)
	uint8_t  Interpolation;  // 0xAC(0x1)
	char pad_173[3];  // 0xAD(0x3)
	struct FName RetargetSource;  // 0xB0(0x8)
	char pad_184[16];  // 0xB8(0x10)
	struct UAnimBoneCompressionSettings* BoneCompressionSettings;  // 0xC8(0x8)
	struct UAnimCurveCompressionSettings* CurveCompressionSettings;  // 0xD0(0x8)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool bEnableRootMotion : 1;  // 0xD8(0x1)
	char ERootMotionRootLock RootMotionRootLock;  // 0xD9(0x1)
	char pad_218_1 : 7;  // 0xDA(0x1)
	bool bForceRootLock : 1;  // 0xDA(0x1)
	char pad_219_1 : 7;  // 0xDB(0x1)
	bool bUseNormalizedRootMotionScale : 1;  // 0xDB(0x1)
	char pad_220[4];  // 0xDC(0x4)

}; 



// Class Engine.HLODProxyDesc
// Size: 0x28(Inherited: 0x28) 
struct UHLODProxyDesc : public UObject
{

}; 



// Class Engine.ParticleModuleRotation_Seeded
// Size: 0x80(Inherited: 0x60) 
struct UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x60(0x20)

}; 



// Class Engine.ApplicationLifecycleComponent
// Size: 0x140(Inherited: 0xB0) 
struct UApplicationLifecycleComponent : public UActorComponent
{
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate;  // 0xB0(0x10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate;  // 0xC0(0x10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate;  // 0xD0(0x10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate;  // 0xE0(0x10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate;  // 0xF0(0x10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate;  // 0x100(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate;  // 0x110(0x10)
	struct FMulticastInlineDelegate OnTemperatureChangeDelegate;  // 0x120(0x10)
	struct FMulticastInlineDelegate OnLowPowerModeDelegate;  // 0x130(0x10)

}; 



// Class Engine.AsyncActionHandleSaveGame
// Size: 0x68(Inherited: 0x30) 
struct UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Completed;  // 0x30(0x10)
	char pad_64[32];  // 0x40(0x20)
	struct USaveGame* SaveGameObject;  // 0x60(0x8)

	struct UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(struct UObject* WorldContextObject, struct USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex); // Function Engine.AsyncActionHandleSaveGame.AsyncSaveGameToSlot
	struct UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(struct UObject* WorldContextObject, struct FString SlotName, int32_t UserIndex); // Function Engine.AsyncActionHandleSaveGame.AsyncLoadGameFromSlot
}; 



// Class Engine.EngineBaseTypes
// Size: 0x28(Inherited: 0x28) 
struct UEngineBaseTypes : public UObject
{

}; 



// Class Engine.ArrowComponent
// Size: 0x470(Inherited: 0x450) 
struct UArrowComponent : public UPrimitiveComponent
{
	struct FColor ArrowColor;  // 0x450(0x4)
	float ArrowSize;  // 0x454(0x4)
	float ArrowLength;  // 0x458(0x4)
	float ScreenSize;  // 0x45C(0x4)
	char bIsScreenSizeScaled : 1;  // 0x460(0x1)
	char bTreatAsASprite : 1;  // 0x460(0x1)
	char pad_1120_1 : 6;  // 0x460(0x1)
	char pad_1121[16];  // 0x461(0x10)

	void SetArrowColor(struct FLinearColor NewColor); // Function Engine.ArrowComponent.SetArrowColor
}; 



// Class Engine.DocumentationActor
// Size: 0x228(Inherited: 0x220) 
struct ADocumentationActor : public AActor
{
	char pad_544[8];  // 0x220(0x8)

}; 



// Class Engine.VectorFieldVolume
// Size: 0x228(Inherited: 0x220) 
struct AVectorFieldVolume : public AActor
{
	struct UVectorFieldComponent* VectorFieldComponent;  // 0x220(0x8)

}; 



// Class Engine.AssetExportTask
// Size: 0x78(Inherited: 0x28) 
struct UAssetExportTask : public UObject
{
	struct UObject* Object;  // 0x28(0x8)
	struct UExporter* Exporter;  // 0x30(0x8)
	struct FString Filename;  // 0x38(0x10)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bSelected : 1;  // 0x48(0x1)
	char pad_73_1 : 7;  // 0x49(0x1)
	bool bReplaceIdentical : 1;  // 0x49(0x1)
	char pad_74_1 : 7;  // 0x4A(0x1)
	bool bPrompt : 1;  // 0x4A(0x1)
	char pad_75_1 : 7;  // 0x4B(0x1)
	bool bAutomated : 1;  // 0x4B(0x1)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool bUseFileArchive : 1;  // 0x4C(0x1)
	char pad_77_1 : 7;  // 0x4D(0x1)
	bool bWriteEmptyFiles : 1;  // 0x4D(0x1)
	char pad_78[2];  // 0x4E(0x2)
	struct TArray<struct UObject*> IgnoreObjectList;  // 0x50(0x10)
	struct UObject* Options;  // 0x60(0x8)
	struct TArray<struct FString> Errors;  // 0x68(0x10)

}; 



// Class Engine.MaterialExpressionPixelDepth
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionPixelDepth : public UMaterialExpression
{

}; 



// Class Engine.AssetManagerSettings
// Size: 0x100(Inherited: 0x38) 
struct UAssetManagerSettings : public UDeveloperSettings
{
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;  // 0x38(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude;  // 0x48(0x10)
	struct TArray<struct FPrimaryAssetRulesOverride> PrimaryAssetRules;  // 0x58(0x10)
	struct TArray<struct FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules;  // 0x68(0x10)
	char pad_120_1 : 7;  // 0x78(0x1)
	bool bOnlyCookProductionAssets : 1;  // 0x78(0x1)
	char pad_121_1 : 7;  // 0x79(0x1)
	bool bShouldManagerDetermineTypeAndName : 1;  // 0x79(0x1)
	char pad_122_1 : 7;  // 0x7A(0x1)
	bool bShouldGuessTypeAndNameInEditor : 1;  // 0x7A(0x1)
	char pad_123_1 : 7;  // 0x7B(0x1)
	bool bShouldAcquireMissingChunksOnLoad : 1;  // 0x7B(0x1)
	char pad_124[4];  // 0x7C(0x4)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetIdRedirects;  // 0x80(0x10)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetTypeRedirects;  // 0x90(0x10)
	struct TArray<struct FAssetManagerRedirect> AssetPathRedirects;  // 0xA0(0x10)
	struct TSet<struct FName> MetaDataTagsForAssetRegistry;  // 0xB0(0x50)

}; 



// Class Engine.InterpTrackFade
// Size: 0xA8(Inherited: 0x90) 
struct UInterpTrackFade : public UInterpTrackFloatBase
{
	char bPersistFade : 1;  // 0x90(0x1)
	char bFadeAudio : 1;  // 0x90(0x1)
	char pad_144_1 : 6;  // 0x90(0x1)
	char pad_145[4];  // 0x91(0x4)
	struct FLinearColor FadeColor;  // 0x94(0x10)
	char pad_164[4];  // 0xA4(0x4)

}; 



// Class Engine.AsyncActionLoadPrimaryAssetBase
// Size: 0x78(Inherited: 0x30) 
struct UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase
{
	char pad_48[72];  // 0x30(0x48)

}; 



// Class Engine.AsyncActionLoadPrimaryAsset
// Size: 0x88(Inherited: 0x78) 
struct UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed;  // 0x78(0x10)

	struct UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(struct UObject* WorldContextObject, struct FPrimaryAssetId PrimaryAsset, struct TArray<struct FName>& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAsset.AsyncLoadPrimaryAsset
}; 



// Class Engine.AsyncActionLoadPrimaryAssetClass
// Size: 0x88(Inherited: 0x78) 
struct UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed;  // 0x78(0x10)

	struct UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(struct UObject* WorldContextObject, struct FPrimaryAssetId PrimaryAsset, struct TArray<struct FName>& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClass.AsyncLoadPrimaryAssetClass
}; 



// Class Engine.InterpTrackBoolProp
// Size: 0x88(Inherited: 0x70) 
struct UInterpTrackBoolProp : public UInterpTrack
{
	struct TArray<struct FBoolTrackKey> BoolTrack;  // 0x70(0x10)
	struct FName PropertyName;  // 0x80(0x8)

}; 



// Class Engine.SceneCaptureComponentCube
// Size: 0x2E0(Inherited: 0x2B0) 
struct USceneCaptureComponentCube : public USceneCaptureComponent
{
	struct UTextureRenderTargetCube* TextureTarget;  // 0x2B0(0x8)
	char pad_696_1 : 7;  // 0x2B8(0x1)
	bool bCaptureRotation : 1;  // 0x2B8(0x1)
	char pad_697[7];  // 0x2B9(0x7)
	struct UTextureRenderTargetCube* TextureTargetLeft;  // 0x2C0(0x8)
	struct UTextureRenderTargetCube* TextureTargetRight;  // 0x2C8(0x8)
	struct UTextureRenderTarget2D* TextureTargetODS;  // 0x2D0(0x8)
	float IPD;  // 0x2D8(0x4)
	char pad_732[4];  // 0x2DC(0x4)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene
}; 



// Class Engine.RuntimeVirtualTexture
// Size: 0xA0(Inherited: 0x28) 
struct URuntimeVirtualTexture : public UObject
{
	int32_t TileCount;  // 0x28(0x4)
	int32_t TileSize;  // 0x2C(0x4)
	int32_t TileBorderSize;  // 0x30(0x4)
	uint8_t  MaterialType;  // 0x34(0x1)
	char pad_53_1 : 7;  // 0x35(0x1)
	bool bCompressTextures : 1;  // 0x35(0x1)
	char pad_54_1 : 7;  // 0x36(0x1)
	bool bClearTextures : 1;  // 0x36(0x1)
	char pad_55_1 : 7;  // 0x37(0x1)
	bool bSinglePhysicalSpace : 1;  // 0x37(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bPrivateSpace : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool bAdaptive : 1;  // 0x39(0x1)
	char pad_58_1 : 7;  // 0x3A(0x1)
	bool bContinuousUpdate : 1;  // 0x3A(0x1)
	char pad_59[1];  // 0x3B(0x1)
	int32_t RemoveLowMips;  // 0x3C(0x4)
	char TextureGroup LODGroup;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	int32_t Size;  // 0x44(0x4)
	struct URuntimeVirtualTextureStreamingProxy* StreamingTexture;  // 0x48(0x8)
	char pad_80[80];  // 0x50(0x50)

	int32_t GetTileSize(); // Function Engine.RuntimeVirtualTexture.GetTileSize
	int32_t GetTileCount(); // Function Engine.RuntimeVirtualTexture.GetTileCount
	int32_t GetTileBorderSize(); // Function Engine.RuntimeVirtualTexture.GetTileBorderSize
	int32_t GetSize(); // Function Engine.RuntimeVirtualTexture.GetSize
	int32_t GetPageTableSize(); // Function Engine.RuntimeVirtualTexture.GetPageTableSize
}; 



// Class Engine.CheckBoxStyleAsset
// Size: 0x5A8(Inherited: 0x28) 
struct UCheckBoxStyleAsset : public UObject
{
	struct FCheckBoxStyle CheckBoxStyle;  // 0x28(0x580)

}; 



// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// Size: 0x88(Inherited: 0x80) 
struct UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
	char bBlend : 1;  // 0x80(0x1)
	char pad_128_1 : 7;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 



// Class Engine.AsyncActionLoadPrimaryAssetList
// Size: 0x88(Inherited: 0x78) 
struct UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed;  // 0x78(0x10)

	struct UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId>& PrimaryAssetList, struct TArray<struct FName>& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetList.AsyncLoadPrimaryAssetList
}; 



// Class Engine.AsyncActionLoadPrimaryAssetClassList
// Size: 0x88(Inherited: 0x78) 
struct UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed;  // 0x78(0x10)

	struct UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId>& PrimaryAssetList, struct TArray<struct FName>& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClassList.AsyncLoadPrimaryAssetClassList
}; 



// Class Engine.ParticleModuleSizeBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleSizeBase : public UParticleModule
{

}; 



// Class Engine.ParticleLODLevel
// Size: 0xB8(Inherited: 0x28) 
struct UParticleLODLevel : public UObject
{
	int32_t Level;  // 0x28(0x4)
	char bEnabled : 1;  // 0x2C(0x1)
	char pad_44_1 : 7;  // 0x2C(0x1)
	char pad_45[4];  // 0x2D(0x4)
	struct UParticleModuleRequired* RequiredModule;  // 0x30(0x8)
	struct TArray<struct UParticleModule*> Modules;  // 0x38(0x10)
	struct UParticleModuleTypeDataBase* TypeDataModule;  // 0x48(0x8)
	struct UParticleModuleSpawn* SpawnModule;  // 0x50(0x8)
	struct UParticleModuleEventGenerator* EventGenerator;  // 0x58(0x8)
	struct TArray<struct UParticleModuleSpawnBase*> SpawningModules;  // 0x60(0x10)
	struct TArray<struct UParticleModule*> SpawnModules;  // 0x70(0x10)
	struct TArray<struct UParticleModule*> UpdateModules;  // 0x80(0x10)
	struct TArray<struct UParticleModuleOrbit*> OrbitModules;  // 0x90(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> EventReceiverModules;  // 0xA0(0x10)
	char ConvertedModules : 1;  // 0xB0(0x1)
	char pad_176_1 : 7;  // 0xB0(0x1)
	char pad_177[4];  // 0xB1(0x4)
	int32_t PeakActiveParticles;  // 0xB4(0x4)

}; 



// Class Engine.MaterialExpressionAbs
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionAbs : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.AsyncActionChangePrimaryAssetBundles
// Size: 0x88(Inherited: 0x78) 
struct UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed;  // 0x78(0x10)

	struct UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId>& PrimaryAssetList, struct TArray<struct FName>& AddBundles, struct TArray<struct FName>& RemoveBundles); // Function Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForPrimaryAssetList
	struct UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(struct UObject* WorldContextObject, struct TArray<struct FName>& NewBundles, struct TArray<struct FName>& OldBundles); // Function Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForMatchingPrimaryAssets
}; 



// Class Engine.TextRenderActor
// Size: 0x228(Inherited: 0x220) 
struct ATextRenderActor : public AActor
{
	struct UTextRenderComponent* TextRender;  // 0x220(0x8)

}; 



// Class Engine.AtmosphericFogComponent
// Size: 0x300(Inherited: 0x200) 
struct UAtmosphericFogComponent : public USceneComponent
{
	float SunMultiplier;  // 0x1F8(0x4)
	float FogMultiplier;  // 0x1FC(0x4)
	float DensityMultiplier;  // 0x200(0x4)
	float DensityOffset;  // 0x204(0x4)
	float DistanceScale;  // 0x208(0x4)
	float AltitudeScale;  // 0x20C(0x4)
	float DistanceOffset;  // 0x210(0x4)
	float GroundOffset;  // 0x214(0x4)
	float StartDistance;  // 0x218(0x4)
	float SunDiscScale;  // 0x21C(0x4)
	float DefaultBrightness;  // 0x220(0x4)
	struct FColor DefaultLightColor;  // 0x224(0x4)
	char bDisableSunDisk : 1;  // 0x228(0x1)
	char bAtmosphereAffectsSunIlluminance : 1;  // 0x228(0x1)
	char bDisableGroundScattering : 1;  // 0x228(0x1)
	struct FAtmospherePrecomputeParameters PrecomputeParams;  // 0x22C(0x2C)
	struct UTexture2D* TransmittanceTexture;  // 0x258(0x8)
	struct UTexture2D* IrradianceTexture;  // 0x260(0x8)
	char pad_620_1 : 5;  // 0x26C(0x1)
	char pad_621[148];  // 0x26D(0x94)

	void StartPrecompute(); // Function Engine.AtmosphericFogComponent.StartPrecompute
	void SetSunMultiplier(float NewSunMultiplier); // Function Engine.AtmosphericFogComponent.SetSunMultiplier
	void SetStartDistance(float NewStartDistance); // Function Engine.AtmosphericFogComponent.SetStartDistance
	void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum); // Function Engine.AtmosphericFogComponent.SetPrecomputeParams
	void SetFogMultiplier(float NewFogMultiplier); // Function Engine.AtmosphericFogComponent.SetFogMultiplier
	void SetDistanceScale(float NewDistanceScale); // Function Engine.AtmosphericFogComponent.SetDistanceScale
	void SetDistanceOffset(float NewDistanceOffset); // Function Engine.AtmosphericFogComponent.SetDistanceOffset
	void SetDensityOffset(float NewDensityOffset); // Function Engine.AtmosphericFogComponent.SetDensityOffset
	void SetDensityMultiplier(float NewDensityMultiplier); // Function Engine.AtmosphericFogComponent.SetDensityMultiplier
	void SetDefaultLightColor(struct FLinearColor NewLightColor); // Function Engine.AtmosphericFogComponent.SetDefaultLightColor
	void SetDefaultBrightness(float NewBrightness); // Function Engine.AtmosphericFogComponent.SetDefaultBrightness
	void SetAltitudeScale(float NewAltitudeScale); // Function Engine.AtmosphericFogComponent.SetAltitudeScale
	void DisableSunDisk(bool NewSunDisk); // Function Engine.AtmosphericFogComponent.DisableSunDisk
	void DisableGroundScattering(bool NewGroundScattering); // Function Engine.AtmosphericFogComponent.DisableGroundScattering
}; 



// Class Engine.AudioBus
// Size: 0x30(Inherited: 0x28) 
struct UAudioBus : public UObject
{
	uint8_t  AudioBusChannels;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 



// Class Engine.AudioSettings
// Size: 0x198(Inherited: 0x38) 
struct UAudioSettings : public UDeveloperSettings
{
	struct FSoftObjectPath DefaultSoundClassName;  // 0x38(0x18)
	struct FSoftObjectPath DefaultMediaSoundClassName;  // 0x50(0x18)
	struct FSoftObjectPath DefaultSoundConcurrencyName;  // 0x68(0x18)
	struct FSoftObjectPath DefaultBaseSoundMix;  // 0x80(0x18)
	struct FSoftObjectPath VoiPSoundClass;  // 0x98(0x18)
	struct FSoftObjectPath MasterSubmix;  // 0xB0(0x18)
	struct FSoftObjectPath BaseDefaultSubmix;  // 0xC8(0x18)
	struct FSoftObjectPath ReverbSubmix;  // 0xE0(0x18)
	struct FSoftObjectPath EQSubmix;  // 0xF8(0x18)
	uint8_t  VoiPSampleRate;  // 0x110(0x4)
	float DefaultReverbSendLevel;  // 0x114(0x4)
	int32_t MaximumConcurrentStreams;  // 0x118(0x4)
	float GlobalMinPitchScale;  // 0x11C(0x4)
	float GlobalMaxPitchScale;  // 0x120(0x4)
	char pad_292[4];  // 0x124(0x4)
	struct TArray<struct FAudioQualitySettings> QualityLevels;  // 0x128(0x10)
	char bAllowPlayWhenSilent : 1;  // 0x138(0x1)
	char bDisableMasterEQ : 1;  // 0x138(0x1)
	char bAllowCenterChannel3DPanning : 1;  // 0x138(0x1)
	char pad_312_1 : 5;  // 0x138(0x1)
	char pad_313[4];  // 0x139(0x4)
	uint32_t NumStoppingSources;  // 0x13C(0x4)
	uint8_t  PanningMethod;  // 0x140(0x1)
	uint8_t  MonoChannelUpmixMethod;  // 0x141(0x1)
	char pad_322[6];  // 0x142(0x6)
	struct FString DialogueFilenameFormat;  // 0x148(0x10)
	struct TArray<struct FSoundDebugEntry> DebugSounds;  // 0x158(0x10)
	struct TArray<struct FDefaultAudioBusSettings> DefaultAudioBuses;  // 0x168(0x10)
	struct USoundClass* DefaultSoundClass;  // 0x178(0x8)
	struct USoundClass* DefaultMediaSoundClass;  // 0x180(0x8)
	struct USoundConcurrency* DefaultSoundConcurrency;  // 0x188(0x8)
	char pad_400[8];  // 0x190(0x8)

}; 



// Class Engine.BlueprintMapLibrary
// Size: 0x28(Inherited: 0x28) 
struct UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{

	void SetMapPropertyByName(struct UObject* Object, struct FName PropertyName, struct TMap<int32_t, int32_t>& Value); // Function Engine.BlueprintMapLibrary.SetMapPropertyByName
	void Map_Values(struct TMap<int32_t, int32_t>& TargetMap, struct TArray<int32_t>& Values); // Function Engine.BlueprintMapLibrary.Map_Values
	bool Map_Remove(struct TMap<int32_t, int32_t>& TargetMap, int32_t& Key); // Function Engine.BlueprintMapLibrary.Map_Remove
	int32_t Map_Length(struct TMap<int32_t, int32_t>& TargetMap); // Function Engine.BlueprintMapLibrary.Map_Length
	void Map_Keys(struct TMap<int32_t, int32_t>& TargetMap, struct TArray<int32_t>& Keys); // Function Engine.BlueprintMapLibrary.Map_Keys
	bool Map_Find(struct TMap<int32_t, int32_t>& TargetMap, int32_t& Key, int32_t& Value); // Function Engine.BlueprintMapLibrary.Map_Find
	bool Map_Contains(struct TMap<int32_t, int32_t>& TargetMap, int32_t& Key); // Function Engine.BlueprintMapLibrary.Map_Contains
	void Map_Clear(struct TMap<int32_t, int32_t>& TargetMap); // Function Engine.BlueprintMapLibrary.Map_Clear
	void Map_Add(struct TMap<int32_t, int32_t>& TargetMap, int32_t& Key, int32_t& Value); // Function Engine.BlueprintMapLibrary.Map_Add
}; 



// Class Engine.BookmarkBase
// Size: 0x28(Inherited: 0x28) 
struct UBookmarkBase : public UObject
{

}; 



// Class Engine.Interface_AssetUserData
// Size: 0x28(Inherited: 0x28) 
struct UInterface_AssetUserData : public UInterface
{

}; 



// Class Engine.VectorFieldStatic
// Size: 0x98(Inherited: 0x48) 
struct UVectorFieldStatic : public UVectorField
{
	int32_t SizeX;  // 0x48(0x4)
	int32_t SizeY;  // 0x4C(0x4)
	int32_t SizeZ;  // 0x50(0x4)
	char pad_84_1 : 7;  // 0x54(0x1)
	bool bAllowCPUAccess : 1;  // 0x54(0x1)
	char pad_85[67];  // 0x55(0x43)

}; 



// Class Engine.InputVectorAxisDelegateBinding
// Size: 0x38(Inherited: 0x38) 
struct UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{

}; 



// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
	char EDepthOfFieldFunctionValue FunctionValue;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	struct FExpressionInput Depth;  // 0x44(0x14)

}; 



// Class Engine.MaterialExpressionLightmapUVs
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionLightmapUVs : public UMaterialExpression
{

}; 



// Class Engine.AudioVolume
// Size: 0x2C8(Inherited: 0x258) 
struct AAudioVolume : public AVolume
{
	float Priority;  // 0x258(0x4)
	char bEnabled : 1;  // 0x25C(0x1)
	char pad_604_1 : 7;  // 0x25C(0x1)
	char pad_605[4];  // 0x25D(0x4)
	struct FReverbSettings Settings;  // 0x260(0x20)
	struct FInteriorSettings AmbientZoneSettings;  // 0x280(0x24)
	char pad_676[4];  // 0x2A4(0x4)
	struct TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings;  // 0x2A8(0x10)
	struct TArray<struct FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings;  // 0x2B8(0x10)

	void SetSubmixSendSettings(struct TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings); // Function Engine.AudioVolume.SetSubmixSendSettings
	void SetSubmixOverrideSettings(struct TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings); // Function Engine.AudioVolume.SetSubmixOverrideSettings
	void SetReverbSettings(struct FReverbSettings& NewReverbSettings); // Function Engine.AudioVolume.SetReverbSettings
	void SetPriority(float NewPriority); // Function Engine.AudioVolume.SetPriority
	void SetInteriorSettings(struct FInteriorSettings& NewInteriorSettings); // Function Engine.AudioVolume.SetInteriorSettings
	void SetEnabled(bool bNewEnabled); // Function Engine.AudioVolume.SetEnabled
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled
}; 



// Class Engine.DialogueSoundWaveProxy
// Size: 0x188(Inherited: 0x170) 
struct UDialogueSoundWaveProxy : public USoundBase
{
	char pad_368[24];  // 0x170(0x18)

}; 



// Class Engine.ServerStatReplicator
// Size: 0x2E8(Inherited: 0x220) 
struct AServerStatReplicator : public AInfo
{
	char pad_544_1 : 7;  // 0x220(0x1)
	bool bUpdateStatNet : 1;  // 0x220(0x1)
	char pad_545_1 : 7;  // 0x221(0x1)
	bool bOverwriteClientStats : 1;  // 0x221(0x1)
	char pad_546[2];  // 0x222(0x2)
	uint32_t Channels;  // 0x224(0x4)
	uint32_t InRate;  // 0x228(0x4)
	uint32_t OutRate;  // 0x22C(0x4)
	char pad_560[4];  // 0x230(0x4)
	uint32_t MaxPacketOverhead;  // 0x234(0x4)
	uint32_t InRateClientMax;  // 0x238(0x4)
	uint32_t InRateClientMin;  // 0x23C(0x4)
	uint32_t InRateClientAvg;  // 0x240(0x4)
	uint32_t InPacketsClientMax;  // 0x244(0x4)
	uint32_t InPacketsClientMin;  // 0x248(0x4)
	uint32_t InPacketsClientAvg;  // 0x24C(0x4)
	uint32_t OutRateClientMax;  // 0x250(0x4)
	uint32_t OutRateClientMin;  // 0x254(0x4)
	uint32_t OutRateClientAvg;  // 0x258(0x4)
	uint32_t OutPacketsClientMax;  // 0x25C(0x4)
	uint32_t OutPacketsClientMin;  // 0x260(0x4)
	uint32_t OutPacketsClientAvg;  // 0x264(0x4)
	uint32_t NetNumClients;  // 0x268(0x4)
	uint32_t InPackets;  // 0x26C(0x4)
	uint32_t OutPackets;  // 0x270(0x4)
	uint32_t InBunches;  // 0x274(0x4)
	uint32_t OutBunches;  // 0x278(0x4)
	uint32_t OutLoss;  // 0x27C(0x4)
	uint32_t InLoss;  // 0x280(0x4)
	uint32_t VoiceBytesSent;  // 0x284(0x4)
	uint32_t VoiceBytesRecv;  // 0x288(0x4)
	uint32_t VoicePacketsSent;  // 0x28C(0x4)
	uint32_t VoicePacketsRecv;  // 0x290(0x4)
	uint32_t PercentInVoice;  // 0x294(0x4)
	uint32_t PercentOutVoice;  // 0x298(0x4)
	uint32_t NumActorChannels;  // 0x29C(0x4)
	uint32_t NumConsideredActors;  // 0x2A0(0x4)
	uint32_t PrioritizedActors;  // 0x2A4(0x4)
	uint32_t NumRelevantActors;  // 0x2A8(0x4)
	uint32_t NumRelevantDeletedActors;  // 0x2AC(0x4)
	uint32_t NumReplicatedActorAttempts;  // 0x2B0(0x4)
	uint32_t NumReplicatedActors;  // 0x2B4(0x4)
	uint32_t NumActors;  // 0x2B8(0x4)
	uint32_t NumNetActors;  // 0x2BC(0x4)
	uint32_t NumDormantActors;  // 0x2C0(0x4)
	uint32_t NumInitiallyDormantActors;  // 0x2C4(0x4)
	uint32_t NumNetGUIDsAckd;  // 0x2C8(0x4)
	uint32_t NumNetGUIDsPending;  // 0x2CC(0x4)
	uint32_t NumNetGUIDsUnAckd;  // 0x2D0(0x4)
	uint32_t ObjPathBytes;  // 0x2D4(0x4)
	uint32_t NetGUIDOutRate;  // 0x2D8(0x4)
	uint32_t NetGUIDInRate;  // 0x2DC(0x4)
	uint32_t NetSaturated;  // 0x2E0(0x4)
	char pad_740[4];  // 0x2E4(0x4)

}; 



// Class Engine.MaterialExpressionRound
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionRound : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.AutoDestroySubsystem
// Size: 0x50(Inherited: 0x40) 
struct UAutoDestroySubsystem : public UTickableWorldSubsystem
{
	struct TArray<struct AActor*> ActorsToPoll;  // 0x40(0x10)

	void OnActorEndPlay(struct AActor* Actor, char EEndPlayReason EndPlayReason); // Function Engine.AutoDestroySubsystem.OnActorEndPlay
}; 



// Class Engine.InterpToMovementComponent
// Size: 0x190(Inherited: 0xF0) 
struct UInterpToMovementComponent : public UMovementComponent
{
	float Duration;  // 0xF0(0x4)
	char bPauseOnImpact : 1;  // 0xF4(0x1)
	char pad_244_1 : 7;  // 0xF4(0x1)
	char pad_245[4];  // 0xF5(0x4)
	char pad_248_1 : 7;  // 0xF8(0x1)
	bool bSweep : 1;  // 0xF8(0x1)
	uint8_t  TeleportType;  // 0xF9(0x1)
	uint8_t  BehaviourType;  // 0xFA(0x1)
	char pad_251_1 : 7;  // 0xFB(0x1)
	bool bCheckIfStillInWorld : 1;  // 0xFB(0x1)
	char bForceSubStepping : 1;  // 0xFC(0x1)
	char pad_252_1 : 7;  // 0xFC(0x1)
	char pad_253[4];  // 0xFD(0x4)
	struct FMulticastInlineDelegate OnInterpToReverse;  // 0x100(0x10)
	struct FMulticastInlineDelegate OnInterpToStop;  // 0x110(0x10)
	struct FMulticastInlineDelegate OnWaitBeginDelegate;  // 0x120(0x10)
	struct FMulticastInlineDelegate OnWaitEndDelegate;  // 0x130(0x10)
	struct FMulticastInlineDelegate OnResetDelegate;  // 0x140(0x10)
	float MaxSimulationTimeStep;  // 0x150(0x4)
	int32_t MaxSimulationIterations;  // 0x154(0x4)
	struct TArray<struct FInterpControlPoint> ControlPoints;  // 0x158(0x10)
	char pad_360[40];  // 0x168(0x28)

	void StopSimulating(struct FHitResult& HitResult); // Function Engine.InterpToMovementComponent.StopSimulating
	void RestartMovement(float InitialDirection); // Function Engine.InterpToMovementComponent.RestartMovement
	void ResetControlPoints(); // Function Engine.InterpToMovementComponent.ResetControlPoints
	void OnInterpToWaitEndDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature
	void OnInterpToWaitBeginDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature
	void OnInterpToStopDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature
	void OnInterpToReverseDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature
	void OnInterpToResetDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature
	void FinaliseControlPoints(); // Function Engine.InterpToMovementComponent.FinaliseControlPoints
	void AddControlPointPosition(struct FVector Pos, bool bPositionIsRelative); // Function Engine.InterpToMovementComponent.AddControlPointPosition
}; 



// Class Engine.StaticMeshSocket
// Size: 0x68(Inherited: 0x28) 
struct UStaticMeshSocket : public UObject
{
	struct FName SocketName;  // 0x28(0x8)
	struct FVector RelativeLocation;  // 0x30(0xC)
	struct FRotator RelativeRotation;  // 0x3C(0xC)
	struct FVector RelativeScale;  // 0x48(0xC)
	char pad_84[4];  // 0x54(0x4)
	struct FString Tag;  // 0x58(0x10)

}; 



// Class Engine.MaterialExpressionPerInstanceRandom
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionLightVector
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionLightVector : public UMaterialExpression
{

}; 



// Class Engine.AutomationTestSettings
// Size: 0x340(Inherited: 0x28) 
struct UAutomationTestSettings : public UObject
{
	struct TArray<struct FString> EngineTestModules;  // 0x28(0x10)
	struct TArray<struct FString> EditorTestModules;  // 0x38(0x10)
	struct FSoftObjectPath AutomationTestmap;  // 0x48(0x18)
	struct TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps;  // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> AssetsToOpen;  // 0x70(0x10)
	struct TArray<struct FString> MapsToPIETest;  // 0x80(0x10)
	struct FBuildPromotionTestSettings BuildPromotionTest;  // 0x90(0x1F0)
	struct FMaterialEditorPromotionSettings MaterialEditorPromotionTest;  // 0x280(0x30)
	struct FParticleEditorPromotionSettings ParticleEditorPromotionTest;  // 0x2B0(0x10)
	struct FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest;  // 0x2C0(0x30)
	struct TArray<struct FString> TestLevelFolders;  // 0x2F0(0x10)
	struct TArray<struct FExternalToolDefinition> ExternalTools;  // 0x300(0x10)
	struct TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions;  // 0x310(0x10)
	struct TArray<struct FLaunchOnTestSettings> LaunchOnSettings;  // 0x320(0x10)
	struct FIntPoint DefaultScreenshotResolution;  // 0x330(0x8)
	float PIETestDuration;  // 0x338(0x4)
	char pad_828[4];  // 0x33C(0x4)

}; 



// Class Engine.BandwidthTestActor
// Size: 0x240(Inherited: 0x220) 
struct ABandwidthTestActor : public AActor
{
	struct FBandwidthTestGenerator BandwidthGenerator;  // 0x220(0x20)

}; 



// Class Engine.SCS_Node
// Size: 0xD8(Inherited: 0x28) 
struct USCS_Node : public UObject
{
	UObject* ComponentClass;  // 0x28(0x8)
	struct UActorComponent* ComponentTemplate;  // 0x30(0x8)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData;  // 0x38(0x48)
	struct FName AttachToName;  // 0x80(0x8)
	struct FName ParentComponentOrVariableName;  // 0x88(0x8)
	struct FName ParentComponentOwnerClassName;  // 0x90(0x8)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bIsParentComponentNative : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)
	struct TArray<struct USCS_Node*> ChildNodes;  // 0xA0(0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray;  // 0xB0(0x10)
	struct FGuid VariableGuid;  // 0xC0(0x10)
	struct FName InternalVariableName;  // 0xD0(0x8)

}; 



// Class Engine.BoxReflectionCapture
// Size: 0x228(Inherited: 0x228) 
struct ABoxReflectionCapture : public AReflectionCapture
{

}; 



// Class Engine.MaterialExpressionArccosineFast
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionArccosineFast : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.SplineMetadata
// Size: 0x28(Inherited: 0x28) 
struct USplineMetadata : public UObject
{

}; 



// Class Engine.BlendProfile
// Size: 0x48(Inherited: 0x28) 
struct UBlendProfile : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct USkeleton* OwningSkeleton;  // 0x30(0x8)
	struct TArray<struct FBlendProfileBoneEntry> ProfileEntries;  // 0x38(0x10)

}; 



// Class Engine.BlockingVolume
// Size: 0x258(Inherited: 0x258) 
struct ABlockingVolume : public AVolume
{

}; 



// Class Engine.PlatformGameInstance
// Size: 0x278(Inherited: 0x1A8) 
struct UPlatformGameInstance : public UGameInstance
{
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate;  // 0x1A8(0x10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate;  // 0x1B8(0x10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate;  // 0x1C8(0x10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate;  // 0x1D8(0x10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate;  // 0x1E8(0x10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate;  // 0x1F8(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate;  // 0x208(0x10)
	struct FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate;  // 0x218(0x10)
	struct FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate;  // 0x228(0x10)
	struct FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate;  // 0x238(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate;  // 0x248(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate;  // 0x258(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate;  // 0x268(0x10)

}; 



// Class Engine.MaterialExpressionVolumetricAdvancedMaterialInput
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionVolumetricAdvancedMaterialInput : public UMaterialExpression
{

}; 



// Class Engine.InterpGroupCamera
// Size: 0x60(Inherited: 0x50) 
struct UInterpGroupCamera : public UInterpGroup
{
	struct UCameraAnim* CameraAnimInst;  // 0x50(0x8)
	float CompressTolerance;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 



// Class Engine.BlueprintPlatformLibrary
// Size: 0x28(Inherited: 0x28) 
struct UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{

	int32_t ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, struct FText& Title, struct FText& Body, struct FText& Action, struct FString ActivationEvent); // Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationFromNow
	void ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, struct FString ActivationEvent); // Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeFromNow
	int32_t ScheduleLocalNotificationBadgeAtTime(struct FDateTime& FireDateTime, bool LocalTime, struct FString ActivationEvent); // Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeAtTime
	int32_t ScheduleLocalNotificationAtTime(struct FDateTime& FireDateTime, bool LocalTime, struct FText& Title, struct FText& Body, struct FText& Action, struct FString ActivationEvent); // Function Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationAtTime
	void GetLaunchNotification(bool& NotificationLaunchedApp, struct FString& ActivationEvent, int32_t& FireDate); // Function Engine.BlueprintPlatformLibrary.GetLaunchNotification
	char EScreenOrientation GetDeviceOrientation(); // Function Engine.BlueprintPlatformLibrary.GetDeviceOrientation
	void ClearAllLocalNotifications(); // Function Engine.BlueprintPlatformLibrary.ClearAllLocalNotifications
	void CancelLocalNotificationById(int32_t NotificationId); // Function Engine.BlueprintPlatformLibrary.CancelLocalNotificationById
	void CancelLocalNotification(struct FString ActivationEvent); // Function Engine.BlueprintPlatformLibrary.CancelLocalNotification
}; 



// Class Engine.DecalActor
// Size: 0x228(Inherited: 0x220) 
struct ADecalActor : public AActor
{
	struct UDecalComponent* Decal;  // 0x220(0x8)

	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // Function Engine.DecalActor.SetDecalMaterial
	struct UMaterialInterface* GetDecalMaterial(); // Function Engine.DecalActor.GetDecalMaterial
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance
}; 



// Class Engine.VolumeTexture
// Size: 0x1D0(Inherited: 0x180) 
struct UVolumeTexture : public UTexture
{
	char pad_384[80];  // 0x180(0x50)

}; 



// Class Engine.BlueprintSetLibrary
// Size: 0x28(Inherited: 0x28) 
struct UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{

	void SetSetPropertyByName(struct UObject* Object, struct FName PropertyName, struct TSet<int32_t>& Value); // Function Engine.BlueprintSetLibrary.SetSetPropertyByName
	void Set_Union(struct TSet<int32_t>& A, struct TSet<int32_t>& B, struct TSet<int32_t>& Result); // Function Engine.BlueprintSetLibrary.Set_Union
	void Set_ToArray(struct TSet<int32_t>& A, struct TArray<int32_t>& Result); // Function Engine.BlueprintSetLibrary.Set_ToArray
	void Set_RemoveItems(struct TSet<int32_t>& TargetSet, struct TArray<int32_t>& Items); // Function Engine.BlueprintSetLibrary.Set_RemoveItems
	bool Set_Remove(struct TSet<int32_t>& TargetSet, int32_t& Item); // Function Engine.BlueprintSetLibrary.Set_Remove
	int32_t Set_Length(struct TSet<int32_t>& TargetSet); // Function Engine.BlueprintSetLibrary.Set_Length
	void Set_Intersection(struct TSet<int32_t>& A, struct TSet<int32_t>& B, struct TSet<int32_t>& Result); // Function Engine.BlueprintSetLibrary.Set_Intersection
	void Set_Difference(struct TSet<int32_t>& A, struct TSet<int32_t>& B, struct TSet<int32_t>& Result); // Function Engine.BlueprintSetLibrary.Set_Difference
	bool Set_Contains(struct TSet<int32_t>& TargetSet, int32_t& ItemToFind); // Function Engine.BlueprintSetLibrary.Set_Contains
	void Set_Clear(struct TSet<int32_t>& TargetSet); // Function Engine.BlueprintSetLibrary.Set_Clear
	void Set_AddItems(struct TSet<int32_t>& TargetSet, struct TArray<int32_t>& NewItems); // Function Engine.BlueprintSetLibrary.Set_AddItems
	void Set_Add(struct TSet<int32_t>& TargetSet, int32_t& NewItem); // Function Engine.BlueprintSetLibrary.Set_Add
}; 



// Class Engine.ForceFeedbackAttenuation
// Size: 0xD8(Inherited: 0x28) 
struct UForceFeedbackAttenuation : public UObject
{
	struct FForceFeedbackAttenuationSettings Attenuation;  // 0x28(0xB0)

}; 



// Class Engine.BodySetup
// Size: 0x2A0(Inherited: 0x48) 
struct UBodySetup : public UBodySetupCore
{
	struct FKAggregateGeom AggGeom;  // 0x48(0x58)
	char bAlwaysFullAnimWeight : 1;  // 0xA0(0x1)
	char bConsiderForBounds : 1;  // 0xA0(0x1)
	char bMeshCollideAll : 1;  // 0xA0(0x1)
	char bDoubleSidedGeometry : 1;  // 0xA0(0x1)
	char bGenerateNonMirroredCollision : 1;  // 0xA0(0x1)
	char bSharedCookedData : 1;  // 0xA0(0x1)
	char bGenerateMirroredCollision : 1;  // 0xA0(0x1)
	char bSupportUVsAndFaceRemap : 1;  // 0xA0(0x1)
	char pad_161[7];  // 0xA1(0x7)
	struct UPhysicalMaterial* PhysMaterial;  // 0xA8(0x8)
	struct FWalkableSlopeOverride WalkableSlopeOverride;  // 0xB0(0x10)
	char pad_192[104];  // 0xC0(0x68)
	struct FBodyInstance DefaultInstance;  // 0x128(0x158)
	char pad_640[8];  // 0x280(0x8)
	struct FVector BuildScale3D;  // 0x288(0xC)
	char pad_660[12];  // 0x294(0xC)

}; 



// Class Engine.NetworkPredictionInterface
// Size: 0x28(Inherited: 0x28) 
struct UNetworkPredictionInterface : public UInterface
{

}; 



// Class Engine.BoundsCopyComponent
// Size: 0x120(Inherited: 0xB0) 
struct UBoundsCopyComponent : public UActorComponent
{
	struct TSoftObjectPtr<AActor> BoundsSourceActor;  // 0xB0(0x28)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool bUseCollidingComponentsForSourceBounds : 1;  // 0xD8(0x1)
	char pad_217_1 : 7;  // 0xD9(0x1)
	bool bKeepOwnBoundsScale : 1;  // 0xD9(0x1)
	char pad_218_1 : 7;  // 0xDA(0x1)
	bool bUseCollidingComponentsForOwnBounds : 1;  // 0xDA(0x1)
	char pad_219[5];  // 0xDB(0x5)
	struct FTransform PostTransform;  // 0xE0(0x30)
	char pad_272_1 : 7;  // 0x110(0x1)
	bool bCopyXBounds : 1;  // 0x110(0x1)
	char pad_273_1 : 7;  // 0x111(0x1)
	bool bCopyYBounds : 1;  // 0x111(0x1)
	char pad_274_1 : 7;  // 0x112(0x1)
	bool bCopyZBounds : 1;  // 0x112(0x1)
	char pad_275[13];  // 0x113(0xD)

}; 



// Class Engine.ReflectionCaptureComponent
// Size: 0x270(Inherited: 0x200) 
struct UReflectionCaptureComponent : public USceneComponent
{
	struct UBillboardComponent* CaptureOffsetComponent;  // 0x1F8(0x8)
	uint8_t  ReflectionSourceType;  // 0x200(0x1)
	uint8_t  MobileReflectionCompression;  // 0x201(0x1)
	struct UTextureCube* Cubemap;  // 0x208(0x8)
	float SourceCubemapAngle;  // 0x210(0x4)
	float Brightness;  // 0x214(0x4)
	float AffectedBySkyLight;  // 0x218(0x4)
	char pad_542_1 : 7;  // 0x21E(0x1)
	bool bModifyMaxValueRGBM : 1;  // 0x21C(0x1)
	char pad_543[1];  // 0x21F(0x1)
	float MaxValueRGBM;  // 0x220(0x4)
	struct FVector CaptureOffset;  // 0x224(0xC)
	struct FGuid MapBuildDataId;  // 0x230(0x10)
	char pad_576[16];  // 0x240(0x10)
	struct UTextureCube* CachedEncodedHDRCubemap;  // 0x250(0x8)
	char pad_600[24];  // 0x258(0x18)

}; 



// Class Engine.DistributionVectorParticleParameter
// Size: 0x90(Inherited: 0x90) 
struct UDistributionVectorParticleParameter : public UDistributionVectorParameterBase
{

}; 



// Class Engine.InterpTrackInstColorScale
// Size: 0x28(Inherited: 0x28) 
struct UInterpTrackInstColorScale : public UInterpTrackInst
{

}; 



// Class Engine.BoxReflectionCaptureComponent
// Size: 0x290(Inherited: 0x270) 
struct UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
	float BoxTransitionDistance;  // 0x270(0x4)
	char pad_628[4];  // 0x274(0x4)
	struct UBoxComponent* PreviewInfluenceBox;  // 0x278(0x8)
	struct UBoxComponent* PreviewCaptureBox;  // 0x280(0x8)
	char pad_648[8];  // 0x288(0x8)

}; 



// Class Engine.MaterialExpressionPreSkinnedPosition
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionPreSkinnedPosition : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionPanner
// Size: 0x90(Inherited: 0x40) 
struct UMaterialExpressionPanner : public UMaterialExpression
{
	struct FExpressionInput Coordinate;  // 0x40(0x14)
	struct FExpressionInput Time;  // 0x54(0x14)
	struct FExpressionInput Speed;  // 0x68(0x14)
	float SpeedX;  // 0x7C(0x4)
	float SpeedY;  // 0x80(0x4)
	uint32_t ConstCoordinate;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bFractionalPart : 1;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)

}; 



// Class Engine.Breakpoint
// Size: 0x40(Inherited: 0x28) 
struct UBreakpoint : public UObject
{
	char bEnabled : 1;  // 0x28(0x1)
	char pad_40_1 : 7;  // 0x28(0x1)
	char pad_41[8];  // 0x29(0x8)
	struct UEdGraphNode* Node;  // 0x30(0x8)
	char bStepOnce : 1;  // 0x38(0x1)
	char bStepOnce_WasPreviouslyDisabled : 1;  // 0x38(0x1)
	char bStepOnce_RemoveAfterHit : 1;  // 0x38(0x1)
	char pad_56_1 : 5;  // 0x38(0x1)
	char pad_57[8];  // 0x39(0x8)

}; 



// Class Engine.KismetInternationalizationLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{

	bool SetCurrentLocale(struct FString Culture, bool SaveToConfig); // Function Engine.KismetInternationalizationLibrary.SetCurrentLocale
	bool SetCurrentLanguageAndLocale(struct FString Culture, bool SaveToConfig); // Function Engine.KismetInternationalizationLibrary.SetCurrentLanguageAndLocale
	bool SetCurrentLanguage(struct FString Culture, bool SaveToConfig); // Function Engine.KismetInternationalizationLibrary.SetCurrentLanguage
	bool SetCurrentCulture(struct FString Culture, bool SaveToConfig); // Function Engine.KismetInternationalizationLibrary.SetCurrentCulture
	bool SetCurrentAssetGroupCulture(struct FName AssetGroup, struct FString Culture, bool SaveToConfig); // Function Engine.KismetInternationalizationLibrary.SetCurrentAssetGroupCulture
	struct FString GetSuitableCulture(struct TArray<struct FString>& AvailableCultures, struct FString CultureToMatch, struct FString FallbackCulture); // Function Engine.KismetInternationalizationLibrary.GetSuitableCulture
	struct FString GetNativeCulture(uint8_t  TextCategory); // Function Engine.KismetInternationalizationLibrary.GetNativeCulture
	struct TArray<struct FString> GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional); // Function Engine.KismetInternationalizationLibrary.GetLocalizedCultures
	struct FString GetCurrentLocale(); // Function Engine.KismetInternationalizationLibrary.GetCurrentLocale
	struct FString GetCurrentLanguage(); // Function Engine.KismetInternationalizationLibrary.GetCurrentLanguage
	struct FString GetCurrentCulture(); // Function Engine.KismetInternationalizationLibrary.GetCurrentCulture
	struct FString GetCurrentAssetGroupCulture(struct FName AssetGroup); // Function Engine.KismetInternationalizationLibrary.GetCurrentAssetGroupCulture
	struct FString GetCultureDisplayName(struct FString Culture, bool Localized); // Function Engine.KismetInternationalizationLibrary.GetCultureDisplayName
	void ClearCurrentAssetGroupCulture(struct FName AssetGroup, bool SaveToConfig); // Function Engine.KismetInternationalizationLibrary.ClearCurrentAssetGroupCulture
}; 



// Class Engine.PrimaryAssetLabel
// Size: 0x68(Inherited: 0x30) 
struct UPrimaryAssetLabel : public UPrimaryDataAsset
{
	struct FPrimaryAssetRules Rules;  // 0x30(0xC)
	char bLabelAssetsInMyDirectory : 1;  // 0x3C(0x1)
	char bIsRuntimeLabel : 1;  // 0x3C(0x1)
	char pad_60_1 : 6;  // 0x3C(0x1)
	char pad_61[4];  // 0x3D(0x4)
	struct TArray<struct TSoftObjectPtr<UObject>> ExplicitAssets;  // 0x40(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> ExplicitBlueprints;  // 0x50(0x10)
	struct FCollectionReference AssetCollection;  // 0x60(0x8)

}; 



// Class Engine.CameraShakeSourceActor
// Size: 0x228(Inherited: 0x220) 
struct ACameraShakeSourceActor : public AActor
{
	struct UCameraShakeSourceComponent* CameraShakeSourceComponent;  // 0x220(0x8)

}; 



// Class Engine.CheatManagerExtension
// Size: 0x28(Inherited: 0x28) 
struct UCheatManagerExtension : public UObject
{

}; 



// Class Engine.LevelBounds
// Size: 0x230(Inherited: 0x220) 
struct ALevelBounds : public AActor
{
	struct UBoxComponent* BoxComponent;  // 0x220(0x8)
	char pad_552_1 : 7;  // 0x228(0x1)
	bool bAutoUpdateBounds : 1;  // 0x228(0x1)
	char pad_553[7];  // 0x229(0x7)

}; 



// Class Engine.BrushBuilder
// Size: 0x80(Inherited: 0x28) 
struct UBrushBuilder : public UObject
{
	struct FString BitmapFilename;  // 0x28(0x10)
	struct FString ToolTip;  // 0x38(0x10)
	char NotifyBadParams : 1;  // 0x48(0x1)
	char pad_72_1 : 7;  // 0x48(0x1)
	char pad_73[8];  // 0x49(0x8)
	struct TArray<struct FVector> Vertices;  // 0x50(0x10)
	struct TArray<struct FBuilderPoly> Polys;  // 0x60(0x10)
	struct FName Layer;  // 0x70(0x8)
	char MergeCoplanars : 1;  // 0x78(0x1)
	char pad_120_1 : 7;  // 0x78(0x1)
	char pad_121[8];  // 0x79(0x8)

}; 



// Class Engine.DemoNetConnection
// Size: 0x1C18(Inherited: 0x1BA8) 
struct UDemoNetConnection : public UNetConnection
{
	char pad_7080[112];  // 0x1BA8(0x70)

}; 



// Class Engine.InputComponent
// Size: 0x138(Inherited: 0xB0) 
struct UInputComponent : public UActorComponent
{
	char pad_176[112];  // 0xB0(0x70)
	struct TArray<struct FCachedKeyToActionInfo> CachedKeyToActionInfo;  // 0x120(0x10)
	char pad_304[8];  // 0x130(0x8)

	bool WasControllerKeyJustReleased(struct FKey Key); // Function Engine.InputComponent.WasControllerKeyJustReleased
	bool WasControllerKeyJustPressed(struct FKey Key); // Function Engine.InputComponent.WasControllerKeyJustPressed
	bool IsControllerKeyDown(struct FKey Key); // Function Engine.InputComponent.IsControllerKeyDown
	void GetTouchState(int32_t FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed); // Function Engine.InputComponent.GetTouchState
	struct FVector GetControllerVectorKeyState(struct FKey Key); // Function Engine.InputComponent.GetControllerVectorKeyState
	void GetControllerMouseDelta(float& DeltaX, float& DeltaY); // Function Engine.InputComponent.GetControllerMouseDelta
	float GetControllerKeyTimeDown(struct FKey Key); // Function Engine.InputComponent.GetControllerKeyTimeDown
	void GetControllerAnalogStickState(char EControllerAnalogStick WhichStick, float& StickX, float& StickY); // Function Engine.InputComponent.GetControllerAnalogStickState
	float GetControllerAnalogKeyState(struct FKey Key); // Function Engine.InputComponent.GetControllerAnalogKeyState
}; 



// Class Engine.LODActor
// Size: 0x2A8(Inherited: 0x220) 
struct ALODActor : public AActor
{
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x220(0x8)
	struct TMap<struct FHLODInstancingKey, struct UInstancedStaticMeshComponent*> InstancedStaticMeshComponents;  // 0x228(0x50)
	struct UHLODProxy* Proxy;  // 0x278(0x8)
	struct FName Key;  // 0x280(0x8)
	float LODDrawDistance;  // 0x288(0x4)
	int32_t LODLevel;  // 0x28C(0x4)
	struct TArray<struct AActor*> SubActors;  // 0x290(0x10)
	char CachedNumHLODLevels;  // 0x2A0(0x1)
	char pad_673[7];  // 0x2A1(0x7)

}; 



// Class Engine.BrushComponent
// Size: 0x460(Inherited: 0x450) 
struct UBrushComponent : public UPrimitiveComponent
{
	struct UModel* Brush;  // 0x450(0x8)
	struct UBodySetup* BrushBodySetup;  // 0x458(0x8)

}; 



// Class Engine.MaterialExpressionRerouteBase
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionRerouteBase : public UMaterialExpression
{

}; 



// Class Engine.BrushShape
// Size: 0x258(Inherited: 0x258) 
struct ABrushShape : public ABrush
{

}; 



// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x50(Inherited: 0x40) 
struct UMaterialExpressionConstant3Vector : public UMaterialExpression
{
	struct FLinearColor Constant;  // 0x40(0x10)

}; 



// Class Engine.ButtonStyleAsset
// Size: 0x2A0(Inherited: 0x28) 
struct UButtonStyleAsset : public UObject
{
	struct FButtonStyle ButtonStyle;  // 0x28(0x278)

}; 



// Class Engine.CameraAnim
// Size: 0x5D0(Inherited: 0x28) 
struct UCameraAnim : public UObject
{
	struct UInterpGroup* CameraInterpGroup;  // 0x28(0x8)
	float AnimLength;  // 0x30(0x4)
	struct FBox BoundingBox;  // 0x34(0x1C)
	char bRelativeToInitialTransform : 1;  // 0x50(0x1)
	char bRelativeToInitialFOV : 1;  // 0x50(0x1)
	char pad_80_1 : 6;  // 0x50(0x1)
	char pad_81[4];  // 0x51(0x4)
	float BaseFOV;  // 0x54(0x4)
	char pad_88[8];  // 0x58(0x8)
	struct FPostProcessSettings BasePostProcessSettings;  // 0x60(0x560)
	float BasePostProcessBlendWeight;  // 0x5C0(0x4)
	char pad_1476[12];  // 0x5C4(0xC)

}; 



// Class Engine.CameraBlockingVolume
// Size: 0x258(Inherited: 0x258) 
struct ACameraBlockingVolume : public AVolume
{

}; 



// Class Engine.ReporterGraph
// Size: 0xA8(Inherited: 0x30) 
struct UReporterGraph : public UReporterBase
{
	char pad_48[120];  // 0x30(0x78)

}; 



// Class Engine.ParticleModuleVectorFieldRotationRate
// Size: 0x40(Inherited: 0x30) 
struct UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
	struct FVector RotationRate;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.MaterialFunction
// Size: 0x58(Inherited: 0x40) 
struct UMaterialFunction : public UMaterialFunctionInterface
{
	struct FString Description;  // 0x40(0x10)
	char bExposeToLibrary : 1;  // 0x50(0x1)
	char bPrefixParameterNames : 1;  // 0x50(0x1)
	char pad_80_1 : 6;  // 0x50(0x1)
	char pad_81[8];  // 0x51(0x8)

}; 



// Class Engine.CameraModifier
// Size: 0x48(Inherited: 0x28) 
struct UCameraModifier : public UObject
{
	char bDebug : 1;  // 0x28(0x1)
	char bExclusive : 1;  // 0x28(0x1)
	char pad_40_1 : 6;  // 0x28(0x1)
	char pad_41[4];  // 0x29(0x4)
	char Priority;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)
	struct APlayerCameraManager* CameraOwner;  // 0x30(0x8)
	float AlphaInTime;  // 0x38(0x4)
	float AlphaOutTime;  // 0x3C(0x4)
	float Alpha;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

	bool IsDisabled(); // Function Engine.CameraModifier.IsDisabled
	struct AActor* GetViewTarget(); // Function Engine.CameraModifier.GetViewTarget
	void EnableModifier(); // Function Engine.CameraModifier.EnableModifier
	void DisableModifier(bool bImmediate); // Function Engine.CameraModifier.DisableModifier
	void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, struct FPostProcessSettings& PostProcessSettings); // Function Engine.CameraModifier.BlueprintModifyPostProcess
	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector& NewViewLocation, struct FRotator& NewViewRotation, float& NewFOV); // Function Engine.CameraModifier.BlueprintModifyCamera
}; 



// Class Engine.CameraModifier_CameraShake
// Size: 0xB0(Inherited: 0x48) 
struct UCameraModifier_CameraShake : public UCameraModifier
{
	struct TArray<struct FActiveCameraShakeInfo> ActiveShakes;  // 0x48(0x10)
	struct TMap<UCameraShakeBase*, struct FPooledCameraShakes> ExpiredPooledShakesMap;  // 0x58(0x50)
	float SplitScreenShakeScale;  // 0xA8(0x4)
	char pad_172[4];  // 0xAC(0x4)

}; 



// Class Engine.MaterialExpressionDotProduct
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionDotProduct : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)

}; 



// Class Engine.MaterialExpressionSkyAtmosphereViewLuminance
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionSkyAtmosphereViewLuminance : public UMaterialExpression
{

}; 



// Class Engine.InterpGroupInstDirector
// Size: 0x48(Inherited: 0x48) 
struct UInterpGroupInstDirector : public UInterpGroupInst
{

}; 



// Class Engine.VectorField
// Size: 0x48(Inherited: 0x28) 
struct UVectorField : public UObject
{
	struct FBox Bounds;  // 0x28(0x1C)
	float Intensity;  // 0x44(0x4)

}; 



// Class Engine.CameraShakeSourceComponent
// Size: 0x220(Inherited: 0x200) 
struct UCameraShakeSourceComponent : public USceneComponent
{
	uint8_t  Attenuation;  // 0x1F8(0x1)
	float InnerAttenuationRadius;  // 0x1FC(0x4)
	float OuterAttenuationRadius;  // 0x200(0x4)
	UCameraShakeBase* CameraShake;  // 0x208(0x8)
	char pad_529_1 : 7;  // 0x211(0x1)
	bool bAutoStart : 1;  // 0x210(0x1)
	char pad_530[14];  // 0x212(0xE)

	void StopAllCameraShakesOfType(UCameraShakeBase* InCameraShake, bool bImmediately); // Function Engine.CameraShakeSourceComponent.StopAllCameraShakesOfType
	void StopAllCameraShakes(bool bImmediately); // Function Engine.CameraShakeSourceComponent.StopAllCameraShakes
	void StartCameraShake(UCameraShakeBase* InCameraShake, float Scale, uint8_t  PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.CameraShakeSourceComponent.StartCameraShake
	void Start(); // Function Engine.CameraShakeSourceComponent.Start
	float GetAttenuationFactor(struct FVector& Location); // Function Engine.CameraShakeSourceComponent.GetAttenuationFactor
}; 



// Class Engine.TextureRenderTarget2D
// Size: 0x1B0(Inherited: 0x180) 
struct UTextureRenderTarget2D : public UTextureRenderTarget
{
	int32_t SizeX;  // 0x180(0x4)
	int32_t SizeY;  // 0x184(0x4)
	struct FLinearColor ClearColor;  // 0x188(0x10)
	char TextureAddress AddressX;  // 0x198(0x1)
	char TextureAddress AddressY;  // 0x199(0x1)
	char bForceLinearGamma : 1;  // 0x19A(0x1)
	char bHDR : 1;  // 0x19A(0x1)
	char bGPUSharedFlag : 1;  // 0x19A(0x1)
	char pad_410_1 : 5;  // 0x19A(0x1)
	char ETextureRenderTargetFormat RenderTargetFormat;  // 0x19B(0x1)
	char bAutoGenerateMips : 1;  // 0x19C(0x1)
	char pad_412_1 : 7;  // 0x19C(0x1)
	char TextureFilter MipsSamplerFilter;  // 0x19D(0x1)
	char TextureAddress MipsAddressU;  // 0x19E(0x1)
	char TextureAddress MipsAddressV;  // 0x19F(0x1)
	char EPixelFormat OverrideFormat;  // 0x1A0(0x1)
	char pad_417[15];  // 0x1A1(0xF)

}; 



// Class Engine.CanvasRenderTarget2D
// Size: 0x1D0(Inherited: 0x1B0) 
struct UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
	struct FMulticastInlineDelegate OnCanvasRenderTargetUpdate;  // 0x1A8(0x10)
	struct TWeakObjectPtr<UWorld> World;  // 0x1B8(0x8)
	char pad_456_1 : 7;  // 0x1C8(0x1)
	bool bShouldClearRenderTargetOnReceiveUpdate : 1;  // 0x1C0(0x1)
	char pad_457[7];  // 0x1C9(0x7)

	void UpdateResource(); // Function Engine.CanvasRenderTarget2D.UpdateResource
	void ReceiveUpdate(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.ReceiveUpdate
	void GetSize(int32_t& Width, int32_t& Height); // Function Engine.CanvasRenderTarget2D.GetSize
	struct UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(struct UObject* WorldContextObject, UCanvasRenderTarget2D* CanvasRenderTarget2DClass, int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D
}; 



// Class Engine.RectLightComponent
// Size: 0x360(Inherited: 0x340) 
struct URectLightComponent : public ULocalLightComponent
{
	float SourceWidth;  // 0x340(0x4)
	float SourceHeight;  // 0x344(0x4)
	float BarnDoorAngle;  // 0x348(0x4)
	float BarnDoorLength;  // 0x34C(0x4)
	struct UTexture* SourceTexture;  // 0x350(0x8)
	char pad_856[8];  // 0x358(0x8)

	void SetSourceWidth(float bNewValue); // Function Engine.RectLightComponent.SetSourceWidth
	void SetSourceTexture(struct UTexture* bNewValue); // Function Engine.RectLightComponent.SetSourceTexture
	void SetSourceHeight(float NewValue); // Function Engine.RectLightComponent.SetSourceHeight
	void SetBarnDoorLength(float NewValue); // Function Engine.RectLightComponent.SetBarnDoorLength
	void SetBarnDoorAngle(float NewValue); // Function Engine.RectLightComponent.SetBarnDoorAngle
}; 



// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x78(Inherited: 0x30) 
struct UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
	struct FVector position;  // 0x30(0xC)
	float Radius;  // 0x3C(0x4)
	struct UDistributionFloat* Strength;  // 0x40(0x8)
	struct FRawDistributionFloat StrengthRaw;  // 0x48(0x30)

}; 



// Class Engine.Engine
// Size: 0xD20(Inherited: 0x28) 
struct UEngine : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UFont* TinyFont;  // 0x30(0x8)
	struct FSoftObjectPath TinyFontName;  // 0x38(0x18)
	struct UFont* SmallFont;  // 0x50(0x8)
	struct FSoftObjectPath SmallFontName;  // 0x58(0x18)
	struct UFont* MediumFont;  // 0x70(0x8)
	struct FSoftObjectPath MediumFontName;  // 0x78(0x18)
	struct UFont* LargeFont;  // 0x90(0x8)
	struct FSoftObjectPath LargeFontName;  // 0x98(0x18)
	struct UFont* SubtitleFont;  // 0xB0(0x8)
	struct FSoftObjectPath SubtitleFontName;  // 0xB8(0x18)
	struct TArray<struct UFont*> AdditionalFonts;  // 0xD0(0x10)
	struct TArray<struct FString> AdditionalFontNames;  // 0xE0(0x10)
	UConsole* ConsoleClass;  // 0xF0(0x8)
	struct FSoftClassPath ConsoleClassName;  // 0xF8(0x18)
	UGameViewportClient* GameViewportClientClass;  // 0x110(0x8)
	struct FSoftClassPath GameViewportClientClassName;  // 0x118(0x18)
	ULocalPlayer* LocalPlayerClass;  // 0x130(0x8)
	struct FSoftClassPath LocalPlayerClassName;  // 0x138(0x18)
	AWorldSettings* WorldSettingsClass;  // 0x150(0x8)
	struct FSoftClassPath WorldSettingsClassName;  // 0x158(0x18)
	struct FSoftClassPath NavigationSystemClassName;  // 0x170(0x18)
	UNavigationSystemBase* NavigationSystemClass;  // 0x188(0x8)
	struct FSoftClassPath NavigationSystemConfigClassName;  // 0x190(0x18)
	UNavigationSystemConfig* NavigationSystemConfigClass;  // 0x1A8(0x8)
	struct FSoftClassPath AvoidanceManagerClassName;  // 0x1B0(0x18)
	UAvoidanceManager* AvoidanceManagerClass;  // 0x1C8(0x8)
	struct FSoftClassPath AIControllerClassName;  // 0x1D0(0x18)
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass;  // 0x1E8(0x8)
	struct FSoftClassPath PhysicsCollisionHandlerClassName;  // 0x1F0(0x18)
	struct FSoftClassPath GameUserSettingsClassName;  // 0x208(0x18)
	UGameUserSettings* GameUserSettingsClass;  // 0x220(0x8)
	struct UGameUserSettings* GameUserSettings;  // 0x228(0x8)
	ALevelScriptActor* LevelScriptActorClass;  // 0x230(0x8)
	struct FSoftClassPath LevelScriptActorClassName;  // 0x238(0x18)
	struct FSoftClassPath DefaultBlueprintBaseClassName;  // 0x250(0x18)
	struct FSoftClassPath GameSingletonClassName;  // 0x268(0x18)
	struct UObject* GameSingleton;  // 0x280(0x8)
	struct FSoftClassPath AssetManagerClassName;  // 0x288(0x18)
	struct UAssetManager* AssetManager;  // 0x2A0(0x8)
	struct UTexture2D* DefaultTexture;  // 0x2A8(0x8)
	struct FSoftObjectPath DefaultTextureName;  // 0x2B0(0x18)
	struct UTexture* DefaultDiffuseTexture;  // 0x2C8(0x8)
	struct FSoftObjectPath DefaultDiffuseTextureName;  // 0x2D0(0x18)
	struct UTexture2D* DefaultBSPVertexTexture;  // 0x2E8(0x8)
	struct FSoftObjectPath DefaultBSPVertexTextureName;  // 0x2F0(0x18)
	struct UTexture2D* HighFrequencyNoiseTexture;  // 0x308(0x8)
	struct FSoftObjectPath HighFrequencyNoiseTextureName;  // 0x310(0x18)
	struct UTexture2D* DefaultBokehTexture;  // 0x328(0x8)
	struct FSoftObjectPath DefaultBokehTextureName;  // 0x330(0x18)
	struct UTexture2D* DefaultBloomKernelTexture;  // 0x348(0x8)
	struct FSoftObjectPath DefaultBloomKernelTextureName;  // 0x350(0x18)
	struct UMaterial* WireframeMaterial;  // 0x368(0x8)
	struct FString WireframeMaterialName;  // 0x370(0x10)
	struct UMaterial* DebugMeshMaterial;  // 0x380(0x8)
	struct FSoftObjectPath DebugMeshMaterialName;  // 0x388(0x18)
	struct UMaterial* EmissiveMeshMaterial;  // 0x3A0(0x8)
	struct FSoftObjectPath EmissiveMeshMaterialName;  // 0x3A8(0x18)
	struct UMaterial* LevelColorationLitMaterial;  // 0x3C0(0x8)
	struct FString LevelColorationLitMaterialName;  // 0x3C8(0x10)
	struct UMaterial* LevelColorationUnlitMaterial;  // 0x3D8(0x8)
	struct FString LevelColorationUnlitMaterialName;  // 0x3E0(0x10)
	struct UMaterial* LightingTexelDensityMaterial;  // 0x3F0(0x8)
	struct FString LightingTexelDensityName;  // 0x3F8(0x10)
	struct UMaterial* ShadedLevelColorationLitMaterial;  // 0x408(0x8)
	struct FString ShadedLevelColorationLitMaterialName;  // 0x410(0x10)
	struct UMaterial* ShadedLevelColorationUnlitMaterial;  // 0x420(0x8)
	struct FString ShadedLevelColorationUnlitMaterialName;  // 0x428(0x10)
	struct UMaterial* RemoveSurfaceMaterial;  // 0x438(0x8)
	struct FSoftObjectPath RemoveSurfaceMaterialName;  // 0x440(0x18)
	struct UMaterial* VertexColorMaterial;  // 0x458(0x8)
	struct FString VertexColorMaterialName;  // 0x460(0x10)
	struct UMaterial* VertexColorViewModeMaterial_ColorOnly;  // 0x470(0x8)
	struct FString VertexColorViewModeMaterialName_ColorOnly;  // 0x478(0x10)
	struct UMaterial* VertexColorViewModeMaterial_AlphaAsColor;  // 0x488(0x8)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor;  // 0x490(0x10)
	struct UMaterial* VertexColorViewModeMaterial_RedOnly;  // 0x4A0(0x8)
	struct FString VertexColorViewModeMaterialName_RedOnly;  // 0x4A8(0x10)
	struct UMaterial* VertexColorViewModeMaterial_GreenOnly;  // 0x4B8(0x8)
	struct FString VertexColorViewModeMaterialName_GreenOnly;  // 0x4C0(0x10)
	struct UMaterial* VertexColorViewModeMaterial_BlueOnly;  // 0x4D0(0x8)
	struct FString VertexColorViewModeMaterialName_BlueOnly;  // 0x4D8(0x10)
	struct FSoftObjectPath DebugEditorMaterialName;  // 0x4E8(0x18)
	struct UMaterial* ConstraintLimitMaterial;  // 0x500(0x8)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialX;  // 0x508(0x8)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis;  // 0x510(0x8)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialY;  // 0x518(0x8)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis;  // 0x520(0x8)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZ;  // 0x528(0x8)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis;  // 0x530(0x8)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic;  // 0x538(0x8)
	struct UMaterial* InvalidLightmapSettingsMaterial;  // 0x540(0x8)
	struct FSoftObjectPath InvalidLightmapSettingsMaterialName;  // 0x548(0x18)
	struct UMaterial* PreviewShadowsIndicatorMaterial;  // 0x560(0x8)
	struct FSoftObjectPath PreviewShadowsIndicatorMaterialName;  // 0x568(0x18)
	struct UMaterial* ArrowMaterial;  // 0x580(0x8)
	struct UMaterialInstanceDynamic* ArrowMaterialYellow;  // 0x588(0x8)
	struct FSoftObjectPath ArrowMaterialName;  // 0x590(0x18)
	struct FLinearColor LightingOnlyBrightness;  // 0x5A8(0x10)
	struct TArray<struct FLinearColor> ShaderComplexityColors;  // 0x5B8(0x10)
	struct TArray<struct FLinearColor> QuadComplexityColors;  // 0x5C8(0x10)
	struct TArray<struct FLinearColor> LightComplexityColors;  // 0x5D8(0x10)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors;  // 0x5E8(0x10)
	struct TArray<struct FLinearColor> LODColorationColors;  // 0x5F8(0x10)
	struct TArray<struct FLinearColor> HLODColorationColors;  // 0x608(0x10)
	struct TArray<struct FLinearColor> StreamingAccuracyColors;  // 0x618(0x10)
	float MaxPixelShaderAdditiveComplexityCount;  // 0x628(0x4)
	float MaxES3PixelShaderAdditiveComplexityCount;  // 0x62C(0x4)
	float MinLightMapDensity;  // 0x630(0x4)
	float IdealLightMapDensity;  // 0x634(0x4)
	float MaxLightMapDensity;  // 0x638(0x4)
	char bRenderLightMapDensityGrayscale : 1;  // 0x63C(0x1)
	char pad_1596_1 : 7;  // 0x63C(0x1)
	char pad_1597[4];  // 0x63D(0x4)
	float RenderLightMapDensityGrayscaleScale;  // 0x640(0x4)
	float RenderLightMapDensityColorScale;  // 0x644(0x4)
	struct FLinearColor LightMapDensityVertexMappedColor;  // 0x648(0x10)
	struct FLinearColor LightMapDensitySelectedColor;  // 0x658(0x10)
	struct TArray<struct FStatColorMapping> StatColorMappings;  // 0x668(0x10)
	struct UPhysicalMaterial* DefaultPhysMaterial;  // 0x678(0x8)
	struct FSoftObjectPath DefaultPhysMaterialName;  // 0x680(0x18)
	struct TArray<struct FGameNameRedirect> ActiveGameNameRedirects;  // 0x698(0x10)
	struct TArray<struct FClassRedirect> ActiveClassRedirects;  // 0x6A8(0x10)
	struct TArray<struct FPluginRedirect> ActivePluginRedirects;  // 0x6B8(0x10)
	struct TArray<struct FStructRedirect> ActiveStructRedirects;  // 0x6C8(0x10)
	struct UTexture2D* PreIntegratedSkinBRDFTexture;  // 0x6D8(0x8)
	struct FSoftObjectPath PreIntegratedSkinBRDFTextureName;  // 0x6E0(0x18)
	struct UTexture2D* BlueNoiseTexture;  // 0x6F8(0x8)
	struct FSoftObjectPath BlueNoiseTextureName;  // 0x700(0x18)
	struct UTexture2D* MiniFontTexture;  // 0x718(0x8)
	struct FSoftObjectPath MiniFontTextureName;  // 0x720(0x18)
	struct UTexture* WeightMapPlaceholderTexture;  // 0x738(0x8)
	struct FSoftObjectPath WeightMapPlaceholderTextureName;  // 0x740(0x18)
	struct UTexture2D* LightMapDensityTexture;  // 0x758(0x8)
	struct FSoftObjectPath LightMapDensityTextureName;  // 0x760(0x18)
	char pad_1912[8];  // 0x778(0x8)
	struct UGameViewportClient* GameViewport;  // 0x780(0x8)
	struct TArray<struct FString> DeferredCommands;  // 0x788(0x10)
	float NearClipPlane;  // 0x798(0x4)
	char bSubtitlesEnabled : 1;  // 0x79C(0x1)
	char bSubtitlesForcedOff : 1;  // 0x79C(0x1)
	char pad_1948_1 : 6;  // 0x79C(0x1)
	char pad_1949[4];  // 0x79D(0x4)
	int32_t MaximumLoopIterationCount;  // 0x7A0(0x4)
	char bCanBlueprintsTickByDefault : 1;  // 0x7A4(0x1)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1;  // 0x7A4(0x1)
	char bAllowMultiThreadedAnimationUpdate : 1;  // 0x7A4(0x1)
	char bEnableEditorPSysRealtimeLOD : 1;  // 0x7A4(0x1)
	char pad_1956_1 : 1;  // 0x7A4(0x1)
	char bSmoothFrameRate : 1;  // 0x7A4(0x1)
	char bUseFixedFrameRate : 1;  // 0x7A4(0x1)
	char pad_1956_2 : 1;  // 0x7A4(0x1)
	char pad_1957[4];  // 0x7A5(0x4)
	float FixedFrameRate;  // 0x7A8(0x4)
	struct FFloatRange SmoothedFrameRateRange;  // 0x7AC(0x10)
	char pad_1980[4];  // 0x7BC(0x4)
	struct UEngineCustomTimeStep* CustomTimeStep;  // 0x7C0(0x8)
	char pad_1992[32];  // 0x7C8(0x20)
	struct FSoftClassPath CustomTimeStepClassName;  // 0x7E8(0x18)
	struct UTimecodeProvider* TimecodeProvider;  // 0x800(0x8)
	char pad_2056[32];  // 0x808(0x20)
	struct FSoftClassPath TimecodeProviderClassName;  // 0x828(0x18)
	char pad_2112_1 : 7;  // 0x840(0x1)
	bool bGenerateDefaultTimecode : 1;  // 0x840(0x1)
	char pad_2113[3];  // 0x841(0x3)
	struct FFrameRate GenerateDefaultTimecodeFrameRate;  // 0x844(0x8)
	float GenerateDefaultTimecodeFrameDelay;  // 0x84C(0x4)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1;  // 0x850(0x1)
	char pad_2128_1 : 7;  // 0x850(0x1)
	char pad_2129[4];  // 0x851(0x4)
	int32_t NumPawnsAllowedToBeSpawnedInAFrame;  // 0x854(0x4)
	char bShouldGenerateLowQualityLightmaps : 1;  // 0x858(0x1)
	char pad_2136_1 : 7;  // 0x858(0x1)
	char pad_2137[4];  // 0x859(0x4)
	struct FColor C_WorldBox;  // 0x85C(0x4)
	struct FColor C_BrushWire;  // 0x860(0x4)
	struct FColor C_AddWire;  // 0x864(0x4)
	struct FColor C_SubtractWire;  // 0x868(0x4)
	struct FColor C_SemiSolidWire;  // 0x86C(0x4)
	struct FColor C_NonSolidWire;  // 0x870(0x4)
	struct FColor C_WireBackground;  // 0x874(0x4)
	struct FColor C_ScaleBoxHi;  // 0x878(0x4)
	struct FColor C_VolumeCollision;  // 0x87C(0x4)
	struct FColor C_BSPCollision;  // 0x880(0x4)
	struct FColor C_OrthoBackground;  // 0x884(0x4)
	struct FColor C_Volume;  // 0x888(0x4)
	struct FColor C_BrushShape;  // 0x88C(0x4)
	float StreamingDistanceFactor;  // 0x890(0x4)
	char pad_2196[4];  // 0x894(0x4)
	struct FDirectoryPath GameScreenshotSaveDirectory;  // 0x898(0x10)
	uint8_t  TransitionType;  // 0x8A8(0x1)
	char pad_2217[7];  // 0x8A9(0x7)
	struct FString TransitionDescription;  // 0x8B0(0x10)
	struct FString TransitionGameMode;  // 0x8C0(0x10)
	char bAllowMatureLanguage : 1;  // 0x8D0(0x1)
	char pad_2256_1 : 7;  // 0x8D0(0x1)
	char pad_2257[4];  // 0x8D1(0x4)
	float CameraRotationThreshold;  // 0x8D4(0x4)
	float CameraTranslationThreshold;  // 0x8D8(0x4)
	float PrimitiveProbablyVisibleTime;  // 0x8DC(0x4)
	float MaxOcclusionPixelsFraction;  // 0x8E0(0x4)
	char bPauseOnLossOfFocus : 1;  // 0x8E4(0x1)
	char pad_2276_1 : 7;  // 0x8E4(0x1)
	char pad_2277[4];  // 0x8E5(0x4)
	int32_t MaxParticleResize;  // 0x8E8(0x4)
	int32_t MaxParticleResizeWarn;  // 0x8EC(0x4)
	struct TArray<struct FDropNoteInfo> PendingDroppedNotes;  // 0x8F0(0x10)
	float NetClientTicksPerSecond;  // 0x900(0x4)
	float DisplayGamma;  // 0x904(0x4)
	float MinDesiredFrameRate;  // 0x908(0x4)
	struct FLinearColor DefaultSelectedMaterialColor;  // 0x90C(0x10)
	struct FLinearColor SelectedMaterialColor;  // 0x91C(0x10)
	struct FLinearColor SelectionOutlineColor;  // 0x92C(0x10)
	struct FLinearColor SubduedSelectionOutlineColor;  // 0x93C(0x10)
	struct FLinearColor SelectedMaterialColorOverride;  // 0x94C(0x10)
	char pad_2396_1 : 7;  // 0x95C(0x1)
	bool bIsOverridingSelectedColor : 1;  // 0x95C(0x1)
	char pad_2397[3];  // 0x95D(0x3)
	char bEnableOnScreenDebugMessages : 1;  // 0x960(0x1)
	char bEnableOnScreenDebugMessagesDisplay : 1;  // 0x960(0x1)
	char bSuppressMapWarnings : 1;  // 0x960(0x1)
	char bDisableAILogging : 1;  // 0x960(0x1)
	char pad_2400_1 : 4;  // 0x960(0x1)
	char pad_2401[4];  // 0x961(0x4)
	uint32_t bEnableVisualLogRecordingOnStart;  // 0x964(0x4)
	int32_t ScreenSaverInhibitorSemaphore;  // 0x968(0x4)
	char bLockReadOnlyLevels : 1;  // 0x96C(0x1)
	char pad_2412_1 : 7;  // 0x96C(0x1)
	char pad_2413[4];  // 0x96D(0x4)
	struct FString ParticleEventManagerClassPath;  // 0x970(0x10)
	float SelectionHighlightIntensity;  // 0x980(0x4)
	float BSPSelectionHighlightIntensity;  // 0x984(0x4)
	float SelectionHighlightIntensityBillboards;  // 0x988(0x4)
	char pad_2444[620];  // 0x98C(0x26C)
	struct TArray<struct FNetDriverDefinition> NetDriverDefinitions;  // 0xBF8(0x10)
	struct TArray<struct FString> ServerActors;  // 0xC08(0x10)
	struct TArray<struct FString> RuntimeServerActors;  // 0xC18(0x10)
	float NetErrorLogInterval;  // 0xC28(0x4)
	char bStartedLoadMapMovie : 1;  // 0xC2C(0x1)
	char pad_3116_1 : 7;  // 0xC2C(0x1)
	char pad_3117[28];  // 0xC2D(0x1C)
	int32_t NextWorldContextHandle;  // 0xC48(0x4)
	char pad_3148[212];  // 0xC4C(0xD4)

}; 



// Class Engine.ParticleModuleLight_Seeded
// Size: 0x140(Inherited: 0x120) 
struct UParticleModuleLight_Seeded : public UParticleModuleLight
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x120(0x20)

}; 



// Class Engine.ChildConnection
// Size: 0x1BB0(Inherited: 0x1BA8) 
struct UChildConnection : public UNetConnection
{
	struct UNetConnection* Parent;  // 0x1BA8(0x8)

}; 



// Class Engine.PlatformInterfaceBase
// Size: 0x38(Inherited: 0x28) 
struct UPlatformInterfaceBase : public UObject
{
	struct TArray<struct FDelegateArray> AllDelegates;  // 0x28(0x10)

}; 



// Class Engine.CollisionProfile
// Size: 0x170(Inherited: 0x38) 
struct UCollisionProfile : public UDeveloperSettings
{
	struct TArray<struct FCollisionResponseTemplate> Profiles;  // 0x38(0x10)
	struct TArray<struct FCustomChannelSetup> DefaultChannelResponses;  // 0x48(0x10)
	struct TArray<struct FCustomProfile> EditProfiles;  // 0x58(0x10)
	struct TArray<struct FRedirector> ProfileRedirects;  // 0x68(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects;  // 0x78(0x10)
	char pad_136[232];  // 0x88(0xE8)

}; 



// Class Engine.ComponentDelegateBinding
// Size: 0x38(Inherited: 0x28) 
struct UComponentDelegateBinding : public UDynamicBlueprintBinding
{
	struct TArray<struct FBlueprintComponentDelegateBinding> ComponentDelegateBindings;  // 0x28(0x10)

}; 



// Class Engine.InterpTrackInstFloatMaterialParam
// Size: 0x60(Inherited: 0x28) 
struct UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances;  // 0x28(0x10)
	struct TArray<float> ResetFloats;  // 0x38(0x10)
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs;  // 0x48(0x10)
	struct UInterpTrackFloatMaterialParam* InstancedTrack;  // 0x58(0x8)

}; 



// Class Engine.DataTable
// Size: 0xB0(Inherited: 0x28) 
struct UDataTable : public UObject
{
	struct UScriptStruct* RowStruct;  // 0x28(0x8)
	char pad_48[80];  // 0x30(0x50)
	char bStripFromClientBuilds : 1;  // 0x80(0x1)
	char bIgnoreExtraFields : 1;  // 0x80(0x1)
	char bIgnoreMissingFields : 1;  // 0x80(0x1)
	char pad_128_1 : 5;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)
	struct FString ImportKeyField;  // 0x88(0x10)
	char pad_152[24];  // 0x98(0x18)

}; 



// Class Engine.CompositeDataTable
// Size: 0xD8(Inherited: 0xB0) 
struct UCompositeDataTable : public UDataTable
{
	struct TArray<struct UDataTable*> ParentTables;  // 0xB0(0x10)
	struct TArray<struct UDataTable*> OldParentTables;  // 0xC0(0x10)
	char pad_208[8];  // 0xD0(0x8)

}; 



// Class Engine.SubsystemBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

	struct UWorldSubsystem* GetWorldSubsystem(struct UObject* ContextObject, UWorldSubsystem* Class); // Function Engine.SubsystemBlueprintLibrary.GetWorldSubsystem
	struct ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(struct APlayerController* PlayerController, ULocalPlayerSubsystem* Class); // Function Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubSystemFromPlayerController
	struct ULocalPlayerSubsystem* GetLocalPlayerSubsystem(struct UObject* ContextObject, ULocalPlayerSubsystem* Class); // Function Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubsystem
	struct UGameInstanceSubsystem* GetGameInstanceSubsystem(struct UObject* ContextObject, UGameInstanceSubsystem* Class); // Function Engine.SubsystemBlueprintLibrary.GetGameInstanceSubsystem
	struct UEngineSubsystem* GetEngineSubsystem(UEngineSubsystem* Class); // Function Engine.SubsystemBlueprintLibrary.GetEngineSubsystem
}; 



// Class Engine.ScriptViewportClient
// Size: 0x38(Inherited: 0x28) 
struct UScriptViewportClient : public UObject
{
	char pad_40[16];  // 0x28(0x10)

}; 



// Class Engine.VisualLoggerDebugSnapshotInterface
// Size: 0x28(Inherited: 0x28) 
struct UVisualLoggerDebugSnapshotInterface : public UInterface
{

}; 



// Class Engine.GarbageCollectionSettings
// Size: 0x58(Inherited: 0x38) 
struct UGarbageCollectionSettings : public UDeveloperSettings
{
	float TimeBetweenPurgingPendingKillObjects;  // 0x38(0x4)
	char FlushStreamingOnGC : 1;  // 0x3C(0x1)
	char AllowParallelGC : 1;  // 0x3C(0x1)
	char IncrementalBeginDestroyEnabled : 1;  // 0x3C(0x1)
	char MultithreadedDestructionEnabled : 1;  // 0x3C(0x1)
	char CreateGCClusters : 1;  // 0x3C(0x1)
	char AssetClusteringEnabled : 1;  // 0x3C(0x1)
	char ActorClusteringEnabled : 1;  // 0x3C(0x1)
	char BlueprintClusteringEnabled : 1;  // 0x3C(0x1)
	char UseDisregardForGCOnDedicatedServers : 1;  // 0x3D(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	char pad_62[3];  // 0x3E(0x3)
	int32_t MinGCClusterSize;  // 0x40(0x4)
	int32_t NumRetriesBeforeForcingGC;  // 0x44(0x4)
	int32_t MaxObjectsNotConsideredByGC;  // 0x48(0x4)
	int32_t SizeOfPermanentObjectPool;  // 0x4C(0x4)
	int32_t MaxObjectsInGame;  // 0x50(0x4)
	int32_t MaxObjectsInEditor;  // 0x54(0x4)

}; 



// Class Engine.CurveBase
// Size: 0x30(Inherited: 0x28) 
struct UCurveBase : public UObject
{
	char pad_40[8];  // 0x28(0x8)

	void GetValueRange(float& MinValue, float& MaxValue); // Function Engine.CurveBase.GetValueRange
	void GetTimeRange(float& MinTime, float& MaxTime); // Function Engine.CurveBase.GetTimeRange
}; 



// Class Engine.ParticleModulePivotOffset
// Size: 0x38(Inherited: 0x30) 
struct UParticleModulePivotOffset : public UParticleModuleLocationBase
{
	struct FVector2D PivotOffset;  // 0x30(0x8)

}; 



// Class Engine.ParticleModuleAccelerationBase
// Size: 0x38(Inherited: 0x30) 
struct UParticleModuleAccelerationBase : public UParticleModule
{
	char bAlwaysInWorldSpace : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)

}; 



// Class Engine.MaterialExpressionParticlePositionWS
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticlePositionWS : public UMaterialExpression
{

}; 



// Class Engine.CurveEdPresetCurve
// Size: 0x28(Inherited: 0x28) 
struct UCurveEdPresetCurve : public UObject
{

}; 



// Class Engine.GameplayStatics
// Size: 0x28(Inherited: 0x28) 
struct UGameplayStatics : public UBlueprintFunctionLibrary
{

	void UnRetainAllSoundsInSoundClass(struct USoundClass* InSoundClass); // Function Engine.GameplayStatics.UnRetainAllSoundsInSoundClass
	void UnloadStreamLevelBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload); // Function Engine.GameplayStatics.UnloadStreamLevelBySoftObjectPtr
	void UnloadStreamLevel(struct UObject* WorldContextObject, struct FName LevelName, struct FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload); // Function Engine.GameplayStatics.UnloadStreamLevel
	bool SuggestProjectileVelocity_CustomArc(struct UObject* WorldContextObject, struct FVector& OutLaunchVelocity, struct FVector StartPos, struct FVector EndPos, float OverrideGravityZ, float ArcParam); // Function Engine.GameplayStatics.SuggestProjectileVelocity_CustomArc
	struct UAudioComponent* SpawnSoundAttached(struct USoundBase* Sound, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnSoundAttached
	struct UAudioComponent* SpawnSoundAtLocation(struct UObject* WorldContextObject, struct USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnSoundAtLocation
	struct UAudioComponent* SpawnSound2D(struct UObject* WorldContextObject, struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnSound2D
	struct UObject* SpawnObject(UObject* ObjectClass, struct UObject* Outer); // Function Engine.GameplayStatics.SpawnObject
	struct UForceFeedbackComponent* SpawnForceFeedbackAttached(struct UForceFeedbackEffect* ForceFeedbackEffect, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, struct UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnForceFeedbackAttached
	struct UForceFeedbackComponent* SpawnForceFeedbackAtLocation(struct UObject* WorldContextObject, struct UForceFeedbackEffect* ForceFeedbackEffect, struct FVector Location, struct FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, struct UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnForceFeedbackAtLocation
	struct UParticleSystemComponent* SpawnEmitterAttached(struct UParticleSystem* EmitterTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, struct FVector Scale, char EAttachLocation LocationType, bool bAutoDestroy, uint8_t  PoolingMethod, bool bAutoActivate); // Function Engine.GameplayStatics.SpawnEmitterAttached
	struct UParticleSystemComponent* SpawnEmitterAtLocation(struct UObject* WorldContextObject, struct UParticleSystem* EmitterTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, uint8_t  PoolingMethod, bool bAutoActivateSystem); // Function Engine.GameplayStatics.SpawnEmitterAtLocation
	struct UAudioComponent* SpawnDialogueAttached(struct UDialogueWave* Dialogue, struct FDialogueContext& Context, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnDialogueAttached
	struct UAudioComponent* SpawnDialogueAtLocation(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext& Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnDialogueAtLocation
	struct UAudioComponent* SpawnDialogue2D(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnDialogue2D
	struct UDecalComponent* SpawnDecalAttached(struct UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, char EAttachLocation LocationType, float LifeSpan); // Function Engine.GameplayStatics.SpawnDecalAttached
	struct UDecalComponent* SpawnDecalAtLocation(struct UObject* WorldContextObject, struct UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct FVector Location, struct FRotator Rotation, float LifeSpan); // Function Engine.GameplayStatics.SpawnDecalAtLocation
	void SetWorldOriginLocation(struct UObject* WorldContextObject, struct FIntVector NewLocation); // Function Engine.GameplayStatics.SetWorldOriginLocation
	void SetViewportMouseCaptureMode(struct UObject* WorldContextObject, uint8_t  MouseCaptureMode); // Function Engine.GameplayStatics.SetViewportMouseCaptureMode
	void SetSubtitlesEnabled(bool bEnabled); // Function Engine.GameplayStatics.SetSubtitlesEnabled
	void SetSoundMixClassOverride(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier, struct USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren); // Function Engine.GameplayStatics.SetSoundMixClassOverride
	void SetSoundClassDistanceScale(struct UObject* WorldContextObject, struct USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec); // Function Engine.GameplayStatics.SetSoundClassDistanceScale
	void SetPlayerControllerID(struct APlayerController* Player, int32_t ControllerId); // Function Engine.GameplayStatics.SetPlayerControllerID
	void SetMaxAudioChannelsScaled(struct UObject* WorldContextObject, float MaxChannelCountScale); // Function Engine.GameplayStatics.SetMaxAudioChannelsScaled
	void SetGlobalTimeDilation(struct UObject* WorldContextObject, float TimeDilation); // Function Engine.GameplayStatics.SetGlobalTimeDilation
	void SetGlobalPitchModulation(struct UObject* WorldContextObject, float PitchModulation, float TimeSec); // Function Engine.GameplayStatics.SetGlobalPitchModulation
	void SetGlobalListenerFocusParameters(struct UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale); // Function Engine.GameplayStatics.SetGlobalListenerFocusParameters
	bool SetGamePaused(struct UObject* WorldContextObject, bool bPaused); // Function Engine.GameplayStatics.SetGamePaused
	void SetForceDisableSplitscreen(struct UObject* WorldContextObject, bool bDisable); // Function Engine.GameplayStatics.SetForceDisableSplitscreen
	void SetEnableWorldRendering(struct UObject* WorldContextObject, bool bEnable); // Function Engine.GameplayStatics.SetEnableWorldRendering
	void SetBaseSoundMix(struct UObject* WorldContextObject, struct USoundMix* InSoundMix); // Function Engine.GameplayStatics.SetBaseSoundMix
	bool SaveGameToSlot(struct USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex); // Function Engine.GameplayStatics.SaveGameToSlot
	void RemovePlayer(struct APlayerController* Player, bool bDestroyPawn); // Function Engine.GameplayStatics.RemovePlayer
	struct FVector RebaseZeroOriginOntoLocal(struct UObject* WorldContextObject, struct FVector WorldLocation); // Function Engine.GameplayStatics.RebaseZeroOriginOntoLocal
	struct FVector RebaseLocalOriginOntoZero(struct UObject* WorldContextObject, struct FVector WorldLocation); // Function Engine.GameplayStatics.RebaseLocalOriginOntoZero
	void PushSoundMixModifier(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier); // Function Engine.GameplayStatics.PushSoundMixModifier
	bool ProjectWorldToScreen(struct APlayerController* Player, struct FVector& WorldPosition, struct FVector2D& screenPosition, bool bPlayerViewportRelative); // Function Engine.GameplayStatics.ProjectWorldToScreen
	void PrimeSound(struct USoundBase* InSound); // Function Engine.GameplayStatics.PrimeSound
	void PrimeAllSoundsInSoundClass(struct USoundClass* InSoundClass); // Function Engine.GameplayStatics.PrimeAllSoundsInSoundClass
	void PopSoundMixModifier(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier); // Function Engine.GameplayStatics.PopSoundMixModifier
	void PlayWorldCameraShake(struct UObject* WorldContextObject, UCameraShakeBase* Shake, struct FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter); // Function Engine.GameplayStatics.PlayWorldCameraShake
	void PlaySoundAtLocation(struct UObject* WorldContextObject, struct USoundBase* Sound, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, struct AActor* OwningActor); // Function Engine.GameplayStatics.PlaySoundAtLocation
	void PlaySound2D(struct UObject* WorldContextObject, struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundConcurrency* ConcurrencySettings, struct AActor* OwningActor, bool bIsUISound); // Function Engine.GameplayStatics.PlaySound2D
	void PlayDialogueAtLocation(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext& Context, struct FVector Location, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings); // Function Engine.GameplayStatics.PlayDialogueAtLocation
	void PlayDialogue2D(struct UObject* WorldContextObject, struct UDialogueWave* Dialogue, struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime); // Function Engine.GameplayStatics.PlayDialogue2D
	struct FString ParseOption(struct FString Options, struct FString Key); // Function Engine.GameplayStatics.ParseOption
	void OpenLevelBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, bool bAbsolute, struct FString Options); // Function Engine.GameplayStatics.OpenLevelBySoftObjectPtr
	void OpenLevel(struct UObject* WorldContextObject, struct FName LevelName, bool bAbsolute, struct FString Options); // Function Engine.GameplayStatics.OpenLevel
	struct FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, struct FVector Location, struct FVector ImpactPoint, struct FVector Normal, struct FVector ImpactNormal, struct UPhysicalMaterial* PhysMat, struct AActor* HitActor, struct UPrimitiveComponent* HitComponent, struct FName HitBoneName, int32_t HitItem, int32_t ElementIndex, int32_t FaceIndex, struct FVector TraceStart, struct FVector TraceEnd); // Function Engine.GameplayStatics.MakeHitResult
	void LoadStreamLevelBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo); // Function Engine.GameplayStatics.LoadStreamLevelBySoftObjectPtr
	void LoadStreamLevel(struct UObject* WorldContextObject, struct FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, struct FLatentActionInfo LatentInfo); // Function Engine.GameplayStatics.LoadStreamLevel
	struct USaveGame* LoadGameFromSlot(struct FString SlotName, int32_t UserIndex); // Function Engine.GameplayStatics.LoadGameFromSlot
	bool IsSplitscreenForceDisabled(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.IsSplitscreenForceDisabled
	bool IsGamePaused(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.IsGamePaused
	bool HasOption(struct FString Options, struct FString InKey); // Function Engine.GameplayStatics.HasOption
	bool HasLaunchOption(struct FString OptionToCheck); // Function Engine.GameplayStatics.HasLaunchOption
	int32_t GrassOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Engine.GameplayStatics.GrassOverlappingSphereCount
	struct FIntVector GetWorldOriginLocation(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetWorldOriginLocation
	float GetWorldDeltaSeconds(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetWorldDeltaSeconds
	void GetViewProjectionMatrix(struct FMinimalViewInfo DesiredView, struct FMatrix& ViewMatrix, struct FMatrix& ProjectionMatrix, struct FMatrix& ViewProjectionMatrix); // Function Engine.GameplayStatics.GetViewProjectionMatrix
	uint8_t  GetViewportMouseCaptureMode(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetViewportMouseCaptureMode
	float GetUnpausedTimeSeconds(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetUnpausedTimeSeconds
	float GetTimeSeconds(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetTimeSeconds
	char EPhysicalSurface GetSurfaceType(struct FHitResult& Hit); // Function Engine.GameplayStatics.GetSurfaceType
	struct ULevelStreaming* GetStreamingLevel(struct UObject* WorldContextObject, struct FName PackageName); // Function Engine.GameplayStatics.GetStreamingLevel
	float GetRealTimeSeconds(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetRealTimeSeconds
	struct APawn* GetPlayerPawn(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function Engine.GameplayStatics.GetPlayerPawn
	int32_t GetPlayerControllerID(struct APlayerController* Player); // Function Engine.GameplayStatics.GetPlayerControllerID
	struct APlayerController* GetPlayerControllerFromID(struct UObject* WorldContextObject, int32_t ControllerId); // Function Engine.GameplayStatics.GetPlayerControllerFromID
	struct APlayerController* GetPlayerController(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function Engine.GameplayStatics.GetPlayerController
	struct ACharacter* GetPlayerCharacter(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function Engine.GameplayStatics.GetPlayerCharacter
	struct APlayerCameraManager* GetPlayerCameraManager(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function Engine.GameplayStatics.GetPlayerCameraManager
	struct FString GetPlatformName(); // Function Engine.GameplayStatics.GetPlatformName
	UObject* GetObjectClass(struct UObject* Object); // Function Engine.GameplayStatics.GetObjectClass
	int32_t GetMaxAudioChannelCount(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetMaxAudioChannelCount
	void GetKeyValue(struct FString Pair, struct FString& Key, struct FString& Value); // Function Engine.GameplayStatics.GetKeyValue
	int32_t GetIntOption(struct FString Options, struct FString Key, int32_t DefaultValue); // Function Engine.GameplayStatics.GetIntOption
	float GetGlobalTimeDilation(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetGlobalTimeDilation
	struct AGameStateBase* GetGameState(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetGameState
	struct AGameModeBase* GetGameMode(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetGameMode
	struct UGameInstance* GetGameInstance(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetGameInstance
	bool GetEnableWorldRendering(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetEnableWorldRendering
	struct UReverbEffect* GetCurrentReverbEffect(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetCurrentReverbEffect
	struct FString GetCurrentLevelName(struct UObject* WorldContextObject, bool bRemovePrefixString); // Function Engine.GameplayStatics.GetCurrentLevelName
	bool GetClosestListenerLocation(struct UObject* WorldContextObject, struct FVector& Location, float MaximumRange, bool bAllowAttenuationOverride, struct FVector& ListenerPosition); // Function Engine.GameplayStatics.GetClosestListenerLocation
	float GetAudioTimeSeconds(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.GetAudioTimeSeconds
	void GetAllActorsWithTag(struct UObject* WorldContextObject, struct FName Tag, struct TArray<struct AActor*>& OutActors); // Function Engine.GameplayStatics.GetAllActorsWithTag
	void GetAllActorsWithInterface(struct UObject* WorldContextObject, UInterface* Interface, struct TArray<struct AActor*>& OutActors); // Function Engine.GameplayStatics.GetAllActorsWithInterface
	void GetAllActorsOfClassWithTag(struct UObject* WorldContextObject, AActor* ActorClass, struct FName Tag, struct TArray<struct AActor*>& OutActors); // Function Engine.GameplayStatics.GetAllActorsOfClassWithTag
	void GetAllActorsOfClass(struct UObject* WorldContextObject, AActor* ActorClass, struct TArray<struct AActor*>& OutActors); // Function Engine.GameplayStatics.GetAllActorsOfClass
	struct AActor* GetActorOfClass(struct UObject* WorldContextObject, AActor* ActorClass); // Function Engine.GameplayStatics.GetActorOfClass
	void GetActorArrayBounds(struct TArray<struct AActor*>& Actors, bool bOnlyCollidingComponents, struct FVector& Center, struct FVector& BoxExtent); // Function Engine.GameplayStatics.GetActorArrayBounds
	struct FVector GetActorArrayAverageLocation(struct TArray<struct AActor*>& Actors); // Function Engine.GameplayStatics.GetActorArrayAverageLocation
	void GetAccurateRealTime(int32_t& Seconds, float& PartialSeconds); // Function Engine.GameplayStatics.GetAccurateRealTime
	void FlushLevelStreaming(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.FlushLevelStreaming
	struct AActor* FinishSpawningActor(struct AActor* Actor, struct FTransform& SpawnTransform); // Function Engine.GameplayStatics.FinishSpawningActor
	struct AActor* FindNearestActor(struct FVector Origin, struct TArray<struct AActor*>& ActorsToCheck, float& Distance); // Function Engine.GameplayStatics.FindNearestActor
	bool FindCollisionUV(struct FHitResult& Hit, int32_t UVChannel, struct FVector2D& UV); // Function Engine.GameplayStatics.FindCollisionUV
	void EnableLiveStreaming(bool Enable); // Function Engine.GameplayStatics.EnableLiveStreaming
	bool DoesSaveGameExist(struct FString SlotName, int32_t UserIndex); // Function Engine.GameplayStatics.DoesSaveGameExist
	bool DeprojectScreenToWorld(struct APlayerController* Player, struct FVector2D& screenPosition, struct FVector& WorldPosition, struct FVector& WorldDirection); // Function Engine.GameplayStatics.DeprojectScreenToWorld
	bool DeleteGameInSlot(struct FString SlotName, int32_t UserIndex); // Function Engine.GameplayStatics.DeleteGameInSlot
	void DeactivateReverbEffect(struct UObject* WorldContextObject, struct FName TagName); // Function Engine.GameplayStatics.DeactivateReverbEffect
	struct UAudioComponent* CreateSound2D(struct UObject* WorldContextObject, struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // Function Engine.GameplayStatics.CreateSound2D
	struct USaveGame* CreateSaveGameObject(USaveGame* SaveGameClass); // Function Engine.GameplayStatics.CreateSaveGameObject
	struct APlayerController* CreatePlayer(struct UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPlayerController); // Function Engine.GameplayStatics.CreatePlayer
	void ClearSoundMixModifiers(struct UObject* WorldContextObject); // Function Engine.GameplayStatics.ClearSoundMixModifiers
	void ClearSoundMixClassOverride(struct UObject* WorldContextObject, struct USoundMix* InSoundMixModifier, struct USoundClass* InSoundClass, float FadeOutTime); // Function Engine.GameplayStatics.ClearSoundMixClassOverride
	void CancelAsyncLoading(); // Function Engine.GameplayStatics.CancelAsyncLoading
	void BreakHitResult(struct FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, struct FVector& Location, struct FVector& ImpactPoint, struct FVector& Normal, struct FVector& ImpactNormal, struct UPhysicalMaterial*& PhysMat, struct AActor*& HitActor, struct UPrimitiveComponent*& HitComponent, struct FName& HitBoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, struct FVector& TraceStart, struct FVector& TraceEnd); // Function Engine.GameplayStatics.BreakHitResult
	bool BlueprintSuggestProjectileVelocity(struct UObject* WorldContextObject, struct FVector& TossVelocity, struct FVector StartLocation, struct FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, char ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug); // Function Engine.GameplayStatics.BlueprintSuggestProjectileVelocity
	bool Blueprint_PredictProjectilePath_ByTraceChannel(struct UObject* WorldContextObject, struct FHitResult& OutHit, struct TArray<struct FVector>& OutPathPositions, struct FVector& OutLastTraceDestination, struct FVector StartPos, struct FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, char ECollisionChannel TraceChannel, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ); // Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByTraceChannel
	bool Blueprint_PredictProjectilePath_ByObjectType(struct UObject* WorldContextObject, struct FHitResult& OutHit, struct TArray<struct FVector>& OutPathPositions, struct FVector& OutLastTraceDestination, struct FVector StartPos, struct FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, struct TArray<char EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, struct TArray<struct AActor*>& ActorsToIgnore, char EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ); // Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType
	bool Blueprint_PredictProjectilePath_Advanced(struct UObject* WorldContextObject, struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult& PredictResult); // Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_Advanced
	struct AActor* BeginSpawningActorFromClass(struct UObject* WorldContextObject, AActor* ActorClass, struct FTransform& SpawnTransform, bool bNoCollisionFail, struct AActor* Owner); // Function Engine.GameplayStatics.BeginSpawningActorFromClass
	struct AActor* BeginSpawningActorFromBlueprint(struct UObject* WorldContextObject, struct UBlueprint* Blueprint, struct FTransform& SpawnTransform, bool bNoCollisionFail); // Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint
	struct AActor* BeginDeferredActorSpawnFromClass(struct UObject* WorldContextObject, AActor* ActorClass, struct FTransform& SpawnTransform, uint8_t  CollisionHandlingOverride, struct AActor* Owner); // Function Engine.GameplayStatics.BeginDeferredActorSpawnFromClass
	bool AreSubtitlesEnabled(); // Function Engine.GameplayStatics.AreSubtitlesEnabled
	bool AreAnyListenersWithinRange(struct UObject* WorldContextObject, struct FVector& Location, float MaximumRange); // Function Engine.GameplayStatics.AreAnyListenersWithinRange
	bool ApplyRadialDamageWithFalloff(struct UObject* WorldContextObject, float BaseDamage, float MinimumDamage, struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, UDamageType* DamageTypeClass, struct TArray<struct AActor*>& IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, char ECollisionChannel DamagePreventionChannel); // Function Engine.GameplayStatics.ApplyRadialDamageWithFalloff
	bool ApplyRadialDamage(struct UObject* WorldContextObject, float BaseDamage, struct FVector& Origin, float DamageRadius, UDamageType* DamageTypeClass, struct TArray<struct AActor*>& IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, bool bDoFullDamage, char ECollisionChannel DamagePreventionChannel); // Function Engine.GameplayStatics.ApplyRadialDamage
	float ApplyPointDamage(struct AActor* DamagedActor, float BaseDamage, struct FVector& HitFromDirection, struct FHitResult& HitInfo, struct AController* eventInstigator, struct AActor* DamageCauser, UDamageType* DamageTypeClass); // Function Engine.GameplayStatics.ApplyPointDamage
	float ApplyDamage(struct AActor* DamagedActor, float BaseDamage, struct AController* eventInstigator, struct AActor* DamageCauser, UDamageType* DamageTypeClass); // Function Engine.GameplayStatics.ApplyDamage
	void AnnounceAccessibleString(struct FString AnnouncementString); // Function Engine.GameplayStatics.AnnounceAccessibleString
	void ActivateReverbEffect(struct UObject* WorldContextObject, struct UReverbEffect* ReverbEffect, struct FName TagName, float Priority, float Volume, float FadeTime); // Function Engine.GameplayStatics.ActivateReverbEffect
}; 



// Class Engine.Interface_PreviewMeshProvider
// Size: 0x28(Inherited: 0x28) 
struct UInterface_PreviewMeshProvider : public UInterface
{

}; 



// Class Engine.MaterialExpressionBumpOffset
// Size: 0x88(Inherited: 0x40) 
struct UMaterialExpressionBumpOffset : public UMaterialExpression
{
	struct FExpressionInput Coordinate;  // 0x40(0x14)
	struct FExpressionInput Height;  // 0x54(0x14)
	struct FExpressionInput HeightRatioInput;  // 0x68(0x14)
	float HeightRatio;  // 0x7C(0x4)
	float ReferencePlane;  // 0x80(0x4)
	uint32_t ConstCoordinate;  // 0x84(0x4)

}; 



// Class Engine.KismetTextLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetTextLibrary : public UBlueprintFunctionLibrary
{

	struct FText TextTrimTrailing(struct FText& InText); // Function Engine.KismetTextLibrary.TextTrimTrailing
	struct FText TextTrimPrecedingAndTrailing(struct FText& InText); // Function Engine.KismetTextLibrary.TextTrimPrecedingAndTrailing
	struct FText TextTrimPreceding(struct FText& InText); // Function Engine.KismetTextLibrary.TextTrimPreceding
	struct FText TextToUpper(struct FText& InText); // Function Engine.KismetTextLibrary.TextToUpper
	struct FText TextToLower(struct FText& InText); // Function Engine.KismetTextLibrary.TextToLower
	bool TextIsTransient(struct FText& InText); // Function Engine.KismetTextLibrary.TextIsTransient
	bool TextIsFromStringTable(struct FText& Text); // Function Engine.KismetTextLibrary.TextIsFromStringTable
	bool TextIsEmpty(struct FText& InText); // Function Engine.KismetTextLibrary.TextIsEmpty
	bool TextIsCultureInvariant(struct FText& InText); // Function Engine.KismetTextLibrary.TextIsCultureInvariant
	struct FText TextFromStringTable(struct FName TableId, struct FString Key); // Function Engine.KismetTextLibrary.TextFromStringTable
	bool StringTableIdAndKeyFromText(struct FText Text, struct FName& OutTableId, struct FString& OutKey); // Function Engine.KismetTextLibrary.StringTableIdAndKeyFromText
	struct FText PolyglotDataToText(struct FPolyglotTextData& PolyglotData); // Function Engine.KismetTextLibrary.PolyglotDataToText
	bool NotEqual_TextText(struct FText& A, struct FText& B); // Function Engine.KismetTextLibrary.NotEqual_TextText
	bool NotEqual_IgnoreCase_TextText(struct FText& A, struct FText& B); // Function Engine.KismetTextLibrary.NotEqual_IgnoreCase_TextText
	void IsPolyglotDataValid(struct FPolyglotTextData& PolyglotData, bool& IsValid, struct FText& errorMessage); // Function Engine.KismetTextLibrary.IsPolyglotDataValid
	struct FText GetEmptyText(); // Function Engine.KismetTextLibrary.GetEmptyText
	struct FText Format(struct FText InPattern, struct TArray<struct FFormatArgumentData> InArgs); // Function Engine.KismetTextLibrary.Format
	bool FindTextInLocalizationTable(struct FString Namespace, struct FString Key, struct FText& OutText); // Function Engine.KismetTextLibrary.FindTextInLocalizationTable
	bool EqualEqual_TextText(struct FText& A, struct FText& B); // Function Engine.KismetTextLibrary.EqualEqual_TextText
	bool EqualEqual_IgnoreCase_TextText(struct FText& A, struct FText& B); // Function Engine.KismetTextLibrary.EqualEqual_IgnoreCase_TextText
	struct FText Conv_VectorToText(struct FVector InVec); // Function Engine.KismetTextLibrary.Conv_VectorToText
	struct FText Conv_Vector2dToText(struct FVector2D InVec); // Function Engine.KismetTextLibrary.Conv_Vector2dToText
	struct FText Conv_TransformToText(struct FTransform& InTrans); // Function Engine.KismetTextLibrary.Conv_TransformToText
	struct FString Conv_TextToString(struct FText& InText); // Function Engine.KismetTextLibrary.Conv_TextToString
	struct FText Conv_StringToText(struct FString inString); // Function Engine.KismetTextLibrary.Conv_StringToText
	struct FText Conv_RotatorToText(struct FRotator InRot); // Function Engine.KismetTextLibrary.Conv_RotatorToText
	struct FText Conv_ObjectToText(struct UObject* InObj); // Function Engine.KismetTextLibrary.Conv_ObjectToText
	struct FText Conv_NameToText(struct FName InName); // Function Engine.KismetTextLibrary.Conv_NameToText
	struct FText Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // Function Engine.KismetTextLibrary.Conv_IntToText
	struct FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // Function Engine.KismetTextLibrary.Conv_Int64ToText
	struct FText Conv_FloatToText(float Value, char ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // Function Engine.KismetTextLibrary.Conv_FloatToText
	struct FText Conv_ColorToText(struct FLinearColor InColor); // Function Engine.KismetTextLibrary.Conv_ColorToText
	struct FText Conv_ByteToText(char Value); // Function Engine.KismetTextLibrary.Conv_ByteToText
	struct FText Conv_BoolToText(bool InBool); // Function Engine.KismetTextLibrary.Conv_BoolToText
	struct FText AsTimeZoneTime_DateTime(struct FDateTime& InDateTime, struct FString InTimeZone); // Function Engine.KismetTextLibrary.AsTimeZoneTime_DateTime
	struct FText AsTimeZoneDateTime_DateTime(struct FDateTime& InDateTime, struct FString InTimeZone); // Function Engine.KismetTextLibrary.AsTimeZoneDateTime_DateTime
	struct FText AsTimeZoneDate_DateTime(struct FDateTime& InDateTime, struct FString InTimeZone); // Function Engine.KismetTextLibrary.AsTimeZoneDate_DateTime
	struct FText AsTimespan_Timespan(struct FTimespan& InTimespan); // Function Engine.KismetTextLibrary.AsTimespan_Timespan
	struct FText AsTime_DateTime(struct FDateTime& In); // Function Engine.KismetTextLibrary.AsTime_DateTime
	struct FText AsPercent_Float(float Value, char ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits); // Function Engine.KismetTextLibrary.AsPercent_Float
	struct FText AsDateTime_DateTime(struct FDateTime& In); // Function Engine.KismetTextLibrary.AsDateTime_DateTime
	struct FText AsDate_DateTime(struct FDateTime& InDateTime); // Function Engine.KismetTextLibrary.AsDate_DateTime
	struct FText AsCurrencyBase(int32_t BaseValue, struct FString CurrencyCode); // Function Engine.KismetTextLibrary.AsCurrencyBase
	struct FText AsCurrency_Integer(int32_t Value, char ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode); // Function Engine.KismetTextLibrary.AsCurrency_Integer
	struct FText AsCurrency_Float(float Value, char ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, struct FString CurrencyCode); // Function Engine.KismetTextLibrary.AsCurrency_Float
}; 



// Class Engine.ParticleModuleColor
// Size: 0xB0(Inherited: 0x30) 
struct UParticleModuleColor : public UParticleModuleColorBase
{
	struct FRawDistributionVector StartColor;  // 0x30(0x48)
	struct FRawDistributionFloat StartAlpha;  // 0x78(0x30)
	char bClampAlpha : 1;  // 0xA8(0x1)
	char pad_168_1 : 7;  // 0xA8(0x1)
	char pad_169[8];  // 0xA9(0x8)

}; 



// Class Engine.MaterialExpressionTextureSampleParameter2DArray
// Size: 0x80(Inherited: 0x80) 
struct UMaterialExpressionTextureSampleParameter2DArray : public UMaterialExpressionTextureSampleParameter
{

}; 



// Class Engine.CurveFloat
// Size: 0xB8(Inherited: 0x30) 
struct UCurveFloat : public UCurveBase
{
	struct FRichCurve FloatCurve;  // 0x30(0x80)
	char pad_176_1 : 7;  // 0xB0(0x1)
	bool bIsEventCurve : 1;  // 0xB0(0x1)
	char pad_177[7];  // 0xB1(0x7)

	float GetFloatValue(float InTime); // Function Engine.CurveFloat.GetFloatValue
}; 



// Class Engine.KillZVolume
// Size: 0x268(Inherited: 0x268) 
struct AKillZVolume : public APhysicsVolume
{

}; 



// Class Engine.CurveLinearColor
// Size: 0x250(Inherited: 0x30) 
struct UCurveLinearColor : public UCurveBase
{
	struct FRichCurve FloatCurves[4];  // 0x30(0x200)
	float AdjustHue;  // 0x230(0x4)
	float AdjustSaturation;  // 0x234(0x4)
	float AdjustBrightness;  // 0x238(0x4)
	float AdjustBrightnessCurve;  // 0x23C(0x4)
	float AdjustVibrance;  // 0x240(0x4)
	float AdjustMinAlpha;  // 0x244(0x4)
	float AdjustMaxAlpha;  // 0x248(0x4)
	char pad_588[4];  // 0x24C(0x4)

	struct FLinearColor GetUnadjustedLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetUnadjustedLinearColorValue
	struct FLinearColor GetLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetLinearColorValue
	struct FLinearColor GetClampedLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetClampedLinearColorValue
}; 



// Class Engine.MaterialExpressionDivide
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionDivide : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	float ConstA;  // 0x68(0x4)
	float ConstB;  // 0x6C(0x4)

}; 



// Class Engine.CurveLinearColorAtlas
// Size: 0x1C0(Inherited: 0x1A0) 
struct UCurveLinearColorAtlas : public UTexture2D
{
	uint32_t TextureSize;  // 0x1A0(0x4)
	char bSquareResolution : 1;  // 0x1A4(0x1)
	char pad_420_1 : 7;  // 0x1A4(0x1)
	char pad_421[4];  // 0x1A5(0x4)
	uint32_t TextureHeight;  // 0x1A8(0x4)
	char pad_428[4];  // 0x1AC(0x4)
	struct TArray<struct UCurveLinearColor*> GradientCurves;  // 0x1B0(0x10)

	bool GetCurvePosition(struct UCurveLinearColor* InCurve, float& position); // Function Engine.CurveLinearColorAtlas.GetCurvePosition
}; 



// Class Engine.CurveSourceInterface
// Size: 0x28(Inherited: 0x28) 
struct UCurveSourceInterface : public UInterface
{

	float GetCurveValue(struct FName CurveName); // Function Engine.CurveSourceInterface.GetCurveValue
	void GetCurves(struct TArray<struct FNamedCurveValue>& OutValues); // Function Engine.CurveSourceInterface.GetCurves
	struct FName GetBindingName(); // Function Engine.CurveSourceInterface.GetBindingName
}; 



// Class Engine.MaterialExpressionSceneDepthWithoutWater
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionSceneDepthWithoutWater : public UMaterialExpression
{
	char EMaterialSceneAttributeInputMode InputMode;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	struct FExpressionInput Input;  // 0x44(0x14)
	struct FVector2D ConstInput;  // 0x58(0x8)
	float FallbackDepth;  // 0x60(0x4)
	char pad_100[4];  // 0x64(0x4)

}; 



// Class Engine.DataDrivenCVarEngineSubsystem
// Size: 0x40(Inherited: 0x30) 
struct UDataDrivenCVarEngineSubsystem : public UEngineSubsystem
{
	struct FMulticastInlineDelegate OnDataDrivenCVarDelegate;  // 0x30(0x10)

}; 



// Class Engine.InterpTrackFloatAnimBPParam
// Size: 0xB0(Inherited: 0x90) 
struct UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
	UObject* AnimBlueprintClass;  // 0x90(0x8)
	UAnimInstance* AnimClass;  // 0x98(0x8)
	struct FName ParamName;  // 0xA0(0x8)
	char pad_168[8];  // 0xA8(0x8)

}; 



// Class Engine.DataDrivenConsoleVariableSettings
// Size: 0x70(Inherited: 0x38) 
struct UDataDrivenConsoleVariableSettings : public UDeveloperSettings
{
	char pad_56[24];  // 0x38(0x18)
	struct TArray<struct FDataDrivenConsoleVariable> CVarsArray;  // 0x50(0x10)
	char pad_96[16];  // 0x60(0x10)

}; 



// Class Engine.DebugCameraController
// Size: 0x670(Inherited: 0x570) 
struct ADebugCameraController : public APlayerController
{
	char bShowSelectedInfo : 1;  // 0x570(0x1)
	char bIsFrozenRendering : 1;  // 0x570(0x1)
	char bIsOrbitingSelectedActor : 1;  // 0x570(0x1)
	char bOrbitPivotUseCenter : 1;  // 0x570(0x1)
	char bEnableBufferVisualization : 1;  // 0x570(0x1)
	char bEnableBufferVisualizationFullMode : 1;  // 0x570(0x1)
	char bIsBufferVisualizationInputSetup : 1;  // 0x570(0x1)
	char bLastDisplayEnabled : 1;  // 0x570(0x1)
	char pad_1393[7];  // 0x571(0x7)
	struct UDrawFrustumComponent* DrawFrustum;  // 0x578(0x8)
	struct AActor* SelectedActor;  // 0x580(0x8)
	struct UPrimitiveComponent* SelectedComponent;  // 0x588(0x8)
	struct FHitResult SelectedHitPoint;  // 0x590(0x88)
	struct APlayerController* OriginalControllerRef;  // 0x618(0x8)
	struct UPlayer* OriginalPlayer;  // 0x620(0x8)
	float SpeedScale;  // 0x628(0x4)
	float InitialMaxSpeed;  // 0x62C(0x4)
	float InitialAccel;  // 0x630(0x4)
	float InitialDecel;  // 0x634(0x4)
	char pad_1592[56];  // 0x638(0x38)

	void ToggleDisplay(); // Function Engine.DebugCameraController.ToggleDisplay
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo
	void SetPawnMovementSpeedScale(float NewSpeedScale); // Function Engine.DebugCameraController.SetPawnMovementSpeedScale
	void ReceiveOnDeactivate(struct APlayerController* RestoredPC); // Function Engine.DebugCameraController.ReceiveOnDeactivate
	void ReceiveOnActorSelected(struct AActor* NewSelectedActor, struct FVector& SelectHitLocation, struct FVector& SelectHitNormal, struct FHitResult& Hit); // Function Engine.DebugCameraController.ReceiveOnActorSelected
	void ReceiveOnActivate(struct APlayerController* OriginalPC); // Function Engine.DebugCameraController.ReceiveOnActivate
	struct AActor* GetSelectedActor(); // Function Engine.DebugCameraController.GetSelectedActor
}; 



// Class Engine.DebugCameraControllerSettings
// Size: 0x48(Inherited: 0x38) 
struct UDebugCameraControllerSettings : public UDeveloperSettings
{
	struct TArray<struct FDebugCameraControllerSettingsViewModeIndex> CycleViewModes;  // 0x38(0x10)

}; 



// Class Engine.DecalComponent
// Size: 0x240(Inherited: 0x200) 
struct UDecalComponent : public USceneComponent
{
	struct UMaterialInterface* DecalMaterial;  // 0x1F8(0x8)
	int32_t sortOrder;  // 0x200(0x4)
	float FadeScreenSize;  // 0x204(0x4)
	float FadeStartDelay;  // 0x208(0x4)
	float FadeDuration;  // 0x20C(0x4)
	float FadeInDuration;  // 0x210(0x4)
	float FadeInStartDelay;  // 0x214(0x4)
	char bDestroyOwnerAfterFade : 1;  // 0x218(0x1)
	struct FVector DecalSize;  // 0x21C(0xC)
	char pad_556_1 : 7;  // 0x22C(0x1)
	char pad_557[20];  // 0x22D(0x14)

	void SetSortOrder(int32_t Value); // Function Engine.DecalComponent.SetSortOrder
	void SetFadeScreenSize(float NewFadeScreenSize); // Function Engine.DecalComponent.SetFadeScreenSize
	void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade); // Function Engine.DecalComponent.SetFadeOut
	void SetFadeIn(float StartDelay, float Duaration); // Function Engine.DecalComponent.SetFadeIn
	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // Function Engine.DecalComponent.SetDecalMaterial
	float GetFadeStartDelay(); // Function Engine.DecalComponent.GetFadeStartDelay
	float GetFadeInStartDelay(); // Function Engine.DecalComponent.GetFadeInStartDelay
	float GetFadeInDuration(); // Function Engine.DecalComponent.GetFadeInDuration
	float GetFadeDuration(); // Function Engine.DecalComponent.GetFadeDuration
	struct UMaterialInterface* GetDecalMaterial(); // Function Engine.DecalComponent.GetDecalMaterial
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance
}; 



// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x60(Inherited: 0x28) 
struct UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base
{
	struct USoundWave* SoundWave;  // 0x28(0x8)
	char pad_48[48];  // 0x30(0x30)

}; 



// Class Engine.PhysicsVolume
// Size: 0x268(Inherited: 0x258) 
struct APhysicsVolume : public AVolume
{
	float TerminalVelocity;  // 0x258(0x4)
	int32_t Priority;  // 0x25C(0x4)
	float FluidFriction;  // 0x260(0x4)
	char bWaterVolume : 1;  // 0x264(0x1)
	char bPhysicsOnContact : 1;  // 0x264(0x1)
	char pad_612_1 : 6;  // 0x264(0x1)
	char pad_613[4];  // 0x265(0x4)

}; 



// Class Engine.DemoNetDriver
// Size: 0x12E8(Inherited: 0x770) 
struct UDemoNetDriver : public UNetDriver
{
	char pad_1904[248];  // 0x770(0xF8)
	struct TMap<struct FString, struct FRollbackNetStartupActorInfo> RollbackNetStartupActors;  // 0x868(0x50)
	char pad_2232[348];  // 0x8B8(0x15C)
	float CheckpointSaveMaxMSPerFrame;  // 0xA14(0x4)
	char pad_2584[32];  // 0xA18(0x20)
	struct TArray<struct FMulticastRecordOptions> MulticastRecordOptions;  // 0xA38(0x10)
	char pad_2632_1 : 7;  // 0xA48(0x1)
	bool bIsLocalReplay : 1;  // 0xA48(0x1)
	char pad_2633[7];  // 0xA49(0x7)
	struct TArray<struct APlayerController*> SpectatorControllers;  // 0xA50(0x10)
	char pad_2656[2184];  // 0xA60(0x888)

}; 



// Class Engine.MaterialExpressionTextureObjectParameter
// Size: 0x80(Inherited: 0x80) 
struct UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{

}; 



// Class Engine.MaterialExpressionShadingModel
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionShadingModel : public UMaterialExpression
{
	char EMaterialShadingModel ShadingModel;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 



// Class Engine.PendingNetGame
// Size: 0xC0(Inherited: 0x28) 
struct UPendingNetGame : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UNetDriver* NetDriver;  // 0x30(0x8)
	struct UDemoNetDriver* DemoNetDriver;  // 0x38(0x8)
	char pad_64[128];  // 0x40(0x80)

}; 



// Class Engine.DemoPendingNetGame
// Size: 0xC0(Inherited: 0xC0) 
struct UDemoPendingNetGame : public UPendingNetGame
{

}; 



// Class Engine.TextureLODSettings
// Size: 0x38(Inherited: 0x28) 
struct UTextureLODSettings : public UObject
{
	struct TArray<struct FTextureLODGroup> TextureLODGroups;  // 0x28(0x10)

}; 



// Class Engine.SystemTimeTimecodeProvider
// Size: 0x40(Inherited: 0x30) 
struct USystemTimeTimecodeProvider : public UTimecodeProvider
{
	struct FFrameRate FrameRate;  // 0x30(0x8)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bGenerateFullFrame : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool bUseHighPerformanceClock : 1;  // 0x39(0x1)
	char pad_58[6];  // 0x3A(0x6)

}; 



// Class Engine.DeviceProfile
// Size: 0xA8(Inherited: 0x38) 
struct UDeviceProfile : public UTextureLODSettings
{
	struct FString DeviceType;  // 0x38(0x10)
	struct FString BaseProfileName;  // 0x48(0x10)
	struct UObject* Parent;  // 0x58(0x8)
	char pad_96[40];  // 0x60(0x28)
	struct TArray<struct FString> CVars;  // 0x88(0x10)
	char pad_152[16];  // 0x98(0x10)

}; 



// Class Engine.MaterialExpressionFrac
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionFrac : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.DeviceProfileFragment
// Size: 0x38(Inherited: 0x28) 
struct UDeviceProfileFragment : public UObject
{
	char pad_40[16];  // 0x28(0x10)

}; 



// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xB0(Inherited: 0x30) 
struct UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
	char Positive_X : 1;  // 0x30(0x1)
	char Positive_Y : 1;  // 0x30(0x1)
	char Positive_Z : 1;  // 0x30(0x1)
	char Negative_X : 1;  // 0x30(0x1)
	char Negative_Y : 1;  // 0x30(0x1)
	char Negative_Z : 1;  // 0x30(0x1)
	char SurfaceOnly : 1;  // 0x30(0x1)
	char Velocity : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct FRawDistributionFloat VelocityScale;  // 0x38(0x30)
	struct FRawDistributionVector StartLocation;  // 0x68(0x48)

}; 



// Class Engine.DeviceProfileManager
// Size: 0xC8(Inherited: 0x28) 
struct UDeviceProfileManager : public UObject
{
	struct TArray<struct UObject*> Profiles;  // 0x28(0x10)
	char pad_56[144];  // 0x38(0x90)

}; 



// Class Engine.MaterialExpressionTangentOutput
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.DistributionFloat
// Size: 0x38(Inherited: 0x30) 
struct UDistributionFloat : public UDistribution
{
	char bCanBeBaked : 1;  // 0x30(0x1)
	char pad_48_1 : 1;  // 0x30(0x1)
	char bBakedDataSuccesfully : 1;  // 0x30(0x1)
	char pad_48_2 : 5;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)

}; 



// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionSkyAtmosphereLightDirection : public UMaterialExpression
{
	int32_t LightIndex;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 



// Class Engine.DistributionFloatConstant
// Size: 0x40(Inherited: 0x38) 
struct UDistributionFloatConstant : public UDistributionFloat
{
	float Constant;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.ParticleModuleCollisionBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleCollisionBase : public UParticleModule
{

}; 



// Class Engine.DistributionFloatConstantCurve
// Size: 0x50(Inherited: 0x38) 
struct UDistributionFloatConstantCurve : public UDistributionFloat
{
	struct FInterpCurveFloat ConstantCurve;  // 0x38(0x18)

}; 



// Class Engine.DistributionFloatParameterBase
// Size: 0x60(Inherited: 0x40) 
struct UDistributionFloatParameterBase : public UDistributionFloatConstant
{
	struct FName ParameterName;  // 0x40(0x8)
	float MinInput;  // 0x48(0x4)
	float MaxInput;  // 0x4C(0x4)
	float MinOutput;  // 0x50(0x4)
	float MaxOutput;  // 0x54(0x4)
	char DistributionParamMode ParamMode;  // 0x58(0x1)
	char pad_89[7];  // 0x59(0x7)

}; 



// Class Engine.DistributionFloatUniform
// Size: 0x40(Inherited: 0x38) 
struct UDistributionFloatUniform : public UDistributionFloat
{
	float Min;  // 0x38(0x4)
	float Max;  // 0x3C(0x4)

}; 



// Class Engine.DistributionVector
// Size: 0x38(Inherited: 0x30) 
struct UDistributionVector : public UDistribution
{
	char bCanBeBaked : 1;  // 0x30(0x1)
	char bIsDirty : 1;  // 0x30(0x1)
	char bBakedDataSuccesfully : 1;  // 0x30(0x1)
	char pad_48_1 : 5;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)

}; 



// Class Engine.LocalMessage
// Size: 0x28(Inherited: 0x28) 
struct ULocalMessage : public UObject
{

}; 



// Class Engine.DistributionVectorConstant
// Size: 0x50(Inherited: 0x38) 
struct UDistributionVectorConstant : public UDistributionVector
{
	struct FVector Constant;  // 0x38(0xC)
	char bLockAxes : 1;  // 0x44(0x1)
	char pad_68_1 : 7;  // 0x44(0x1)
	char pad_69[4];  // 0x45(0x4)
	char EDistributionVectorLockFlags LockedAxes;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 



// Class Engine.DistributionVectorConstantCurve
// Size: 0x58(Inherited: 0x38) 
struct UDistributionVectorConstantCurve : public UDistributionVector
{
	struct FInterpCurveVector ConstantCurve;  // 0x38(0x18)
	char bLockAxes : 1;  // 0x50(0x1)
	char pad_80_1 : 7;  // 0x50(0x1)
	char pad_81[4];  // 0x51(0x4)
	char EDistributionVectorLockFlags LockedAxes;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)

}; 



// Class Engine.DistributionVectorParameterBase
// Size: 0x90(Inherited: 0x50) 
struct UDistributionVectorParameterBase : public UDistributionVectorConstant
{
	struct FName ParameterName;  // 0x50(0x8)
	struct FVector MinInput;  // 0x58(0xC)
	struct FVector MaxInput;  // 0x64(0xC)
	struct FVector MinOutput;  // 0x70(0xC)
	struct FVector MaxOutput;  // 0x7C(0xC)
	char DistributionParamMode ParamModes[3];  // 0x88(0x3)
	char pad_139[5];  // 0x8B(0x5)

}; 



// Class Engine.InterpTrackInstLinearColorProp
// Size: 0x68(Inherited: 0x50) 
struct UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
	char pad_80[8];  // 0x50(0x8)
	struct FLinearColor ResetColor;  // 0x58(0x10)

}; 



// Class Engine.DistributionVectorUniformCurve
// Size: 0x60(Inherited: 0x38) 
struct UDistributionVectorUniformCurve : public UDistributionVector
{
	struct FInterpCurveTwoVectors ConstantCurve;  // 0x38(0x18)
	char bLockAxes1 : 1;  // 0x50(0x1)
	char bLockAxes2 : 1;  // 0x50(0x1)
	char pad_80_1 : 6;  // 0x50(0x1)
	char pad_81[4];  // 0x51(0x4)
	char EDistributionVectorLockFlags LockedAxes[2];  // 0x54(0x2)
	char EDistributionVectorMirrorFlags MirrorFlags[3];  // 0x56(0x3)
	char pad_89[3];  // 0x59(0x3)
	char bUseExtremes : 1;  // 0x5C(0x1)
	char pad_92_1 : 7;  // 0x5C(0x1)
	char pad_93[4];  // 0x5D(0x4)

}; 



// Class Engine.MaterialExpressionObjectBounds
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionObjectBounds : public UMaterialExpression
{

}; 



// Class Engine.SphereComponent
// Size: 0x470(Inherited: 0x470) 
struct USphereComponent : public UShapeComponent
{
	float SphereRadius;  // 0x468(0x4)

	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps); // Function Engine.SphereComponent.SetSphereRadius
	float GetUnscaledSphereRadius(); // Function Engine.SphereComponent.GetUnscaledSphereRadius
	float GetShapeScale(); // Function Engine.SphereComponent.GetShapeScale
	float GetScaledSphereRadius(); // Function Engine.SphereComponent.GetScaledSphereRadius
}; 



// Class Engine.Layer
// Size: 0x48(Inherited: 0x28) 
struct ULayer : public UObject
{
	struct FName LayerName;  // 0x28(0x8)
	char bIsVisible : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)
	struct TArray<struct FLayerActorStats> ActorStats;  // 0x38(0x10)

}; 



// Class Engine.MaterialExpressionCameraPositionWS
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionCameraPositionWS : public UMaterialExpression
{

}; 



// Class Engine.InterpTrackVectorBase
// Size: 0x90(Inherited: 0x70) 
struct UInterpTrackVectorBase : public UInterpTrack
{
	struct FInterpCurveVector VectorTrack;  // 0x70(0x18)
	float CurveTension;  // 0x88(0x4)
	char pad_140[4];  // 0x8C(0x4)

}; 



// Class Engine.DrawSphereComponent
// Size: 0x470(Inherited: 0x470) 
struct UDrawSphereComponent : public USphereComponent
{

}; 



// Class Engine.ParticleModuleParameterDynamic
// Size: 0x48(Inherited: 0x30) 
struct UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
	struct TArray<struct FEmitterDynamicParameter> DynamicParams;  // 0x30(0x10)
	int32_t UpdateFlags;  // 0x40(0x4)
	char bUsesVelocity : 1;  // 0x44(0x1)
	char pad_68_1 : 7;  // 0x44(0x1)
	char pad_69[4];  // 0x45(0x4)

}; 



// Class Engine.MaterialExpressionInverseLinearInterpolate
// Size: 0x90(Inherited: 0x40) 
struct UMaterialExpressionInverseLinearInterpolate : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	struct FExpressionInput Value;  // 0x68(0x14)
	float ConstA;  // 0x7C(0x4)
	float ConstB;  // 0x80(0x4)
	float ConstValue;  // 0x84(0x4)
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bClampResult : 1;  // 0x88(0x1)
	char pad_137[7];  // 0x89(0x7)

}; 



// Class Engine.EdGraph
// Size: 0x60(Inherited: 0x28) 
struct UEdGraph : public UObject
{
	UEdGraphSchema* Schema;  // 0x28(0x8)
	struct TArray<struct UEdGraphNode*> Nodes;  // 0x30(0x10)
	char bEditable : 1;  // 0x40(0x1)
	char bAllowDeletion : 1;  // 0x40(0x1)
	char bAllowRenaming : 1;  // 0x40(0x1)
	char pad_64_1 : 5;  // 0x40(0x1)
	char pad_65[32];  // 0x41(0x20)

}; 



// Class Engine.LightMapVirtualTexture
// Size: 0x28(Inherited: 0x28) 
struct ULightMapVirtualTexture : public UVirtualTexture
{

}; 



// Class Engine.MatineeAnimInterface
// Size: 0x28(Inherited: 0x28) 
struct UMatineeAnimInterface : public UInterface
{

}; 



// Class Engine.GraphNodeContextMenuContext
// Size: 0x50(Inherited: 0x28) 
struct UGraphNodeContextMenuContext : public UObject
{
	struct UBlueprint* Blueprint;  // 0x28(0x8)
	struct UEdGraph* Graph;  // 0x30(0x8)
	struct UEdGraphNode* Node;  // 0x38(0x8)
	char pad_64[8];  // 0x40(0x8)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bIsDebugging : 1;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 



// Class Engine.EdGraphNode
// Size: 0x98(Inherited: 0x28) 
struct UEdGraphNode : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins;  // 0x38(0x10)
	int32_t NodePosX;  // 0x48(0x4)
	int32_t NodePosY;  // 0x4C(0x4)
	int32_t NodeWidth;  // 0x50(0x4)
	int32_t NodeHeight;  // 0x54(0x4)
	char ENodeAdvancedPins AdvancedPinDisplay;  // 0x58(0x1)
	uint8_t  EnabledState;  // 0x59(0x1)
	char pad_90[1];  // 0x5A(0x1)
	char pad_91_1 : 1;  // 0x5B(0x1)
	char bDisplayAsDisabled : 1;  // 0x5B(0x1)
	char bUserSetEnabledState : 1;  // 0x5B(0x1)
	char pad_91_2 : 1;  // 0x5B(0x1)
	char bIsNodeEnabled : 1;  // 0x5B(0x1)
	char pad_91_3 : 1;  // 0x5B(0x1)
	char bHasCompilerMessage : 1;  // 0x5B(0x1)
	char pad_91_4 : 1;  // 0x5B(0x1)
	char pad_92[5];  // 0x5C(0x5)
	struct FString NodeComment;  // 0x60(0x10)
	int32_t ErrorType;  // 0x70(0x4)
	char pad_116[4];  // 0x74(0x4)
	struct FString ErrorMsg;  // 0x78(0x10)
	struct FGuid NodeGuid;  // 0x88(0x10)

}; 



// Class Engine.Emitter
// Size: 0x270(Inherited: 0x220) 
struct AEmitter : public AActor
{
	struct UParticleSystemComponent* ParticleSystemComponent;  // 0x220(0x8)
	char bDestroyOnSystemFinish : 1;  // 0x228(0x1)
	char bPostUpdateTickGroup : 1;  // 0x228(0x1)
	char bCurrentlyActive : 1;  // 0x228(0x1)
	char pad_552_1 : 5;  // 0x228(0x1)
	char pad_553[8];  // 0x229(0x8)
	struct FMulticastInlineDelegate OnParticleSpawn;  // 0x230(0x10)
	struct FMulticastInlineDelegate OnParticleBurst;  // 0x240(0x10)
	struct FMulticastInlineDelegate OnParticleDeath;  // 0x250(0x10)
	struct FMulticastInlineDelegate OnParticleCollide;  // 0x260(0x10)

	void ToggleActive(); // Function Engine.Emitter.ToggleActive
	void SetVectorParameter(struct FName ParameterName, struct FVector Param); // Function Engine.Emitter.SetVectorParameter
	void SetTemplate(struct UParticleSystem* NewTemplate); // Function Engine.Emitter.SetTemplate
	void SetMaterialParameter(struct FName ParameterName, struct UMaterialInterface* Param); // Function Engine.Emitter.SetMaterialParameter
	void SetFloatParameter(struct FName ParameterName, float Param); // Function Engine.Emitter.SetFloatParameter
	void SetColorParameter(struct FName ParameterName, struct FLinearColor Param); // Function Engine.Emitter.SetColorParameter
	void SetActorParameter(struct FName ParameterName, struct AActor* Param); // Function Engine.Emitter.SetActorParameter
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive
	void OnParticleSystemFinished(struct UParticleSystemComponent* FinishedComponent); // Function Engine.Emitter.OnParticleSystemFinished
	bool IsActive(); // Function Engine.Emitter.IsActive
	void Deactivate(); // Function Engine.Emitter.Deactivate
	void Activate(); // Function Engine.Emitter.Activate
}; 



// Class Engine.IntSerialization
// Size: 0x50(Inherited: 0x28) 
struct UIntSerialization : public UObject
{
	uint16_t UnsignedInt16Variable;  // 0x28(0x2)
	char pad_42[2];  // 0x2A(0x2)
	uint32_t UnsignedInt32Variable;  // 0x2C(0x4)
	uint64_t UnsignedInt64Variable;  // 0x30(0x8)
	int8_t SignedInt8Variable;  // 0x38(0x1)
	char pad_57[1];  // 0x39(0x1)
	int16_t SignedInt16Variable;  // 0x3A(0x2)
	char pad_60[4];  // 0x3C(0x4)
	int64_t SignedInt64Variable;  // 0x40(0x8)
	char UnsignedInt8Variable;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	int32_t SignedInt32Variable;  // 0x4C(0x4)

}; 



// Class Engine.SceneCaptureComponent2D
// Size: 0x8C0(Inherited: 0x2B0) 
struct USceneCaptureComponent2D : public USceneCaptureComponent
{
	char ECameraProjectionMode ProjectionType;  // 0x2B0(0x1)
	char pad_689[3];  // 0x2B1(0x3)
	float FOVAngle;  // 0x2B4(0x4)
	float OrthoWidth;  // 0x2B8(0x4)
	char pad_700[4];  // 0x2BC(0x4)
	struct UTextureRenderTarget2D* TextureTarget;  // 0x2C0(0x8)
	char ESceneCaptureCompositeMode CompositeMode;  // 0x2C8(0x1)
	char pad_713[7];  // 0x2C9(0x7)
	struct FPostProcessSettings PostProcessSettings;  // 0x2D0(0x560)
	float PostProcessBlendWeight;  // 0x830(0x4)
	char bOverride_CustomNearClippingPlane : 1;  // 0x834(0x1)
	char pad_2100_1 : 7;  // 0x834(0x1)
	char pad_2101[4];  // 0x835(0x4)
	float CustomNearClippingPlane;  // 0x838(0x4)
	char pad_2108_1 : 7;  // 0x83C(0x1)
	bool bUseCustomProjectionMatrix : 1;  // 0x83C(0x1)
	char pad_2109[3];  // 0x83D(0x3)
	struct FMatrix CustomProjectionMatrix;  // 0x840(0x40)
	char pad_2176_1 : 7;  // 0x880(0x1)
	bool bEnableClipPlane : 1;  // 0x880(0x1)
	char pad_2177[3];  // 0x881(0x3)
	struct FVector ClipPlaneBase;  // 0x884(0xC)
	struct FVector ClipPlaneNormal;  // 0x890(0xC)
	char bCameraCutThisFrame : 1;  // 0x89C(0x1)
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1;  // 0x89C(0x1)
	char pad_2204_1 : 6;  // 0x89C(0x1)
	char pad_2205[4];  // 0x89D(0x4)
	char pad_2208_1 : 7;  // 0x8A0(0x1)
	bool bDisableFlipCopyGLES : 1;  // 0x8A0(0x1)
	char pad_2209[31];  // 0x8A1(0x1F)

	void RemoveBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject); // Function Engine.SceneCaptureComponent2D.RemoveBlendable
	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene
	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // Function Engine.SceneCaptureComponent2D.AddOrUpdateBlendable
}; 



// Class Engine.ViewModeUtils
// Size: 0x28(Inherited: 0x28) 
struct UViewModeUtils : public UObject
{

}; 



// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x288(Inherited: 0x258) 
struct APrecomputedVisibilityOverrideVolume : public AVolume
{
	struct TArray<struct AActor*> OverrideVisibleActors;  // 0x258(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors;  // 0x268(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels;  // 0x278(0x10)

}; 



// Class Engine.EngineHandlerComponentFactory
// Size: 0x28(Inherited: 0x28) 
struct UEngineHandlerComponentFactory : public UHandlerComponentFactory
{

}; 



// Class Engine.EngineMessage
// Size: 0xA8(Inherited: 0x28) 
struct UEngineMessage : public ULocalMessage
{
	struct FString FailedPlaceMessage;  // 0x28(0x10)
	struct FString MaxedOutMessage;  // 0x38(0x10)
	struct FString EnteredMessage;  // 0x48(0x10)
	struct FString LeftMessage;  // 0x58(0x10)
	struct FString GlobalNameChange;  // 0x68(0x10)
	struct FString SpecEnteredMessage;  // 0x78(0x10)
	struct FString NewPlayerMessage;  // 0x88(0x10)
	struct FString NewSpecMessage;  // 0x98(0x10)

}; 



// Class Engine.InterpTrackColorProp
// Size: 0x98(Inherited: 0x90) 
struct UInterpTrackColorProp : public UInterpTrackVectorBase
{
	struct FName PropertyName;  // 0x90(0x8)

}; 



// Class Engine.SoundNodeOscillator
// Size: 0x70(Inherited: 0x48) 
struct USoundNodeOscillator : public USoundNode
{
	char bModulateVolume : 1;  // 0x48(0x1)
	char bModulatePitch : 1;  // 0x48(0x1)
	char pad_72_1 : 6;  // 0x48(0x1)
	char pad_73[4];  // 0x49(0x4)
	float AmplitudeMin;  // 0x4C(0x4)
	float AmplitudeMax;  // 0x50(0x4)
	float FrequencyMin;  // 0x54(0x4)
	float FrequencyMax;  // 0x58(0x4)
	float OffsetMin;  // 0x5C(0x4)
	float OffsetMax;  // 0x60(0x4)
	float CenterMin;  // 0x64(0x4)
	float CenterMax;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class Engine.EngineTypes
// Size: 0x28(Inherited: 0x28) 
struct UEngineTypes : public UObject
{

}; 



// Class Engine.Exporter
// Size: 0x78(Inherited: 0x28) 
struct UExporter : public UObject
{
	UObject* SupportedClass;  // 0x28(0x8)
	struct UObject* ExportRootScope;  // 0x30(0x8)
	struct TArray<struct FString> FormatExtension;  // 0x38(0x10)
	struct TArray<struct FString> FormatDescription;  // 0x48(0x10)
	int32_t PreferredFormatIndex;  // 0x58(0x4)
	int32_t TextIndent;  // 0x5C(0x4)
	char bText : 1;  // 0x60(0x1)
	char bSelectedOnly : 1;  // 0x60(0x1)
	char bForceFileOperations : 1;  // 0x60(0x1)
	char pad_96_1 : 5;  // 0x60(0x1)
	char pad_97[8];  // 0x61(0x8)
	struct UAssetExportTask* ExportTask;  // 0x68(0x8)
	char pad_112[8];  // 0x70(0x8)

	bool ScriptRunAssetExportTask(struct UAssetExportTask* Task); // Function Engine.Exporter.ScriptRunAssetExportTask
	bool RunAssetExportTasks(struct TArray<struct UAssetExportTask*>& ExportTasks); // Function Engine.Exporter.RunAssetExportTasks
	bool RunAssetExportTask(struct UAssetExportTask* Task); // Function Engine.Exporter.RunAssetExportTask
}; 



// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x150(Inherited: 0x150) 
struct ULevelStreamingAlwaysLoaded : public ULevelStreaming
{

}; 



// Class Engine.FontFace
// Size: 0x58(Inherited: 0x28) 
struct UFontFace : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct FString SourceFilename;  // 0x30(0x10)
	uint8_t  Hinting;  // 0x40(0x1)
	uint8_t  LoadingPolicy;  // 0x41(0x1)
	uint8_t  LayoutMethod;  // 0x42(0x1)
	char pad_67[21];  // 0x43(0x15)

}; 



// Class Engine.MaterialExpressionArctangent2
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionArctangent2 : public UMaterialExpression
{
	struct FExpressionInput Y;  // 0x40(0x14)
	struct FExpressionInput X;  // 0x54(0x14)

}; 



// Class Engine.ForceFeedbackComponent
// Size: 0x2E0(Inherited: 0x200) 
struct UForceFeedbackComponent : public USceneComponent
{
	struct UForceFeedbackEffect* ForceFeedbackEffect;  // 0x1F8(0x8)
	char bAutoDestroy : 1;  // 0x200(0x1)
	char bStopWhenOwnerDestroyed : 1;  // 0x200(0x1)
	char bLooping : 1;  // 0x200(0x1)
	char bIgnoreTimeDilation : 1;  // 0x200(0x1)
	char bOverrideAttenuation : 1;  // 0x200(0x1)
	float IntensityMultiplier;  // 0x204(0x4)
	struct UForceFeedbackAttenuation* AttenuationSettings;  // 0x208(0x8)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides;  // 0x210(0xB0)
	struct FMulticastInlineDelegate OnForceFeedbackFinished;  // 0x2C0(0x10)
	char pad_724_1 : 3;  // 0x2D4(0x1)
	char pad_725[12];  // 0x2D5(0xC)

	void Stop(); // Function Engine.ForceFeedbackComponent.Stop
	void SetIntensityMultiplier(float NewIntensityMultiplier); // Function Engine.ForceFeedbackComponent.SetIntensityMultiplier
	void SetForceFeedbackEffect(struct UForceFeedbackEffect* NewForceFeedbackEffect); // Function Engine.ForceFeedbackComponent.SetForceFeedbackEffect
	void Play(float StartTime); // Function Engine.ForceFeedbackComponent.Play
	bool BP_GetAttenuationSettingsToApply(struct FForceFeedbackAttenuationSettings& OutAttenuationSettings); // Function Engine.ForceFeedbackComponent.BP_GetAttenuationSettingsToApply
	void AdjustAttenuation(struct FForceFeedbackAttenuationSettings& InAttenuationSettings); // Function Engine.ForceFeedbackComponent.AdjustAttenuation
}; 



// Class Engine.ParticleModuleVectorFieldLocal
// Size: 0x68(Inherited: 0x30) 
struct UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
	struct UVectorField* VectorField;  // 0x30(0x8)
	struct FVector RelativeTranslation;  // 0x38(0xC)
	struct FRotator RelativeRotation;  // 0x44(0xC)
	struct FVector RelativeScale3D;  // 0x50(0xC)
	float Intensity;  // 0x5C(0x4)
	float Tightness;  // 0x60(0x4)
	char bIgnoreComponentTransform : 1;  // 0x64(0x1)
	char bTileX : 1;  // 0x64(0x1)
	char bTileY : 1;  // 0x64(0x1)
	char bTileZ : 1;  // 0x64(0x1)
	char bUseFixDT : 1;  // 0x64(0x1)
	char pad_100_1 : 3;  // 0x64(0x1)
	char pad_101[4];  // 0x65(0x4)

}; 



// Class Engine.ForceFeedbackEffect
// Size: 0x40(Inherited: 0x28) 
struct UForceFeedbackEffect : public UObject
{
	struct TArray<struct FForceFeedbackChannelDetails> ChannelDetails;  // 0x28(0x10)
	float Duration;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.GameEngine
// Size: 0xD70(Inherited: 0xD20) 
struct UGameEngine : public UEngine
{
	float MaxDeltaTime;  // 0xD20(0x4)
	float ServerFlushLogInterval;  // 0xD24(0x4)
	struct UGameInstance* GameInstance;  // 0xD28(0x8)
	char pad_3376[64];  // 0xD30(0x40)

}; 



// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
// Size: 0xD0(Inherited: 0x40) 
struct UMaterialExpressionRuntimeVirtualTextureOutput : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput BaseColor;  // 0x40(0x14)
	struct FExpressionInput Specular;  // 0x54(0x14)
	struct FExpressionInput Roughness;  // 0x68(0x14)
	struct FExpressionInput Normal;  // 0x7C(0x14)
	struct FExpressionInput WorldHeight;  // 0x90(0x14)
	struct FExpressionInput Opacity;  // 0xA4(0x14)
	struct FExpressionInput Mask;  // 0xB8(0x14)
	char pad_204[4];  // 0xCC(0x4)

}; 



// Class Engine.GameUserSettings
// Size: 0x120(Inherited: 0x28) 
struct UGameUserSettings : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bUseVSync : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bUseDynamicResolution : 1;  // 0x29(0x1)
	char pad_42[86];  // 0x2A(0x56)
	uint32_t ResolutionSizeX;  // 0x80(0x4)
	uint32_t ResolutionSizeY;  // 0x84(0x4)
	uint32_t LastUserConfirmedResolutionSizeX;  // 0x88(0x4)
	uint32_t LastUserConfirmedResolutionSizeY;  // 0x8C(0x4)
	int32_t WindowPosX;  // 0x90(0x4)
	int32_t WindowPosY;  // 0x94(0x4)
	int32_t FullscreenMode;  // 0x98(0x4)
	int32_t LastConfirmedFullscreenMode;  // 0x9C(0x4)
	int32_t PreferredFullscreenMode;  // 0xA0(0x4)
	uint32_t Version;  // 0xA4(0x4)
	int32_t AudioQualityLevel;  // 0xA8(0x4)
	int32_t LastConfirmedAudioQualityLevel;  // 0xAC(0x4)
	float FrameRateLimit;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)
	int32_t DesiredScreenWidth;  // 0xB8(0x4)
	char pad_188_1 : 7;  // 0xBC(0x1)
	bool bUseDesiredScreenHeight : 1;  // 0xBC(0x1)
	char pad_189[3];  // 0xBD(0x3)
	int32_t DesiredScreenHeight;  // 0xC0(0x4)
	int32_t LastUserConfirmedDesiredScreenWidth;  // 0xC4(0x4)
	int32_t LastUserConfirmedDesiredScreenHeight;  // 0xC8(0x4)
	float LastRecommendedScreenWidth;  // 0xCC(0x4)
	float LastRecommendedScreenHeight;  // 0xD0(0x4)
	float LastCPUBenchmarkResult;  // 0xD4(0x4)
	float LastGPUBenchmarkResult;  // 0xD8(0x4)
	char pad_220[4];  // 0xDC(0x4)
	struct TArray<float> LastCPUBenchmarkSteps;  // 0xE0(0x10)
	struct TArray<float> LastGPUBenchmarkSteps;  // 0xF0(0x10)
	float LastGPUBenchmarkMultiplier;  // 0x100(0x4)
	char pad_260_1 : 7;  // 0x104(0x1)
	bool bUseHDRDisplayOutput : 1;  // 0x104(0x1)
	char pad_261[3];  // 0x105(0x3)
	int32_t HDRDisplayOutputNits;  // 0x108(0x4)
	char pad_268[4];  // 0x10C(0x4)
	struct FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate;  // 0x110(0x10)

	void ValidateSettings(); // Function Engine.GameUserSettings.ValidateSettings
	bool SupportsHDRDisplayOutput(); // Function Engine.GameUserSettings.SupportsHDRDisplayOutput
	void SetVSyncEnabled(bool bEnable); // Function Engine.GameUserSettings.SetVSyncEnabled
	void SetVisualEffectQuality(int32_t Value); // Function Engine.GameUserSettings.SetVisualEffectQuality
	void SetViewDistanceQuality(int32_t Value); // Function Engine.GameUserSettings.SetViewDistanceQuality
	void SetToDefaults(); // Function Engine.GameUserSettings.SetToDefaults
	void SetTextureQuality(int32_t Value); // Function Engine.GameUserSettings.SetTextureQuality
	void SetShadowQuality(int32_t Value); // Function Engine.GameUserSettings.SetShadowQuality
	void SetShadingQuality(int32_t Value); // Function Engine.GameUserSettings.SetShadingQuality
	void SetScreenResolution(struct FIntPoint Resolution); // Function Engine.GameUserSettings.SetScreenResolution
	void SetResolutionScaleValueEx(float NewScaleValue); // Function Engine.GameUserSettings.SetResolutionScaleValueEx
	void SetResolutionScaleValue(int32_t NewScaleValue); // Function Engine.GameUserSettings.SetResolutionScaleValue
	void SetResolutionScaleNormalized(float NewScaleNormalized); // Function Engine.GameUserSettings.SetResolutionScaleNormalized
	void SetPostProcessingQuality(int32_t Value); // Function Engine.GameUserSettings.SetPostProcessingQuality
	void SetOverallScalabilityLevel(int32_t Value); // Function Engine.GameUserSettings.SetOverallScalabilityLevel
	void SetFullscreenMode(char EWindowMode InFullscreenMode); // Function Engine.GameUserSettings.SetFullscreenMode
	void SetFrameRateLimit(float NewLimit); // Function Engine.GameUserSettings.SetFrameRateLimit
	void SetFoliageQuality(int32_t Value); // Function Engine.GameUserSettings.SetFoliageQuality
	void SetDynamicResolutionEnabled(bool bEnable); // Function Engine.GameUserSettings.SetDynamicResolutionEnabled
	void SetBenchmarkFallbackValues(); // Function Engine.GameUserSettings.SetBenchmarkFallbackValues
	void SetAudioQualityLevel(int32_t QualityLevel); // Function Engine.GameUserSettings.SetAudioQualityLevel
	void SetAntiAliasingQuality(int32_t Value); // Function Engine.GameUserSettings.SetAntiAliasingQuality
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings
	void RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier); // Function Engine.GameUserSettings.RunHardwareBenchmark
	void RevertVideoMode(); // Function Engine.GameUserSettings.RevertVideoMode
	void ResetToCurrentSettings(); // Function Engine.GameUserSettings.ResetToCurrentSettings
	void LoadSettings(bool bForceReload); // Function Engine.GameUserSettings.LoadSettings
	bool IsVSyncEnabled(); // Function Engine.GameUserSettings.IsVSyncEnabled
	bool IsVSyncDirty(); // Function Engine.GameUserSettings.IsVSyncDirty
	bool IsScreenResolutionDirty(); // Function Engine.GameUserSettings.IsScreenResolutionDirty
	bool IsHDREnabled(); // Function Engine.GameUserSettings.IsHDREnabled
	bool IsFullscreenModeDirty(); // Function Engine.GameUserSettings.IsFullscreenModeDirty
	bool IsDynamicResolutionEnabled(); // Function Engine.GameUserSettings.IsDynamicResolutionEnabled
	bool IsDynamicResolutionDirty(); // Function Engine.GameUserSettings.IsDynamicResolutionDirty
	bool IsDirty(); // Function Engine.GameUserSettings.IsDirty
	int32_t GetVisualEffectQuality(); // Function Engine.GameUserSettings.GetVisualEffectQuality
	int32_t GetViewDistanceQuality(); // Function Engine.GameUserSettings.GetViewDistanceQuality
	int32_t GetTextureQuality(); // Function Engine.GameUserSettings.GetTextureQuality
	int32_t GetSyncInterval(); // Function Engine.GameUserSettings.GetSyncInterval
	int32_t GetShadowQuality(); // Function Engine.GameUserSettings.GetShadowQuality
	int32_t GetShadingQuality(); // Function Engine.GameUserSettings.GetShadingQuality
	struct FIntPoint GetScreenResolution(); // Function Engine.GameUserSettings.GetScreenResolution
	float GetResolutionScaleNormalized(); // Function Engine.GameUserSettings.GetResolutionScaleNormalized
	void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue); // Function Engine.GameUserSettings.GetResolutionScaleInformationEx
	void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32_t& CurrentScaleValue, int32_t& MinScaleValue, int32_t& MaxScaleValue); // Function Engine.GameUserSettings.GetResolutionScaleInformation
	float GetRecommendedResolutionScale(); // Function Engine.GameUserSettings.GetRecommendedResolutionScale
	char EWindowMode GetPreferredFullscreenMode(); // Function Engine.GameUserSettings.GetPreferredFullscreenMode
	int32_t GetPostProcessingQuality(); // Function Engine.GameUserSettings.GetPostProcessingQuality
	int32_t GetOverallScalabilityLevel(); // Function Engine.GameUserSettings.GetOverallScalabilityLevel
	struct FIntPoint GetLastConfirmedScreenResolution(); // Function Engine.GameUserSettings.GetLastConfirmedScreenResolution
	char EWindowMode GetLastConfirmedFullscreenMode(); // Function Engine.GameUserSettings.GetLastConfirmedFullscreenMode
	struct UGameUserSettings* GetGameUserSettings(); // Function Engine.GameUserSettings.GetGameUserSettings
	char EWindowMode GetFullscreenMode(); // Function Engine.GameUserSettings.GetFullscreenMode
	float GetFrameRateLimit(); // Function Engine.GameUserSettings.GetFrameRateLimit
	int32_t GetFramePace(); // Function Engine.GameUserSettings.GetFramePace
	int32_t GetFoliageQuality(); // Function Engine.GameUserSettings.GetFoliageQuality
	struct FIntPoint GetDesktopResolution(); // Function Engine.GameUserSettings.GetDesktopResolution
	struct FIntPoint GetDefaultWindowPosition(); // Function Engine.GameUserSettings.GetDefaultWindowPosition
	char EWindowMode GetDefaultWindowMode(); // Function Engine.GameUserSettings.GetDefaultWindowMode
	float GetDefaultResolutionScale(); // Function Engine.GameUserSettings.GetDefaultResolutionScale
	struct FIntPoint GetDefaultResolution(); // Function Engine.GameUserSettings.GetDefaultResolution
	int32_t GetCurrentHDRDisplayNits(); // Function Engine.GameUserSettings.GetCurrentHDRDisplayNits
	int32_t GetAudioQualityLevel(); // Function Engine.GameUserSettings.GetAudioQualityLevel
	int32_t GetAntiAliasingQuality(); // Function Engine.GameUserSettings.GetAntiAliasingQuality
	void EnableHDRDisplayOutput(bool bEnable, int32_t DisplayNits); // Function Engine.GameUserSettings.EnableHDRDisplayOutput
	void ConfirmVideoMode(); // Function Engine.GameUserSettings.ConfirmVideoMode
	void ApplySettings(bool bCheckForCommandLineOverrides); // Function Engine.GameUserSettings.ApplySettings
	void ApplyResolutionSettings(bool bCheckForCommandLineOverrides); // Function Engine.GameUserSettings.ApplyResolutionSettings
	void ApplyNonResolutionSettings(); // Function Engine.GameUserSettings.ApplyNonResolutionSettings
	void ApplyHardwareBenchmarkResults(); // Function Engine.GameUserSettings.ApplyHardwareBenchmarkResults
}; 



// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x70(Inherited: 0x38) 
struct UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
	struct UDistributionFloat* DragCoefficient;  // 0x38(0x8)
	struct FRawDistributionFloat DragCoefficientRaw;  // 0x40(0x30)

}; 



// Class Engine.GeneratedMeshAreaLight
// Size: 0x238(Inherited: 0x238) 
struct AGeneratedMeshAreaLight : public ASpotLight
{

}; 



// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x68(Inherited: 0x28) 
struct UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
	struct TArray<char> Amplitudes;  // 0x28(0x10)
	int32_t SampleRate;  // 0x38(0x4)
	char pad_60[44];  // 0x3C(0x2C)

}; 



// Class Engine.StereoLayerFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{

	void ShowSplashScreen(); // Function Engine.StereoLayerFunctionLibrary.ShowSplashScreen
	void SetSplashScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // Function Engine.StereoLayerFunctionLibrary.SetSplashScreen
	void HideSplashScreen(); // Function Engine.StereoLayerFunctionLibrary.HideSplashScreen
	void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled); // Function Engine.StereoLayerFunctionLibrary.EnableAutoLoadingSplashScreen
}; 



// Class Engine.HealthSnapshotBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary
{

	void StopPerformanceSnapshots(); // Function Engine.HealthSnapshotBlueprintLibrary.StopPerformanceSnapshots
	void StartPerformanceSnapshots(); // Function Engine.HealthSnapshotBlueprintLibrary.StartPerformanceSnapshots
	void LogPerformanceSnapshot(struct FString SnapshotTitle, bool bResetStats); // Function Engine.HealthSnapshotBlueprintLibrary.LogPerformanceSnapshot
}; 



// Class Engine.ImportanceSamplingLibrary
// Size: 0x28(Inherited: 0x28) 
struct UImportanceSamplingLibrary : public UBlueprintFunctionLibrary
{

	float RandomSobolFloat(int32_t Index, int32_t Dimension, float Seed); // Function Engine.ImportanceSamplingLibrary.RandomSobolFloat
	struct FVector RandomSobolCell3D(int32_t Index, int32_t NumCells, struct FVector Cell, struct FVector Seed); // Function Engine.ImportanceSamplingLibrary.RandomSobolCell3D
	struct FVector2D RandomSobolCell2D(int32_t Index, int32_t NumCells, struct FVector2D Cell, struct FVector2D Seed); // Function Engine.ImportanceSamplingLibrary.RandomSobolCell2D
	float NextSobolFloat(int32_t Index, int32_t Dimension, float PreviousValue); // Function Engine.ImportanceSamplingLibrary.NextSobolFloat
	struct FVector NextSobolCell3D(int32_t Index, int32_t NumCells, struct FVector PreviousValue); // Function Engine.ImportanceSamplingLibrary.NextSobolCell3D
	struct FVector2D NextSobolCell2D(int32_t Index, int32_t NumCells, struct FVector2D PreviousValue); // Function Engine.ImportanceSamplingLibrary.NextSobolCell2D
	struct FImportanceTexture MakeImportanceTexture(struct UTexture2D* Texture, char EImportanceWeight WeightingFunc); // Function Engine.ImportanceSamplingLibrary.MakeImportanceTexture
	void ImportanceSample(struct FImportanceTexture& Texture, struct FVector2D& Rand, int32_t Samples, float Intensity, struct FVector2D& SamplePosition, struct FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize); // Function Engine.ImportanceSamplingLibrary.ImportanceSample
	void BreakImportanceTexture(struct FImportanceTexture& ImportanceTexture, struct UTexture2D*& Texture, char EImportanceWeight& WeightingFunc); // Function Engine.ImportanceSamplingLibrary.BreakImportanceTexture
}; 



// Class Engine.ImportantToggleSettingInterface
// Size: 0x28(Inherited: 0x28) 
struct UImportantToggleSettingInterface : public UInterface
{

}; 



// Class Engine.PainCausingVolume
// Size: 0x290(Inherited: 0x268) 
struct APainCausingVolume : public APhysicsVolume
{
	char bPainCausing : 1;  // 0x268(0x1)
	char pad_616_1 : 7;  // 0x268(0x1)
	char pad_617[4];  // 0x269(0x4)
	float DamagePerSec;  // 0x26C(0x4)
	UDamageType* DamageType;  // 0x270(0x8)
	float PainInterval;  // 0x278(0x4)
	char bEntryPain : 1;  // 0x27C(0x1)
	char BACKUP_bPainCausing : 1;  // 0x27C(0x1)
	char pad_636_1 : 6;  // 0x27C(0x1)
	char pad_637[4];  // 0x27D(0x4)
	struct AController* DamageInstigator;  // 0x280(0x8)
	char pad_648[8];  // 0x288(0x8)

}; 



// Class Engine.InheritableComponentHandler
// Size: 0x48(Inherited: 0x28) 
struct UInheritableComponentHandler : public UObject
{
	struct TArray<struct FComponentOverrideRecord> Records;  // 0x28(0x10)
	struct TArray<struct UActorComponent*> UnnecessaryComponents;  // 0x38(0x10)

}; 



// Class Engine.MaterialExpressionNamedRerouteBase
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionNamedRerouteBase : public UMaterialExpressionRerouteBase
{

}; 



// Class Engine.InputDelegateBinding
// Size: 0x28(Inherited: 0x28) 
struct UInputDelegateBinding : public UDynamicBlueprintBinding
{

}; 



// Class Engine.InputActionDelegateBinding
// Size: 0x38(Inherited: 0x28) 
struct UInputActionDelegateBinding : public UInputDelegateBinding
{
	struct TArray<struct FBlueprintInputActionDelegateBinding> InputActionDelegateBindings;  // 0x28(0x10)

}; 



// Class Engine.ParticleModuleSpawn
// Size: 0xE8(Inherited: 0x38) 
struct UParticleModuleSpawn : public UParticleModuleSpawnBase
{
	struct FRawDistributionFloat Rate;  // 0x38(0x30)
	struct FRawDistributionFloat RateScale;  // 0x68(0x30)
	char EParticleBurstMethod ParticleBurstMethod;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)
	struct TArray<struct FParticleBurst> BurstList;  // 0xA0(0x10)
	struct FRawDistributionFloat BurstScale;  // 0xB0(0x30)
	char bApplyGlobalSpawnRateScale : 1;  // 0xE0(0x1)
	char pad_224_1 : 7;  // 0xE0(0x1)
	char pad_225[8];  // 0xE1(0x8)

}; 



// Class Engine.MaterialExpressionCollectionParameter
// Size: 0x60(Inherited: 0x40) 
struct UMaterialExpressionCollectionParameter : public UMaterialExpression
{
	struct UMaterialParameterCollection* Collection;  // 0x40(0x8)
	struct FName ParameterName;  // 0x48(0x8)
	struct FGuid ParameterId;  // 0x50(0x10)

}; 



// Class Engine.PluginCommandlet
// Size: 0xA0(Inherited: 0x80) 
struct UPluginCommandlet : public UCommandlet
{
	char pad_128[32];  // 0x80(0x20)

}; 



// Class Engine.InputAxisDelegateBinding
// Size: 0x38(Inherited: 0x28) 
struct UInputAxisDelegateBinding : public UInputDelegateBinding
{
	struct TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings;  // 0x28(0x10)

}; 



// Class Engine.InputAxisKeyDelegateBinding
// Size: 0x38(Inherited: 0x28) 
struct UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
	struct TArray<struct FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings;  // 0x28(0x10)

}; 



// Class Engine.ParticleModuleVelocity_Seeded
// Size: 0xD0(Inherited: 0xB0) 
struct UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0xB0(0x20)

}; 



// Class Engine.MaterialExpressionCosine
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionCosine : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	float Period;  // 0x54(0x4)

}; 



// Class Engine.InputTouchDelegateBinding
// Size: 0x38(Inherited: 0x28) 
struct UInputTouchDelegateBinding : public UInputDelegateBinding
{
	struct TArray<struct FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings;  // 0x28(0x10)

}; 



// Class Engine.MaterialExpressionFunctionInput
// Size: 0xC0(Inherited: 0x40) 
struct UMaterialExpressionFunctionInput : public UMaterialExpression
{
	struct FExpressionInput Preview;  // 0x40(0x14)
	struct FName InputName;  // 0x54(0x8)
	char pad_92[4];  // 0x5C(0x4)
	struct FString Description;  // 0x60(0x10)
	struct FGuid ID;  // 0x70(0x10)
	char EFunctionInputType InputType;  // 0x80(0x1)
	char pad_129[15];  // 0x81(0xF)
	struct FVector4 PreviewValue;  // 0x90(0x10)
	char bUsePreviewValueAsDefault : 1;  // 0xA0(0x1)
	char pad_160_1 : 7;  // 0xA0(0x1)
	char pad_161[4];  // 0xA1(0x4)
	int32_t SortPriority;  // 0xA4(0x4)
	char bCompilingFunctionPreview : 1;  // 0xA8(0x1)
	char pad_168_1 : 7;  // 0xA8(0x1)
	char pad_169[24];  // 0xA9(0x18)

}; 



// Class Engine.InterpCurveEdSetup
// Size: 0x40(Inherited: 0x28) 
struct UInterpCurveEdSetup : public UObject
{
	struct TArray<struct FCurveEdTab> Tabs;  // 0x28(0x10)
	int32_t ActiveTab;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.ParticleModuleBeamNoise
// Size: 0x190(Inherited: 0x30) 
struct UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
	char bLowFreq_Enabled : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[4];  // 0x31(0x4)
	int32_t Frequency;  // 0x34(0x4)
	int32_t Frequency_LowRange;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)
	struct FRawDistributionVector NoiseRange;  // 0x40(0x48)
	struct FRawDistributionFloat NoiseRangeScale;  // 0x88(0x30)
	char bNRScaleEmitterTime : 1;  // 0xB8(0x1)
	char pad_184_1 : 7;  // 0xB8(0x1)
	char pad_185[8];  // 0xB9(0x8)
	struct FRawDistributionVector NoiseSpeed;  // 0xC0(0x48)
	char bSmooth : 1;  // 0x108(0x1)
	char pad_264_1 : 7;  // 0x108(0x1)
	char pad_265[4];  // 0x109(0x4)
	float NoiseLockRadius;  // 0x10C(0x4)
	char bNoiseLock : 1;  // 0x110(0x1)
	char bOscillate : 1;  // 0x110(0x1)
	char pad_272_1 : 6;  // 0x110(0x1)
	char pad_273[4];  // 0x111(0x4)
	float NoiseLockTime;  // 0x114(0x4)
	float NoiseTension;  // 0x118(0x4)
	char bUseNoiseTangents : 1;  // 0x11C(0x1)
	char pad_284_1 : 7;  // 0x11C(0x1)
	char pad_285[4];  // 0x11D(0x4)
	struct FRawDistributionFloat NoiseTangentStrength;  // 0x120(0x30)
	int32_t NoiseTessellation;  // 0x150(0x4)
	char bTargetNoise : 1;  // 0x154(0x1)
	char pad_340_1 : 7;  // 0x154(0x1)
	char pad_341[4];  // 0x155(0x4)
	float FrequencyDistance;  // 0x158(0x4)
	char bApplyNoiseScale : 1;  // 0x15C(0x1)
	char pad_348_1 : 7;  // 0x15C(0x1)
	char pad_349[4];  // 0x15D(0x4)
	struct FRawDistributionFloat NoiseScale;  // 0x160(0x30)

}; 



// Class Engine.InterpFilter
// Size: 0x38(Inherited: 0x28) 
struct UInterpFilter : public UObject
{
	struct FString Caption;  // 0x28(0x10)

}; 



// Class Engine.TextureRenderTargetVolume
// Size: 0x1A0(Inherited: 0x180) 
struct UTextureRenderTargetVolume : public UTextureRenderTarget
{
	int32_t SizeX;  // 0x180(0x4)
	int32_t SizeY;  // 0x184(0x4)
	int32_t SizeZ;  // 0x188(0x4)
	struct FLinearColor ClearColor;  // 0x18C(0x10)
	char EPixelFormat OverrideFormat;  // 0x19C(0x1)
	char bHDR : 1;  // 0x19D(0x1)
	char bForceLinearGamma : 1;  // 0x19D(0x1)
	char pad_413_1 : 6;  // 0x19D(0x1)
	char pad_414[3];  // 0x19E(0x3)

}; 



// Class Engine.InterpFilter_Custom
// Size: 0x38(Inherited: 0x38) 
struct UInterpFilter_Custom : public UInterpFilter
{

}; 



// Class Engine.InterpTrackInstEvent
// Size: 0x30(Inherited: 0x28) 
struct UInterpTrackInstEvent : public UInterpTrackInst
{
	float LastUpdatePosition;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 



// Class Engine.RadialForceComponent
// Size: 0x230(Inherited: 0x200) 
struct URadialForceComponent : public USceneComponent
{
	float Radius;  // 0x1F8(0x4)
	char ERadialImpulseFalloff Falloff;  // 0x1FC(0x1)
	float ImpulseStrength;  // 0x200(0x4)
	char bImpulseVelChange : 1;  // 0x204(0x1)
	char bIgnoreOwningActor : 1;  // 0x204(0x1)
	float ForceStrength;  // 0x208(0x4)
	float DestructibleDamage;  // 0x20C(0x4)
	struct TArray<char EObjectTypeQuery> ObjectTypesToAffect;  // 0x210(0x10)
	char pad_545_1 : 6;  // 0x221(0x1)
	char pad_546[15];  // 0x222(0xF)

	void RemoveObjectTypeToAffect(char EObjectTypeQuery ObjectType); // Function Engine.RadialForceComponent.RemoveObjectTypeToAffect
	void FireImpulse(); // Function Engine.RadialForceComponent.FireImpulse
	void AddObjectTypeToAffect(char EObjectTypeQuery ObjectType); // Function Engine.RadialForceComponent.AddObjectTypeToAffect
}; 



// Class Engine.InterpGroup
// Size: 0x50(Inherited: 0x28) 
struct UInterpGroup : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct TArray<struct UInterpTrack*> InterpTracks;  // 0x30(0x10)
	struct FName GroupName;  // 0x40(0x8)
	struct FColor GroupColor;  // 0x48(0x4)
	char bCollapsed : 1;  // 0x4C(0x1)
	char bVisible : 1;  // 0x4C(0x1)
	char bIsFolder : 1;  // 0x4C(0x1)
	char bIsParented : 1;  // 0x4C(0x1)
	char bIsSelected : 1;  // 0x4C(0x1)
	char pad_76_1 : 3;  // 0x4C(0x1)
	char pad_77[4];  // 0x4D(0x4)

}; 



// Class Engine.InterpGroupDirector
// Size: 0x50(Inherited: 0x50) 
struct UInterpGroupDirector : public UInterpGroup
{

}; 



// Class Engine.KismetRenderingLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{

	void SetCastInsetShadowForAllAttachments(struct UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup); // Function Engine.KismetRenderingLibrary.SetCastInsetShadowForAllAttachments
	struct UTextureCube* RenderTargetCreateStaticTextureCubeEditorOnly(struct UTextureRenderTargetCube* RenderTarget, struct FString Name, char TextureCompressionSettings CompressionSettings, char TextureMipGenSettings MipSettings); // Function Engine.KismetRenderingLibrary.RenderTargetCreateStaticTextureCubeEditorOnly
	struct UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(struct UTextureRenderTarget2D* RenderTarget, struct FString Name, char TextureCompressionSettings CompressionSettings, char TextureMipGenSettings MipSettings); // Function Engine.KismetRenderingLibrary.RenderTargetCreateStaticTexture2DEditorOnly
	void ReleaseRenderTarget2D(struct UTextureRenderTarget2D* TextureRenderTarget); // Function Engine.KismetRenderingLibrary.ReleaseRenderTarget2D
	struct FColor ReadRenderTargetUV(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, float U, float V); // Function Engine.KismetRenderingLibrary.ReadRenderTargetUV
	struct FLinearColor ReadRenderTargetRawUV(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, float U, float V); // Function Engine.KismetRenderingLibrary.ReadRenderTargetRawUV
	struct FLinearColor ReadRenderTargetRawPixel(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y); // Function Engine.KismetRenderingLibrary.ReadRenderTargetRawPixel
	struct FColor ReadRenderTargetPixel(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y); // Function Engine.KismetRenderingLibrary.ReadRenderTargetPixel
	struct FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32_t Bone0, char Weight0, int32_t Bone1, char Weight1, int32_t Bone2, char Weight2, int32_t Bone3, char Weight3); // Function Engine.KismetRenderingLibrary.MakeSkinWeightInfo
	struct UTexture2D* ImportFileAsTexture2D(struct UObject* WorldContextObject, struct FString Filename); // Function Engine.KismetRenderingLibrary.ImportFileAsTexture2D
	struct UTexture2D* ImportBufferAsTexture2D(struct UObject* WorldContextObject, struct TArray<char>& Buffer); // Function Engine.KismetRenderingLibrary.ImportBufferAsTexture2D
	struct FLinearColor GetSunLightAtmosphereTransmittance(struct FVector Direction, struct USceneComponent* sunFogAtmosphereComponent); // Function Engine.KismetRenderingLibrary.GetSunLightAtmosphereTransmittance
	void ExportTexture2D(struct UObject* WorldContextObject, struct UTexture2D* Texture, struct FString FilePath, struct FString Filename); // Function Engine.KismetRenderingLibrary.ExportTexture2D
	void ExportRenderTarget(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct FString FilePath, struct FString Filename); // Function Engine.KismetRenderingLibrary.ExportRenderTarget
	void EndDrawCanvasToRenderTarget(struct UObject* WorldContextObject, struct FDrawToRenderTargetContext& Context); // Function Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget
	void DrawMaterialToRenderTarget(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct UMaterialInterface* Material); // Function Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget
	struct UTextureRenderTargetVolume* CreateRenderTargetVolume(struct UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Depth, char ETextureRenderTargetFormat Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps); // Function Engine.KismetRenderingLibrary.CreateRenderTargetVolume
	struct UTextureRenderTarget2DArray* CreateRenderTarget2DArray(struct UObject* WorldContextObject, int32_t Width, int32_t Height, int32_t Slices, char ETextureRenderTargetFormat Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps); // Function Engine.KismetRenderingLibrary.CreateRenderTarget2DArray
	struct UTextureRenderTarget2D* CreateRenderTarget2D(struct UObject* WorldContextObject, int32_t Width, int32_t Height, char ETextureRenderTargetFormat Format, struct FLinearColor ClearColor, bool bAutoGenerateMipMaps); // Function Engine.KismetRenderingLibrary.CreateRenderTarget2D
	void ConvertRenderTargetToTexture2DEditorOnly(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* RenderTarget, struct UTexture2D* Texture); // Function Engine.KismetRenderingLibrary.ConvertRenderTargetToTexture2DEditorOnly
	void ClearRenderTarget2D(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct FLinearColor ClearColor); // Function Engine.KismetRenderingLibrary.ClearRenderTarget2D
	void BreakSkinWeightInfo(struct FSkelMeshSkinWeightInfo InWeight, int32_t& Bone0, char& Weight0, int32_t& Bone1, char& Weight1, int32_t& Bone2, char& Weight2, int32_t& Bone3, char& Weight3); // Function Engine.KismetRenderingLibrary.BreakSkinWeightInfo
	void BeginDrawCanvasToRenderTarget(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* TextureRenderTarget, struct UCanvas*& Canvas, struct FVector2D& Size, struct FDrawToRenderTargetContext& Context); // Function Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget
}; 



// Class Engine.ParticleModuleAttractorParticle
// Size: 0xB0(Inherited: 0x30) 
struct UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
	struct FName EmitterName;  // 0x30(0x8)
	struct FRawDistributionFloat Range;  // 0x38(0x30)
	char bStrengthByDistance : 1;  // 0x68(0x1)
	char pad_104_1 : 7;  // 0x68(0x1)
	char pad_105[8];  // 0x69(0x8)
	struct FRawDistributionFloat Strength;  // 0x70(0x30)
	char bAffectBaseVelocity : 1;  // 0xA0(0x1)
	char pad_160_1 : 7;  // 0xA0(0x1)
	char pad_161[4];  // 0xA1(0x4)
	char EAttractorParticleSelectionMethod SelectionMethod;  // 0xA4(0x1)
	char pad_165[3];  // 0xA5(0x3)
	char bRenewSource : 1;  // 0xA8(0x1)
	char bInheritSourceVel : 1;  // 0xA8(0x1)
	char pad_168_1 : 6;  // 0xA8(0x1)
	char pad_169[4];  // 0xA9(0x4)
	int32_t LastSelIndex;  // 0xAC(0x4)

}; 



// Class Engine.InterpGroupInstCamera
// Size: 0x48(Inherited: 0x48) 
struct UInterpGroupInstCamera : public UInterpGroupInst
{

}; 



// Class Engine.ParticleModuleMaterialBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleMaterialBase : public UParticleModule
{

}; 



// Class Engine.InterpTrack
// Size: 0x70(Inherited: 0x28) 
struct UInterpTrack : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct TArray<struct UInterpTrack*> SubTracks;  // 0x38(0x10)
	UInterpTrackInst* TrackInstClass;  // 0x48(0x8)
	char ETrackActiveCondition ActiveCondition;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)
	struct FString TrackTitle;  // 0x58(0x10)
	char bOnePerGroup : 1;  // 0x68(0x1)
	char bDirGroupOnly : 1;  // 0x68(0x1)
	char bDisableTrack : 1;  // 0x68(0x1)
	char bIsSelected : 1;  // 0x68(0x1)
	char bIsAnimControlTrack : 1;  // 0x68(0x1)
	char bSubTrackOnly : 1;  // 0x68(0x1)
	char bVisible : 1;  // 0x68(0x1)
	char bIsRecording : 1;  // 0x68(0x1)
	char pad_105[7];  // 0x69(0x7)

}; 



// Class Engine.InterpTrackFloatBase
// Size: 0x90(Inherited: 0x70) 
struct UInterpTrackFloatBase : public UInterpTrack
{
	struct FInterpCurveFloat FloatTrack;  // 0x70(0x18)
	float CurveTension;  // 0x88(0x4)
	char pad_140[4];  // 0x8C(0x4)

}; 



// Class Engine.ThumbnailInfo
// Size: 0x28(Inherited: 0x28) 
struct UThumbnailInfo : public UObject
{

}; 



// Class Engine.InterpTrackAnimControl
// Size: 0xB0(Inherited: 0x90) 
struct UInterpTrackAnimControl : public UInterpTrackFloatBase
{
	struct FName SlotName;  // 0x90(0x8)
	struct TArray<struct FAnimControlTrackKey> AnimSeqs;  // 0x98(0x10)
	char bSkipAnimNotifiers : 1;  // 0xA8(0x1)
	char pad_168_1 : 7;  // 0xA8(0x1)
	char pad_169[8];  // 0xA9(0x8)

}; 



// Class Engine.SplineMeshActor
// Size: 0x228(Inherited: 0x220) 
struct ASplineMeshActor : public AActor
{
	struct USplineMeshComponent* SplineMeshComponent;  // 0x220(0x8)

}; 



// Class Engine.InterpTrackAudioMaster
// Size: 0x90(Inherited: 0x90) 
struct UInterpTrackAudioMaster : public UInterpTrackVectorBase
{

}; 



// Class Engine.PathFollowingAgentInterface
// Size: 0x28(Inherited: 0x28) 
struct UPathFollowingAgentInterface : public UInterface
{

}; 



// Class Engine.LevelStreaming
// Size: 0x150(Inherited: 0x28) 
struct ULevelStreaming : public UObject
{
	struct TSoftObjectPtr<UWorld> WorldAsset;  // 0x28(0x28)
	struct FName PackageNameToLoad;  // 0x50(0x8)
	struct TArray<struct FName> LODPackageNames;  // 0x58(0x10)
	char pad_104[24];  // 0x68(0x18)
	struct FTransform LevelTransform;  // 0x80(0x30)
	int32_t LevelLODIndex;  // 0xB0(0x4)
	int32_t StreamingPriority;  // 0xB4(0x4)
	char pad_184[2];  // 0xB8(0x2)
	char pad_186_1 : 3;  // 0xBA(0x1)
	char bShouldBeVisible : 1;  // 0xBA(0x1)
	char bShouldBeLoaded : 1;  // 0xBA(0x1)
	char bLocked : 1;  // 0xBA(0x1)
	char bIsStatic : 1;  // 0xBA(0x1)
	char bShouldBlockOnLoad : 1;  // 0xBA(0x1)
	char bShouldBlockOnUnload : 1;  // 0xBB(0x1)
	char bDisableDistanceStreaming : 1;  // 0xBB(0x1)
	char bDrawOnLevelStatusMap : 1;  // 0xBB(0x1)
	char pad_187_1 : 5;  // 0xBB(0x1)
	struct FLinearColor LevelColor;  // 0xBC(0x10)
	char pad_204[4];  // 0xCC(0x4)
	struct TArray<struct ALevelStreamingVolume*> EditorStreamingVolumes;  // 0xD0(0x10)
	float MinTimeBetweenVolumeUnloadRequests;  // 0xE0(0x4)
	char pad_228[4];  // 0xE4(0x4)
	struct FMulticastInlineDelegate OnLevelLoaded;  // 0xE8(0x10)
	struct FMulticastInlineDelegate OnLevelUnloaded;  // 0xF8(0x10)
	struct FMulticastInlineDelegate OnLevelShown;  // 0x108(0x10)
	struct FMulticastInlineDelegate OnLevelHidden;  // 0x118(0x10)
	struct ULevel* LoadedLevel;  // 0x128(0x8)
	struct ULevel* PendingUnloadLevel;  // 0x130(0x8)
	char pad_312[24];  // 0x138(0x18)

	bool ShouldBeLoaded(); // Function Engine.LevelStreaming.ShouldBeLoaded
	void SetShouldBeVisible(bool bInShouldBeVisible); // Function Engine.LevelStreaming.SetShouldBeVisible
	void SetShouldBeLoaded(bool bInShouldBeLoaded); // Function Engine.LevelStreaming.SetShouldBeLoaded
	void SetPriority(int32_t NewPriority); // Function Engine.LevelStreaming.SetPriority
	void SetLevelLODIndex(int32_t LODIndex); // Function Engine.LevelStreaming.SetLevelLODIndex
	void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval); // Function Engine.LevelStreaming.SetIsRequestingUnloadAndRemoval
	bool IsStreamingStatePending(); // Function Engine.LevelStreaming.IsStreamingStatePending
	bool IsLevelVisible(); // Function Engine.LevelStreaming.IsLevelVisible
	bool IsLevelLoaded(); // Function Engine.LevelStreaming.IsLevelLoaded
	struct FName GetWorldAssetPackageFName(); // Function Engine.LevelStreaming.GetWorldAssetPackageFName
	struct ULevel* GetLoadedLevel(); // Function Engine.LevelStreaming.GetLoadedLevel
	struct ALevelScriptActor* GetLevelScriptActor(); // Function Engine.LevelStreaming.GetLevelScriptActor
	bool GetIsRequestingUnloadAndRemoval(); // Function Engine.LevelStreaming.GetIsRequestingUnloadAndRemoval
	struct ULevelStreaming* CreateInstance(struct FString UniqueInstanceName); // Function Engine.LevelStreaming.CreateInstance
}; 



// Class Engine.InterpTrackColorScale
// Size: 0x90(Inherited: 0x90) 
struct UInterpTrackColorScale : public UInterpTrackVectorBase
{

}; 



// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x88(Inherited: 0x38) 
struct UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
	struct FRawDistributionVector VelOverLife;  // 0x38(0x48)
	char Absolute : 1;  // 0x80(0x1)
	char pad_128_1 : 7;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 



// Class Engine.InterpTrackDirector
// Size: 0x88(Inherited: 0x70) 
struct UInterpTrackDirector : public UInterpTrack
{
	struct TArray<struct FDirectorTrackCut> CutTrack;  // 0x70(0x10)
	char bSimulateCameraCutsOnClients : 1;  // 0x80(0x1)
	char pad_128_1 : 7;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 



// Class Engine.SoundfieldEndpointSubmix
// Size: 0x70(Inherited: 0x38) 
struct USoundfieldEndpointSubmix : public USoundSubmixBase
{
	struct FName SoundfieldEndpointType;  // 0x38(0x8)
	UAudioEndpointSettingsBase* EndpointSettingsClass;  // 0x40(0x8)
	struct USoundfieldEndpointSettingsBase* EndpointSettings;  // 0x48(0x8)
	USoundfieldEncodingSettingsBase* EncodingSettingsClass;  // 0x50(0x8)
	struct USoundfieldEncodingSettingsBase* EncodingSettings;  // 0x58(0x8)
	struct TArray<struct USoundfieldEffectBase*> SoundfieldEffectChain;  // 0x60(0x10)

}; 



// Class Engine.InterpTrackEvent
// Size: 0x88(Inherited: 0x70) 
struct UInterpTrackEvent : public UInterpTrack
{
	struct TArray<struct FEventTrackKey> EventTrack;  // 0x70(0x10)
	char bFireEventsWhenForwards : 1;  // 0x80(0x1)
	char bFireEventsWhenBackwards : 1;  // 0x80(0x1)
	char bFireEventsWhenJumpingForwards : 1;  // 0x80(0x1)
	char bUseCustomEventName : 1;  // 0x80(0x1)
	char pad_128_1 : 4;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 



// Class Engine.SoundNodeMixer
// Size: 0x58(Inherited: 0x48) 
struct USoundNodeMixer : public USoundNode
{
	struct TArray<float> InputVolume;  // 0x48(0x10)

}; 



// Class Engine.LevelScriptActor
// Size: 0x228(Inherited: 0x220) 
struct ALevelScriptActor : public AActor
{
	char bInputEnabled : 1;  // 0x220(0x1)
	char pad_544_1 : 7;  // 0x220(0x1)
	char pad_545[8];  // 0x221(0x8)

	void WorldOriginLocationChanged(struct FIntVector OldOriginLocation, struct FIntVector NewOriginLocation); // Function Engine.LevelScriptActor.WorldOriginLocationChanged
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // Function Engine.LevelScriptActor.SetCinematicMode
	bool RemoteEvent(struct FName EventName); // Function Engine.LevelScriptActor.RemoteEvent
	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset
}; 



// Class Engine.InterpTrackFloatMaterialParam
// Size: 0xA8(Inherited: 0x90) 
struct UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
	struct TArray<struct UMaterialInterface*> TargetMaterials;  // 0x90(0x10)
	struct FName ParamName;  // 0xA0(0x8)

}; 



// Class Engine.InterpTrackFloatProp
// Size: 0x98(Inherited: 0x90) 
struct UInterpTrackFloatProp : public UInterpTrackFloatBase
{
	struct FName PropertyName;  // 0x90(0x8)

}; 



// Class Engine.InterpTrackInstAnimControl
// Size: 0x30(Inherited: 0x28) 
struct UInterpTrackInstAnimControl : public UInterpTrackInst
{
	float LastUpdatePosition;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 



// Class Engine.InterpTrackInstAudioMaster
// Size: 0x28(Inherited: 0x28) 
struct UInterpTrackInstAudioMaster : public UInterpTrackInst
{

}; 



// Class Engine.InterpTrackInstProperty
// Size: 0x50(Inherited: 0x28) 
struct UInterpTrackInstProperty : public UInterpTrackInst
{
	struct TFieldPath<FNone> InterpProperty;  // 0x28(0x20)
	struct UObject* PropertyOuterObjectInst;  // 0x48(0x8)

}; 



// Class Engine.InterpTrackInstBoolProp
// Size: 0x68(Inherited: 0x50) 
struct UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
	char pad_80[16];  // 0x50(0x10)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool ResetBool : 1;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 



// Class Engine.InterpTrackInstColorProp
// Size: 0x60(Inherited: 0x50) 
struct UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
	char pad_80[8];  // 0x50(0x8)
	struct FColor ResetColor;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 



// Class Engine.InterpTrackInstDirector
// Size: 0x30(Inherited: 0x28) 
struct UInterpTrackInstDirector : public UInterpTrackInst
{
	struct AActor* OldViewTarget;  // 0x28(0x8)

}; 



// Class Engine.VoiceChannel
// Size: 0x78(Inherited: 0x68) 
struct UVoiceChannel : public UChannel
{
	char pad_104[16];  // 0x68(0x10)

}; 



// Class Engine.InterpTrackInstFade
// Size: 0x28(Inherited: 0x28) 
struct UInterpTrackInstFade : public UInterpTrackInst
{

}; 



// Class Engine.SpotLightComponent
// Size: 0x360(Inherited: 0x360) 
struct USpotLightComponent : public UPointLightComponent
{
	float InnerConeAngle;  // 0x358(0x4)
	float OuterConeAngle;  // 0x35C(0x4)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLightComponent.SetOuterConeAngle
	void SetInnerConeAngle(float NewInnerConeAngle); // Function Engine.SpotLightComponent.SetInnerConeAngle
}; 



// Class Engine.InterpTrackInstFloatAnimBPParam
// Size: 0x40(Inherited: 0x28) 
struct UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
	struct UAnimInstance* AnimScriptInstance;  // 0x28(0x8)
	float ResetFloat;  // 0x30(0x4)
	char pad_52[12];  // 0x34(0xC)

}; 



// Class Engine.ObjectReferencer
// Size: 0x38(Inherited: 0x28) 
struct UObjectReferencer : public UObject
{
	struct TArray<struct UObject*> ReferencedObjects;  // 0x28(0x10)

}; 



// Class Engine.InterpTrackInstFloatParticleParam
// Size: 0x30(Inherited: 0x28) 
struct UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
	float ResetFloat;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 



// Class Engine.InterpTrackInstMove
// Size: 0x40(Inherited: 0x28) 
struct UInterpTrackInstMove : public UInterpTrackInst
{
	struct FVector ResetLocation;  // 0x28(0xC)
	struct FRotator ResetRotation;  // 0x34(0xC)

}; 



// Class Engine.InterpTrackInstVectorMaterialParam
// Size: 0x60(Inherited: 0x28) 
struct UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances;  // 0x28(0x10)
	struct TArray<struct FVector> ResetVectors;  // 0x38(0x10)
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs;  // 0x48(0x10)
	struct UInterpTrackVectorMaterialParam* InstancedTrack;  // 0x58(0x8)

}; 



// Class Engine.MaterialExpressionComponentMask
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionComponentMask : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char R : 1;  // 0x54(0x1)
	char G : 1;  // 0x54(0x1)
	char B : 1;  // 0x54(0x1)
	char A : 1;  // 0x54(0x1)
	char pad_84_1 : 4;  // 0x54(0x1)
	char pad_85[4];  // 0x55(0x4)

}; 



// Class Engine.SoundSourceBus
// Size: 0x388(Inherited: 0x370) 
struct USoundSourceBus : public USoundWave
{
	uint8_t  SourceBusChannels;  // 0x370(0x1)
	char pad_881[3];  // 0x371(0x3)
	float SourceBusDuration;  // 0x374(0x4)
	struct UAudioBus* AudioBus;  // 0x378(0x8)
	char bAutoDeactivateWhenSilent : 1;  // 0x380(0x1)
	char pad_896_1 : 7;  // 0x380(0x1)
	char pad_897[8];  // 0x381(0x8)

}; 



// Class Engine.InterpTrackInstSlomo
// Size: 0x30(Inherited: 0x28) 
struct UInterpTrackInstSlomo : public UInterpTrackInst
{
	float OldTimeDilation;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)

}; 



// Class Engine.WindDirectionalSource
// Size: 0x228(Inherited: 0x220) 
struct AWindDirectionalSource : public AInfo
{
	struct UWindDirectionalSourceComponent* Component;  // 0x220(0x8)

}; 



// Class Engine.InterpTrackInstSound
// Size: 0x38(Inherited: 0x28) 
struct UInterpTrackInstSound : public UInterpTrackInst
{
	float LastUpdatePosition;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct UAudioComponent* PlayAudioComp;  // 0x30(0x8)

}; 



// Class Engine.MaterialExpressionVectorParameter
// Size: 0x70(Inherited: 0x58) 
struct UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
	struct FLinearColor DefaultValue;  // 0x58(0x10)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bUseCustomPrimitiveData : 1;  // 0x68(0x1)
	char PrimitiveDataIndex;  // 0x69(0x1)
	char pad_106[6];  // 0x6A(0x6)

}; 



// Class Engine.InterpTrackInstToggle
// Size: 0x38(Inherited: 0x28) 
struct UInterpTrackInstToggle : public UInterpTrackInst
{
	char ETrackToggleAction Action;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float LastUpdatePosition;  // 0x2C(0x4)
	char bSavedActiveState : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)

}; 



// Class Engine.InterpTrackInstVisibility
// Size: 0x30(Inherited: 0x28) 
struct UInterpTrackInstVisibility : public UInterpTrackInst
{
	char EVisibilityTrackAction Action;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float LastUpdatePosition;  // 0x2C(0x4)

}; 



// Class Engine.InterpTrackMove
// Size: 0xC8(Inherited: 0x70) 
struct UInterpTrackMove : public UInterpTrack
{
	struct FInterpCurveVector PosTrack;  // 0x70(0x18)
	struct FInterpCurveVector EulerTrack;  // 0x88(0x18)
	struct FInterpLookupTrack LookupTrack;  // 0xA0(0x10)
	struct FName LookAtGroupName;  // 0xB0(0x8)
	float LinCurveTension;  // 0xB8(0x4)
	float AngCurveTension;  // 0xBC(0x4)
	char bUseQuatInterpolation : 1;  // 0xC0(0x1)
	char bShowArrowAtKeys : 1;  // 0xC0(0x1)
	char bDisableMovement : 1;  // 0xC0(0x1)
	char bShowTranslationOnCurveEd : 1;  // 0xC0(0x1)
	char bShowRotationOnCurveEd : 1;  // 0xC0(0x1)
	char bHide3DTrack : 1;  // 0xC0(0x1)
	char pad_192_1 : 2;  // 0xC0(0x1)
	char pad_193[4];  // 0xC1(0x4)
	char EInterpTrackMoveRotMode RotMode;  // 0xC4(0x1)
	char pad_197[3];  // 0xC5(0x3)

}; 



// Class Engine.MaterialExpressionCloudSampleAttribute
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionCloudSampleAttribute : public UMaterialExpression
{

}; 



// Class Engine.InterpTrackSlomo
// Size: 0x90(Inherited: 0x90) 
struct UInterpTrackSlomo : public UInterpTrackFloatBase
{

}; 



// Class Engine.ParticleModuleKillHeight
// Size: 0x68(Inherited: 0x30) 
struct UParticleModuleKillHeight : public UParticleModuleKillBase
{
	struct FRawDistributionFloat Height;  // 0x30(0x30)
	char bAbsolute : 1;  // 0x60(0x1)
	char bFloor : 1;  // 0x60(0x1)
	char bApplyPSysScale : 1;  // 0x60(0x1)
	char pad_96_1 : 5;  // 0x60(0x1)
	char pad_97[8];  // 0x61(0x8)

}; 



// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionRuntimeVirtualTextureReplace : public UMaterialExpression
{
	struct FExpressionInput Default;  // 0x40(0x14)
	struct FExpressionInput VirtualTextureOutput;  // 0x54(0x14)

}; 



// Class Engine.MaterialExpressionDDX
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionDDX : public UMaterialExpression
{
	struct FExpressionInput Value;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.ParticleModuleBeamSource
// Size: 0x118(Inherited: 0x30) 
struct UParticleModuleBeamSource : public UParticleModuleBeamBase
{
	char Beam2SourceTargetMethod SourceMethod;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	struct FName SourceName;  // 0x34(0x8)
	char bSourceAbsolute : 1;  // 0x3C(0x1)
	char pad_60_1 : 7;  // 0x3C(0x1)
	char pad_61[4];  // 0x3D(0x4)
	struct FRawDistributionVector Source;  // 0x40(0x48)
	char bLockSource : 1;  // 0x88(0x1)
	char pad_136_1 : 7;  // 0x88(0x1)
	char pad_137[4];  // 0x89(0x4)
	char Beam2SourceTargetTangentMethod SourceTangentMethod;  // 0x8C(0x1)
	char pad_141[3];  // 0x8D(0x3)
	struct FRawDistributionVector SourceTangent;  // 0x90(0x48)
	char bLockSourceTangent : 1;  // 0xD8(0x1)
	char pad_216_1 : 7;  // 0xD8(0x1)
	char pad_217[8];  // 0xD9(0x8)
	struct FRawDistributionFloat SourceStrength;  // 0xE0(0x30)
	char bLockSourceStength : 1;  // 0x110(0x1)
	char pad_272_1 : 7;  // 0x110(0x1)
	char pad_273[8];  // 0x111(0x8)

}; 



// Class Engine.InterpTrackToggle
// Size: 0x88(Inherited: 0x70) 
struct UInterpTrackToggle : public UInterpTrack
{
	struct TArray<struct FToggleTrackKey> ToggleTrack;  // 0x70(0x10)
	char bActivateSystemEachUpdate : 1;  // 0x80(0x1)
	char bActivateWithJustAttachedFlag : 1;  // 0x80(0x1)
	char bFireEventsWhenForwards : 1;  // 0x80(0x1)
	char bFireEventsWhenBackwards : 1;  // 0x80(0x1)
	char bFireEventsWhenJumpingForwards : 1;  // 0x80(0x1)
	char pad_128_1 : 3;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 



// Class Engine.InterpTrackVectorProp
// Size: 0x98(Inherited: 0x90) 
struct UInterpTrackVectorProp : public UInterpTrackVectorBase
{
	struct FName PropertyName;  // 0x90(0x8)

}; 



// Class Engine.InterpTrackVisibility
// Size: 0x88(Inherited: 0x70) 
struct UInterpTrackVisibility : public UInterpTrack
{
	struct TArray<struct FVisibilityTrackKey> VisibilityTrack;  // 0x70(0x10)
	char bFireEventsWhenForwards : 1;  // 0x80(0x1)
	char bFireEventsWhenBackwards : 1;  // 0x80(0x1)
	char bFireEventsWhenJumpingForwards : 1;  // 0x80(0x1)
	char pad_128_1 : 5;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 



// Class Engine.ParticleModuleColor_Seeded
// Size: 0xD0(Inherited: 0xB0) 
struct UParticleModuleColor_Seeded : public UParticleModuleColor
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0xB0(0x20)

}; 



// Class Engine.KismetGuidLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetGuidLibrary : public UBlueprintFunctionLibrary
{

	void Parse_StringToGuid(struct FString GuidString, struct FGuid& OutGuid, bool& Success); // Function Engine.KismetGuidLibrary.Parse_StringToGuid
	bool NotEqual_GuidGuid(struct FGuid& A, struct FGuid& B); // Function Engine.KismetGuidLibrary.NotEqual_GuidGuid
	struct FGuid NewGuid(); // Function Engine.KismetGuidLibrary.NewGuid
	bool IsValid_Guid(struct FGuid& InGuid); // Function Engine.KismetGuidLibrary.IsValid_Guid
	void Invalidate_Guid(struct FGuid& InGuid); // Function Engine.KismetGuidLibrary.Invalidate_Guid
	bool EqualEqual_GuidGuid(struct FGuid& A, struct FGuid& B); // Function Engine.KismetGuidLibrary.EqualEqual_GuidGuid
	struct FString Conv_GuidToString(struct FGuid& InGuid); // Function Engine.KismetGuidLibrary.Conv_GuidToString
}; 



// Class Engine.KismetInputLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetInputLibrary : public UBlueprintFunctionLibrary
{

	bool PointerEvent_IsTouchEvent(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_IsTouchEvent
	bool PointerEvent_IsMouseButtonDown(struct FPointerEvent& Input, struct FKey MouseButton); // Function Engine.KismetInputLibrary.PointerEvent_IsMouseButtonDown
	float PointerEvent_GetWheelDelta(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetWheelDelta
	int32_t PointerEvent_GetUserIndex(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetUserIndex
	int32_t PointerEvent_GetTouchpadIndex(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetTouchpadIndex
	struct FVector2D PointerEvent_GetScreenSpacePosition(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetScreenSpacePosition
	int32_t PointerEvent_GetPointerIndex(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetPointerIndex
	struct FVector2D PointerEvent_GetLastScreenSpacePosition(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetLastScreenSpacePosition
	uint8_t  PointerEvent_GetGestureType(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetGestureType
	struct FVector2D PointerEvent_GetGestureDelta(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetGestureDelta
	struct FKey PointerEvent_GetEffectingButton(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetEffectingButton
	struct FVector2D PointerEvent_GetCursorDelta(struct FPointerEvent& Input); // Function Engine.KismetInputLibrary.PointerEvent_GetCursorDelta
	bool Key_IsVectorAxis(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsVectorAxis
	bool Key_IsValid(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsValid
	bool Key_IsMouseButton(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsMouseButton
	bool Key_IsModifierKey(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsModifierKey
	bool Key_IsKeyboardKey(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsKeyboardKey
	bool Key_IsGamepadKey(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsGamepadKey
	bool Key_IsDigital(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsDigital
	bool Key_IsButtonAxis(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsButtonAxis
	bool Key_IsAxis3D(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsAxis3D
	bool Key_IsAxis2D(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsAxis2D
	bool Key_IsAxis1D(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsAxis1D
	bool Key_IsAnalog(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_IsAnalog
	uint8_t  Key_GetNavigationDirectionFromKey(struct FKeyEvent& InKeyEvent); // Function Engine.KismetInputLibrary.Key_GetNavigationDirectionFromKey
	uint8_t  Key_GetNavigationDirectionFromAnalog(struct FAnalogInputEvent& InAnalogEvent); // Function Engine.KismetInputLibrary.Key_GetNavigationDirectionFromAnalog
	uint8_t  Key_GetNavigationActionFromKey(struct FKeyEvent& InKeyEvent); // Function Engine.KismetInputLibrary.Key_GetNavigationActionFromKey
	uint8_t  Key_GetNavigationAction(struct FKey& InKey); // Function Engine.KismetInputLibrary.Key_GetNavigationAction
	struct FText Key_GetDisplayName(struct FKey& Key); // Function Engine.KismetInputLibrary.Key_GetDisplayName
	bool InputEvent_IsShiftDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsShiftDown
	bool InputEvent_IsRightShiftDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsRightShiftDown
	bool InputEvent_IsRightControlDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsRightControlDown
	bool InputEvent_IsRightCommandDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsRightCommandDown
	bool InputEvent_IsRightAltDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsRightAltDown
	bool InputEvent_IsRepeat(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsRepeat
	bool InputEvent_IsLeftShiftDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsLeftShiftDown
	bool InputEvent_IsLeftControlDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsLeftControlDown
	bool InputEvent_IsLeftCommandDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsLeftCommandDown
	bool InputEvent_IsLeftAltDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsLeftAltDown
	bool InputEvent_IsControlDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsControlDown
	bool InputEvent_IsCommandDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsCommandDown
	bool InputEvent_IsAltDown(struct FInputEvent& Input); // Function Engine.KismetInputLibrary.InputEvent_IsAltDown
	struct FText InputChord_GetDisplayName(struct FInputChord& Key); // Function Engine.KismetInputLibrary.InputChord_GetDisplayName
	int32_t GetUserIndex(struct FKeyEvent& Input); // Function Engine.KismetInputLibrary.GetUserIndex
	struct FKey GetKey(struct FKeyEvent& Input); // Function Engine.KismetInputLibrary.GetKey
	float GetAnalogValue(struct FAnalogInputEvent& Input); // Function Engine.KismetInputLibrary.GetAnalogValue
	bool EqualEqual_KeyKey(struct FKey A, struct FKey B); // Function Engine.KismetInputLibrary.EqualEqual_KeyKey
	bool EqualEqual_InputChordInputChord(struct FInputChord A, struct FInputChord B); // Function Engine.KismetInputLibrary.EqualEqual_InputChordInputChord
	void CalibrateTilt(); // Function Engine.KismetInputLibrary.CalibrateTilt
}; 



// Class Engine.KismetMathLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetMathLibrary : public UBlueprintFunctionLibrary
{

	int32_t Xor_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Xor_IntInt
	int64_t Xor_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.Xor_Int64Int64
	int32_t Wrap(int32_t Value, int32_t Min, int32_t Max); // Function Engine.KismetMathLibrary.Wrap
	struct FVector WeightedMovingAverage_FVector(struct FVector CurrentSample, struct FVector PreviousSample, float Weight); // Function Engine.KismetMathLibrary.WeightedMovingAverage_FVector
	struct FRotator WeightedMovingAverage_FRotator(struct FRotator CurrentSample, struct FRotator PreviousSample, float Weight); // Function Engine.KismetMathLibrary.WeightedMovingAverage_FRotator
	float WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float Weight); // Function Engine.KismetMathLibrary.WeightedMovingAverage_Float
	float VSizeXYSquared(struct FVector A); // Function Engine.KismetMathLibrary.VSizeXYSquared
	float VSizeXY(struct FVector A); // Function Engine.KismetMathLibrary.VSizeXY
	float VSizeSquared(struct FVector A); // Function Engine.KismetMathLibrary.VSizeSquared
	float VSize2DSquared(struct FVector2D A); // Function Engine.KismetMathLibrary.VSize2DSquared
	float VSize2D(struct FVector2D A); // Function Engine.KismetMathLibrary.VSize2D
	float VSize(struct FVector A); // Function Engine.KismetMathLibrary.VSize
	struct FVector VLerp(struct FVector A, struct FVector B, float Alpha); // Function Engine.KismetMathLibrary.VLerp
	struct FVector VInterpTo_Constant(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.VInterpTo_Constant
	struct FVector VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.VInterpTo
	struct FVector VectorSpringInterp(struct FVector Current, struct FVector Target, struct FVectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass); // Function Engine.KismetMathLibrary.VectorSpringInterp
	struct FVector Vector_Zero(); // Function Engine.KismetMathLibrary.Vector_Zero
	struct FVector Vector_Up(); // Function Engine.KismetMathLibrary.Vector_Up
	void Vector_UnwindEuler(struct FVector& A); // Function Engine.KismetMathLibrary.Vector_UnwindEuler
	struct FVector2D Vector_UnitCartesianToSpherical(struct FVector A); // Function Engine.KismetMathLibrary.Vector_UnitCartesianToSpherical
	struct FVector Vector_ToRadians(struct FVector A); // Function Engine.KismetMathLibrary.Vector_ToRadians
	struct FVector Vector_ToDegrees(struct FVector A); // Function Engine.KismetMathLibrary.Vector_ToDegrees
	struct FVector Vector_SnappedToGrid(struct FVector InVect, float InGridSize); // Function Engine.KismetMathLibrary.Vector_SnappedToGrid
	void Vector_Set(struct FVector& A, float X, float Y, float Z); // Function Engine.KismetMathLibrary.Vector_Set
	struct FVector Vector_Right(); // Function Engine.KismetMathLibrary.Vector_Right
	struct FVector Vector_Reciprocal(struct FVector& A); // Function Engine.KismetMathLibrary.Vector_Reciprocal
	struct FVector Vector_ProjectOnToNormal(struct FVector V, struct FVector InNormal); // Function Engine.KismetMathLibrary.Vector_ProjectOnToNormal
	struct FVector Vector_One(); // Function Engine.KismetMathLibrary.Vector_One
	struct FVector Vector_NormalUnsafe(struct FVector& A); // Function Engine.KismetMathLibrary.Vector_NormalUnsafe
	void Vector_Normalize(struct FVector& A, float Tolerance); // Function Engine.KismetMathLibrary.Vector_Normalize
	struct FVector Vector_Normal2D(struct FVector A, float Tolerance); // Function Engine.KismetMathLibrary.Vector_Normal2D
	struct FVector Vector_MirrorByPlane(struct FVector A, struct FPlane& InPlane); // Function Engine.KismetMathLibrary.Vector_MirrorByPlane
	struct FVector Vector_Left(); // Function Engine.KismetMathLibrary.Vector_Left
	bool Vector_IsZero(struct FVector& A); // Function Engine.KismetMathLibrary.Vector_IsZero
	bool Vector_IsUnit(struct FVector& A, float SquaredLenthTolerance); // Function Engine.KismetMathLibrary.Vector_IsUnit
	bool Vector_IsUniform(struct FVector& A, float Tolerance); // Function Engine.KismetMathLibrary.Vector_IsUniform
	bool Vector_IsNormal(struct FVector& A); // Function Engine.KismetMathLibrary.Vector_IsNormal
	bool Vector_IsNearlyZero(struct FVector& A, float Tolerance); // Function Engine.KismetMathLibrary.Vector_IsNearlyZero
	bool Vector_IsNAN(struct FVector& A); // Function Engine.KismetMathLibrary.Vector_IsNAN
	float Vector_HeadingAngle(struct FVector A); // Function Engine.KismetMathLibrary.Vector_HeadingAngle
	struct FVector Vector_GetSignVector(struct FVector A); // Function Engine.KismetMathLibrary.Vector_GetSignVector
	struct FVector Vector_GetProjection(struct FVector A); // Function Engine.KismetMathLibrary.Vector_GetProjection
	float Vector_GetAbsMin(struct FVector A); // Function Engine.KismetMathLibrary.Vector_GetAbsMin
	float Vector_GetAbsMax(struct FVector A); // Function Engine.KismetMathLibrary.Vector_GetAbsMax
	struct FVector Vector_GetAbs(struct FVector A); // Function Engine.KismetMathLibrary.Vector_GetAbs
	struct FVector Vector_Forward(); // Function Engine.KismetMathLibrary.Vector_Forward
	struct FVector Vector_Down(); // Function Engine.KismetMathLibrary.Vector_Down
	float Vector_DistanceSquared(struct FVector v1, struct FVector v2); // Function Engine.KismetMathLibrary.Vector_DistanceSquared
	float Vector_Distance2DSquared(struct FVector v1, struct FVector v2); // Function Engine.KismetMathLibrary.Vector_Distance2DSquared
	float Vector_Distance2D(struct FVector v1, struct FVector v2); // Function Engine.KismetMathLibrary.Vector_Distance2D
	float Vector_Distance(struct FVector v1, struct FVector v2); // Function Engine.KismetMathLibrary.Vector_Distance
	float Vector_CosineAngle2D(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Vector_CosineAngle2D
	struct FVector Vector_ComponentMin(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Vector_ComponentMin
	struct FVector Vector_ComponentMax(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Vector_ComponentMax
	struct FVector Vector_ClampSizeMax2D(struct FVector A, float Max); // Function Engine.KismetMathLibrary.Vector_ClampSizeMax2D
	struct FVector Vector_ClampSizeMax(struct FVector A, float Max); // Function Engine.KismetMathLibrary.Vector_ClampSizeMax
	struct FVector Vector_ClampSize2D(struct FVector A, float Min, float Max); // Function Engine.KismetMathLibrary.Vector_ClampSize2D
	struct FVector Vector_BoundedToCube(struct FVector InVect, float InRadius); // Function Engine.KismetMathLibrary.Vector_BoundedToCube
	struct FVector Vector_BoundedToBox(struct FVector InVect, struct FVector InBoxMin, struct FVector InBoxMax); // Function Engine.KismetMathLibrary.Vector_BoundedToBox
	struct FVector Vector_Backward(); // Function Engine.KismetMathLibrary.Vector_Backward
	void Vector_Assign(struct FVector& A, struct FVector& InVector); // Function Engine.KismetMathLibrary.Vector_Assign
	void Vector_AddBounded(struct FVector& A, struct FVector InAddVect, float InRadius); // Function Engine.KismetMathLibrary.Vector_AddBounded
	struct FVector4 Vector4_Zero(); // Function Engine.KismetMathLibrary.Vector4_Zero
	float Vector4_SizeSquared3(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_SizeSquared3
	float Vector4_SizeSquared(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_SizeSquared
	float Vector4_Size3(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_Size3
	float Vector4_Size(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_Size
	void Vector4_Set(struct FVector4& A, float X, float Y, float Z, float W); // Function Engine.KismetMathLibrary.Vector4_Set
	struct FVector4 Vector4_NormalUnsafe3(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_NormalUnsafe3
	void Vector4_Normalize3(struct FVector4& A, float Tolerance); // Function Engine.KismetMathLibrary.Vector4_Normalize3
	struct FVector4 Vector4_Normal3(struct FVector4& A, float Tolerance); // Function Engine.KismetMathLibrary.Vector4_Normal3
	struct FVector4 Vector4_Negated(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_Negated
	struct FVector4 Vector4_MirrorByVector3(struct FVector4& Direction, struct FVector4& SurfaceNormal); // Function Engine.KismetMathLibrary.Vector4_MirrorByVector3
	bool Vector4_IsZero(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_IsZero
	bool Vector4_IsUnit3(struct FVector4& A, float SquaredLenthTolerance); // Function Engine.KismetMathLibrary.Vector4_IsUnit3
	bool Vector4_IsNormal3(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_IsNormal3
	bool Vector4_IsNearlyZero3(struct FVector4& A, float Tolerance); // Function Engine.KismetMathLibrary.Vector4_IsNearlyZero3
	bool Vector4_IsNAN(struct FVector4& A); // Function Engine.KismetMathLibrary.Vector4_IsNAN
	float Vector4_DotProduct3(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.Vector4_DotProduct3
	float Vector4_DotProduct(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.Vector4_DotProduct
	struct FVector4 Vector4_CrossProduct3(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.Vector4_CrossProduct3
	void Vector4_Assign(struct FVector4& A, struct FVector4& InVector); // Function Engine.KismetMathLibrary.Vector4_Assign
	struct FVector2D Vector2DInterpTo_Constant(struct FVector2D Current, struct FVector2D Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.Vector2DInterpTo_Constant
	struct FVector2D Vector2DInterpTo(struct FVector2D Current, struct FVector2D Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.Vector2DInterpTo
	struct FVector2D Vector2D_Zero(); // Function Engine.KismetMathLibrary.Vector2D_Zero
	struct FVector2D Vector2D_Unit45Deg(); // Function Engine.KismetMathLibrary.Vector2D_Unit45Deg
	struct FVector2D Vector2D_One(); // Function Engine.KismetMathLibrary.Vector2D_One
	struct FVector VEase(struct FVector A, struct FVector B, float Alpha, char EEasingFunc EasingFunc, float BlendExp, int32_t Steps); // Function Engine.KismetMathLibrary.VEase
	struct FDateTime UtcNow(); // Function Engine.KismetMathLibrary.UtcNow
	struct FVector4 TransformVector4(struct FMatrix& Matrix, struct FVector4& Vec4); // Function Engine.KismetMathLibrary.TransformVector4
	struct FRotator TransformRotation(struct FTransform& T, struct FRotator Rotation); // Function Engine.KismetMathLibrary.TransformRotation
	struct FVector TransformLocation(struct FTransform& T, struct FVector Location); // Function Engine.KismetMathLibrary.TransformLocation
	struct FVector TransformDirection(struct FTransform& T, struct FVector Direction); // Function Engine.KismetMathLibrary.TransformDirection
	float Transform_Determinant(struct FTransform& Transform); // Function Engine.KismetMathLibrary.Transform_Determinant
	struct FVector2D ToSign2D(struct FVector2D A); // Function Engine.KismetMathLibrary.ToSign2D
	struct FVector2D ToRounded2D(struct FVector2D A); // Function Engine.KismetMathLibrary.ToRounded2D
	void ToDirectionAndLength2D(struct FVector2D A, struct FVector2D& OutDir, float& OutLength); // Function Engine.KismetMathLibrary.ToDirectionAndLength2D
	struct FDateTime Today(); // Function Engine.KismetMathLibrary.Today
	struct FTransform TLerp(struct FTransform& A, struct FTransform& B, float Alpha, char ELerpInterpolationMode InterpMode); // Function Engine.KismetMathLibrary.TLerp
	struct FTransform TInterpTo(struct FTransform& Current, struct FTransform& Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.TInterpTo
	struct FTimespan TimespanZeroValue(); // Function Engine.KismetMathLibrary.TimespanZeroValue
	float TimespanRatio(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.TimespanRatio
	struct FTimespan TimespanMinValue(); // Function Engine.KismetMathLibrary.TimespanMinValue
	struct FTimespan TimespanMaxValue(); // Function Engine.KismetMathLibrary.TimespanMaxValue
	bool TimespanFromString(struct FString TimespanString, struct FTimespan& Result); // Function Engine.KismetMathLibrary.TimespanFromString
	struct FTransform TEase(struct FTransform& A, struct FTransform& B, float Alpha, char EEasingFunc EasingFunc, float BlendExp, int32_t Steps); // Function Engine.KismetMathLibrary.TEase
	float Tan(float A); // Function Engine.KismetMathLibrary.Tan
	struct FVector Subtract_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Subtract_VectorVector
	struct FVector Subtract_VectorInt(struct FVector A, int32_t B); // Function Engine.KismetMathLibrary.Subtract_VectorInt
	struct FVector Subtract_VectorFloat(struct FVector A, float B); // Function Engine.KismetMathLibrary.Subtract_VectorFloat
	struct FVector4 Subtract_Vector4Vector4(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.Subtract_Vector4Vector4
	struct FVector2D Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.Subtract_Vector2DVector2D
	struct FVector2D Subtract_Vector2DFloat(struct FVector2D A, float B); // Function Engine.KismetMathLibrary.Subtract_Vector2DFloat
	struct FTimespan Subtract_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.Subtract_TimespanTimespan
	struct FQuat Subtract_QuatQuat(struct FQuat& A, struct FQuat& B); // Function Engine.KismetMathLibrary.Subtract_QuatQuat
	struct FLinearColor Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // Function Engine.KismetMathLibrary.Subtract_LinearColorLinearColor
	struct FIntPoint Subtract_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // Function Engine.KismetMathLibrary.Subtract_IntPointIntPoint
	struct FIntPoint Subtract_IntPointInt(struct FIntPoint A, int32_t B); // Function Engine.KismetMathLibrary.Subtract_IntPointInt
	int32_t Subtract_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Subtract_IntInt
	int64_t Subtract_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.Subtract_Int64Int64
	float Subtract_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Subtract_FloatFloat
	struct FDateTime Subtract_DateTimeTimespan(struct FDateTime A, struct FTimespan B); // Function Engine.KismetMathLibrary.Subtract_DateTimeTimespan
	struct FTimespan Subtract_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.Subtract_DateTimeDateTime
	char Subtract_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Subtract_ByteByte
	float Square(float A); // Function Engine.KismetMathLibrary.Square
	float Sqrt(float A); // Function Engine.KismetMathLibrary.Sqrt
	struct FVector Spherical2DToUnitCartesian(struct FVector2D A); // Function Engine.KismetMathLibrary.Spherical2DToUnitCartesian
	float Sin(float A); // Function Engine.KismetMathLibrary.Sin
	int64_t SignOfInteger64(int64_t A); // Function Engine.KismetMathLibrary.SignOfInteger64
	int32_t SignOfInteger(int32_t A); // Function Engine.KismetMathLibrary.SignOfInteger
	float SignOfFloat(float A); // Function Engine.KismetMathLibrary.SignOfFloat
	void SetRandomStreamSeed(struct FRandomStream& Stream, int32_t NewSeed); // Function Engine.KismetMathLibrary.SetRandomStreamSeed
	void Set2D(struct FVector2D& A, float X, float Y); // Function Engine.KismetMathLibrary.Set2D
	struct FVector SelectVector(struct FVector A, struct FVector B, bool bPickA); // Function Engine.KismetMathLibrary.SelectVector
	struct FTransform SelectTransform(struct FTransform& A, struct FTransform& B, bool bPickA); // Function Engine.KismetMathLibrary.SelectTransform
	struct FString SelectString(struct FString A, struct FString B, bool bPickA); // Function Engine.KismetMathLibrary.SelectString
	struct FRotator SelectRotator(struct FRotator A, struct FRotator B, bool bPickA); // Function Engine.KismetMathLibrary.SelectRotator
	struct UObject* SelectObject(struct UObject* A, struct UObject* B, bool bSelectA); // Function Engine.KismetMathLibrary.SelectObject
	int32_t SelectInt(int32_t A, int32_t B, bool bPickA); // Function Engine.KismetMathLibrary.SelectInt
	float SelectFloat(float A, float B, bool bPickA); // Function Engine.KismetMathLibrary.SelectFloat
	struct FLinearColor SelectColor(struct FLinearColor A, struct FLinearColor B, bool bPickA); // Function Engine.KismetMathLibrary.SelectColor
	UObject* SelectClass(UObject* A, UObject* B, bool bSelectA); // Function Engine.KismetMathLibrary.SelectClass
	void SeedRandomStream(struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.SeedRandomStream
	float SafeDivide(float A, float B); // Function Engine.KismetMathLibrary.SafeDivide
	int64_t Round64(float A); // Function Engine.KismetMathLibrary.Round64
	int32_t Round(float A); // Function Engine.KismetMathLibrary.Round
	struct FRotator RotatorFromAxisAndAngle(struct FVector Axis, float angle); // Function Engine.KismetMathLibrary.RotatorFromAxisAndAngle
	struct FVector RotateAngleAxis(struct FVector InVect, float AngleDeg, struct FVector Axis); // Function Engine.KismetMathLibrary.RotateAngleAxis
	struct FRotator RLerp(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath); // Function Engine.KismetMathLibrary.RLerp
	struct FRotator RInterpTo_Constant(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.RInterpTo_Constant
	struct FRotator RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.RInterpTo
	void RGBToHSV_Vector(struct FLinearColor RGB, struct FLinearColor& HSV); // Function Engine.KismetMathLibrary.RGBToHSV_Vector
	void RGBToHSV(struct FLinearColor InColor, float& H, float& S, float& V, float& A); // Function Engine.KismetMathLibrary.RGBToHSV
	struct FLinearColor RGBLinearToHSV(struct FLinearColor RGB); // Function Engine.KismetMathLibrary.RGBLinearToHSV
	void ResetVectorSpringState(struct FVectorSpringState& SpringState); // Function Engine.KismetMathLibrary.ResetVectorSpringState
	void ResetRandomStream(struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.ResetRandomStream
	void ResetFloatSpringState(struct FFloatSpringState& SpringState); // Function Engine.KismetMathLibrary.ResetFloatSpringState
	struct FRotator REase(struct FRotator A, struct FRotator B, float Alpha, bool bShortestPath, char EEasingFunc EasingFunc, float BlendExp, int32_t Steps); // Function Engine.KismetMathLibrary.REase
	struct FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(struct FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInRadiansFromStream
	struct FVector RandomUnitVectorInEllipticalConeInRadians(struct FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians); // Function Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInRadians
	struct FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(struct FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInDegreesFromStream
	struct FVector RandomUnitVectorInEllipticalConeInDegrees(struct FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees); // Function Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInDegrees
	struct FVector RandomUnitVectorInConeInRadiansFromStream(struct FVector& ConeDir, float ConeHalfAngleInRadians, struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomUnitVectorInConeInRadiansFromStream
	struct FVector RandomUnitVectorInConeInRadians(struct FVector ConeDir, float ConeHalfAngleInRadians); // Function Engine.KismetMathLibrary.RandomUnitVectorInConeInRadians
	struct FVector RandomUnitVectorInConeInDegreesFromStream(struct FVector& ConeDir, float ConeHalfAngleInDegrees, struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomUnitVectorInConeInDegreesFromStream
	struct FVector RandomUnitVectorInConeInDegrees(struct FVector ConeDir, float ConeHalfAngleInDegrees); // Function Engine.KismetMathLibrary.RandomUnitVectorInConeInDegrees
	struct FVector RandomUnitVectorFromStream(struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomUnitVectorFromStream
	struct FVector RandomUnitVector(); // Function Engine.KismetMathLibrary.RandomUnitVector
	struct FRotator RandomRotatorFromStream(bool bRoll, struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomRotatorFromStream
	struct FRotator RandomRotator(bool bRoll); // Function Engine.KismetMathLibrary.RandomRotator
	struct FVector RandomPointInBoundingBox(struct FVector Origin, struct FVector BoxExtent); // Function Engine.KismetMathLibrary.RandomPointInBoundingBox
	int32_t RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomIntegerInRangeFromStream
	int32_t RandomIntegerInRange(int32_t Min, int32_t Max); // Function Engine.KismetMathLibrary.RandomIntegerInRange
	int32_t RandomIntegerFromStream(int32_t Max, struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomIntegerFromStream
	int64_t RandomInteger64InRange(int64_t Min, int64_t Max); // Function Engine.KismetMathLibrary.RandomInteger64InRange
	int64_t RandomInteger64(int64_t Max); // Function Engine.KismetMathLibrary.RandomInteger64
	int32_t RandomInteger(int32_t Max); // Function Engine.KismetMathLibrary.RandomInteger
	float RandomFloatInRangeFromStream(float Min, float Max, struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomFloatInRangeFromStream
	float RandomFloatInRange(float Min, float Max); // Function Engine.KismetMathLibrary.RandomFloatInRange
	float RandomFloatFromStream(struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomFloatFromStream
	float RandomFloat(); // Function Engine.KismetMathLibrary.RandomFloat
	bool RandomBoolWithWeightFromStream(float Weight, struct FRandomStream& RandomStream); // Function Engine.KismetMathLibrary.RandomBoolWithWeightFromStream
	bool RandomBoolWithWeight(float Weight); // Function Engine.KismetMathLibrary.RandomBoolWithWeight
	bool RandomBoolFromStream(struct FRandomStream& Stream); // Function Engine.KismetMathLibrary.RandomBoolFromStream
	bool RandomBool(); // Function Engine.KismetMathLibrary.RandomBool
	float RadiansToDegrees(float A); // Function Engine.KismetMathLibrary.RadiansToDegrees
	struct FVector Quat_VectorUp(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_VectorUp
	struct FVector Quat_VectorRight(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_VectorRight
	struct FVector Quat_VectorForward(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_VectorForward
	struct FVector Quat_UnrotateVector(struct FQuat& Q, struct FVector& V); // Function Engine.KismetMathLibrary.Quat_UnrotateVector
	float Quat_SizeSquared(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_SizeSquared
	float Quat_Size(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_Size
	void Quat_SetFromEuler(struct FQuat& Q, struct FVector& Euler); // Function Engine.KismetMathLibrary.Quat_SetFromEuler
	void Quat_SetComponents(struct FQuat& Q, float X, float Y, float Z, float W); // Function Engine.KismetMathLibrary.Quat_SetComponents
	struct FRotator Quat_Rotator(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_Rotator
	struct FVector Quat_RotateVector(struct FQuat& Q, struct FVector& V); // Function Engine.KismetMathLibrary.Quat_RotateVector
	struct FQuat Quat_Normalized(struct FQuat& Q, float Tolerance); // Function Engine.KismetMathLibrary.Quat_Normalized
	void Quat_Normalize(struct FQuat& Q, float Tolerance); // Function Engine.KismetMathLibrary.Quat_Normalize
	struct FQuat Quat_MakeFromEuler(struct FVector& Euler); // Function Engine.KismetMathLibrary.Quat_MakeFromEuler
	struct FQuat Quat_Log(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_Log
	bool Quat_IsNormalized(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_IsNormalized
	bool Quat_IsNonFinite(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_IsNonFinite
	bool Quat_IsIdentity(struct FQuat& Q, float Tolerance); // Function Engine.KismetMathLibrary.Quat_IsIdentity
	bool Quat_IsFinite(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_IsFinite
	struct FQuat Quat_Inversed(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_Inversed
	struct FQuat Quat_Identity(); // Function Engine.KismetMathLibrary.Quat_Identity
	struct FVector Quat_GetRotationAxis(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_GetRotationAxis
	struct FVector Quat_GetAxisZ(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_GetAxisZ
	struct FVector Quat_GetAxisY(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_GetAxisY
	struct FVector Quat_GetAxisX(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_GetAxisX
	float Quat_GetAngle(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_GetAngle
	struct FQuat Quat_Exp(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_Exp
	struct FVector Quat_Euler(struct FQuat& Q); // Function Engine.KismetMathLibrary.Quat_Euler
	void Quat_EnforceShortestArcWith(struct FQuat& A, struct FQuat& B); // Function Engine.KismetMathLibrary.Quat_EnforceShortestArcWith
	float Quat_AngularDistance(struct FQuat& A, struct FQuat& B); // Function Engine.KismetMathLibrary.Quat_AngularDistance
	struct FVector ProjectVectorOnToVector(struct FVector V, struct FVector Target); // Function Engine.KismetMathLibrary.ProjectVectorOnToVector
	struct FVector ProjectVectorOnToPlane(struct FVector V, struct FVector PlaneNormal); // Function Engine.KismetMathLibrary.ProjectVectorOnToPlane
	struct FVector ProjectPointOnToPlane(struct FVector Point, struct FVector PlaneBase, struct FVector PlaneNormal); // Function Engine.KismetMathLibrary.ProjectPointOnToPlane
	bool PointsAreCoplanar(struct TArray<struct FVector>& Points, float Tolerance); // Function Engine.KismetMathLibrary.PointsAreCoplanar
	float PerlinNoise1D(float Value); // Function Engine.KismetMathLibrary.PerlinNoise1D
	int32_t Percent_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Percent_IntInt
	float Percent_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Percent_FloatFloat
	char Percent_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Percent_ByteByte
	int32_t Or_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Or_IntInt
	int64_t Or_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.Or_Int64Int64
	struct FDateTime Now(); // Function Engine.KismetMathLibrary.Now
	bool NotEqualExactly_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.NotEqualExactly_VectorVector
	bool NotEqualExactly_Vector4Vector4(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.NotEqualExactly_Vector4Vector4
	bool NotEqualExactly_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.NotEqualExactly_Vector2DVector2D
	bool NotEqual_VectorVector(struct FVector A, struct FVector B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NotEqual_VectorVector
	bool NotEqual_Vector4Vector4(struct FVector4& A, struct FVector4& B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NotEqual_Vector4Vector4
	bool NotEqual_Vector2DVector2D(struct FVector2D A, struct FVector2D B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NotEqual_Vector2DVector2D
	bool NotEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.NotEqual_TimespanTimespan
	bool NotEqual_RotatorRotator(struct FRotator A, struct FRotator B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NotEqual_RotatorRotator
	bool NotEqual_QuatQuat(struct FQuat& A, struct FQuat& B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NotEqual_QuatQuat
	bool NotEqual_ObjectObject(struct UObject* A, struct UObject* B); // Function Engine.KismetMathLibrary.NotEqual_ObjectObject
	bool NotEqual_NameName(struct FName A, struct FName B); // Function Engine.KismetMathLibrary.NotEqual_NameName
	bool NotEqual_MatrixMatrix(struct FMatrix& A, struct FMatrix& B, float Tolerance); // Function Engine.KismetMathLibrary.NotEqual_MatrixMatrix
	bool NotEqual_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // Function Engine.KismetMathLibrary.NotEqual_LinearColorLinearColor
	bool NotEqual_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // Function Engine.KismetMathLibrary.NotEqual_IntPointIntPoint
	bool NotEqual_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.NotEqual_IntInt
	bool NotEqual_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.NotEqual_Int64Int64
	bool NotEqual_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.NotEqual_FloatFloat
	bool NotEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.NotEqual_DateTimeDateTime
	bool NotEqual_ClassClass(UObject* A, UObject* B); // Function Engine.KismetMathLibrary.NotEqual_ClassClass
	bool NotEqual_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.NotEqual_ByteByte
	bool NotEqual_BoolBool(bool A, bool B); // Function Engine.KismetMathLibrary.NotEqual_BoolBool
	bool Not_PreBool(bool A); // Function Engine.KismetMathLibrary.Not_PreBool
	int64_t Not_Int64(int64_t A); // Function Engine.KismetMathLibrary.Not_Int64
	int32_t Not_Int(int32_t A); // Function Engine.KismetMathLibrary.Not_Int
	struct FVector2D NormalSafe2D(struct FVector2D A, float Tolerance); // Function Engine.KismetMathLibrary.NormalSafe2D
	float NormalizeToRange(float Value, float RangeMin, float RangeMax); // Function Engine.KismetMathLibrary.NormalizeToRange
	struct FRotator NormalizedDeltaRotator(struct FRotator A, struct FRotator B); // Function Engine.KismetMathLibrary.NormalizedDeltaRotator
	float NormalizeAxis(float angle); // Function Engine.KismetMathLibrary.NormalizeAxis
	void Normalize2D(struct FVector2D& A, float Tolerance); // Function Engine.KismetMathLibrary.Normalize2D
	struct FVector2D Normal2D(struct FVector2D A); // Function Engine.KismetMathLibrary.Normal2D
	struct FVector Normal(struct FVector A, float Tolerance); // Function Engine.KismetMathLibrary.Normal
	struct FVector NegateVector(struct FVector A); // Function Engine.KismetMathLibrary.NegateVector
	struct FRotator NegateRotator(struct FRotator A); // Function Engine.KismetMathLibrary.NegateRotator
	struct FVector2D Negated2D(struct FVector2D& A); // Function Engine.KismetMathLibrary.Negated2D
	bool NearlyEqual_TransformTransform(struct FTransform& A, struct FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance); // Function Engine.KismetMathLibrary.NearlyEqual_TransformTransform
	bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance); // Function Engine.KismetMathLibrary.NearlyEqual_FloatFloat
	float MultiplyMultiply_FloatFloat(float Base, float Exp); // Function Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat
	float MultiplyByPi(float Value); // Function Engine.KismetMathLibrary.MultiplyByPi
	struct FVector Multiply_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Multiply_VectorVector
	struct FVector Multiply_VectorInt(struct FVector A, int32_t B); // Function Engine.KismetMathLibrary.Multiply_VectorInt
	struct FVector Multiply_VectorFloat(struct FVector A, float B); // Function Engine.KismetMathLibrary.Multiply_VectorFloat
	struct FVector4 Multiply_Vector4Vector4(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.Multiply_Vector4Vector4
	struct FVector2D Multiply_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.Multiply_Vector2DVector2D
	struct FVector2D Multiply_Vector2DFloat(struct FVector2D A, float B); // Function Engine.KismetMathLibrary.Multiply_Vector2DFloat
	struct FTimespan Multiply_TimespanFloat(struct FTimespan A, float Scalar); // Function Engine.KismetMathLibrary.Multiply_TimespanFloat
	struct FRotator Multiply_RotatorInt(struct FRotator A, int32_t B); // Function Engine.KismetMathLibrary.Multiply_RotatorInt
	struct FRotator Multiply_RotatorFloat(struct FRotator A, float B); // Function Engine.KismetMathLibrary.Multiply_RotatorFloat
	struct FQuat Multiply_QuatQuat(struct FQuat& A, struct FQuat& B); // Function Engine.KismetMathLibrary.Multiply_QuatQuat
	struct FMatrix Multiply_MatrixMatrix(struct FMatrix& A, struct FMatrix& B); // Function Engine.KismetMathLibrary.Multiply_MatrixMatrix
	struct FMatrix Multiply_MatrixFloat(struct FMatrix& A, float B); // Function Engine.KismetMathLibrary.Multiply_MatrixFloat
	struct FLinearColor Multiply_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // Function Engine.KismetMathLibrary.Multiply_LinearColorLinearColor
	struct FLinearColor Multiply_LinearColorFloat(struct FLinearColor A, float B); // Function Engine.KismetMathLibrary.Multiply_LinearColorFloat
	struct FIntPoint Multiply_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // Function Engine.KismetMathLibrary.Multiply_IntPointIntPoint
	struct FIntPoint Multiply_IntPointInt(struct FIntPoint A, int32_t B); // Function Engine.KismetMathLibrary.Multiply_IntPointInt
	int32_t Multiply_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Multiply_IntInt
	float Multiply_IntFloat(int32_t A, float B); // Function Engine.KismetMathLibrary.Multiply_IntFloat
	int64_t Multiply_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.Multiply_Int64Int64
	float Multiply_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Multiply_FloatFloat
	char Multiply_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Multiply_ByteByte
	struct FVector MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal); // Function Engine.KismetMathLibrary.MirrorVectorByNormal
	void MinOfIntArray(struct TArray<int32_t>& IntArray, int32_t& IndexOfMinValue, int32_t& MinValue); // Function Engine.KismetMathLibrary.MinOfIntArray
	void MinOfFloatArray(struct TArray<float>& FloatArray, int32_t& IndexOfMinValue, float& MinValue); // Function Engine.KismetMathLibrary.MinOfFloatArray
	void MinOfByteArray(struct TArray<char>& ByteArray, int32_t& IndexOfMinValue, char& MinValue); // Function Engine.KismetMathLibrary.MinOfByteArray
	int64_t MinInt64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.MinInt64
	void MinimumAreaRectangle(struct UObject* WorldContextObject, struct TArray<struct FVector>& InVerts, struct FVector& SampleSurfaceNormal, struct FVector& OutRectCenter, struct FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw); // Function Engine.KismetMathLibrary.MinimumAreaRectangle
	int32_t Min(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Min
	void MaxOfIntArray(struct TArray<int32_t>& IntArray, int32_t& IndexOfMaxValue, int32_t& MaxValue); // Function Engine.KismetMathLibrary.MaxOfIntArray
	void MaxOfFloatArray(struct TArray<float>& FloatArray, int32_t& IndexOfMaxValue, float& MaxValue); // Function Engine.KismetMathLibrary.MaxOfFloatArray
	void MaxOfByteArray(struct TArray<char>& ByteArray, int32_t& IndexOfMaxValue, char& MaxValue); // Function Engine.KismetMathLibrary.MaxOfByteArray
	int64_t MaxInt64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.MaxInt64
	int32_t Max(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Max
	struct FVector4 Matrix_TransformVector4(struct FMatrix& M, struct FVector4 V); // Function Engine.KismetMathLibrary.Matrix_TransformVector4
	struct FVector4 Matrix_TransformVector(struct FMatrix& M, struct FVector V); // Function Engine.KismetMathLibrary.Matrix_TransformVector
	struct FVector4 Matrix_TransformPosition(struct FMatrix& M, struct FVector V); // Function Engine.KismetMathLibrary.Matrix_TransformPosition
	struct FQuat Matrix_ToQuat(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_ToQuat
	void Matrix_SetOrigin(struct FMatrix& M, struct FVector NewOrigin); // Function Engine.KismetMathLibrary.Matrix_SetOrigin
	void Matrix_SetColumn(struct FMatrix& M, char EMatrixColumns column, struct FVector Value); // Function Engine.KismetMathLibrary.Matrix_SetColumn
	void Matrix_SetAxis(struct FMatrix& M, char EAxis Axis, struct FVector AxisVector); // Function Engine.KismetMathLibrary.Matrix_SetAxis
	struct FMatrix Matrix_ScaleTranslation(struct FMatrix& M, struct FVector Scale3D); // Function Engine.KismetMathLibrary.Matrix_ScaleTranslation
	struct FMatrix Matrix_RemoveTranslation(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_RemoveTranslation
	void Matrix_RemoveScaling(struct FMatrix& M, float Tolerance); // Function Engine.KismetMathLibrary.Matrix_RemoveScaling
	struct FMatrix Matrix_Mirror(struct FMatrix& M, char EAxis MirrorAxis, char EAxis FlipAxis); // Function Engine.KismetMathLibrary.Matrix_Mirror
	struct FVector Matrix_InverseTransformVector(struct FMatrix& M, struct FVector V); // Function Engine.KismetMathLibrary.Matrix_InverseTransformVector
	struct FVector Matrix_InverseTransformPosition(struct FMatrix& M, struct FVector V); // Function Engine.KismetMathLibrary.Matrix_InverseTransformPosition
	struct FMatrix Matrix_Identity(); // Function Engine.KismetMathLibrary.Matrix_Identity
	struct FVector Matrix_GetUnitAxis(struct FMatrix& M, char EAxis Axis); // Function Engine.KismetMathLibrary.Matrix_GetUnitAxis
	void Matrix_GetUnitAxes(struct FMatrix& M, struct FVector& X, struct FVector& Y, struct FVector& Z); // Function Engine.KismetMathLibrary.Matrix_GetUnitAxes
	struct FMatrix Matrix_GetTransposed(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_GetTransposed
	struct FMatrix Matrix_GetTransposeAdjoint(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_GetTransposeAdjoint
	struct FVector Matrix_GetScaleVector(struct FMatrix& M, float Tolerance); // Function Engine.KismetMathLibrary.Matrix_GetScaleVector
	struct FVector Matrix_GetScaledAxis(struct FMatrix& M, char EAxis Axis); // Function Engine.KismetMathLibrary.Matrix_GetScaledAxis
	void Matrix_GetScaledAxes(struct FMatrix& M, struct FVector& X, struct FVector& Y, struct FVector& Z); // Function Engine.KismetMathLibrary.Matrix_GetScaledAxes
	float Matrix_GetRotDeterminant(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_GetRotDeterminant
	struct FRotator Matrix_GetRotator(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_GetRotator
	struct FVector Matrix_GetOrigin(struct FMatrix& InMatrix); // Function Engine.KismetMathLibrary.Matrix_GetOrigin
	float Matrix_GetMaximumAxisScale(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_GetMaximumAxisScale
	struct FMatrix Matrix_GetMatrixWithoutScale(struct FMatrix& M, float Tolerance); // Function Engine.KismetMathLibrary.Matrix_GetMatrixWithoutScale
	struct FMatrix Matrix_GetInverse(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_GetInverse
	bool Matrix_GetFrustumTopPlane(struct FMatrix& M, struct FPlane& OutPlane); // Function Engine.KismetMathLibrary.Matrix_GetFrustumTopPlane
	bool Matrix_GetFrustumRightPlane(struct FMatrix& M, struct FPlane& OutPlane); // Function Engine.KismetMathLibrary.Matrix_GetFrustumRightPlane
	bool Matrix_GetFrustumNearPlane(struct FMatrix& M, struct FPlane& OutPlane); // Function Engine.KismetMathLibrary.Matrix_GetFrustumNearPlane
	bool Matrix_GetFrustumLeftPlane(struct FMatrix& M, struct FPlane& OutPlane); // Function Engine.KismetMathLibrary.Matrix_GetFrustumLeftPlane
	bool Matrix_GetFrustumFarPlane(struct FMatrix& M, struct FPlane& OutPlane); // Function Engine.KismetMathLibrary.Matrix_GetFrustumFarPlane
	bool Matrix_GetFrustumBottomPlane(struct FMatrix& M, struct FPlane& OutPlane); // Function Engine.KismetMathLibrary.Matrix_GetFrustumBottomPlane
	float Matrix_GetDeterminant(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_GetDeterminant
	struct FVector Matrix_GetColumn(struct FMatrix& M, char EMatrixColumns column); // Function Engine.KismetMathLibrary.Matrix_GetColumn
	bool Matrix_ContainsNaN(struct FMatrix& M); // Function Engine.KismetMathLibrary.Matrix_ContainsNaN
	struct FMatrix Matrix_ConcatenateTranslation(struct FMatrix& M, struct FVector Translation); // Function Engine.KismetMathLibrary.Matrix_ConcatenateTranslation
	struct FMatrix Matrix_ApplyScale(struct FMatrix& M, float Scale); // Function Engine.KismetMathLibrary.Matrix_ApplyScale
	float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB); // Function Engine.KismetMathLibrary.MapRangeUnclamped
	float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB); // Function Engine.KismetMathLibrary.MapRangeClamped
	struct FVector4 MakeVector4(float X, float Y, float Z, float W); // Function Engine.KismetMathLibrary.MakeVector4
	struct FVector2D MakeVector2D(float X, float Y); // Function Engine.KismetMathLibrary.MakeVector2D
	struct FVector MakeVector(float X, float Y, float Z); // Function Engine.KismetMathLibrary.MakeVector
	struct FTransform MakeTransform(struct FVector Location, struct FRotator Rotation, struct FVector Scale); // Function Engine.KismetMathLibrary.MakeTransform
	struct FTimespan MakeTimespan2(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t FractionNano); // Function Engine.KismetMathLibrary.MakeTimespan2
	struct FTimespan MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds); // Function Engine.KismetMathLibrary.MakeTimespan
	struct FRotator MakeRotFromZY(struct FVector& Z, struct FVector& Y); // Function Engine.KismetMathLibrary.MakeRotFromZY
	struct FRotator MakeRotFromZX(struct FVector& Z, struct FVector& X); // Function Engine.KismetMathLibrary.MakeRotFromZX
	struct FRotator MakeRotFromZ(struct FVector& Z); // Function Engine.KismetMathLibrary.MakeRotFromZ
	struct FRotator MakeRotFromYZ(struct FVector& Y, struct FVector& Z); // Function Engine.KismetMathLibrary.MakeRotFromYZ
	struct FRotator MakeRotFromYX(struct FVector& Y, struct FVector& X); // Function Engine.KismetMathLibrary.MakeRotFromYX
	struct FRotator MakeRotFromY(struct FVector& Y); // Function Engine.KismetMathLibrary.MakeRotFromY
	struct FRotator MakeRotFromXZ(struct FVector& X, struct FVector& Z); // Function Engine.KismetMathLibrary.MakeRotFromXZ
	struct FRotator MakeRotFromXY(struct FVector& X, struct FVector& Y); // Function Engine.KismetMathLibrary.MakeRotFromXY
	struct FRotator MakeRotFromX(struct FVector& X); // Function Engine.KismetMathLibrary.MakeRotFromX
	struct FRotator MakeRotator(float Roll, float Pitch, float Yaw); // Function Engine.KismetMathLibrary.MakeRotator
	struct FRotator MakeRotationFromAxes(struct FVector Forward, struct FVector Right, struct FVector Up); // Function Engine.KismetMathLibrary.MakeRotationFromAxes
	struct FTransform MakeRelativeTransform(struct FTransform& A, struct FTransform& RelativeTo); // Function Engine.KismetMathLibrary.MakeRelativeTransform
	struct FRandomStream MakeRandomStream(int32_t InitialSeed); // Function Engine.KismetMathLibrary.MakeRandomStream
	struct FQualifiedFrameTime MakeQualifiedFrameTime(struct FFrameNumber Frame, struct FFrameRate FrameRate, float SubFrame); // Function Engine.KismetMathLibrary.MakeQualifiedFrameTime
	float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase); // Function Engine.KismetMathLibrary.MakePulsatingValue
	struct FPlane MakePlaneFromPointAndNormal(struct FVector Point, struct FVector Normal); // Function Engine.KismetMathLibrary.MakePlaneFromPointAndNormal
	struct FFrameRate MakeFrameRate(int32_t Numerator, int32_t Denominator); // Function Engine.KismetMathLibrary.MakeFrameRate
	struct FDateTime MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond); // Function Engine.KismetMathLibrary.MakeDateTime
	struct FLinearColor MakeColor(float R, float G, float B, float A); // Function Engine.KismetMathLibrary.MakeColor
	struct FBox2D MakeBox2D(struct FVector2D Min, struct FVector2D Max); // Function Engine.KismetMathLibrary.MakeBox2D
	struct FBox MakeBox(struct FVector Min, struct FVector Max); // Function Engine.KismetMathLibrary.MakeBox
	float Loge(float A); // Function Engine.KismetMathLibrary.Loge
	float Log(float A, float Base); // Function Engine.KismetMathLibrary.Log
	bool LinePlaneIntersection_OriginNormal(struct FVector& LineStart, struct FVector& LineEnd, struct FVector PlaneOrigin, struct FVector PlaneNormal, float& T, struct FVector& Intersection); // Function Engine.KismetMathLibrary.LinePlaneIntersection_OriginNormal
	bool LinePlaneIntersection(struct FVector& LineStart, struct FVector& LineEnd, struct FPlane& APlane, float& T, struct FVector& Intersection); // Function Engine.KismetMathLibrary.LinePlaneIntersection
	struct FLinearColor LinearColorLerpUsingHSV(struct FLinearColor A, struct FLinearColor B, float Alpha); // Function Engine.KismetMathLibrary.LinearColorLerpUsingHSV
	struct FLinearColor LinearColorLerp(struct FLinearColor A, struct FLinearColor B, float Alpha); // Function Engine.KismetMathLibrary.LinearColorLerp
	struct FLinearColor LinearColor_Yellow(); // Function Engine.KismetMathLibrary.LinearColor_Yellow
	struct FLinearColor LinearColor_White(); // Function Engine.KismetMathLibrary.LinearColor_White
	struct FLinearColor LinearColor_Transparent(); // Function Engine.KismetMathLibrary.LinearColor_Transparent
	struct FColor LinearColor_ToRGBE(struct FLinearColor InLinearColor); // Function Engine.KismetMathLibrary.LinearColor_ToRGBE
	struct FLinearColor LinearColor_ToNewOpacity(struct FLinearColor InColor, float InOpacity); // Function Engine.KismetMathLibrary.LinearColor_ToNewOpacity
	void LinearColor_SetTemperature(struct FLinearColor& InOutColor, float InTemperature); // Function Engine.KismetMathLibrary.LinearColor_SetTemperature
	void LinearColor_SetRGBA(struct FLinearColor& InOutColor, float R, float G, float B, float A); // Function Engine.KismetMathLibrary.LinearColor_SetRGBA
	void LinearColor_SetRandomHue(struct FLinearColor& InOutColor); // Function Engine.KismetMathLibrary.LinearColor_SetRandomHue
	void LinearColor_SetFromSRGB(struct FLinearColor& InOutColor, struct FColor& InSRGB); // Function Engine.KismetMathLibrary.LinearColor_SetFromSRGB
	void LinearColor_SetFromPow22(struct FLinearColor& InOutColor, struct FColor& InColor); // Function Engine.KismetMathLibrary.LinearColor_SetFromPow22
	void LinearColor_SetFromHSV(struct FLinearColor& InOutColor, float H, float S, float V, float A); // Function Engine.KismetMathLibrary.LinearColor_SetFromHSV
	void LinearColor_Set(struct FLinearColor& InOutColor, struct FLinearColor InColor); // Function Engine.KismetMathLibrary.LinearColor_Set
	struct FLinearColor LinearColor_Red(); // Function Engine.KismetMathLibrary.LinearColor_Red
	struct FColor LinearColor_QuantizeRound(struct FLinearColor InColor); // Function Engine.KismetMathLibrary.LinearColor_QuantizeRound
	struct FColor LinearColor_Quantize(struct FLinearColor InColor); // Function Engine.KismetMathLibrary.LinearColor_Quantize
	bool LinearColor_IsNearEqual(struct FLinearColor A, struct FLinearColor B, float Tolerance); // Function Engine.KismetMathLibrary.LinearColor_IsNearEqual
	struct FLinearColor LinearColor_Green(); // Function Engine.KismetMathLibrary.LinearColor_Green
	struct FLinearColor LinearColor_Gray(); // Function Engine.KismetMathLibrary.LinearColor_Gray
	float LinearColor_GetMin(struct FLinearColor InColor); // Function Engine.KismetMathLibrary.LinearColor_GetMin
	float LinearColor_GetMax(struct FLinearColor InColor); // Function Engine.KismetMathLibrary.LinearColor_GetMax
	float LinearColor_GetLuminance(struct FLinearColor InColor); // Function Engine.KismetMathLibrary.LinearColor_GetLuminance
	float LinearColor_Distance(struct FLinearColor C1, struct FLinearColor C2); // Function Engine.KismetMathLibrary.LinearColor_Distance
	struct FLinearColor LinearColor_Desaturated(struct FLinearColor InColor, float InDesaturation); // Function Engine.KismetMathLibrary.LinearColor_Desaturated
	struct FLinearColor LinearColor_Blue(); // Function Engine.KismetMathLibrary.LinearColor_Blue
	struct FLinearColor LinearColor_Black(); // Function Engine.KismetMathLibrary.LinearColor_Black
	struct FVector LessLess_VectorRotator(struct FVector A, struct FRotator B); // Function Engine.KismetMathLibrary.LessLess_VectorRotator
	bool LessEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.LessEqual_TimespanTimespan
	bool LessEqual_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.LessEqual_IntInt
	bool LessEqual_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.LessEqual_Int64Int64
	bool LessEqual_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.LessEqual_FloatFloat
	bool LessEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.LessEqual_DateTimeDateTime
	bool LessEqual_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.LessEqual_ByteByte
	bool Less_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.Less_TimespanTimespan
	bool Less_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Less_IntInt
	bool Less_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.Less_Int64Int64
	bool Less_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Less_FloatFloat
	bool Less_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.Less_DateTimeDateTime
	bool Less_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Less_ByteByte
	float Lerp(float A, float B, float Alpha); // Function Engine.KismetMathLibrary.Lerp
	bool IsZero2D(struct FVector2D& A); // Function Engine.KismetMathLibrary.IsZero2D
	bool IsPointInBoxWithTransform(struct FVector Point, struct FTransform& BoxWorldTransform, struct FVector BoxExtent); // Function Engine.KismetMathLibrary.IsPointInBoxWithTransform
	bool IsPointInBox(struct FVector Point, struct FVector BoxOrigin, struct FVector BoxExtent); // Function Engine.KismetMathLibrary.IsPointInBox
	bool IsNearlyZero2D(struct FVector2D& A, float Tolerance); // Function Engine.KismetMathLibrary.IsNearlyZero2D
	bool IsMorning(struct FDateTime A); // Function Engine.KismetMathLibrary.IsMorning
	bool IsLeapYear(int32_t Year); // Function Engine.KismetMathLibrary.IsLeapYear
	bool IsAfternoon(struct FDateTime A); // Function Engine.KismetMathLibrary.IsAfternoon
	struct FTransform InvertTransform(struct FTransform& T); // Function Engine.KismetMathLibrary.InvertTransform
	struct FRotator InverseTransformRotation(struct FTransform& T, struct FRotator Rotation); // Function Engine.KismetMathLibrary.InverseTransformRotation
	struct FVector InverseTransformLocation(struct FTransform& T, struct FVector Location); // Function Engine.KismetMathLibrary.InverseTransformLocation
	struct FVector InverseTransformDirection(struct FTransform& T, struct FVector Direction); // Function Engine.KismetMathLibrary.InverseTransformDirection
	struct FIntPoint IntPoint_Zero(); // Function Engine.KismetMathLibrary.IntPoint_Zero
	struct FIntPoint IntPoint_Up(); // Function Engine.KismetMathLibrary.IntPoint_Up
	struct FIntPoint IntPoint_Right(); // Function Engine.KismetMathLibrary.IntPoint_Right
	struct FIntPoint IntPoint_One(); // Function Engine.KismetMathLibrary.IntPoint_One
	struct FIntPoint IntPoint_Left(); // Function Engine.KismetMathLibrary.IntPoint_Left
	struct FIntPoint IntPoint_Down(); // Function Engine.KismetMathLibrary.IntPoint_Down
	bool InRange_IntInt(int32_t Value, int32_t Min, int32_t Max, bool InclusiveMin, bool InclusiveMax); // Function Engine.KismetMathLibrary.InRange_IntInt
	bool InRange_Int64Int64(int64_t Value, int64_t Min, int64_t Max, bool InclusiveMin, bool InclusiveMax); // Function Engine.KismetMathLibrary.InRange_Int64Int64
	bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax); // Function Engine.KismetMathLibrary.InRange_FloatFloat
	float Hypotenuse(float Width, float Height); // Function Engine.KismetMathLibrary.Hypotenuse
	struct FLinearColor HSVToRGBLinear(struct FLinearColor HSV); // Function Engine.KismetMathLibrary.HSVToRGBLinear
	void HSVToRGB_Vector(struct FLinearColor HSV, struct FLinearColor& RGB); // Function Engine.KismetMathLibrary.HSVToRGB_Vector
	struct FLinearColor HSVToRGB(float H, float S, float V, float A); // Function Engine.KismetMathLibrary.HSVToRGB
	float GridSnap_Float(float Location, float GridSize); // Function Engine.KismetMathLibrary.GridSnap_Float
	struct FVector GreaterGreater_VectorRotator(struct FVector A, struct FRotator B); // Function Engine.KismetMathLibrary.GreaterGreater_VectorRotator
	bool GreaterEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.GreaterEqual_TimespanTimespan
	bool GreaterEqual_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.GreaterEqual_IntInt
	bool GreaterEqual_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.GreaterEqual_Int64Int64
	bool GreaterEqual_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.GreaterEqual_FloatFloat
	bool GreaterEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.GreaterEqual_DateTimeDateTime
	bool GreaterEqual_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.GreaterEqual_ByteByte
	bool Greater_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.Greater_TimespanTimespan
	bool Greater_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Greater_IntInt
	bool Greater_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.Greater_Int64Int64
	bool Greater_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Greater_FloatFloat
	bool Greater_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.Greater_DateTimeDateTime
	bool Greater_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Greater_ByteByte
	int32_t GetYear(struct FDateTime A); // Function Engine.KismetMathLibrary.GetYear
	void GetYawPitchFromVector(struct FVector InVec, float& Yaw, float& Pitch); // Function Engine.KismetMathLibrary.GetYawPitchFromVector
	struct FVector GetVectorArrayAverage(struct TArray<struct FVector>& Vectors); // Function Engine.KismetMathLibrary.GetVectorArrayAverage
	struct FVector GetUpVector(struct FRotator InRot); // Function Engine.KismetMathLibrary.GetUpVector
	float GetTotalSeconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalSeconds
	float GetTotalMinutes(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalMinutes
	float GetTotalMilliseconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalMilliseconds
	float GetTotalHours(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalHours
	float GetTotalDays(struct FTimespan A); // Function Engine.KismetMathLibrary.GetTotalDays
	struct FTimespan GetTimeOfDay(struct FDateTime A); // Function Engine.KismetMathLibrary.GetTimeOfDay
	float GetTAU(); // Function Engine.KismetMathLibrary.GetTAU
	void GetSlopeDegreeAngles(struct FVector& MyRightYAxis, struct FVector& FloorNormal, struct FVector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle); // Function Engine.KismetMathLibrary.GetSlopeDegreeAngles
	int32_t GetSeconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetSeconds
	int32_t GetSecond(struct FDateTime A); // Function Engine.KismetMathLibrary.GetSecond
	struct FVector2D GetRotated2D(struct FVector2D A, float AngleDeg); // Function Engine.KismetMathLibrary.GetRotated2D
	struct FVector GetRightVector(struct FRotator InRot); // Function Engine.KismetMathLibrary.GetRightVector
	struct FVector GetReflectionVector(struct FVector Direction, struct FVector SurfaceNormal); // Function Engine.KismetMathLibrary.GetReflectionVector
	float GetPointDistanceToSegment(struct FVector Point, struct FVector SegmentStart, struct FVector SegmentEnd); // Function Engine.KismetMathLibrary.GetPointDistanceToSegment
	float GetPointDistanceToLine(struct FVector Point, struct FVector LineOrigin, struct FVector LineDirection); // Function Engine.KismetMathLibrary.GetPointDistanceToLine
	float GetPI(); // Function Engine.KismetMathLibrary.GetPI
	int32_t GetMonth(struct FDateTime A); // Function Engine.KismetMathLibrary.GetMonth
	int32_t GetMinutes(struct FTimespan A); // Function Engine.KismetMathLibrary.GetMinutes
	int32_t GetMinute(struct FDateTime A); // Function Engine.KismetMathLibrary.GetMinute
	float GetMinElement(struct FVector A); // Function Engine.KismetMathLibrary.GetMinElement
	float GetMin2D(struct FVector2D A); // Function Engine.KismetMathLibrary.GetMin2D
	int32_t GetMilliseconds(struct FTimespan A); // Function Engine.KismetMathLibrary.GetMilliseconds
	int32_t GetMillisecond(struct FDateTime A); // Function Engine.KismetMathLibrary.GetMillisecond
	float GetMaxElement(struct FVector A); // Function Engine.KismetMathLibrary.GetMaxElement
	float GetMax2D(struct FVector2D A); // Function Engine.KismetMathLibrary.GetMax2D
	int32_t GetHours(struct FTimespan A); // Function Engine.KismetMathLibrary.GetHours
	int32_t GetHour12(struct FDateTime A); // Function Engine.KismetMathLibrary.GetHour12
	int32_t GetHour(struct FDateTime A); // Function Engine.KismetMathLibrary.GetHour
	struct FVector GetForwardVector(struct FRotator InRot); // Function Engine.KismetMathLibrary.GetForwardVector
	struct FTimespan GetDuration(struct FTimespan A); // Function Engine.KismetMathLibrary.GetDuration
	struct FVector GetDirectionUnitVector(struct FVector from, struct FVector To); // Function Engine.KismetMathLibrary.GetDirectionUnitVector
	int32_t GetDays(struct FTimespan A); // Function Engine.KismetMathLibrary.GetDays
	int32_t GetDayOfYear(struct FDateTime A); // Function Engine.KismetMathLibrary.GetDayOfYear
	int32_t GetDay(struct FDateTime A); // Function Engine.KismetMathLibrary.GetDay
	struct FDateTime GetDate(struct FDateTime A); // Function Engine.KismetMathLibrary.GetDate
	void GetAzimuthAndElevation(struct FVector InDirection, struct FTransform& ReferenceFrame, float& Azimuth, float& Elevation); // Function Engine.KismetMathLibrary.GetAzimuthAndElevation
	void GetAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z); // Function Engine.KismetMathLibrary.GetAxes
	float GetAbsMax2D(struct FVector2D A); // Function Engine.KismetMathLibrary.GetAbsMax2D
	struct FVector2D GetAbs2D(struct FVector2D A); // Function Engine.KismetMathLibrary.GetAbs2D
	float FWrap(float Value, float Min, float Max); // Function Engine.KismetMathLibrary.FWrap
	struct FIntVector FTruncVector(struct FVector& InVector); // Function Engine.KismetMathLibrary.FTruncVector
	int64_t FTrunc64(float A); // Function Engine.KismetMathLibrary.FTrunc64
	int32_t FTrunc(float A); // Function Engine.KismetMathLibrary.FTrunc
	struct FTimespan FromSeconds(float Seconds); // Function Engine.KismetMathLibrary.FromSeconds
	struct FTimespan FromMinutes(float Minutes); // Function Engine.KismetMathLibrary.FromMinutes
	struct FTimespan FromMilliseconds(float Milliseconds); // Function Engine.KismetMathLibrary.FromMilliseconds
	struct FTimespan FromHours(float Hours); // Function Engine.KismetMathLibrary.FromHours
	struct FTimespan FromDays(float Days); // Function Engine.KismetMathLibrary.FromDays
	float Fraction(float A); // Function Engine.KismetMathLibrary.Fraction
	int32_t FMod(float Dividend, float Divisor, float& Remainder); // Function Engine.KismetMathLibrary.FMod
	float FMin(float A, float B); // Function Engine.KismetMathLibrary.FMin
	float FMax(float A, float B); // Function Engine.KismetMathLibrary.FMax
	float FloatSpringInterp(float Current, float Target, struct FFloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass); // Function Engine.KismetMathLibrary.FloatSpringInterp
	float FixedTurn(float InCurrent, float InDesired, float InDeltaRate); // Function Engine.KismetMathLibrary.FixedTurn
	float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.FInterpTo_Constant
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.FInterpTo
	float FInterpEaseInOut(float A, float B, float Alpha, float Exponent); // Function Engine.KismetMathLibrary.FInterpEaseInOut
	void FindNearestPointsOnLineSegments(struct FVector Segment1Start, struct FVector Segment1End, struct FVector Segment2Start, struct FVector Segment2End, struct FVector& Segment1Point, struct FVector& Segment2Point); // Function Engine.KismetMathLibrary.FindNearestPointsOnLineSegments
	struct FRotator FindLookAtRotation(struct FVector& Start, struct FVector& Target); // Function Engine.KismetMathLibrary.FindLookAtRotation
	struct FVector FindClosestPointOnSegment(struct FVector Point, struct FVector SegmentStart, struct FVector SegmentEnd); // Function Engine.KismetMathLibrary.FindClosestPointOnSegment
	struct FVector FindClosestPointOnLine(struct FVector Point, struct FVector LineOrigin, struct FVector LineDirection); // Function Engine.KismetMathLibrary.FindClosestPointOnLine
	int64_t FFloor64(float A); // Function Engine.KismetMathLibrary.FFloor64
	int32_t FFloor(float A); // Function Engine.KismetMathLibrary.FFloor
	float FClamp(float Value, float Min, float Max); // Function Engine.KismetMathLibrary.FClamp
	int64_t FCeil64(float A); // Function Engine.KismetMathLibrary.FCeil64
	int32_t FCeil(float A); // Function Engine.KismetMathLibrary.FCeil
	float Exp(float A); // Function Engine.KismetMathLibrary.Exp
	bool EqualExactly_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.EqualExactly_VectorVector
	bool EqualExactly_Vector4Vector4(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.EqualExactly_Vector4Vector4
	bool EqualExactly_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.EqualExactly_Vector2DVector2D
	bool EqualEqual_VectorVector(struct FVector A, struct FVector B, float ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_VectorVector
	bool EqualEqual_Vector4Vector4(struct FVector4& A, struct FVector4& B, float ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_Vector4Vector4
	bool EqualEqual_Vector2DVector2D(struct FVector2D A, struct FVector2D B, float ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_Vector2DVector2D
	bool EqualEqual_TransformTransform(struct FTransform& A, struct FTransform& B); // Function Engine.KismetMathLibrary.EqualEqual_TransformTransform
	bool EqualEqual_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.EqualEqual_TimespanTimespan
	bool EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B, float ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_RotatorRotator
	bool EqualEqual_QuatQuat(struct FQuat& A, struct FQuat& B, float Tolerance); // Function Engine.KismetMathLibrary.EqualEqual_QuatQuat
	bool EqualEqual_ObjectObject(struct UObject* A, struct UObject* B); // Function Engine.KismetMathLibrary.EqualEqual_ObjectObject
	bool EqualEqual_NameName(struct FName A, struct FName B); // Function Engine.KismetMathLibrary.EqualEqual_NameName
	bool EqualEqual_MatrixMatrix(struct FMatrix& A, struct FMatrix& B, float Tolerance); // Function Engine.KismetMathLibrary.EqualEqual_MatrixMatrix
	bool EqualEqual_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // Function Engine.KismetMathLibrary.EqualEqual_LinearColorLinearColor
	bool EqualEqual_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.EqualEqual_IntInt
	bool EqualEqual_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.EqualEqual_Int64Int64
	bool EqualEqual_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.EqualEqual_FloatFloat
	bool EqualEqual_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.EqualEqual_DateTimeDateTime
	bool EqualEqual_ClassClass(UObject* A, UObject* B); // Function Engine.KismetMathLibrary.EqualEqual_ClassClass
	bool EqualEqual_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.EqualEqual_ByteByte
	bool EqualEqual_BoolBool(bool A, bool B); // Function Engine.KismetMathLibrary.EqualEqual_BoolBool
	bool Equal_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // Function Engine.KismetMathLibrary.Equal_IntPointIntPoint
	float Ease(float A, float B, float Alpha, char EEasingFunc EasingFunc, float BlendExp, int32_t Steps); // Function Engine.KismetMathLibrary.Ease
	struct FVector DynamicWeightedMovingAverage_FVector(struct FVector CurrentSample, struct FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight); // Function Engine.KismetMathLibrary.DynamicWeightedMovingAverage_FVector
	struct FRotator DynamicWeightedMovingAverage_FRotator(struct FRotator CurrentSample, struct FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight); // Function Engine.KismetMathLibrary.DynamicWeightedMovingAverage_FRotator
	float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight); // Function Engine.KismetMathLibrary.DynamicWeightedMovingAverage_Float
	float DotProduct2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.DotProduct2D
	float Dot_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Dot_VectorVector
	struct FVector Divide_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Divide_VectorVector
	struct FVector Divide_VectorInt(struct FVector A, int32_t B); // Function Engine.KismetMathLibrary.Divide_VectorInt
	struct FVector Divide_VectorFloat(struct FVector A, float B); // Function Engine.KismetMathLibrary.Divide_VectorFloat
	struct FVector4 Divide_Vector4Vector4(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.Divide_Vector4Vector4
	struct FVector2D Divide_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.Divide_Vector2DVector2D
	struct FVector2D Divide_Vector2DFloat(struct FVector2D A, float B); // Function Engine.KismetMathLibrary.Divide_Vector2DFloat
	struct FTimespan Divide_TimespanFloat(struct FTimespan A, float Scalar); // Function Engine.KismetMathLibrary.Divide_TimespanFloat
	struct FLinearColor Divide_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // Function Engine.KismetMathLibrary.Divide_LinearColorLinearColor
	struct FIntPoint Divide_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // Function Engine.KismetMathLibrary.Divide_IntPointIntPoint
	struct FIntPoint Divide_IntPointInt(struct FIntPoint A, int32_t B); // Function Engine.KismetMathLibrary.Divide_IntPointInt
	int32_t Divide_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Divide_IntInt
	int64_t Divide_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.Divide_Int64Int64
	float Divide_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Divide_FloatFloat
	char Divide_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Divide_ByteByte
	float DistanceSquared2D(struct FVector2D v1, struct FVector2D v2); // Function Engine.KismetMathLibrary.DistanceSquared2D
	float Distance2D(struct FVector2D v1, struct FVector2D v2); // Function Engine.KismetMathLibrary.Distance2D
	float DegTan(float A); // Function Engine.KismetMathLibrary.DegTan
	float DegSin(float A); // Function Engine.KismetMathLibrary.DegSin
	float DegreesToRadians(float A); // Function Engine.KismetMathLibrary.DegreesToRadians
	float DegCos(float A); // Function Engine.KismetMathLibrary.DegCos
	float DegAtan2(float Y, float X); // Function Engine.KismetMathLibrary.DegAtan2
	float DegAtan(float A); // Function Engine.KismetMathLibrary.DegAtan
	float DegAsin(float A); // Function Engine.KismetMathLibrary.DegAsin
	float DegAcos(float A); // Function Engine.KismetMathLibrary.DegAcos
	int32_t DaysInYear(int32_t Year); // Function Engine.KismetMathLibrary.DaysInYear
	int32_t DaysInMonth(int32_t Year, int32_t Month); // Function Engine.KismetMathLibrary.DaysInMonth
	struct FDateTime DateTimeMinValue(); // Function Engine.KismetMathLibrary.DateTimeMinValue
	struct FDateTime DateTimeMaxValue(); // Function Engine.KismetMathLibrary.DateTimeMaxValue
	bool DateTimeFromString(struct FString DateTimeString, struct FDateTime& Result); // Function Engine.KismetMathLibrary.DateTimeFromString
	bool DateTimeFromIsoString(struct FString IsoString, struct FDateTime& Result); // Function Engine.KismetMathLibrary.DateTimeFromIsoString
	float CrossProduct2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.CrossProduct2D
	struct FVector Cross_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Cross_VectorVector
	struct FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length); // Function Engine.KismetMathLibrary.CreateVectorFromYawPitch
	float Cos(float A); // Function Engine.KismetMathLibrary.Cos
	struct FTransform ConvertTransformToRelative(struct FTransform& Transform, struct FTransform& ParentTransform); // Function Engine.KismetMathLibrary.ConvertTransformToRelative
	struct FVector2D Conv_VectorToVector2D(struct FVector InVector); // Function Engine.KismetMathLibrary.Conv_VectorToVector2D
	struct FTransform Conv_VectorToTransform(struct FVector InLocation); // Function Engine.KismetMathLibrary.Conv_VectorToTransform
	struct FRotator Conv_VectorToRotator(struct FVector InVec); // Function Engine.KismetMathLibrary.Conv_VectorToRotator
	struct FQuat Conv_VectorToQuaternion(struct FVector InVec); // Function Engine.KismetMathLibrary.Conv_VectorToQuaternion
	struct FLinearColor Conv_VectorToLinearColor(struct FVector InVec); // Function Engine.KismetMathLibrary.Conv_VectorToLinearColor
	struct FVector Conv_Vector4ToVector(struct FVector4& InVector4); // Function Engine.KismetMathLibrary.Conv_Vector4ToVector
	struct FRotator Conv_Vector4ToRotator(struct FVector4& InVec); // Function Engine.KismetMathLibrary.Conv_Vector4ToRotator
	struct FQuat Conv_Vector4ToQuaternion(struct FVector4& InVec); // Function Engine.KismetMathLibrary.Conv_Vector4ToQuaternion
	struct FVector Conv_Vector2DToVector(struct FVector2D InVector2D, float Z); // Function Engine.KismetMathLibrary.Conv_Vector2DToVector
	struct FIntPoint Conv_Vector2DToIntPoint(struct FVector2D InVector2D); // Function Engine.KismetMathLibrary.Conv_Vector2DToIntPoint
	struct FMatrix Conv_TransformToMatrix(struct FTransform& Transform); // Function Engine.KismetMathLibrary.Conv_TransformToMatrix
	struct FVector Conv_RotatorToVector(struct FRotator InRot); // Function Engine.KismetMathLibrary.Conv_RotatorToVector
	struct FTransform Conv_RotatorToTransform(struct FRotator& InRotator); // Function Engine.KismetMathLibrary.Conv_RotatorToTransform
	struct FTransform Conv_MatrixToTransform(struct FMatrix& InMatrix); // Function Engine.KismetMathLibrary.Conv_MatrixToTransform
	struct FRotator Conv_MatrixToRotator(struct FMatrix& InMatrix); // Function Engine.KismetMathLibrary.Conv_MatrixToRotator
	struct FVector Conv_LinearColorToVector(struct FLinearColor InLinearColor); // Function Engine.KismetMathLibrary.Conv_LinearColorToVector
	struct FColor Conv_LinearColorToColor(struct FLinearColor InLinearColor, bool InUseSRGB); // Function Engine.KismetMathLibrary.Conv_LinearColorToColor
	struct FVector Conv_IntVectorToVector(struct FIntVector& InIntVector); // Function Engine.KismetMathLibrary.Conv_IntVectorToVector
	struct FIntVector Conv_IntToIntVector(int32_t inInt); // Function Engine.KismetMathLibrary.Conv_IntToIntVector
	int64_t Conv_IntToInt64(int32_t inInt); // Function Engine.KismetMathLibrary.Conv_IntToInt64
	float Conv_IntToFloat(int32_t inInt); // Function Engine.KismetMathLibrary.Conv_IntToFloat
	char Conv_IntToByte(int32_t inInt); // Function Engine.KismetMathLibrary.Conv_IntToByte
	bool Conv_IntToBool(int32_t inInt); // Function Engine.KismetMathLibrary.Conv_IntToBool
	struct FVector2D Conv_IntPointToVector2D(struct FIntPoint InIntPoint); // Function Engine.KismetMathLibrary.Conv_IntPointToVector2D
	int32_t Conv_Int64ToInt(int64_t inInt); // Function Engine.KismetMathLibrary.Conv_Int64ToInt
	char Conv_Int64ToByte(int64_t inInt); // Function Engine.KismetMathLibrary.Conv_Int64ToByte
	struct FVector Conv_FloatToVector(float InFloat); // Function Engine.KismetMathLibrary.Conv_FloatToVector
	struct FLinearColor Conv_FloatToLinearColor(float InFloat); // Function Engine.KismetMathLibrary.Conv_FloatToLinearColor
	struct FLinearColor Conv_ColorToLinearColor(struct FColor InColor); // Function Engine.KismetMathLibrary.Conv_ColorToLinearColor
	int32_t Conv_ByteToInt(char InByte); // Function Engine.KismetMathLibrary.Conv_ByteToInt
	float Conv_ByteToFloat(char InByte); // Function Engine.KismetMathLibrary.Conv_ByteToFloat
	int32_t Conv_BoolToInt(bool InBool); // Function Engine.KismetMathLibrary.Conv_BoolToInt
	float Conv_BoolToFloat(bool InBool); // Function Engine.KismetMathLibrary.Conv_BoolToFloat
	char Conv_BoolToByte(bool InBool); // Function Engine.KismetMathLibrary.Conv_BoolToByte
	struct FTransform ComposeTransforms(struct FTransform& A, struct FTransform& B); // Function Engine.KismetMathLibrary.ComposeTransforms
	struct FRotator ComposeRotators(struct FRotator A, struct FRotator B); // Function Engine.KismetMathLibrary.ComposeRotators
	bool ClassIsChildOf(UObject* TestClass, UObject* ParentClass); // Function Engine.KismetMathLibrary.ClassIsChildOf
	struct FVector ClampVectorSize(struct FVector A, float Min, float Max); // Function Engine.KismetMathLibrary.ClampVectorSize
	int64_t ClampInt64(int64_t Value, int64_t Min, int64_t Max); // Function Engine.KismetMathLibrary.ClampInt64
	float ClampAxis(float angle); // Function Engine.KismetMathLibrary.ClampAxis
	struct FVector2D ClampAxes2D(struct FVector2D A, float MinAxisVal, float MaxAxisVal); // Function Engine.KismetMathLibrary.ClampAxes2D
	float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees); // Function Engine.KismetMathLibrary.ClampAngle
	int32_t Clamp(int32_t Value, int32_t Min, int32_t Max); // Function Engine.KismetMathLibrary.Clamp
	struct FLinearColor CInterpTo(struct FLinearColor Current, struct FLinearColor Target, float DeltaTime, float InterpSpeed); // Function Engine.KismetMathLibrary.CInterpTo
	void BreakVector4(struct FVector4& InVec, float& X, float& Y, float& Z, float& W); // Function Engine.KismetMathLibrary.BreakVector4
	void BreakVector2D(struct FVector2D InVec, float& X, float& Y); // Function Engine.KismetMathLibrary.BreakVector2D
	void BreakVector(struct FVector InVec, float& X, float& Y, float& Z); // Function Engine.KismetMathLibrary.BreakVector
	void BreakTransform(struct FTransform& InTransform, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // Function Engine.KismetMathLibrary.BreakTransform
	void BreakTimespan2(struct FTimespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& FractionNano); // Function Engine.KismetMathLibrary.BreakTimespan2
	void BreakTimespan(struct FTimespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& Milliseconds); // Function Engine.KismetMathLibrary.BreakTimespan
	void BreakRotIntoAxes(struct FRotator& InRot, struct FVector& X, struct FVector& Y, struct FVector& Z); // Function Engine.KismetMathLibrary.BreakRotIntoAxes
	void BreakRotator(struct FRotator InRot, float& Roll, float& Pitch, float& Yaw); // Function Engine.KismetMathLibrary.BreakRotator
	void BreakRandomStream(struct FRandomStream& InRandomStream, int32_t& InitialSeed); // Function Engine.KismetMathLibrary.BreakRandomStream
	void BreakQualifiedFrameTime(struct FQualifiedFrameTime& InFrameTime, struct FFrameNumber& Frame, struct FFrameRate& FrameRate, float& SubFrame); // Function Engine.KismetMathLibrary.BreakQualifiedFrameTime
	void BreakFrameRate(struct FFrameRate& InFrameRate, int32_t& Numerator, int32_t& Denominator); // Function Engine.KismetMathLibrary.BreakFrameRate
	void BreakDateTime(struct FDateTime InDateTime, int32_t& Year, int32_t& Month, int32_t& Day, int32_t& Hour, int32_t& Minute, int32_t& Second, int32_t& Millisecond); // Function Engine.KismetMathLibrary.BreakDateTime
	void BreakColor(struct FLinearColor InColor, float& R, float& G, float& B, float& A); // Function Engine.KismetMathLibrary.BreakColor
	bool BooleanXOR(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanXOR
	bool BooleanOR(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanOR
	bool BooleanNOR(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanNOR
	bool BooleanNAND(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanNAND
	bool BooleanAND(bool A, bool B); // Function Engine.KismetMathLibrary.BooleanAND
	char BMin(char A, char B); // Function Engine.KismetMathLibrary.BMin
	char BMax(char A, char B); // Function Engine.KismetMathLibrary.BMax
	float Atan2(float Y, float X); // Function Engine.KismetMathLibrary.Atan2
	float Atan(float A); // Function Engine.KismetMathLibrary.Atan
	float Asin(float A); // Function Engine.KismetMathLibrary.Asin
	int32_t And_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.And_IntInt
	int64_t And_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.And_Int64Int64
	struct FVector Add_VectorVector(struct FVector A, struct FVector B); // Function Engine.KismetMathLibrary.Add_VectorVector
	struct FVector Add_VectorInt(struct FVector A, int32_t B); // Function Engine.KismetMathLibrary.Add_VectorInt
	struct FVector Add_VectorFloat(struct FVector A, float B); // Function Engine.KismetMathLibrary.Add_VectorFloat
	struct FVector4 Add_Vector4Vector4(struct FVector4& A, struct FVector4& B); // Function Engine.KismetMathLibrary.Add_Vector4Vector4
	struct FVector2D Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B); // Function Engine.KismetMathLibrary.Add_Vector2DVector2D
	struct FVector2D Add_Vector2DFloat(struct FVector2D A, float B); // Function Engine.KismetMathLibrary.Add_Vector2DFloat
	struct FTimespan Add_TimespanTimespan(struct FTimespan A, struct FTimespan B); // Function Engine.KismetMathLibrary.Add_TimespanTimespan
	struct FQuat Add_QuatQuat(struct FQuat& A, struct FQuat& B); // Function Engine.KismetMathLibrary.Add_QuatQuat
	struct FMatrix Add_MatrixMatrix(struct FMatrix& A, struct FMatrix& B); // Function Engine.KismetMathLibrary.Add_MatrixMatrix
	struct FLinearColor Add_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B); // Function Engine.KismetMathLibrary.Add_LinearColorLinearColor
	struct FIntPoint Add_IntPointIntPoint(struct FIntPoint A, struct FIntPoint B); // Function Engine.KismetMathLibrary.Add_IntPointIntPoint
	struct FIntPoint Add_IntPointInt(struct FIntPoint A, int32_t B); // Function Engine.KismetMathLibrary.Add_IntPointInt
	int32_t Add_IntInt(int32_t A, int32_t B); // Function Engine.KismetMathLibrary.Add_IntInt
	int64_t Add_Int64Int64(int64_t A, int64_t B); // Function Engine.KismetMathLibrary.Add_Int64Int64
	float Add_FloatFloat(float A, float B); // Function Engine.KismetMathLibrary.Add_FloatFloat
	struct FDateTime Add_DateTimeTimespan(struct FDateTime A, struct FTimespan B); // Function Engine.KismetMathLibrary.Add_DateTimeTimespan
	struct FDateTime Add_DateTimeDateTime(struct FDateTime A, struct FDateTime B); // Function Engine.KismetMathLibrary.Add_DateTimeDateTime
	char Add_ByteByte(char A, char B); // Function Engine.KismetMathLibrary.Add_ByteByte
	float Acos(float A); // Function Engine.KismetMathLibrary.Acos
	int64_t Abs_Int64(int64_t A); // Function Engine.KismetMathLibrary.Abs_Int64
	int32_t Abs_Int(int32_t A); // Function Engine.KismetMathLibrary.Abs_Int
	float Abs(float A); // Function Engine.KismetMathLibrary.Abs
}; 



// Class Engine.MaterialExpressionDeriveNormalZ
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
	struct FExpressionInput InXY;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.PointLight
// Size: 0x238(Inherited: 0x230) 
struct APointLight : public ALight
{
	struct UPointLightComponent* PointLightComponent;  // 0x230(0x8)

	void SetRadius(float NewRadius); // Function Engine.PointLight.SetRadius
	void SetLightFalloffExponent(float NewLightFalloffExponent); // Function Engine.PointLight.SetLightFalloffExponent
}; 



// Class Engine.ParticleModuleTypeDataMesh
// Size: 0x98(Inherited: 0x30) 
struct UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
	struct UStaticMesh* Mesh;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)
	float LODSizeScale;  // 0x40(0x4)
	char bUseStaticMeshLODs : 1;  // 0x44(0x1)
	char CastShadows : 1;  // 0x44(0x1)
	char DoCollisions : 1;  // 0x44(0x1)
	char pad_68_1 : 5;  // 0x44(0x1)
	char EMeshScreenAlignment MeshAlignment;  // 0x45(0x1)
	char bOverrideMaterial : 1;  // 0x46(0x1)
	char bOverrideDefaultMotionBlurSettings : 1;  // 0x46(0x1)
	char bEnableMotionBlur : 1;  // 0x46(0x1)
	char pad_70_1 : 5;  // 0x46(0x1)
	char pad_71[2];  // 0x47(0x2)
	struct FRawDistributionVector RollPitchYawRange;  // 0x48(0x48)
	char EParticleAxisLock AxisLockOption;  // 0x90(0x1)
	char bCameraFacing : 1;  // 0x91(0x1)
	char pad_145_1 : 7;  // 0x91(0x1)
	char EMeshCameraFacingUpAxis CameraFacingUpAxisOption;  // 0x92(0x1)
	char EMeshCameraFacingOptions CameraFacingOption;  // 0x93(0x1)
	char bApplyParticleRotationAsSpin : 1;  // 0x94(0x1)
	char bFaceCameraDirectionRatherThanPosition : 1;  // 0x94(0x1)
	char bCollisionsConsiderPartilceSize : 1;  // 0x94(0x1)
	char pad_148_1 : 5;  // 0x94(0x1)
	char pad_149[4];  // 0x95(0x4)

}; 



// Class Engine.KismetNodeHelperLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{

	void MarkBit(int32_t& Data, int32_t Index); // Function Engine.KismetNodeHelperLibrary.MarkBit
	bool HasUnmarkedBit(int32_t Data, int32_t NumBits); // Function Engine.KismetNodeHelperLibrary.HasUnmarkedBit
	bool HasMarkedBit(int32_t Data, int32_t NumBits); // Function Engine.KismetNodeHelperLibrary.HasMarkedBit
	char GetValidValue(struct UEnum* Enum, char EnumeratorValue); // Function Engine.KismetNodeHelperLibrary.GetValidValue
	int32_t GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom); // Function Engine.KismetNodeHelperLibrary.GetUnmarkedBit
	int32_t GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits); // Function Engine.KismetNodeHelperLibrary.GetRandomUnmarkedBit
	int32_t GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits); // Function Engine.KismetNodeHelperLibrary.GetFirstUnmarkedBit
	char GetEnumeratorValueFromIndex(struct UEnum* Enum, char EnumeratorIndex); // Function Engine.KismetNodeHelperLibrary.GetEnumeratorValueFromIndex
	struct FString GetEnumeratorUserFriendlyName(struct UEnum* Enum, char EnumeratorValue); // Function Engine.KismetNodeHelperLibrary.GetEnumeratorUserFriendlyName
	struct FName GetEnumeratorName(struct UEnum* Enum, char EnumeratorValue); // Function Engine.KismetNodeHelperLibrary.GetEnumeratorName
	void ClearBit(int32_t& Data, int32_t Index); // Function Engine.KismetNodeHelperLibrary.ClearBit
	void ClearAllBits(int32_t& Data); // Function Engine.KismetNodeHelperLibrary.ClearAllBits
	bool BitIsMarked(int32_t Data, int32_t Index); // Function Engine.KismetNodeHelperLibrary.BitIsMarked
}; 



// Class Engine.KismetStringLibrary
// Size: 0x28(Inherited: 0x28) 
struct UKismetStringLibrary : public UBlueprintFunctionLibrary
{

	struct FString TrimTrailing(struct FString SourceString); // Function Engine.KismetStringLibrary.TrimTrailing
	struct FString Trim(struct FString SourceString); // Function Engine.KismetStringLibrary.Trim
	struct FString ToUpper(struct FString SourceString); // Function Engine.KismetStringLibrary.ToUpper
	struct FString ToLower(struct FString SourceString); // Function Engine.KismetStringLibrary.ToLower
	struct FString TimeSecondsToString(float InSeconds); // Function Engine.KismetStringLibrary.TimeSecondsToString
	bool StartsWith(struct FString SourceString, struct FString InPrefix, char ESearchCase SearchCase); // Function Engine.KismetStringLibrary.StartsWith
	bool Split(struct FString SourceString, struct FString InStr, struct FString& LeftS, struct FString& RightS, char ESearchCase SearchCase, char ESearchDir SearchDir); // Function Engine.KismetStringLibrary.Split
	struct FString RightPad(struct FString SourceString, int32_t ChCount); // Function Engine.KismetStringLibrary.RightPad
	struct FString RightChop(struct FString SourceString, int32_t Count); // Function Engine.KismetStringLibrary.RightChop
	struct FString Right(struct FString SourceString, int32_t Count); // Function Engine.KismetStringLibrary.Right
	struct FString Reverse(struct FString SourceString); // Function Engine.KismetStringLibrary.Reverse
	int32_t ReplaceInline(struct FString& SourceString, struct FString SearchText, struct FString ReplacementText, char ESearchCase SearchCase); // Function Engine.KismetStringLibrary.ReplaceInline
	struct FString Replace(struct FString SourceString, struct FString from, struct FString To, char ESearchCase SearchCase); // Function Engine.KismetStringLibrary.Replace
	struct TArray<struct FString> ParseIntoArray(struct FString SourceString, struct FString Delimiter, bool CullEmptyStrings); // Function Engine.KismetStringLibrary.ParseIntoArray
	bool NotEqual_StrStr(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.NotEqual_StrStr
	bool NotEqual_StriStri(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.NotEqual_StriStri
	struct FString Mid(struct FString SourceString, int32_t Start, int32_t Count); // Function Engine.KismetStringLibrary.Mid
	bool MatchesWildcard(struct FString SourceString, struct FString Wildcard, char ESearchCase SearchCase); // Function Engine.KismetStringLibrary.MatchesWildcard
	int32_t Len(struct FString S); // Function Engine.KismetStringLibrary.Len
	struct FString LeftPad(struct FString SourceString, int32_t ChCount); // Function Engine.KismetStringLibrary.LeftPad
	struct FString LeftChop(struct FString SourceString, int32_t Count); // Function Engine.KismetStringLibrary.LeftChop
	struct FString Left(struct FString SourceString, int32_t Count); // Function Engine.KismetStringLibrary.Left
	struct FString JoinStringArray(struct TArray<struct FString>& SourceArray, struct FString Separator); // Function Engine.KismetStringLibrary.JoinStringArray
	bool IsNumeric(struct FString SourceString); // Function Engine.KismetStringLibrary.IsNumeric
	bool IsEmpty(struct FString inString); // Function Engine.KismetStringLibrary.IsEmpty
	struct FString GetSubstring(struct FString SourceString, int32_t StartIndex, int32_t Length); // Function Engine.KismetStringLibrary.GetSubstring
	int32_t GetCharacterAsNumber(struct FString SourceString, int32_t Index); // Function Engine.KismetStringLibrary.GetCharacterAsNumber
	struct TArray<struct FString> GetCharacterArrayFromString(struct FString SourceString); // Function Engine.KismetStringLibrary.GetCharacterArrayFromString
	int32_t FindSubstring(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition); // Function Engine.KismetStringLibrary.FindSubstring
	bool EqualEqual_StrStr(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.EqualEqual_StrStr
	bool EqualEqual_StriStri(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.EqualEqual_StriStri
	bool EndsWith(struct FString SourceString, struct FString InSuffix, char ESearchCase SearchCase); // Function Engine.KismetStringLibrary.EndsWith
	int32_t CullArray(struct FString SourceString, struct TArray<struct FString>& inArray); // Function Engine.KismetStringLibrary.CullArray
	struct FString Conv_VectorToString(struct FVector InVec); // Function Engine.KismetStringLibrary.Conv_VectorToString
	struct FString Conv_Vector2dToString(struct FVector2D InVec); // Function Engine.KismetStringLibrary.Conv_Vector2dToString
	struct FString Conv_TransformToString(struct FTransform& InTrans); // Function Engine.KismetStringLibrary.Conv_TransformToString
	void Conv_StringToVector2D(struct FString inString, struct FVector2D& OutConvertedVector2D, bool& OutIsValid); // Function Engine.KismetStringLibrary.Conv_StringToVector2D
	void Conv_StringToVector(struct FString inString, struct FVector& OutConvertedVector, bool& OutIsValid); // Function Engine.KismetStringLibrary.Conv_StringToVector
	void Conv_StringToRotator(struct FString inString, struct FRotator& OutConvertedRotator, bool& OutIsValid); // Function Engine.KismetStringLibrary.Conv_StringToRotator
	struct FName Conv_StringToName(struct FString inString); // Function Engine.KismetStringLibrary.Conv_StringToName
	int32_t Conv_StringToInt(struct FString inString); // Function Engine.KismetStringLibrary.Conv_StringToInt
	float Conv_StringToFloat(struct FString inString); // Function Engine.KismetStringLibrary.Conv_StringToFloat
	void Conv_StringToColor(struct FString inString, struct FLinearColor& OutConvertedColor, bool& OutIsValid); // Function Engine.KismetStringLibrary.Conv_StringToColor
	struct FString Conv_RotatorToString(struct FRotator InRot); // Function Engine.KismetStringLibrary.Conv_RotatorToString
	struct FString Conv_ObjectToString(struct UObject* InObj); // Function Engine.KismetStringLibrary.Conv_ObjectToString
	struct FString Conv_NameToString(struct FName InName); // Function Engine.KismetStringLibrary.Conv_NameToString
	struct FString Conv_MatrixToString(struct FMatrix& InMatrix); // Function Engine.KismetStringLibrary.Conv_MatrixToString
	struct FString Conv_IntVectorToString(struct FIntVector InIntVec); // Function Engine.KismetStringLibrary.Conv_IntVectorToString
	struct FString Conv_IntToString(int32_t inInt); // Function Engine.KismetStringLibrary.Conv_IntToString
	struct FString Conv_IntPointToString(struct FIntPoint InIntPoint); // Function Engine.KismetStringLibrary.Conv_IntPointToString
	struct FString Conv_FloatToString(float InFloat); // Function Engine.KismetStringLibrary.Conv_FloatToString
	struct FString Conv_ColorToString(struct FLinearColor InColor); // Function Engine.KismetStringLibrary.Conv_ColorToString
	struct FString Conv_ByteToString(char InByte); // Function Engine.KismetStringLibrary.Conv_ByteToString
	struct FString Conv_BoolToString(bool InBool); // Function Engine.KismetStringLibrary.Conv_BoolToString
	bool Contains(struct FString SearchIn, struct FString Substring, bool bUseCase, bool bSearchFromEnd); // Function Engine.KismetStringLibrary.Contains
	struct FString Concat_StrStr(struct FString A, struct FString B); // Function Engine.KismetStringLibrary.Concat_StrStr
	struct FString BuildString_Vector2d(struct FString AppendTo, struct FString prefix, struct FVector2D InVector2D, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Vector2d
	struct FString BuildString_Vector(struct FString AppendTo, struct FString prefix, struct FVector InVector, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Vector
	struct FString BuildString_Rotator(struct FString AppendTo, struct FString prefix, struct FRotator InRot, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Rotator
	struct FString BuildString_Object(struct FString AppendTo, struct FString prefix, struct UObject* InObj, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Object
	struct FString BuildString_Name(struct FString AppendTo, struct FString prefix, struct FName InName, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Name
	struct FString BuildString_IntVector(struct FString AppendTo, struct FString prefix, struct FIntVector InIntVector, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_IntVector
	struct FString BuildString_Int(struct FString AppendTo, struct FString prefix, int32_t inInt, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Int
	struct FString BuildString_Float(struct FString AppendTo, struct FString prefix, float InFloat, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Float
	struct FString BuildString_Color(struct FString AppendTo, struct FString prefix, struct FLinearColor InColor, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Color
	struct FString BuildString_Bool(struct FString AppendTo, struct FString prefix, bool InBool, struct FString suffix); // Function Engine.KismetStringLibrary.BuildString_Bool
}; 



// Class Engine.Note
// Size: 0x220(Inherited: 0x220) 
struct ANote : public AActor
{

}; 



// Class Engine.Level
// Size: 0x298(Inherited: 0x28) 
struct ULevel : public UObject
{
	char pad_40[144];  // 0x28(0x90)
	struct UWorld* OwningWorld;  // 0xB8(0x8)
	struct UModel* Model;  // 0xC0(0x8)
	struct TArray<struct UModelComponent*> ModelComponents;  // 0xC8(0x10)
	struct ULevelActorContainer* ActorCluster;  // 0xD8(0x8)
	int32_t NumTextureStreamingUnbuiltComponents;  // 0xE0(0x4)
	int32_t NumTextureStreamingDirtyResources;  // 0xE4(0x4)
	struct ALevelScriptActor* LevelScriptActor;  // 0xE8(0x8)
	struct ANavigationObjectBase* NavListStart;  // 0xF0(0x8)
	struct ANavigationObjectBase* NavListEnd;  // 0xF8(0x8)
	struct TArray<struct UNavigationDataChunk*> NavDataChunks;  // 0x100(0x10)
	float LightmapTotalSize;  // 0x110(0x4)
	float ShadowmapTotalSize;  // 0x114(0x4)
	struct TArray<struct FVector> StaticNavigableGeometry;  // 0x118(0x10)
	struct TArray<struct FGuid> StreamingTextureGuids;  // 0x128(0x10)
	char pad_312[152];  // 0x138(0x98)
	struct FGuid LevelBuildDataId;  // 0x1D0(0x10)
	struct UMapBuildDataRegistry* MapBuildData;  // 0x1E0(0x8)
	struct FIntVector LightBuildLevelOffset;  // 0x1E8(0xC)
	char bIsLightingScenario : 1;  // 0x1F4(0x1)
	char pad_500_1 : 2;  // 0x1F4(0x1)
	char bTextureStreamingRotationChanged : 1;  // 0x1F4(0x1)
	char bStaticComponentsRegisteredInStreamingManager : 1;  // 0x1F4(0x1)
	char bIsVisible : 1;  // 0x1F4(0x1)
	char pad_500_2 : 2;  // 0x1F4(0x1)
	char pad_501[100];  // 0x1F5(0x64)
	struct AWorldSettings* WorldSettings;  // 0x258(0x8)
	char pad_608[8];  // 0x260(0x8)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x268(0x10)
	char pad_632[16];  // 0x278(0x10)
	struct TArray<struct FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors;  // 0x288(0x10)

}; 



// Class Engine.LightmappedSurfaceCollection
// Size: 0x40(Inherited: 0x28) 
struct ULightmappedSurfaceCollection : public UObject
{
	struct UModel* SourceModel;  // 0x28(0x8)
	struct TArray<int32_t> Surfaces;  // 0x30(0x10)

}; 



// Class Engine.LevelActorContainer
// Size: 0x38(Inherited: 0x28) 
struct ULevelActorContainer : public UObject
{
	struct TArray<struct AActor*> Actors;  // 0x28(0x10)

}; 



// Class Engine.LevelScriptBlueprint
// Size: 0xA0(Inherited: 0xA0) 
struct ULevelScriptBlueprint : public UBlueprint
{

}; 



// Class Engine.LevelStreamingDynamic
// Size: 0x150(Inherited: 0x150) 
struct ULevelStreamingDynamic : public ULevelStreaming
{
	char bInitiallyLoaded : 1;  // 0x148(0x1)
	char bInitiallyVisible : 1;  // 0x148(0x1)

	struct ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(struct UObject* WorldContextObject, struct TSoftObjectPtr<UWorld> Level, struct FVector Location, struct FRotator Rotation, bool& bOutSuccess, struct FString OptionalLevelNameOverride); // Function Engine.LevelStreamingDynamic.LoadLevelInstanceBySoftObjectPtr
	struct ULevelStreamingDynamic* LoadLevelInstance(struct UObject* WorldContextObject, struct FString LevelName, struct FVector Location, struct FRotator Rotation, bool& bOutSuccess, struct FString OptionalLevelNameOverride); // Function Engine.LevelStreamingDynamic.LoadLevelInstance
}; 



// Class Engine.VolumetricCloudComponent
// Size: 0x250(Inherited: 0x200) 
struct UVolumetricCloudComponent : public USceneComponent
{
	float LayerBottomAltitude;  // 0x1F8(0x4)
	float LayerHeight;  // 0x1FC(0x4)
	float TracingStartMaxDistance;  // 0x200(0x4)
	float TracingMaxDistance;  // 0x204(0x4)
	float PlanetRadius;  // 0x208(0x4)
	struct FColor GroundAlbedo;  // 0x20C(0x4)
	struct UMaterialInterface* Material;  // 0x210(0x8)
	char bUsePerSampleAtmosphericLightTransmittance : 1;  // 0x218(0x1)
	float SkyLightCloudBottomOcclusion;  // 0x21C(0x4)
	float ViewSampleCountScale;  // 0x220(0x4)
	float ReflectionSampleCountScale;  // 0x224(0x4)
	float ShadowViewSampleCountScale;  // 0x228(0x4)
	float ShadowReflectionSampleCountScale;  // 0x22C(0x4)
	float ShadowTracingDistance;  // 0x230(0x4)
	float StopTracingTransmittanceThreshold;  // 0x234(0x4)
	char pad_572_1 : 7;  // 0x23C(0x1)
	char pad_573[20];  // 0x23D(0x14)

	void SetViewSampleCountScale(float NewValue); // Function Engine.VolumetricCloudComponent.SetViewSampleCountScale
	void SetTracingStartMaxDistance(float NewValue); // Function Engine.VolumetricCloudComponent.SetTracingStartMaxDistance
	void SetTracingMaxDistance(float NewValue); // Function Engine.VolumetricCloudComponent.SetTracingMaxDistance
	void SetStopTracingTransmittanceThreshold(float NewValue); // Function Engine.VolumetricCloudComponent.SetStopTracingTransmittanceThreshold
	void SetSkyLightCloudBottomOcclusion(float NewValue); // Function Engine.VolumetricCloudComponent.SetSkyLightCloudBottomOcclusion
	void SetShadowViewSampleCountScale(float NewValue); // Function Engine.VolumetricCloudComponent.SetShadowViewSampleCountScale
	void SetShadowTracingDistance(float NewValue); // Function Engine.VolumetricCloudComponent.SetShadowTracingDistance
	void SetShadowReflectionSampleCountScale(float NewValue); // Function Engine.VolumetricCloudComponent.SetShadowReflectionSampleCountScale
	void SetReflectionSampleCountScale(float NewValue); // Function Engine.VolumetricCloudComponent.SetReflectionSampleCountScale
	void SetPlanetRadius(float NewValue); // Function Engine.VolumetricCloudComponent.SetPlanetRadius
	void SetMaterial(struct UMaterialInterface* NewValue); // Function Engine.VolumetricCloudComponent.SetMaterial
	void SetLayerHeight(float NewValue); // Function Engine.VolumetricCloudComponent.SetLayerHeight
	void SetLayerBottomAltitude(float NewValue); // Function Engine.VolumetricCloudComponent.SetLayerBottomAltitude
	void SetGroundAlbedo(struct FColor NewValue); // Function Engine.VolumetricCloudComponent.SetGroundAlbedo
	void SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue); // Function Engine.VolumetricCloudComponent.SetbUsePerSampleAtmosphericLightTransmittance
}; 



// Class Engine.MaterialExpressionSceneTexture
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSceneTexture : public UMaterialExpression
{
	struct FExpressionInput Coordinates;  // 0x40(0x14)
	char ESceneTextureId SceneTextureId;  // 0x54(0x1)
	char pad_85_1 : 7;  // 0x55(0x1)
	bool bFiltered : 1;  // 0x55(0x1)
	char pad_86[2];  // 0x56(0x2)

}; 



// Class Engine.LevelStreamingPersistent
// Size: 0x150(Inherited: 0x150) 
struct ULevelStreamingPersistent : public ULevelStreaming
{

}; 



// Class Engine.ParticleModuleKillBox
// Size: 0xC8(Inherited: 0x30) 
struct UParticleModuleKillBox : public UParticleModuleKillBase
{
	struct FRawDistributionVector LowerLeftCorner;  // 0x30(0x48)
	struct FRawDistributionVector UpperRightCorner;  // 0x78(0x48)
	char bAbsolute : 1;  // 0xC0(0x1)
	char bKillInside : 1;  // 0xC0(0x1)
	char bAxisAlignedAndFixedSize : 1;  // 0xC0(0x1)
	char pad_192_1 : 5;  // 0xC0(0x1)
	char pad_193[8];  // 0xC1(0x8)

}; 



// Class Engine.LightMapTexture2D
// Size: 0x1B0(Inherited: 0x1A0) 
struct ULightMapTexture2D : public UTexture2D
{
	char pad_416[16];  // 0x1A0(0x10)

}; 



// Class Engine.LightMapVirtualTexture2D
// Size: 0x1C0(Inherited: 0x1A0) 
struct ULightMapVirtualTexture2D : public UTexture2D
{
	struct TArray<int8_t> TypeToLayer;  // 0x1A0(0x10)
	char pad_432[16];  // 0x1B0(0x10)

}; 



// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.LightmassImportanceVolume
// Size: 0x258(Inherited: 0x258) 
struct ALightmassImportanceVolume : public AVolume
{

}; 



// Class Engine.SceneCapture
// Size: 0x230(Inherited: 0x220) 
struct ASceneCapture : public AActor
{
	struct UStaticMeshComponent* MeshComp;  // 0x220(0x8)
	struct USceneComponent* SceneComponent;  // 0x228(0x8)

}; 



// Class Engine.LightmassPortal
// Size: 0x228(Inherited: 0x220) 
struct ALightmassPortal : public AActor
{
	struct ULightmassPortalComponent* PortalComponent;  // 0x220(0x8)

}; 



// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
// Size: 0x90(Inherited: 0x40) 
struct UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression
{
	struct FExpressionInput Coordinates;  // 0x40(0x14)
	struct FExpressionInput WorldPosition;  // 0x54(0x14)
	struct FExpressionInput MipValue;  // 0x68(0x14)
	char pad_124[4];  // 0x7C(0x4)
	struct URuntimeVirtualTexture* VirtualTexture;  // 0x80(0x8)
	uint8_t  MaterialType;  // 0x88(0x1)
	char pad_137_1 : 7;  // 0x89(0x1)
	bool bSinglePhysicalSpace : 1;  // 0x89(0x1)
	char pad_138_1 : 7;  // 0x8A(0x1)
	bool bAdaptive : 1;  // 0x8A(0x1)
	char ERuntimeVirtualTextureMipValueMode MipValueMode;  // 0x8B(0x1)
	char ERuntimeVirtualTextureTextureAddressMode TextureAddressMode;  // 0x8C(0x1)
	char pad_141[3];  // 0x8D(0x3)

}; 



// Class Engine.LODSyncInterface
// Size: 0x28(Inherited: 0x28) 
struct ULODSyncInterface : public UInterface
{

}; 



// Class Engine.MapBuildDataRegistry
// Size: 0x238(Inherited: 0x28) 
struct UMapBuildDataRegistry : public UObject
{
	char ELightingBuildQuality LevelLightingQuality;  // 0x28(0x1)
	char pad_41[527];  // 0x29(0x20F)

}; 



// Class Engine.MaterialExpressionActorPositionWS
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionActorPositionWS : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionAdd
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionAdd : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	float ConstA;  // 0x68(0x4)
	float ConstB;  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionArctangent2Fast
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionArctangent2Fast : public UMaterialExpression
{
	struct FExpressionInput Y;  // 0x40(0x14)
	struct FExpressionInput X;  // 0x54(0x14)

}; 



// Class Engine.MaterialExpressionFmod
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionFmod : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)

}; 



// Class Engine.MaterialExpressionAntialiasedTextureMask
// Size: 0x88(Inherited: 0x80) 
struct UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
	float Threshold;  // 0x80(0x4)
	char ETextureColorChannel Channel;  // 0x84(0x1)
	char pad_133[3];  // 0x85(0x3)

}; 



// Class Engine.MaterialExpressionArccosine
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionArccosine : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionArcsineFast
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionArcsineFast : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionTransformPosition
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionTransformPosition : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char EMaterialPositionTransformSource TransformSourceType;  // 0x54(0x1)
	char EMaterialPositionTransformSource TransformType;  // 0x55(0x1)
	char pad_86[2];  // 0x56(0x2)

}; 



// Class Engine.MaterialExpressionArctangent
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionArctangent : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.VisualLoggerKismetLibrary
// Size: 0x28(Inherited: 0x28) 
struct UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{

	void RedirectVislog(struct UObject* SourceOwner, struct UObject* DestinationOwner); // Function Engine.VisualLoggerKismetLibrary.RedirectVislog
	void LogText(struct UObject* WorldContextObject, struct FString Text, struct FName LogCategory, bool bAddToMessageLog); // Function Engine.VisualLoggerKismetLibrary.LogText
	void LogSegment(struct UObject* WorldContextObject, struct FVector SegmentStart, struct FVector SegmentEnd, struct FString Text, struct FLinearColor ObjectColor, float Thickness, struct FName CategoryName, bool bAddToMessageLog); // Function Engine.VisualLoggerKismetLibrary.LogSegment
	void LogLocation(struct UObject* WorldContextObject, struct FVector Location, struct FString Text, struct FLinearColor ObjectColor, float Radius, struct FName LogCategory, bool bAddToMessageLog); // Function Engine.VisualLoggerKismetLibrary.LogLocation
	void LogBox(struct UObject* WorldContextObject, struct FBox BoxShape, struct FString Text, struct FLinearColor ObjectColor, struct FName LogCategory, bool bAddToMessageLog); // Function Engine.VisualLoggerKismetLibrary.LogBox
	void EnableRecording(bool bEnabled); // Function Engine.VisualLoggerKismetLibrary.EnableRecording
}; 



// Class Engine.MaterialExpressionLightmassReplace
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionLightmassReplace : public UMaterialExpression
{
	struct FExpressionInput Realtime;  // 0x40(0x14)
	struct FExpressionInput Lightmass;  // 0x54(0x14)

}; 



// Class Engine.MaterialExpressionAtmosphericFogColor
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
	struct FExpressionInput WorldPosition;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionAtmosphericLightVector
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionAtmosphericLightVector : public UMaterialExpression
{

}; 



// Class Engine.TriggerCapsule
// Size: 0x228(Inherited: 0x228) 
struct ATriggerCapsule : public ATriggerBase
{

}; 



// Class Engine.NavigationDataChunk
// Size: 0x30(Inherited: 0x28) 
struct UNavigationDataChunk : public UObject
{
	struct FName NavigationDataName;  // 0x28(0x8)

}; 



// Class Engine.MaterialExpressionBentNormalCustomOutput
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionBlendMaterialAttributes
// Size: 0x88(Inherited: 0x40) 
struct UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
	struct FMaterialAttributesInput A;  // 0x40(0x18)
	struct FMaterialAttributesInput B;  // 0x58(0x18)
	struct FExpressionInput Alpha;  // 0x70(0x14)
	char EMaterialAttributeBlend PixelAttributeBlendType;  // 0x84(0x1)
	char EMaterialAttributeBlend VertexAttributeBlendType;  // 0x85(0x1)
	char pad_134[2];  // 0x86(0x2)

}; 



// Class Engine.PlanarReflection
// Size: 0x240(Inherited: 0x230) 
struct APlanarReflection : public ASceneCapture
{
	struct UPlanarReflectionComponent* PlanarReflectionComponent;  // 0x230(0x8)
	char pad_568_1 : 7;  // 0x238(0x1)
	bool bShowPreviewPlane : 1;  // 0x238(0x1)
	char pad_569[7];  // 0x239(0x7)

	void OnInterpToggle(bool bEnable); // Function Engine.PlanarReflection.OnInterpToggle
}; 



// Class Engine.MaterialExpressionBreakMaterialAttributes
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
	struct FMaterialAttributesInput MaterialAttributes;  // 0x40(0x18)

}; 



// Class Engine.ProxyLODMeshSimplificationSettings
// Size: 0x40(Inherited: 0x38) 
struct UProxyLODMeshSimplificationSettings : public UDeveloperSettings
{
	struct FName ProxyLODMeshReductionModuleName;  // 0x38(0x8)

}; 



// Class Engine.MaterialExpressionCeil
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionCeil : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionSaturate
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSaturate : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionParameter
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionParameter : public UMaterialExpression
{
	struct FName ParameterName;  // 0x40(0x8)
	struct FGuid ExpressionGUID;  // 0x48(0x10)

}; 



// Class Engine.MaterialExpressionChannelMaskParameter
// Size: 0x78(Inherited: 0x70) 
struct UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter
{
	char EChannelMaskParameterColor MaskChannel;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)

}; 



// Class Engine.MaterialExpressionConstant
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionConstant : public UMaterialExpression
{
	float R;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 



// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionConstant2Vector : public UMaterialExpression
{
	float R;  // 0x40(0x4)
	float G;  // 0x44(0x4)

}; 



// Class Engine.MaterialExpressionConstantBiasScale
// Size: 0x60(Inherited: 0x40) 
struct UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	float Bias;  // 0x54(0x4)
	float Scale;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 



// Class Engine.MaterialExpressionTwoSidedSign
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionTwoSidedSign : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionScalarParameter
// Size: 0x60(Inherited: 0x58) 
struct UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
	float DefaultValue;  // 0x58(0x4)
	char pad_92_1 : 7;  // 0x5C(0x1)
	bool bUseCustomPrimitiveData : 1;  // 0x5C(0x1)
	char PrimitiveDataIndex;  // 0x5D(0x1)
	char pad_94[2];  // 0x5E(0x2)

}; 



// Class Engine.MaterialExpressionDDY
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionDDY : public UMaterialExpression
{
	struct FExpressionInput Value;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionDecalMipmapLevel
// Size: 0x60(Inherited: 0x40) 
struct UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
	struct FExpressionInput TextureSize;  // 0x40(0x14)
	float ConstWidth;  // 0x54(0x4)
	float ConstHeight;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 



// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x70(Inherited: 0x38) 
struct UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
	struct UDistributionFloat* DragScale;  // 0x38(0x8)
	struct FRawDistributionFloat DragScaleRaw;  // 0x40(0x30)

}; 



// Class Engine.MaterialExpressionDeltaTime
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionDeltaTime : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionDepthFade
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionDepthFade : public UMaterialExpression
{
	struct FExpressionInput InOpacity;  // 0x40(0x14)
	struct FExpressionInput FadeDistance;  // 0x54(0x14)
	float OpacityDefault;  // 0x68(0x4)
	float FadeDistanceDefault;  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionDesaturation
// Size: 0x78(Inherited: 0x40) 
struct UMaterialExpressionDesaturation : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	struct FExpressionInput Fraction;  // 0x54(0x14)
	struct FLinearColor LuminanceFactors;  // 0x68(0x10)

}; 



// Class Engine.PlatformEventsComponent
// Size: 0xD0(Inherited: 0xB0) 
struct UPlatformEventsComponent : public UActorComponent
{
	struct FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate;  // 0xB0(0x10)
	struct FMulticastInlineDelegate PlatformChangedToTabletModeDelegate;  // 0xC0(0x10)

	bool SupportsConvertibleLaptops(); // Function Engine.PlatformEventsComponent.SupportsConvertibleLaptops
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature
	bool IsInTabletMode(); // Function Engine.PlatformEventsComponent.IsInTabletMode
	bool IsInLaptopMode(); // Function Engine.PlatformEventsComponent.IsInLaptopMode
}; 



// Class Engine.MaterialExpressionDistance
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionDistance : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)

}; 



// Class Engine.RendererOverrideSettings
// Size: 0x40(Inherited: 0x38) 
struct URendererOverrideSettings : public UDeveloperSettings
{
	char bSupportAllShaderPermutations : 1;  // 0x38(0x1)
	char bForceRecomputeTangents : 1;  // 0x38(0x1)
	char pad_56_1 : 6;  // 0x38(0x1)
	char pad_57[8];  // 0x39(0x8)

}; 



// Class Engine.MaterialExpressionWorldPosition
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionWorldPosition : public UMaterialExpression
{
	char EWorldPositionIncludedOffsets WorldPositionShaderOffset;  // 0x40(0x1)
	char pad_65[7];  // 0x41(0x7)

}; 



// Class Engine.MaterialExpressionDistanceCullFade
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionDistanceCullFade : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionDistanceFieldsRenderingSwitch
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionDistanceFieldsRenderingSwitch : public UMaterialExpression
{
	struct FExpressionInput No;  // 0x40(0x14)
	struct FExpressionInput Yes;  // 0x54(0x14)

}; 



// Class Engine.MaterialExpressionDistanceToNearestSurface
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
	struct FExpressionInput position;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionDynamicParameter
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionDynamicParameter : public UMaterialExpression
{
	struct TArray<struct FString> ParamNames;  // 0x40(0x10)
	struct FLinearColor DefaultValue;  // 0x50(0x10)
	uint32_t ParameterIndex;  // 0x60(0x4)
	char pad_100[4];  // 0x64(0x4)

}; 



// Class Engine.MaterialExpressionEyeAdaptation
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionEyeAdaptation : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionFeatureLevelSwitch
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
	struct FExpressionInput Default;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.ParticleSpriteEmitter
// Size: 0x1B8(Inherited: 0x1B8) 
struct UParticleSpriteEmitter : public UParticleEmitter
{

}; 



// Class Engine.MaterialExpressionFontSample
// Size: 0x50(Inherited: 0x40) 
struct UMaterialExpressionFontSample : public UMaterialExpression
{
	struct UFont* Font;  // 0x40(0x8)
	int32_t FontTexturePage;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 



// Class Engine.VirtualTexturePoolConfig
// Size: 0x40(Inherited: 0x28) 
struct UVirtualTexturePoolConfig : public UObject
{
	int32_t DefaultSizeInMegabyte;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct TArray<struct FVirtualTextureSpacePoolConfig> Pools;  // 0x30(0x10)

}; 



// Class Engine.MaterialExpressionFresnel
// Size: 0x88(Inherited: 0x40) 
struct UMaterialExpressionFresnel : public UMaterialExpression
{
	struct FExpressionInput ExponentIn;  // 0x40(0x14)
	float Exponent;  // 0x54(0x4)
	struct FExpressionInput BaseReflectFractionIn;  // 0x58(0x14)
	float BaseReflectFraction;  // 0x6C(0x4)
	struct FExpressionInput Normal;  // 0x70(0x14)
	char pad_132[4];  // 0x84(0x4)

}; 



// Class Engine.MaterialExpressionFunctionOutput
// Size: 0x88(Inherited: 0x40) 
struct UMaterialExpressionFunctionOutput : public UMaterialExpression
{
	struct FName OutputName;  // 0x40(0x8)
	struct FString Description;  // 0x48(0x10)
	int32_t SortPriority;  // 0x58(0x4)
	struct FExpressionInput A;  // 0x5C(0x14)
	char bLastPreviewed : 1;  // 0x70(0x1)
	char pad_112_1 : 7;  // 0x70(0x1)
	char pad_113[4];  // 0x71(0x4)
	struct FGuid ID;  // 0x74(0x10)
	char pad_132[4];  // 0x84(0x4)

}; 



// Class Engine.VectorFieldComponent
// Size: 0x480(Inherited: 0x450) 
struct UVectorFieldComponent : public UPrimitiveComponent
{
	struct UVectorField* VectorField;  // 0x450(0x8)
	float Intensity;  // 0x458(0x4)
	float Tightness;  // 0x45C(0x4)
	char bPreviewVectorField : 1;  // 0x460(0x1)
	char pad_1120_1 : 7;  // 0x460(0x1)
	char pad_1121[32];  // 0x461(0x20)

	void SetIntensity(float NewIntensity); // Function Engine.VectorFieldComponent.SetIntensity
}; 



// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
	struct FMaterialAttributesInput MaterialAttributes;  // 0x40(0x18)
	struct TArray<struct FGuid> AttributeGetTypes;  // 0x58(0x10)

}; 



// Class Engine.SceneCaptureComponent
// Size: 0x2B0(Inherited: 0x200) 
struct USceneCaptureComponent : public USceneComponent
{
	uint8_t  PrimitiveRenderMode;  // 0x1F8(0x1)
	char ESceneCaptureSource CaptureSource;  // 0x1F9(0x1)
	char bCaptureEveryFrame : 1;  // 0x1FA(0x1)
	char bCaptureOnMovement : 1;  // 0x1FA(0x1)
	char pad_514_1 : 5;  // 0x202(0x1)
	bool bAlwaysPersistRenderingState : 1;  // 0x1FB(0x1)
	struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;  // 0x200(0x10)
	struct TArray<struct AActor*> HiddenActors;  // 0x210(0x10)
	struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents;  // 0x220(0x10)
	struct TArray<struct AActor*> ShowOnlyActors;  // 0x230(0x10)
	float LODDistanceFactor;  // 0x240(0x4)
	float MaxViewDistanceOverride;  // 0x244(0x4)
	int32_t CaptureSortPriority;  // 0x248(0x4)
	char pad_591_1 : 7;  // 0x24F(0x1)
	bool bUseRayTracingIfEnabled : 1;  // 0x24C(0x1)
	struct TArray<struct FEngineShowFlagsSetting> ShowFlagSettings;  // 0x250(0x10)
	char pad_608[48];  // 0x260(0x30)
	struct FString ProfilingEventName;  // 0x290(0x10)
	char pad_672[16];  // 0x2A0(0x10)

	void ShowOnlyComponent(struct UPrimitiveComponent* InComponent); // Function Engine.SceneCaptureComponent.ShowOnlyComponent
	void ShowOnlyActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.ShowOnlyActorComponents
	void SetCaptureSortPriority(int32_t NewCaptureSortPriority); // Function Engine.SceneCaptureComponent.SetCaptureSortPriority
	void RemoveShowOnlyComponent(struct UPrimitiveComponent* InComponent); // Function Engine.SceneCaptureComponent.RemoveShowOnlyComponent
	void RemoveShowOnlyActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.RemoveShowOnlyActorComponents
	void HideComponent(struct UPrimitiveComponent* InComponent); // Function Engine.SceneCaptureComponent.HideComponent
	void HideActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.HideActorComponents
	void ClearShowOnlyComponents(); // Function Engine.SceneCaptureComponent.ClearShowOnlyComponents
	void ClearHiddenComponents(); // Function Engine.SceneCaptureComponent.ClearHiddenComponents
}; 



// Class Engine.MaterialExpressionGIReplace
// Size: 0x80(Inherited: 0x40) 
struct UMaterialExpressionGIReplace : public UMaterialExpression
{
	struct FExpressionInput Default;  // 0x40(0x14)
	struct FExpressionInput StaticIndirect;  // 0x54(0x14)
	struct FExpressionInput DynamicIndirect;  // 0x68(0x14)
	char pad_124[4];  // 0x7C(0x4)

}; 



// Class Engine.MaterialExpressionParticleDirection
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleDirection : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionHairColor
// Size: 0x80(Inherited: 0x40) 
struct UMaterialExpressionHairColor : public UMaterialExpression
{
	struct FExpressionInput Melanin;  // 0x40(0x14)
	struct FExpressionInput Redness;  // 0x54(0x14)
	struct FExpressionInput DyeColor;  // 0x68(0x14)
	char pad_124[4];  // 0x7C(0x4)

}; 



// Class Engine.MaterialExpressionIf
// Size: 0xB0(Inherited: 0x40) 
struct UMaterialExpressionIf : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	struct FExpressionInput AGreaterThanB;  // 0x68(0x14)
	struct FExpressionInput AEqualsB;  // 0x7C(0x14)
	struct FExpressionInput ALessThanB;  // 0x90(0x14)
	float EqualsThreshold;  // 0xA4(0x4)
	float ConstB;  // 0xA8(0x4)
	float ConstAEqualsB;  // 0xAC(0x4)

}; 



// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x88(Inherited: 0x40) 
struct UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	struct FExpressionInput Alpha;  // 0x68(0x14)
	float ConstA;  // 0x7C(0x4)
	float ConstB;  // 0x80(0x4)
	float ConstAlpha;  // 0x84(0x4)

}; 



// Class Engine.MaterialExpressionLogarithm10
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionLogarithm10 : public UMaterialExpression
{
	struct FExpressionInput X;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionMakeMaterialAttributes
// Size: 0x270(Inherited: 0x40) 
struct UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
	struct FExpressionInput BaseColor;  // 0x40(0x14)
	struct FExpressionInput Metallic;  // 0x54(0x14)
	struct FExpressionInput Specular;  // 0x68(0x14)
	struct FExpressionInput Roughness;  // 0x7C(0x14)
	struct FExpressionInput Anisotropy;  // 0x90(0x14)
	struct FExpressionInput EmissiveColor;  // 0xA4(0x14)
	struct FExpressionInput Opacity;  // 0xB8(0x14)
	struct FExpressionInput OpacityMask;  // 0xCC(0x14)
	struct FExpressionInput Normal;  // 0xE0(0x14)
	struct FExpressionInput Tangent;  // 0xF4(0x14)
	struct FExpressionInput WorldPositionOffset;  // 0x108(0x14)
	struct FExpressionInput WorldDisplacement;  // 0x11C(0x14)
	struct FExpressionInput TessellationMultiplier;  // 0x130(0x14)
	struct FExpressionInput SubsurfaceColor;  // 0x144(0x14)
	struct FExpressionInput ClearCoat;  // 0x158(0x14)
	struct FExpressionInput ClearCoatRoughness;  // 0x16C(0x14)
	struct FExpressionInput AmbientOcclusion;  // 0x180(0x14)
	struct FExpressionInput Refraction;  // 0x194(0x14)
	struct FExpressionInput CustomizedUVs[8];  // 0x1A8(0xA0)
	struct FExpressionInput PixelDepthOffset;  // 0x248(0x14)
	struct FExpressionInput ShadingModel;  // 0x25C(0x14)

}; 



// Class Engine.MaterialExpressionSobol
// Size: 0x88(Inherited: 0x40) 
struct UMaterialExpressionSobol : public UMaterialExpression
{
	struct FExpressionInput Cell;  // 0x40(0x14)
	struct FExpressionInput Index;  // 0x54(0x14)
	struct FExpressionInput Seed;  // 0x68(0x14)
	uint32_t ConstIndex;  // 0x7C(0x4)
	struct FVector2D ConstSeed;  // 0x80(0x8)

}; 



// Class Engine.MaterialExpressionSign
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSign : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionMapARPassthroughCameraUV
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionMapARPassthroughCameraUV : public UMaterialExpression
{
	struct FExpressionInput Coordinates;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionMaterialAttributeLayers
// Size: 0xE8(Inherited: 0x40) 
struct UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
	struct FName ParameterName;  // 0x40(0x8)
	struct FGuid ExpressionGUID;  // 0x48(0x10)
	struct FMaterialAttributesInput Input;  // 0x58(0x18)
	struct FMaterialLayersFunctions DefaultLayers;  // 0x70(0x40)
	struct TArray<struct UMaterialExpressionMaterialFunctionCall*> LayerCallers;  // 0xB0(0x10)
	int32_t NumActiveLayerCallers;  // 0xC0(0x4)
	char pad_196[4];  // 0xC4(0x4)
	struct TArray<struct UMaterialExpressionMaterialFunctionCall*> BlendCallers;  // 0xC8(0x10)
	int32_t NumActiveBlendCallers;  // 0xD8(0x4)
	char pad_220_1 : 7;  // 0xDC(0x1)
	bool bIsLayerGraphBuilt : 1;  // 0xDC(0x1)
	char pad_221[11];  // 0xDD(0xB)

}; 



// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
	struct UMaterialFunctionInterface* MaterialFunction;  // 0x40(0x8)
	struct FMaterialParameterInfo FunctionParameterInfo;  // 0x48(0x10)

}; 



// Class Engine.MaterialExpressionStep
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionStep : public UMaterialExpression
{
	struct FExpressionInput Y;  // 0x40(0x14)
	struct FExpressionInput X;  // 0x54(0x14)
	float ConstY;  // 0x68(0x4)
	float ConstX;  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionMaterialLayerOutput
// Size: 0x88(Inherited: 0x88) 
struct UMaterialExpressionMaterialLayerOutput : public UMaterialExpressionFunctionOutput
{

}; 



// Class Engine.MaterialExpressionMax
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionMax : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	float ConstA;  // 0x68(0x4)
	float ConstB;  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionMin
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionMin : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	float ConstA;  // 0x68(0x4)
	float ConstB;  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionMultiply
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionMultiply : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	float ConstA;  // 0x68(0x4)
	float ConstB;  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionNamedRerouteUsage
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionNamedRerouteUsage : public UMaterialExpressionNamedRerouteBase
{
	struct UMaterialExpressionNamedRerouteDeclaration* Declaration;  // 0x40(0x8)
	struct FGuid DeclarationGuid;  // 0x48(0x10)

}; 



// Class Engine.MaterialExpressionNoise
// Size: 0x90(Inherited: 0x40) 
struct UMaterialExpressionNoise : public UMaterialExpression
{
	struct FExpressionInput position;  // 0x40(0x14)
	struct FExpressionInput FilterWidth;  // 0x54(0x14)
	float Scale;  // 0x68(0x4)
	int32_t Quality;  // 0x6C(0x4)
	char ENoiseFunction NoiseFunction;  // 0x70(0x1)
	char pad_113[3];  // 0x71(0x3)
	char bTurbulence : 1;  // 0x74(0x1)
	char pad_116_1 : 7;  // 0x74(0x1)
	char pad_117[4];  // 0x75(0x4)
	int32_t Levels;  // 0x78(0x4)
	float OutputMin;  // 0x7C(0x4)
	float OutputMax;  // 0x80(0x4)
	float LevelScale;  // 0x84(0x4)
	char bTiling : 1;  // 0x88(0x1)
	char pad_136_1 : 7;  // 0x88(0x1)
	char pad_137[4];  // 0x89(0x4)
	uint32_t RepeatSize;  // 0x8C(0x4)

}; 



// Class Engine.MaterialExpressionNormalize
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionNormalize : public UMaterialExpression
{
	struct FExpressionInput VectorInput;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionObjectOrientation
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionObjectOrientation : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionObjectPositionWS
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionObjectPositionWS : public UMaterialExpression
{

}; 



// Class Engine.VOIPTalker
// Size: 0xE8(Inherited: 0xB0) 
struct UVOIPTalker : public UActorComponent
{
	struct FVoiceSettings Settings;  // 0xB0(0x18)
	char pad_200[32];  // 0xC8(0x20)

	void RegisterWithPlayerState(struct APlayerState* OwningState); // Function Engine.VOIPTalker.RegisterWithPlayerState
	float GetVoiceLevel(); // Function Engine.VOIPTalker.GetVoiceLevel
	struct UVOIPTalker* CreateTalkerForPlayer(struct APlayerState* OwningState); // Function Engine.VOIPTalker.CreateTalkerForPlayer
	void BPOnTalkingEnd(); // Function Engine.VOIPTalker.BPOnTalkingEnd
	void BPOnTalkingBegin(struct UAudioComponent* AudioComponent); // Function Engine.VOIPTalker.BPOnTalkingBegin
}; 



// Class Engine.MaterialExpressionSceneDepth
// Size: 0x78(Inherited: 0x40) 
struct UMaterialExpressionSceneDepth : public UMaterialExpression
{
	char EMaterialSceneAttributeInputMode InputMode;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	struct FExpressionInput Input;  // 0x44(0x14)
	struct FExpressionInput Coordinates;  // 0x58(0x14)
	struct FVector2D ConstInput;  // 0x6C(0x8)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class Engine.MaterialExpressionObjectRadius
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionObjectRadius : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionOneMinus
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionOneMinus : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionParticleColor
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleColor : public UMaterialExpression
{

}; 



// Class Engine.VisualLoggerAutomationTests
// Size: 0x28(Inherited: 0x28) 
struct UVisualLoggerAutomationTests : public UObject
{

}; 



// Class Engine.SkyAtmosphereComponent
// Size: 0x2D0(Inherited: 0x200) 
struct USkyAtmosphereComponent : public USceneComponent
{
	uint8_t  TransformMode;  // 0x1F8(0x1)
	float BottomRadius;  // 0x1FC(0x4)
	struct FColor GroundAlbedo;  // 0x200(0x4)
	float AtmosphereHeight;  // 0x204(0x4)
	float MultiScatteringFactor;  // 0x208(0x4)
	float TraceSampleCountScale;  // 0x20C(0x4)
	float RayleighScatteringScale;  // 0x210(0x4)
	struct FLinearColor RayleighScattering;  // 0x214(0x10)
	float RayleighExponentialDistribution;  // 0x224(0x4)
	float MieScatteringScale;  // 0x228(0x4)
	struct FLinearColor MieScattering;  // 0x22C(0x10)
	float MieAbsorptionScale;  // 0x23C(0x4)
	struct FLinearColor MieAbsorption;  // 0x240(0x10)
	float MieAnisotropy;  // 0x250(0x4)
	float MieExponentialDistribution;  // 0x254(0x4)
	float OtherAbsorptionScale;  // 0x258(0x4)
	struct FLinearColor OtherAbsorption;  // 0x25C(0x10)
	struct FTentDistribution OtherTentDistribution;  // 0x26C(0xC)
	struct FLinearColor SkyLuminanceFactor;  // 0x278(0x10)
	float AerialPespectiveViewDistanceScale;  // 0x288(0x4)
	float HeightFogContribution;  // 0x28C(0x4)
	float TransmittanceMinLightElevationAngle;  // 0x290(0x4)
	float AerialPerspectiveStartDepth;  // 0x294(0x4)
	char pad_669[31];  // 0x29D(0x1F)
	struct FGuid bStaticLightingBuiltGUID;  // 0x2BC(0x10)
	char pad_716[4];  // 0x2CC(0x4)

	void SetSkyLuminanceFactor(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetSkyLuminanceFactor
	void SetRayleighScatteringScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighScatteringScale
	void SetRayleighScattering(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighScattering
	void SetRayleighExponentialDistribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighExponentialDistribution
	void SetOtherAbsorptionScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetOtherAbsorptionScale
	void SetOtherAbsorption(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetOtherAbsorption
	void SetMultiScatteringFactor(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMultiScatteringFactor
	void SetMieScatteringScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieScatteringScale
	void SetMieScattering(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetMieScattering
	void SetMieExponentialDistribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieExponentialDistribution
	void SetMieAnisotropy(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAnisotropy
	void SetMieAbsorptionScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAbsorptionScale
	void SetMieAbsorption(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAbsorption
	void SetHeightFogContribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetHeightFogContribution
	void SetAtmosphereHeight(float NewValue); // Function Engine.SkyAtmosphereComponent.SetAtmosphereHeight
	void SetAerialPespectiveViewDistanceScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetAerialPespectiveViewDistanceScale
	void OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, struct FVector& LightDirection); // Function Engine.SkyAtmosphereComponent.OverrideAtmosphereLightDirection
	struct FLinearColor GetAtmosphereTransmitanceOnGroundAtPlanetTop(struct UDirectionalLightComponent* DirectionalLight); // Function Engine.SkyAtmosphereComponent.GetAtmosphereTransmitanceOnGroundAtPlanetTop
}; 



// Class Engine.MaterialExpressionParticleMacroUV
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleMacroUV : public UMaterialExpression
{

}; 



// Class Engine.TireType
// Size: 0x38(Inherited: 0x30) 
struct UTireType : public UDataAsset
{
	float FrictionScale;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 



// Class Engine.ObjectTraceWorldSubsystem
// Size: 0x38(Inherited: 0x30) 
struct UObjectTraceWorldSubsystem : public UWorldSubsystem
{
	char pad_48[8];  // 0x30(0x8)

}; 



// Class Engine.MaterialExpressionParticleRadius
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleRadius : public UMaterialExpression
{

}; 



// Class Engine.ParticleModuleRotationRateBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleRotationRateBase : public UParticleModule
{

}; 



// Class Engine.MaterialExpressionParticleRelativeTime
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionParticleSize
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleSize : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionParticleSpeed
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleSpeed : public UMaterialExpression
{

}; 



// Class Engine.SoundNodeDoppler
// Size: 0x58(Inherited: 0x48) 
struct USoundNodeDoppler : public USoundNode
{
	float DopplerIntensity;  // 0x48(0x4)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool bUseSmoothing : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	float SmoothingInterpSpeed;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionParticleSubUV
// Size: 0x68(Inherited: 0x60) 
struct UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
	char bBlend : 1;  // 0x60(0x1)
	char pad_96_1 : 7;  // 0x60(0x1)
	char pad_97[8];  // 0x61(0x8)

}; 



// Class Engine.MaterialExpressionParticleSubUVProperties
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionParticleSubUVProperties : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionPerInstanceCustomData
// Size: 0x60(Inherited: 0x40) 
struct UMaterialExpressionPerInstanceCustomData : public UMaterialExpression
{
	struct FExpressionInput DefaultValue;  // 0x40(0x14)
	float ConstDefaultValue;  // 0x54(0x4)
	uint32_t DataIndex;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)

}; 



// Class Engine.MaterialExpressionSamplePhysicsVectorField
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSamplePhysicsVectorField : public UMaterialExpression
{
	struct FExpressionInput WorldPosition;  // 0x40(0x14)
	char EFieldVectorType FieldTarget;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)

}; 



// Class Engine.MaterialExpressionPerInstanceFadeAmount
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{

}; 



// Class Engine.ParticleModuleLocation_Seeded
// Size: 0xA0(Inherited: 0x80) 
struct UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x80(0x20)

}; 



// Class Engine.MaterialExpressionPower
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionPower : public UMaterialExpression
{
	struct FExpressionInput Base;  // 0x40(0x14)
	struct FExpressionInput Exponent;  // 0x54(0x14)
	float ConstExponent;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionPreSkinnedLocalBounds
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionPreSkinnedLocalBounds : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionPreSkinnedNormal
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionPreSkinnedNormal : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionPreviousFrameSwitch
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
	struct FExpressionInput CurrentFrame;  // 0x40(0x14)
	struct FExpressionInput PreviousFrame;  // 0x54(0x14)

}; 



// Class Engine.ParticleModuleMeshRotation
// Size: 0x80(Inherited: 0x30) 
struct UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
	struct FRawDistributionVector StartRotation;  // 0x30(0x48)
	char bInheritParent : 1;  // 0x78(0x1)
	char pad_120_1 : 7;  // 0x78(0x1)
	char pad_121[8];  // 0x79(0x8)

}; 



// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
	struct FExpressionInput CustomWorldNormal;  // 0x40(0x14)
	char bNormalizeCustomWorldNormal : 1;  // 0x54(0x1)
	char pad_84_1 : 7;  // 0x54(0x1)
	char pad_85[4];  // 0x55(0x4)

}; 



// Class Engine.MaterialExpressionReroute
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionReroute : public UMaterialExpressionRerouteBase
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionShaderStageSwitch
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionShaderStageSwitch : public UMaterialExpression
{
	struct FExpressionInput PixelShader;  // 0x40(0x14)
	struct FExpressionInput VertexShader;  // 0x54(0x14)

}; 



// Class Engine.MaterialExpressionRotateAboutAxis
// Size: 0x98(Inherited: 0x40) 
struct UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
	struct FExpressionInput NormalizedRotationAxis;  // 0x40(0x14)
	struct FExpressionInput RotationAngle;  // 0x54(0x14)
	struct FExpressionInput PivotPoint;  // 0x68(0x14)
	struct FExpressionInput position;  // 0x7C(0x14)
	float Period;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)

}; 



// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
// Size: 0xB0(Inherited: 0x90) 
struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : public UMaterialExpressionRuntimeVirtualTextureSample
{
	struct FName ParameterName;  // 0x90(0x8)
	struct FGuid ExpressionGUID;  // 0x98(0x10)
	struct FName Group;  // 0xA8(0x8)

}; 



// Class Engine.MaterialExpressionSamplePhysicsScalarField
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSamplePhysicsScalarField : public UMaterialExpression
{
	struct FExpressionInput WorldPosition;  // 0x40(0x14)
	char EFieldScalarType FieldTarget;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)

}; 



// Class Engine.MaterialExpressionSamplePhysicsIntegerField
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSamplePhysicsIntegerField : public UMaterialExpression
{
	struct FExpressionInput WorldPosition;  // 0x40(0x14)
	char EFieldIntegerType FieldTarget;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)

}; 



// Class Engine.ReplicationDriver
// Size: 0x28(Inherited: 0x28) 
struct UReplicationDriver : public UObject
{

}; 



// Class Engine.MaterialExpressionSceneColor
// Size: 0x78(Inherited: 0x40) 
struct UMaterialExpressionSceneColor : public UMaterialExpression
{
	char EMaterialSceneAttributeInputMode InputMode;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	struct FExpressionInput Input;  // 0x44(0x14)
	struct FExpressionInput OffsetFraction;  // 0x58(0x14)
	struct FVector2D ConstInput;  // 0x6C(0x8)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class Engine.MaterialExpressionSceneTexelSize
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionSceneTexelSize : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x60(Inherited: 0x40) 
struct UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
	struct TArray<struct FExpressionInput> Inputs;  // 0x40(0x10)
	struct TArray<struct FGuid> AttributeSetTypes;  // 0x50(0x10)

}; 



// Class Engine.MaterialExpressionSine
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSine : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	float Period;  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
// Size: 0x90(Inherited: 0x40) 
struct UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput ScatteringCoefficients;  // 0x40(0x14)
	struct FExpressionInput AbsorptionCoefficients;  // 0x54(0x14)
	struct FExpressionInput PhaseG;  // 0x68(0x14)
	struct FExpressionInput ColorScaleBehindWater;  // 0x7C(0x14)

}; 



// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression
{
	int32_t LightIndex;  // 0x40(0x4)
	struct FExpressionInput WorldPosition;  // 0x44(0x14)

}; 



// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : public UMaterialExpression
{
	int32_t LightIndex;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 



// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSkyAtmosphereAerialPerspective : public UMaterialExpression
{
	struct FExpressionInput WorldPosition;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionSmoothStep
// Size: 0x88(Inherited: 0x40) 
struct UMaterialExpressionSmoothStep : public UMaterialExpression
{
	struct FExpressionInput Min;  // 0x40(0x14)
	struct FExpressionInput Max;  // 0x54(0x14)
	struct FExpressionInput Value;  // 0x68(0x14)
	float ConstMin;  // 0x7C(0x4)
	float ConstMax;  // 0x80(0x4)
	float ConstValue;  // 0x84(0x4)

}; 



// Class Engine.MaterialExpressionSpeedTree
// Size: 0xA0(Inherited: 0x40) 
struct UMaterialExpressionSpeedTree : public UMaterialExpression
{
	struct FExpressionInput GeometryInput;  // 0x40(0x14)
	struct FExpressionInput WindInput;  // 0x54(0x14)
	struct FExpressionInput LODInput;  // 0x68(0x14)
	struct FExpressionInput ExtraBendWS;  // 0x7C(0x14)
	char ESpeedTreeGeometryType GeometryType;  // 0x90(0x1)
	char ESpeedTreeWindType WindType;  // 0x91(0x1)
	char ESpeedTreeLODType LODType;  // 0x92(0x1)
	char pad_147[1];  // 0x93(0x1)
	float BillboardThreshold;  // 0x94(0x4)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bAccurateWindVelocities : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)

}; 



// Class Engine.MaterialExpressionSphereMask
// Size: 0x98(Inherited: 0x40) 
struct UMaterialExpressionSphereMask : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	struct FExpressionInput Radius;  // 0x68(0x14)
	struct FExpressionInput Hardness;  // 0x7C(0x14)
	float AttenuationRadius;  // 0x90(0x4)
	float HardnessPercent;  // 0x94(0x4)

}; 



// Class Engine.NodeMappingContainer
// Size: 0x168(Inherited: 0x28) 
struct UNodeMappingContainer : public UObject
{
	struct TMap<struct FName, struct FNodeItem> SourceItems;  // 0x28(0x50)
	struct TMap<struct FName, struct FNodeItem> TargetItems;  // 0x78(0x50)
	struct TMap<struct FName, struct FName> SourceToTarget;  // 0xC8(0x50)
	struct TSoftObjectPtr<UObject> SourceAsset;  // 0x118(0x28)
	struct TSoftObjectPtr<UObject> TargetAsset;  // 0x140(0x28)

}; 



// Class Engine.MaterialExpressionSphericalParticleOpacity
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
	struct FExpressionInput Density;  // 0x40(0x14)
	float ConstantDensity;  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionSquareRoot
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionSquareRoot : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionStaticBool
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionStaticBool : public UMaterialExpression
{
	char Value : 1;  // 0x40(0x1)
	char pad_64_1 : 7;  // 0x40(0x1)
	char pad_65[8];  // 0x41(0x8)

}; 



// Class Engine.MicroTransactionBase
// Size: 0x68(Inherited: 0x38) 
struct UMicroTransactionBase : public UPlatformInterfaceBase
{
	struct TArray<struct FPurchaseInfo> AvailableProducts;  // 0x38(0x10)
	struct FString LastError;  // 0x48(0x10)
	struct FString LastErrorSolution;  // 0x58(0x10)

}; 



// Class Engine.MaterialExpressionStaticBoolParameter
// Size: 0x60(Inherited: 0x58) 
struct UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
	char DefaultValue : 1;  // 0x58(0x1)
	char pad_88_1 : 7;  // 0x58(0x1)
	char pad_89[8];  // 0x59(0x8)

}; 



// Class Engine.WindDirectionalSourceComponent
// Size: 0x220(Inherited: 0x200) 
struct UWindDirectionalSourceComponent : public USceneComponent
{
	float Strength;  // 0x1F8(0x4)
	float Speed;  // 0x1FC(0x4)
	float MinGustAmount;  // 0x200(0x4)
	float MaxGustAmount;  // 0x204(0x4)
	float Radius;  // 0x208(0x4)
	char bPointWind : 1;  // 0x20C(0x1)
	char pad_532_1 : 7;  // 0x214(0x1)
	char pad_533[12];  // 0x215(0xC)

	void SetWindType(uint8_t  InNewType); // Function Engine.WindDirectionalSourceComponent.SetWindType
	void SetStrength(float InNewStrength); // Function Engine.WindDirectionalSourceComponent.SetStrength
	void SetSpeed(float InNewSpeed); // Function Engine.WindDirectionalSourceComponent.SetSpeed
	void SetRadius(float InNewRadius); // Function Engine.WindDirectionalSourceComponent.SetRadius
	void SetMinimumGustAmount(float InNewMinGust); // Function Engine.WindDirectionalSourceComponent.SetMinimumGustAmount
	void SetMaximumGustAmount(float InNewMaxGust); // Function Engine.WindDirectionalSourceComponent.SetMaximumGustAmount
}; 



// Class Engine.MaterialExpressionStaticComponentMaskParameter
// Size: 0x60(Inherited: 0x58) 
struct UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
	char DefaultR : 1;  // 0x58(0x1)
	char DefaultG : 1;  // 0x58(0x1)
	char DefaultB : 1;  // 0x58(0x1)
	char DefaultA : 1;  // 0x58(0x1)
	char pad_88_1 : 4;  // 0x58(0x1)
	char pad_89[8];  // 0x59(0x8)

}; 



// Class Engine.MaterialExpressionStaticSwitch
// Size: 0x80(Inherited: 0x40) 
struct UMaterialExpressionStaticSwitch : public UMaterialExpression
{
	char DefaultValue : 1;  // 0x40(0x1)
	char pad_64_1 : 7;  // 0x40(0x1)
	char pad_65[4];  // 0x41(0x4)
	struct FExpressionInput A;  // 0x44(0x14)
	struct FExpressionInput B;  // 0x58(0x14)
	struct FExpressionInput Value;  // 0x6C(0x14)

}; 



// Class Engine.MaterialExpressionStaticSwitchParameter
// Size: 0x60(Inherited: 0x60) 
struct UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{

}; 



// Class Engine.MaterialExpressionSubtract
// Size: 0x70(Inherited: 0x40) 
struct UMaterialExpressionSubtract : public UMaterialExpression
{
	struct FExpressionInput A;  // 0x40(0x14)
	struct FExpressionInput B;  // 0x54(0x14)
	float ConstA;  // 0x68(0x4)
	float ConstB;  // 0x6C(0x4)

}; 



// Class Engine.MaterialExpressionTangent
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionTangent : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	float Period;  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionTemporalSobol
// Size: 0x78(Inherited: 0x40) 
struct UMaterialExpressionTemporalSobol : public UMaterialExpression
{
	struct FExpressionInput Index;  // 0x40(0x14)
	struct FExpressionInput Seed;  // 0x54(0x14)
	uint32_t ConstIndex;  // 0x68(0x4)
	struct FVector2D ConstSeed;  // 0x6C(0x8)
	char pad_116[4];  // 0x74(0x4)

}; 



// Class Engine.ParticleModuleOrbitBase
// Size: 0x38(Inherited: 0x30) 
struct UParticleModuleOrbitBase : public UParticleModule
{
	char bUseEmitterTime : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)

}; 



// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x50(Inherited: 0x40) 
struct UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
	int32_t CoordinateIndex;  // 0x40(0x4)
	float UTiling;  // 0x44(0x4)
	float VTiling;  // 0x48(0x4)
	char UnMirrorU : 1;  // 0x4C(0x1)
	char UnMirrorV : 1;  // 0x4C(0x1)
	char pad_76_1 : 6;  // 0x4C(0x1)
	char pad_77[4];  // 0x4D(0x4)

}; 



// Class Engine.MaterialExpressionTextureObject
// Size: 0x48(Inherited: 0x48) 
struct UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{

}; 



// Class Engine.ParticleModuleCameraBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleCameraBase : public UParticleModule
{

}; 



// Class Engine.MaterialExpressionTextureProperty
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionTextureProperty : public UMaterialExpression
{
	struct FExpressionInput TextureObject;  // 0x40(0x14)
	char EMaterialExposedTextureProperty Property;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)

}; 



// Class Engine.SoundNodeQualityLevel
// Size: 0x50(Inherited: 0x48) 
struct USoundNodeQualityLevel : public USoundNode
{
	int32_t CookedQualityLevelIndex;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 



// Class Engine.MaterialExpressionTextureSampleParameterCube
// Size: 0x80(Inherited: 0x80) 
struct UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{

}; 



// Class Engine.ParticleModuleMeshMaterial
// Size: 0x40(Inherited: 0x30) 
struct UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
	struct TArray<struct UMaterialInterface*> MeshMaterials;  // 0x30(0x10)

}; 



// Class Engine.MaterialExpressionTextureSampleParameterVolume
// Size: 0x80(Inherited: 0x80) 
struct UMaterialExpressionTextureSampleParameterVolume : public UMaterialExpressionTextureSampleParameter
{

}; 



// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionThinTranslucentMaterialOutput : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput TransmittanceColor;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.MaterialExpressionTime
// Size: 0x48(Inherited: 0x40) 
struct UMaterialExpressionTime : public UMaterialExpression
{
	char bIgnorePause : 1;  // 0x40(0x1)
	char bOverride_Period : 1;  // 0x40(0x1)
	char pad_64_1 : 6;  // 0x40(0x1)
	char pad_65[4];  // 0x41(0x4)
	float Period;  // 0x44(0x4)

}; 



// Class Engine.MaterialExpressionTransform
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionTransform : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char EMaterialVectorCoordTransformSource TransformSourceType;  // 0x54(0x1)
	char EMaterialVectorCoordTransform TransformType;  // 0x55(0x1)
	char pad_86[2];  // 0x56(0x2)

}; 



// Class Engine.MaterialExpressionTruncate
// Size: 0x58(Inherited: 0x40) 
struct UMaterialExpressionTruncate : public UMaterialExpression
{
	struct FExpressionInput Input;  // 0x40(0x14)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.RadialForceActor
// Size: 0x228(Inherited: 0x220) 
struct ARadialForceActor : public ARigidBodyBase
{
	struct URadialForceComponent* ForceComponent;  // 0x220(0x8)

	void ToggleForce(); // Function Engine.RadialForceActor.ToggleForce
	void FireImpulse(); // Function Engine.RadialForceActor.FireImpulse
	void EnableForce(); // Function Engine.RadialForceActor.EnableForce
	void DisableForce(); // Function Engine.RadialForceActor.DisableForce
}; 



// Class Engine.PhysicsFieldComponent
// Size: 0x270(Inherited: 0x200) 
struct UPhysicsFieldComponent : public USceneComponent
{
	char pad_512[112];  // 0x200(0x70)

}; 



// Class Engine.MaterialExpressionVectorNoise
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionVectorNoise : public UMaterialExpression
{
	struct FExpressionInput position;  // 0x40(0x14)
	char EVectorNoiseFunction NoiseFunction;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)
	int32_t Quality;  // 0x58(0x4)
	char bTiling : 1;  // 0x5C(0x1)
	char pad_92_1 : 7;  // 0x5C(0x1)
	char pad_93[4];  // 0x5D(0x4)
	uint32_t TileSize;  // 0x60(0x4)
	char pad_100[4];  // 0x64(0x4)

}; 



// Class Engine.TextureRenderTarget2DArray
// Size: 0x1A0(Inherited: 0x180) 
struct UTextureRenderTarget2DArray : public UTextureRenderTarget
{
	int32_t SizeX;  // 0x180(0x4)
	int32_t SizeY;  // 0x184(0x4)
	int32_t Slices;  // 0x188(0x4)
	struct FLinearColor ClearColor;  // 0x18C(0x10)
	char EPixelFormat OverrideFormat;  // 0x19C(0x1)
	char bHDR : 1;  // 0x19D(0x1)
	char bForceLinearGamma : 1;  // 0x19D(0x1)
	char pad_413_1 : 6;  // 0x19D(0x1)
	char pad_414[3];  // 0x19E(0x3)

}; 



// Class Engine.MaterialExpressionVertexColor
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionVertexColor : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionVertexTangentWS
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionVertexTangentWS : public UMaterialExpression
{

}; 



// Class Engine.MaterialExpressionViewSize
// Size: 0x40(Inherited: 0x40) 
struct UMaterialExpressionViewSize : public UMaterialExpression
{

}; 



// Class Engine.SoundCue
// Size: 0x548(Inherited: 0x170) 
struct USoundCue : public USoundBase
{
	char bPrimeOnLoad : 1;  // 0x170(0x1)
	char pad_368_1 : 7;  // 0x170(0x1)
	char pad_369[8];  // 0x171(0x8)
	struct USoundNode* FirstNode;  // 0x178(0x8)
	float VolumeMultiplier;  // 0x180(0x4)
	float PitchMultiplier;  // 0x184(0x4)
	struct FSoundAttenuationSettings AttenuationOverrides;  // 0x188(0x3A0)
	float SubtitlePriority;  // 0x528(0x4)
	char pad_1324[4];  // 0x52C(0x4)
	char bOverrideAttenuation : 1;  // 0x530(0x1)
	char bExcludeFromRandomNodeBranchCulling : 1;  // 0x530(0x1)
	char pad_1328_1 : 6;  // 0x530(0x1)
	char pad_1329[4];  // 0x531(0x4)
	int32_t CookedQualityIndex;  // 0x534(0x4)
	char bHasPlayWhenSilent : 1;  // 0x538(0x1)
	char pad_1336_1 : 7;  // 0x538(0x1)
	char pad_1337[16];  // 0x539(0x10)

}; 



// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
// Size: 0x68(Inherited: 0x40) 
struct UMaterialExpressionVirtualTextureFeatureSwitch : public UMaterialExpression
{
	struct FExpressionInput No;  // 0x40(0x14)
	struct FExpressionInput Yes;  // 0x54(0x14)

}; 



// Class Engine.MaterialExpressionVolumetricAdvancedMaterialOutput
// Size: 0xF0(Inherited: 0x40) 
struct UMaterialExpressionVolumetricAdvancedMaterialOutput : public UMaterialExpressionCustomOutput
{
	struct FExpressionInput PhaseG;  // 0x40(0x14)
	struct FExpressionInput PhaseG2;  // 0x54(0x14)
	struct FExpressionInput PhaseBlend;  // 0x68(0x14)
	struct FExpressionInput MultiScatteringContribution;  // 0x7C(0x14)
	struct FExpressionInput MultiScatteringOcclusion;  // 0x90(0x14)
	struct FExpressionInput MultiScatteringEccentricity;  // 0xA4(0x14)
	struct FExpressionInput ConservativeDensity;  // 0xB8(0x14)
	float ConstPhaseG;  // 0xCC(0x4)
	float ConstPhaseG2;  // 0xD0(0x4)
	float ConstPhaseBlend;  // 0xD4(0x4)
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool PerSamplePhaseEvaluation : 1;  // 0xD8(0x1)
	char pad_217[3];  // 0xD9(0x3)
	uint32_t MultiScatteringApproximationOctaveCount;  // 0xDC(0x4)
	float ConstMultiScatteringContribution;  // 0xE0(0x4)
	float ConstMultiScatteringOcclusion;  // 0xE4(0x4)
	float ConstMultiScatteringEccentricity;  // 0xE8(0x4)
	char pad_236_1 : 7;  // 0xEC(0x1)
	bool bGroundContribution : 1;  // 0xEC(0x1)
	char pad_237_1 : 7;  // 0xED(0x1)
	bool bGrayScaleMaterial : 1;  // 0xED(0x1)
	char pad_238_1 : 7;  // 0xEE(0x1)
	bool bRayMarchVolumeShadow : 1;  // 0xEE(0x1)
	char pad_239[1];  // 0xEF(0x1)

}; 



// Class Engine.MeshSimplificationSettings
// Size: 0x40(Inherited: 0x38) 
struct UMeshSimplificationSettings : public UDeveloperSettings
{
	struct FName MeshReductionModuleName;  // 0x38(0x8)

}; 



// Class Engine.MaterialFunctionInstance
// Size: 0xC0(Inherited: 0x40) 
struct UMaterialFunctionInstance : public UMaterialFunctionInterface
{
	struct UMaterialFunctionInterface* Parent;  // 0x40(0x8)
	struct UMaterialFunctionInterface* Base;  // 0x48(0x8)
	struct TArray<struct FScalarParameterValue> ScalarParameterValues;  // 0x50(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues;  // 0x60(0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues;  // 0x70(0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues;  // 0x80(0x10)
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameterValues;  // 0x90(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameterValues;  // 0xA0(0x10)
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;  // 0xB0(0x10)

}; 



// Class Engine.MaterialFunctionMaterialLayerInstance
// Size: 0xC0(Inherited: 0xC0) 
struct UMaterialFunctionMaterialLayerInstance : public UMaterialFunctionInstance
{

}; 



// Class Engine.MaterialInstanceDynamic
// Size: 0x360(Inherited: 0x310) 
struct UMaterialInstanceDynamic : public UMaterialInstance
{
	char pad_784[80];  // 0x310(0x50)

	void SetVectorParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, struct FLinearColor Value); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValueByInfo
	void SetVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValue
	void SetTextureParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, struct UTexture* Value); // Function Engine.MaterialInstanceDynamic.SetTextureParameterValueByInfo
	void SetTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Engine.MaterialInstanceDynamic.SetTextureParameterValue
	void SetScalarParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo, float Value); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValueByInfo
	void SetScalarParameterValue(struct FName ParameterName, float Value); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue
	void K2_InterpolateMaterialInstanceParams(struct UMaterialInstance* SourceA, struct UMaterialInstance* SourceB, float Alpha); // Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams
	struct FLinearColor K2_GetVectorParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // Function Engine.MaterialInstanceDynamic.K2_GetVectorParameterValueByInfo
	struct FLinearColor K2_GetVectorParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetVectorParameterValue
	struct UTexture* K2_GetTextureParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // Function Engine.MaterialInstanceDynamic.K2_GetTextureParameterValueByInfo
	struct UTexture* K2_GetTextureParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetTextureParameterValue
	float K2_GetScalarParameterValueByInfo(struct FMaterialParameterInfo& ParameterInfo); // Function Engine.MaterialInstanceDynamic.K2_GetScalarParameterValueByInfo
	float K2_GetScalarParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetScalarParameterValue
	void K2_CopyMaterialInstanceParameters(struct UMaterialInterface* Source, bool bQuickParametersOnly); // Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters
	void CopyParameterOverrides(struct UMaterialInstance* MaterialInstance); // Function Engine.MaterialInstanceDynamic.CopyParameterOverrides
	void CopyInterpParameters(struct UMaterialInstance* Source); // Function Engine.MaterialInstanceDynamic.CopyInterpParameters
}; 



// Class Engine.MaterialFunctionMaterialLayerBlendInstance
// Size: 0xC0(Inherited: 0xC0) 
struct UMaterialFunctionMaterialLayerBlendInstance : public UMaterialFunctionInstance
{

}; 



// Class Engine.MaterialInstanceActor
// Size: 0x230(Inherited: 0x220) 
struct AMaterialInstanceActor : public AActor
{
	struct TArray<struct AActor*> TargetActors;  // 0x220(0x10)

}; 



// Class Engine.MaterialParameterCollectionInstance
// Size: 0x120(Inherited: 0x28) 
struct UMaterialParameterCollectionInstance : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct UMaterialParameterCollection* Collection;  // 0x30(0x8)
	char pad_56[232];  // 0x38(0xE8)

}; 



// Class Engine.MatineeActor
// Size: 0x2C8(Inherited: 0x220) 
struct AMatineeActor : public AActor
{
	struct UInterpData* MatineeData;  // 0x220(0x8)
	struct FName MatineeControllerName;  // 0x228(0x8)
	float PlayRate;  // 0x230(0x4)
	char bPlayOnLevelLoad : 1;  // 0x234(0x1)
	char bForceStartPos : 1;  // 0x234(0x1)
	char pad_564_1 : 6;  // 0x234(0x1)
	char pad_565[4];  // 0x235(0x4)
	float ForceStartPosition;  // 0x238(0x4)
	char bLooping : 1;  // 0x23C(0x1)
	char bRewindOnPlay : 1;  // 0x23C(0x1)
	char bNoResetOnRewind : 1;  // 0x23C(0x1)
	char bRewindIfAlreadyPlaying : 1;  // 0x23C(0x1)
	char bDisableRadioFilter : 1;  // 0x23C(0x1)
	char bClientSideOnly : 1;  // 0x23C(0x1)
	char bSkipUpdateIfNotVisible : 1;  // 0x23C(0x1)
	char bIsSkippable : 1;  // 0x23C(0x1)
	char pad_573[3];  // 0x23D(0x3)
	int32_t PreferredSplitScreenNum;  // 0x240(0x4)
	char bDisableMovementInput : 1;  // 0x244(0x1)
	char bDisableLookAtInput : 1;  // 0x244(0x1)
	char bHidePlayer : 1;  // 0x244(0x1)
	char bHideHud : 1;  // 0x244(0x1)
	char pad_580_1 : 4;  // 0x244(0x1)
	char pad_581[4];  // 0x245(0x4)
	struct TArray<struct FInterpGroupActorInfo> GroupActorInfos;  // 0x248(0x10)
	char bShouldShowGore : 1;  // 0x258(0x1)
	char pad_600_1 : 7;  // 0x258(0x1)
	char pad_601[8];  // 0x259(0x8)
	struct TArray<struct UInterpGroupInst*> GroupInst;  // 0x260(0x10)
	struct TArray<struct FCameraCutInfo> CameraCuts;  // 0x270(0x10)
	char bIsPlaying : 1;  // 0x280(0x1)
	char bReversePlayback : 1;  // 0x280(0x1)
	char bPaused : 1;  // 0x280(0x1)
	char bPendingStop : 1;  // 0x280(0x1)
	char pad_640_1 : 4;  // 0x280(0x1)
	char pad_641[4];  // 0x281(0x4)
	float InterpPosition;  // 0x284(0x4)
	char pad_648[4];  // 0x288(0x4)
	char ReplicationForceIsPlaying;  // 0x28C(0x1)
	char pad_653[3];  // 0x28D(0x3)
	struct FMulticastInlineDelegate OnPlay;  // 0x290(0x10)
	struct FMulticastInlineDelegate OnStop;  // 0x2A0(0x10)
	struct FMulticastInlineDelegate OnPause;  // 0x2B0(0x10)
	char pad_704[8];  // 0x2C0(0x8)

	void Stop(); // Function Engine.MatineeActor.Stop
	void SetPosition(float NewPosition, bool bJump); // Function Engine.MatineeActor.SetPosition
	void SetLoopingState(bool bNewLooping); // Function Engine.MatineeActor.SetLoopingState
	void Reverse(); // Function Engine.MatineeActor.Reverse
	void Play(); // Function Engine.MatineeActor.Play
	void Pause(); // Function Engine.MatineeActor.Pause
	void EnableGroupByName(struct FString GroupName, bool bEnable); // Function Engine.MatineeActor.EnableGroupByName
	void ChangePlaybackDirection(); // Function Engine.MatineeActor.ChangePlaybackDirection
}; 



// Class Engine.MatineeActorCameraAnim
// Size: 0x2D0(Inherited: 0x2C8) 
struct AMatineeActorCameraAnim : public AMatineeActor
{
	struct UCameraAnim* CameraAnim;  // 0x2C8(0x8)

}; 



// Class Engine.ViewportStatsSubsystem
// Size: 0x50(Inherited: 0x30) 
struct UViewportStatsSubsystem : public UWorldSubsystem
{
	char pad_48[32];  // 0x30(0x20)

	void RemoveDisplayDelegate(int32_t IndexToRemove); // Function Engine.ViewportStatsSubsystem.RemoveDisplayDelegate
	void AddTimedDisplay(struct FText Text, struct FLinearColor Color, float Duration); // Function Engine.ViewportStatsSubsystem.AddTimedDisplay
	int32_t AddDisplayDelegate(struct FDelegate& Delegate); // Function Engine.ViewportStatsSubsystem.AddDisplayDelegate
}; 



// Class Engine.ParticleModuleAttractorLine
// Size: 0xA8(Inherited: 0x30) 
struct UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
	struct FVector EndPoint0;  // 0x30(0xC)
	struct FVector EndPoint1;  // 0x3C(0xC)
	struct FRawDistributionFloat Range;  // 0x48(0x30)
	struct FRawDistributionFloat Strength;  // 0x78(0x30)

}; 



// Class Engine.MeshMergeCullingVolume
// Size: 0x258(Inherited: 0x258) 
struct AMeshMergeCullingVolume : public AVolume
{

}; 



// Class Engine.MeshVertexPainterKismetLibrary
// Size: 0x28(Inherited: 0x28) 
struct UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{

	void RemovePaintedVertices(struct UStaticMeshComponent* StaticMeshComponent); // Function Engine.MeshVertexPainterKismetLibrary.RemovePaintedVertices
	void PaintVerticesSingleColor(struct UStaticMeshComponent* StaticMeshComponent, struct FLinearColor& FillColor, bool bConvertToSRGB); // Function Engine.MeshVertexPainterKismetLibrary.PaintVerticesSingleColor
	void PaintVerticesLerpAlongAxis(struct UStaticMeshComponent* StaticMeshComponent, struct FLinearColor& StartColor, struct FLinearColor& EndColor, uint8_t  Axis, bool bConvertToSRGB); // Function Engine.MeshVertexPainterKismetLibrary.PaintVerticesLerpAlongAxis
}; 



// Class Engine.ModelComponent
// Size: 0x490(Inherited: 0x450) 
struct UModelComponent : public UPrimitiveComponent
{
	char pad_1104[24];  // 0x450(0x18)
	struct UBodySetup* ModelBodySetup;  // 0x468(0x8)
	char pad_1136[32];  // 0x470(0x20)

}; 



// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x80(Inherited: 0x38) 
struct UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
	struct FRawDistributionVector AccelOverLife;  // 0x38(0x48)

}; 



// Class Engine.MorphTarget
// Size: 0x40(Inherited: 0x28) 
struct UMorphTarget : public UObject
{
	struct USkeletalMesh* BaseSkelMesh;  // 0x28(0x8)
	char pad_48[16];  // 0x30(0x10)

}; 



// Class Engine.NavAgentInterface
// Size: 0x28(Inherited: 0x28) 
struct UNavAgentInterface : public UInterface
{

}; 



// Class Engine.NavCollisionBase
// Size: 0x70(Inherited: 0x28) 
struct UNavCollisionBase : public UObject
{
	char bIsDynamicObstacle : 1;  // 0x28(0x1)
	char pad_40_1 : 7;  // 0x28(0x1)
	char pad_41[72];  // 0x29(0x48)

}; 



// Class Engine.PawnNoiseEmitterComponent
// Size: 0xD8(Inherited: 0xB0) 
struct UPawnNoiseEmitterComponent : public UActorComponent
{
	char bAIPerceptionSystemCompatibilityMode : 1;  // 0xB0(0x1)
	char pad_176_1 : 7;  // 0xB0(0x1)
	char pad_177[4];  // 0xB1(0x4)
	struct FVector LastRemoteNoisePosition;  // 0xB4(0xC)
	float NoiseLifetime;  // 0xC0(0x4)
	float LastRemoteNoiseVolume;  // 0xC4(0x4)
	float LastRemoteNoiseTime;  // 0xC8(0x4)
	float LastLocalNoiseVolume;  // 0xCC(0x4)
	float LastLocalNoiseTime;  // 0xD0(0x4)
	char pad_212[4];  // 0xD4(0x4)

	void MakeNoise(struct AActor* NoiseMaker, float Loudness, struct FVector& NoiseLocation); // Function Engine.PawnNoiseEmitterComponent.MakeNoise
}; 



// Class Engine.NavEdgeProviderInterface
// Size: 0x28(Inherited: 0x28) 
struct UNavEdgeProviderInterface : public UInterface
{

}; 



// Class Engine.ParticleModuleLifetimeBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleLifetimeBase : public UParticleModule
{

}; 



// Class Engine.NavigationDataInterface
// Size: 0x28(Inherited: 0x28) 
struct UNavigationDataInterface : public UInterface
{

}; 



// Class Engine.NavigationSystemBase
// Size: 0x28(Inherited: 0x28) 
struct UNavigationSystemBase : public UObject
{

}; 



// Class Engine.NavigationSystemConfig
// Size: 0x50(Inherited: 0x28) 
struct UNavigationSystemConfig : public UObject
{
	struct FSoftClassPath NavigationSystemClass;  // 0x28(0x18)
	struct FNavAgentSelector SupportedAgentsMask;  // 0x40(0x4)
	struct FName DefaultAgentName;  // 0x44(0x8)
	char bIsOverriden : 1;  // 0x4C(0x1)
	char pad_76_1 : 7;  // 0x4C(0x1)
	char pad_77[4];  // 0x4D(0x4)

}; 



// Class Engine.NavLinkDefinition
// Size: 0x50(Inherited: 0x28) 
struct UNavLinkDefinition : public UObject
{
	struct TArray<struct FNavigationLink> Links;  // 0x28(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks;  // 0x38(0x10)
	char pad_72[8];  // 0x48(0x8)

}; 



// Class Engine.PhysicsConstraintComponent
// Size: 0x410(Inherited: 0x200) 
struct UPhysicsConstraintComponent : public USceneComponent
{
	struct AActor* ConstraintActor1;  // 0x1F8(0x8)
	struct FConstrainComponentPropName ComponentName1;  // 0x200(0x8)
	struct AActor* ConstraintActor2;  // 0x208(0x8)
	struct FConstrainComponentPropName ComponentName2;  // 0x210(0x8)
	char pad_544[8];  // 0x220(0x8)
	struct UPhysicsConstraintTemplate* ConstraintSetup;  // 0x228(0x8)
	struct FMulticastInlineDelegate OnConstraintBroken;  // 0x230(0x10)
	struct FConstraintInstance ConstraintInstance;  // 0x240(0x1C8)
	char pad_1032[8];  // 0x408(0x8)

	void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.SetOrientationDriveTwistAndSwing
	void SetOrientationDriveSLERP(bool bEnableSLERP); // Function Engine.PhysicsConstraintComponent.SetOrientationDriveSLERP
	void SetLinearZLimit(char ELinearConstraintMotion ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearZLimit
	void SetLinearYLimit(char ELinearConstraintMotion ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearYLimit
	void SetLinearXLimit(char ELinearConstraintMotion ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearXLimit
	void SetLinearVelocityTarget(struct FVector& InVelTarget); // Function Engine.PhysicsConstraintComponent.SetLinearVelocityTarget
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ); // Function Engine.PhysicsConstraintComponent.SetLinearVelocityDrive
	void SetLinearPositionTarget(struct FVector& InPosTarget); // Function Engine.PhysicsConstraintComponent.SetLinearPositionTarget
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ); // Function Engine.PhysicsConstraintComponent.SetLinearPositionDrive
	void SetLinearPlasticity(bool bLinearPlasticity, float LinearPlasticityThreshold); // Function Engine.PhysicsConstraintComponent.SetLinearPlasticity
	void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit); // Function Engine.PhysicsConstraintComponent.SetLinearDriveParams
	void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold); // Function Engine.PhysicsConstraintComponent.SetLinearBreakable
	void SetDisableCollision(bool bDisableCollision); // Function Engine.PhysicsConstraintComponent.SetDisableCollision
	void SetConstraintReferencePosition(char EConstraintFrame Frame, struct FVector& RefPosition); // Function Engine.PhysicsConstraintComponent.SetConstraintReferencePosition
	void SetConstraintReferenceOrientation(char EConstraintFrame Frame, struct FVector& PriAxis, struct FVector& SecAxis); // Function Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation
	void SetConstraintReferenceFrame(char EConstraintFrame Frame, struct FTransform& RefFrame); // Function Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame
	void SetConstrainedComponents(struct UPrimitiveComponent* Component1, struct FName BoneName1, struct UPrimitiveComponent* Component2, struct FName BoneName2); // Function Engine.PhysicsConstraintComponent.SetConstrainedComponents
	void SetAngularVelocityTarget(struct FVector& InVelTarget); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityTarget
	void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDriveTwistAndSwing
	void SetAngularVelocityDriveSLERP(bool bEnableSLERP); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDriveSLERP
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDrive
	void SetAngularTwistLimit(char EAngularConstraintMotion ConstraintType, float TwistLimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularTwistLimit
	void SetAngularSwing2Limit(char EAngularConstraintMotion MotionType, float Swing2LimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularSwing2Limit
	void SetAngularSwing1Limit(char EAngularConstraintMotion MotionType, float Swing1LimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularSwing1Limit
	void SetAngularPlasticity(bool bAngularPlasticity, float AngularPlasticityThreshold); // Function Engine.PhysicsConstraintComponent.SetAngularPlasticity
	void SetAngularOrientationTarget(struct FRotator& InPosTarget); // Function Engine.PhysicsConstraintComponent.SetAngularOrientationTarget
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.SetAngularOrientationDrive
	void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit); // Function Engine.PhysicsConstraintComponent.SetAngularDriveParams
	void SetAngularDriveMode(char EAngularDriveMode DriveMode); // Function Engine.PhysicsConstraintComponent.SetAngularDriveMode
	void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold); // Function Engine.PhysicsConstraintComponent.SetAngularBreakable
	bool IsBroken(); // Function Engine.PhysicsConstraintComponent.IsBroken
	float GetCurrentTwist(); // Function Engine.PhysicsConstraintComponent.GetCurrentTwist
	float GetCurrentSwing2(); // Function Engine.PhysicsConstraintComponent.GetCurrentSwing2
	float GetCurrentSwing1(); // Function Engine.PhysicsConstraintComponent.GetCurrentSwing1
	void GetConstraintForce(struct FVector& OutLinearForce, struct FVector& OutAngularForce); // Function Engine.PhysicsConstraintComponent.GetConstraintForce
	void BreakConstraint(); // Function Engine.PhysicsConstraintComponent.BreakConstraint
}; 



// Class Engine.NavRelevantInterface
// Size: 0x28(Inherited: 0x28) 
struct UNavRelevantInterface : public UInterface
{

}; 



// Class Engine.SimulatedClientNetConnection
// Size: 0x1BA8(Inherited: 0x1BA8) 
struct USimulatedClientNetConnection : public UNetConnection
{

}; 



// Class Engine.NetPushModelHelpers
// Size: 0x28(Inherited: 0x28) 
struct UNetPushModelHelpers : public UBlueprintFunctionLibrary
{

	void MarkPropertyDirtyFromRepIndex(struct UObject* Object, int32_t RepIndex, struct FName PropertyName); // Function Engine.NetPushModelHelpers.MarkPropertyDirtyFromRepIndex
	void MarkPropertyDirty(struct UObject* Object, struct FName PropertyName); // Function Engine.NetPushModelHelpers.MarkPropertyDirty
}; 



// Class Engine.NetworkSettings
// Size: 0x58(Inherited: 0x38) 
struct UNetworkSettings : public UDeveloperSettings
{
	char bVerifyPeer : 1;  // 0x38(0x1)
	char bEnableMultiplayerWorldOriginRebasing : 1;  // 0x38(0x1)
	char pad_56_1 : 6;  // 0x38(0x1)
	char pad_57[4];  // 0x39(0x4)
	int32_t MaxRepArraySize;  // 0x3C(0x4)
	int32_t MaxRepArrayMemory;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)
	struct TArray<struct FNetworkEmulationProfileDescription> NetworkEmulationProfiles;  // 0x48(0x10)

}; 



// Class Engine.NodeMappingProviderInterface
// Size: 0x28(Inherited: 0x28) 
struct UNodeMappingProviderInterface : public UInterface
{

}; 



// Class Engine.StereoLayerShapeQuad
// Size: 0x28(Inherited: 0x28) 
struct UStereoLayerShapeQuad : public UStereoLayerShape
{

}; 



// Class Engine.ObjectLibrary
// Size: 0xA8(Inherited: 0x28) 
struct UObjectLibrary : public UObject
{
	UObject* ObjectBaseClass;  // 0x28(0x8)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bHasBlueprintClasses : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)
	struct TArray<struct UObject*> Objects;  // 0x38(0x10)
	struct TArray<struct TWeakObjectPtr<UObject>> WeakObjects;  // 0x48(0x10)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bUseWeakReferences : 1;  // 0x58(0x1)
	char pad_89_1 : 7;  // 0x59(0x1)
	bool bIsFullyLoaded : 1;  // 0x59(0x1)
	char pad_90[78];  // 0x5A(0x4E)

}; 



// Class Engine.ParticleEmitter
// Size: 0x1B8(Inherited: 0x28) 
struct UParticleEmitter : public UObject
{
	struct FName EmitterName;  // 0x28(0x8)
	int32_t SubUVDataOffset;  // 0x30(0x4)
	char EEmitterRenderMode EmitterRenderMode;  // 0x34(0x1)
	uint8_t  SignificanceLevel;  // 0x35(0x1)
	char pad_54[1];  // 0x36(0x1)
	char bUseLegacySpawningBehavior : 1;  // 0x37(0x1)
	char pad_55_1 : 3;  // 0x37(0x1)
	char ConvertedModules : 1;  // 0x37(0x1)
	char bIsSoloing : 1;  // 0x37(0x1)
	char bCookedOut : 1;  // 0x37(0x1)
	char bDisabledLODsKeepEmitterAlive : 1;  // 0x37(0x1)
	char bDisableWhenInsignficant : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[8];  // 0x39(0x8)
	struct TArray<struct UParticleLODLevel*> LODLevels;  // 0x40(0x10)
	int32_t PeakActiveParticles;  // 0x50(0x4)
	int32_t InitialAllocationCount;  // 0x54(0x4)
	float QualityLevelSpawnRateScale;  // 0x58(0x4)
	uint32_t DetailModeBitmask;  // 0x5C(0x4)
	char pad_96[344];  // 0x60(0x158)

}; 



// Class Engine.ParticleEventManager
// Size: 0x220(Inherited: 0x220) 
struct AParticleEventManager : public AActor
{

}; 



// Class Engine.ParticleModuleAccelerationConstant
// Size: 0x48(Inherited: 0x38) 
struct UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
	struct FVector Acceleration;  // 0x38(0xC)
	char pad_68[4];  // 0x44(0x4)

}; 



// Class Engine.ParticleModuleAttractorPoint
// Size: 0xE0(Inherited: 0x30) 
struct UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
	struct FRawDistributionVector position;  // 0x30(0x48)
	struct FRawDistributionFloat Range;  // 0x78(0x30)
	struct FRawDistributionFloat Strength;  // 0xA8(0x30)
	char StrengthByDistance : 1;  // 0xD8(0x1)
	char bAffectBaseVelocity : 1;  // 0xD8(0x1)
	char bOverrideVelocity : 1;  // 0xD8(0x1)
	char bUseWorldSpacePosition : 1;  // 0xD8(0x1)
	char Positive_X : 1;  // 0xD8(0x1)
	char Positive_Y : 1;  // 0xD8(0x1)
	char Positive_Z : 1;  // 0xD8(0x1)
	char Negative_X : 1;  // 0xD8(0x1)
	char Negative_Y : 1;  // 0xD9(0x1)
	char Negative_Z : 1;  // 0xD9(0x1)
	char pad_217_1 : 6;  // 0xD9(0x1)
	char pad_218[7];  // 0xDA(0x7)

}; 



// Class Engine.ParticleModuleBeamTarget
// Size: 0x120(Inherited: 0x30) 
struct UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
	char Beam2SourceTargetMethod TargetMethod;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	struct FName TargetName;  // 0x34(0x8)
	char pad_60[4];  // 0x3C(0x4)
	struct FRawDistributionVector Target;  // 0x40(0x48)
	char bTargetAbsolute : 1;  // 0x88(0x1)
	char bLockTarget : 1;  // 0x88(0x1)
	char pad_136_1 : 6;  // 0x88(0x1)
	char pad_137[4];  // 0x89(0x4)
	char Beam2SourceTargetTangentMethod TargetTangentMethod;  // 0x8C(0x1)
	char pad_141[3];  // 0x8D(0x3)
	struct FRawDistributionVector TargetTangent;  // 0x90(0x48)
	char bLockTargetTangent : 1;  // 0xD8(0x1)
	char pad_216_1 : 7;  // 0xD8(0x1)
	char pad_217[8];  // 0xD9(0x8)
	struct FRawDistributionFloat TargetStrength;  // 0xE0(0x30)
	char bLockTargetStength : 1;  // 0x110(0x1)
	char pad_272_1 : 7;  // 0x110(0x1)
	char pad_273[4];  // 0x111(0x4)
	float LockRadius;  // 0x114(0x4)
	char pad_280[8];  // 0x118(0x8)

}; 



// Class Engine.ReplaySubsystem
// Size: 0x40(Inherited: 0x30) 
struct UReplaySubsystem : public UGameInstanceSubsystem
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bLoadDefaultMapOnStop : 1;  // 0x30(0x1)
	char pad_49[15];  // 0x31(0xF)

}; 



// Class Engine.ParticleModuleCameraOffset
// Size: 0x68(Inherited: 0x30) 
struct UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
	struct FRawDistributionFloat CameraOffset;  // 0x30(0x30)
	char bSpawnTimeOnly : 1;  // 0x60(0x1)
	char pad_96_1 : 7;  // 0x60(0x1)
	char pad_97[4];  // 0x61(0x4)
	char EParticleCameraOffsetUpdateMethod UpdateMethod;  // 0x64(0x1)
	char pad_101[3];  // 0x65(0x3)

}; 



// Class Engine.ParticleModuleCollision
// Size: 0x190(Inherited: 0x30) 
struct UParticleModuleCollision : public UParticleModuleCollisionBase
{
	struct FRawDistributionVector DampingFactor;  // 0x30(0x48)
	struct FRawDistributionVector DampingFactorRotation;  // 0x78(0x48)
	struct FRawDistributionFloat MaxCollisions;  // 0xC0(0x30)
	char EParticleCollisionComplete CollisionCompletionOption;  // 0xF0(0x1)
	char pad_241[7];  // 0xF1(0x7)
	struct TArray<char EObjectTypeQuery> CollisionTypes;  // 0xF8(0x10)
	char pad_264[8];  // 0x108(0x8)
	char bApplyPhysics : 1;  // 0x110(0x1)
	char bIgnoreTriggerVolumes : 1;  // 0x110(0x1)
	char pad_272_1 : 6;  // 0x110(0x1)
	char pad_273[8];  // 0x111(0x8)
	struct FRawDistributionFloat ParticleMass;  // 0x118(0x30)
	float DirScalar;  // 0x148(0x4)
	char bPawnsDoNotDecrementCount : 1;  // 0x14C(0x1)
	char bOnlyVerticalNormalsDecrementCount : 1;  // 0x14C(0x1)
	char pad_332_1 : 6;  // 0x14C(0x1)
	char pad_333[4];  // 0x14D(0x4)
	float VerticalFudgeFactor;  // 0x150(0x4)
	char pad_340[4];  // 0x154(0x4)
	struct FRawDistributionFloat DelayAmount;  // 0x158(0x30)
	char bDropDetail : 1;  // 0x188(0x1)
	char bCollideOnlyIfVisible : 1;  // 0x188(0x1)
	char bIgnoreSourceActor : 1;  // 0x188(0x1)
	char pad_392_1 : 5;  // 0x188(0x1)
	char pad_393[4];  // 0x189(0x4)
	float MaxCollisionDistance;  // 0x18C(0x4)

}; 



// Class Engine.ParticleModuleColorBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleColorBase : public UParticleModule
{

}; 



// Class Engine.ParticleModuleEventBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleEventBase : public UParticleModule
{

}; 



// Class Engine.StereoLayerShape
// Size: 0x28(Inherited: 0x28) 
struct UStereoLayerShape : public UObject
{

}; 



// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x40(Inherited: 0x30) 
struct UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
	char EParticleEventType EventGeneratorType;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	struct FName EventName;  // 0x34(0x8)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.ParticleModuleEventReceiverKillParticles
// Size: 0x48(Inherited: 0x40) 
struct UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
	char bStopSpawning : 1;  // 0x40(0x1)
	char pad_64_1 : 7;  // 0x40(0x1)
	char pad_65[8];  // 0x41(0x8)

}; 



// Class Engine.ParticleModuleLifetime_Seeded
// Size: 0x80(Inherited: 0x60) 
struct UParticleModuleLifetime_Seeded : public UParticleModuleLifetime
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x60(0x20)

}; 



// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// Size: 0x100(Inherited: 0xE0) 
struct UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0xE0(0x20)

}; 



// Class Engine.ParticleModuleLightBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleLightBase : public UParticleModule
{

}; 



// Class Engine.ParticleModuleLight
// Size: 0x120(Inherited: 0x30) 
struct UParticleModuleLight : public UParticleModuleLightBase
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bUseInverseSquaredFalloff : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bAffectsTranslucency : 1;  // 0x31(0x1)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool bPreviewLightRadius : 1;  // 0x32(0x1)
	char pad_51[1];  // 0x33(0x1)
	float SpawnFraction;  // 0x34(0x4)
	struct FRawDistributionVector ColorScaleOverLife;  // 0x38(0x48)
	struct FRawDistributionFloat BrightnessOverLife;  // 0x80(0x30)
	struct FRawDistributionFloat RadiusScale;  // 0xB0(0x30)
	struct FRawDistributionFloat LightExponent;  // 0xE0(0x30)
	struct FLightingChannels LightingChannels;  // 0x110(0x1)
	char pad_273[3];  // 0x111(0x3)
	float VolumetricScatteringIntensity;  // 0x114(0x4)
	char pad_280_1 : 7;  // 0x118(0x1)
	bool bHighQualityLights : 1;  // 0x118(0x1)
	char pad_281_1 : 7;  // 0x119(0x1)
	bool bShadowCastingLights : 1;  // 0x119(0x1)
	char pad_282[6];  // 0x11A(0x6)

}; 



// Class Engine.PlayerInput
// Size: 0x3A8(Inherited: 0x28) 
struct UPlayerInput : public UObject
{
	char pad_40[248];  // 0x28(0xF8)
	struct TArray<struct FKeyBind> DebugExecBindings;  // 0x120(0x10)
	char pad_304[48];  // 0x130(0x30)
	struct TArray<struct FName> InvertedAxis;  // 0x160(0x10)
	char pad_368[568];  // 0x170(0x238)

	void SetMouseSensitivity(float Sensitivity); // Function Engine.PlayerInput.SetMouseSensitivity
	void SetBind(struct FName BindName, struct FString Command); // Function Engine.PlayerInput.SetBind
	void InvertAxisKey(struct FKey AxisKey); // Function Engine.PlayerInput.InvertAxisKey
	void InvertAxis(struct FName AxisName); // Function Engine.PlayerInput.InvertAxis
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing
}; 



// Class Engine.ParticleModuleLocationBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleLocationBase : public UParticleModule
{

}; 



// Class Engine.ParticleModuleLocation
// Size: 0x80(Inherited: 0x30) 
struct UParticleModuleLocation : public UParticleModuleLocationBase
{
	struct FRawDistributionVector StartLocation;  // 0x30(0x48)
	float DistributeOverNPoints;  // 0x78(0x4)
	float DistributeThreshold;  // 0x7C(0x4)

}; 



// Class Engine.ParticleModuleLocationBoneSocket
// Size: 0x70(Inherited: 0x30) 
struct UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
	char ELocationBoneSocketSource SourceType;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	struct FVector UniversalOffset;  // 0x34(0xC)
	struct TArray<struct FLocationBoneSocketInfo> SourceLocations;  // 0x40(0x10)
	char ELocationBoneSocketSelectionMethod SelectionMethod;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	char bUpdatePositionEachFrame : 1;  // 0x54(0x1)
	char bOrientMeshEmitters : 1;  // 0x54(0x1)
	char bInheritBoneVelocity : 1;  // 0x54(0x1)
	char pad_84_1 : 5;  // 0x54(0x1)
	char pad_85[4];  // 0x55(0x4)
	float InheritVelocityScale;  // 0x58(0x4)
	struct FName SkelMeshActorParamName;  // 0x5C(0x8)
	int32_t NumPreSelectedIndices;  // 0x64(0x4)
	char pad_104[8];  // 0x68(0x8)

}; 



// Class Engine.ParticleModuleLocationDirect
// Size: 0x150(Inherited: 0x30) 
struct UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
	struct FRawDistributionVector Location;  // 0x30(0x48)
	struct FRawDistributionVector LocationOffset;  // 0x78(0x48)
	struct FRawDistributionVector ScaleFactor;  // 0xC0(0x48)
	struct FRawDistributionVector Direction;  // 0x108(0x48)

}; 



// Class Engine.ParticleModuleLocationEmitter
// Size: 0x50(Inherited: 0x30) 
struct UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
	struct FName EmitterName;  // 0x30(0x8)
	char ELocationEmitterSelectionMethod SelectionMethod;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	char InheritSourceVelocity : 1;  // 0x3C(0x1)
	char pad_60_1 : 7;  // 0x3C(0x1)
	char pad_61[4];  // 0x3D(0x4)
	float InheritSourceVelocityScale;  // 0x40(0x4)
	char bInheritSourceRotation : 1;  // 0x44(0x1)
	char pad_68_1 : 7;  // 0x44(0x1)
	char pad_69[4];  // 0x45(0x4)
	float InheritSourceRotationScale;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 



// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x38(Inherited: 0x30) 
struct UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
	struct FName EmitterName;  // 0x30(0x8)

}; 



// Class Engine.ParticleModuleLocationPrimitiveSphere
// Size: 0xE0(Inherited: 0xB0) 
struct UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
	struct FRawDistributionFloat StartRadius;  // 0xB0(0x30)

}; 



// Class Engine.ParticleModuleLocationSkelVertSurface
// Size: 0x90(Inherited: 0x30) 
struct UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
	char ELocationSkelVertSurfaceSource SourceType;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	struct FVector UniversalOffset;  // 0x34(0xC)
	char bUpdatePositionEachFrame : 1;  // 0x40(0x1)
	char bOrientMeshEmitters : 1;  // 0x40(0x1)
	char bInheritBoneVelocity : 1;  // 0x40(0x1)
	char pad_64_1 : 5;  // 0x40(0x1)
	char pad_65[4];  // 0x41(0x4)
	float InheritVelocityScale;  // 0x44(0x4)
	struct FName SkelMeshActorParamName;  // 0x48(0x8)
	struct TArray<struct FName> ValidAssociatedBones;  // 0x50(0x10)
	char bEnforceNormalCheck : 1;  // 0x60(0x1)
	char pad_96_1 : 7;  // 0x60(0x1)
	char pad_97[4];  // 0x61(0x4)
	struct FVector NormalToCompare;  // 0x64(0xC)
	float NormalCheckToleranceDegrees;  // 0x70(0x4)
	float NormalCheckTolerance;  // 0x74(0x4)
	struct TArray<int32_t> ValidMaterialIndices;  // 0x78(0x10)
	char bInheritVertexColor : 1;  // 0x88(0x1)
	char bInheritUV : 1;  // 0x88(0x1)
	char pad_136_1 : 6;  // 0x88(0x1)
	char pad_137[4];  // 0x89(0x4)
	uint32_t InheritUVChannel;  // 0x8C(0x4)

}; 



// Class Engine.ParticleModuleLocationWorldOffset
// Size: 0x80(Inherited: 0x80) 
struct UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{

}; 



// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// Size: 0xA0(Inherited: 0x80) 
struct UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x80(0x20)

}; 



// Class Engine.VirtualTexture
// Size: 0x28(Inherited: 0x28) 
struct UVirtualTexture : public UObject
{

}; 



// Class Engine.ParticleModuleRotationBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleRotationBase : public UParticleModule
{

}; 



// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xA0(Inherited: 0x80) 
struct UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x80(0x20)

}; 



// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x80(Inherited: 0x30) 
struct UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
	struct FRawDistributionVector RotRate;  // 0x30(0x48)
	char bScaleRotRate : 1;  // 0x78(0x1)
	char pad_120_1 : 7;  // 0x78(0x1)
	char pad_121[8];  // 0x79(0x8)

}; 



// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x78(Inherited: 0x30) 
struct UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
	struct FRawDistributionVector StartRotationRate;  // 0x30(0x48)

}; 



// Class Engine.StaticMesh
// Size: 0x150(Inherited: 0x60) 
struct UStaticMesh : public UStreamableRenderAsset
{
	char pad_96[32];  // 0x60(0x20)
	struct FPerPlatformInt MinLOD;  // 0x80(0x4)
	float LpvBiasMultiplier;  // 0x84(0x4)
	struct TArray<struct FStaticMaterial> StaticMaterials;  // 0x88(0x10)
	float LightmapUVDensity;  // 0x98(0x4)
	int32_t LightMapResolution;  // 0x9C(0x4)
	int32_t LightMapCoordinateIndex;  // 0xA0(0x4)
	float DistanceFieldSelfShadowBias;  // 0xA4(0x4)
	struct UBodySetup* BodySetup;  // 0xA8(0x8)
	int32_t LODForCollision;  // 0xB0(0x4)
	char bGenerateMeshDistanceField : 1;  // 0xB4(0x1)
	char bStripComplexCollisionForConsole : 1;  // 0xB4(0x1)
	char bHasNavigationData : 1;  // 0xB4(0x1)
	char bSupportUniformlyDistributedSampling : 1;  // 0xB4(0x1)
	char bSupportPhysicalMaterialMasks : 1;  // 0xB4(0x1)
	char bSupportRayTracing : 1;  // 0xB4(0x1)
	char bIsBuiltAtRuntime : 1;  // 0xB4(0x1)
	char pad_180_1 : 1;  // 0xB4(0x1)
	char bAllowCPUAccess : 1;  // 0xB5(0x1)
	char bSupportGpuUniformlyDistributedSampling : 1;  // 0xB5(0x1)
	char pad_181_1 : 6;  // 0xB5(0x1)
	char pad_182[35];  // 0xB6(0x23)
	struct TArray<struct UStaticMeshSocket*> Sockets;  // 0xD8(0x10)
	char pad_232[16];  // 0xE8(0x10)
	struct FVector PositiveBoundsExtension;  // 0xF8(0xC)
	struct FVector NegativeBoundsExtension;  // 0x104(0xC)
	struct FBoxSphereBounds ExtendedBounds;  // 0x110(0x1C)
	int32_t ElementToIgnoreForTexFactor;  // 0x12C(0x4)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x130(0x10)
	struct UObject* EditableMesh;  // 0x140(0x8)
	struct UNavCollisionBase* NavCollision;  // 0x148(0x8)

	void SetStaticMaterials(struct TArray<struct FStaticMaterial>& InStaticMaterials); // Function Engine.StaticMesh.SetStaticMaterials
	void RemoveSocket(struct UStaticMeshSocket* Socket); // Function Engine.StaticMesh.RemoveSocket
	struct TArray<struct FStaticMaterial> GetStaticMaterials(); // Function Engine.StaticMesh.GetStaticMaterials
	int32_t GetNumSections(int32_t InLOD); // Function Engine.StaticMesh.GetNumSections
	int32_t GetNumLODs(); // Function Engine.StaticMesh.GetNumLODs
	void GetMinimumLODForPlatforms(struct TMap<struct FName, int32_t>& PlatformMinimumLODs); // Function Engine.StaticMesh.GetMinimumLODForPlatforms
	int32_t GetMinimumLODForPlatform(struct FName& PlatformName); // Function Engine.StaticMesh.GetMinimumLODForPlatform
	int32_t GetMaterialIndex(struct FName MaterialSlotName); // Function Engine.StaticMesh.GetMaterialIndex
	struct UMaterialInterface* GetMaterial(int32_t MaterialIndex); // Function Engine.StaticMesh.GetMaterial
	struct FBoxSphereBounds GetBounds(); // Function Engine.StaticMesh.GetBounds
	struct FBox GetBoundingBox(); // Function Engine.StaticMesh.GetBoundingBox
	struct UStaticMeshSocket* FindSocket(struct FName InSocketName); // Function Engine.StaticMesh.FindSocket
	struct UStaticMeshDescription* CreateStaticMeshDescription(struct UObject* Outer); // Function Engine.StaticMesh.CreateStaticMeshDescription
	void BuildFromStaticMeshDescriptions(struct TArray<struct UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision); // Function Engine.StaticMesh.BuildFromStaticMeshDescriptions
	void AddSocket(struct UStaticMeshSocket* Socket); // Function Engine.StaticMesh.AddSocket
	struct FName AddMaterial(struct UMaterialInterface* Material); // Function Engine.StaticMesh.AddMaterial
}; 



// Class Engine.ParticleModuleParameterDynamic_Seeded
// Size: 0x68(Inherited: 0x48) 
struct UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x48(0x20)

}; 



// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0x98(Inherited: 0x78) 
struct UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x78(0x20)

}; 



// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleVectorFieldBase : public UParticleModule
{

}; 



// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x78(Inherited: 0x30) 
struct UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
	struct FRawDistributionVector LifeMultiplier;  // 0x30(0x48)

}; 



// Class Engine.ParticleModuleParameterBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleParameterBase : public UParticleModule
{

}; 



// Class Engine.ParticleModuleRequired
// Size: 0x140(Inherited: 0x30) 
struct UParticleModuleRequired : public UParticleModule
{
	struct UMaterialInterface* Material;  // 0x30(0x8)
	float MinFacingCameraBlendDistance;  // 0x38(0x4)
	float MaxFacingCameraBlendDistance;  // 0x3C(0x4)
	struct FVector EmitterOrigin;  // 0x40(0xC)
	struct FRotator EmitterRotation;  // 0x4C(0xC)
	char EParticleScreenAlignment ScreenAlignment;  // 0x58(0x1)
	char bUseLocalSpace : 1;  // 0x59(0x1)
	char bKillOnDeactivate : 1;  // 0x59(0x1)
	char bKillOnCompleted : 1;  // 0x59(0x1)
	char pad_89_1 : 5;  // 0x59(0x1)
	char EParticleSortMode SortMode;  // 0x5A(0x1)
	char bUseLegacyEmitterTime : 1;  // 0x5B(0x1)
	char bRemoveHMDRoll : 1;  // 0x5B(0x1)
	char bEmitterDurationUseRange : 1;  // 0x5B(0x1)
	char pad_91_1 : 5;  // 0x5B(0x1)
	float EmitterDuration;  // 0x5C(0x4)
	struct FRawDistributionFloat SpawnRate;  // 0x60(0x30)
	struct TArray<struct FParticleBurst> BurstList;  // 0x90(0x10)
	float EmitterDelay;  // 0xA0(0x4)
	float EmitterDelayLow;  // 0xA4(0x4)
	char bDelayFirstLoopOnly : 1;  // 0xA8(0x1)
	char pad_168_1 : 7;  // 0xA8(0x1)
	char EParticleSubUVInterpMethod InterpolationMethod;  // 0xA9(0x1)
	char bScaleUV : 1;  // 0xAA(0x1)
	char bEmitterDelayUseRange : 1;  // 0xAA(0x1)
	char pad_170_1 : 6;  // 0xAA(0x1)
	char EParticleBurstMethod ParticleBurstMethod;  // 0xAB(0x1)
	char bOverrideSystemMacroUV : 1;  // 0xAC(0x1)
	char bUseMaxDrawCount : 1;  // 0xAC(0x1)
	char pad_172_1 : 6;  // 0xAC(0x1)
	char EOpacitySourceMode OpacitySourceMode;  // 0xAD(0x1)
	char EEmitterNormalsMode EmitterNormalsMode;  // 0xAE(0x1)
	char bOrbitModuleAffectsVelocityAlignment : 1;  // 0xAF(0x1)
	char pad_175_1 : 7;  // 0xAF(0x1)
	int32_t SubImages_Horizontal;  // 0xB0(0x4)
	int32_t SubImages_Vertical;  // 0xB4(0x4)
	float RandomImageTime;  // 0xB8(0x4)
	int32_t RandomImageChanges;  // 0xBC(0x4)
	struct FVector MacroUVPosition;  // 0xC0(0xC)
	float MacroUVRadius;  // 0xCC(0x4)
	uint8_t  UVFlippingMode;  // 0xD0(0x1)
	char ESubUVBoundingVertexCount BoundingMode;  // 0xD1(0x1)
	char bDurationRecalcEachLoop : 1;  // 0xD2(0x1)
	char pad_210_1 : 7;  // 0xD2(0x1)
	char pad_211[2];  // 0xD3(0x2)
	struct FVector NormalsSphereCenter;  // 0xD4(0xC)
	float AlphaThreshold;  // 0xE0(0x4)
	int32_t EmitterLoops;  // 0xE4(0x4)
	struct UTexture2D* CutoutTexture;  // 0xE8(0x8)
	int32_t MaxDrawCount;  // 0xF0(0x4)
	float EmitterDurationLow;  // 0xF4(0x4)
	struct FVector NormalsCylinderDirection;  // 0xF8(0xC)
	char pad_260[4];  // 0x104(0x4)
	struct TArray<struct FName> NamedMaterialOverrides;  // 0x108(0x10)
	char pad_280[40];  // 0x118(0x28)

}; 



// Class Engine.ParticleModuleRotation
// Size: 0x60(Inherited: 0x30) 
struct UParticleModuleRotation : public UParticleModuleRotationBase
{
	struct FRawDistributionFloat StartRotation;  // 0x30(0x30)

}; 



// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x68(Inherited: 0x30) 
struct UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
	struct FRawDistributionFloat RotationOverLife;  // 0x30(0x30)
	char Scale : 1;  // 0x60(0x1)
	char pad_96_1 : 7;  // 0x60(0x1)
	char pad_97[8];  // 0x61(0x8)

}; 



// Class Engine.ParticleModuleRotationRate
// Size: 0x60(Inherited: 0x30) 
struct UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
	struct FRawDistributionFloat StartRotationRate;  // 0x30(0x30)

}; 



// Class Engine.ParticleModuleRotationRate_Seeded
// Size: 0x80(Inherited: 0x60) 
struct UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x60(0x20)

}; 



// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x60(Inherited: 0x30) 
struct UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
	struct FRawDistributionFloat LifeMultiplier;  // 0x30(0x30)

}; 



// Class Engine.ParticleModuleSize
// Size: 0x78(Inherited: 0x30) 
struct UParticleModuleSize : public UParticleModuleSizeBase
{
	struct FRawDistributionVector StartSize;  // 0x30(0x48)

}; 



// Class Engine.ParticleModuleSize_Seeded
// Size: 0x98(Inherited: 0x78) 
struct UParticleModuleSize_Seeded : public UParticleModuleSize
{
	struct FParticleRandomSeedInfo RandomSeedInfo;  // 0x78(0x20)

}; 



// Class Engine.TwitterIntegrationBase
// Size: 0x38(Inherited: 0x38) 
struct UTwitterIntegrationBase : public UPlatformInterfaceBase
{

	bool TwitterRequest(struct FString URL, struct TArray<struct FString>& ParamKeysAndValues, char ETwitterRequestMethod RequestMethod, int32_t AccountIndex); // Function Engine.TwitterIntegrationBase.TwitterRequest
	bool ShowTweetUI(struct FString InitialMessage, struct FString URL, struct FString Picture); // Function Engine.TwitterIntegrationBase.ShowTweetUI
	void Init(); // Function Engine.TwitterIntegrationBase.Init
	int32_t GetNumAccounts(); // Function Engine.TwitterIntegrationBase.GetNumAccounts
	struct FString GetAccountName(int32_t AccountIndex); // Function Engine.TwitterIntegrationBase.GetAccountName
	bool CanShowTweetUI(); // Function Engine.TwitterIntegrationBase.CanShowTweetUI
	bool AuthorizeAccounts(); // Function Engine.TwitterIntegrationBase.AuthorizeAccounts
}; 



// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x80(Inherited: 0x30) 
struct UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
	struct FRawDistributionVector LifeMultiplier;  // 0x30(0x48)
	char MultiplyX : 1;  // 0x78(0x1)
	char MultiplyY : 1;  // 0x78(0x1)
	char MultiplyZ : 1;  // 0x78(0x1)
	char pad_120_1 : 5;  // 0x78(0x1)
	char pad_121[8];  // 0x79(0x8)

}; 



// Class Engine.PostProcessComponent
// Size: 0x770(Inherited: 0x200) 
struct UPostProcessComponent : public USceneComponent
{
	struct FPostProcessSettings Settings;  // 0x200(0x560)
	float Priority;  // 0x760(0x4)
	float BlendRadius;  // 0x764(0x4)
	float BlendWeight;  // 0x768(0x4)
	char bEnabled : 1;  // 0x76C(0x1)
	char bUnbound : 1;  // 0x76C(0x1)
	char pad_1900_1 : 6;  // 0x76C(0x1)
	char pad_1901[4];  // 0x76D(0x4)

	void AddOrUpdateBlendable(struct TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight); // Function Engine.PostProcessComponent.AddOrUpdateBlendable
}; 



// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x40(Inherited: 0x30) 
struct UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
	struct FVector2D SpeedScale;  // 0x30(0x8)
	struct FVector2D MaxScale;  // 0x38(0x8)

}; 



// Class Engine.ParticleModuleSourceMovement
// Size: 0x78(Inherited: 0x30) 
struct UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
	struct FRawDistributionVector SourceMovementScale;  // 0x30(0x48)

}; 



// Class Engine.ParticleModuleSpawnBase
// Size: 0x38(Inherited: 0x30) 
struct UParticleModuleSpawnBase : public UParticleModule
{
	char bProcessSpawnRate : 1;  // 0x30(0x1)
	char bProcessBurstList : 1;  // 0x30(0x1)
	char pad_48_1 : 6;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)

}; 



// Class Engine.ParticleModuleSpawnPerUnit
// Size: 0x78(Inherited: 0x38) 
struct UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
	float UnitScalar;  // 0x38(0x4)
	float MovementTolerance;  // 0x3C(0x4)
	struct FRawDistributionFloat SpawnPerUnit;  // 0x40(0x30)
	float MaxFrameDistance;  // 0x70(0x4)
	char bIgnoreSpawnRateWhenMoving : 1;  // 0x74(0x1)
	char bIgnoreMovementAlongX : 1;  // 0x74(0x1)
	char bIgnoreMovementAlongY : 1;  // 0x74(0x1)
	char bIgnoreMovementAlongZ : 1;  // 0x74(0x1)
	char pad_116_1 : 4;  // 0x74(0x1)
	char pad_117[4];  // 0x75(0x4)

}; 



// Class Engine.ParticleModuleSubUVBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleSubUVBase : public UParticleModule
{

}; 



// Class Engine.SoundSubmixBase
// Size: 0x38(Inherited: 0x28) 
struct USoundSubmixBase : public UObject
{
	struct TArray<struct USoundSubmixBase*> ChildSubmixes;  // 0x28(0x10)

}; 



// Class Engine.ParticleModuleSubUV
// Size: 0x70(Inherited: 0x30) 
struct UParticleModuleSubUV : public UParticleModuleSubUVBase
{
	struct USubUVAnimation* Animation;  // 0x30(0x8)
	struct FRawDistributionFloat SubImageIndex;  // 0x38(0x30)
	char bUseRealTime : 1;  // 0x68(0x1)
	char pad_104_1 : 7;  // 0x68(0x1)
	char pad_105[8];  // 0x69(0x8)

}; 



// Class Engine.ParticleModuleSubUVMovie
// Size: 0xB0(Inherited: 0x70) 
struct UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
	char bUseEmitterTime : 1;  // 0x70(0x1)
	char pad_112_1 : 7;  // 0x70(0x1)
	char pad_113[8];  // 0x71(0x8)
	struct FRawDistributionFloat FrameRate;  // 0x78(0x30)
	int32_t StartingFrame;  // 0xA8(0x4)
	char pad_172[4];  // 0xAC(0x4)

}; 



// Class Engine.ParticleSystemComponent
// Size: 0x6B0(Inherited: 0x450) 
struct UParticleSystemComponent : public UFXSystemComponent
{
	struct UParticleSystem* Template;  // 0x450(0x8)
	struct TArray<struct UMaterialInterface*> EmitterMaterials;  // 0x458(0x10)
	struct TArray<struct USkeletalMeshComponent*> SkelMeshComponents;  // 0x468(0x10)
	char pad_1144[1];  // 0x478(0x1)
	char bResetOnDetach : 1;  // 0x479(0x1)
	char bUpdateOnDedicatedServer : 1;  // 0x479(0x1)
	char pad_1145_1 : 2;  // 0x479(0x1)
	char bAllowRecycling : 1;  // 0x479(0x1)
	char bAutoManageAttachment : 1;  // 0x479(0x1)
	char bAutoAttachWeldSimulatedBodies : 1;  // 0x479(0x1)
	char pad_1145_2 : 1;  // 0x479(0x1)
	char pad_1146_1 : 1;  // 0x47A(0x1)
	char bWarmingUp : 1;  // 0x47A(0x1)
	char bOverrideLODMethod : 1;  // 0x47A(0x1)
	char bSkipUpdateDynamicDataDuringTick : 1;  // 0x47A(0x1)
	char pad_1146_2 : 4;  // 0x47A(0x1)
	char pad_1147[11];  // 0x47B(0xB)
	char ParticleSystemLODMethod LODMethod;  // 0x485(0x1)
	uint8_t  RequiredSignificance;  // 0x486(0x1)
	char pad_1159[1];  // 0x487(0x1)
	struct TArray<struct FParticleSysParam> InstanceParameters;  // 0x488(0x10)
	struct FMulticastInlineDelegate OnParticleSpawn;  // 0x498(0x10)
	struct FMulticastInlineDelegate OnParticleBurst;  // 0x4A8(0x10)
	struct FMulticastInlineDelegate OnParticleDeath;  // 0x4B8(0x10)
	struct FMulticastInlineDelegate OnParticleCollide;  // 0x4C8(0x10)
	char pad_1240_1 : 7;  // 0x4D8(0x1)
	bool bOldPositionValid : 1;  // 0x4D8(0x1)
	char pad_1241[3];  // 0x4D9(0x3)
	struct FVector OldPosition;  // 0x4DC(0xC)
	struct FVector PartSysVelocity;  // 0x4E8(0xC)
	float WarmupTime;  // 0x4F4(0x4)
	float WarmupTickRate;  // 0x4F8(0x4)
	char pad_1276[4];  // 0x4FC(0x4)
	float SecondsBeforeInactive;  // 0x500(0x4)
	char pad_1284[4];  // 0x504(0x4)
	float MaxTimeBeforeForceUpdateTransform;  // 0x508(0x4)
	char pad_1292[28];  // 0x50C(0x1C)
	struct TArray<struct UParticleSystemReplay*> ReplayClips;  // 0x528(0x10)
	char pad_1336[8];  // 0x538(0x8)
	float CustomTimeDilation;  // 0x540(0x4)
	char pad_1348[84];  // 0x544(0x54)
	struct TWeakObjectPtr<USceneComponent> AutoAttachParent;  // 0x598(0x8)
	struct FName AutoAttachSocketName;  // 0x5A0(0x8)
	uint8_t  AutoAttachLocationRule;  // 0x5A8(0x1)
	uint8_t  AutoAttachRotationRule;  // 0x5A9(0x1)
	uint8_t  AutoAttachScaleRule;  // 0x5AA(0x1)
	char pad_1451[45];  // 0x5AB(0x2D)
	struct FMulticastInlineDelegate OnSystemFinished;  // 0x5D8(0x10)
	char pad_1512[200];  // 0x5E8(0xC8)

	void SetTrailSourceData(struct FName InFirstSocketName, struct FName InSecondSocketName, char ETrailWidthMode InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.SetTrailSourceData
	void SetTemplate(struct UParticleSystem* NewTemplate); // Function Engine.ParticleSystemComponent.SetTemplate
	void SetMaterialParameter(struct FName ParameterName, struct UMaterialInterface* Param); // Function Engine.ParticleSystemComponent.SetMaterialParameter
	void SetBeamTargetTangent(int32_t EmitterIndex, struct FVector NewTangentPoint, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetTangent
	void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetStrength
	void SetBeamTargetPoint(int32_t EmitterIndex, struct FVector NewTargetPoint, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetPoint
	void SetBeamSourceTangent(int32_t EmitterIndex, struct FVector NewTangentPoint, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourceTangent
	void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourceStrength
	void SetBeamSourcePoint(int32_t EmitterIndex, struct FVector NewSourcePoint, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourcePoint
	void SetBeamEndPoint(int32_t EmitterIndex, struct FVector NewEndPoint); // Function Engine.ParticleSystemComponent.SetBeamEndPoint
	void SetAutoAttachParams(struct USceneComponent* Parent, struct FName SocketName, char EAttachLocation LocationType); // Function Engine.ParticleSystemComponent.SetAutoAttachParams
	int32_t GetNumActiveParticles(); // Function Engine.ParticleSystemComponent.GetNumActiveParticles
	struct UMaterialInterface* GetNamedMaterial(struct FName InName); // Function Engine.ParticleSystemComponent.GetNamedMaterial
	bool GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, struct FVector& OutTangentPoint); // Function Engine.ParticleSystemComponent.GetBeamTargetTangent
	bool GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float& OutTargetStrength); // Function Engine.ParticleSystemComponent.GetBeamTargetStrength
	bool GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, struct FVector& OutTargetPoint); // Function Engine.ParticleSystemComponent.GetBeamTargetPoint
	bool GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, struct FVector& OutTangentPoint); // Function Engine.ParticleSystemComponent.GetBeamSourceTangent
	bool GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float& OutSourceStrength); // Function Engine.ParticleSystemComponent.GetBeamSourceStrength
	bool GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, struct FVector& OutSourcePoint); // Function Engine.ParticleSystemComponent.GetBeamSourcePoint
	bool GetBeamEndPoint(int32_t EmitterIndex, struct FVector& OutEndPoint); // Function Engine.ParticleSystemComponent.GetBeamEndPoint
	void GenerateParticleEvent(struct FName InEventName, float InEmitterTime, struct FVector InLocation, struct FVector InDirection, struct FVector InVelocity); // Function Engine.ParticleSystemComponent.GenerateParticleEvent
	void EndTrails(); // Function Engine.ParticleSystemComponent.EndTrails
	struct UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(struct FName InName, struct UMaterialInterface* SourceMaterial); // Function Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance
	void BeginTrails(struct FName InFirstSocketName, struct FName InSecondSocketName, char ETrailWidthMode InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.BeginTrails
}; 



// Class Engine.ParticleModuleTrailSource
// Size: 0x90(Inherited: 0x30) 
struct UParticleModuleTrailSource : public UParticleModuleTrailBase
{
	char ETrail2SourceMethod SourceMethod;  // 0x30(0x1)
	char pad_49[3];  // 0x31(0x3)
	struct FName SourceName;  // 0x34(0x8)
	char pad_60[4];  // 0x3C(0x4)
	struct FRawDistributionFloat SourceStrength;  // 0x40(0x30)
	char bLockSourceStength : 1;  // 0x70(0x1)
	char pad_112_1 : 7;  // 0x70(0x1)
	char pad_113[4];  // 0x71(0x4)
	int32_t SourceOffsetCount;  // 0x74(0x4)
	struct TArray<struct FVector> SourceOffsetDefaults;  // 0x78(0x10)
	char EParticleSourceSelectionMethod SelectionMethod;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	char bInheritRotation : 1;  // 0x8C(0x1)
	char pad_140_1 : 7;  // 0x8C(0x1)
	char pad_141[4];  // 0x8D(0x4)

}; 



// Class Engine.ReporterBase
// Size: 0x30(Inherited: 0x28) 
struct UReporterBase : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class Engine.ParticleModuleTypeDataBase
// Size: 0x30(Inherited: 0x30) 
struct UParticleModuleTypeDataBase : public UParticleModule
{

}; 



// Class Engine.ParticleModuleTypeDataAnimTrail
// Size: 0x48(Inherited: 0x30) 
struct UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
	char bDeadTrailsOnDeactivate : 1;  // 0x30(0x1)
	char bEnablePreviousTangentRecalculation : 1;  // 0x30(0x1)
	char bTangentRecalculationEveryFrame : 1;  // 0x30(0x1)
	char pad_48_1 : 5;  // 0x30(0x1)
	char pad_49[4];  // 0x31(0x4)
	float TilingDistance;  // 0x34(0x4)
	float DistanceTessellationStepSize;  // 0x38(0x4)
	float TangentTessellationStepSize;  // 0x3C(0x4)
	float WidthTessellationStepSize;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)

}; 



// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x420(Inherited: 0x30) 
struct UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
	struct FGPUSpriteEmitterInfo EmitterInfo;  // 0x30(0x280)
	struct FGPUSpriteResourceData ResourceData;  // 0x2B0(0x160)
	float CameraMotionBlurAmount;  // 0x410(0x4)
	char bClearExistingParticlesOnInit : 1;  // 0x414(0x1)
	char pad_1044_1 : 7;  // 0x414(0x1)
	char pad_1045[12];  // 0x415(0xC)

}; 



// Class Engine.ParticleModuleVectorFieldGlobal
// Size: 0x40(Inherited: 0x30) 
struct UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
	char bOverrideGlobalVectorFieldTightness : 1;  // 0x30(0x1)
	char pad_48_1 : 7;  // 0x30(0x1)
	char pad_49[4];  // 0x31(0x4)
	float GlobalVectorFieldScale;  // 0x34(0x4)
	float GlobalVectorFieldTightness;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.SoundNodeRandom
// Size: 0x78(Inherited: 0x48) 
struct USoundNodeRandom : public USoundNode
{
	struct TArray<float> Weights;  // 0x48(0x10)
	struct TArray<bool> HasBeenUsed;  // 0x58(0x10)
	int32_t NumRandomUsed;  // 0x68(0x4)
	int32_t PreselectAtLevelLoad;  // 0x6C(0x4)
	char bShouldExcludeFromBranchCulling : 1;  // 0x70(0x1)
	char bSoundCueExcludedFromBranchCulling : 1;  // 0x70(0x1)
	char bRandomizeWithoutReplacement : 1;  // 0x70(0x1)
	char pad_112_1 : 5;  // 0x70(0x1)
	char pad_113[8];  // 0x71(0x8)

}; 



// Class Engine.ParticleModuleVectorFieldRotation
// Size: 0x48(Inherited: 0x30) 
struct UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
	struct FVector MinInitialRotation;  // 0x30(0xC)
	struct FVector MaxInitialRotation;  // 0x3C(0xC)

}; 



// Class Engine.ParticleModuleVelocityBase
// Size: 0x38(Inherited: 0x30) 
struct UParticleModuleVelocityBase : public UParticleModule
{
	char bInWorldSpace : 1;  // 0x30(0x1)
	char bApplyOwnerScale : 1;  // 0x30(0x1)
	char pad_48_1 : 6;  // 0x30(0x1)
	char pad_49[8];  // 0x31(0x8)

}; 



// Class Engine.ParticleModuleVelocity
// Size: 0xB0(Inherited: 0x38) 
struct UParticleModuleVelocity : public UParticleModuleVelocityBase
{
	struct FRawDistributionVector StartVelocity;  // 0x38(0x48)
	struct FRawDistributionFloat StartVelocityRadial;  // 0x80(0x30)

}; 



// Class Engine.ParticleModuleVelocityInheritParent
// Size: 0x80(Inherited: 0x38) 
struct UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
	struct FRawDistributionVector Scale;  // 0x38(0x48)

}; 



// Class Engine.PhysicalAnimationComponent
// Size: 0xF0(Inherited: 0xB0) 
struct UPhysicalAnimationComponent : public UActorComponent
{
	float StrengthMultiplyer;  // 0xB0(0x4)
	char pad_180[4];  // 0xB4(0x4)
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0xB8(0x8)
	char pad_192[48];  // 0xC0(0x30)

	void SetStrengthMultiplyer(float InStrengthMultiplyer); // Function Engine.PhysicalAnimationComponent.SetStrengthMultiplyer
	void SetSkeletalMeshComponent(struct USkeletalMeshComponent* InSkeletalMeshComponent); // Function Engine.PhysicalAnimationComponent.SetSkeletalMeshComponent
	struct FTransform GetBodyTargetTransform(struct FName BodyName); // Function Engine.PhysicalAnimationComponent.GetBodyTargetTransform
	void ApplyPhysicalAnimationSettingsBelow(struct FName BodyName, struct FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettingsBelow
	void ApplyPhysicalAnimationSettings(struct FName BodyName, struct FPhysicalAnimationData& PhysicalAnimationData); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettings
	void ApplyPhysicalAnimationProfileBelow(struct FName BodyName, struct FName ProfileName, bool bIncludeSelf, bool bClearNotFound); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationProfileBelow
}; 



// Class Engine.PhysicalMaterialMask
// Size: 0x30(Inherited: 0x28) 
struct UPhysicalMaterialMask : public UObject
{
	int32_t UVChannelIndex;  // 0x28(0x4)
	char TextureAddress AddressX;  // 0x2C(0x1)
	char TextureAddress AddressY;  // 0x2D(0x1)
	char pad_46[2];  // 0x2E(0x2)

}; 



// Class Engine.SoundNodeWavePlayer
// Size: 0x88(Inherited: 0x48) 
struct USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
	struct TSoftObjectPtr<USoundWave> SoundWaveAssetPtr;  // 0x48(0x28)
	struct USoundWave* SoundWave;  // 0x70(0x8)
	char pad_120[8];  // 0x78(0x8)
	char bLooping : 1;  // 0x80(0x1)
	char pad_128_1 : 7;  // 0x80(0x1)
	char pad_129[8];  // 0x81(0x8)

}; 



// Class Engine.SkeletalBodySetup
// Size: 0x2B8(Inherited: 0x2A0) 
struct USkeletalBodySetup : public UBodySetup
{
	char pad_672_1 : 7;  // 0x2A0(0x1)
	bool bSkipScaleFromAnimation : 1;  // 0x2A0(0x1)
	char pad_673[7];  // 0x2A1(0x7)
	struct TArray<struct FPhysicalAnimationProfile> PhysicalAnimationData;  // 0x2A8(0x10)

}; 



// Class Engine.SkeletalMeshLODSettings
// Size: 0x50(Inherited: 0x30) 
struct USkeletalMeshLODSettings : public UDataAsset
{
	struct FPerPlatformInt MinLOD;  // 0x30(0x4)
	struct FPerPlatformBool DisableBelowMinLodStripping;  // 0x34(0x1)
	char pad_53_1 : 7;  // 0x35(0x1)
	bool bOverrideLODStreamingSettings : 1;  // 0x35(0x1)
	struct FPerPlatformBool bSupportLODStreaming;  // 0x36(0x1)
	char pad_55[1];  // 0x37(0x1)
	struct FPerPlatformInt MaxNumStreamedLODs;  // 0x38(0x4)
	struct FPerPlatformInt MaxNumOptionalLODs;  // 0x3C(0x4)
	struct TArray<struct FSkeletalMeshLODGroupSettings> LODGroups;  // 0x40(0x10)

}; 



// Class Engine.PhysicsCollisionHandler
// Size: 0x40(Inherited: 0x28) 
struct UPhysicsCollisionHandler : public UObject
{
	float ImpactThreshold;  // 0x28(0x4)
	float ImpactReFireDelay;  // 0x2C(0x4)
	struct USoundBase* DefaultImpactSound;  // 0x30(0x8)
	float LastImpactSoundTime;  // 0x38(0x4)
	char pad_60[4];  // 0x3C(0x4)

}; 



// Class Engine.RigidBodyBase
// Size: 0x220(Inherited: 0x220) 
struct ARigidBodyBase : public AActor
{

}; 



// Class Engine.PhysicsConstraintTemplate
// Size: 0x318(Inherited: 0x28) 
struct UPhysicsConstraintTemplate : public UObject
{
	struct FConstraintInstance DefaultInstance;  // 0x28(0x1C8)
	struct TArray<struct FPhysicsConstraintProfileHandle> ProfileHandles;  // 0x1F0(0x10)
	struct FConstraintProfileProperties DefaultProfile;  // 0x200(0x114)
	char pad_788[4];  // 0x314(0x4)

}; 



// Class Engine.PhysicsHandleComponent
// Size: 0x160(Inherited: 0xB0) 
struct UPhysicsHandleComponent : public UActorComponent
{
	struct UPrimitiveComponent* GrabbedComponent;  // 0xB0(0x8)
	char pad_184[8];  // 0xB8(0x8)
	char pad_192_1 : 1;  // 0xC0(0x1)
	char bSoftAngularConstraint : 1;  // 0xC0(0x1)
	char bSoftLinearConstraint : 1;  // 0xC0(0x1)
	char bInterpolateTarget : 1;  // 0xC0(0x1)
	char pad_192_2 : 4;  // 0xC0(0x1)
	char pad_193[4];  // 0xC1(0x4)
	float LinearDamping;  // 0xC4(0x4)
	float LinearStiffness;  // 0xC8(0x4)
	float AngularDamping;  // 0xCC(0x4)
	float AngularStiffness;  // 0xD0(0x4)
	char pad_212[108];  // 0xD4(0x6C)
	float InterpolationSpeed;  // 0x140(0x4)
	char pad_324[28];  // 0x144(0x1C)

	void SetTargetRotation(struct FRotator NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetRotation
	void SetTargetLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetLocationAndRotation
	void SetTargetLocation(struct FVector NewLocation); // Function Engine.PhysicsHandleComponent.SetTargetLocation
	void SetLinearStiffness(float NewLinearStiffness); // Function Engine.PhysicsHandleComponent.SetLinearStiffness
	void SetLinearDamping(float NewLinearDamping); // Function Engine.PhysicsHandleComponent.SetLinearDamping
	void SetInterpolationSpeed(float NewInterpolationSpeed); // Function Engine.PhysicsHandleComponent.SetInterpolationSpeed
	void SetAngularStiffness(float NewAngularStiffness); // Function Engine.PhysicsHandleComponent.SetAngularStiffness
	void SetAngularDamping(float NewAngularDamping); // Function Engine.PhysicsHandleComponent.SetAngularDamping
	void ReleaseComponent(); // Function Engine.PhysicsHandleComponent.ReleaseComponent
	void GrabComponentAtLocationWithRotation(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector Location, struct FRotator Rotation); // Function Engine.PhysicsHandleComponent.GrabComponentAtLocationWithRotation
	void GrabComponentAtLocation(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector GrabLocation); // Function Engine.PhysicsHandleComponent.GrabComponentAtLocation
	void GrabComponent(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector GrabLocation, bool bConstrainRotation); // Function Engine.PhysicsHandleComponent.GrabComponent
	void GetTargetLocationAndRotation(struct FVector& TargetLocation, struct FRotator& TargetRotation); // Function Engine.PhysicsHandleComponent.GetTargetLocationAndRotation
	struct UPrimitiveComponent* GetGrabbedComponent(); // Function Engine.PhysicsHandleComponent.GetGrabbedComponent
}; 



// Class Engine.PhysicsSettings
// Size: 0x188(Inherited: 0xE0) 
struct UPhysicsSettings : public UPhysicsSettingsCore
{
	struct FRigidBodyErrorCorrection PhysicErrorCorrection;  // 0xE0(0x34)
	char ESettingsLockedAxis LockedAxis;  // 0x114(0x1)
	char ESettingsDOF DefaultDegreesOfFreedom;  // 0x115(0x1)
	char pad_278_1 : 7;  // 0x116(0x1)
	bool bSuppressFaceRemapTable : 1;  // 0x116(0x1)
	char pad_279_1 : 7;  // 0x117(0x1)
	bool bSupportUVFromHitResults : 1;  // 0x117(0x1)
	char pad_280_1 : 7;  // 0x118(0x1)
	bool bDisableActiveActors : 1;  // 0x118(0x1)
	char pad_281_1 : 7;  // 0x119(0x1)
	bool bDisableKinematicStaticPairs : 1;  // 0x119(0x1)
	char pad_282_1 : 7;  // 0x11A(0x1)
	bool bDisableKinematicKinematicPairs : 1;  // 0x11A(0x1)
	char pad_283_1 : 7;  // 0x11B(0x1)
	bool bDisableCCD : 1;  // 0x11B(0x1)
	char pad_284_1 : 7;  // 0x11C(0x1)
	bool bEnableEnhancedDeterminism : 1;  // 0x11C(0x1)
	char pad_285[3];  // 0x11D(0x3)
	float AnimPhysicsMinDeltaTime;  // 0x120(0x4)
	char pad_292_1 : 7;  // 0x124(0x1)
	bool bSimulateAnimPhysicsAfterReset : 1;  // 0x124(0x1)
	char pad_293[3];  // 0x125(0x3)
	float MaxPhysicsDeltaTime;  // 0x128(0x4)
	char pad_300_1 : 7;  // 0x12C(0x1)
	bool bSubstepping : 1;  // 0x12C(0x1)
	char pad_301_1 : 7;  // 0x12D(0x1)
	bool bSubsteppingAsync : 1;  // 0x12D(0x1)
	char pad_302[2];  // 0x12E(0x2)
	float MaxSubstepDeltaTime;  // 0x130(0x4)
	int32_t MaxSubsteps;  // 0x134(0x4)
	float SyncSceneSmoothingFactor;  // 0x138(0x4)
	float InitialAverageFrameRate;  // 0x13C(0x4)
	int32_t PhysXTreeRebuildRate;  // 0x140(0x4)
	char pad_324[4];  // 0x144(0x4)
	struct TArray<struct FPhysicalSurfaceName> PhysicalSurfaces;  // 0x148(0x10)
	struct FBroadphaseSettings DefaultBroadphaseSettings;  // 0x158(0x24)
	float MinDeltaVelocityForHitEvents;  // 0x17C(0x4)
	struct FChaosPhysicsSettings ChaosSettings;  // 0x180(0x3)
	char pad_387[5];  // 0x183(0x5)

}; 



// Class Engine.PhysicsThruster
// Size: 0x228(Inherited: 0x220) 
struct APhysicsThruster : public ARigidBodyBase
{
	struct UPhysicsThrusterComponent* ThrusterComponent;  // 0x220(0x8)

}; 



// Class Engine.PhysicsThrusterComponent
// Size: 0x200(Inherited: 0x200) 
struct UPhysicsThrusterComponent : public USceneComponent
{
	float ThrustStrength;  // 0x1F8(0x4)

}; 



// Class Engine.PlanarReflectionComponent
// Size: 0x3A0(Inherited: 0x2B0) 
struct UPlanarReflectionComponent : public USceneCaptureComponent
{
	struct UBoxComponent* PreviewBox;  // 0x2B0(0x8)
	float NormalDistortionStrength;  // 0x2B8(0x4)
	float PrefilterRoughness;  // 0x2BC(0x4)
	float PrefilterRoughnessDistance;  // 0x2C0(0x4)
	int32_t ScreenPercentage;  // 0x2C4(0x4)
	float ExtraFOV;  // 0x2C8(0x4)
	float DistanceFromPlaneFadeStart;  // 0x2CC(0x4)
	float DistanceFromPlaneFadeEnd;  // 0x2D0(0x4)
	float DistanceFromPlaneFadeoutStart;  // 0x2D4(0x4)
	float DistanceFromPlaneFadeoutEnd;  // 0x2D8(0x4)
	float AngleFromPlaneFadeStart;  // 0x2DC(0x4)
	float AngleFromPlaneFadeEnd;  // 0x2E0(0x4)
	char pad_740_1 : 7;  // 0x2E4(0x1)
	bool bShowPreviewPlane : 1;  // 0x2E4(0x1)
	char pad_741_1 : 7;  // 0x2E5(0x1)
	bool bRenderSceneTwoSided : 1;  // 0x2E5(0x1)
	char pad_742[186];  // 0x2E6(0xBA)

}; 



// Class Engine.PlaneReflectionCapture
// Size: 0x228(Inherited: 0x228) 
struct APlaneReflectionCapture : public AReflectionCapture
{

}; 



// Class Engine.SoundNode
// Size: 0x48(Inherited: 0x28) 
struct USoundNode : public UObject
{
	struct TArray<struct USoundNode*> ChildNodes;  // 0x28(0x10)
	char pad_56[16];  // 0x38(0x10)

}; 



// Class Engine.PlaneReflectionCaptureComponent
// Size: 0x290(Inherited: 0x270) 
struct UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
	float InfluenceRadiusScale;  // 0x270(0x4)
	char pad_628[4];  // 0x274(0x4)
	struct UDrawSphereComponent* PreviewInfluenceRadius;  // 0x278(0x8)
	struct UBoxComponent* PreviewCaptureBox;  // 0x280(0x8)
	char pad_648[8];  // 0x288(0x8)

}; 



// Class Engine.PoseableMeshComponent
// Size: 0x800(Inherited: 0x6A0) 
struct UPoseableMeshComponent : public USkinnedMeshComponent
{
	char pad_1696[352];  // 0x6A0(0x160)

	void SetBoneTransformByName(struct FName BoneName, struct FTransform& InTransform, char EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneTransformByName
	void SetBoneScaleByName(struct FName BoneName, struct FVector InScale3D, char EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneScaleByName
	void SetBoneRotationByName(struct FName BoneName, struct FRotator InRotation, char EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneRotationByName
	void SetBoneLocationByName(struct FName BoneName, struct FVector InLocation, char EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneLocationByName
	void ResetBoneTransformByName(struct FName BoneName); // Function Engine.PoseableMeshComponent.ResetBoneTransformByName
	struct FTransform GetBoneTransformByName(struct FName BoneName, char EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneTransformByName
	struct FVector GetBoneScaleByName(struct FName BoneName, char EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneScaleByName
	struct FRotator GetBoneRotationByName(struct FName BoneName, char EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneRotationByName
	struct FVector GetBoneLocationByName(struct FName BoneName, char EBoneSpaces BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneLocationByName
	void CopyPoseFromSkeletalComponent(struct USkeletalMeshComponent* InComponentToCopy); // Function Engine.PoseableMeshComponent.CopyPoseFromSkeletalComponent
}; 



// Class Engine.PoseAsset
// Size: 0x130(Inherited: 0x80) 
struct UPoseAsset : public UAnimationAsset
{
	struct FPoseDataContainer PoseContainer;  // 0x80(0x90)
	char pad_272_1 : 7;  // 0x110(0x1)
	bool bAdditivePose : 1;  // 0x110(0x1)
	char pad_273[3];  // 0x111(0x3)
	int32_t BasePoseIndex;  // 0x114(0x4)
	struct FName RetargetSource;  // 0x118(0x8)
	struct TArray<struct FTransform> RetargetSourceAssetReferencePose;  // 0x120(0x10)

}; 



// Class Engine.PoseWatch
// Size: 0x38(Inherited: 0x28) 
struct UPoseWatch : public UObject
{
	struct UEdGraphNode* Node;  // 0x28(0x8)
	struct FColor PoseWatchColour;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 



// Class Engine.PrecomputedVisibilityVolume
// Size: 0x258(Inherited: 0x258) 
struct APrecomputedVisibilityVolume : public AVolume
{

}; 



// Class Engine.PreviewCollectionInterface
// Size: 0x28(Inherited: 0x28) 
struct UPreviewCollectionInterface : public UInterface
{

}; 



// Class Engine.RectLight
// Size: 0x238(Inherited: 0x230) 
struct ARectLight : public ALight
{
	struct URectLightComponent* RectLightComponent;  // 0x230(0x8)

}; 



// Class Engine.RendererSettings
// Size: 0x148(Inherited: 0x38) 
struct URendererSettings : public UDeveloperSettings
{
	char bMobileDisableVertexFog : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[4];  // 0x39(0x4)
	int32_t MaxMobileCascades;  // 0x3C(0x4)
	char EMobileMSAASampleCount MobileMSAASampleCount;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	char bMobileAllowDitheredLODTransition : 1;  // 0x44(0x1)
	char bMobileAllowSoftwareOcclusionCulling : 1;  // 0x44(0x1)
	char bMobileVirtualTextures : 1;  // 0x44(0x1)
	char bDiscardUnusedQualityLevels : 1;  // 0x44(0x1)
	char bOcclusionCulling : 1;  // 0x44(0x1)
	char pad_68_1 : 3;  // 0x44(0x1)
	char pad_69[4];  // 0x45(0x4)
	float MinScreenRadiusForLights;  // 0x48(0x4)
	float MinScreenRadiusForEarlyZPass;  // 0x4C(0x4)
	float MinScreenRadiusForCSMdepth;  // 0x50(0x4)
	char bPrecomputedVisibilityWarning : 1;  // 0x54(0x1)
	char bTextureStreaming : 1;  // 0x54(0x1)
	char bUseDXT5NormalMaps : 1;  // 0x54(0x1)
	char bVirtualTextures : 1;  // 0x54(0x1)
	char bVirtualTextureEnableAutoImport : 1;  // 0x54(0x1)
	char bVirtualTexturedLightmaps : 1;  // 0x54(0x1)
	char pad_84_1 : 2;  // 0x54(0x1)
	char pad_85[4];  // 0x55(0x4)
	uint32_t VirtualTextureTileSize;  // 0x58(0x4)
	uint32_t VirtualTextureTileBorderSize;  // 0x5C(0x4)
	uint32_t VirtualTextureFeedbackFactor;  // 0x60(0x4)
	char bVirtualTextureEnableCompressZlib : 1;  // 0x64(0x1)
	char bVirtualTextureEnableCompressCrunch : 1;  // 0x64(0x1)
	char bClearCoatEnableSecondNormal : 1;  // 0x64(0x1)
	char pad_100_1 : 5;  // 0x64(0x1)
	char pad_101[4];  // 0x65(0x4)
	int32_t ReflectionCaptureResolution;  // 0x68(0x4)
	char bReflectionCaptureCompression : 1;  // 0x6C(0x1)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1;  // 0x6C(0x1)
	char bForwardShading : 1;  // 0x6C(0x1)
	char bVertexFoggingForOpaque : 1;  // 0x6C(0x1)
	char bAllowStaticLighting : 1;  // 0x6C(0x1)
	char bUseNormalMapsForStaticLighting : 1;  // 0x6C(0x1)
	char bGenerateMeshDistanceFields : 1;  // 0x6C(0x1)
	char bEightBitMeshDistanceFields : 1;  // 0x6C(0x1)
	char bGenerateLandscapeGIData : 1;  // 0x6D(0x1)
	char bCompressMeshDistanceFields : 1;  // 0x6D(0x1)
	char pad_109_1 : 6;  // 0x6D(0x1)
	char pad_110[3];  // 0x6E(0x3)
	float TessellationAdaptivePixelsPerTriangle;  // 0x70(0x4)
	char bSeparateTranslucency : 1;  // 0x74(0x1)
	char pad_116_1 : 7;  // 0x74(0x1)
	char pad_117[4];  // 0x75(0x4)
	char ETranslucentSortPolicy TranslucentSortPolicy;  // 0x78(0x1)
	char pad_121[3];  // 0x79(0x3)
	struct FVector TranslucentSortAxis;  // 0x7C(0xC)
	char EFixedFoveationLevels HMDFixedFoveationLevel;  // 0x88(0x1)
	char ECustomDepthStencil CustomDepthStencil;  // 0x89(0x1)
	char pad_138[2];  // 0x8A(0x2)
	char bCustomDepthTaaJitter : 1;  // 0x8C(0x1)
	char pad_140_1 : 7;  // 0x8C(0x1)
	char pad_141[4];  // 0x8D(0x4)
	char EAlphaChannelMode bEnableAlphaChannelInPostProcessing;  // 0x90(0x1)
	char pad_145[3];  // 0x91(0x3)
	char bDefaultFeatureBloom : 1;  // 0x94(0x1)
	char bDefaultFeatureAmbientOcclusion : 1;  // 0x94(0x1)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1;  // 0x94(0x1)
	char bDefaultFeatureAutoExposure : 1;  // 0x94(0x1)
	char pad_148_1 : 4;  // 0x94(0x1)
	char pad_149[4];  // 0x95(0x4)
	char EAutoExposureMethodUI DefaultFeatureAutoExposure;  // 0x98(0x1)
	char pad_153[3];  // 0x99(0x3)
	float DefaultFeatureAutoExposureBias;  // 0x9C(0x4)
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1;  // 0xA0(0x1)
	char bUsePreExposure : 1;  // 0xA0(0x1)
	char bEnablePreExposureOnlyInTheEditor : 1;  // 0xA0(0x1)
	char bDefaultFeatureMotionBlur : 1;  // 0xA0(0x1)
	char bDefaultFeatureLensFlare : 1;  // 0xA0(0x1)
	char bTemporalUpsampling : 1;  // 0xA0(0x1)
	char bSSGI : 1;  // 0xA0(0x1)
	char pad_160_1 : 1;  // 0xA0(0x1)
	char pad_161[4];  // 0xA1(0x4)
	char EAntiAliasingMethod DefaultFeatureAntiAliasing;  // 0xA4(0x1)
	uint8_t  DefaultLightUnits;  // 0xA5(0x1)
	char EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat;  // 0xA6(0x1)
	char pad_167[1];  // 0xA7(0x1)
	char bRenderUnbuiltPreviewShadowsInGame : 1;  // 0xA8(0x1)
	char bStencilForLODDither : 1;  // 0xA8(0x1)
	char pad_168_1 : 6;  // 0xA8(0x1)
	char pad_169[4];  // 0xA9(0x4)
	char EEarlyZPass EarlyZPass;  // 0xAC(0x1)
	char pad_173[3];  // 0xAD(0x3)
	char bEarlyZPassOnlyMaterialMasking : 1;  // 0xB0(0x1)
	char bDBuffer : 1;  // 0xB0(0x1)
	char pad_176_1 : 6;  // 0xB0(0x1)
	char pad_177[4];  // 0xB1(0x4)
	char EClearSceneOptions ClearSceneMethod;  // 0xB4(0x1)
	char pad_181[3];  // 0xB5(0x3)
	char bBasePassOutputsVelocity : 1;  // 0xB8(0x1)
	char bVertexDeformationOutputsVelocity : 1;  // 0xB8(0x1)
	char bSelectiveBasePassOutputs : 1;  // 0xB8(0x1)
	char bDefaultParticleCutouts : 1;  // 0xB8(0x1)
	char pad_184_1 : 4;  // 0xB8(0x1)
	char pad_185[4];  // 0xB9(0x4)
	int32_t GPUSimulationTextureSizeX;  // 0xBC(0x4)
	int32_t GPUSimulationTextureSizeY;  // 0xC0(0x4)
	char bGlobalClipPlane : 1;  // 0xC4(0x1)
	char pad_196_1 : 7;  // 0xC4(0x1)
	char pad_197[4];  // 0xC5(0x4)
	char EGBufferFormat GBufferFormat;  // 0xC8(0x1)
	char pad_201[3];  // 0xC9(0x3)
	char bUseGPUMorphTargets : 1;  // 0xCC(0x1)
	char bNvidiaAftermathEnabled : 1;  // 0xCC(0x1)
	char bMultiView : 1;  // 0xCC(0x1)
	char bMobilePostProcessing : 1;  // 0xCC(0x1)
	char bMobileMultiView : 1;  // 0xCC(0x1)
	char bMobileUseHWsRGBEncoding : 1;  // 0xCC(0x1)
	char bRoundRobinOcclusion : 1;  // 0xCC(0x1)
	char bODSCapture : 1;  // 0xCC(0x1)
	char bMeshStreaming : 1;  // 0xCD(0x1)
	char pad_205_1 : 7;  // 0xCD(0x1)
	char pad_206[3];  // 0xCE(0x3)
	float WireframeCullThreshold;  // 0xD0(0x4)
	char bEnableRayTracing : 1;  // 0xD4(0x1)
	char bEnableRayTracingTextureLOD : 1;  // 0xD4(0x1)
	char bSupportStationarySkylight : 1;  // 0xD4(0x1)
	char bSupportLowQualityLightmaps : 1;  // 0xD4(0x1)
	char bSupportPointLightWholeSceneShadows : 1;  // 0xD4(0x1)
	char bSupportAtmosphericFog : 1;  // 0xD4(0x1)
	char bSupportSkyAtmosphere : 1;  // 0xD4(0x1)
	char bSupportSkyAtmosphereAffectsHeightFog : 1;  // 0xD4(0x1)
	char bSupportSkinCacheShaders : 1;  // 0xD5(0x1)
	char pad_213_1 : 7;  // 0xD5(0x1)
	char pad_214[3];  // 0xD6(0x3)
	uint8_t  DefaultSkinCacheBehavior;  // 0xD8(0x1)
	char pad_217[3];  // 0xD9(0x3)
	float SkinCacheSceneMemoryLimitInMB;  // 0xDC(0x4)
	char bMobileEnableStaticAndCSMShadowReceivers : 1;  // 0xE0(0x1)
	char bMobileEnableMovableLightCSMShaderCulling : 1;  // 0xE0(0x1)
	char bMobileAllowDistanceFieldShadows : 1;  // 0xE0(0x1)
	char bMobileAllowMovableDirectionalLights : 1;  // 0xE0(0x1)
	char pad_224_1 : 4;  // 0xE0(0x1)
	char pad_225[4];  // 0xE1(0x4)
	uint32_t MobileNumDynamicPointLights;  // 0xE4(0x4)
	char bMobileDynamicPointLightsUseStaticBranch : 1;  // 0xE8(0x1)
	char bMobileAllowMovableSpotlights : 1;  // 0xE8(0x1)
	char bMobileAllowMovableSpotlightShadows : 1;  // 0xE8(0x1)
	char bSupport16BitBoneIndex : 1;  // 0xE8(0x1)
	char bGPUSkinLimit2BoneInfluences : 1;  // 0xE8(0x1)
	char bSupportDepthOnlyIndexBuffers : 1;  // 0xE8(0x1)
	char bSupportReversedIndexBuffers : 1;  // 0xE8(0x1)
	char bLPV : 1;  // 0xE8(0x1)
	char bMobileAmbientOcclusion : 1;  // 0xE9(0x1)
	char bUseUnlimitedBoneInfluences : 1;  // 0xE9(0x1)
	char pad_233_1 : 6;  // 0xE9(0x1)
	char pad_234[3];  // 0xEA(0x3)
	int32_t UnlimitedBonInfluencesThreshold;  // 0xEC(0x4)
	struct FPerPlatformInt MaxSkinBones;  // 0xF0(0x4)
	char EMobilePlanarReflectionMode MobilePlanarReflectionMode;  // 0xF4(0x1)
	char pad_245[3];  // 0xF5(0x3)
	char bMobileSupportsGen4TAA : 1;  // 0xF8(0x1)
	char pad_248_1 : 7;  // 0xF8(0x1)
	char pad_249[4];  // 0xF9(0x4)
	struct FPerPlatformBool bStreamSkeletalMeshLODs;  // 0xFC(0x1)
	struct FPerPlatformBool bDiscardSkeletalMeshOptionalLODs;  // 0xFD(0x1)
	char pad_254[2];  // 0xFE(0x2)
	struct FSoftObjectPath VisualizeCalibrationColorMaterialPath;  // 0x100(0x18)
	struct FSoftObjectPath VisualizeCalibrationCustomMaterialPath;  // 0x118(0x18)
	struct FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath;  // 0x130(0x18)

}; 



// Class Engine.ReplayNetConnection
// Size: 0x23A8(Inherited: 0x1BA8) 
struct UReplayNetConnection : public UNetConnection
{
	char pad_7080[2048];  // 0x1BA8(0x800)

}; 



// Class Engine.ReplicationConnectionDriver
// Size: 0x28(Inherited: 0x28) 
struct UReplicationConnectionDriver : public UObject
{

}; 



// Class Engine.ReverbEffect
// Size: 0x60(Inherited: 0x28) 
struct UReverbEffect : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bBypassEarlyReflections : 1;  // 0x28(0x1)
	char pad_41[3];  // 0x29(0x3)
	float ReflectionsDelay;  // 0x2C(0x4)
	float GainHF;  // 0x30(0x4)
	float ReflectionsGain;  // 0x34(0x4)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bBypassLateReflections : 1;  // 0x38(0x1)
	char pad_57[3];  // 0x39(0x3)
	float LateDelay;  // 0x3C(0x4)
	float DecayTime;  // 0x40(0x4)
	float Density;  // 0x44(0x4)
	float Diffusion;  // 0x48(0x4)
	float AirAbsorptionGainHF;  // 0x4C(0x4)
	float DecayHFRatio;  // 0x50(0x4)
	float LateGain;  // 0x54(0x4)
	float Gain;  // 0x58(0x4)
	float RoomRolloffFactor;  // 0x5C(0x4)

}; 



// Class Engine.Rig
// Size: 0x50(Inherited: 0x28) 
struct URig : public UObject
{
	char pad_40[8];  // 0x28(0x8)
	struct TArray<struct FTransformBase> TransformBases;  // 0x30(0x10)
	struct TArray<struct FNode> Nodes;  // 0x40(0x10)

}; 



// Class Engine.RotatingMovementComponent
// Size: 0x110(Inherited: 0xF0) 
struct URotatingMovementComponent : public UMovementComponent
{
	struct FRotator RotationRate;  // 0xF0(0xC)
	struct FVector PivotTranslation;  // 0xFC(0xC)
	char bRotationInLocalSpace : 1;  // 0x108(0x1)
	char pad_264_1 : 7;  // 0x108(0x1)
	char pad_265[8];  // 0x109(0x8)

}; 



// Class Engine.RuntimeOptionsBase
// Size: 0x38(Inherited: 0x28) 
struct URuntimeOptionsBase : public UObject
{
	char pad_40[16];  // 0x28(0x10)

}; 



// Class Engine.RuntimeVirtualTextureComponent
// Size: 0x270(Inherited: 0x200) 
struct URuntimeVirtualTextureComponent : public USceneComponent
{
	struct TSoftObjectPtr<AActor> BoundsAlignActor;  // 0x1F8(0x28)
	char pad_552_1 : 7;  // 0x228(0x1)
	bool bSetBoundsButton : 1;  // 0x220(0x1)
	char pad_553_1 : 7;  // 0x229(0x1)
	bool bSnapBoundsToLandscape : 1;  // 0x221(0x1)
	struct URuntimeVirtualTexture* VirtualTexture;  // 0x228(0x8)
	char pad_562_1 : 7;  // 0x232(0x1)
	bool bEnableScalability : 1;  // 0x230(0x1)
	char pad_563[1];  // 0x233(0x1)
	uint32_t ScalabilityGroup;  // 0x234(0x4)
	char pad_568_1 : 7;  // 0x238(0x1)
	bool bHidePrimitives : 1;  // 0x238(0x1)
	char pad_569[7];  // 0x239(0x7)
	struct UVirtualTextureBuilder* StreamingTexture;  // 0x240(0x8)
	int32_t StreamLowMips;  // 0x248(0x4)
	char pad_588_1 : 7;  // 0x24C(0x1)
	bool bBuildStreamingMipsButton : 1;  // 0x24C(0x1)
	char pad_589_1 : 7;  // 0x24D(0x1)
	bool bEnableCompressCrunch : 1;  // 0x24D(0x1)
	char pad_590_1 : 7;  // 0x24E(0x1)
	bool bUseStreamingLowMipsInEditor : 1;  // 0x24E(0x1)
	char pad_591_1 : 7;  // 0x24F(0x1)
	bool bBuildDebugStreamingMips : 1;  // 0x24F(0x1)
	char pad_592[32];  // 0x250(0x20)

	void Invalidate(struct FBoxSphereBounds& WorldBounds); // Function Engine.RuntimeVirtualTextureComponent.Invalidate
}; 



// Class Engine.RVOAvoidanceInterface
// Size: 0x28(Inherited: 0x28) 
struct URVOAvoidanceInterface : public UInterface
{

}; 



// Class Engine.SaveGame
// Size: 0x28(Inherited: 0x28) 
struct USaveGame : public UObject
{

}; 



// Class Engine.Scene
// Size: 0x28(Inherited: 0x28) 
struct UScene : public UObject
{

}; 



// Class Engine.VolumetricCloud
// Size: 0x228(Inherited: 0x220) 
struct AVolumetricCloud : public AInfo
{
	struct UVolumetricCloudComponent* VolumetricCloudComponent;  // 0x220(0x8)

}; 



// Class Engine.SceneCaptureCube
// Size: 0x238(Inherited: 0x230) 
struct ASceneCaptureCube : public ASceneCapture
{
	struct USceneCaptureComponentCube* CaptureComponentCube;  // 0x230(0x8)

	void OnInterpToggle(bool bEnable); // Function Engine.SceneCaptureCube.OnInterpToggle
}; 



// Class Engine.ShadowMapTexture2D
// Size: 0x1B0(Inherited: 0x1A0) 
struct UShadowMapTexture2D : public UTexture2D
{
	char EShadowMapFlags ShadowmapFlags;  // 0x1A0(0x1)
	char pad_417[15];  // 0x1A1(0xF)

}; 



// Class Engine.SkyAtmosphere
// Size: 0x228(Inherited: 0x220) 
struct ASkyAtmosphere : public AInfo
{
	struct USkyAtmosphereComponent* SkyAtmosphereComponent;  // 0x220(0x8)

}; 



// Class Engine.SimpleConstructionScript
// Size: 0xA0(Inherited: 0x28) 
struct USimpleConstructionScript : public UObject
{
	struct TArray<struct USCS_Node*> RootNodes;  // 0x28(0x10)
	struct TArray<struct USCS_Node*> AllNodes;  // 0x38(0x10)
	struct USCS_Node* DefaultSceneRootNode;  // 0x48(0x8)
	char pad_80[80];  // 0x50(0x50)

}; 



// Class Engine.SkeletalMesh
// Size: 0x3A0(Inherited: 0x60) 
struct USkeletalMesh : public UStreamableRenderAsset
{
	char pad_96[32];  // 0x60(0x20)
	struct USkeleton* Skeleton;  // 0x80(0x8)
	struct FBoxSphereBounds ImportedBounds;  // 0x88(0x1C)
	struct FBoxSphereBounds ExtendedBounds;  // 0xA4(0x1C)
	struct FVector PositiveBoundsExtension;  // 0xC0(0xC)
	struct FVector NegativeBoundsExtension;  // 0xCC(0xC)
	struct TArray<struct FSkeletalMaterial> Materials;  // 0xD8(0x10)
	struct TArray<struct FBoneMirrorInfo> SkelMirrorTable;  // 0xE8(0x10)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo;  // 0xF8(0x10)
	char pad_264[80];  // 0x108(0x50)
	struct FPerPlatformInt MinLOD;  // 0x158(0x4)
	struct FPerPlatformBool DisableBelowMinLodStripping;  // 0x15C(0x1)
	char EAxis SkelMirrorAxis;  // 0x15D(0x1)
	char EAxis SkelMirrorFlipAxis;  // 0x15E(0x1)
	char bUseFullPrecisionUVs : 1;  // 0x15F(0x1)
	char bUseHighPrecisionTangentBasis : 1;  // 0x15F(0x1)
	char bHasBeenSimplified : 1;  // 0x15F(0x1)
	char bHasVertexColors : 1;  // 0x15F(0x1)
	char pad_351_1 : 1;  // 0x15F(0x1)
	char bEnablePerPolyCollision : 1;  // 0x15F(0x1)
	char pad_351_2 : 2;  // 0x15F(0x1)
	struct UBodySetup* BodySetup;  // 0x160(0x8)
	struct UPhysicsAsset* PhysicsAsset;  // 0x168(0x8)
	struct UPhysicsAsset* ShadowPhysicsAsset;  // 0x170(0x8)
	struct TArray<struct UNodeMappingContainer*> NodeMappingData;  // 0x178(0x10)
	char bSupportRayTracing : 1;  // 0x188(0x1)
	char pad_392_1 : 7;  // 0x188(0x1)
	char pad_393[8];  // 0x189(0x8)
	struct TArray<struct UMorphTarget*> MorphTargets;  // 0x190(0x10)
	char pad_416[376];  // 0x1A0(0x178)
	UAnimInstance* PostProcessAnimBlueprint;  // 0x318(0x8)
	struct TArray<struct UClothingAssetBase*> MeshClothingAssets;  // 0x320(0x10)
	struct FSkeletalMeshSamplingInfo SamplingInfo;  // 0x330(0x30)
	struct TArray<struct UAssetUserData*> AssetUserData;  // 0x360(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets;  // 0x370(0x10)
	char pad_896[16];  // 0x380(0x10)
	struct TArray<struct FSkinWeightProfileInfo> SkinWeightProfiles;  // 0x390(0x10)

	void SetMorphTargets(struct TArray<struct UMorphTarget*>& InMorphTargets); // Function Engine.SkeletalMesh.SetMorphTargets
	void SetMeshClothingAssets(struct TArray<struct UClothingAssetBase*>& InMeshClothingAssets); // Function Engine.SkeletalMesh.SetMeshClothingAssets
	void SetMaterials(struct TArray<struct FSkeletalMaterial>& InMaterials); // Function Engine.SkeletalMesh.SetMaterials
	void SetLODSettings(struct USkeletalMeshLODSettings* InLODSettings); // Function Engine.SkeletalMesh.SetLODSettings
	void SetDefaultAnimatingRig(struct TSoftObjectPtr<UObject> InAnimatingRig); // Function Engine.SkeletalMesh.SetDefaultAnimatingRig
	int32_t NumSockets(); // Function Engine.SkeletalMesh.NumSockets
	struct TArray<struct FString> K2_GetAllMorphTargetNames(); // Function Engine.SkeletalMesh.K2_GetAllMorphTargetNames
	bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections); // Function Engine.SkeletalMesh.IsSectionUsingCloth
	struct USkeletalMeshSocket* GetSocketByIndex(int32_t Index); // Function Engine.SkeletalMesh.GetSocketByIndex
	struct USkeleton* GetSkeleton(); // Function Engine.SkeletalMesh.GetSkeleton
	struct UPhysicsAsset* GetShadowPhysicsAsset(); // Function Engine.SkeletalMesh.GetShadowPhysicsAsset
	struct UPhysicsAsset* GetPhysicsAsset(); // Function Engine.SkeletalMesh.GetPhysicsAsset
	struct TArray<struct UNodeMappingContainer*> GetNodeMappingData(); // Function Engine.SkeletalMesh.GetNodeMappingData
	struct UNodeMappingContainer* GetNodeMappingContainer(struct UBlueprint* SourceAsset); // Function Engine.SkeletalMesh.GetNodeMappingContainer
	struct TArray<struct UMorphTarget*> GetMorphTargets(); // Function Engine.SkeletalMesh.GetMorphTargets
	struct TArray<struct UClothingAssetBase*> GetMeshClothingAssets(); // Function Engine.SkeletalMesh.GetMeshClothingAssets
	struct TArray<struct FSkeletalMaterial> GetMaterials(); // Function Engine.SkeletalMesh.GetMaterials
	struct USkeletalMeshLODSettings* GetLODSettings(); // Function Engine.SkeletalMesh.GetLODSettings
	struct FBoxSphereBounds GetImportedBounds(); // Function Engine.SkeletalMesh.GetImportedBounds
	struct TSoftObjectPtr<UObject> GetDefaultAnimatingRig(); // Function Engine.SkeletalMesh.GetDefaultAnimatingRig
	struct FBoxSphereBounds GetBounds(); // Function Engine.SkeletalMesh.GetBounds
	struct USkeletalMeshSocket* FindSocketInfo(struct FName InSocketName, struct FTransform& OutTransform, int32_t& OutBoneIndex, int32_t& OutIndex); // Function Engine.SkeletalMesh.FindSocketInfo
	struct USkeletalMeshSocket* FindSocketAndIndex(struct FName InSocketName, int32_t& OutIndex); // Function Engine.SkeletalMesh.FindSocketAndIndex
	struct USkeletalMeshSocket* FindSocket(struct FName InSocketName); // Function Engine.SkeletalMesh.FindSocket
}; 



// Class Engine.SkeletalMeshActor
// Size: 0x2A8(Inherited: 0x220) 
struct ASkeletalMeshActor : public AActor
{
	char pad_544[8];  // 0x220(0x8)
	char bShouldDoAnimNotifies : 1;  // 0x228(0x1)
	char bWakeOnLevelStart : 1;  // 0x228(0x1)
	char pad_552_1 : 6;  // 0x228(0x1)
	char pad_553[8];  // 0x229(0x8)
	struct USkeletalMeshComponent* SkeletalMeshComponent;  // 0x230(0x8)
	struct USkeletalMesh* ReplicatedMesh;  // 0x238(0x8)
	struct UPhysicsAsset* ReplicatedPhysAsset;  // 0x240(0x8)
	struct UMaterialInterface* ReplicatedMaterial0;  // 0x248(0x8)
	struct UMaterialInterface* ReplicatedMaterial1;  // 0x250(0x8)
	char pad_600[80];  // 0x258(0x50)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1
	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0
}; 



// Class Engine.SkeletalMeshEditorData
// Size: 0x28(Inherited: 0x28) 
struct USkeletalMeshEditorData : public UObject
{

}; 



// Class Engine.SlateTextureAtlasInterface
// Size: 0x28(Inherited: 0x28) 
struct USlateTextureAtlasInterface : public UInterface
{

}; 



// Class Engine.SkeletalMeshSimplificationSettings
// Size: 0x40(Inherited: 0x38) 
struct USkeletalMeshSimplificationSettings : public UDeveloperSettings
{
	struct FName SkeletalMeshReductionModuleName;  // 0x38(0x8)

}; 



// Class Engine.SkeletalMeshSocket
// Size: 0x60(Inherited: 0x28) 
struct USkeletalMeshSocket : public UObject
{
	struct FName SocketName;  // 0x28(0x8)
	struct FName BoneName;  // 0x30(0x8)
	struct FVector RelativeLocation;  // 0x38(0xC)
	struct FRotator RelativeRotation;  // 0x44(0xC)
	struct FVector RelativeScale;  // 0x50(0xC)
	char pad_92_1 : 7;  // 0x5C(0x1)
	bool bForceAlwaysAnimated : 1;  // 0x5C(0x1)
	char pad_93[3];  // 0x5D(0x3)

	void InitializeSocketFromLocation(struct USkeletalMeshComponent* SkelComp, struct FVector WorldLocation, struct FVector WorldNormal); // Function Engine.SkeletalMeshSocket.InitializeSocketFromLocation
	struct FVector GetSocketLocation(struct USkeletalMeshComponent* SkelComp); // Function Engine.SkeletalMeshSocket.GetSocketLocation
}; 



// Class Engine.SkyLightComponent
// Size: 0x410(Inherited: 0x230) 
struct USkyLightComponent : public ULightComponentBase
{
	char pad_560_1 : 7;  // 0x230(0x1)
	bool bRealTimeCapture : 1;  // 0x228(0x1)
	char ESkyLightSourceType SourceType;  // 0x229(0x1)
	struct UTextureCube* Cubemap;  // 0x230(0x8)
	float SourceCubemapAngle;  // 0x238(0x4)
	int32_t CubemapResolution;  // 0x23C(0x4)
	float SkyDistanceThreshold;  // 0x240(0x4)
	char pad_582_1 : 7;  // 0x246(0x1)
	bool bCaptureEmissiveOnly : 1;  // 0x244(0x1)
	char pad_583_1 : 7;  // 0x247(0x1)
	bool bLowerHemisphereIsBlack : 1;  // 0x245(0x1)
	struct FLinearColor LowerHemisphereColor;  // 0x248(0x10)
	struct FLinearColor UpperHemisphereColor;  // 0x258(0x10)
	float OcclusionMaxDistance;  // 0x268(0x4)
	float Contrast;  // 0x26C(0x4)
	float OcclusionExponent;  // 0x270(0x4)
	float MinOcclusion;  // 0x274(0x4)
	struct FColor OcclusionTint;  // 0x278(0x4)
	char bCloudAmbientOcclusion : 1;  // 0x27C(0x1)
	char pad_636_1 : 7;  // 0x27C(0x1)
	char pad_637[4];  // 0x27D(0x4)
	float CloudAmbientOcclusionStrength;  // 0x280(0x4)
	float CloudAmbientOcclusionExtent;  // 0x284(0x4)
	float CloudAmbientOcclusionMapResolutionScale;  // 0x288(0x4)
	float CloudAmbientOcclusionApertureScale;  // 0x28C(0x4)
	char EOcclusionCombineMode OcclusionCombineMode;  // 0x290(0x1)
	char pad_657[167];  // 0x291(0xA7)
	struct UTextureCube* BlendDestinationCubemap;  // 0x338(0x8)
	char pad_832[208];  // 0x340(0xD0)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetVolumetricScatteringIntensity
	void SetUpperHemisphereColor(struct FLinearColor& InUpperHemisphereColor); // Function Engine.SkyLightComponent.SetUpperHemisphereColor
	void SetOcclusionTint(struct FColor& InTint); // Function Engine.SkyLightComponent.SetOcclusionTint
	void SetOcclusionExponent(float InOcclusionExponent); // Function Engine.SkyLightComponent.SetOcclusionExponent
	void SetOcclusionContrast(float InOcclusionContrast); // Function Engine.SkyLightComponent.SetOcclusionContrast
	void SetMinOcclusion(float InMinOcclusion); // Function Engine.SkyLightComponent.SetMinOcclusion
	void SetLowerHemisphereColor(struct FLinearColor& InLowerHemisphereColor); // Function Engine.SkyLightComponent.SetLowerHemisphereColor
	void SetLightColor(struct FLinearColor NewLightColor); // Function Engine.SkyLightComponent.SetLightColor
	void SetIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetIntensity
	void SetIndirectLightingIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetIndirectLightingIntensity
	void SetCubemapBlend(struct UTextureCube* SourceCubemap, struct UTextureCube* DestinationCubemap, float InBlendFraction); // Function Engine.SkyLightComponent.SetCubemapBlend
	void SetCubemap(struct UTextureCube* NewCubemap); // Function Engine.SkyLightComponent.SetCubemap
	void RecaptureSky(); // Function Engine.SkyLightComponent.RecaptureSky
}; 



// Class Engine.SlateBrushAsset
// Size: 0xB0(Inherited: 0x28) 
struct USlateBrushAsset : public UObject
{
	struct FSlateBrush Brush;  // 0x28(0x88)

}; 



// Class Engine.SmokeTestCommandlet
// Size: 0x80(Inherited: 0x80) 
struct USmokeTestCommandlet : public UCommandlet
{

}; 



// Class Engine.SoundAttenuation
// Size: 0x3C8(Inherited: 0x28) 
struct USoundAttenuation : public UObject
{
	struct FSoundAttenuationSettings Attenuation;  // 0x28(0x3A0)

}; 



// Class Engine.SoundGroups
// Size: 0x88(Inherited: 0x28) 
struct USoundGroups : public UObject
{
	struct TArray<struct FSoundGroup> SoundGroupProfiles;  // 0x28(0x10)
	char pad_56[80];  // 0x38(0x50)

}; 



// Class Engine.SoundMix
// Size: 0x90(Inherited: 0x28) 
struct USoundMix : public UObject
{
	char bApplyEQ : 1;  // 0x28(0x1)
	char pad_40_1 : 7;  // 0x28(0x1)
	char pad_41[4];  // 0x29(0x4)
	float EQPriority;  // 0x2C(0x4)
	struct FAudioEQEffect EQSettings;  // 0x30(0x40)
	struct TArray<struct FSoundClassAdjuster> SoundClassEffects;  // 0x70(0x10)
	float InitialDelay;  // 0x80(0x4)
	float FadeInTime;  // 0x84(0x4)
	float Duration;  // 0x88(0x4)
	float FadeOutTime;  // 0x8C(0x4)

}; 



// Class Engine.SoundNodeAssetReferencer
// Size: 0x48(Inherited: 0x48) 
struct USoundNodeAssetReferencer : public USoundNode
{

}; 



// Class Engine.SoundNodeAttenuation
// Size: 0x3F8(Inherited: 0x48) 
struct USoundNodeAttenuation : public USoundNode
{
	struct USoundAttenuation* AttenuationSettings;  // 0x48(0x8)
	struct FSoundAttenuationSettings AttenuationOverrides;  // 0x50(0x3A0)
	char bOverrideAttenuation : 1;  // 0x3F0(0x1)
	char pad_1008_1 : 7;  // 0x3F0(0x1)
	char pad_1009[8];  // 0x3F1(0x8)

}; 



// Class Engine.SoundNodeBranch
// Size: 0x50(Inherited: 0x48) 
struct USoundNodeBranch : public USoundNode
{
	struct FName BoolParameterName;  // 0x48(0x8)

}; 



// Class Engine.SoundNodeConcatenator
// Size: 0x58(Inherited: 0x48) 
struct USoundNodeConcatenator : public USoundNode
{
	struct TArray<float> InputVolume;  // 0x48(0x10)

}; 



// Class Engine.SoundNodeDelay
// Size: 0x50(Inherited: 0x48) 
struct USoundNodeDelay : public USoundNode
{
	float DelayMin;  // 0x48(0x4)
	float DelayMax;  // 0x4C(0x4)

}; 



// Class Engine.SoundNodeDialoguePlayer
// Size: 0x70(Inherited: 0x48) 
struct USoundNodeDialoguePlayer : public USoundNode
{
	struct FDialogueWaveParameter DialogueWaveParameter;  // 0x48(0x20)
	char bLooping : 1;  // 0x68(0x1)
	char pad_104_1 : 7;  // 0x68(0x1)
	char pad_105[8];  // 0x69(0x8)

}; 



// Class Engine.SoundNodeDistanceCrossFade
// Size: 0x58(Inherited: 0x48) 
struct USoundNodeDistanceCrossFade : public USoundNode
{
	struct TArray<struct FDistanceDatum> CrossFadeInput;  // 0x48(0x10)

}; 



// Class Engine.SoundNodeEnveloper
// Size: 0x190(Inherited: 0x48) 
struct USoundNodeEnveloper : public USoundNode
{
	float LoopStart;  // 0x48(0x4)
	float LoopEnd;  // 0x4C(0x4)
	float DurationAfterLoop;  // 0x50(0x4)
	int32_t LoopCount;  // 0x54(0x4)
	char bLoopIndefinitely : 1;  // 0x58(0x1)
	char bLoop : 1;  // 0x58(0x1)
	char pad_88_1 : 6;  // 0x58(0x1)
	char pad_89[8];  // 0x59(0x8)
	struct UDistributionFloatConstantCurve* VolumeInterpCurve;  // 0x60(0x8)
	struct UDistributionFloatConstantCurve* PitchInterpCurve;  // 0x68(0x8)
	struct FRuntimeFloatCurve VolumeCurve;  // 0x70(0x88)
	struct FRuntimeFloatCurve PitchCurve;  // 0xF8(0x88)
	float PitchMin;  // 0x180(0x4)
	float PitchMax;  // 0x184(0x4)
	float VolumeMin;  // 0x188(0x4)
	float VolumeMax;  // 0x18C(0x4)

}; 



// Class Engine.SoundNodeGroupControl
// Size: 0x58(Inherited: 0x48) 
struct USoundNodeGroupControl : public USoundNode
{
	struct TArray<int32_t> GroupSizes;  // 0x48(0x10)

}; 



// Class Engine.SoundNodeModulator
// Size: 0x58(Inherited: 0x48) 
struct USoundNodeModulator : public USoundNode
{
	float PitchMin;  // 0x48(0x4)
	float PitchMax;  // 0x4C(0x4)
	float VolumeMin;  // 0x50(0x4)
	float VolumeMax;  // 0x54(0x4)

}; 



// Class Engine.SoundNodeModulatorContinuous
// Size: 0x88(Inherited: 0x48) 
struct USoundNodeModulatorContinuous : public USoundNode
{
	struct FModulatorContinuousParams PitchModulationParams;  // 0x48(0x20)
	struct FModulatorContinuousParams VolumeModulationParams;  // 0x68(0x20)

}; 



// Class Engine.SoundNodeSoundClass
// Size: 0x58(Inherited: 0x48) 
struct USoundNodeSoundClass : public USoundNode
{
	struct USoundClass* SoundClassOverride;  // 0x48(0x8)
	char pad_80[8];  // 0x50(0x8)

}; 



// Class Engine.HierarchicalLODSetup
// Size: 0x60(Inherited: 0x28) 
struct UHierarchicalLODSetup : public UObject
{
	struct TArray<struct FHierarchicalSimplification> HierarchicalLODSetup;  // 0x28(0x10)
	struct TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial;  // 0x38(0x28)

}; 



// Class Engine.SoundNodeWaveParam
// Size: 0x50(Inherited: 0x48) 
struct USoundNodeWaveParam : public USoundNode
{
	struct FName WaveParameterName;  // 0x48(0x8)

}; 



// Class Engine.SoundSubmix
// Size: 0xC0(Inherited: 0x40) 
struct USoundSubmix : public USoundSubmixWithParentBase
{
	char bMuteWhenBackgrounded : 1;  // 0x40(0x1)
	char pad_64_1 : 7;  // 0x40(0x1)
	char pad_65[8];  // 0x41(0x8)
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectChain;  // 0x48(0x10)
	struct USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings;  // 0x58(0x8)
	int32_t EnvelopeFollowerAttackTime;  // 0x60(0x4)
	int32_t EnvelopeFollowerReleaseTime;  // 0x64(0x4)
	uint8_t  GainMode;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	float OutputVolume;  // 0x6C(0x4)
	float WetLevel;  // 0x70(0x4)
	float DryLevel;  // 0x74(0x4)
	struct FSoundModulationDestinationSettings OutputVolumeModulation;  // 0x78(0x10)
	struct FSoundModulationDestinationSettings WetLevelModulation;  // 0x88(0x10)
	struct FSoundModulationDestinationSettings DryLevelModulation;  // 0x98(0x10)
	struct FMulticastInlineDelegate OnSubmixRecordedFileDone;  // 0xA8(0x10)
	char pad_184[8];  // 0xB8(0x8)

	void StopSpectralAnalysis(struct UObject* WorldContextObject); // Function Engine.SoundSubmix.StopSpectralAnalysis
	void StopRecordingOutput(struct UObject* WorldContextObject, uint8_t  ExportType, struct FString Name, struct FString Path, struct USoundWave* ExistingSoundWaveToOverwrite); // Function Engine.SoundSubmix.StopRecordingOutput
	void StopEnvelopeFollowing(struct UObject* WorldContextObject); // Function Engine.SoundSubmix.StopEnvelopeFollowing
	void StartSpectralAnalysis(struct UObject* WorldContextObject, uint8_t  FFTSize, uint8_t  InterpolationMethod, uint8_t  WindowType, float HopSize, uint8_t  SpectrumType); // Function Engine.SoundSubmix.StartSpectralAnalysis
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration); // Function Engine.SoundSubmix.StartRecordingOutput
	void StartEnvelopeFollowing(struct UObject* WorldContextObject); // Function Engine.SoundSubmix.StartEnvelopeFollowing
	void SetSubmixOutputVolume(struct UObject* WorldContextObject, float InOutputVolume); // Function Engine.SoundSubmix.SetSubmixOutputVolume
	void RemoveSpectralAnalysisDelegate(struct UObject* WorldContextObject, struct FDelegate& OnSubmixSpectralAnalysisBP); // Function Engine.SoundSubmix.RemoveSpectralAnalysisDelegate
	void AddSpectralAnalysisDelegate(struct UObject* WorldContextObject, struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, struct FDelegate& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime); // Function Engine.SoundSubmix.AddSpectralAnalysisDelegate
	void AddEnvelopeFollowerDelegate(struct UObject* WorldContextObject, struct FDelegate& OnSubmixEnvelopeBP); // Function Engine.SoundSubmix.AddEnvelopeFollowerDelegate
}; 



// Class Engine.EndpointSubmix
// Size: 0x50(Inherited: 0x38) 
struct UEndpointSubmix : public USoundSubmixBase
{
	struct FName EndpointType;  // 0x38(0x8)
	UAudioEndpointSettingsBase* EndpointSettingsClass;  // 0x40(0x8)
	struct UAudioEndpointSettingsBase* EndpointSettings;  // 0x48(0x8)

}; 



// Class Engine.SpectatorPawnMovement
// Size: 0x158(Inherited: 0x150) 
struct USpectatorPawnMovement : public UFloatingPawnMovement
{
	char bIgnoreTimeDilation : 1;  // 0x150(0x1)
	char pad_336_1 : 7;  // 0x150(0x1)
	char pad_337[8];  // 0x151(0x8)

}; 



// Class Engine.StereoLayerShapeCylinder
// Size: 0x38(Inherited: 0x28) 
struct UStereoLayerShapeCylinder : public UStereoLayerShape
{
	float Radius;  // 0x28(0x4)
	float OverlayArc;  // 0x2C(0x4)
	int32_t Height;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

	void SetRadius(float InRadius); // Function Engine.StereoLayerShapeCylinder.SetRadius
	void SetOverlayArc(float InOverlayArc); // Function Engine.StereoLayerShapeCylinder.SetOverlayArc
	void SetHeight(int32_t InHeight); // Function Engine.StereoLayerShapeCylinder.SetHeight
}; 



// Class Engine.StereoLayerShapeEquirect
// Size: 0x70(Inherited: 0x28) 
struct UStereoLayerShapeEquirect : public UStereoLayerShape
{
	struct FBox2D LeftUVRect;  // 0x28(0x14)
	struct FBox2D RightUVRect;  // 0x3C(0x14)
	struct FVector2D LeftScale;  // 0x50(0x8)
	struct FVector2D RightScale;  // 0x58(0x8)
	struct FVector2D LeftBias;  // 0x60(0x8)
	struct FVector2D RightBias;  // 0x68(0x8)

	void SetEquirectProps(struct FEquirectProps InScaleBiases); // Function Engine.StereoLayerShapeEquirect.SetEquirectProps
}; 



// Class Engine.StringTable
// Size: 0x40(Inherited: 0x28) 
struct UStringTable : public UObject
{
	char pad_40[24];  // 0x28(0x18)

}; 



// Class Engine.SubsurfaceProfile
// Size: 0xB8(Inherited: 0x28) 
struct USubsurfaceProfile : public UObject
{
	struct FSubsurfaceProfileStruct Settings;  // 0x28(0x8C)
	char pad_180[4];  // 0xB4(0x4)

}; 



// Class Engine.SubUVAnimation
// Size: 0x68(Inherited: 0x28) 
struct USubUVAnimation : public UObject
{
	struct UTexture2D* SubUVTexture;  // 0x28(0x8)
	int32_t SubImages_Horizontal;  // 0x30(0x4)
	int32_t SubImages_Vertical;  // 0x34(0x4)
	char ESubUVBoundingVertexCount BoundingMode;  // 0x38(0x1)
	char EOpacitySourceMode OpacitySourceMode;  // 0x39(0x1)
	char pad_58[2];  // 0x3A(0x2)
	float AlphaThreshold;  // 0x3C(0x4)
	char pad_64[40];  // 0x40(0x28)

}; 



// Class Engine.TextPropertyTestObject
// Size: 0x70(Inherited: 0x28) 
struct UTextPropertyTestObject : public UObject
{
	struct FText DefaultedText;  // 0x28(0x18)
	struct FText UndefaultedText;  // 0x40(0x18)
	struct FText TransientText;  // 0x58(0x18)

}; 



// Class Engine.Texture2DArray
// Size: 0x1E0(Inherited: 0x180) 
struct UTexture2DArray : public UTexture
{
	char pad_384[80];  // 0x180(0x50)
	char TextureAddress AddressX;  // 0x1D0(0x1)
	char TextureAddress AddressY;  // 0x1D1(0x1)
	char TextureAddress AddressZ;  // 0x1D2(0x1)
	char pad_467[13];  // 0x1D3(0xD)

}; 



// Class Engine.Texture2DDynamic
// Size: 0x190(Inherited: 0x180) 
struct UTexture2DDynamic : public UTexture
{
	char EPixelFormat Format;  // 0x180(0x1)
	char pad_385[15];  // 0x181(0xF)

}; 



// Class Engine.TextureLightProfile
// Size: 0x1B0(Inherited: 0x1A0) 
struct UTextureLightProfile : public UTexture2D
{
	float Brightness;  // 0x1A0(0x4)
	float TextureMultiplier;  // 0x1A4(0x4)
	char pad_424[8];  // 0x1A8(0x8)

}; 



// Class Engine.TouchInterface
// Size: 0x58(Inherited: 0x28) 
struct UTouchInterface : public UObject
{
	struct TArray<struct FTouchInputControl> Controls;  // 0x28(0x10)
	float ActiveOpacity;  // 0x38(0x4)
	float InactiveOpacity;  // 0x3C(0x4)
	float TimeUntilDeactive;  // 0x40(0x4)
	float TimeUntilReset;  // 0x44(0x4)
	float ActivationDelay;  // 0x48(0x4)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool bPreventRecenter : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	float StartupDelay;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)

}; 



// Class Engine.TriggerSphere
// Size: 0x228(Inherited: 0x228) 
struct ATriggerSphere : public ATriggerBase
{

}; 



// Class Engine.TriggerVolume
// Size: 0x258(Inherited: 0x258) 
struct ATriggerVolume : public AVolume
{

}; 



// Class Engine.UserDefinedEnum
// Size: 0xB0(Inherited: 0x60) 
struct UUserDefinedEnum : public UEnum
{
	struct TMap<struct FName, struct FText> DisplayNameMap;  // 0x60(0x50)

}; 



// Class Engine.UserInterfaceSettings
// Size: 0x270(Inherited: 0x38) 
struct UUserInterfaceSettings : public UDeveloperSettings
{
	uint8_t  RenderFocusRule;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)
	struct TMap<char EMouseCursor, struct FHardwareCursorReference> HardwareCursors;  // 0x40(0x50)
	struct TMap<char EMouseCursor, struct FSoftClassPath> SoftwareCursors;  // 0x90(0x50)
	struct FSoftClassPath DefaultCursor;  // 0xE0(0x18)
	struct FSoftClassPath TextEditBeamCursor;  // 0xF8(0x18)
	struct FSoftClassPath CrosshairsCursor;  // 0x110(0x18)
	struct FSoftClassPath HandCursor;  // 0x128(0x18)
	struct FSoftClassPath GrabHandCursor;  // 0x140(0x18)
	struct FSoftClassPath GrabHandClosedCursor;  // 0x158(0x18)
	struct FSoftClassPath SlashedCircleCursor;  // 0x170(0x18)
	float ApplicationScale;  // 0x188(0x4)
	uint8_t  UIScaleRule;  // 0x18C(0x1)
	char pad_397[3];  // 0x18D(0x3)
	struct FSoftClassPath CustomScalingRuleClass;  // 0x190(0x18)
	struct FRuntimeFloatCurve UIScaleCurve;  // 0x1A8(0x88)
	char pad_560_1 : 7;  // 0x230(0x1)
	bool bAllowHighDPIInGameMode : 1;  // 0x230(0x1)
	char pad_561[3];  // 0x231(0x3)
	struct FIntPoint DesignScreenSize;  // 0x234(0x8)
	char pad_572_1 : 7;  // 0x23C(0x1)
	bool bLoadWidgetsOnDedicatedServer : 1;  // 0x23C(0x1)
	char pad_573[3];  // 0x23D(0x3)
	struct TArray<struct UObject*> CursorClasses;  // 0x240(0x10)
	UObject* CustomScalingRuleClassInstance;  // 0x250(0x8)
	struct UDPICustomScalingRule* CustomScalingRule;  // 0x258(0x8)
	char pad_608[16];  // 0x260(0x10)

}; 



// Class Engine.VectorFieldAnimated
// Size: 0x88(Inherited: 0x48) 
struct UVectorFieldAnimated : public UVectorField
{
	struct UTexture2D* Texture;  // 0x48(0x8)
	char EVectorFieldConstructionOp ConstructionOp;  // 0x50(0x1)
	char pad_81[3];  // 0x51(0x3)
	int32_t VolumeSizeX;  // 0x54(0x4)
	int32_t VolumeSizeY;  // 0x58(0x4)
	int32_t VolumeSizeZ;  // 0x5C(0x4)
	int32_t SubImagesX;  // 0x60(0x4)
	int32_t SubImagesY;  // 0x64(0x4)
	int32_t FrameCount;  // 0x68(0x4)
	float FramesPerSecond;  // 0x6C(0x4)
	char bLoop : 1;  // 0x70(0x1)
	char pad_112_1 : 7;  // 0x70(0x1)
	char pad_113[8];  // 0x71(0x8)
	struct UVectorFieldStatic* NoiseField;  // 0x78(0x8)
	float NoiseScale;  // 0x80(0x4)
	float NoiseMax;  // 0x84(0x4)

}; 



// Class Engine.RuntimeVirtualTextureStreamingProxy
// Size: 0x1A0(Inherited: 0x1A0) 
struct URuntimeVirtualTextureStreamingProxy : public UTexture2D
{

}; 



// Class Engine.VirtualTexture2D
// Size: 0x1B0(Inherited: 0x1A0) 
struct UVirtualTexture2D : public UTexture2D
{
	struct FVirtualTextureBuildSettings Settings;  // 0x1A0(0xC)
	char pad_428_1 : 7;  // 0x1AC(0x1)
	bool bContinuousUpdate : 1;  // 0x1AC(0x1)
	char pad_429_1 : 7;  // 0x1AD(0x1)
	bool bSinglePhysicalSpace : 1;  // 0x1AD(0x1)
	char pad_430[2];  // 0x1AE(0x2)

}; 



// Class Engine.VirtualTextureBuilder
// Size: 0x38(Inherited: 0x28) 
struct UVirtualTextureBuilder : public UObject
{
	struct UVirtualTexture2D* Texture;  // 0x28(0x8)
	uint64_t BuildHash;  // 0x30(0x8)

}; 



// Class Engine.VOIPStatics
// Size: 0x28(Inherited: 0x28) 
struct UVOIPStatics : public UBlueprintFunctionLibrary
{

	void SetMicThreshold(float InThreshold); // Function Engine.VOIPStatics.SetMicThreshold
}; 



// Class Engine.VolumetricLightmapDensityVolume
// Size: 0x260(Inherited: 0x258) 
struct AVolumetricLightmapDensityVolume : public AVolume
{
	struct FInt32Interval AllowedMipLevelRange;  // 0x258(0x8)

}; 



// Class Engine.WorldComposition
// Size: 0x68(Inherited: 0x28) 
struct UWorldComposition : public UObject
{
	char pad_40[32];  // 0x28(0x20)
	struct TArray<struct ULevelStreaming*> TilesStreaming;  // 0x48(0x10)
	double TilesStreamingTimeThreshold;  // 0x58(0x8)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bLoadAllTilesDuringCinematic : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bRebaseOriginIn3DSpace : 1;  // 0x61(0x1)
	char pad_98[2];  // 0x62(0x2)
	float RebaseOriginDistance;  // 0x64(0x4)

}; 



