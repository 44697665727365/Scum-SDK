namespace offsets
{
	namespace UControlRigComponent
	{
			constexpr auto ControlRigClass = 0x450; // Size: 8, Type: UControlRig*
			constexpr auto OnPostInitializeDelegate = 0x458; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPreSetupDelegate = 0x468; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPostSetupDelegate = 0x478; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPreUpdateDelegate = 0x488; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPostUpdateDelegate = 0x498; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MappedElements = 0x4a8; // Size: 16, Type: struct TArray<struct FControlRigComponentMappedElement>
			constexpr auto bResetTransformBeforeTick = 0x4b8; // Size: 1, Type: bool
			constexpr auto bResetInitialsBeforeSetup = 0x4b9; // Size: 1, Type: bool
			constexpr auto bUpdateRigOnTick = 0x4ba; // Size: 1, Type: bool
			constexpr auto bUpdateInEditor = 0x4bb; // Size: 1, Type: bool
			constexpr auto bDrawBones = 0x4bc; // Size: 1, Type: bool
			constexpr auto bShowDebugDrawing = 0x4bd; // Size: 1, Type: bool
			constexpr auto ControlRig = 0x4c0; // Size: 8, Type: struct UControlRig*
	}
} 
