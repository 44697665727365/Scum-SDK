#pragma once 
#include <AudioMixer_Structs.h>
 
 
 
class USynthComponent
{
public:
	USynthComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbAutoDestroy() {
		return memory.read<char>(m_addr + 504);
	}
	char GetbStopWhenOwnerDestroyed() {
		return memory.read<char>(m_addr + 504);
	}
	char GetbAllowSpatialization() {
		return memory.read<char>(m_addr + 504);
	}
	char GetbOverrideAttenuation() {
		return memory.read<char>(m_addr + 504);
	}
	char GetbEnableBusSends() {
		return memory.read<char>(m_addr + 508);
	}
	char GetbEnableBaseSubmix() {
		return memory.read<char>(m_addr + 508);
	}
	char GetbEnableSubmixSends() {
		return memory.read<char>(m_addr + 508);
	}
	struct USoundAttenuation GetAttenuationSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct USoundAttenuation(ptr_addr);
	}
	struct FSoundAttenuationSettings GetAttenuationOverrides() {
		return memory.read<struct FSoundAttenuationSettings>(m_addr + 520);
	}
	struct USoundConcurrency GetConcurrencySettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct USoundConcurrency(ptr_addr);
	}
	struct TSet<struct USoundConcurrency> GetConcurrencySet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct TSet<struct USoundConcurrency>(ptr_addr);
	}
	struct USoundClass GetSoundClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct USoundClass(ptr_addr);
	}
	struct USoundEffectSourcePresetChain GetSourceEffectChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct USoundEffectSourcePresetChain(ptr_addr);
	}
	struct USoundSubmixBase GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct USoundSubmixBase(ptr_addr);
	}
	struct TArray<struct FSoundSubmixSendInfo> GetSoundSubmixSends() {
		return memory.read<struct TArray<struct FSoundSubmixSendInfo>>(m_addr + 1560);
	}
	struct TArray<struct FSoundSourceBusSendInfo> GetBusSends() {
		return memory.read<struct TArray<struct FSoundSourceBusSendInfo>>(m_addr + 1576);
	}
	struct TArray<struct FSoundSourceBusSendInfo> GetPreEffectBusSends() {
		return memory.read<struct TArray<struct FSoundSourceBusSendInfo>>(m_addr + 1592);
	}
	char GetbIsUISound() {
		return memory.read<char>(m_addr + 1608);
	}
	char GetbIsPreviewSound() {
		return memory.read<char>(m_addr + 1608);
	}
	int32_t GetEnvelopeFollowerAttackTime() {
		return memory.read<int32_t>(m_addr + 1612);
	}
	int32_t GetEnvelopeFollowerReleaseTime() {
		return memory.read<int32_t>(m_addr + 1616);
	}
	struct FMulticastInlineDelegate GetOnAudioEnvelopeValue() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1624);
	}
	struct USynthSound GetSynth() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1672);
		return struct USynthSound(ptr_addr);
	}
	struct UAudioComponent GetAudioComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1680);
		return struct UAudioComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAudioGenerator
{
public:
	UAudioGenerator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioMixerBlueprintLibrary
{
public:
	UAudioMixerBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UQuartzSubsystem
{
public:
	UQuartzSubsystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UQuartzClockHandle
{
public:
	UQuartzClockHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UQuartzSubsystem GetQuartzSubsystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 360);
		return struct UQuartzSubsystem(ptr_addr);
	}
	struct UWorld GetWorldPtr() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 392);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectDynamicsProcessorPreset
{
public:
	USubmixEffectDynamicsProcessorPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectDynamicsProcessorSettings GetSettings() {
		return memory.read<struct FSubmixEffectDynamicsProcessorSettings>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectSubmixEQPreset
{
public:
	USubmixEffectSubmixEQPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectSubmixEQSettings GetSettings() {
		return memory.read<struct FSubmixEffectSubmixEQSettings>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectReverbPreset
{
public:
	USubmixEffectReverbPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectReverbSettings GetSettings() {
		return memory.read<struct FSubmixEffectReverbSettings>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class USynthSound
{
public:
	USynthSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USynthComponent GetOwningSynthComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct USynthComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


