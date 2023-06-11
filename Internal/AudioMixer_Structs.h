#pragma once 
#include "SDK.h" 
 
 
// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// Size: 0x18(Inherited: 0x0) 
struct FSetBypassSourceEffectChainEntry
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundEffectSourcePresetChain* PresetChain;  // 0x8(0x8)
	int32_t EntryIndex;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bBypassed : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)

}; 
// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Size: 0xC(Inherited: 0x0) 
struct FSubmixEffectDynamicProcessorFilterSettings
{
	char bEnabled : 1;  // 0x0(0x1)
	char pad_0_1 : 7;  // 0x0(0x1)
	char pad_1[4];  // 0x1(0x4)
	float Cutoff;  // 0x4(0x4)
	float GainDb;  // 0x8(0x4)

}; 
// DelegateFunction AudioMixer.OnSynthEnvelopeValue__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnSynthEnvelopeValue__DelegateSignature
{
	float EnvelopeValue;  // 0x0(0x4)

}; 
// Function AudioMixer.QuartzClockHandle.PauseClock
// Size: 0x10(Inherited: 0x0) 
struct FPauseClock
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UQuartzClockHandle* ClockHandle;  // 0x8(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
// Size: 0x10(Inherited: 0x0) 
struct FGetMillisecondsPerTick
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.SynthComponent.SetOutputToBusOnly
// Size: 0x1(Inherited: 0x0) 
struct FSetOutputToBusOnly
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInOutputToBusOnly : 1;  // 0x0(0x1)

}; 
// Function AudioMixer.SynthComponent.IsPlaying
// Size: 0x1(Inherited: 0x0) 
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
// Size: 0x8(Inherited: 0x0) 
struct FTrimAudioCache
{
	float InMegabytesToFree;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// DelegateFunction AudioMixer.OnSoundLoadComplete__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnSoundLoadComplete__DelegateSignature
{
	struct USoundWave* LoadedSoundWave;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool WasCancelled : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x60(Inherited: 0x0) 
struct FSubmixEffectDynamicsProcessorSettings
{
	uint8_t  DynamicsProcessorType;  // 0x0(0x1)
	uint8_t  PeakMode;  // 0x1(0x1)
	uint8_t  LinkMode;  // 0x2(0x1)
	char pad_3[1];  // 0x3(0x1)
	float InputGainDb;  // 0x4(0x4)
	float ThresholdDb;  // 0x8(0x4)
	float Ratio;  // 0xC(0x4)
	float KneeBandwidthDb;  // 0x10(0x4)
	float LookAheadMsec;  // 0x14(0x4)
	float AttackTimeMsec;  // 0x18(0x4)
	float ReleaseTimeMsec;  // 0x1C(0x4)
	uint8_t  KeySource;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)
	struct UAudioBus* ExternalAudioBus;  // 0x28(0x8)
	struct USoundSubmix* ExternalSubmix;  // 0x30(0x8)
	char bChannelLinked : 1;  // 0x38(0x1)
	char bAnalogMode : 1;  // 0x38(0x1)
	char bBypass : 1;  // 0x38(0x1)
	char bKeyAudition : 1;  // 0x38(0x1)
	char pad_56_1 : 4;  // 0x38(0x1)
	char pad_57[4];  // 0x39(0x4)
	float KeyGainDb;  // 0x3C(0x4)
	float OutputGainDb;  // 0x40(0x4)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;  // 0x44(0xC)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;  // 0x50(0xC)
	char pad_92[4];  // 0x5C(0x4)

}; 
// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size: 0x10(Inherited: 0x0) 
struct FSubmixEffectSubmixEQSettings
{
	struct TArray<struct FSubmixEffectEQBand> EQBands;  // 0x0(0x10)

}; 
// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
// Size: 0x38(Inherited: 0x0) 
struct FSetMillisecondsPerTick
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8(0xC)
	struct FDelegate Delegate;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)
	struct UQuartzClockHandle* ClockHandle;  // 0x28(0x8)
	float MillisecondsPerTick;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetLowPassFilterEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InLowPassFilterEnabled : 1;  // 0x0(0x1)

}; 
// ScriptStruct AudioMixer.SubmixEffectEQBand
// Size: 0x10(Inherited: 0x0) 
struct FSubmixEffectEQBand
{
	float Frequency;  // 0x0(0x4)
	float Bandwidth;  // 0x4(0x4)
	float GainDb;  // 0x8(0x4)
	char bEnabled : 1;  // 0xC(0x1)
	char pad_12_1 : 7;  // 0xC(0x1)
	char pad_13[4];  // 0xD(0x4)

}; 
// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x40(Inherited: 0x0) 
struct FSubmixEffectReverbSettings
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bBypassEarlyReflections : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReflectionsDelay;  // 0x4(0x4)
	float GainHF;  // 0x8(0x4)
	float ReflectionsGain;  // 0xC(0x4)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool bBypassLateReflections : 1;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float LateDelay;  // 0x14(0x4)
	float DecayTime;  // 0x18(0x4)
	float Density;  // 0x1C(0x4)
	float Diffusion;  // 0x20(0x4)
	float AirAbsorptionGainHF;  // 0x24(0x4)
	float DecayHFRatio;  // 0x28(0x4)
	float LateGain;  // 0x2C(0x4)
	float Gain;  // 0x30(0x4)
	float WetLevel;  // 0x34(0x4)
	float DryLevel;  // 0x38(0x4)
	char pad_60_1 : 7;  // 0x3C(0x1)
	bool bBypass : 1;  // 0x3C(0x1)
	char pad_61[3];  // 0x3D(0x3)

}; 
// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
// Size: 0x30(Inherited: 0x0) 
struct FResetTransportQuantized
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FQuartzQuantizationBoundary InQuantizationBoundary;  // 0x8(0xC)
	struct FDelegate InDelegate;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)
	struct UQuartzClockHandle* ClockHandle;  // 0x28(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
// Size: 0x38(Inherited: 0x0) 
struct FSetSecondsPerTick
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8(0xC)
	struct FDelegate Delegate;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)
	struct UQuartzClockHandle* ClockHandle;  // 0x28(0x8)
	float SecondsPerTick;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
// Size: 0x4(Inherited: 0x0) 
struct FSetLowPassFilterFrequency
{
	float InLowPassFilterFrequency;  // 0x0(0x4)

}; 
// Function AudioMixer.SynthComponent.SetSubmixSend
// Size: 0x10(Inherited: 0x0) 
struct FSetSubmixSend
{
	struct USoundSubmixBase* Submix;  // 0x0(0x8)
	float SendLevel;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// Size: 0x4(Inherited: 0x0) 
struct FSetVolumeMultiplier
{
	float VolumeMultiplier;  // 0x0(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// Size: 0x10(Inherited: 0x0) 
struct FAddMasterSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x8(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
// Size: 0x38(Inherited: 0x0) 
struct FSetBeatsPerMinute
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8(0xC)
	struct FDelegate Delegate;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)
	struct UQuartzClockHandle* ClockHandle;  // 0x28(0x8)
	float BeatsPerMinute;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// Size: 0x20(Inherited: 0x0) 
struct FStartAnalyzingOutput
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SubmixToAnalyze;  // 0x8(0x8)
	uint8_t  FFTSize;  // 0x10(0x1)
	uint8_t  InterpolationMethod;  // 0x11(0x1)
	uint8_t  WindowType;  // 0x12(0x1)
	char pad_19[1];  // 0x13(0x1)
	float HopSize;  // 0x14(0x4)
	uint8_t  SpectrumType;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
// Size: 0x18(Inherited: 0x0) 
struct FRemoveSubmixEffectAtIndex
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SoundSubmix;  // 0x8(0x8)
	int32_t SubmixChainIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// Size: 0x20(Inherited: 0x0) 
struct FAddSourceEffectToPresetChain
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundEffectSourcePresetChain* PresetChain;  // 0x8(0x8)
	struct FSourceEffectChainEntry Entry;  // 0x10(0x10)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// Size: 0x20(Inherited: 0x0) 
struct FAddSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SoundSubmix;  // 0x8(0x8)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x10(0x8)
	int32_t ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// Size: 0x8(Inherited: 0x0) 
struct FClearMasterSubmixEffects
{
	struct UObject* WorldContextObject;  // 0x0(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// Size: 0x10(Inherited: 0x0) 
struct FResumeRecordingOutput
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SubmixToPause;  // 0x8(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
// Size: 0x18(Inherited: 0x0) 
struct FClearSubmixEffectChainOverride
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SoundSubmix;  // 0x8(0x8)
	float FadeTimeSec;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
// Size: 0x18(Inherited: 0x0) 
struct FGetCurrentTimestamp
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FQuartzTransportTimeStamp ReturnValue;  // 0x8(0x10)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
// Size: 0x18(Inherited: 0x0) 
struct FRemoveSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SoundSubmix;  // 0x8(0x8)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x10(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
// Size: 0x10(Inherited: 0x0) 
struct FClearSubmixEffects
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SoundSubmix;  // 0x8(0x8)

}; 
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// Size: 0x8(Inherited: 0x0) 
struct FSetExternalSubmix
{
	struct USoundSubmix* Submix;  // 0x0(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// Size: 0x30(Inherited: 0x0) 
struct FGetMagnitudeForFrequencies
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct TArray<float> Frequencies;  // 0x8(0x10)
	struct TArray<float> Magnitudes;  // 0x18(0x10)
	struct USoundSubmix* SubmixToAnalyze;  // 0x28(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// Size: 0x18(Inherited: 0x0) 
struct FStartRecordingOutput
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ExpectedDuration;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct USoundSubmix* SubmixToRecord;  // 0x10(0x8)

}; 
// Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
// Size: 0x1(Inherited: 0x0) 
struct FIsQuartzEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// Size: 0x18(Inherited: 0x0) 
struct FGetNumberOfEntriesInSourceEffectChain
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundEffectSourcePresetChain* PresetChain;  // 0x8(0x8)
	int32_t ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// Size: 0x30(Inherited: 0x0) 
struct FGetPhaseForFrequencies
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct TArray<float> Frequencies;  // 0x8(0x10)
	struct TArray<float> Phases;  // 0x18(0x10)
	struct USoundSubmix* SubmixToAnalyze;  // 0x28(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
// Size: 0x10(Inherited: 0x0) 
struct FGetBeatsPerMinute
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
// Size: 0x18(Inherited: 0x0) 
struct FIsAudioBusActive
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAudioBus* AudioBus;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
// Size: 0x28(Inherited: 0x0) 
struct FMakeFullSpectrumSpectralAnalysisBandSettings
{
	int32_t InNumBands;  // 0x0(0x4)
	float InMinimumFrequency;  // 0x4(0x4)
	float InMaximumFrequency;  // 0x8(0x4)
	int32_t InAttackTimeMsec;  // 0xC(0x4)
	int32_t InReleaseTimeMsec;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // 0x18(0x10)

}; 
// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
// Size: 0x10(Inherited: 0x0) 
struct FGetThirtySecondNotesPerMinute
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
// Size: 0x28(Inherited: 0x0) 
struct FMakeMusicalSpectralAnalysisBandSettings
{
	int32_t InNumSemitones;  // 0x0(0x4)
	uint8_t  InStartingMusicalNote;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	int32_t InStartingOctave;  // 0x8(0x4)
	int32_t InAttackTimeMsec;  // 0xC(0x4)
	int32_t InReleaseTimeMsec;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // 0x18(0x10)

}; 
// Function AudioMixer.QuartzClockHandle.ResumeClock
// Size: 0x10(Inherited: 0x0) 
struct FResumeClock
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UQuartzClockHandle* ClockHandle;  // 0x8(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
// Size: 0x20(Inherited: 0x0) 
struct FMakePresetSpectralAnalysisBandSettings
{
	uint8_t  InBandPresetType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t InNumBands;  // 0x4(0x4)
	int32_t InAttackTimeMsec;  // 0x8(0x4)
	int32_t InReleaseTimeMsec;  // 0xC(0x4)
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // 0x10(0x10)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
// Size: 0x10(Inherited: 0x0) 
struct FPauseRecordingOutput
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SubmixToPause;  // 0x8(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
// Size: 0x8(Inherited: 0x0) 
struct FPrimeSoundCueForPlayback
{
	struct USoundCue* SoundCue;  // 0x0(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// Size: 0x18(Inherited: 0x0) 
struct FPrimeSoundForPlayback
{
	struct USoundWave* SoundWave;  // 0x0(0x8)
	struct FDelegate OnLoadCompletion;  // 0x8(0x10)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// Size: 0x18(Inherited: 0x0) 
struct FRemoveSourceEffectFromPresetChain
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundEffectSourcePresetChain* PresetChain;  // 0x8(0x8)
	int32_t EntryIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
// Size: 0x10(Inherited: 0x0) 
struct FGetSecondsPerTick
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// Size: 0x10(Inherited: 0x0) 
struct FRemoveMasterSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x8(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// Size: 0x18(Inherited: 0x0) 
struct FRemoveSubmixEffectPreset
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SoundSubmix;  // 0x8(0x8)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x10(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// Size: 0x18(Inherited: 0x0) 
struct FRemoveSubmixEffectPresetAtIndex
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SoundSubmix;  // 0x8(0x8)
	int32_t SubmixChainIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// Size: 0x20(Inherited: 0x0) 
struct FReplaceSoundEffectSubmix
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* InSoundSubmix;  // 0x8(0x8)
	int32_t SubmixChainIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x18(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
// Size: 0x20(Inherited: 0x0) 
struct FReplaceSubmixEffect
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* InSoundSubmix;  // 0x8(0x8)
	int32_t SubmixChainIndex;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // 0x18(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
// Size: 0x28(Inherited: 0x0) 
struct FSetSubmixEffectChainOverride
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SoundSubmix;  // 0x8(0x8)
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain;  // 0x10(0x10)
	float FadeTimeSec;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
// Size: 0x10(Inherited: 0x0) 
struct FStartAudioBus
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAudioBus* AudioBus;  // 0x8(0x8)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// Size: 0x10(Inherited: 0x0) 
struct FStopAnalyzingOutput
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct USoundSubmix* SubmixToStopAnalyzing;  // 0x8(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.ResetTransport
// Size: 0x18(Inherited: 0x0) 
struct FResetTransport
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FDelegate InDelegate;  // 0x8(0x10)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
// Size: 0x10(Inherited: 0x0) 
struct FStopAudioBus
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UAudioBus* AudioBus;  // 0x8(0x8)

}; 
// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
// Size: 0x20(Inherited: 0x0) 
struct FGetDurationOfQuantizationTypeInSeconds
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName ClockName;  // 0x8(0x8)
	uint8_t  QuantizationType;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	float Multiplier;  // 0x14(0x4)
	float ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// Size: 0x48(Inherited: 0x0) 
struct FStopRecordingOutput
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	uint8_t  ExportType;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct FString Name;  // 0x10(0x10)
	struct FString Path;  // 0x20(0x10)
	struct USoundSubmix* SubmixToRecord;  // 0x30(0x8)
	struct USoundWave* ExistingSoundWaveToOverwrite;  // 0x38(0x8)
	struct USoundWave* ReturnValue;  // 0x40(0x8)

}; 
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
// Size: 0x10(Inherited: 0x0) 
struct FGetGameThreadToAudioRenderThreadAverageLatency
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
// Size: 0x10(Inherited: 0x0) 
struct FGetEstimatedRunTime
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.DeleteClockByName
// Size: 0x10(Inherited: 0x0) 
struct FDeleteClockByName
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName ClockName;  // 0x8(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
// Size: 0x10(Inherited: 0x0) 
struct FGetTicksPerSecond
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.IsClockRunning
// Size: 0x18(Inherited: 0x0) 
struct FIsClockRunning
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName ClockName;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AudioMixer.QuartzClockHandle.StartClock
// Size: 0x10(Inherited: 0x0) 
struct FStartClock
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UQuartzClockHandle* ClockHandle;  // 0x8(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
// Size: 0x38(Inherited: 0x0) 
struct FSetThirtySecondNotesPerMinute
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8(0xC)
	struct FDelegate Delegate;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)
	struct UQuartzClockHandle* ClockHandle;  // 0x28(0x8)
	float ThirtySecondsNotesPerMinute;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
// Size: 0x38(Inherited: 0x0) 
struct FSetTicksPerSecond
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // 0x8(0xC)
	struct FDelegate Delegate;  // 0x14(0x10)
	char pad_36[4];  // 0x24(0x4)
	struct UQuartzClockHandle* ClockHandle;  // 0x28(0x8)
	float TicksPerSecond;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AudioMixer.QuartzClockHandle.StartOtherClock
// Size: 0x30(Inherited: 0x0) 
struct FStartOtherClock
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName OtherClockName;  // 0x8(0x8)
	struct FQuartzQuantizationBoundary InQuantizationBoundary;  // 0x10(0xC)
	struct FDelegate InDelegate;  // 0x1C(0x10)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function AudioMixer.QuartzClockHandle.StopClock
// Size: 0x18(Inherited: 0x0) 
struct FStopClock
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool CancelPendingEvents : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct UQuartzClockHandle* ClockHandle;  // 0x10(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
// Size: 0x20(Inherited: 0x0) 
struct FSubscribeToAllQuantizationEvents
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FDelegate OnQuantizationEvent;  // 0x8(0x10)
	struct UQuartzClockHandle* ClockHandle;  // 0x18(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
// Size: 0x28(Inherited: 0x0) 
struct FSubscribeToQuantizationEvent
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	uint8_t  InQuantizationBoundary;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)
	struct FDelegate OnQuantizationEvent;  // 0xC(0x10)
	char pad_28[4];  // 0x1C(0x4)
	struct UQuartzClockHandle* ClockHandle;  // 0x20(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
// Size: 0x10(Inherited: 0x0) 
struct FUnsubscribeFromAllTimeDivisions
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UQuartzClockHandle* ClockHandle;  // 0x8(0x8)

}; 
// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
// Size: 0x18(Inherited: 0x0) 
struct FUnsubscribeFromTimeDivision
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	uint8_t  InQuantizationBoundary;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)
	struct UQuartzClockHandle* ClockHandle;  // 0x10(0x8)

}; 
// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
// Size: 0x8(Inherited: 0x0) 
struct FSetAudioBus
{
	struct UAudioBus* AudioBus;  // 0x0(0x8)

}; 
// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// Size: 0x40(Inherited: 0x0) 
struct FSetSettings
{
	struct FSubmixEffectReverbSettings InSettings;  // 0x0(0x40)

}; 
// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// Size: 0x10(Inherited: 0x0) 
struct FSetSettingsWithReverbEffect
{
	struct UReverbEffect* InReverbEffect;  // 0x0(0x8)
	float WetLevel;  // 0x8(0x4)
	float DryLevel;  // 0xC(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.CreateNewClock
// Size: 0x40(Inherited: 0x0) 
struct FCreateNewClock
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName ClockName;  // 0x8(0x8)
	struct FQuartzClockSettings InSettings;  // 0x10(0x20)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bOverrideSettingsIfClockExists : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bUseAudioEngineClockManager : 1;  // 0x31(0x1)
	char pad_50[6];  // 0x32(0x6)
	struct UQuartzClockHandle* ReturnValue;  // 0x38(0x8)

}; 
// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
// Size: 0x10(Inherited: 0x0) 
struct FDeleteClockByHandle
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UQuartzClockHandle* InClockHandle;  // 0x8(0x8)

}; 
// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
// Size: 0x18(Inherited: 0x0) 
struct FGetEstimatedClockRunTime
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName InClockName;  // 0x8(0x8)
	float ReturnValue;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.DoesClockExist
// Size: 0x18(Inherited: 0x0) 
struct FDoesClockExist
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName ClockName;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
// Size: 0x4(Inherited: 0x0) 
struct FGetAudioRenderThreadToGameThreadAverageLatency
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
// Size: 0x4(Inherited: 0x0) 
struct FGetAudioRenderThreadToGameThreadMaxLatency
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
// Size: 0x4(Inherited: 0x0) 
struct FGetAudioRenderThreadToGameThreadMinLatency
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
// Size: 0x20(Inherited: 0x0) 
struct FGetCurrentClockTimestamp
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName InClockName;  // 0x8(0x8)
	struct FQuartzTransportTimeStamp ReturnValue;  // 0x10(0x10)

}; 
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
// Size: 0x10(Inherited: 0x0) 
struct FGetGameThreadToAudioRenderThreadMaxLatency
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
// Size: 0x10(Inherited: 0x0) 
struct FGetGameThreadToAudioRenderThreadMinLatency
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.GetHandleForClock
// Size: 0x18(Inherited: 0x0) 
struct FGetHandleForClock
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FName ClockName;  // 0x8(0x8)
	struct UQuartzClockHandle* ReturnValue;  // 0x10(0x8)

}; 
// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
// Size: 0x10(Inherited: 0x0) 
struct FGetRoundTripAverageLatency
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
// Size: 0x10(Inherited: 0x0) 
struct FGetRoundTripMaxLatency
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
// Size: 0x10(Inherited: 0x0) 
struct FGetRoundTripMinLatency
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float ReturnValue;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
