namespace offsets
{
	namespace UNiagaraComponent
	{
			constexpr auto Asset = 0x450; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto TickBehavior = 0x458; // Size: 1, Type: uint8_t 
			constexpr auto RandomSeedOffset = 0x45c; // Size: 4, Type: int32_t
			constexpr auto OverrideParameters = 0x460; // Size: 200, Type: struct FNiagaraUserRedirectionParameterStore
			constexpr auto bForceSolo = 0x528; // Size: 1, Type: char
			constexpr auto bEnableGpuComputeDebug = 0x528; // Size: 1, Type: char
			constexpr auto bAutoDestroy = 0x558; // Size: 1, Type: char
			constexpr auto bRenderingEnabled = 0x558; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x558; // Size: 1, Type: char
			constexpr auto bAutoAttachWeldSimulatedBodies = 0x558; // Size: 1, Type: char
			constexpr auto MaxTimeBeforeForceUpdateTransform = 0x55c; // Size: 4, Type: float
			constexpr auto EmitterMaterials = 0x560; // Size: 16, Type: struct TArray<struct FNiagaraMaterialOverride>
			constexpr auto OnSystemFinished = 0x578; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AutoAttachParent = 0x588; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x590; // Size: 8, Type: struct FName
			constexpr auto AutoAttachLocationRule = 0x598; // Size: 1, Type: uint8_t 
			constexpr auto AutoAttachRotationRule = 0x599; // Size: 1, Type: uint8_t 
			constexpr auto AutoAttachScaleRule = 0x59a; // Size: 1, Type: uint8_t 
	}
} 
