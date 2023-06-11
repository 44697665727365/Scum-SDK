namespace offsets
{
	namespace AMinigame
	{
			constexpr auto _testingMode = 0x250; // Size: 4, Type: int32_t
			constexpr auto _rootComponent = 0x258; // Size: 8, Type: struct USceneComponent*
			constexpr auto _captureCam = 0x260; // Size: 8, Type: struct USceneCaptureComponent2D*
			constexpr auto _captureMaskCam = 0x268; // Size: 8, Type: struct USceneCaptureComponent2D*
			constexpr auto _minigameWidget = 0x278; // Size: 8, Type: struct UMinigameWidget*
			constexpr auto _minigameWidgetClass = 0x280; // Size: 8, Type: UMinigameWidget*
			constexpr auto _introDuration = 0x2b0; // Size: 4, Type: float
			constexpr auto _outroDurationOnFail = 0x2b4; // Size: 4, Type: float
			constexpr auto _outroDurationOnSuccess = 0x2b8; // Size: 4, Type: float
			constexpr auto _canBeCanceled = 0x2bc; // Size: 1, Type: bool
			constexpr auto _simulatedMontage = 0x2bd; // Size: 1, Type: uint8_t 
			constexpr auto _simulatedAudioStart = 0x2c0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _simulatedAudioStop = 0x2c8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _takeInHandsItemTagClasses = 0x2d0; // Size: 16, Type: struct TArray<UBaseItemTag*>
			constexpr auto _currentlyUsedTools = 0x2e8; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<AItem>>
	}
} 
