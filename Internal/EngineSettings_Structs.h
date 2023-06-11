#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct EngineSettings.AutoCompleteCommand
// Size: 0x28(Inherited: 0x0) 
struct FAutoCompleteCommand
{
	struct FString Command;  // 0x0(0x10)
	struct FString desc;  // 0x10(0x10)
	char pad_32[8];  // 0x20(0x8)

}; 
// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// Size: 0x8(Inherited: 0x0) 
struct FGetGameMapsSettings
{
	struct UGameMapsSettings* ReturnValue;  // 0x0(0x8)

}; 
// ScriptStruct EngineSettings.GameModeName
// Size: 0x28(Inherited: 0x0) 
struct FGameModeName
{
	struct FString Name;  // 0x0(0x10)
	struct FSoftClassPath GameMode;  // 0x10(0x18)

}; 
// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// Size: 0x1(Inherited: 0x0) 
struct FGetSkipAssigningGamepadToPlayer1
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// Size: 0x1(Inherited: 0x0) 
struct FSetSkipAssigningGamepadToPlayer1
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bSkipFirstPlayer : 1;  // 0x0(0x1)

}; 
