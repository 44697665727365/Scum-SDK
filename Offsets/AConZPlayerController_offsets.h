namespace offsets
{
	namespace AConZPlayerController
	{
			constexpr auto ComponentsToHide = 0x580; // Size: 16, Type: struct TArray<struct UPrimitiveComponent*>
			constexpr auto OnPrisonerSpawned = 0x590; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CurrentInteractionContainerWidget = 0x628; // Size: 8, Type: struct UInteractionContainerUserWidget*
			constexpr auto IsTalkButtonPressed = 0x630; // Size: 1, Type: bool
			constexpr auto _playerRpcChannel = 0x688; // Size: 8, Type: struct UPlayerRpcChannel*
			constexpr auto _userProfile = 0x6d0; // Size: 8, Type: struct UUserProfile*
			constexpr auto _userFakeName = 0x6e8; // Size: 16, Type: struct FString
			constexpr auto _bankAccountNumber = 0x6f8; // Size: 8, Type: int64_t
			constexpr auto _spawnedPawn = 0x700; // Size: 8, Type: struct APawn*
			constexpr auto _possessedPawn = 0x730; // Size: 8, Type: struct APawn*
			constexpr auto _prisonerClass = 0x738; // Size: 8, Type: APrisoner*
			constexpr auto _noiseEmitterComponent = 0x748; // Size: 8, Type: struct UPawnNoiseEmitterComponent*
			constexpr auto _teleportWorldStreamingLocationChangeDelay = 0x760; // Size: 4, Type: float
			constexpr auto _teleportWorldStreamingTriggerLag = 0x764; // Size: 4, Type: float
			constexpr auto _repFamePoints = 0x7d4; // Size: 4, Type: int32_t
			constexpr auto _moneyBalanceRep = 0x7e0; // Size: 8, Type: int64_t
			constexpr auto _goldBalanceRep = 0x7e8; // Size: 8, Type: int64_t
			constexpr auto _weatherHeightUpdatePeriod = 0x880; // Size: 4, Type: float
			constexpr auto _achievementsManagerClient = 0x888; // Size: 8, Type: struct AAchievementsManagerClient*
			constexpr auto _achievementsManagerClientClass = 0x890; // Size: 8, Type: AAchievementsManagerClient*
			constexpr auto _missionManagerClass = 0x898; // Size: 8, Type: AMissionManager*
			constexpr auto _missionManager = 0x8a0; // Size: 8, Type: struct AMissionManager*
			constexpr auto _missionDialogueManagerClass = 0x8a8; // Size: 8, Type: AMissionDialogueManager*
			constexpr auto _isReadyForPlayDelay = 0x8b8; // Size: 4, Type: float
			constexpr auto _reportPlayTimeInterval = 0x8c8; // Size: 4, Type: float
			constexpr auto _replicatedServerUtcNow = 0x8d0; // Size: 8, Type: struct FDateTime
			constexpr auto _pathFollowingComponent = 0x938; // Size: 8, Type: struct UPathFollowingComponent*
			constexpr auto _forceSpawnAsDrone = 0x940; // Size: 1, Type: bool
			constexpr auto _mpSpawnDroneAndPrisoner = 0x941; // Size: 1, Type: bool
			constexpr auto _photoModePawnClass = 0x950; // Size: 8, Type: APhotoModePawn*
			constexpr auto _refreshTimeForPawnLocationOnMap = 0x96c; // Size: 4, Type: float
			constexpr auto _mainMPC = 0x978; // Size: 8, Type: struct UMaterialParameterCollection*
			constexpr auto _numTrySpawnsForTimeout = 0x99c; // Size: 4, Type: int32_t
			constexpr auto _serverHeartbeatSendPeriod = 0x9bc; // Size: 4, Type: float
			constexpr auto _heartbeatTimeout = 0x9c0; // Size: 4, Type: float
	}
} 
