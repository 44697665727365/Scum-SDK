#pragma once 
#include <RuntimeAudioImporter_Structs.h>
 
 
 
class UPreImportedSoundAsset
{
public:
	UPreImportedSoundAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetAudioDataArray() {
		return memory.read<struct TArray<char>>(m_addr + 40);
	}
	uint8_t  GetAudioFormat() {
		return memory.read<uint8_t >(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UImportedSoundWave
{
public:
	UImportedSoundWave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSamplingRate() {
		return memory.read<int32_t>(m_addr + 960);
	}
	struct FMulticastInlineDelegate GetOnAudioPlaybackFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 992);
	}
	struct FMulticastInlineDelegate GetOnGeneratePCMData() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1032);
	}
	int32_t GetCurrentNumOfFrames() {
		return memory.read<int32_t>(m_addr + 1052);
	}

private:
	std::uint64_t m_addr = 0;
};


class URuntimeAudioImporterLibrary
{
public:
	URuntimeAudioImporterLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnProgress() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}
	struct FMulticastInlineDelegate GetOnResult() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class URuntimeAudioCompressor
{
public:
	URuntimeAudioCompressor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnResult() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


