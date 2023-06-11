#pragma once 
#include <RuntimeAudioImporter_Structs.h>
 
 
 
// Class RuntimeAudioImporter.PreImportedSoundAsset
// Size: 0x40(Inherited: 0x28) 
struct UPreImportedSoundAsset : public UObject
{
	struct TArray<char> AudioDataArray;  // 0x28(0x10)
	uint8_t  AudioFormat;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 



// Class RuntimeAudioImporter.ImportedSoundWave
// Size: 0x440(Inherited: 0x3C0) 
struct UImportedSoundWave : public USoundWaveProcedural
{
	int32_t SamplingRate;  // 0x3C0(0x4)
	char pad_964[28];  // 0x3C4(0x1C)
	struct FMulticastInlineDelegate OnAudioPlaybackFinished;  // 0x3E0(0x10)
	char pad_1008[24];  // 0x3F0(0x18)
	struct FMulticastInlineDelegate OnGeneratePCMData;  // 0x408(0x10)
	char pad_1048[4];  // 0x418(0x4)
	int32_t CurrentNumOfFrames;  // 0x41C(0x4)
	char pad_1056[32];  // 0x420(0x20)

	bool RewindPlaybackTime(float PlaybackTime); // Function RuntimeAudioImporter.ImportedSoundWave.RewindPlaybackTime
	void ReleaseMemory(); // Function RuntimeAudioImporter.ImportedSoundWave.ReleaseMemory
	bool IsPlaybackFinished(); // Function RuntimeAudioImporter.ImportedSoundWave.IsPlaybackFinished
	float GetPlaybackTime(); // Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackTime
	float GetPlaybackPercentage(); // Function RuntimeAudioImporter.ImportedSoundWave.GetPlaybackPercentage
	float GetDurationConst(); // Function RuntimeAudioImporter.ImportedSoundWave.GetDurationConst
	float GetDuration(); // Function RuntimeAudioImporter.ImportedSoundWave.GetDuration
}; 



// Class RuntimeAudioImporter.RuntimeAudioImporterLibrary
// Size: 0x78(Inherited: 0x28) 
struct URuntimeAudioImporterLibrary : public UObject
{
	char pad_40[24];  // 0x28(0x18)
	struct FMulticastInlineDelegate OnProgress;  // 0x40(0x10)
	char pad_80[24];  // 0x50(0x18)
	struct FMulticastInlineDelegate OnResult;  // 0x68(0x10)

	bool TranscodeRAWDataFromFile(struct FString FilePathFrom, uint8_t  FormatFrom, struct FString FilePathTo, uint8_t  FormatTo); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromFile
	void TranscodeRAWDataFromBuffer(struct TArray<char> RAWData_From, uint8_t  FormatFrom, struct TArray<char>& RAWData_To, uint8_t  FormatTo); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.TranscodeRAWDataFromBuffer
	void ImportAudioFromRAWFile(struct FString FilePath, uint8_t  Format, int32_t SampleRate, int32_t NumOfChannels); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWFile
	void ImportAudioFromRAWBuffer(struct TArray<char> RAWBuffer, uint8_t  Format, int32_t SampleRate, int32_t NumOfChannels); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromRAWBuffer
	void ImportAudioFromPreImportedSound(struct UPreImportedSoundAsset* PreImportedSoundAssetRef); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromPreImportedSound
	void ImportAudioFromFile(struct FString FilePath, uint8_t  Format); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromFile
	void ImportAudioFromBuffer(struct TArray<char> AudioData, uint8_t  Format); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ImportAudioFromBuffer
	uint8_t  GetAudioFormatAdvanced(struct TArray<char>& AudioData); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormatAdvanced
	uint8_t  GetAudioFormat(struct FString FilePath); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.GetAudioFormat
	bool ExportSoundWaveToFile(struct UImportedSoundWave* ImporterSoundWave, struct FString SavePath, uint8_t  AudioFormat, char Quality); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToFile
	bool ExportSoundWaveToBuffer(struct UImportedSoundWave* ImporterSoundWave, struct TArray<char>& AudioData, uint8_t  AudioFormat, char Quality); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ExportSoundWaveToBuffer
	struct URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter(); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.CreateRuntimeAudioImporter
	struct FString ConvertSecondsToString(int32_t Seconds); // Function RuntimeAudioImporter.RuntimeAudioImporterLibrary.ConvertSecondsToString
}; 



// Class RuntimeAudioImporter.RuntimeAudioCompressor
// Size: 0x50(Inherited: 0x28) 
struct URuntimeAudioCompressor : public UObject
{
	char pad_40[24];  // 0x28(0x18)
	struct FMulticastInlineDelegate OnResult;  // 0x40(0x10)

	struct URuntimeAudioCompressor* CreateRuntimeAudioCompressor(); // Function RuntimeAudioImporter.RuntimeAudioCompressor.CreateRuntimeAudioCompressor
	void CompressSoundWave(struct UImportedSoundWave* ImportedSoundWaveRef, struct FCompressedSoundWaveInfo CompressedSoundWaveInfo, char Quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer); // Function RuntimeAudioImporter.RuntimeAudioCompressor.CompressSoundWave
}; 



