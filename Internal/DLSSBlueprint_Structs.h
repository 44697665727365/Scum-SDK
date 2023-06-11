#pragma once 
#include "SDK.h" 
 
 
// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// Size: 0x24(Inherited: 0x0) 
struct FGetDLSSModeInformation
{
	uint8_t  DLSSMode;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FVector2D ScreenResolution;  // 0x4(0x8)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bIsSupported : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	float OptimalScreenPercentage;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bIsFixedScreenPercentage : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float MinScreenPercentage;  // 0x18(0x4)
	float MaxScreenPercentage;  // 0x1C(0x4)
	float OptimalSharpness;  // 0x20(0x4)

}; 
// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
// Size: 0x1(Inherited: 0x0) 
struct FEnableDLAA
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)

}; 
// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// Size: 0x1(Inherited: 0x0) 
struct FGetDefaultDLSSMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
// Size: 0x10(Inherited: 0x0) 
struct FGetSupportedDLSSModes
{
	struct TArray<uint8_t > ReturnValue;  // 0x0(0x10)

}; 
// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
// Size: 0x8(Inherited: 0x0) 
struct FGetDLSSMinimumDriverVersion
{
	int32_t MinDriverVersionMajor;  // 0x0(0x4)
	int32_t MinDriverVersionMinor;  // 0x4(0x4)

}; 
// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// Size: 0x1(Inherited: 0x0) 
struct FGetDLSSMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
// Size: 0x8(Inherited: 0x0) 
struct FGetDLSSScreenPercentageRange
{
	float MinScreenPercentage;  // 0x0(0x4)
	float MaxScreenPercentage;  // 0x4(0x4)

}; 
// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
// Size: 0x4(Inherited: 0x0) 
struct FGetDLSSSharpness
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsDLAAEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
// Size: 0x2(Inherited: 0x0) 
struct FIsDLSSModeSupported
{
	uint8_t  DLSSMode;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
// Size: 0x1(Inherited: 0x0) 
struct FIsDLSSSupported
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
// Size: 0x4(Inherited: 0x0) 
struct FSetDLSSSharpness
{
	float Sharpness;  // 0x0(0x4)

}; 
// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// Size: 0x1(Inherited: 0x0) 
struct FQueryDLSSSupport
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
// Size: 0x1(Inherited: 0x0) 
struct FSetDLSSMode
{
	uint8_t  DLSSMode;  // 0x0(0x1)

}; 
