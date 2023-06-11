namespace offsets
{
	namespace UBuryData
	{
			constexpr auto AllowedBuryMaterials = 0x30; // Size: 80, Type: struct TMap<char EPhysicalSurface, struct FBuryMaterialData>
			constexpr auto StaminaDrain = 0x80; // Size: 4, Type: float
			constexpr auto RecoveredStaminaThreshold = 0x84; // Size: 4, Type: float
	}
} 
