#pragma once 
#include <MovieSceneCapture_Structs.h>
 
 
 
// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneCaptureEnvironment : public UObject
{

	bool IsCaptureInProgress(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	int32_t GetCaptureFrameNumber(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	float GetCaptureElapsedTime(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
}; 



// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{

}; 



// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xE8(Inherited: 0xD8) 
struct UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
	char pad_216_1 : 7;  // 0xD8(0x1)
	bool bCompressed : 1;  // 0xD8(0x1)
	char EHDRCaptureGamut CaptureGamut;  // 0xD9(0x1)
	char pad_218[14];  // 0xDA(0xE)

}; 



// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x58(Inherited: 0x28) 
struct UMovieSceneCaptureProtocolBase : public UObject
{
	char pad_40[40];  // 0x28(0x28)
	uint8_t  State;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)

	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	uint8_t  GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
}; 



// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x58(Inherited: 0x58) 
struct UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{

}; 



// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x90(Inherited: 0x58) 
struct UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
	struct FString Filename;  // 0x58(0x10)
	char pad_104[40];  // 0x68(0x28)

}; 



// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xE0(Inherited: 0xE0) 
struct UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{

}; 



// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x58(Inherited: 0x58) 
struct UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{

}; 



// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xD8(Inherited: 0x68) 
struct UImageSequenceProtocol : public UFrameGrabberProtocol
{
	char pad_104[112];  // 0x68(0x70)

}; 



// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xC0(Inherited: 0x58) 
struct UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
	struct FCompositionGraphCapturePasses IncludeRenderPasses;  // 0x58(0x10)
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bCaptureFramesInHDR : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	int32_t HDRCompressionQuality;  // 0x6C(0x4)
	char EHDRCaptureGamut CaptureGamut;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)
	struct FSoftObjectPath PostProcessingMaterial;  // 0x78(0x18)
	char pad_144_1 : 7;  // 0x90(0x1)
	bool bDisableScreenPercentage : 1;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct UMaterialInterface* PostProcessingMaterialPtr;  // 0x98(0x8)
	char pad_160[32];  // 0xA0(0x20)

}; 



// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x68(Inherited: 0x58) 
struct UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
	char pad_88[16];  // 0x58(0x10)

}; 



// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xE0(Inherited: 0xD8) 
struct UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
	int32_t CompressionQuality;  // 0xD8(0x4)
	char pad_220[4];  // 0xDC(0x4)

}; 



// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xD8(Inherited: 0xD8) 
struct UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{

}; 



// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xE0(Inherited: 0xE0) 
struct UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{

}; 



// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x28(Inherited: 0x28) 
struct UMovieSceneCaptureInterface : public UInterface
{

}; 



// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x220(Inherited: 0x28) 
struct UMovieSceneCapture : public UObject
{
	char pad_40[16];  // 0x28(0x10)
	struct FSoftClassPath ImageCaptureProtocolType;  // 0x38(0x18)
	struct FSoftClassPath AudioCaptureProtocolType;  // 0x50(0x18)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;  // 0x68(0x8)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;  // 0x70(0x8)
	struct FMovieSceneCaptureSettings Settings;  // 0x78(0x70)
	char pad_232_1 : 7;  // 0xE8(0x1)
	bool bUseSeparateProcess : 1;  // 0xE8(0x1)
	char pad_233_1 : 7;  // 0xE9(0x1)
	bool bCloseEditorWhenCaptureStarts : 1;  // 0xE9(0x1)
	char pad_234[6];  // 0xEA(0x6)
	struct FString AdditionalCommandLineArguments;  // 0xF0(0x10)
	struct FString InheritedCommandLineArguments;  // 0x100(0x10)
	char pad_272[272];  // 0x110(0x110)

	void SetImageCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	void SetAudioCaptureProtocolType(UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
}; 



// Class MovieSceneCapture.LevelCapture
// Size: 0x240(Inherited: 0x220) 
struct ULevelCapture : public UMovieSceneCapture
{
	char pad_544_1 : 7;  // 0x220(0x1)
	bool bAutoStartCapture : 1;  // 0x220(0x1)
	char pad_545[11];  // 0x221(0xB)
	struct FGuid PrerequisiteActorId;  // 0x22C(0x10)
	char pad_572[4];  // 0x23C(0x4)

}; 



// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xD8(Inherited: 0x58) 
struct UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
	struct UWorld* World;  // 0x58(0x8)
	char pad_96[120];  // 0x60(0x78)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	void StartCapturingFinalPixels(struct FCapturedPixelsID& streamId); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
}; 



// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xE0(Inherited: 0xD8) 
struct UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
	uint8_t  Format;  // 0xD8(0x1)
	char pad_217_1 : 7;  // 0xD9(0x1)
	bool bEnableCompression : 1;  // 0xD9(0x1)
	char pad_218[2];  // 0xDA(0x2)
	int32_t CompressionQuality;  // 0xDC(0x4)

	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& streamId, struct FFrameMetrics& FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& streamId); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
}; 



// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x80(Inherited: 0x68) 
struct UVideoCaptureProtocol : public UFrameGrabberProtocol
{
	char pad_104_1 : 7;  // 0x68(0x1)
	bool bUseCompression : 1;  // 0x68(0x1)
	char pad_105[3];  // 0x69(0x3)
	float CompressionQuality;  // 0x6C(0x4)
	char pad_112[16];  // 0x70(0x10)

}; 



