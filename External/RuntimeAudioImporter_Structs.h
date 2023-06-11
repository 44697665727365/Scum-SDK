#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetDurationConst
{
public:
	FGetDurationConst(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAudioImporterResult__DelegateSignature
{
public:
	FOnAudioImporterResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URuntimeAudioImporterLibrary GetRuntimeAudioImporterObjectRef() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct URuntimeAudioImporterLibrary(ptr_addr);
	}
	struct UImportedSoundWave GetSoundWaveRef() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UImportedSoundWave(ptr_addr);
	}
	uint8_t  GetStatus() {
		return memory.read<uint8_t >(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGeneratePCMData__DelegateSignature
{
public:
	FOnGeneratePCMData__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetPCMData() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSoundWaveCompressedResult__DelegateSignature
{
public:
	FOnSoundWaveCompressedResult__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	struct USoundWave GetSoundWaveRef() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundWave(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAudioImporterProgress__DelegateSignature
{
public:
	FOnAudioImporterProgress__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPercentage() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPCMStruct
{
public:
	FPCMStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FCreateRuntimeAudioCompressor
{
public:
	FCreateRuntimeAudioCompressor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URuntimeAudioCompressor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct URuntimeAudioCompressor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRewindPlaybackTime
{
public:
	FRewindPlaybackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPlaybackTime() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPlaybackFinished
{
public:
	FIsPlaybackFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompressedSoundWaveInfo
{
public:
	FCompressedSoundWaveInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char ESoundGroup GetSoundGroup() {
		return memory.read<char ESoundGroup>(m_addr + 0);
	}
	bool GetbLooping() {
		return memory.read<bool>(m_addr + 1);
	}
	float GetVolume() {
		return memory.read<float>(m_addr + 4);
	}
	float GetPitch() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDuration
{
public:
	FGetDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FImportAudioFromRAWFile
{
public:
	FImportAudioFromRAWFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	uint8_t  GetFormat() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	int32_t GetSampleRate() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetNumOfChannels() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FImportAudioFromPreImportedSound
{
public:
	FImportAudioFromPreImportedSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPreImportedSoundAsset GetPreImportedSoundAssetRef() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPreImportedSoundAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackPercentage
{
public:
	FGetPlaybackPercentage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaybackTime
{
public:
	FGetPlaybackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompressSoundWave
{
public:
	FCompressSoundWave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImportedSoundWave GetImportedSoundWaveRef() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UImportedSoundWave(ptr_addr);
	}
	struct FCompressedSoundWaveInfo GetCompressedSoundWaveInfo() {
		return memory.read<struct FCompressedSoundWaveInfo>(m_addr + 8);
	}
	char GetQuality() {
		return memory.read<char>(m_addr + 20);
	}
	bool GetbFillCompressedBuffer() {
		return memory.read<bool>(m_addr + 21);
	}
	bool GetbFillPCMBuffer() {
		return memory.read<bool>(m_addr + 22);
	}
	bool GetbFillRAWWaveBuffer() {
		return memory.read<bool>(m_addr + 23);
	}

private:
	std::uint64_t m_addr = 0;
};class FConvertSecondsToString
{
public:
	FConvertSecondsToString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSeconds() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateRuntimeAudioImporter
{
public:
	FCreateRuntimeAudioImporter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URuntimeAudioImporterLibrary GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct URuntimeAudioImporterLibrary(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FExportSoundWaveToBuffer
{
public:
	FExportSoundWaveToBuffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImportedSoundWave GetImporterSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UImportedSoundWave(ptr_addr);
	}
	struct TArray<char> GetAudioData() {
		return memory.read<struct TArray<char>>(m_addr + 8);
	}
	uint8_t  GetAudioFormat() {
		return memory.read<uint8_t >(m_addr + 24);
	}
	char GetQuality() {
		return memory.read<char>(m_addr + 25);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 26);
	}

private:
	std::uint64_t m_addr = 0;
};class FExportSoundWaveToFile
{
public:
	FExportSoundWaveToFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImportedSoundWave GetImporterSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UImportedSoundWave(ptr_addr);
	}
	struct FString GetSavePath() {
		return memory.read<struct FString>(m_addr + 8);
	}
	uint8_t  GetAudioFormat() {
		return memory.read<uint8_t >(m_addr + 24);
	}
	char GetQuality() {
		return memory.read<char>(m_addr + 25);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 26);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioFormat
{
public:
	FGetAudioFormat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioFormatAdvanced
{
public:
	FGetAudioFormatAdvanced(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetAudioData() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}
	uint8_t  GetReturnValue() {
		return memory.read<uint8_t >(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FImportAudioFromBuffer
{
public:
	FImportAudioFromBuffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetAudioData() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}
	uint8_t  GetFormat() {
		return memory.read<uint8_t >(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FImportAudioFromFile
{
public:
	FImportAudioFromFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	uint8_t  GetFormat() {
		return memory.read<uint8_t >(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FImportAudioFromRAWBuffer
{
public:
	FImportAudioFromRAWBuffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetRAWBuffer() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}
	uint8_t  GetFormat() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	int32_t GetSampleRate() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetNumOfChannels() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FTranscodeRAWDataFromBuffer
{
public:
	FTranscodeRAWDataFromBuffer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetRAWData_From() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}
	uint8_t  GetFormatFrom() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct TArray<char> GetRAWData_To() {
		return memory.read<struct TArray<char>>(m_addr + 24);
	}
	uint8_t  GetFormatTo() {
		return memory.read<uint8_t >(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FTranscodeRAWDataFromFile
{
public:
	FTranscodeRAWDataFromFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilePathFrom() {
		return memory.read<struct FString>(m_addr + 0);
	}
	uint8_t  GetFormatFrom() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FString GetFilePathTo() {
		return memory.read<struct FString>(m_addr + 24);
	}
	uint8_t  GetFormatTo() {
		return memory.read<uint8_t >(m_addr + 40);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 41);
	}

private:
	std::uint64_t m_addr = 0;
};