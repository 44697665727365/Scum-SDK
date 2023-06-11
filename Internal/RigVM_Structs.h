#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct RigVM.RigVMByteCodeEntry
// Size: 0xC(Inherited: 0x0) 
struct FRigVMByteCodeEntry
{
	struct FName Name;  // 0x0(0x8)
	int32_t InstructionIndex;  // 0x8(0x4)

}; 
// ScriptStruct RigVM.RigVMStruct
// Size: 0x8(Inherited: 0x0) 
struct FRigVMStruct
{
	char pad_0[8];  // 0x0(0x8)

}; 
// Function RigVM.RigVM.SetParameterValueVector2D
// Size: 0x14(Inherited: 0x0) 
struct FSetParameterValueVector2D
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FVector2D InValue;  // 0x8(0x8)
	int32_t InArrayIndex;  // 0x10(0x4)

}; 
// ScriptStruct RigVM.RigVMExecuteContext
// Size: 0x58(Inherited: 0x0) 
struct FRigVMExecuteContext
{
	char pad_0[88];  // 0x0(0x58)

}; 
// ScriptStruct RigVM.RigVMByteCode
// Size: 0x30(Inherited: 0x0) 
struct FRigVMByteCode
{
	struct TArray<char> ByteCode;  // 0x0(0x10)
	int32_t NumInstructions;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<struct FRigVMByteCodeEntry> Entries;  // 0x18(0x10)
	char pad_40[8];  // 0x28(0x8)

}; 
// Function RigVM.RigVM.SetParameterValueFloat
// Size: 0x10(Inherited: 0x0) 
struct FSetParameterValueFloat
{
	struct FName InParameterName;  // 0x0(0x8)
	float InValue;  // 0x8(0x4)
	int32_t InArrayIndex;  // 0xC(0x4)

}; 
// ScriptStruct RigVM.RigVMParameter
// Size: 0x30(Inherited: 0x0) 
struct FRigVMParameter
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FName Name;  // 0x4(0x8)
	int32_t RegisterIndex;  // 0xC(0x4)
	struct FString CPPType;  // 0x10(0x10)
	struct UScriptStruct* ScriptStruct;  // 0x20(0x8)
	struct FName ScriptStructPath;  // 0x28(0x8)

}; 
// ScriptStruct RigVM.RigVMInstructionArray
// Size: 0x10(Inherited: 0x0) 
struct FRigVMInstructionArray
{
	struct TArray<struct FRigVMInstruction> Instructions;  // 0x0(0x10)

}; 
// Function RigVM.RigVM.SetParameterValueVector
// Size: 0x18(Inherited: 0x0) 
struct FSetParameterValueVector
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FVector InValue;  // 0x8(0xC)
	int32_t InArrayIndex;  // 0x14(0x4)

}; 
// Function RigVM.RigVM.SetParameterValueName
// Size: 0x14(Inherited: 0x0) 
struct FSetParameterValueName
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FName InValue;  // 0x8(0x8)
	int32_t InArrayIndex;  // 0x10(0x4)

}; 
// ScriptStruct RigVM.RigVMInstruction
// Size: 0x10(Inherited: 0x0) 
struct FRigVMInstruction
{
	uint64_t ByteCodeIndex;  // 0x0(0x8)
	uint8_t  OpCode;  // 0x8(0x1)
	char OperandAlignment;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// Function RigVM.RigVM.GetParameterValueVector2D
// Size: 0x14(Inherited: 0x0) 
struct FGetParameterValueVector2D
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	struct FVector2D ReturnValue;  // 0xC(0x8)

}; 
// ScriptStruct RigVM.RigVMSlice
// Size: 0xC(Inherited: 0x0) 
struct FRigVMSlice
{
	char pad_0[12];  // 0x0(0xC)

}; 
// ScriptStruct RigVM.RigVMBaseOp
// Size: 0x1(Inherited: 0x0) 
struct FRigVMBaseOp
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct RigVM.RigVMUnaryOp
// Size: 0x8(Inherited: 0x1) 
struct FRigVMUnaryOp : public FRigVMBaseOp
{
	char pad_1[7];  // 0x1(0x7)

}; 
// Function RigVM.RigVM.GetParameterValueTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetParameterValueTransform
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// ScriptStruct RigVM.RigVMRegister
// Size: 0x24(Inherited: 0x0) 
struct FRigVMRegister
{
	uint8_t  Type;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	uint32_t ByteIndex;  // 0x4(0x4)
	uint16_t ElementSize;  // 0x8(0x2)
	uint16_t ElementCount;  // 0xA(0x2)
	uint16_t SliceCount;  // 0xC(0x2)
	char AlignmentBytes;  // 0xE(0x1)
	char pad_15[1];  // 0xF(0x1)
	uint16_t TrailingBytes;  // 0x10(0x2)
	char pad_18[2];  // 0x12(0x2)
	struct FName Name;  // 0x14(0x8)
	int32_t ScriptStructIndex;  // 0x1C(0x4)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bIsArray : 1;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool bIsDynamic : 1;  // 0x21(0x1)
	char pad_34[2];  // 0x22(0x2)

}; 
// ScriptStruct RigVM.RigVMChangeTypeOp
// Size: 0x10(Inherited: 0x8) 
struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{
	char pad_8[8];  // 0x8(0x8)

}; 
// ScriptStruct RigVM.RigVMJumpIfOp
// Size: 0x10(Inherited: 0x8) 
struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
	char pad_8[8];  // 0x8(0x8)

}; 
// ScriptStruct RigVM.RigVMJumpOp
// Size: 0x8(Inherited: 0x1) 
struct FRigVMJumpOp : public FRigVMBaseOp
{
	char pad_1[7];  // 0x1(0x7)

}; 
// ScriptStruct RigVM.RigVMComparisonOp
// Size: 0x14(Inherited: 0x1) 
struct FRigVMComparisonOp : public FRigVMBaseOp
{
	char pad_1[19];  // 0x1(0x13)

}; 
// ScriptStruct RigVM.RigVMCopyOp
// Size: 0xE(Inherited: 0x1) 
struct FRigVMCopyOp : public FRigVMBaseOp
{
	char pad_1[13];  // 0x1(0xD)

}; 
// ScriptStruct RigVM.RigVMBinaryOp
// Size: 0xE(Inherited: 0x1) 
struct FRigVMBinaryOp : public FRigVMBaseOp
{
	char pad_1[13];  // 0x1(0xD)

}; 
// ScriptStruct RigVM.RigVMExecuteOp
// Size: 0x4(Inherited: 0x1) 
struct FRigVMExecuteOp : public FRigVMBaseOp
{
	char pad_1[3];  // 0x1(0x3)

}; 
// Function RigVM.RigVM.GetParameterArraySize
// Size: 0xC(Inherited: 0x0) 
struct FGetParameterArraySize
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// ScriptStruct RigVM.RigVMMemoryContainer
// Size: 0xA0(Inherited: 0x0) 
struct FRigVMMemoryContainer
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseNameMap : 1;  // 0x0(0x1)
	uint8_t  MemoryType;  // 0x1(0x1)
	char pad_2[6];  // 0x2(0x6)
	struct TArray<struct FRigVMRegister> Registers;  // 0x8(0x10)
	struct TArray<struct FRigVMRegisterOffset> RegisterOffsets;  // 0x18(0x10)
	struct TArray<char> Data;  // 0x28(0x10)
	struct TArray<struct UScriptStruct*> ScriptStructs;  // 0x38(0x10)
	struct TMap<struct FName, int32_t> NameMap;  // 0x48(0x50)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bEncounteredErrorDuringLoad : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)

}; 
// ScriptStruct RigVM.RigVMRegisterOffset
// Size: 0x48(Inherited: 0x0) 
struct FRigVMRegisterOffset
{
	struct TArray<int32_t> Segments;  // 0x0(0x10)
	uint8_t  Type;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FName CPPType;  // 0x14(0x8)
	char pad_28[4];  // 0x1C(0x4)
	struct UScriptStruct* ScriptStruct;  // 0x20(0x8)
	struct UScriptStruct* ParentScriptStruct;  // 0x28(0x8)
	int32_t ArrayIndex;  // 0x30(0x4)
	uint16_t ElementSize;  // 0x34(0x2)
	char pad_54[2];  // 0x36(0x2)
	struct FString CachedSegmentPath;  // 0x38(0x10)

}; 
// ScriptStruct RigVM.RigVMOperand
// Size: 0x6(Inherited: 0x0) 
struct FRigVMOperand
{
	uint8_t  MemoryType;  // 0x0(0x1)
	char pad_1[1];  // 0x1(0x1)
	uint16_t RegisterIndex;  // 0x2(0x2)
	uint16_t RegisterOffset;  // 0x4(0x2)

}; 
// ScriptStruct RigVM.RigVMStatistics
// Size: 0x2C(Inherited: 0x0) 
struct FRigVMStatistics
{
	uint32_t BytesForCDO;  // 0x0(0x4)
	uint32_t BytesPerInstance;  // 0x4(0x4)
	struct FRigVMMemoryStatistics LiteralMemory;  // 0x8(0xC)
	struct FRigVMMemoryStatistics WorkMemory;  // 0x14(0xC)
	uint32_t BytesForCaching;  // 0x20(0x4)
	struct FRigVMByteCodeStatistics ByteCode;  // 0x24(0x8)

}; 
// ScriptStruct RigVM.RigVMByteCodeStatistics
// Size: 0x8(Inherited: 0x0) 
struct FRigVMByteCodeStatistics
{
	uint32_t InstructionCount;  // 0x0(0x4)
	uint32_t DataBytes;  // 0x4(0x4)

}; 
// ScriptStruct RigVM.RigVMMemoryStatistics
// Size: 0xC(Inherited: 0x0) 
struct FRigVMMemoryStatistics
{
	uint32_t RegisterCount;  // 0x0(0x4)
	uint32_t DataBytes;  // 0x4(0x4)
	uint32_t TotalBytes;  // 0x8(0x4)

}; 
// Function RigVM.RigVM.GetParameterValueBool
// Size: 0x10(Inherited: 0x0) 
struct FGetParameterValueBool
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function RigVM.RigVM.AddRigVMFunction
// Size: 0x18(Inherited: 0x0) 
struct FAddRigVMFunction
{
	struct UScriptStruct* InRigVMStruct;  // 0x0(0x8)
	struct FName InMethodName;  // 0x8(0x8)
	int32_t ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function RigVM.RigVM.Execute
// Size: 0xC(Inherited: 0x0) 
struct FExecute
{
	struct FName InEntryName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function RigVM.RigVM.GetParameterValueFloat
// Size: 0x10(Inherited: 0x0) 
struct FGetParameterValueFloat
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function RigVM.RigVM.GetParameterValueInt
// Size: 0x10(Inherited: 0x0) 
struct FGetParameterValueInt
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	int32_t ReturnValue;  // 0xC(0x4)

}; 
// Function RigVM.RigVM.GetParameterValueName
// Size: 0x14(Inherited: 0x0) 
struct FGetParameterValueName
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	struct FName ReturnValue;  // 0xC(0x8)

}; 
// Function RigVM.RigVM.GetParameterValueQuat
// Size: 0x20(Inherited: 0x0) 
struct FGetParameterValueQuat
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FQuat ReturnValue;  // 0x10(0x10)

}; 
// Function RigVM.RigVM.GetParameterValueString
// Size: 0x20(Inherited: 0x0) 
struct FGetParameterValueString
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function RigVM.RigVM.GetParameterValueVector
// Size: 0x18(Inherited: 0x0) 
struct FGetParameterValueVector
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InArrayIndex;  // 0x8(0x4)
	struct FVector ReturnValue;  // 0xC(0xC)

}; 
// Function RigVM.RigVM.GetRigVMFunctionName
// Size: 0x18(Inherited: 0x0) 
struct FGetRigVMFunctionName
{
	int32_t InFunctionIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function RigVM.RigVM.SetParameterValueBool
// Size: 0x10(Inherited: 0x0) 
struct FSetParameterValueBool
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool InValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	int32_t InArrayIndex;  // 0xC(0x4)

}; 
// Function RigVM.RigVM.SetParameterValueQuat
// Size: 0x30(Inherited: 0x0) 
struct FSetParameterValueQuat
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FQuat InValue;  // 0x10(0x10)
	int32_t InArrayIndex;  // 0x20(0x4)
	char pad_36[12];  // 0x24(0xC)

}; 
// Function RigVM.RigVM.SetParameterValueInt
// Size: 0x10(Inherited: 0x0) 
struct FSetParameterValueInt
{
	struct FName InParameterName;  // 0x0(0x8)
	int32_t InValue;  // 0x8(0x4)
	int32_t InArrayIndex;  // 0xC(0x4)

}; 
// Function RigVM.RigVM.SetParameterValueString
// Size: 0x20(Inherited: 0x0) 
struct FSetParameterValueString
{
	struct FName InParameterName;  // 0x0(0x8)
	struct FString InValue;  // 0x8(0x10)
	int32_t InArrayIndex;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function RigVM.RigVM.SetParameterValueTransform
// Size: 0x50(Inherited: 0x0) 
struct FSetParameterValueTransform
{
	struct FName InParameterName;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform InValue;  // 0x10(0x30)
	int32_t InArrayIndex;  // 0x40(0x4)
	char pad_68[12];  // 0x44(0xC)

}; 
