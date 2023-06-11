#pragma once 
#include <Synthesis_Structs.h>
 
 
 
// Class Synthesis.ModularSynthPresetBank
// Size: 0x38(Inherited: 0x28) 
struct UModularSynthPresetBank : public UObject
{
	struct TArray<struct FModularSynthPresetBankEntry> Presets;  // 0x28(0x10)

}; 



// Class Synthesis.Synth2DSlider
// Size: 0x478(Inherited: 0x108) 
struct USynth2DSlider : public UWidget
{
	float ValueX;  // 0x108(0x4)
	float ValueY;  // 0x10C(0x4)
	struct FDelegate ValueXDelegate;  // 0x110(0x10)
	struct FDelegate ValueYDelegate;  // 0x120(0x10)
	struct FSynth2DSliderStyle WidgetStyle;  // 0x130(0x2B8)
	struct FLinearColor SliderHandleColor;  // 0x3E8(0x10)
	char pad_1016_1 : 7;  // 0x3F8(0x1)
	bool IndentHandle : 1;  // 0x3F8(0x1)
	char pad_1017_1 : 7;  // 0x3F9(0x1)
	bool Locked : 1;  // 0x3F9(0x1)
	char pad_1018[2];  // 0x3FA(0x2)
	float StepSize;  // 0x3FC(0x4)
	char pad_1024_1 : 7;  // 0x400(0x1)
	bool IsFocusable : 1;  // 0x400(0x1)
	char pad_1025[7];  // 0x401(0x7)
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // 0x408(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // 0x418(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // 0x428(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // 0x438(0x10)
	struct FMulticastInlineDelegate OnValueChangedX;  // 0x448(0x10)
	struct FMulticastInlineDelegate OnValueChangedY;  // 0x458(0x10)
	char pad_1128[16];  // 0x468(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue
}; 



// Class Synthesis.ModularSynthLibrary
// Size: 0x28(Inherited: 0x28) 
struct UModularSynthLibrary : public UBlueprintFunctionLibrary
{

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
}; 



// Class Synthesis.ModularSynthComponent
// Size: 0xD80(Inherited: 0x6C0) 
struct UModularSynthComponent : public USynthComponent
{
	int32_t VoiceCount;  // 0x6C0(0x4)
	char pad_1732[1724];  // 0x6C4(0x6BC)

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
	void SetStereoDelayMode(uint8_t  StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan
	void SetOscType(int32_t OscIndex, uint8_t  OscType); // Function Synthesis.ModularSynthComponent.SetOscType
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth
	void SetOscOctave(int32_t OscIndex, float octave); // Function Synthesis.ModularSynthComponent.SetOscOctave
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	void SetModEnvPatch(uint8_t  InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
	void SetModEnvBiasPatch(uint8_t  InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
	void SetLFOType(int32_t LFOIndex, uint8_t  LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType
	void SetLFOPatch(int32_t LFOIndex, uint8_t  LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch
	void SetLFOMode(int32_t LFOIndex, uint8_t  LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb
	void SetFilterType(uint8_t  FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency
	void SetFilterAlgorithm(uint8_t  FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff
	struct FPatchId CreatePatch(uint8_t  PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch
}; 



// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0xB0(Inherited: 0x68) 
struct USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
	char pad_104[56];  // 0x68(0x38)
	struct FSubmixEffectFlexiverbSettings Settings;  // 0xA0(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
}; 



// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0xA0(Inherited: 0x68) 
struct USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
	char pad_104[48];  // 0x68(0x30)
	struct FSourceEffectMidSideSpreaderSettings Settings;  // 0x98(0x8)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
}; 



// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0xF0(Inherited: 0x68) 
struct USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
	char pad_104[88];  // 0x68(0x58)
	struct FSourceEffectBitCrusherSettings Settings;  // 0xC0(0x30)

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
	void SetSampleRateModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	void SetSampleRate(float SampleRate); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	void SetBits(float Bits); // Function Synthesis.SourceEffectBitCrusherPreset.SetBits
	void SetBitModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
}; 



// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0xA8(Inherited: 0x68) 
struct USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
	char pad_104[52];  // 0x68(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings;  // 0x9C(0xC)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
}; 



// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xE0(Inherited: 0x68) 
struct USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
	char pad_104[80];  // 0x68(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings;  // 0xB8(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
}; 



// Class Synthesis.SourceEffectChorusPreset
// Size: 0x180(Inherited: 0x68) 
struct USourceEffectChorusPreset : public USoundEffectSourcePreset
{
	char pad_104[160];  // 0x68(0xA0)
	struct FSourceEffectChorusSettings Settings;  // 0x108(0x78)

	void SetWetModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetWetModulator
	void SetWet(float WetAmount); // Function Synthesis.SourceEffectChorusPreset.SetWet
	void SetSpreadModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	void SetSpread(float Spread); // Function Synthesis.SourceEffectChorusPreset.SetSpread
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings); // Function Synthesis.SourceEffectChorusPreset.SetSettings
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings); // Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
	void SetFrequencyModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	void SetFrequency(float Frequency); // Function Synthesis.SourceEffectChorusPreset.SetFrequency
	void SetFeedbackModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	void SetFeedback(float Feedback); // Function Synthesis.SourceEffectChorusPreset.SetFeedback
	void SetDryModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDryModulator
	void SetDry(float DryAmount); // Function Synthesis.SourceEffectChorusPreset.SetDry
	void SetDepthModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
	void SetDepth(float Depth); // Function Synthesis.SourceEffectChorusPreset.SetDepth
}; 



// Class Synthesis.SubmixEffectStereoDelayPreset
// Size: 0xD8(Inherited: 0x68) 
struct USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
	char pad_104[76];  // 0x68(0x4C)
	struct FSubmixEffectStereoDelaySettings Settings;  // 0xB4(0x24)

	void SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings); // Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
}; 



// Class Synthesis.EnvelopeFollowerListener
// Size: 0xD0(Inherited: 0xB0) 
struct UEnvelopeFollowerListener : public UActorComponent
{
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate;  // 0xB0(0x10)
	char pad_192[16];  // 0xC0(0x10)

}; 



// Class Synthesis.SourceEffectFilterPreset
// Size: 0xD0(Inherited: 0x68) 
struct USourceEffectFilterPreset : public USoundEffectSourcePreset
{
	char pad_104[72];  // 0x68(0x48)
	struct FSourceEffectFilterSettings Settings;  // 0xB0(0x20)

	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings
}; 



// Class Synthesis.SourceEffectEQPreset
// Size: 0xB0(Inherited: 0x68) 
struct USourceEffectEQPreset : public USoundEffectSourcePreset
{
	char pad_104[56];  // 0x68(0x38)
	struct FSourceEffectEQSettings Settings;  // 0xA0(0x10)

	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings
}; 



// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0xA8(Inherited: 0x68) 
struct USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
	char pad_104[52];  // 0x68(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings;  // 0x9C(0xC)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
}; 



// Class Synthesis.SourceEffectPannerPreset
// Size: 0xA0(Inherited: 0x68) 
struct USourceEffectPannerPreset : public USoundEffectSourcePreset
{
	char pad_104[48];  // 0x68(0x30)
	struct FSourceEffectPannerSettings Settings;  // 0x98(0x8)

	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings
}; 



// Class Synthesis.SourceEffectPhaserPreset
// Size: 0xB0(Inherited: 0x68) 
struct USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
	char pad_104[56];  // 0x68(0x38)
	struct FSourceEffectPhaserSettings Settings;  // 0xA0(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings
}; 



// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0xD0(Inherited: 0x68) 
struct USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
	char pad_104[72];  // 0x68(0x48)
	struct FSourceEffectRingModulationSettings Settings;  // 0xB0(0x20)

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings
}; 



// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170(Inherited: 0x28) 
struct UMonoWaveTableSynthPreset : public UObject
{
	struct FString PresetName;  // 0x28(0x10)
	char bLockKeyframesToGridBool : 1;  // 0x38(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	char pad_57[4];  // 0x39(0x4)
	int32_t LockKeyframesToGrid;  // 0x3C(0x4)
	int32_t WaveTableResolution;  // 0x40(0x4)
	char pad_68[4];  // 0x44(0x4)
	struct TArray<struct FRuntimeFloatCurve> WaveTable;  // 0x48(0x10)
	char bNormalizeWaveTables : 1;  // 0x58(0x1)
	char pad_88_1 : 7;  // 0x58(0x1)
	char pad_89[280];  // 0x59(0x118)

}; 



// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0xC0(Inherited: 0x68) 
struct USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
	char pad_104[64];  // 0x68(0x40)
	struct FSourceEffectSimpleDelaySettings Settings;  // 0xA8(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
}; 



// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0xD8(Inherited: 0x68) 
struct USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
	char pad_104[76];  // 0x68(0x4C)
	struct FSourceEffectStereoDelaySettings Settings;  // 0xB4(0x24)

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
}; 



// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0xA0(Inherited: 0x68) 
struct USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
	char pad_104[48];  // 0x68(0x30)
	struct FSourceEffectWaveShaperSettings Settings;  // 0x98(0x8)

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
}; 



// Class Synthesis.AudioImpulseResponse
// Size: 0x58(Inherited: 0x28) 
struct UAudioImpulseResponse : public UObject
{
	struct TArray<float> ImpulseResponse;  // 0x28(0x10)
	int32_t NumChannels;  // 0x38(0x4)
	int32_t SampleRate;  // 0x3C(0x4)
	float NormalizationVolumeDb;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bTrueStereo : 1;  // 0x44(0x1)
	char pad_69[3];  // 0x45(0x3)
	struct TArray<float> IRData;  // 0x48(0x10)

}; 



// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xF0(Inherited: 0x68) 
struct USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
	struct UAudioImpulseResponse* ImpulseResponse;  // 0x68(0x8)
	struct FSubmixEffectConvolutionReverbSettings Settings;  // 0x70(0x28)
	uint8_t  BlockSize;  // 0x98(0x1)
	char pad_153_1 : 7;  // 0x99(0x1)
	bool bEnableHardwareAcceleration : 1;  // 0x99(0x1)
	char pad_154[86];  // 0x9A(0x56)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
}; 



// Class Synthesis.SubmixEffectDelayPreset
// Size: 0xB8(Inherited: 0x68) 
struct USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
	char pad_104[52];  // 0x68(0x34)
	struct FSubmixEffectDelaySettings Settings;  // 0x9C(0xC)
	struct FSubmixEffectDelaySettings DynamicSettings;  // 0xA8(0xC)
	char pad_180[4];  // 0xB4(0x4)

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
}; 



// Class Synthesis.SubmixEffectFilterPreset
// Size: 0xA8(Inherited: 0x68) 
struct USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
	char pad_104[52];  // 0x68(0x34)
	struct FSubmixEffectFilterSettings Settings;  // 0x9C(0xC)

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings
	void SetFilterType(uint8_t  InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	void SetFilterAlgorithm(uint8_t  InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
}; 



// Class Synthesis.SubmixEffectMultibandCompressorPreset
// Size: 0xD0(Inherited: 0x68) 
struct USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
	char pad_104[72];  // 0x68(0x48)
	struct FSubmixEffectMultibandCompressorSettings Settings;  // 0xB0(0x20)

	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
}; 



// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xD8(Inherited: 0x68) 
struct USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
	char pad_104[64];  // 0x68(0x40)
	struct FSubmixEffectTapDelaySettings Settings;  // 0xA8(0x18)
	char pad_192[24];  // 0xC0(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap
}; 



// Class Synthesis.GranularSynth
// Size: 0xA80(Inherited: 0x6C0) 
struct UGranularSynth : public USynthComponent
{
	struct USoundWave* GranulatedSoundWave;  // 0x6C0(0x8)
	char pad_1736[952];  // 0x6C8(0x3B8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, uint8_t  SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan
	void SetGrainEnvelopeType(uint8_t  EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime
}; 



// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xE00(Inherited: 0x6C0) 
struct USynthComponentMonoWaveTable : public USynthComponent
{
	struct FMulticastInlineDelegate OnTableAltered;  // 0x6C0(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged;  // 0x6D0(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset;  // 0x6E0(0x8)
	char pad_1768[1816];  // 0x6E8(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	void SetPosLfoType(uint8_t  InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	bool SetCurveInterpolationType(uint8_t  InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
}; 



// Class Synthesis.SynthComponentToneGenerator
// Size: 0x6E0(Inherited: 0x6C0) 
struct USynthComponentToneGenerator : public USynthComponent
{
	float Frequency;  // 0x6C0(0x4)
	float Volume;  // 0x6C4(0x4)
	char pad_1736[24];  // 0x6C8(0x18)

	void SetVolume(float InVolume); // Function Synthesis.SynthComponentToneGenerator.SetVolume
	void SetFrequency(float InFrequency); // Function Synthesis.SynthComponentToneGenerator.SetFrequency
}; 



// Class Synthesis.SynthSamplePlayer
// Size: 0x7F0(Inherited: 0x6C0) 
struct USynthSamplePlayer : public USynthComponent
{
	struct USoundWave* SoundWave;  // 0x6C0(0x8)
	struct FMulticastInlineDelegate OnSampleLoaded;  // 0x6C8(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress;  // 0x6D8(0x10)
	char pad_1768[264];  // 0x6E8(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch
	void SeekToTime(float TimeSec, uint8_t  SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
}; 



// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
}; 



// Class Synthesis.SynthKnob
// Size: 0x400(Inherited: 0x108) 
struct USynthKnob : public UWidget
{
	float Value;  // 0x108(0x4)
	float StepSize;  // 0x10C(0x4)
	float MouseSpeed;  // 0x110(0x4)
	float MouseFineTuneSpeed;  // 0x114(0x4)
	char ShowTooltipInfo : 1;  // 0x118(0x1)
	char pad_280_1 : 7;  // 0x118(0x1)
	char pad_281[8];  // 0x119(0x8)
	struct FText ParameterName;  // 0x120(0x18)
	struct FText ParameterUnits;  // 0x138(0x18)
	struct FDelegate ValueDelegate;  // 0x150(0x10)
	struct FSynthKnobStyle WidgetStyle;  // 0x160(0x238)
	char pad_920_1 : 7;  // 0x398(0x1)
	bool Locked : 1;  // 0x398(0x1)
	char pad_921_1 : 7;  // 0x399(0x1)
	bool IsFocusable : 1;  // 0x399(0x1)
	char pad_922[6];  // 0x39A(0x6)
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // 0x3A0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // 0x3B0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // 0x3C0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // 0x3D0(0x10)
	struct FMulticastInlineDelegate OnValueChanged;  // 0x3E0(0x10)
	char pad_1008[16];  // 0x3F0(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked
	float GetValue(); // Function Synthesis.SynthKnob.GetValue
}; 



