#pragma once 
#include <FSR2TemporalUpscaling_Structs.h>
 
 
 
// Class FSR2TemporalUpscaling.FSR2Settings
// Size: 0x88(Inherited: 0x38) 
struct UFSR2Settings : public UDeveloperSettings
{
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bEnabled : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool AutoExposure : 1;  // 0x39(0x1)
	char pad_58_1 : 7;  // 0x3A(0x1)
	bool EnabledInEditorViewport : 1;  // 0x3A(0x1)
	char pad_59_1 : 7;  // 0x3B(0x1)
	bool UseSSRExperimentalDenoiser : 1;  // 0x3B(0x1)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool UseNativeDX12 : 1;  // 0x3C(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	bool UseNativeVulkan : 1;  // 0x3D(0x1)
	char pad_62[2];  // 0x3E(0x2)
	uint8_t  QualityMode;  // 0x40(0x4)
	uint8_t  HistoryFormat;  // 0x44(0x4)
	uint8_t  DeDither;  // 0x48(0x4)
	float Sharpness;  // 0x4C(0x4)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool AdjustMipBias : 1;  // 0x50(0x1)
	char pad_81_1 : 7;  // 0x51(0x1)
	bool ReactiveMask : 1;  // 0x51(0x1)
	char pad_82_1 : 7;  // 0x52(0x1)
	bool ForceVertexDeformationOutputsVelocity : 1;  // 0x52(0x1)
	char pad_83[1];  // 0x53(0x1)
	uint8_t  ForceLandscapeHISMMobility;  // 0x54(0x4)
	float ReflectionScale;  // 0x58(0x4)
	float ReflectionLuminanceBias;  // 0x5C(0x4)
	float RoughnessScale;  // 0x60(0x4)
	float RoughnessBias;  // 0x64(0x4)
	float RoughnessMaxDistance;  // 0x68(0x4)
	char pad_108_1 : 7;  // 0x6C(0x1)
	bool ReactiveMaskRoughnessForceMaxDistance : 1;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)
	float TranslucencyBias;  // 0x70(0x4)
	float TranslucencyLuminanceBias;  // 0x74(0x4)
	float TranslucencyMaxDistance;  // 0x78(0x4)
	float PreDOFTranslucencyScale;  // 0x7C(0x4)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool PreDOFTranslucencyMax : 1;  // 0x80(0x1)
	char EMaterialShadingModel ReactiveShadingModelID;  // 0x81(0x1)
	char pad_130[2];  // 0x82(0x2)
	float ForceReactiveMaterialValue;  // 0x84(0x4)

}; 



