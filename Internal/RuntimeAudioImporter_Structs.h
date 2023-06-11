#pragma once 
#include "SDK.h" 
 
 
// Function RuntimeAudioImporter.ImportedSoundWave.GetDurationConst
// Size: 0x4(Inherited: 0x0) 
struct FGetDurationConst
{
	float ReturnValue;  // 0x0(0x4)

}; 
// DelegateFunction RuntimeAudioImporter.OnAudioImporterResult__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FOnAudioImporterResult__DelegateSignature
{
	struct URuntimeAudioImporterLibrary* RuntimeAudioImporterObjectRef;  // 0x0(0x8)
	struct UImportedSoundWave* SoundWaveRef;  // 0x8(0x8)
	uint8_t  Status;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// DelegateFunction RuntimeAudioImporter.OnGeneratePCMData__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnGeneratePCMData__DelegateSignature
{
	struct TArray<float> PCMData;  // 0x0(0x10)

}; 
// DelegateFunction RuntimeAudioImporter.OnSoundWaveCompressedResult__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnSoundWaveCompressedResult__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bSuccess : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct USoundWave* SoundWaveRef;  // 0x8(0x8)

}; 
// DelegateFunction RuntimeAudioImporter.OnAudioImporterProgress__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnAudioImporterProgress__DelegateSignature
{
	int32_t Percentage;  // 0x0(0x4)

}; 
// ScriptStruct RuntimeAudioImporter.PCMStruct
// Size: 0x18(Inherited: 0x0) 
struct FPCMStruct
{
	char pad_0[24];  // 0x0(0x18)

}; 
// Function RuntimeAudioImporter.RuntimeAudioCompressor.CreateRuntimeAudioCompressor
// Size: 0x8(Inherited: 0x0) 
struct FCreateRuntimeAudioCompressor
{
	struct URuntimeAudioCompressor* ReturnValue;  // 0x0(0x8)

}; 
// Function RuntimeAudioImporter.ImportedSoundWave.RewindPlaybackTime
// Size: 0x8(Inherited: 0x0) 
struct FRewindPlaybackTime
{
	float PlaybackTime;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function RuntimeAudioImporter.ImportedSoundWave.IsPlaybackFinished
// Size: 0x1(Inherited: 0x0) 
struct FIsPlaybackFinished
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct RuntimeAudioImporter.CompressedSoundWaveInfo
// Size: 0xC(Inherited: 0x0) 
struct FCompressedSoundWaveInfo
{
	char ESoundGroup SoundGroup;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool bLooping : 1;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float Volume;  // 0x4(0x4)
	float Pitch;  // 0x8(0x4)

}; 
// Function RuntimeAudioImporter.ImportedSoundWave.GetDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWFile
// Size: 0x20(Inherited: 0x0) 
struct FImportAudioFromRAWFile
{
	struct FString FilePath;  // 0x0(0x10)
	uint8_t  Format;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	int32_t SampleRate;  // 0x14(0x4)
	int32_t NumOfChannels;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromPreImportedSound
// Size: 0x8(Inherited: 0x0) 
struct FImportAudioFromPreImportedSound
{
	struct UPreImportedSoundAsset* PreImportedSoundAssetRef;  // 0x0(0x8)

}; 
// Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackPercentage
// Size: 0x4(Inherited: 0x0) 
struct FGetPlaybackPercentage
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackTime
// Size: 0x4(Inherited: 0x0) 
struct FGetPlaybackTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function RuntimeAudioImporter.RuntimeAudioCompressor.CompressSoundWave
// Size: 0x18(Inherited: 0x0) 
struct FCompressSoundWave
{
	struct UImportedSoundWave* ImportedSoundWaveRef;  // 0x0(0x8)
	struct FCompressedSoundWaveInfo CompressedSoundWaveInfo;  // 0x8(0xC)
	char Quality;  // 0x14(0x1)
	char pad_21_1 : 7;  // 0x15(0x1)
	bool bFillCompressedBuffer : 1;  // 0x15(0x1)
	char pad_22_1 : 7;  // 0x16(0x1)
	bool bFillPCMBuffer : 1;  // 0x16(0x1)
	char pad_23_1 : 7;  // 0x17(0x1)
	bool bFillRAWWaveBuffer : 1;  // 0x17(0x1)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ConvertSecondsToString
// Size: 0x18(Inherited: 0x0) 
struct FConvertSecondsToString
{
	int32_t Seconds;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.CreateRuntimeAudioImporter
// Size: 0x8(Inherited: 0x0) 
struct FCreateRuntimeAudioImporter
{
	struct URuntimeAudioImporterLibrary* ReturnValue;  // 0x0(0x8)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToBuffer
// Size: 0x20(Inherited: 0x0) 
struct FExportSoundWaveToBuffer
{
	struct UImportedSoundWave* ImporterSoundWave;  // 0x0(0x8)
	struct TArray<char> AudioData;  // 0x8(0x10)
	uint8_t  AudioFormat;  // 0x18(0x1)
	char Quality;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool ReturnValue : 1;  // 0x1A(0x1)
	char pad_27[5];  // 0x1B(0x5)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToFile
// Size: 0x20(Inherited: 0x0) 
struct FExportSoundWaveToFile
{
	struct UImportedSoundWave* ImporterSoundWave;  // 0x0(0x8)
	struct FString SavePath;  // 0x8(0x10)
	uint8_t  AudioFormat;  // 0x18(0x1)
	char Quality;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool ReturnValue : 1;  // 0x1A(0x1)
	char pad_27[5];  // 0x1B(0x5)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormat
// Size: 0x18(Inherited: 0x0) 
struct FGetAudioFormat
{
	struct FString FilePath;  // 0x0(0x10)
	uint8_t  ReturnValue;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormatAdvanced
// Size: 0x18(Inherited: 0x0) 
struct FGetAudioFormatAdvanced
{
	struct TArray<char> AudioData;  // 0x0(0x10)
	uint8_t  ReturnValue;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromBuffer
// Size: 0x18(Inherited: 0x0) 
struct FImportAudioFromBuffer
{
	struct TArray<char> AudioData;  // 0x0(0x10)
	uint8_t  Format;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromFile
// Size: 0x18(Inherited: 0x0) 
struct FImportAudioFromFile
{
	struct FString FilePath;  // 0x0(0x10)
	uint8_t  Format;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWBuffer
// Size: 0x20(Inherited: 0x0) 
struct FImportAudioFromRAWBuffer
{
	struct TArray<char> RAWBuffer;  // 0x0(0x10)
	uint8_t  Format;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	int32_t SampleRate;  // 0x14(0x4)
	int32_t NumOfChannels;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromBuffer
// Size: 0x30(Inherited: 0x0) 
struct FTranscodeRAWDataFromBuffer
{
	struct TArray<char> RAWData_From;  // 0x0(0x10)
	uint8_t  FormatFrom;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct TArray<char> RAWData_To;  // 0x18(0x10)
	uint8_t  FormatTo;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromFile
// Size: 0x30(Inherited: 0x0) 
struct FTranscodeRAWDataFromFile
{
	struct FString FilePathFrom;  // 0x0(0x10)
	uint8_t  FormatFrom;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)
	struct FString FilePathTo;  // 0x18(0x10)
	uint8_t  FormatTo;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool ReturnValue : 1;  // 0x29(0x1)
	char pad_42[6];  // 0x2A(0x6)

}; 
