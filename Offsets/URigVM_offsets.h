namespace offsets
{
	namespace URigVM
	{
			constexpr auto WorkMemoryStorage = 0x28; // Size: 160, Type: struct FRigVMMemoryContainer
			constexpr auto LiteralMemoryStorage = 0xd0; // Size: 160, Type: struct FRigVMMemoryContainer
			constexpr auto ByteCodeStorage = 0x178; // Size: 48, Type: struct FRigVMByteCode
			constexpr auto Instructions = 0x1b0; // Size: 16, Type: struct FRigVMInstructionArray
			constexpr auto Context = 0x1c0; // Size: 88, Type: struct FRigVMExecuteContext
			constexpr auto FunctionNamesStorage = 0x218; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto parameters = 0x248; // Size: 16, Type: struct TArray<struct FRigVMParameter>
			constexpr auto ParametersNameMap = 0x258; // Size: 80, Type: struct TMap<struct FName, int32_t>
			constexpr auto DeferredVMToCopy = 0x2f0; // Size: 8, Type: struct URigVM*
	}
} 
