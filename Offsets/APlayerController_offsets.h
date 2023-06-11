namespace offsets
{
	namespace APlayerController
	{
			constexpr auto Player = 0x298; // Size: 8, Type: struct UPlayer*
			constexpr auto AcknowledgedPawn = 0x2a0; // Size: 8, Type: struct APawn*
			constexpr auto ControllingDirTrackInst = 0x2a8; // Size: 8, Type: struct UInterpTrackInstDirector*
			constexpr auto MyHUD = 0x2b0; // Size: 8, Type: struct AHUD*
			constexpr auto PlayerCameraManager = 0x2b8; // Size: 8, Type: struct APlayerCameraManager*
			constexpr auto PlayerCameraManagerClass = 0x2c0; // Size: 8, Type: APlayerCameraManager*
			constexpr auto bAutoManageActiveCameraTarget = 0x2c8; // Size: 1, Type: bool
			constexpr auto TargetViewRotation = 0x2cc; // Size: 12, Type: struct FRotator
			constexpr auto SmoothTargetViewRotationSpeed = 0x2e4; // Size: 4, Type: float
			constexpr auto HiddenActors = 0x2f0; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto HiddenPrimitiveComponents = 0x300; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<UPrimitiveComponent>>
			constexpr auto LastSpectatorStateSynchTime = 0x314; // Size: 4, Type: float
			constexpr auto LastSpectatorSyncLocation = 0x318; // Size: 12, Type: struct FVector
			constexpr auto LastSpectatorSyncRotation = 0x324; // Size: 12, Type: struct FRotator
			constexpr auto ClientCap = 0x330; // Size: 4, Type: int32_t
			constexpr auto CheatManager = 0x338; // Size: 8, Type: struct UCheatManager*
			constexpr auto CheatClass = 0x340; // Size: 8, Type: UCheatManager*
			constexpr auto PlayerInput = 0x348; // Size: 8, Type: struct UPlayerInput*
			constexpr auto ActiveForceFeedbackEffects = 0x350; // Size: 16, Type: struct TArray<struct FActiveForceFeedbackEffect>
			constexpr auto bPlayerIsWaiting = 0x3d0; // Size: 1, Type: char
			constexpr auto NetPlayerIndex = 0x3d4; // Size: 1, Type: char
			constexpr auto PendingSwapConnection = 0x410; // Size: 8, Type: struct UNetConnection*
			constexpr auto NetConnection = 0x418; // Size: 8, Type: struct UNetConnection*
			constexpr auto InputYawScale = 0x42c; // Size: 4, Type: float
			constexpr auto InputPitchScale = 0x430; // Size: 4, Type: float
			constexpr auto InputRollScale = 0x434; // Size: 4, Type: float
			constexpr auto bShowMouseCursor = 0x438; // Size: 1, Type: char
			constexpr auto bEnableClickEvents = 0x438; // Size: 1, Type: char
			constexpr auto bEnableTouchEvents = 0x438; // Size: 1, Type: char
			constexpr auto bEnableMouseOverEvents = 0x438; // Size: 1, Type: char
			constexpr auto bEnableTouchOverEvents = 0x438; // Size: 1, Type: char
			constexpr auto bForceFeedbackEnabled = 0x438; // Size: 1, Type: char
			constexpr auto ForceFeedbackScale = 0x43c; // Size: 4, Type: float
			constexpr auto ClickEventKeys = 0x440; // Size: 16, Type: struct TArray<struct FKey>
			constexpr auto DefaultMouseCursor = 0x450; // Size: 1, Type: char EMouseCursor
			constexpr auto CurrentMouseCursor = 0x451; // Size: 1, Type: char EMouseCursor
			constexpr auto DefaultClickTraceChannel = 0x452; // Size: 1, Type: char ECollisionChannel
			constexpr auto CurrentClickTraceChannel = 0x453; // Size: 1, Type: char ECollisionChannel
			constexpr auto HitResultTraceDistance = 0x454; // Size: 4, Type: float
			constexpr auto SeamlessTravelCount = 0x458; // Size: 2, Type: uint16_t
			constexpr auto LastCompletedSeamlessTravelCount = 0x45a; // Size: 2, Type: uint16_t
			constexpr auto InactiveStateInputComponent = 0x4d0; // Size: 8, Type: struct UInputComponent*
			constexpr auto bShouldPerformFullTickWhenPaused = 0x4d8; // Size: 1, Type: char
			constexpr auto CurrentTouchInterface = 0x4f0; // Size: 8, Type: struct UTouchInterface*
			constexpr auto SpectatorPawn = 0x548; // Size: 8, Type: struct ASpectatorPawn*
			constexpr auto bIsLocalPlayerController = 0x554; // Size: 1, Type: bool
			constexpr auto SpawnLocation = 0x558; // Size: 12, Type: struct FVector
	}
} 
