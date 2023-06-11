#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct SoundUtilities.SoundVariation
// Size: 0x20(Inherited: 0x0) 
struct FSoundVariation
{
	struct USoundWave* SoundWave;  // 0x0(0x8)
	float ProbabilityWeight;  // 0x8(0x4)
	struct FVector2D VolumeRange;  // 0xC(0x8)
	struct FVector2D PitchRange;  // 0x14(0x8)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
// Size: 0x8(Inherited: 0x0) 
struct FGetBandwidthFromQ
{
	float InQ;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
// Size: 0x8(Inherited: 0x0) 
struct FConvertDecibelsToLinear
{
	float InDecibels;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
// Size: 0x8(Inherited: 0x0) 
struct FGetFrequencyMultiplierFromSemitones
{
	float InPitchSemitones;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
// Size: 0xC(Inherited: 0x0) 
struct FConvertLinearToDecibels
{
	float InLinear;  // 0x0(0x4)
	float InFloor;  // 0x4(0x4)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
// Size: 0x8(Inherited: 0x0) 
struct FGetGainFromMidiVelocity
{
	int32_t InVelocity;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
// Size: 0x10(Inherited: 0x0) 
struct FGetBeatTempo
{
	float BeatsPerMinute;  // 0x0(0x4)
	int32_t BeatMultiplier;  // 0x4(0x4)
	int32_t DivisionsOfWholeNote;  // 0x8(0x4)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
// Size: 0x8(Inherited: 0x0) 
struct FGetFrequencyFromMIDIPitch
{
	int32_t MidiNote;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
// Size: 0x18(Inherited: 0x0) 
struct FGetLinearFrequencyClamped
{
	float InValue;  // 0x0(0x4)
	struct FVector2D InDomain;  // 0x4(0x8)
	struct FVector2D InRange;  // 0xC(0x8)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
// Size: 0x18(Inherited: 0x0) 
struct FGetLogFrequencyClamped
{
	float InValue;  // 0x0(0x4)
	struct FVector2D InDomain;  // 0x4(0x8)
	struct FVector2D InRange;  // 0xC(0x8)
	float ReturnValue;  // 0x14(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
// Size: 0x8(Inherited: 0x0) 
struct FGetMIDIPitchFromFrequency
{
	float Frequency;  // 0x0(0x4)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
// Size: 0xC(Inherited: 0x0) 
struct FGetPitchScaleFromMIDIPitch
{
	int32_t BaseMidiNote;  // 0x0(0x4)
	int32_t TargetMidiNote;  // 0x4(0x4)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
// Size: 0x8(Inherited: 0x0) 
struct FGetQFromBandwidth
{
	float InBandwidth;  // 0x0(0x4)
	float ReturnValue;  // 0x4(0x4)

}; 
