namespace offsets
{
	namespace ACTFGameEvent
	{
			constexpr auto FlagClass = 0x560; // Size: 8, Type: ACTFFlag*
			constexpr auto CaptureBaseClass = 0x568; // Size: 8, Type: ACTFBase*
			constexpr auto FlagStandClass = 0x570; // Size: 8, Type: ACTFFlagStand*
			constexpr auto FlagIconTexture = 0x578; // Size: 8, Type: struct UTexture2D*
			constexpr auto FlagAccentTexture = 0x580; // Size: 8, Type: struct UTexture2D*
			constexpr auto BaseIconTexture = 0x588; // Size: 8, Type: struct UTexture2D*
			constexpr auto BaseAccentTexture = 0x590; // Size: 8, Type: struct UTexture2D*
			constexpr auto EmptyBaseIconTexture = 0x598; // Size: 8, Type: struct UTexture2D*
			constexpr auto EmptyBaseAccentTexture = 0x5a0; // Size: 8, Type: struct UTexture2D*
			constexpr auto TeamColorA = 0x5a8; // Size: 16, Type: struct FLinearColor
			constexpr auto TeamColorB = 0x5b8; // Size: 16, Type: struct FLinearColor
			constexpr auto BlueTeamPickedUpFlagAnnouncement = 0x5c8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto BlueTeamCapturedFlagAnnouncement = 0x5d0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto BlueTeamFlagDroppedAnnouncement = 0x5d8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto BlueTeamFlagReturnedAnnouncement = 0x5e0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamPickedUpFlagAnnouncement = 0x5e8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamCapturedFlagAnnouncement = 0x5f0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamFlagDroppedAnnouncement = 0x5f8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RedTeamFlagReturnedAnnouncement = 0x600; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _CTFParameters = 0x608; // Size: 48, Type: struct FCTFParameters
			constexpr auto _flagA = 0x638; // Size: 8, Type: struct ACTFFlag*
			constexpr auto _flagB = 0x640; // Size: 8, Type: struct ACTFFlag*
			constexpr auto _baseA = 0x648; // Size: 8, Type: struct ACTFBase*
			constexpr auto _baseB = 0x650; // Size: 8, Type: struct ACTFBase*
	}
} 
