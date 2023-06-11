namespace offsets
{
	namespace AConZSquad
	{
			constexpr auto squadId = 0x220; // Size: 8, Type: struct FDbIntegerId
			constexpr auto SquadName = 0x228; // Size: 16, Type: struct FString
			constexpr auto SquadMessage = 0x238; // Size: 16, Type: struct FString
			constexpr auto SquadInformation = 0x248; // Size: 16, Type: struct FString
			constexpr auto SquadEmblem = 0x258; // Size: 8, Type: struct FConZSquadEmblem
			constexpr auto _pendingMembers = 0x280; // Size: 16, Type: struct TArray<struct FConZSquadPendingMember>
			constexpr auto _members = 0x290; // Size: 16, Type: struct TArray<struct FConZSquadMember>
			constexpr auto _oldMembers = 0x2a0; // Size: 16, Type: struct TArray<struct FConZSquadMember>
			constexpr auto _repEmblem = 0x2b0; // Size: 8, Type: uint64_t
			constexpr auto _maxAllowedSquadMembers = 0x2b8; // Size: 4, Type: int32_t
	}
} 
