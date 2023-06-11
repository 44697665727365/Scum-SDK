namespace offsets
{
	namespace APlayerCameraManager
	{
			constexpr auto PCOwner = 0x220; // Size: 8, Type: struct APlayerController*
			constexpr auto TransformComponent = 0x228; // Size: 8, Type: struct USceneComponent*
			constexpr auto DefaultFOV = 0x238; // Size: 4, Type: float
			constexpr auto DefaultOrthoWidth = 0x240; // Size: 4, Type: float
			constexpr auto DefaultAspectRatio = 0x248; // Size: 4, Type: float
			constexpr auto CameraCache = 0x290; // Size: 1536, Type: struct FCameraCacheEntry
			constexpr auto LastFrameCameraCache = 0x890; // Size: 1536, Type: struct FCameraCacheEntry
			constexpr auto ViewTarget = 0xe90; // Size: 1552, Type: struct FTViewTarget
			constexpr auto PendingViewTarget = 0x14a0; // Size: 1552, Type: struct FTViewTarget
			constexpr auto CameraCachePrivate = 0x1ae0; // Size: 1536, Type: struct FCameraCacheEntry
			constexpr auto LastFrameCameraCachePrivate = 0x20e0; // Size: 1536, Type: struct FCameraCacheEntry
			constexpr auto ModifierList = 0x26e0; // Size: 16, Type: struct TArray<struct UCameraModifier*>
			constexpr auto DefaultModifiers = 0x26f0; // Size: 16, Type: struct TArray<UCameraModifier*>
			constexpr auto FreeCamDistance = 0x2700; // Size: 4, Type: float
			constexpr auto FreeCamOffset = 0x2704; // Size: 12, Type: struct FVector
			constexpr auto ViewTargetOffset = 0x2710; // Size: 12, Type: struct FVector
			constexpr auto OnAudioFadeChangeEvent = 0x2720; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CameraLensEffects = 0x2740; // Size: 16, Type: struct TArray<struct AEmitterCameraLensEffectBase*>
			constexpr auto CachedCameraShakeMod = 0x2750; // Size: 8, Type: struct UCameraModifier_CameraShake*
			constexpr auto AnimInstPool[8] = 0x2758; // Size: 64, Type: struct UCameraAnimInst*
			constexpr auto PostProcessBlendCache = 0x2798; // Size: 16, Type: struct TArray<struct FPostProcessSettings>
			constexpr auto ActiveAnims = 0x27b8; // Size: 16, Type: struct TArray<struct UCameraAnimInst*>
			constexpr auto FreeAnims = 0x27c8; // Size: 16, Type: struct TArray<struct UCameraAnimInst*>
			constexpr auto AnimCameraActor = 0x27d8; // Size: 8, Type: struct ACameraActor*
			constexpr auto bIsOrthographic = 0x27e0; // Size: 1, Type: char
			constexpr auto bDefaultConstrainAspectRatio = 0x27e0; // Size: 1, Type: char
			constexpr auto bClientSimulatingViewTarget = 0x27e0; // Size: 1, Type: char
			constexpr auto bUseClientSideCameraUpdates = 0x27e0; // Size: 1, Type: char
			constexpr auto bGameCameraCutThisFrame = 0x27e1; // Size: 1, Type: char
			constexpr auto ViewPitchMin = 0x27e4; // Size: 4, Type: float
			constexpr auto ViewPitchMax = 0x27e8; // Size: 4, Type: float
			constexpr auto ViewYawMin = 0x27ec; // Size: 4, Type: float
			constexpr auto ViewYawMax = 0x27f0; // Size: 4, Type: float
			constexpr auto ViewRollMin = 0x27f4; // Size: 4, Type: float
			constexpr auto ViewRollMax = 0x27f8; // Size: 4, Type: float
			constexpr auto ServerUpdateCameraTimeout = 0x2800; // Size: 4, Type: float
	}
} 
