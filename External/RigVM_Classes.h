#pragma once 
#include <RigVM_Structs.h>
 
 
 
class URigVM
{
public:
	URigVM(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigVMMemoryContainer GetWorkMemoryStorage() {
		return memory.read<struct FRigVMMemoryContainer>(m_addr + 40);
	}
	struct FRigVMMemoryContainer GetLiteralMemoryStorage() {
		return memory.read<struct FRigVMMemoryContainer>(m_addr + 208);
	}
	struct FRigVMByteCode GetByteCodeStorage() {
		return memory.read<struct FRigVMByteCode>(m_addr + 376);
	}
	struct FRigVMInstructionArray GetInstructions() {
		return memory.read<struct FRigVMInstructionArray>(m_addr + 432);
	}
	struct FRigVMExecuteContext GetContext() {
		return memory.read<struct FRigVMExecuteContext>(m_addr + 448);
	}
	struct TArray<struct FName> GetFunctionNamesStorage() {
		return memory.read<struct TArray<struct FName>>(m_addr + 536);
	}
	struct TArray<struct FRigVMParameter> Getparameters() {
		return memory.read<struct TArray<struct FRigVMParameter>>(m_addr + 584);
	}
	struct TMap<struct FName, int32_t> GetParametersNameMap() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 600);
	}
	struct URigVM GetDeferredVMToCopy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct URigVM(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


