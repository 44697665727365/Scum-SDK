#pragma once 
#include "SDK.h" 
 
 
// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
// Size: 0x8(Inherited: 0x0) 
struct FGetNormalizedLoudnessAtTime
{
	float InSeconds;  // 0x0(0x4)
	float OutLoudness;  // 0x4(0x4)

}; 
// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
// Size: 0x18(Inherited: 0x0) 
struct FGetChannelConstantQAtTime
{
	float InSeconds;  // 0x0(0x4)
	int32_t InChannel;  // 0x4(0x4)
	struct TArray<float> OutConstantQ;  // 0x8(0x10)

}; 
// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
// Size: 0x30(Inherited: 0x0) 
struct FGetChannelOnsetsBetweenTimes
{
	float InStartSeconds;  // 0x0(0x4)
	float InEndSeconds;  // 0x4(0x4)
	int32_t InChannel;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<float> OutOnsetTimestamps;  // 0x10(0x10)
	struct TArray<float> OutOnsetStrengths;  // 0x20(0x10)

}; 
// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
// Size: 0x8(Inherited: 0x0) 
struct FGetLoudnessAtTime
{
	float InSeconds;  // 0x0(0x4)
	float OutLoudness;  // 0x4(0x4)

}; 
// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
// Size: 0x18(Inherited: 0x0) 
struct FGetNormalizedChannelConstantQAtTime
{
	float InSeconds;  // 0x0(0x4)
	int32_t InChannel;  // 0x4(0x4)
	struct TArray<float> OutConstantQ;  // 0x8(0x10)

}; 
// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
// Size: 0xC(Inherited: 0x0) 
struct FGetChannelLoudnessAtTime
{
	float InSeconds;  // 0x0(0x4)
	int32_t InChannel;  // 0x4(0x4)
	float OutLoudness;  // 0x8(0x4)

}; 
// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
// Size: 0xC(Inherited: 0x0) 
struct FGetNormalizedChannelLoudnessAtTime
{
	float InSeconds;  // 0x0(0x4)
	int32_t InChannel;  // 0x4(0x4)
	float OutLoudness;  // 0x8(0x4)

}; 
// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
// Size: 0x30(Inherited: 0x0) 
struct FGetNormalizedChannelOnsetsBetweenTimes
{
	float InStartSeconds;  // 0x0(0x4)
	float InEndSeconds;  // 0x4(0x4)
	int32_t InChannel;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<float> OutOnsetTimestamps;  // 0x10(0x10)
	struct TArray<float> OutOnsetStrengths;  // 0x20(0x10)

}; 
