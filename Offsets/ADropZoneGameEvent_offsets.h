namespace offsets
{
	namespace ADropZoneGameEvent
	{
			constexpr auto TableAClass = 0x560; // Size: 8, Type: ADropZoneEquipmentTable*
			constexpr auto TableBClass = 0x568; // Size: 8, Type: ADropZoneEquipmentTable*
			constexpr auto CrateClass = 0x570; // Size: 8, Type: ADropZoneCrate*
			constexpr auto CargoClass = 0x578; // Size: 8, Type: ADropZoneCargo*
			constexpr auto IntroAnnouncement = 0x580; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto LocateTheKeyAnnouncement = 0x588; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto BlueTeamFoundKeyAnnouncement = 0x590; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto BlueTeamUnlockedAnnouncement = 0x598; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto BlueTeamStolenAnnouncement = 0x5a0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamFoundKeyAnnouncement = 0x5a8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamUnlockedAnnouncement = 0x5b0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamStolenAnnouncement = 0x5b8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto CargoDropAnnouncement = 0x5c0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto CargoLandedAnnouncement = 0x5c8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto KeyIcon = 0x5d0; // Size: 8, Type: struct UTexture2D*
			constexpr auto CargoIcon = 0x5d8; // Size: 8, Type: struct UTexture2D*
			constexpr auto FriendlyColor = 0x5e0; // Size: 16, Type: struct FLinearColor
			constexpr auto EnemyColor = 0x5f0; // Size: 16, Type: struct FLinearColor
			constexpr auto _dropZoneParameters = 0x600; // Size: 44, Type: struct FDropZoneParameters
			constexpr auto _phase = 0x638; // Size: 1, Type: uint8_t 
			constexpr auto _capturingTeam = 0x63c; // Size: 4, Type: int32_t
			constexpr auto _phaseTimeLeft = 0x640; // Size: 4, Type: float
			constexpr auto _captureProgress = 0x644; // Size: 4, Type: float
			constexpr auto _barrierA = 0x650; // Size: 8, Type: struct AGameEventBorder*
			constexpr auto _barrierB = 0x658; // Size: 8, Type: struct AGameEventBorder*
			constexpr auto _tableA = 0x660; // Size: 8, Type: struct ADropZoneEquipmentTable*
			constexpr auto _tableB = 0x668; // Size: 8, Type: struct ADropZoneEquipmentTable*
			constexpr auto _crateA = 0x670; // Size: 8, Type: struct ADropZoneCrate*
			constexpr auto _crateB = 0x678; // Size: 8, Type: struct ADropZoneCrate*
			constexpr auto _key = 0x680; // Size: 8, Type: struct ADropZoneKey*
			constexpr auto _keyCarrier = 0x688; // Size: 8, Type: struct APrisoner*
			constexpr auto _topmostKeyOwner = 0x690; // Size: 8, Type: struct AActor*
			constexpr auto _cargo = 0x698; // Size: 8, Type: struct ADropZoneCargo*
			constexpr auto _slot = 0x6a0; // Size: 8, Type: struct ADropZoneSlot*
	}
} 
