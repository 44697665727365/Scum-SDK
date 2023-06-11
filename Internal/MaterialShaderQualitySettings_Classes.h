#pragma once 
#include <MaterialShaderQualitySettings_Structs.h>
 
 
 
// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78(Inherited: 0x28) 
struct UMaterialShaderQualitySettings : public UObject
{
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap;  // 0x28(0x50)

}; 



// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x60(Inherited: 0x28) 
struct UShaderPlatformQualitySettings : public UObject
{
	struct FMaterialQualityOverrides QualityOverrides[4];  // 0x28(0x24)
	char pad_76[20];  // 0x4C(0x14)

}; 



