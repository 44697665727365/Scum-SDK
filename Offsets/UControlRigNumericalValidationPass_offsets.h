namespace offsets
{
	namespace UControlRigNumericalValidationPass
	{
			constexpr auto bCheckControls = 0x28; // Size: 1, Type: bool
			constexpr auto bCheckBones = 0x29; // Size: 1, Type: bool
			constexpr auto bCheckCurves = 0x2a; // Size: 1, Type: bool
			constexpr auto TranslationPrecision = 0x2c; // Size: 4, Type: float
			constexpr auto RotationPrecision = 0x30; // Size: 4, Type: float
			constexpr auto ScalePrecision = 0x34; // Size: 4, Type: float
			constexpr auto CurvePrecision = 0x38; // Size: 4, Type: float
			constexpr auto EventNameA = 0x3c; // Size: 8, Type: struct FName
			constexpr auto EventNameB = 0x44; // Size: 8, Type: struct FName
			constexpr auto Pose = 0x50; // Size: 16, Type: struct FRigPose
	}
} 
