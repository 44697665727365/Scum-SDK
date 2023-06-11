namespace offsets
{
	namespace UWeaponActionClearMalfunctionSequence
	{
			constexpr auto SortIndex = 0x28; // Size: 4, Type: int32_t
			constexpr auto MalfunctionType = 0x2c; // Size: 1, Type: uint8_t 
			constexpr auto Description = 0x30; // Size: 24, Type: struct FText
			constexpr auto CircularMenuSegmentInfo = 0x48; // Size: 8, Type: struct UCircularMenuSegmentWeaponMalfunctionInfo*
			constexpr auto Malfunctions = 0x50; // Size: 80, Type: struct TMap<uint8_t , struct FClearMalfunctionData>
			constexpr auto CanBeInterrupted = 0xa0; // Size: 1, Type: bool
			constexpr auto AllowBeginFiringSequence = 0xa1; // Size: 1, Type: bool
	}
} 
