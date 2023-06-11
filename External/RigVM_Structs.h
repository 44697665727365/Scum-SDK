#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FRigVMByteCodeEntry
{
public:
	FRigVMByteCodeEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInstructionIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMStruct
{
public:
	FRigVMStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueVector2D
{
public:
	FSetParameterValueVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector2D GetInValue() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMExecuteContext
{
public:
	FRigVMExecuteContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMByteCode
{
public:
	FRigVMByteCode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetByteCode() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}
	int32_t GetNumInstructions() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<struct FRigVMByteCodeEntry> GetEntries() {
		return memory.read<struct TArray<struct FRigVMByteCodeEntry>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueFloat
{
public:
	FSetParameterValueFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetInValue() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMParameter
{
public:
	FRigVMParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 4);
	}
	int32_t GetRegisterIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FString GetCPPType() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct UScriptStruct GetScriptStruct() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UScriptStruct(ptr_addr);
	}
	struct FName GetScriptStructPath() {
		return memory.read<struct FName>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMInstructionArray
{
public:
	FRigVMInstructionArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigVMInstruction> GetInstructions() {
		return memory.read<struct TArray<struct FRigVMInstruction>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueVector
{
public:
	FSetParameterValueVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetInValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueName
{
public:
	FSetParameterValueName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetInValue() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMInstruction
{
public:
	FRigVMInstruction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint64_t GetByteCodeIndex() {
		return memory.read<uint64_t>(m_addr + 0);
	}
	uint8_t  GetOpCode() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	char GetOperandAlignment() {
		return memory.read<char>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueVector2D
{
public:
	FGetParameterValueVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMSlice
{
public:
	FRigVMSlice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMBaseOp
{
public:
	FRigVMBaseOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMUnaryOp
{
public:
	FRigVMUnaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueTransform
{
public:
	FGetParameterValueTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMRegister
{
public:
	FRigVMRegister(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	uint32_t GetByteIndex() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	uint16_t GetElementSize() {
		return memory.read<uint16_t>(m_addr + 8);
	}
	uint16_t GetElementCount() {
		return memory.read<uint16_t>(m_addr + 10);
	}
	uint16_t GetSliceCount() {
		return memory.read<uint16_t>(m_addr + 12);
	}
	char GetAlignmentBytes() {
		return memory.read<char>(m_addr + 14);
	}
	uint16_t GetTrailingBytes() {
		return memory.read<uint16_t>(m_addr + 16);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 20);
	}
	int32_t GetScriptStructIndex() {
		return memory.read<int32_t>(m_addr + 28);
	}
	bool GetbIsArray() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetbIsDynamic() {
		return memory.read<bool>(m_addr + 33);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMChangeTypeOp
{
public:
	FRigVMChangeTypeOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMJumpIfOp
{
public:
	FRigVMJumpIfOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMJumpOp
{
public:
	FRigVMJumpOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMComparisonOp
{
public:
	FRigVMComparisonOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMCopyOp
{
public:
	FRigVMCopyOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMBinaryOp
{
public:
	FRigVMBinaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigVMExecuteOp
{
public:
	FRigVMExecuteOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetParameterArraySize
{
public:
	FGetParameterArraySize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMMemoryContainer
{
public:
	FRigVMMemoryContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseNameMap() {
		return memory.read<bool>(m_addr + 0);
	}
	uint8_t  GetMemoryType() {
		return memory.read<uint8_t >(m_addr + 1);
	}
	struct TArray<struct FRigVMRegister> GetRegisters() {
		return memory.read<struct TArray<struct FRigVMRegister>>(m_addr + 8);
	}
	struct TArray<struct FRigVMRegisterOffset> GetRegisterOffsets() {
		return memory.read<struct TArray<struct FRigVMRegisterOffset>>(m_addr + 24);
	}
	struct TArray<char> GetData() {
		return memory.read<struct TArray<char>>(m_addr + 40);
	}
	struct TArray<struct UScriptStruct> GetScriptStructs() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TArray<struct UScriptStruct>(ptr_addr);
	}
	struct TMap<struct FName, int32_t> GetNameMap() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 72);
	}
	bool GetbEncounteredErrorDuringLoad() {
		return memory.read<bool>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMRegisterOffset
{
public:
	FRigVMRegisterOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetSegments() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}
	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FName GetCPPType() {
		return memory.read<struct FName>(m_addr + 20);
	}
	struct UScriptStruct GetScriptStruct() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UScriptStruct(ptr_addr);
	}
	struct UScriptStruct GetParentScriptStruct() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UScriptStruct(ptr_addr);
	}
	int32_t GetArrayIndex() {
		return memory.read<int32_t>(m_addr + 48);
	}
	uint16_t GetElementSize() {
		return memory.read<uint16_t>(m_addr + 52);
	}
	struct FString GetCachedSegmentPath() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMOperand
{
public:
	FRigVMOperand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetMemoryType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	uint16_t GetRegisterIndex() {
		return memory.read<uint16_t>(m_addr + 2);
	}
	uint16_t GetRegisterOffset() {
		return memory.read<uint16_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMStatistics
{
public:
	FRigVMStatistics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetBytesForCDO() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetBytesPerInstance() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	struct FRigVMMemoryStatistics GetLiteralMemory() {
		return memory.read<struct FRigVMMemoryStatistics>(m_addr + 8);
	}
	struct FRigVMMemoryStatistics GetWorkMemory() {
		return memory.read<struct FRigVMMemoryStatistics>(m_addr + 20);
	}
	uint32_t GetBytesForCaching() {
		return memory.read<uint32_t>(m_addr + 32);
	}
	struct FRigVMByteCodeStatistics GetByteCode() {
		return memory.read<struct FRigVMByteCodeStatistics>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMByteCodeStatistics
{
public:
	FRigVMByteCodeStatistics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetInstructionCount() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetDataBytes() {
		return memory.read<uint32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigVMMemoryStatistics
{
public:
	FRigVMMemoryStatistics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetRegisterCount() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	uint32_t GetDataBytes() {
		return memory.read<uint32_t>(m_addr + 4);
	}
	uint32_t GetTotalBytes() {
		return memory.read<uint32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueBool
{
public:
	FGetParameterValueBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddRigVMFunction
{
public:
	FAddRigVMFunction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UScriptStruct GetInRigVMStruct() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UScriptStruct(ptr_addr);
	}
	struct FName GetInMethodName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecute
{
public:
	FExecute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInEntryName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueFloat
{
public:
	FGetParameterValueFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueInt
{
public:
	FGetParameterValueInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueName
{
public:
	FGetParameterValueName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueQuat
{
public:
	FGetParameterValueQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FQuat GetReturnValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueString
{
public:
	FGetParameterValueString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValueVector
{
public:
	FGetParameterValueVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRigVMFunctionName
{
public:
	FGetRigVMFunctionName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInFunctionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueBool
{
public:
	FSetParameterValueBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetInValue() {
		return memory.read<bool>(m_addr + 8);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueQuat
{
public:
	FSetParameterValueQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FQuat GetInValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueInt
{
public:
	FSetParameterValueInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetInValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueString
{
public:
	FSetParameterValueString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetInValue() {
		return memory.read<struct FString>(m_addr + 8);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameterValueTransform
{
public:
	FSetParameterValueTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTransform GetInValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	int32_t GetInArrayIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};