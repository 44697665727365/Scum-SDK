#pragma once 
#include <RigVM_Structs.h>
 
 
 
// Class RigVM.RigVM
// Size: 0x2F8(Inherited: 0x28) 
struct URigVM : public UObject
{
	struct FRigVMMemoryContainer WorkMemoryStorage;  // 0x28(0xA0)
	char pad_200[8];  // 0xC8(0x8)
	struct FRigVMMemoryContainer LiteralMemoryStorage;  // 0xD0(0xA0)
	char pad_368[8];  // 0x170(0x8)
	struct FRigVMByteCode ByteCodeStorage;  // 0x178(0x30)
	char pad_424[8];  // 0x1A8(0x8)
	struct FRigVMInstructionArray Instructions;  // 0x1B0(0x10)
	struct FRigVMExecuteContext Context;  // 0x1C0(0x58)
	struct TArray<struct FName> FunctionNamesStorage;  // 0x218(0x10)
	char pad_552[32];  // 0x228(0x20)
	struct TArray<struct FRigVMParameter> parameters;  // 0x248(0x10)
	struct TMap<struct FName, int32_t> ParametersNameMap;  // 0x258(0x50)
	char pad_680[72];  // 0x2A8(0x48)
	struct URigVM* DeferredVMToCopy;  // 0x2F0(0x8)

	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector2D
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueTransform
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueString
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueQuat
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueName
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueInt
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueFloat
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueBool
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // Function RigVM.RigVM.GetRigVMFunctionName
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector2D
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueTransform
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueString
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueQuat
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueName
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueInt
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueFloat
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueBool
	int32_t GetParameterArraySize(struct FName& InParameterName); // Function RigVM.RigVM.GetParameterArraySize
	bool Execute(struct FName& InEntryName); // Function RigVM.RigVM.Execute
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName); // Function RigVM.RigVM.AddRigVMFunction
}; 



