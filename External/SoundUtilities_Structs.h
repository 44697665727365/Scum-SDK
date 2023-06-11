#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSoundVariation
{
public:
	FSoundVariation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundWave GetSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundWave(ptr_addr);
	}
	float GetProbabilityWeight() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector2D GetVolumeRange() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	struct FVector2D GetPitchRange() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBandwidthFromQ
{
public:
	FGetBandwidthFromQ(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInQ() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FConvertDecibelsToLinear
{
public:
	FConvertDecibelsToLinear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDecibels() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFrequencyMultiplierFromSemitones
{
public:
	FGetFrequencyMultiplierFromSemitones(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPitchSemitones() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FConvertLinearToDecibels
{
public:
	FConvertLinearToDecibels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLinear() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInFloor() {
		return memory.read<float>(m_addr + 4);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGainFromMidiVelocity
{
public:
	FGetGainFromMidiVelocity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInVelocity() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBeatTempo
{
public:
	FGetBeatTempo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBeatsPerMinute() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetBeatMultiplier() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetDivisionsOfWholeNote() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFrequencyFromMIDIPitch
{
public:
	FGetFrequencyFromMIDIPitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMidiNote() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLinearFrequencyClamped
{
public:
	FGetLinearFrequencyClamped(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector2D GetInDomain() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}
	struct FVector2D GetInRange() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLogFrequencyClamped
{
public:
	FGetLogFrequencyClamped(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector2D GetInDomain() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}
	struct FVector2D GetInRange() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMIDIPitchFromFrequency
{
public:
	FGetMIDIPitchFromFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrequency() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPitchScaleFromMIDIPitch
{
public:
	FGetPitchScaleFromMIDIPitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBaseMidiNote() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTargetMidiNote() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetQFromBandwidth
{
public:
	FGetQFromBandwidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInBandwidth() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};