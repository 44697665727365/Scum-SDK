namespace offsets
{
	namespace UVehiclePresetNode
	{
			constexpr auto PossibleAttachmentAssetIds = 0x28; // Size: 16, Type: struct TArray<struct FPrimaryAssetId>
			constexpr auto AttachmentAssetId = 0x38; // Size: 16, Type: struct FPrimaryAssetId
			constexpr auto IsFunctionalityAttachment = 0x48; // Size: 1, Type: bool
			constexpr auto SpawnData = 0x50; // Size: 16, Type: struct TArray<struct FVehicleAttachmentSpawnData>
			constexpr auto Children = 0x60; // Size: 16, Type: struct TArray<struct UVehiclePresetNode*>
	}
} 
