#pragma once 
#include <CableComponent_Structs.h>
 
 
 
// Class CableComponent.CableActor
// Size: 0x228(Inherited: 0x220) 
struct ACableActor : public AActor
{
	struct UCableComponent* CableComponent;  // 0x220(0x8)

}; 



// Class CableComponent.CableComponent
// Size: 0x510(Inherited: 0x480) 
struct UCableComponent : public UMeshComponent
{
	char pad_1152_1 : 7;  // 0x480(0x1)
	bool bAttachStart : 1;  // 0x478(0x1)
	char pad_1153_1 : 7;  // 0x481(0x1)
	bool bAttachEnd : 1;  // 0x479(0x1)
	struct FComponentReference AttachEndTo;  // 0x480(0x28)
	struct FName AttachEndToSocketName;  // 0x4A8(0x8)
	struct FVector EndLocation;  // 0x4B0(0xC)
	float CableLength;  // 0x4BC(0x4)
	int32_t NumSegments;  // 0x4C0(0x4)
	float SubstepTime;  // 0x4C4(0x4)
	int32_t SolverIterations;  // 0x4C8(0x4)
	char pad_1230_1 : 7;  // 0x4CE(0x1)
	bool bEnableStiffness : 1;  // 0x4CC(0x1)
	char pad_1231_1 : 7;  // 0x4CF(0x1)
	bool bUseSubstepping : 1;  // 0x4CD(0x1)
	char pad_1232_1 : 7;  // 0x4D0(0x1)
	bool bSkipCableUpdateWhenNotVisible : 1;  // 0x4CE(0x1)
	char pad_1233_1 : 7;  // 0x4D1(0x1)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered : 1;  // 0x4CF(0x1)
	char pad_1234_1 : 7;  // 0x4D2(0x1)
	bool bEnableCollision : 1;  // 0x4D0(0x1)
	char pad_1235[1];  // 0x4D3(0x1)
	float CollisionFriction;  // 0x4D4(0x4)
	struct FVector CableForce;  // 0x4D8(0xC)
	float CableGravityScale;  // 0x4E4(0x4)
	float CableWidth;  // 0x4E8(0x4)
	int32_t NumSides;  // 0x4EC(0x4)
	float TileMaterial;  // 0x4F0(0x4)
	char pad_1268[28];  // 0x4F4(0x1C)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor
}; 



