namespace offsets
{
	namespace UMovieSceneControlRigParameterSection
	{
			constexpr auto ControlRig = 0x148; // Size: 8, Type: struct UControlRig*
			constexpr auto ControlRigClass = 0x150; // Size: 8, Type: UControlRig*
			constexpr auto ControlsMask = 0x158; // Size: 16, Type: struct TArray<bool>
			constexpr auto TransformMask = 0x168; // Size: 4, Type: struct FMovieSceneTransformMask
			constexpr auto Weight = 0x170; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto ControlChannelMap = 0x210; // Size: 80, Type: struct TMap<struct FName, struct FChannelMapInfo>
			constexpr auto EnumParameterNamesAndCurves = 0x260; // Size: 16, Type: struct TArray<struct FEnumParameterNameAndCurve>
			constexpr auto IntegerParameterNamesAndCurves = 0x270; // Size: 16, Type: struct TArray<struct FIntegerParameterNameAndCurve>
	}
} 
