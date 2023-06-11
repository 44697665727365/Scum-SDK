#pragma once 
#include "SDK.h" 
 
 
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// Size: 0x70(Inherited: 0x0) 
struct FOnPixelsReceived
{
	struct FCapturedPixels Pixels;  // 0x0(0x10)
	struct FCapturedPixelsID ID;  // 0x10(0x50)
	struct FFrameMetrics FrameMetrics;  // 0x60(0x10)

}; 
// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// Size: 0x10(Inherited: 0x0) 
struct FGetCurrentFrameMetrics
{
	struct FFrameMetrics ReturnValue;  // 0x0(0x10)

}; 
// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// Size: 0x10(Inherited: 0x0) 
struct FCompositionGraphCapturePasses
{
	struct TArray<struct FString> Value;  // 0x0(0x10)

}; 
// ScriptStruct MovieSceneCapture.CaptureResolution
// Size: 0x8(Inherited: 0x0) 
struct FCaptureResolution
{
	int32_t ResX;  // 0x0(0x4)
	int32_t ResY;  // 0x4(0x4)

}; 
// ScriptStruct MovieSceneCapture.FrameMetrics
// Size: 0x10(Inherited: 0x0) 
struct FFrameMetrics
{
	float TotalElapsedTime;  // 0x0(0x4)
	float FrameDelta;  // 0x4(0x4)
	int32_t FrameNumber;  // 0x8(0x4)
	int32_t NumDroppedFrames;  // 0xC(0x4)

}; 
// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// Size: 0x70(Inherited: 0x0) 
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath OutputDirectory;  // 0x0(0x10)
	AGameModeBase* GameModeOverride;  // 0x10(0x8)
	struct FString OutputFormat;  // 0x18(0x10)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bOverwriteExisting : 1;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bUseRelativeFrameNumbers : 1;  // 0x29(0x1)
	char pad_42[2];  // 0x2A(0x2)
	int32_t HandleFrames;  // 0x2C(0x4)
	struct FString MovieExtension;  // 0x30(0x10)
	char ZeroPadFrameNumbers;  // 0x40(0x1)
	char pad_65[3];  // 0x41(0x3)
	struct FFrameRate FrameRate;  // 0x44(0x8)
	char pad_76_1 : 7;  // 0x4C(0x1)
	bool bUseCustomFrameRate : 1;  // 0x4C(0x1)
	char pad_77[3];  // 0x4D(0x3)
	struct FFrameRate CustomFrameRate;  // 0x50(0x8)
	struct FCaptureResolution Resolution;  // 0x58(0x8)
	char pad_96_1 : 7;  // 0x60(0x1)
	bool bEnableTextureStreaming : 1;  // 0x60(0x1)
	char pad_97_1 : 7;  // 0x61(0x1)
	bool bCinematicEngineScalability : 1;  // 0x61(0x1)
	char pad_98_1 : 7;  // 0x62(0x1)
	bool bCinematicMode : 1;  // 0x62(0x1)
	char pad_99_1 : 7;  // 0x63(0x1)
	bool bAllowMovement : 1;  // 0x63(0x1)
	char pad_100_1 : 7;  // 0x64(0x1)
	bool bAllowTurning : 1;  // 0x64(0x1)
	char pad_101_1 : 7;  // 0x65(0x1)
	bool bShowPlayer : 1;  // 0x65(0x1)
	char pad_102_1 : 7;  // 0x66(0x1)
	bool bShowHUD : 1;  // 0x66(0x1)
	char pad_103_1 : 7;  // 0x67(0x1)
	bool bUsePathTracer : 1;  // 0x67(0x1)
	int32_t PathTracerSamplePerPixel;  // 0x68(0x4)
	char pad_108[4];  // 0x6C(0x4)

}; 
// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// Size: 0x1(Inherited: 0x0) 
struct FIsCapturing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct MovieSceneCapture.CapturedPixels
// Size: 0x10(Inherited: 0x0) 
struct FCapturedPixels
{
	char pad_0[16];  // 0x0(0x10)

}; 
// ScriptStruct MovieSceneCapture.CapturedPixelsID
// Size: 0x50(Inherited: 0x0) 
struct FCapturedPixelsID
{
	struct TMap<struct FName, struct FName> Identifiers;  // 0x0(0x50)

}; 
// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// Size: 0x1(Inherited: 0x0) 
struct FGetState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// Size: 0x8(Inherited: 0x0) 
struct FGetAudioCaptureProtocol
{
	struct UMovieSceneCaptureProtocolBase* ReturnValue;  // 0x0(0x8)

}; 
// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// Size: 0x8(Inherited: 0x0) 
struct FGetImageCaptureProtocol
{
	struct UMovieSceneCaptureProtocolBase* ReturnValue;  // 0x0(0x8)

}; 
// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// Size: 0x8(Inherited: 0x0) 
struct FSetAudioCaptureProtocolType
{
	UMovieSceneCaptureProtocolBase* ProtocolType;  // 0x0(0x8)

}; 
// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// Size: 0x8(Inherited: 0x0) 
struct FSetImageCaptureProtocolType
{
	UMovieSceneCaptureProtocolBase* ProtocolType;  // 0x0(0x8)

}; 
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// Size: 0x8(Inherited: 0x0) 
struct FFindAudioCaptureProtocol
{
	struct UMovieSceneAudioCaptureProtocolBase* ReturnValue;  // 0x0(0x8)

}; 
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// Size: 0x8(Inherited: 0x0) 
struct FFindImageCaptureProtocol
{
	struct UMovieSceneImageCaptureProtocolBase* ReturnValue;  // 0x0(0x8)

}; 
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// Size: 0x4(Inherited: 0x0) 
struct FGetCaptureElapsedTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// Size: 0x4(Inherited: 0x0) 
struct FGetCaptureFrameNumber
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// Size: 0x1(Inherited: 0x0) 
struct FOnSetup
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// Size: 0x1(Inherited: 0x0) 
struct FIsCaptureInProgress
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// Size: 0x20(Inherited: 0x0) 
struct FGenerateFilename
{
	struct FFrameMetrics InFrameMetrics;  // 0x0(0x10)
	struct FString ReturnValue;  // 0x10(0x10)

}; 
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// Size: 0x1(Inherited: 0x0) 
struct FOnCanFinalize
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// Size: 0x50(Inherited: 0x0) 
struct FStartCapturingFinalPixels
{
	struct FCapturedPixelsID streamId;  // 0x0(0x50)

}; 
// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// Size: 0x58(Inherited: 0x0) 
struct FResolveBuffer
{
	struct UTexture* Buffer;  // 0x0(0x8)
	struct FCapturedPixelsID BufferID;  // 0x8(0x50)

}; 
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// Size: 0x68(Inherited: 0x0) 
struct FGenerateFilenameForBuffer
{
	struct UTexture* Buffer;  // 0x0(0x8)
	struct FCapturedPixelsID streamId;  // 0x8(0x50)
	struct FString ReturnValue;  // 0x58(0x10)

}; 
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// Size: 0x10(Inherited: 0x0) 
struct FGenerateFilenameForCurrentFrame
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// Size: 0x78(Inherited: 0x0) 
struct FWriteImageToDisk
{
	struct FCapturedPixels PixelData;  // 0x0(0x10)
	struct FCapturedPixelsID streamId;  // 0x10(0x50)
	struct FFrameMetrics FrameMetrics;  // 0x60(0x10)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bCopyImageData : 1;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)

}; 
