#pragma once 
#include <BP_Prisoner_Structs.h>
 
 
 
class ABP_Prisoner_C
{
public:
	ABP_Prisoner_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetEditorPreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7920);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_Mounted() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7928);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct USpringArmComponent GetVehicleSpringArm() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7936);
		return struct USpringArmComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonAerialSubviewComponent GetTPV_Falling() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7944);
		return struct UPrisonerThirdPersonAerialSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Grappled() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7952);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonVehicleAimingSubviewComponent GetFPV_MountedLeaningStanceAimingDownTheSights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7960);
		return struct UPrisonerFirstPersonVehicleAimingSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonVehicleAimingSubviewComponent GetFPV_MountedDefaultStanceAimingDownTheSights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7968);
		return struct UPrisonerFirstPersonVehicleAimingSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonVehicleAimingSubviewComponent GetFPV_MountedLeaningStanceAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7976);
		return struct UPrisonerFirstPersonVehicleAimingSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonVehicleAimingSubviewComponent GetFPV_MountedDefaultStanceAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7984);
		return struct UPrisonerFirstPersonVehicleAimingSubviewComponent(ptr_addr);
	}
	struct USceneComponent GetFPViewsMouintedAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7992);
		return struct USceneComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Throwing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8000);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_Lying() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8008);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Swimming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8016);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct USphereComponent GetDangerDetectionSphere() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8024);
		return struct USphereComponent(ptr_addr);
	}
	struct UVoiceAudioComponent GetVoiceAudio() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8032);
		return struct UVoiceAudioComponent(ptr_addr);
	}
	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsuleFoot_R() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8040);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}
	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsuleFoot_L() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8048);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}
	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsuleHead() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8056);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}
	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsuleLeg_R() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8064);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}
	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsuleLeg_L() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8072);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}
	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsuleHand_R() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8080);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}
	struct UMeleeAttackCollisionCapsule GetMeleeAttackCollisionCapsuleHand_L() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8088);
		return struct UMeleeAttackCollisionCapsule(ptr_addr);
	}
	struct USphereComponent GetBulletFlyBySoundCollision() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8096);
		return struct USphereComponent(ptr_addr);
	}
	struct UVisionEffectsComponent GetVisionEffectsComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8104);
		return struct UVisionEffectsComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Defecating() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8112);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_ClimbingWindow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8120);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_ClimbingWindow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8128);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Diving() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8136);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct USceneComponent GetTPViews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8144);
		return struct USceneComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_NarrowLadder() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8152);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Ragdoll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8160);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UWidgetComponent GetNameWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8168);
		return struct UWidgetComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_StandingMelee() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8176);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_StandingMelee() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8184);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_ProneAimingDownTheSights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8192);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_CrouchingAimingDownTheSights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8200);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_StandingAimingDownTheSights() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8208);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_ProneAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8216);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_CrouchingAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8224);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_StandingAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8232);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct USceneComponent GetFPViewsAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8240);
		return struct USceneComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_ProneAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8248);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_CrouchingAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8256);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_StandingAiming() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8264);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_Prone() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8272);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_Crouching() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8280);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonSubviewComponent GetFPV_Standing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8288);
		return struct UPrisonerFirstPersonSubviewComponent(ptr_addr);
	}
	struct USceneComponent GetFPViews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8296);
		return struct USceneComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Standing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8304);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Prone() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8312);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonSubviewComponent GetTPV_Crouching() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8320);
		return struct UPrisonerThirdPersonSubviewComponent(ptr_addr);
	}
	struct UPrisonerFirstPersonViewComponent GetFirstPersonView() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8328);
		return struct UPrisonerFirstPersonViewComponent(ptr_addr);
	}
	struct UPrisonerThirdPersonViewComponent GetThirdPersonView() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8336);
		return struct UPrisonerThirdPersonViewComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetBodyToMove() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8344);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


