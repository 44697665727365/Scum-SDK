#pragma once 
#include <SoundUtilities_Structs.h>
 
 
 
// Class SoundUtilities.SoundSimple
// Size: 0x188(Inherited: 0x170) 
struct USoundSimple : public USoundBase
{
	struct TArray<struct FSoundVariation> Variations;  // 0x170(0x10)
	struct USoundWave* SoundWave;  // 0x180(0x8)

}; 



// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{

	float GetQFromBandwidth(float InBandwidth); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
	float GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
	int32_t GetMIDIPitchFromFrequency(float Frequency); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
	float GetLogFrequencyClamped(float InValue, struct FVector2D& InDomain, struct FVector2D& InRange); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
	float GetLinearFrequencyClamped(float InValue, struct FVector2D& InDomain, struct FVector2D& InRange); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
	float GetGainFromMidiVelocity(int32_t InVelocity); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
	float GetFrequencyMultiplierFromSemitones(float InPitchSemitones); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
	float GetFrequencyFromMIDIPitch(int32_t MidiNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
	float GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
	float GetBandwidthFromQ(float InQ); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
	float ConvertLinearToDecibels(float InLinear, float InFloor); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
	float ConvertDecibelsToLinear(float InDecibels); // Function SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
}; 



