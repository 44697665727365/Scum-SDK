namespace offsets
{
	namespace AControlRigControlActor
	{
			constexpr auto ActorToTrack = 0x220; // Size: 8, Type: struct AActor*
			constexpr auto ControlRigClass = 0x228; // Size: 8, Type: UControlRig*
			constexpr auto bRefreshOnTick = 0x230; // Size: 1, Type: bool
			constexpr auto bIsSelectable = 0x231; // Size: 1, Type: bool
			constexpr auto MaterialOverride = 0x238; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto ColorParameter = 0x240; // Size: 16, Type: struct FString
			constexpr auto bCastShadows = 0x250; // Size: 1, Type: bool
			constexpr auto ActorRootComponent = 0x258; // Size: 8, Type: struct USceneComponent*
			constexpr auto ControlRig = 0x260; // Size: 8, Type: struct UControlRig*
			constexpr auto ControlNames = 0x268; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto GizmoTransforms = 0x278; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto Components = 0x288; // Size: 16, Type: struct TArray<struct UStaticMeshComponent*>
			constexpr auto Materials = 0x298; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto ColorParameterName = 0x2a8; // Size: 8, Type: struct FName
	}
} 
