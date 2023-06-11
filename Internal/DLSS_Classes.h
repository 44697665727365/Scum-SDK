#pragma once 
#include <DLSS_Structs.h>
 
 
 
// Class DLSS.DLSSSettings
// Size: 0x60(Inherited: 0x28) 
struct UDLSSSettings : public UObject
{
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bEnableDLSSD3D12 : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bEnableDLSSD3D11 : 1;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool bEnableDLSSVulkan : 1;  // 0x2A(0x1)
	char pad_43_1 : 7;  // 0x2B(0x1)
	bool bEnableDLSSInEditorViewports : 1;  // 0x2B(0x1)
	char pad_44_1 : 7;  // 0x2C(0x1)
	bool bEnableScreenpercentageManipulationInDLSSEditorViewports : 1;  // 0x2C(0x1)
	char pad_45_1 : 7;  // 0x2D(0x1)
	bool bEnableDLSSInPlayInEditorViewports : 1;  // 0x2D(0x1)
	char pad_46_1 : 7;  // 0x2E(0x1)
	bool bShowDLSSSDebugOnScreenMessages : 1;  // 0x2E(0x1)
	char pad_47[1];  // 0x2F(0x1)
	struct FString GenericDLSSBinaryPath;  // 0x30(0x10)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bGenericDLSSBinaryExists : 1;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	uint32_t NVIDIANGXApplicationId;  // 0x44(0x4)
	struct FString CustomDLSSBinaryPath;  // 0x48(0x10)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bCustomDLSSBinaryExists : 1;  // 0x58(0x1)
	char pad_89[7];  // 0x59(0x7)

}; 



// Class DLSS.DLSSOverrideSettings
// Size: 0x30(Inherited: 0x28) 
struct UDLSSOverrideSettings : public UObject
{
	uint8_t  EnableDLSSInEditorViewportsOverride;  // 0x28(0x1)
	uint8_t  EnableScreenpercentageManipulationInDLSSEditorViewportsOverride;  // 0x29(0x1)
	uint8_t  EnableDLSSInPlayInEditorViewportsOverride;  // 0x2A(0x1)
	char pad_43_1 : 7;  // 0x2B(0x1)
	bool bShowDLSSIncompatiblePluginsToolsWarnings : 1;  // 0x2B(0x1)
	uint8_t  ShowDLSSSDebugOnScreenMessages;  // 0x2C(0x1)
	char pad_45[3];  // 0x2D(0x3)

}; 



