namespace offsets
{
	namespace UWheeledVehicleMovementComponent
	{
			constexpr auto bDeprecatedSpringOffsetMode = 0x140; // Size: 1, Type: char
			constexpr auto bReverseAsBrake = 0x140; // Size: 1, Type: char
			constexpr auto bUseRVOAvoidance = 0x140; // Size: 1, Type: char
			constexpr auto bRawHandbrakeInput = 0x140; // Size: 1, Type: char
			constexpr auto bRawGearUpInput = 0x140; // Size: 1, Type: char
			constexpr auto bRawGearDownInput = 0x140; // Size: 1, Type: char
			constexpr auto bWasAvoidanceUpdated = 0x144; // Size: 1, Type: char
			constexpr auto Mass = 0x148; // Size: 4, Type: float
			constexpr auto WheelSetups = 0x150; // Size: 16, Type: struct TArray<struct FWheelSetup>
			constexpr auto DragCoefficient = 0x160; // Size: 4, Type: float
			constexpr auto ChassisWidth = 0x164; // Size: 4, Type: float
			constexpr auto ChassisHeight = 0x168; // Size: 4, Type: float
			constexpr auto DragArea = 0x16c; // Size: 4, Type: float
			constexpr auto EstimatedMaxEngineSpeed = 0x170; // Size: 4, Type: float
			constexpr auto MaxEngineRPM = 0x174; // Size: 4, Type: float
			constexpr auto DebugDragMagnitude = 0x178; // Size: 4, Type: float
			constexpr auto InertiaTensorScale = 0x17c; // Size: 12, Type: struct FVector
			constexpr auto MinNormalizedTireLoad = 0x188; // Size: 4, Type: float
			constexpr auto MinNormalizedTireLoadFiltered = 0x18c; // Size: 4, Type: float
			constexpr auto MaxNormalizedTireLoad = 0x190; // Size: 4, Type: float
			constexpr auto MaxNormalizedTireLoadFiltered = 0x194; // Size: 4, Type: float
			constexpr auto ThresholdLongitudinalSpeed = 0x198; // Size: 4, Type: float
			constexpr auto LowForwardSpeedSubStepCount = 0x19c; // Size: 4, Type: int32_t
			constexpr auto HighForwardSpeedSubStepCount = 0x1a0; // Size: 4, Type: int32_t
			constexpr auto Wheels = 0x1a8; // Size: 16, Type: struct TArray<struct UVehicleWheel*>
			constexpr auto RVOAvoidanceRadius = 0x1d0; // Size: 4, Type: float
			constexpr auto RVOAvoidanceHeight = 0x1d4; // Size: 4, Type: float
			constexpr auto AvoidanceConsiderationRadius = 0x1d8; // Size: 4, Type: float
			constexpr auto RVOSteeringStep = 0x1dc; // Size: 4, Type: float
			constexpr auto RVOThrottleStep = 0x1e0; // Size: 4, Type: float
			constexpr auto AvoidanceUID = 0x1e4; // Size: 4, Type: int32_t
			constexpr auto AvoidanceGroup = 0x1e8; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto GroupsToAvoid = 0x1ec; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto GroupsToIgnore = 0x1f0; // Size: 4, Type: struct FNavAvoidanceMask
			constexpr auto AvoidanceWeight = 0x1f4; // Size: 4, Type: float
			constexpr auto PendingLaunchVelocity = 0x1f8; // Size: 12, Type: struct FVector
			constexpr auto ReplicatedState = 0x204; // Size: 20, Type: struct FReplicatedVehicleState
			constexpr auto RawSteeringInput = 0x21c; // Size: 4, Type: float
			constexpr auto RawThrottleInput = 0x220; // Size: 4, Type: float
			constexpr auto RawBrakeInput = 0x224; // Size: 4, Type: float
			constexpr auto SteeringInput = 0x228; // Size: 4, Type: float
			constexpr auto ThrottleInput = 0x22c; // Size: 4, Type: float
			constexpr auto BrakeInput = 0x230; // Size: 4, Type: float
			constexpr auto HandbrakeInput = 0x234; // Size: 4, Type: float
			constexpr auto IdleBrakeInput = 0x238; // Size: 4, Type: float
			constexpr auto StopThreshold = 0x23c; // Size: 4, Type: float
			constexpr auto WrongDirectionThreshold = 0x240; // Size: 4, Type: float
			constexpr auto ThrottleInputRate = 0x244; // Size: 8, Type: struct FVehicleInputRate
			constexpr auto BrakeInputRate = 0x24c; // Size: 8, Type: struct FVehicleInputRate
			constexpr auto HandbrakeInputRate = 0x254; // Size: 8, Type: struct FVehicleInputRate
			constexpr auto SteeringInputRate = 0x25c; // Size: 8, Type: struct FVehicleInputRate
			constexpr auto OverrideController = 0x288; // Size: 8, Type: struct AController*
	}
} 
