#pragma once 
#include <AudioSynesthesia_Structs.h>
 
 
 
class UAudioSynesthesiaNRTSettings
{
public:
	UAudioSynesthesiaNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioSynesthesiaNRT
{
public:
	UAudioSynesthesiaNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOnsetNRTSettings
{
public:
	UOnsetNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDownmixToMono() {
		return memory.read<bool>(m_addr + 40);
	}
	float GetGranularityInSeconds() {
		return memory.read<float>(m_addr + 44);
	}
	float GetSensitivity() {
		return memory.read<float>(m_addr + 48);
	}
	float GetMinimumFrequency() {
		return memory.read<float>(m_addr + 52);
	}
	float GetMaximumFrequency() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULoudnessNRT
{
public:
	ULoudnessNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULoudnessNRTSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct ULoudnessNRTSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConstantQNRTSettings
{
public:
	UConstantQNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStartingFrequency() {
		return memory.read<float>(m_addr + 40);
	}
	int32_t GetNumBands() {
		return memory.read<int32_t>(m_addr + 44);
	}
	float GetNumBandsPerOctave() {
		return memory.read<float>(m_addr + 48);
	}
	float GetAnalysisPeriod() {
		return memory.read<float>(m_addr + 52);
	}
	bool GetbDownmixToMono() {
		return memory.read<bool>(m_addr + 56);
	}
	uint8_t  GetFFTSize() {
		return memory.read<uint8_t >(m_addr + 57);
	}
	uint8_t  GetWindowType() {
		return memory.read<uint8_t >(m_addr + 58);
	}
	uint8_t  GetSpectrumType() {
		return memory.read<uint8_t >(m_addr + 59);
	}
	float GetBandWidthStretch() {
		return memory.read<float>(m_addr + 60);
	}
	uint8_t  GetCQTNormalization() {
		return memory.read<uint8_t >(m_addr + 64);
	}
	float GetNoiseFloorDb() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOnsetNRT
{
public:
	UOnsetNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UOnsetNRTSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UOnsetNRTSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULoudnessNRTSettings
{
public:
	ULoudnessNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAnalysisPeriod() {
		return memory.read<float>(m_addr + 40);
	}
	float GetMinimumFrequency() {
		return memory.read<float>(m_addr + 44);
	}
	float GetMaximumFrequency() {
		return memory.read<float>(m_addr + 48);
	}
	uint8_t  GetcurveType() {
		return memory.read<uint8_t >(m_addr + 52);
	}
	float GetNoiseFloorDb() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConstantQNRT
{
public:
	UConstantQNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UConstantQNRTSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UConstantQNRTSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


