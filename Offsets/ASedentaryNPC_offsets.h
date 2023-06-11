namespace offsets
{
	namespace ASedentaryNPC
	{
			constexpr auto _originalLocation = 0x7a8; // Size: 12, Type: struct FVector
			constexpr auto _tradeOutpostBuilding = 0x7b8; // Size: 8, Type: struct ATradeOutpostBuilding*
			constexpr auto _animationHeadScale = 0x7d8; // Size: 12, Type: struct FVector
			constexpr auto _faceIdleAnimation = 0x7e8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _headYawClampValues = 0x7f0; // Size: 16, Type: struct FFloatRange
			constexpr auto _headPitchClampValues = 0x800; // Size: 16, Type: struct FFloatRange
			constexpr auto _headPitchClampCorrectionValueLower = 0x810; // Size: 4, Type: float
			constexpr auto _headPitchClampCorrectionValueUpper = 0x814; // Size: 4, Type: float
			constexpr auto _headRotationSpeedLerpFactor = 0x818; // Size: 4, Type: float
			constexpr auto _eyesYawAngleRange = 0x81c; // Size: 16, Type: struct FFloatRange
			constexpr auto _eyesPitchAngleRange = 0x82c; // Size: 16, Type: struct FFloatRange
			constexpr auto _eyesPitchClampCorrectionValueLower = 0x83c; // Size: 4, Type: float
			constexpr auto _eyesPitchClampCorrectionValueUpper = 0x840; // Size: 4, Type: float
			constexpr auto _eyesRotationSpeedLerpFactor = 0x844; // Size: 4, Type: float
			constexpr auto _blinkingPeriodRange = 0x848; // Size: 16, Type: struct FFloatRange
			constexpr auto _timeToBlinkInSeconds = 0x858; // Size: 4, Type: float
			constexpr auto _backgroundInteractions = 0x860; // Size: 16, Type: struct TArray<USedentaryNPCBackgroundInteraction*>
			constexpr auto _activeBackgroundInteraction = 0x870; // Size: 8, Type: struct USedentaryNPCBackgroundInteraction*
			constexpr auto _interactionDistance = 0x878; // Size: 4, Type: float
			constexpr auto _timeWithoutFocusPawnToClearBackgroundInteractions = 0x87c; // Size: 4, Type: float
			constexpr auto _backgroundInteractionCooldownTime = 0x8d8; // Size: 4, Type: float
	}
} 
