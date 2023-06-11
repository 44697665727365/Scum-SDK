namespace offsets
{
	namespace USquadMemberPanel
	{
			constexpr auto PlayerName = 0x260; // Size: 8, Type: struct UTextBlock*
			constexpr auto FameText = 0x268; // Size: 8, Type: struct UTextBlock*
			constexpr auto FPText = 0x270; // Size: 8, Type: struct UTextBlock*
			constexpr auto RankIcon = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto HoverButton = 0x280; // Size: 8, Type: struct UButton*
			constexpr auto MakeLeaderButton = 0x288; // Size: 8, Type: struct UButton*
			constexpr auto PromoteButton = 0x290; // Size: 8, Type: struct UButton*
			constexpr auto DemoteButton = 0x298; // Size: 8, Type: struct UButton*
			constexpr auto KickButton = 0x2a0; // Size: 8, Type: struct UButton*
			constexpr auto CommandBox = 0x2a8; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto FamePointBox = 0x2b0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto _memberTextures = 0x2b8; // Size: 80, Type: struct TMap<uint8_t , struct UTexture2D*>
	}
} 
