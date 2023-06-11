#pragma once 
#include <AudioCapture_Structs.h>
 
 
 
// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
}; 



// Class AudioCapture.AudioCapture
// Size: 0xB0(Inherited: 0xA8) 
struct UAudioCapture : public UAudioGenerator
{
	char pad_168[8];  // 0xA8(0x8)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
}; 



// Class AudioCapture.AudioCaptureComponent
// Size: 0x780(Inherited: 0x6C0) 
struct UAudioCaptureComponent : public USynthComponent
{
	int32_t JitterLatencyFrames;  // 0x6C0(0x4)
	char pad_1732[188];  // 0x6C4(0xBC)

}; 



