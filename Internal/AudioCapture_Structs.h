#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct AudioCapture.AudioCaptureDeviceInfo
// Size: 0x10(Inherited: 0x0) 
struct FAudioCaptureDeviceInfo
{
	struct FName DeviceName;  // 0x0(0x8)
	int32_t NumInputChannels;  // 0x8(0x4)
	int32_t SampleRate;  // 0xC(0x4)

}; 
// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// Size: 0x14(Inherited: 0x0) 
struct FGetAudioCaptureDeviceInfo
{
	struct FAudioCaptureDeviceInfo OutInfo;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)

}; 
// Function AudioCapture.AudioCapture.IsCapturingAudio
// Size: 0x1(Inherited: 0x0) 
struct FIsCapturingAudio
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// Size: 0x8(Inherited: 0x0) 
struct FCreateAudioCapture
{
	struct UAudioCapture* ReturnValue;  // 0x0(0x8)

}; 
