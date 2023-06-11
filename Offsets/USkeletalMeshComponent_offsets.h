namespace offsets
{
	namespace USkeletalMeshComponent
	{
			constexpr auto AnimBlueprintGeneratedClass = 0x6a0; // Size: 8, Type: UObject*
			constexpr auto AnimClass = 0x6a8; // Size: 8, Type: UAnimInstance*
			constexpr auto AnimScriptInstance = 0x6b0; // Size: 8, Type: struct UAnimInstance*
			constexpr auto PostProcessAnimInstance = 0x6b8; // Size: 8, Type: struct UAnimInstance*
			constexpr auto AnimationData = 0x6c0; // Size: 24, Type: struct FSingleAnimationPlayData
			constexpr auto RootBoneTranslation = 0x6e8; // Size: 12, Type: struct FVector
			constexpr auto LineCheckBoundsScale = 0x6f4; // Size: 12, Type: struct FVector
			constexpr auto LinkedInstances = 0x730; // Size: 16, Type: struct TArray<struct UAnimInstance*>
			constexpr auto CachedBoneSpaceTransforms = 0x740; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto CachedComponentSpaceTransforms = 0x750; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto GlobalAnimRateScale = 0x8b0; // Size: 4, Type: float
			constexpr auto KinematicBonesUpdateType = 0x8b4; // Size: 1, Type: char EKinematicBonesUpdateToPhysics
			constexpr auto PhysicsTransformUpdateMode = 0x8b5; // Size: 1, Type: char EPhysicsTransformUpdateMode
			constexpr auto AnimationMode = 0x8b7; // Size: 1, Type: char EAnimationMode
			constexpr auto bDisablePostProcessBlueprint = 0x8b9; // Size: 1, Type: char
			constexpr auto bUpdateOverlapsOnAnimationFinalize = 0x8b9; // Size: 1, Type: char
			constexpr auto bHasValidBodies = 0x8b9; // Size: 1, Type: char
			constexpr auto bBlendPhysics = 0x8b9; // Size: 1, Type: char
			constexpr auto bEnablePhysicsOnDedicatedServer = 0x8b9; // Size: 1, Type: char
			constexpr auto bUpdateJointsFromAnimation = 0x8b9; // Size: 1, Type: char
			constexpr auto bDisableClothSimulation = 0x8ba; // Size: 1, Type: char
			constexpr auto bDisableRigidBodyAnimNode = 0x8c0; // Size: 1, Type: char
			constexpr auto bAllowAnimCurveEvaluation = 0x8c0; // Size: 1, Type: char
			constexpr auto bDisableAnimCurves = 0x8c0; // Size: 1, Type: char
			constexpr auto bCollideWithEnvironment = 0x8c0; // Size: 1, Type: char
			constexpr auto bCollideWithAttachedChildren = 0x8c1; // Size: 1, Type: char
			constexpr auto bLocalSpaceSimulation = 0x8c1; // Size: 1, Type: char
			constexpr auto bResetAfterTeleport = 0x8c1; // Size: 1, Type: char
			constexpr auto bDeferKinematicBoneUpdate = 0x8c1; // Size: 1, Type: char
			constexpr auto bNoSkeletonUpdate = 0x8c1; // Size: 1, Type: char
			constexpr auto bPauseAnims = 0x8c1; // Size: 1, Type: char
			constexpr auto bUseRefPoseOnInitAnim = 0x8c1; // Size: 1, Type: char
			constexpr auto bEnablePerPolyCollision = 0x8c2; // Size: 1, Type: char
			constexpr auto bForceRefpose = 0x8c2; // Size: 1, Type: char
			constexpr auto bOnlyAllowAutonomousTickPose = 0x8c2; // Size: 1, Type: char
			constexpr auto bIsAutonomousTickPose = 0x8c2; // Size: 1, Type: char
			constexpr auto bOldForceRefPose = 0x8c2; // Size: 1, Type: char
			constexpr auto bShowPrePhysBones = 0x8c2; // Size: 1, Type: char
			constexpr auto bRequiredBonesUpToDate = 0x8c2; // Size: 1, Type: char
			constexpr auto bAnimTreeInitialised = 0x8c2; // Size: 1, Type: char
			constexpr auto bIncludeComponentLocationIntoBounds = 0x8c3; // Size: 1, Type: char
			constexpr auto bEnableLineCheckWithBounds = 0x8c3; // Size: 1, Type: char
			constexpr auto bPropagateCurvesToSlaves = 0x8c3; // Size: 1, Type: char
			constexpr auto bSkipKinematicUpdateWhenInterpolating = 0x8c3; // Size: 1, Type: char
			constexpr auto bSkipBoundsUpdateWhenInterpolating = 0x8c3; // Size: 1, Type: char
			constexpr auto bNeedsQueuedAnimEventsDispatched = 0x8c3; // Size: 1, Type: char
			constexpr auto CachedAnimCurveUidVersion = 0x8c6; // Size: 2, Type: uint16_t
			constexpr auto ClothBlendWeight = 0x8c8; // Size: 4, Type: float
			constexpr auto bWaitForParallelClothTask = 0x8cc; // Size: 1, Type: bool
			constexpr auto DisallowedAnimCurves = 0x8d0; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto BodySetup = 0x8e0; // Size: 8, Type: struct UBodySetup*
			constexpr auto OnConstraintBroken = 0x8f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ClothingSimulationFactory = 0x900; // Size: 8, Type: UClothingSimulationFactory*
			constexpr auto TeleportDistanceThreshold = 0x9d8; // Size: 4, Type: float
			constexpr auto TeleportRotationThreshold = 0x9dc; // Size: 4, Type: float
			constexpr auto LastPoseTickFrame = 0x9e8; // Size: 4, Type: uint32_t
			constexpr auto ClothingInteractor = 0xa40; // Size: 8, Type: struct UClothingSimulationInteractor*
			constexpr auto OnAnimInitialized = 0xb10; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
