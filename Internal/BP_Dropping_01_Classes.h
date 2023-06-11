#pragma once 
#include <BP_Dropping_01_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Dropping_01.BP_Dropping_01_C
// Size: 0x2AC(Inherited: 0x220) 
struct ABP_Dropping_01_C : public AActor
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x220(0x8)
	struct UPhysicsConstraintComponent* MyConstraintComp1;  // 0x228(0x8)
	struct UPhysicsConstraintComponent* MyConstraintComp;  // 0x230(0x8)
	struct UStaticMeshComponent* Shit_03;  // 0x238(0x8)
	struct UStaticMeshComponent* Shit_02;  // 0x240(0x8)
	struct UStaticMeshComponent* Shit_01;  // 0x248(0x8)
	struct USceneComponent* SharedRoot;  // 0x250(0x8)
	struct FVector OffsetTimeline_Offset_509AAF33465941489534FEBEC2819093;  // 0x258(0xC)
	char ETimelineDirection OffsetTimeline__Direction_509AAF33465941489534FEBEC2819093;  // 0x264(0x1)
	char pad_613[3];  // 0x265(0x3)
	struct UTimelineComponent* OffsetTimeline;  // 0x268(0x8)
	struct FVector Shit_01_Relative_Location;  // 0x270(0xC)
	char pad_636_1 : 7;  // 0x27C(0x1)
	bool HasSpawnedEffects : 1;  // 0x27C(0x1)
	char pad_637[3];  // 0x27D(0x3)
	struct FVector DecalSize;  // 0x280(0xC)
	char pad_652[4];  // 0x28C(0x4)
	struct UParticleSystem* ParticlesToSpawn;  // 0x290(0x8)
	struct UMaterialInterface* DecalToSpawn;  // 0x298(0x8)
	struct USoundBase* SoundToSpawn;  // 0x2A0(0x8)
	float LifeTime;  // 0x2A8(0x4)

	void OffsetTimeline__FinishedFunc(); // Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc
	void OffsetTimeline__UpdateFunc(); // Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay
	void BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void AutoDestroy(); // Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy
	void ExecuteUbergraph_BP_Dropping_01(int32_t EntryPoint); // Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01
}; 



