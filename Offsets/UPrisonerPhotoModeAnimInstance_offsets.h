namespace offsets
{
	namespace UPrisonerPhotoModeAnimInstance
	{
			constexpr auto PoseBlendTime = 0x2b8; // Size: 4, Type: float
			constexpr auto _unarmedPoses = 0x2c0; // Size: 16, Type: struct TArray<struct UAnimSequence*>
			constexpr auto _riflePoses = 0x2d0; // Size: 16, Type: struct TArray<struct UAnimSequence*>
			constexpr auto _handgunPoses = 0x2e0; // Size: 16, Type: struct TArray<struct UAnimSequence*>
			constexpr auto _meleePoses = 0x2f0; // Size: 16, Type: struct TArray<struct UAnimSequence*>
			constexpr auto _lowerBodyPoses = 0x300; // Size: 16, Type: struct TArray<struct UAnimSequence*>
			constexpr auto _facialExpressions = 0x310; // Size: 16, Type: struct TArray<struct UAnimSequence*>
			constexpr auto _poseGroup = 0x320; // Size: 1, Type: uint8_t 
			constexpr auto _spineCurvature = 0x324; // Size: 4, Type: float
			constexpr auto _spineRotation = 0x328; // Size: 4, Type: float
			constexpr auto _upperBodyPoseIndex = 0x32c; // Size: 4, Type: int32_t
			constexpr auto _lowerBodyPoseIndex = 0x330; // Size: 4, Type: int32_t
			constexpr auto _lastUpperBodyPoseIndex = 0x334; // Size: 4, Type: int32_t
			constexpr auto _lastLowerBodyPoseIndex = 0x338; // Size: 4, Type: int32_t
			constexpr auto _facialExpressionIndex = 0x33c; // Size: 4, Type: int32_t
			constexpr auto _lastFacialExpressionIndex = 0x340; // Size: 4, Type: int32_t
			constexpr auto _correctionPose = 0x348; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto _upperBodyPoseBlendAlpha = 0x350; // Size: 4, Type: float
			constexpr auto _lowerBodyPoseBlendAlpha = 0x354; // Size: 4, Type: float
			constexpr auto _facialExpressionBlendAlpha = 0x358; // Size: 4, Type: float
			constexpr auto _isFemale = 0x35c; // Size: 1, Type: bool
	}
} 
