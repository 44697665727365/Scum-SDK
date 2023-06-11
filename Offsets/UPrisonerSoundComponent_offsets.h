namespace offsets
{
	namespace UPrisonerSoundComponent
	{
			constexpr auto MinBreathingRateToPostPeriodicInhaleExhaleAudioEvents = 0xd8; // Size: 4, Type: float
			constexpr auto MaxDistanceToListenerToPostPeriodicInhaleExhaleAudioEvents = 0xdc; // Size: 4, Type: float
			constexpr auto PeriodicInhaleAudioEvent = 0xe0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto PeriodicExhaleAudioEvent = 0xe8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto HoldBreathInhaleAudioEvent = 0xf0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto HoldBreathExhaleAudioEvent = 0xf8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto HoldBreathBreathlessExhaleAudioEvent = 0x100; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto MinHeartRateToPostHeartbeatAudioEvent = 0x108; // Size: 4, Type: float
			constexpr auto HeartbeatAudioEvent = 0x110; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto FootstepsAudioEvent = 0x118; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto FootstepsEnhancerAudioEvent = 0x120; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto MovingThroughFoliageGateDuration = 0x128; // Size: 4, Type: float
			constexpr auto StartGenericMovingThroughFoliageAudioEvent = 0x130; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGenericMovingThroughFoliageAudioEvent = 0x138; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto GenericOneShotMovingThroughFoliageAudioEvent = 0x140; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto GearNoiseAudioEvent = 0x148; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto GearNoiseAudioEventWhenInWater = 0x150; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto ItemMotionNoiseTimeToLive = 0x158; // Size: 4, Type: float
			constexpr auto StartGenericEatItemAudioEvent = 0x160; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGenericEatItemAudioEvent = 0x168; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartGenericDrinkItemAudioEvent = 0x170; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGenericDrinkItemAudioEvent = 0x178; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartGenericDrinkWaterAudioEvent = 0x180; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGenericDrinkWaterAudioEvent = 0x188; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartGenericExamineObjectAudioEvent = 0x190; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGenericExamineObjectAudioEvent = 0x198; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartGenericCraftAudioEvent = 0x1a0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGenericCraftAudioEvent = 0x1a8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartGenericUncraftAudioEvent = 0x1b0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGenericUncraftAudioEvent = 0x1b8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartGenericVehicleRepairAudioEvent = 0x1c0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopGenericVehicleRepairAudioEvent = 0x1c8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartWashClothAudioEvent = 0x1d0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopWashClothAudioEvent = 0x1d8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StartInGameAudioEvent = 0x1e0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto StopInGameAudioEvent = 0x1e8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto CalmStateAudioEvent = 0x1f0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto IntenseStateAudioEvent = 0x1f8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto CombatStateAudioEvent = 0x200; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto OutOfBoundsSound = 0x208; // Size: 8, Type: struct USoundCue*
			constexpr auto ChipExplosionSound = 0x210; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _activeMovingThroughFoliageSounds = 0x260; // Size: 16, Type: struct TArray<struct FActiveMovingThroughFoliageSounds>
			constexpr auto _maxNumberOfFootstepsToPlayFootstepEnhancerSound = 0x28c; // Size: 4, Type: int32_t
			constexpr auto _minNumberOfFootstepsToPlayFootstepEnhancerSound = 0x290; // Size: 4, Type: int32_t
	}
} 
