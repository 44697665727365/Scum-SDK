#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x9(Inherited: 0x0) 
struct FMaterialQualityOverrides
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bDiscardQualityDuringCook : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bEnableOverride : 1;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool bForceFullyRough : 1;  // 0x2(0x1)
	char pad_3_1 : 7;  // 0x3(0x1)
	bool bForceNonMetal : 1;  // 0x3(0x1)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bForceDisableLMDirectionality : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bForceLQReflections : 1;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool bForceDisablePreintegratedGF : 1;  // 0x6(0x1)
	char pad_7_1 : 7;  // 0x7(0x1)
	bool bDisableMaterialNormalCalculation : 1;  // 0x7(0x1)
	uint8_t  MobileShadowQuality;  // 0x8(0x1)

}; 
