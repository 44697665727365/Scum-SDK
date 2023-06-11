#pragma once 
#include "SDK.h" 
 
 
// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterQ
{
	float InQ;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.ModularSynthPresetBankEntry
// Size: 0xF0(Inherited: 0x0) 
struct FModularSynthPresetBankEntry
{
	struct FString PresetName;  // 0x0(0x10)
	struct FModularSynthPreset Preset;  // 0x10(0xE0)

}; 
// DelegateFunction Synthesis.OnFloatValueChangedEvent__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnFloatValueChangedEvent__DelegateSignature
{
	float Value;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
// Size: 0x28(Inherited: 0x0) 
struct FSourceEffectFilterAudioBusModulationSettings
{
	struct UAudioBus* AudioBus;  // 0x0(0x8)
	int32_t EnvelopeFollowerAttackTimeMsec;  // 0x8(0x4)
	int32_t EnvelopeFollowerReleaseTimeMsec;  // 0xC(0x4)
	float EnvelopeGainMultiplier;  // 0x10(0x4)
	uint8_t  FilterParam;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	float MinFrequencyModulation;  // 0x18(0x4)
	float MaxFrequencyModulation;  // 0x1C(0x4)
	float MinResonanceModulation;  // 0x20(0x4)
	float MaxResonanceModulation;  // 0x24(0x4)

}; 
// DelegateFunction Synthesis.OnEnvelopeFollowerUpdate__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnEnvelopeFollowerUpdate__DelegateSignature
{
	float EnvelopeValue;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
// Size: 0x1(Inherited: 0x0) 
struct FSetEnablePolyphony
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnablePolyphony : 1;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetEnableLegato
// Size: 0x1(Inherited: 0x0) 
struct FSetEnableLegato
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool LegatoEnabled : 1;  // 0x0(0x1)

}; 
// Function Synthesis.GranularSynth.SetGrainsPerSecond
// Size: 0x4(Inherited: 0x0) 
struct FSetGrainsPerSecond
{
	float InGrainsPerSecond;  // 0x0(0x4)

}; 
// DelegateFunction Synthesis.OnFloatValueChangedEventSynth2D__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnFloatValueChangedEventSynth2D__DelegateSignature
{
	float Value;  // 0x0(0x4)

}; 
// DelegateFunction Synthesis.OnTableAltered__DelegateSignature
// Size: 0x4(Inherited: 0x0) 
struct FOnTableAltered__DelegateSignature
{
	int32_t TableIndex;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
// Size: 0x8(Inherited: 0x0) 
struct FSetSpreadModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0(0x8)

}; 
// ScriptStruct Synthesis.EpicSynth1Patch
// Size: 0x18(Inherited: 0x0) 
struct FEpicSynth1Patch
{
	uint8_t  PatchSource;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FSynth1PatchCable> PatchCables;  // 0x8(0x10)

}; 
// DelegateFunction Synthesis.OnSamplePlaybackProgress__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnSamplePlaybackProgress__DelegateSignature
{
	float ProgressPercent;  // 0x0(0x4)
	float ProgressTimeSeconds;  // 0x4(0x4)

}; 
// Function Synthesis.GranularSynth.SetAttackTime
// Size: 0x4(Inherited: 0x0) 
struct FSetAttackTime
{
	float AttackTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
// Size: 0x4(Inherited: 0x0) 
struct FNoteOff
{
	float InMidiNote;  // 0x0(0x4)

}; 
// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
// Size: 0x4(Inherited: 0x0) 
struct FSetInterpolationTime
{
	float Time;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.ModularSynthPreset
// Size: 0xE0(Inherited: 0x8) 
struct FModularSynthPreset : public FTableRowBase
{
	char bEnablePolyphony : 1;  // 0x8(0x1)
	char pad_8_1 : 7;  // 0x8(0x1)
	char pad_9[4];  // 0x9(0x4)
	uint8_t  Osc1Type;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	float Osc1Gain;  // 0x10(0x4)
	float Osc1Octave;  // 0x14(0x4)
	float Osc1Semitones;  // 0x18(0x4)
	float Osc1Cents;  // 0x1C(0x4)
	float Osc1PulseWidth;  // 0x20(0x4)
	uint8_t  Osc2Type;  // 0x24(0x1)
	char pad_37[3];  // 0x25(0x3)
	float Osc2Gain;  // 0x28(0x4)
	float Osc2Octave;  // 0x2C(0x4)
	float Osc2Semitones;  // 0x30(0x4)
	float Osc2Cents;  // 0x34(0x4)
	float Osc2PulseWidth;  // 0x38(0x4)
	float Portamento;  // 0x3C(0x4)
	char bEnableUnison : 1;  // 0x40(0x1)
	char bEnableOscillatorSync : 1;  // 0x40(0x1)
	char pad_64_1 : 6;  // 0x40(0x1)
	char pad_65[4];  // 0x41(0x4)
	float Spread;  // 0x44(0x4)
	float Pan;  // 0x48(0x4)
	float LFO1Frequency;  // 0x4C(0x4)
	float LFO1Gain;  // 0x50(0x4)
	uint8_t  LFO1Type;  // 0x54(0x1)
	uint8_t  LFO1Mode;  // 0x55(0x1)
	uint8_t  LFO1PatchType;  // 0x56(0x1)
	char pad_87[1];  // 0x57(0x1)
	float LFO2Frequency;  // 0x58(0x4)
	float LFO2Gain;  // 0x5C(0x4)
	uint8_t  LFO2Type;  // 0x60(0x1)
	uint8_t  LFO2Mode;  // 0x61(0x1)
	uint8_t  LFO2PatchType;  // 0x62(0x1)
	char pad_99[1];  // 0x63(0x1)
	float GainDb;  // 0x64(0x4)
	float AttackTime;  // 0x68(0x4)
	float DecayTime;  // 0x6C(0x4)
	float SustainGain;  // 0x70(0x4)
	float ReleaseTime;  // 0x74(0x4)
	uint8_t  ModEnvPatchType;  // 0x78(0x1)
	uint8_t  ModEnvBiasPatchType;  // 0x79(0x1)
	char pad_122[2];  // 0x7A(0x2)
	char bInvertModulationEnvelope : 1;  // 0x7C(0x1)
	char bInvertModulationEnvelopeBias : 1;  // 0x7C(0x1)
	char pad_124_1 : 6;  // 0x7C(0x1)
	char pad_125[4];  // 0x7D(0x4)
	float ModulationEnvelopeDepth;  // 0x80(0x4)
	float ModulationEnvelopeAttackTime;  // 0x84(0x4)
	float ModulationEnvelopeDecayTime;  // 0x88(0x4)
	float ModulationEnvelopeSustainGain;  // 0x8C(0x4)
	float ModulationEnvelopeReleaseTime;  // 0x90(0x4)
	char bLegato : 1;  // 0x94(0x1)
	char bRetrigger : 1;  // 0x94(0x1)
	char pad_148_1 : 6;  // 0x94(0x1)
	char pad_149[4];  // 0x95(0x4)
	float FilterFrequency;  // 0x98(0x4)
	float FilterQ;  // 0x9C(0x4)
	uint8_t  FilterType;  // 0xA0(0x1)
	uint8_t  FilterAlgorithm;  // 0xA1(0x1)
	char pad_162[2];  // 0xA2(0x2)
	char bStereoDelayEnabled : 1;  // 0xA4(0x1)
	char pad_164_1 : 7;  // 0xA4(0x1)
	char pad_165[4];  // 0xA5(0x4)
	uint8_t  StereoDelayMode;  // 0xA8(0x1)
	char pad_169[3];  // 0xA9(0x3)
	float StereoDelayTime;  // 0xAC(0x4)
	float StereoDelayFeedback;  // 0xB0(0x4)
	float StereoDelayWetlevel;  // 0xB4(0x4)
	float StereoDelayRatio;  // 0xB8(0x4)
	char bChorusEnabled : 1;  // 0xBC(0x1)
	char pad_188_1 : 7;  // 0xBC(0x1)
	char pad_189[4];  // 0xBD(0x4)
	float ChorusDepth;  // 0xC0(0x4)
	float ChorusFeedback;  // 0xC4(0x4)
	float ChorusFrequency;  // 0xC8(0x4)
	char pad_204[4];  // 0xCC(0x4)
	struct TArray<struct FEpicSynth1Patch> Patches;  // 0xD0(0x10)

}; 
// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentPlaybackProgressPercent
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.Synth1PatchCable
// Size: 0x8(Inherited: 0x0) 
struct FSynth1PatchCable
{
	float Depth;  // 0x0(0x4)
	uint8_t  Destination;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Synthesis.ModularSynthComponent.SetLFOFrequency
// Size: 0x8(Inherited: 0x0) 
struct FSetLFOFrequency
{
	int32_t LFOIndex;  // 0x0(0x4)
	float FrequencyHz;  // 0x4(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetDepth
{
	float Depth;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
// Size: 0xF8(Inherited: 0x0) 
struct FAddModularSynthPresetToBankAsset
{
	struct UModularSynthPresetBank* InBank;  // 0x0(0x8)
	struct FModularSynthPreset Preset;  // 0x8(0xE0)
	struct FString PresetName;  // 0xE8(0x10)

}; 
// ScriptStruct Synthesis.PatchId
// Size: 0x4(Inherited: 0x0) 
struct FPatchId
{
	int32_t ID;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
// Size: 0x30(Inherited: 0x0) 
struct FSourceEffectBitCrusherSettings
{
	float CrushedSampleRate;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct FSoundModulationDestinationSettings SampleRateModulation;  // 0x8(0x10)
	float CrushedBits;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct FSoundModulationDestinationSettings BitModulation;  // 0x20(0x10)

}; 
// ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
// Size: 0x8(Inherited: 0x0) 
struct FSourceEffectBitCrusherBaseSettings
{
	float SampleRate;  // 0x0(0x4)
	float BitDepth;  // 0x4(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectChorusSettings
// Size: 0x78(Inherited: 0x0) 
struct FSourceEffectChorusSettings
{
	float Depth;  // 0x0(0x4)
	float Frequency;  // 0x4(0x4)
	float Feedback;  // 0x8(0x4)
	float WetLevel;  // 0xC(0x4)
	float DryLevel;  // 0x10(0x4)
	float Spread;  // 0x14(0x4)
	struct FSoundModulationDestinationSettings DepthModulation;  // 0x18(0x10)
	struct FSoundModulationDestinationSettings FrequencyModulation;  // 0x28(0x10)
	struct FSoundModulationDestinationSettings FeedbackModulation;  // 0x38(0x10)
	struct FSoundModulationDestinationSettings WetModulation;  // 0x48(0x10)
	struct FSoundModulationDestinationSettings DryModulation;  // 0x58(0x10)
	struct FSoundModulationDestinationSettings SpreadModulation;  // 0x68(0x10)

}; 
// ScriptStruct Synthesis.SourceEffectChorusBaseSettings
// Size: 0x18(Inherited: 0x0) 
struct FSourceEffectChorusBaseSettings
{
	float Depth;  // 0x0(0x4)
	float Frequency;  // 0x4(0x4)
	float Feedback;  // 0x8(0x4)
	float WetLevel;  // 0xC(0x4)
	float DryLevel;  // 0x10(0x4)
	float Spread;  // 0x14(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
// Size: 0x4(Inherited: 0x0) 
struct FSetPositionEnvelopeReleaseTime
{
	float InReleaseTimeMsec;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
// Size: 0x28(Inherited: 0x0) 
struct FSourceEffectDynamicsProcessorSettings
{
	uint8_t  DynamicsProcessorType;  // 0x0(0x1)
	uint8_t  PeakMode;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float LookAheadMsec;  // 0x4(0x4)
	float AttackTimeMsec;  // 0x8(0x4)
	float ReleaseTimeMsec;  // 0xC(0x4)
	float ThresholdDb;  // 0x10(0x4)
	float Ratio;  // 0x14(0x4)
	float KneeBandwidthDb;  // 0x18(0x4)
	float InputGainDb;  // 0x1C(0x4)
	float OutputGainDb;  // 0x20(0x4)
	char bStereoLinked : 1;  // 0x24(0x1)
	char bAnalogMode : 1;  // 0x24(0x1)
	char pad_36_1 : 6;  // 0x24(0x1)
	char pad_37[4];  // 0x25(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
// Size: 0xC(Inherited: 0x0) 
struct FSourceEffectEnvelopeFollowerSettings
{
	float AttackTime;  // 0x0(0x4)
	float ReleaseTime;  // 0x4(0x4)
	uint8_t  PeakMode;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bIsAnalogMode : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)

}; 
// Function Synthesis.GranularSynth.SetDecayTime
// Size: 0x4(Inherited: 0x0) 
struct FSetDecayTime
{
	float DecayTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetEnablePatch
// Size: 0x8(Inherited: 0x0) 
struct FSetEnablePatch
{
	struct FPatchId PatchId;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bIsEnabled : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool ReturnValue : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
// Size: 0x10(Inherited: 0x0) 
struct FGetTapIds
{
	struct TArray<int32_t> TapIds;  // 0x0(0x10)

}; 
// ScriptStruct Synthesis.SourceEffectEQSettings
// Size: 0x10(Inherited: 0x0) 
struct FSourceEffectEQSettings
{
	struct TArray<struct FSourceEffectEQBand> EQBands;  // 0x0(0x10)

}; 
// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
// Size: 0x8(Inherited: 0x0) 
struct FSetLFOFrequencyMod
{
	int32_t LFOIndex;  // 0x0(0x4)
	float FrequencyModHz;  // 0x4(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetAmpEnvelopeDepth
{
	float InDepth;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectEQBand
// Size: 0x10(Inherited: 0x0) 
struct FSourceEffectEQBand
{
	float Frequency;  // 0x0(0x4)
	float Bandwidth;  // 0x4(0x4)
	float GainDb;  // 0x8(0x4)
	char bEnabled : 1;  // 0xC(0x1)
	char pad_12_1 : 7;  // 0xC(0x1)
	char pad_13[4];  // 0xD(0x4)

}; 
// ScriptStruct Synthesis.SynthSlateStyle
// Size: 0x10(Inherited: 0x8) 
struct FSynthSlateStyle : public FSlateWidgetStyle
{
	uint8_t  SizeType;  // 0x8(0x1)
	uint8_t  ColorStyle;  // 0x9(0x1)
	char pad_10[6];  // 0xA(0x6)

}; 
// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
// Size: 0x10(Inherited: 0x0) 
struct FSubmixEffectFlexiverbSettings
{
	float PreDelay;  // 0x0(0x4)
	float DecayTime;  // 0x4(0x4)
	float RoomDampening;  // 0x8(0x4)
	int32_t Complexity;  // 0xC(0x4)

}; 
// ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
// Size: 0x24(Inherited: 0x0) 
struct FSubmixEffectStereoDelaySettings
{
	uint8_t  DelayMode;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float DelayTimeMsec;  // 0x4(0x4)
	float Feedback;  // 0x8(0x4)
	float DelayRatio;  // 0xC(0x4)
	float WetLevel;  // 0x10(0x4)
	float DryLevel;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bFilterEnabled : 1;  // 0x18(0x1)
	uint8_t  FilterType;  // 0x19(0x1)
	char pad_26[2];  // 0x1A(0x2)
	float FilterFrequency;  // 0x1C(0x4)
	float FilterQ;  // 0x20(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectFilterSettings
// Size: 0x20(Inherited: 0x0) 
struct FSourceEffectFilterSettings
{
	uint8_t  FilterCircuit;  // 0x0(0x1)
	uint8_t  FilterType;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float CutoffFrequency;  // 0x4(0x4)
	float FilterQ;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;  // 0x10(0x10)

}; 
// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterFrequencyMod
{
	float FilterFrequencyHz;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
// Size: 0xC(Inherited: 0x0) 
struct FSourceEffectFoldbackDistortionSettings
{
	float InputGainDb;  // 0x0(0x4)
	float ThresholdDb;  // 0x4(0x4)
	float OutputGainDb;  // 0x8(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
// Size: 0x8(Inherited: 0x0) 
struct FSourceEffectMidSideSpreaderSettings
{
	float SpreadAmount;  // 0x0(0x4)
	uint8_t  InputMode;  // 0x4(0x1)
	uint8_t  OutputMode;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool bEqualPower : 1;  // 0x6(0x1)
	char pad_7[1];  // 0x7(0x1)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
// Size: 0x1(Inherited: 0x0) 
struct FSetPositionEnvelopeInvert
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInInvert : 1;  // 0x0(0x1)

}; 
// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
// Size: 0x8(Inherited: 0x0) 
struct FSourceEffectWaveShaperSettings
{
	float Amount;  // 0x0(0x4)
	float OutputGainDb;  // 0x4(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectPannerSettings
// Size: 0x8(Inherited: 0x0) 
struct FSourceEffectPannerSettings
{
	float Spread;  // 0x0(0x4)
	float Pan;  // 0x4(0x4)

}; 
// ScriptStruct Synthesis.SubmixEffectFilterSettings
// Size: 0xC(Inherited: 0x0) 
struct FSubmixEffectFilterSettings
{
	uint8_t  FilterType;  // 0x0(0x1)
	uint8_t  FilterAlgorithm;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float FilterFrequency;  // 0x4(0x4)
	float FilterQ;  // 0x8(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectPhaserSettings
// Size: 0x10(Inherited: 0x0) 
struct FSourceEffectPhaserSettings
{
	float WetLevel;  // 0x0(0x4)
	float Frequency;  // 0x4(0x4)
	float Feedback;  // 0x8(0x4)
	uint8_t  LFOType;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool UseQuadraturePhase : 1;  // 0xD(0x1)
	char pad_14[2];  // 0xE(0x2)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
// Size: 0x18(Inherited: 0x0) 
struct FGetKeyFrameValuesForTable
{
	float TableIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<float> ReturnValue;  // 0x8(0x10)

}; 
// ScriptStruct Synthesis.SourceEffectRingModulationSettings
// Size: 0x20(Inherited: 0x0) 
struct FSourceEffectRingModulationSettings
{
	uint8_t  ModulatorType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float Frequency;  // 0x4(0x4)
	float Depth;  // 0x8(0x4)
	float DryLevel;  // 0xC(0x4)
	float WetLevel;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct UAudioBus* AudioBusModulator;  // 0x18(0x8)

}; 
// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
// Size: 0x18(Inherited: 0x0) 
struct FSourceEffectSimpleDelaySettings
{
	float SpeedOfSound;  // 0x0(0x4)
	float DelayAmount;  // 0x4(0x4)
	float DryAmount;  // 0x8(0x4)
	float WetAmount;  // 0xC(0x4)
	float Feedback;  // 0x10(0x4)
	char bDelayBasedOnDistance : 1;  // 0x14(0x1)
	char pad_20_1 : 7;  // 0x14(0x1)
	char pad_21[4];  // 0x15(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetFilterFrequency
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterFrequency
{
	float FilterFrequencyHz;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
// Size: 0x24(Inherited: 0x0) 
struct FSourceEffectStereoDelaySettings
{
	uint8_t  DelayMode;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float DelayTimeMsec;  // 0x4(0x4)
	float Feedback;  // 0x8(0x4)
	float DelayRatio;  // 0xC(0x4)
	float WetLevel;  // 0x10(0x4)
	float DryLevel;  // 0x14(0x4)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bFilterEnabled : 1;  // 0x18(0x1)
	uint8_t  FilterType;  // 0x19(0x1)
	char pad_26[2];  // 0x1A(0x2)
	float FilterFrequency;  // 0x1C(0x4)
	float FilterQ;  // 0x20(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
// Size: 0x1(Inherited: 0x0) 
struct FSetEnableRetrigger
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool RetriggerEnabled : 1;  // 0x0(0x1)

}; 
// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
// Size: 0x28(Inherited: 0x0) 
struct FSubmixEffectConvolutionReverbSettings
{
	float NormalizationVolumeDb;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool bBypass : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bMixInputChannelFormatToImpulseResponseFormat : 1;  // 0x5(0x1)
	char pad_6_1 : 7;  // 0x6(0x1)
	bool bMixReverbOutputToOutputChannelFormat : 1;  // 0x6(0x1)
	char pad_7[1];  // 0x7(0x1)
	float SurroundRearChannelBleedDb;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bInvertRearChannelBleedPhase : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool bSurroundRearChannelFlip : 1;  // 0xD(0x1)
	char pad_14[2];  // 0xE(0x2)
	float SurroundRearChannelBleedAmount;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)
	struct UAudioImpulseResponse* ImpulseResponse;  // 0x18(0x8)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool AllowHArdwareAcceleration : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
// Size: 0x4(Inherited: 0x0) 
struct FSetModEnvSustainGain
{
	float SustainGain;  // 0x0(0x4)

}; 
// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
// Size: 0x1(Inherited: 0x0) 
struct FSetFilterAlgorithm
{
	uint8_t  InAlgorithm;  // 0x0(0x1)

}; 
// ScriptStruct Synthesis.SubmixEffectDelaySettings
// Size: 0xC(Inherited: 0x0) 
struct FSubmixEffectDelaySettings
{
	float MaximumDelayLength;  // 0x0(0x4)
	float InterpolationTime;  // 0x4(0x4)
	float DelayLength;  // 0x8(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetGainDb
// Size: 0x4(Inherited: 0x0) 
struct FSetGainDb
{
	float GainDb;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetChorusFeedback
// Size: 0x4(Inherited: 0x0) 
struct FSetChorusFeedback
{
	float Feedback;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
// Size: 0x20(Inherited: 0x0) 
struct FSubmixEffectMultibandCompressorSettings
{
	uint8_t  DynamicsProcessorType;  // 0x0(0x1)
	uint8_t  PeakMode;  // 0x1(0x1)
	char pad_2[2];  // 0x2(0x2)
	float LookAheadMsec;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bLinkChannels : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bAnalogMode : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool bFourPole : 1;  // 0xA(0x1)
	char pad_11[5];  // 0xB(0x5)
	struct TArray<struct FDynamicsBandSettings> Bands;  // 0x10(0x10)

}; 
// ScriptStruct Synthesis.DynamicsBandSettings
// Size: 0x20(Inherited: 0x0) 
struct FDynamicsBandSettings
{
	float CrossoverTopFrequency;  // 0x0(0x4)
	float AttackTimeMsec;  // 0x4(0x4)
	float ReleaseTimeMsec;  // 0x8(0x4)
	float ThresholdDb;  // 0xC(0x4)
	float Ratio;  // 0x10(0x4)
	float KneeBandwidthDb;  // 0x14(0x4)
	float InputGainDb;  // 0x18(0x4)
	float OutputGainDb;  // 0x1C(0x4)

}; 
// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
// Size: 0x1(Inherited: 0x0) 
struct FSetFilterType
{
	uint8_t  InType;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// Size: 0x4(Inherited: 0x0) 
struct FSetModEnvAttackTime
{
	float AttackTimeMsec;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
// Size: 0x18(Inherited: 0x0) 
struct FSubmixEffectTapDelaySettings
{
	float MaximumDelayLength;  // 0x0(0x4)
	float InterpolationTime;  // 0x4(0x4)
	struct TArray<struct FTapDelayInfo> Taps;  // 0x8(0x10)

}; 
// ScriptStruct Synthesis.TapDelayInfo
// Size: 0x18(Inherited: 0x0) 
struct FTapDelayInfo
{
	uint8_t  TapLineMode;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float DelayLength;  // 0x4(0x4)
	float Gain;  // 0x8(0x4)
	int32_t OutputChannel;  // 0xC(0x4)
	float PanInDegrees;  // 0x10(0x4)
	int32_t TapId;  // 0x14(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetPan
// Size: 0x4(Inherited: 0x0) 
struct FSetPan
{
	float Pan;  // 0x0(0x4)

}; 
// ScriptStruct Synthesis.Synth2DSliderStyle
// Size: 0x2B8(Inherited: 0x8) 
struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush NormalThumbImage;  // 0x8(0x88)
	struct FSlateBrush DisabledThumbImage;  // 0x90(0x88)
	struct FSlateBrush NormalBarImage;  // 0x118(0x88)
	struct FSlateBrush DisabledBarImage;  // 0x1A0(0x88)
	struct FSlateBrush BackgroundImage;  // 0x228(0x88)
	float BarThickness;  // 0x2B0(0x4)
	char pad_692[4];  // 0x2B4(0x4)

}; 
// ScriptStruct Synthesis.SynthKnobStyle
// Size: 0x238(Inherited: 0x8) 
struct FSynthKnobStyle : public FSlateWidgetStyle
{
	struct FSlateBrush LargeKnob;  // 0x8(0x88)
	struct FSlateBrush LargeKnobOverlay;  // 0x90(0x88)
	struct FSlateBrush MediumKnob;  // 0x118(0x88)
	struct FSlateBrush MediumKnobOverlay;  // 0x1A0(0x88)
	float MinValueAngle;  // 0x228(0x4)
	float MaxValueAngle;  // 0x22C(0x4)
	uint8_t  KnobSize;  // 0x230(0x1)
	char pad_561[7];  // 0x231(0x7)

}; 
// Function Synthesis.ModularSynthComponent.CreatePatch
// Size: 0x20(Inherited: 0x0) 
struct FCreatePatch
{
	uint8_t  PatchSource;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FSynth1PatchCable> PatchCables;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bEnableByDefault : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)
	struct FPatchId ReturnValue;  // 0x1C(0x4)

}; 
// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterQMod
{
	float InQ;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
// Size: 0x8(Inherited: 0x0) 
struct FNoteOn
{
	float InMidiNote;  // 0x0(0x4)
	float InVelocity;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetEnableUnison
// Size: 0x1(Inherited: 0x0) 
struct FSetEnableUnison
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool EnableUnison : 1;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetChorusDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetChorusDepth
{
	float Depth;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetChorusEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetChorusEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool EnableChorus : 1;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetChorusFrequency
// Size: 0x4(Inherited: 0x0) 
struct FSetChorusFrequency
{
	float Frequency;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetLFOGain
// Size: 0x8(Inherited: 0x0) 
struct FSetLFOGain
{
	int32_t LFOIndex;  // 0x0(0x4)
	float Gain;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetLFOGainMod
// Size: 0x8(Inherited: 0x0) 
struct FSetLFOGainMod
{
	int32_t LFOIndex;  // 0x0(0x4)
	float GainMod;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetLFOMode
// Size: 0x8(Inherited: 0x0) 
struct FSetLFOMode
{
	int32_t LFOIndex;  // 0x0(0x4)
	uint8_t  LFOMode;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Synthesis.ModularSynthComponent.SetLFOPatch
// Size: 0x8(Inherited: 0x0) 
struct FSetLFOPatch
{
	int32_t LFOIndex;  // 0x0(0x4)
	uint8_t  LFOPatchType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Synthesis.ModularSynthComponent.SetLFOType
// Size: 0x8(Inherited: 0x0) 
struct FSetLFOType
{
	int32_t LFOIndex;  // 0x0(0x4)
	uint8_t  LFOType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
// Size: 0x1(Inherited: 0x0) 
struct FSetModEnvBiasInvert
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInvert : 1;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
// Size: 0x1(Inherited: 0x0) 
struct FSetModEnvBiasPatch
{
	uint8_t  InPatchType;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// Size: 0x4(Inherited: 0x0) 
struct FSetModEnvDecayTime
{
	float DecayTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
// Size: 0x4(Inherited: 0x0) 
struct FGetNumTableEntries
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetModEnvDepth
{
	float Depth;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvInvert
// Size: 0x1(Inherited: 0x0) 
struct FSetModEnvInvert
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInvert : 1;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvPatch
// Size: 0x1(Inherited: 0x0) 
struct FSetModEnvPatch
{
	uint8_t  InPatchType;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
// Size: 0x4(Inherited: 0x0) 
struct FSetModEnvReleaseTime
{
	float Release;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
// Size: 0x8(Inherited: 0x0) 
struct FSetDepthModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0(0x8)

}; 
// Function Synthesis.ModularSynthComponent.SetOscCents
// Size: 0x8(Inherited: 0x0) 
struct FSetOscCents
{
	int32_t OscIndex;  // 0x0(0x4)
	float Cents;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
// Size: 0x4(Inherited: 0x0) 
struct FSetStereoDelayWetlevel
{
	float DelayWetlevel;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// Size: 0x8(Inherited: 0x0) 
struct FSetOscFrequencyMod
{
	int32_t OscIndex;  // 0x0(0x4)
	float OscFreqMod;  // 0x4(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
// Size: 0x1(Inherited: 0x0) 
struct FSetPositionEnvelopeBiasInvert
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInBiasInvert : 1;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetOscGain
// Size: 0x8(Inherited: 0x0) 
struct FSetOscGain
{
	int32_t OscIndex;  // 0x0(0x4)
	float OscGain;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetOscGainMod
// Size: 0x8(Inherited: 0x0) 
struct FSetOscGainMod
{
	int32_t OscIndex;  // 0x0(0x4)
	float OscGainMod;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetOscOctave
// Size: 0x8(Inherited: 0x0) 
struct FSetOscOctave
{
	int32_t OscIndex;  // 0x0(0x4)
	float octave;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// Size: 0x8(Inherited: 0x0) 
struct FSetOscPulsewidth
{
	int32_t OscIndex;  // 0x0(0x4)
	float Pulsewidth;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetOscSemitones
// Size: 0x8(Inherited: 0x0) 
struct FSetOscSemitones
{
	int32_t OscIndex;  // 0x0(0x4)
	float Semitones;  // 0x4(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetOscSync
// Size: 0x1(Inherited: 0x0) 
struct FSetOscSync
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsSynced : 1;  // 0x0(0x1)

}; 
// Function Synthesis.ModularSynthComponent.SetOscType
// Size: 0x8(Inherited: 0x0) 
struct FSetOscType
{
	int32_t OscIndex;  // 0x0(0x4)
	uint8_t  OscType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
// Size: 0x4(Inherited: 0x0) 
struct FSetPosLfoFrequency
{
	float InLfoFrequency;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetPitchBend
// Size: 0x4(Inherited: 0x0) 
struct FSetPitchBend
{
	float PitchBend;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetPortamento
// Size: 0x4(Inherited: 0x0) 
struct FSetPortamento
{
	float Portamento;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetReleaseTime
// Size: 0x4(Inherited: 0x0) 
struct FSetReleaseTime
{
	float ReleaseTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetSpread
// Size: 0x4(Inherited: 0x0) 
struct FSetSpread
{
	float Spread;  // 0x0(0x4)

}; 
// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentPlayheadTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// Size: 0x4(Inherited: 0x0) 
struct FSetStereoDelayFeedback
{
	float DelayFeedback;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// Size: 0x1(Inherited: 0x0) 
struct FSetStereoDelayIsEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool StereoDelayEnabled : 1;  // 0x0(0x1)

}; 
// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
// Size: 0x4(Inherited: 0x0) 
struct FSetScrubTimeWidth
{
	float InScrubTimeWidthSec;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
// Size: 0x1(Inherited: 0x0) 
struct FSetStereoDelayMode
{
	uint8_t  StereoDelayMode;  // 0x0(0x1)

}; 
// Function Synthesis.SynthComponentToneGenerator.SetVolume
// Size: 0x4(Inherited: 0x0) 
struct FSetVolume
{
	float InVolume;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
// Size: 0x4(Inherited: 0x0) 
struct FSetStereoDelayRatio
{
	float DelayRatio;  // 0x0(0x4)

}; 
// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// Size: 0x4(Inherited: 0x0) 
struct FSetStereoDelayTime
{
	float DelayTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.GranularSynth.SetSustainGain
// Size: 0x4(Inherited: 0x0) 
struct FSetSustainGain
{
	float SustainGain;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
// Size: 0x8(Inherited: 0x0) 
struct FSetFrequencyModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0(0x8)

}; 
// Function Synthesis.ModularSynthComponent.SetSynthPreset
// Size: 0xE0(Inherited: 0x0) 
struct FSetSynthPreset
{
	struct FModularSynthPreset SynthPreset;  // 0x0(0xE0)

}; 
// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
// Size: 0x4(Inherited: 0x0) 
struct FSetSampleRate
{
	float SampleRate;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
// Size: 0x8(Inherited: 0x0) 
struct FSetBitModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0(0x8)

}; 
// Function Synthesis.SourceEffectBitCrusherPreset.SetBits
// Size: 0x4(Inherited: 0x0) 
struct FSetBits
{
	float Bits;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
// Size: 0x78(Inherited: 0x0) 
struct FSetModulationSettings
{
	struct FSourceEffectChorusSettings ModulationSettings;  // 0x0(0x78)

}; 
// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
// Size: 0x8(Inherited: 0x0) 
struct FSetSampleRateModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0(0x8)

}; 
// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
// Size: 0x18(Inherited: 0x0) 
struct FSetSettings
{
	struct FSubmixEffectTapDelaySettings InSettings;  // 0x0(0x18)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetDry
// Size: 0x4(Inherited: 0x0) 
struct FSetDry
{
	float DryAmount;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetDryModulator
// Size: 0x8(Inherited: 0x0) 
struct FSetDryModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0(0x8)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetFeedback
// Size: 0x4(Inherited: 0x0) 
struct FSetFeedback
{
	float Feedback;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
// Size: 0x8(Inherited: 0x0) 
struct FSetFeedbackModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0(0x8)

}; 
// Function Synthesis.SynthComponentToneGenerator.SetFrequency
// Size: 0x4(Inherited: 0x0) 
struct FSetFrequency
{
	float InFrequency;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
// Size: 0x4(Inherited: 0x0) 
struct FSetAmpEnvelopeReleaseTime
{
	float InReleaseTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetWet
// Size: 0x4(Inherited: 0x0) 
struct FSetWet
{
	float WetAmount;  // 0x0(0x4)

}; 
// Function Synthesis.SourceEffectChorusPreset.SetWetModulator
// Size: 0x8(Inherited: 0x0) 
struct FSetWetModulator
{
	struct USoundModulatorBase* Modulator;  // 0x0(0x8)

}; 
// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
// Size: 0x8(Inherited: 0x0) 
struct FRegisterEnvelopeFollowerListener
{
	struct UEnvelopeFollowerListener* EnvelopeFollowerListener;  // 0x0(0x8)

}; 
// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
// Size: 0x8(Inherited: 0x0) 
struct FUnregisterEnvelopeFollowerListener
{
	struct UEnvelopeFollowerListener* EnvelopeFollowerListener;  // 0x0(0x8)

}; 
// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
// Size: 0x8(Inherited: 0x0) 
struct FSetImpulseResponse
{
	struct UAudioImpulseResponse* InImpulseResponse;  // 0x0(0x8)

}; 
// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxDelayInMilliseconds
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Synthesis.SubmixEffectDelayPreset.SetDelay
// Size: 0x4(Inherited: 0x0) 
struct FSetDelay
{
	float Length;  // 0x0(0x4)

}; 
// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterCutoffFrequency
{
	float InFrequency;  // 0x0(0x4)

}; 
// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterCutoffFrequencyMod
{
	float InFrequency;  // 0x0(0x4)

}; 
// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
// Size: 0x4(Inherited: 0x0) 
struct FAddTap
{
	int32_t TapId;  // 0x0(0x4)

}; 
// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
// Size: 0x1C(Inherited: 0x0) 
struct FGetTap
{
	int32_t TapId;  // 0x0(0x4)
	struct FTapDelayInfo TapInfo;  // 0x4(0x18)

}; 
// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
// Size: 0x4(Inherited: 0x0) 
struct FRemoveTap
{
	int32_t TapId;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
// Size: 0x4(Inherited: 0x0) 
struct FSetFrequencyPitchBend
{
	float FrequencyOffsetCents;  // 0x0(0x4)

}; 
// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
// Size: 0x1C(Inherited: 0x0) 
struct FSetTap
{
	int32_t TapId;  // 0x0(0x4)
	struct FTapDelayInfo TapInfo;  // 0x4(0x18)

}; 
// Function Synthesis.SynthKnob.GetValue
// Size: 0x4(Inherited: 0x0) 
struct FGetValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Synthesis.Synth2DSlider.SetIndentHandle
// Size: 0x1(Inherited: 0x0) 
struct FSetIndentHandle
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InValue : 1;  // 0x0(0x1)

}; 
// Function Synthesis.SynthKnob.SetLocked
// Size: 0x1(Inherited: 0x0) 
struct FSetLocked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InValue : 1;  // 0x0(0x1)

}; 
// Function Synthesis.Synth2DSlider.SetSliderHandleColor
// Size: 0x10(Inherited: 0x0) 
struct FSetSliderHandleColor
{
	struct FLinearColor InValue;  // 0x0(0x10)

}; 
// Function Synthesis.SynthKnob.SetStepSize
// Size: 0x4(Inherited: 0x0) 
struct FSetStepSize
{
	float InValue;  // 0x0(0x4)

}; 
// Function Synthesis.SynthKnob.SetValue
// Size: 0x4(Inherited: 0x0) 
struct FSetValue
{
	float InValue;  // 0x0(0x4)

}; 
// Function Synthesis.SynthSamplePlayer.GetSampleDuration
// Size: 0x4(Inherited: 0x0) 
struct FGetSampleDuration
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Synthesis.SynthSamplePlayer.IsLoaded
// Size: 0x1(Inherited: 0x0) 
struct FIsLoaded
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function Synthesis.GranularSynth.SetGrainDuration
// Size: 0xC(Inherited: 0x0) 
struct FSetGrainDuration
{
	float BaseDurationMsec;  // 0x0(0x4)
	struct FVector2D DurationRange;  // 0x4(0x8)

}; 
// Function Synthesis.GranularSynth.SetGrainEnvelopeType
// Size: 0x1(Inherited: 0x0) 
struct FSetGrainEnvelopeType
{
	uint8_t  EnvelopeType;  // 0x0(0x1)

}; 
// Function Synthesis.GranularSynth.SetGrainPan
// Size: 0xC(Inherited: 0x0) 
struct FSetGrainPan
{
	float BasePan;  // 0x0(0x4)
	struct FVector2D PanRange;  // 0x4(0x8)

}; 
// Function Synthesis.GranularSynth.SetGrainPitch
// Size: 0xC(Inherited: 0x0) 
struct FSetGrainPitch
{
	float BasePitch;  // 0x0(0x4)
	struct FVector2D PitchRange;  // 0x4(0x8)

}; 
// Function Synthesis.GranularSynth.SetGrainProbability
// Size: 0x4(Inherited: 0x0) 
struct FSetGrainProbability
{
	float InGrainProbability;  // 0x0(0x4)

}; 
// Function Synthesis.GranularSynth.SetGrainVolume
// Size: 0xC(Inherited: 0x0) 
struct FSetGrainVolume
{
	float BaseVolume;  // 0x0(0x4)
	struct FVector2D VolumeRange;  // 0x4(0x8)

}; 
// Function Synthesis.GranularSynth.SetPlaybackSpeed
// Size: 0x4(Inherited: 0x0) 
struct FSetPlaybackSpeed
{
	float InPlayheadRate;  // 0x0(0x4)

}; 
// Function Synthesis.GranularSynth.SetPlayheadTime
// Size: 0xC(Inherited: 0x0) 
struct FSetPlayheadTime
{
	float InPositionSec;  // 0x0(0x4)
	float LerpTimeSec;  // 0x4(0x4)
	uint8_t  SeekType;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function Synthesis.GranularSynth.SetReleaseTimeMsec
// Size: 0x4(Inherited: 0x0) 
struct FSetReleaseTimeMsec
{
	float ReleaseTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthSamplePlayer.SetScrubMode
// Size: 0x1(Inherited: 0x0) 
struct FSetScrubMode
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bScrubMode : 1;  // 0x0(0x1)

}; 
// Function Synthesis.SynthSamplePlayer.SetSoundWave
// Size: 0x8(Inherited: 0x0) 
struct FSetSoundWave
{
	struct USoundWave* InSoundWave;  // 0x0(0x8)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
// Size: 0x8(Inherited: 0x0) 
struct FGetCurveTangent
{
	int32_t TableIndex;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxTableIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
// Size: 0x4(Inherited: 0x0) 
struct FRefreshWaveTable
{
	int32_t Index;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
// Size: 0x4(Inherited: 0x0) 
struct FSetAmpEnvelopeAttackTime
{
	float InAttackTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetAmpEnvelopeBiasDepth
{
	float InDepth;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
// Size: 0x1(Inherited: 0x0) 
struct FSetAmpEnvelopeBiasInvert
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInBiasInvert : 1;  // 0x0(0x1)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
// Size: 0x4(Inherited: 0x0) 
struct FSetAmpEnvelopeDecayTime
{
	float InDecayTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
// Size: 0x1(Inherited: 0x0) 
struct FSetAmpEnvelopeInvert
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInInvert : 1;  // 0x0(0x1)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
// Size: 0x4(Inherited: 0x0) 
struct FSetAmpEnvelopeSustainGain
{
	float InSustainGain;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
// Size: 0xC(Inherited: 0x0) 
struct FSetCurveInterpolationType
{
	uint8_t  InterpolationType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t TableIndex;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
// Size: 0xC(Inherited: 0x0) 
struct FSetCurveTangent
{
	int32_t TableIndex;  // 0x0(0x4)
	float InNewTangent;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
// Size: 0x10(Inherited: 0x0) 
struct FSetCurveValue
{
	int32_t TableIndex;  // 0x0(0x4)
	int32_t KeyframeIndex;  // 0x4(0x4)
	float NewValue;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterEnvelopeAttackTime
{
	float InAttackTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterEnvelopeBiasDepth
{
	float InDepth;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
// Size: 0x1(Inherited: 0x0) 
struct FSetFilterEnvelopeBiasInvert
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInBiasInvert : 1;  // 0x0(0x1)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterEnvelopeDepth
{
	float InDepth;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
// Size: 0x1(Inherited: 0x0) 
struct FSetFilterEnvelopeInvert
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInInvert : 1;  // 0x0(0x1)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterEnvelopenDecayTime
{
	float InDecayTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterEnvelopeReleaseTime
{
	float InReleaseTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
// Size: 0x4(Inherited: 0x0) 
struct FSetFilterEnvelopeSustainGain
{
	float InSustainGain;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
// Size: 0x4(Inherited: 0x0) 
struct FSetFrequencyWithMidiNote
{
	float InMidiNote;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
// Size: 0x4(Inherited: 0x0) 
struct FSetLowPassFilterResonance
{
	float InNewQ;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
// Size: 0x4(Inherited: 0x0) 
struct FSetPositionEnvelopeAttackTime
{
	float InAttackTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetPositionEnvelopeBiasDepth
{
	float InDepth;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
// Size: 0x4(Inherited: 0x0) 
struct FSetPositionEnvelopeDecayTime
{
	float InDecayTimeMsec;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetPositionEnvelopeDepth
{
	float InDepth;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
// Size: 0x4(Inherited: 0x0) 
struct FSetPositionEnvelopeSustainGain
{
	float InSustainGain;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
// Size: 0x4(Inherited: 0x0) 
struct FSetPosLfoDepth
{
	float InLfoDepth;  // 0x0(0x4)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
// Size: 0x1(Inherited: 0x0) 
struct FSetPosLfoType
{
	uint8_t  InLfoType;  // 0x0(0x1)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
// Size: 0x1(Inherited: 0x0) 
struct FSetSustainPedalState
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool InSustainPedalState : 1;  // 0x0(0x1)

}; 
// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
// Size: 0x4(Inherited: 0x0) 
struct FSetWaveTablePosition
{
	float InPosition;  // 0x0(0x4)

}; 
// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
// Size: 0x4(Inherited: 0x0) 
struct FGetCurrentPlaybackProgressTime
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function Synthesis.SynthSamplePlayer.SeekToTime
// Size: 0x8(Inherited: 0x0) 
struct FSeekToTime
{
	float TimeSec;  // 0x0(0x4)
	uint8_t  SeekType;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool bWrap : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function Synthesis.SynthSamplePlayer.SetPitch
// Size: 0x8(Inherited: 0x0) 
struct FSetPitch
{
	float InPitch;  // 0x0(0x4)
	float TimeSec;  // 0x4(0x4)

}; 
// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
// Size: 0x18(Inherited: 0x0) 
struct FGetLinearFrequency
{
	float InLogFrequencyValue;  // 0x0(0x4)
	float InDomainMin;  // 0x4(0x4)
	float InDomainMax;  // 0x8(0x4)
	float InRangeMin;  // 0xC(0x4)
	float InRangeMax;  // 0x10(0x4)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
// Size: 0x18(Inherited: 0x0) 
struct FGetLogFrequency
{
	float InLinearValue;  // 0x0(0x4)
	float InDomainMin;  // 0x4(0x4)
	float InDomainMax;  // 0x8(0x4)
	float InRangeMin;  // 0xC(0x4)
	float InRangeMax;  // 0x10(0x4)
	float ReturnValue;  // 0x14(0x4)

}; 
