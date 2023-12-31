#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct Renderer.LightPropagationVolumeSettings
// Size: 0x40(Inherited: 0x0) 
struct FLightPropagationVolumeSettings
{
	char bOverride_LPVIntensity : 1;  // 0x0(0x1)
	char bOverride_LPVDirectionalOcclusionIntensity : 1;  // 0x0(0x1)
	char bOverride_LPVDirectionalOcclusionRadius : 1;  // 0x0(0x1)
	char bOverride_LPVDiffuseOcclusionExponent : 1;  // 0x0(0x1)
	char bOverride_LPVSpecularOcclusionExponent : 1;  // 0x0(0x1)
	char bOverride_LPVDiffuseOcclusionIntensity : 1;  // 0x0(0x1)
	char bOverride_LPVSpecularOcclusionIntensity : 1;  // 0x0(0x1)
	char bOverride_LPVSize : 1;  // 0x0(0x1)
	char bOverride_LPVSecondaryOcclusionIntensity : 1;  // 0x1(0x1)
	char bOverride_LPVSecondaryBounceIntensity : 1;  // 0x1(0x1)
	char bOverride_LPVGeometryVolumeBias : 1;  // 0x1(0x1)
	char bOverride_LPVVplInjectionBias : 1;  // 0x1(0x1)
	char bOverride_LPVEmissiveInjectionIntensity : 1;  // 0x1(0x1)
	char pad_1_1 : 3;  // 0x1(0x1)
	char pad_2[3];  // 0x2(0x3)
	float LPVIntensity;  // 0x4(0x4)
	float LPVVplInjectionBias;  // 0x8(0x4)
	float LPVSize;  // 0xC(0x4)
	float LPVSecondaryOcclusionIntensity;  // 0x10(0x4)
	float LPVSecondaryBounceIntensity;  // 0x14(0x4)
	float LPVGeometryVolumeBias;  // 0x18(0x4)
	float LPVEmissiveInjectionIntensity;  // 0x1C(0x4)
	float LPVDirectionalOcclusionIntensity;  // 0x20(0x4)
	float LPVDirectionalOcclusionRadius;  // 0x24(0x4)
	float LPVDiffuseOcclusionExponent;  // 0x28(0x4)
	float LPVSpecularOcclusionExponent;  // 0x2C(0x4)
	float LPVDiffuseOcclusionIntensity;  // 0x30(0x4)
	float LPVSpecularOcclusionIntensity;  // 0x34(0x4)
	float LPVFadeRange;  // 0x38(0x4)
	float LPVDirectionalOcclusionFadeRange;  // 0x3C(0x4)

}; 
