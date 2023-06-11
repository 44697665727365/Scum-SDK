namespace offsets
{
	namespace UBuriableItemComponent
	{
			constexpr auto _canEverShowMarker = 0xd0; // Size: 1, Type: bool
			constexpr auto _canBeBuried = 0xe0; // Size: 1, Type: bool
			constexpr auto _repBurialInformation = 0xe8; // Size: 24, Type: struct FBurialInformation
			constexpr auto _buriedMesh = 0x108; // Size: 8, Type: struct UStaticMesh*
			constexpr auto _buriedMeshScale = 0x110; // Size: 12, Type: struct FVector
			constexpr auto _buriedMeshRelativeLocation = 0x11c; // Size: 12, Type: struct FVector
			constexpr auto _spriteMarkerBillboard = 0x138; // Size: 8, Type: struct UMaterialBillboardComponent*
			constexpr auto _spriteMarkerData = 0x140; // Size: 40, Type: struct FMaterialSpriteElement
			constexpr auto _spriteMarkerRelativeLocation = 0x168; // Size: 12, Type: struct FVector
			constexpr auto _applyBuryMaterial = 0x174; // Size: 1, Type: bool
			constexpr auto _startMeshFadeDistance = 0x178; // Size: 4, Type: float
			constexpr auto _endMeshFadeDistance = 0x17c; // Size: 4, Type: float
			constexpr auto _skillToIncrease = 0x180; // Size: 8, Type: USkill*
			constexpr auto _skillIncreaseAmount = 0x188; // Size: 4, Type: float
			constexpr auto _skillIncreaseModifier = 0x18c; // Size: 4, Type: float
	}
} 
