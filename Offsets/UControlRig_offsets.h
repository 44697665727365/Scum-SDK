namespace offsets
{
	namespace UControlRig
	{
			constexpr auto ExecutionType = 0x45; // Size: 1, Type: uint8_t 
			constexpr auto VM = 0x48; // Size: 8, Type: struct URigVM*
			constexpr auto Hierarchy = 0x50; // Size: 872, Type: struct FRigHierarchyContainer
			constexpr auto GizmoLibrary = 0x3b8; // Size: 40, Type: struct TSoftObjectPtr<UControlRigGizmoLibrary>
			constexpr auto InputProperties = 0x3f0; // Size: 80, Type: struct TMap<struct FName, struct FCachedPropertyPath>
			constexpr auto OutputProperties = 0x440; // Size: 80, Type: struct TMap<struct FName, struct FCachedPropertyPath>
			constexpr auto DrawContainer = 0x490; // Size: 24, Type: struct FControlRigDrawContainer
			constexpr auto DataSourceRegistry = 0x4c0; // Size: 8, Type: struct UAnimationDataSourceRegistry*
			constexpr auto EventQueue = 0x4c8; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto Influences = 0x550; // Size: 96, Type: struct FRigInfluenceMapPerEvent
			constexpr auto InteractionRig = 0x5b0; // Size: 8, Type: struct UControlRig*
			constexpr auto InteractionRigClass = 0x5b8; // Size: 8, Type: UControlRig*
			constexpr auto AssetUserData = 0x5c0; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
