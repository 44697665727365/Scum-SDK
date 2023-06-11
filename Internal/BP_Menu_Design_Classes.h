#pragma once 
#include <BP_Menu_Design_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Menu_Design.BP_Menu_Design_C
// Size: 0x3E9(Inherited: 0x328) 
struct ABP_Menu_Design_C : public ABuilding
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x328(0x8)
	struct UParticleSystemComponent* Sparks3;  // 0x330(0x8)
	struct UParticleSystemComponent* Sparks2;  // 0x338(0x8)
	struct UParticleSystemComponent* Sparks1;  // 0x340(0x8)
	struct UParticleSystemComponent* Smoke4;  // 0x348(0x8)
	struct UParticleSystemComponent* Smoke3;  // 0x350(0x8)
	struct UParticleSystemComponent* Smoke2;  // 0x358(0x8)
	struct UParticleSystemComponent* Smoke1;  // 0x360(0x8)
	struct UStaticMeshComponent* StaticMesh1;  // 0x368(0x8)
	struct UStaticMeshComponent* StaticMesh;  // 0x370(0x8)
	struct UStaticMeshComponent* SM_Monitor_LP_01;  // 0x378(0x8)
	struct UStaticMeshComponent* SM_Menu_Design_Fan_02;  // 0x380(0x8)
	struct UChildActorComponent* BP_Sliding_Doors_02;  // 0x388(0x8)
	struct UChildActorComponent* BP_Sliding_Doors_012;  // 0x390(0x8)
	struct UChildActorComponent* BP_Sliding_Doors_011;  // 0x398(0x8)
	struct UChildActorComponent* BP_Sliding_Doors_01;  // 0x3A0(0x8)
	struct UStaticMeshComponent* StaticMeshComponent0;  // 0x3A8(0x8)
	struct USceneComponent* SharedRoot;  // 0x3B0(0x8)
	float PrisonerMoveInsideTimeline_NewTrack_0_18E89A024149A17A3D64EEA95389DBF2;  // 0x3B8(0x4)
	char ETimelineDirection PrisonerMoveInsideTimeline__Direction_18E89A024149A17A3D64EEA95389DBF2;  // 0x3BC(0x1)
	char pad_957[3];  // 0x3BD(0x3)
	struct UTimelineComponent* PrisonerMoveInsideTimeline;  // 0x3C0(0x8)
	float YawAngle;  // 0x3C8(0x4)
	float RotationSpeed;  // 0x3CC(0x4)
	struct AActor* PrisonerHolder;  // 0x3D0(0x8)
	struct AActor* PrisonerHolderInitialLocationMarker;  // 0x3D8(0x8)
	struct AActor* PrisonerHolderFinalLocationMarker;  // 0x3E0(0x8)
	char pad_1000_1 : 7;  // 0x3E8(0x1)
	bool _isPrisonerInsideDoor : 1;  // 0x3E8(0x1)

	void PrisonerMoveInsideTimeline__FinishedFunc(); // Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__FinishedFunc
	void PrisonerMoveInsideTimeline__UpdateFunc(); // Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_Menu_Design.BP_Menu_Design_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function BP_Menu_Design.BP_Menu_Design_C.ReceiveTick
	void StartPrisonerEnterSequence(bool backwards); // Function BP_Menu_Design.BP_Menu_Design_C.StartPrisonerEnterSequence
	void BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
	void BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
	void BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
	void BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
	void BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
	void BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
	void BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName EventName, float EmitterTime, int32_t ParticleCount); // Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
	void ExecuteUbergraph_BP_Menu_Design(int32_t EntryPoint); // Function BP_Menu_Design.BP_Menu_Design_C.ExecuteUbergraph_BP_Menu_Design
}; 



