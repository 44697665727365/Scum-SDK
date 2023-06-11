#pragma once 
#include <Warning_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass Warning.Warning_C
// Size: 0x2A1(Inherited: 0x270) 
struct UWarning_C : public UWarning
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x270(0x8)
	struct URetainerBox* RetainerBox_1;  // 0x278(0x8)
	struct UTextBlock* Text;  // 0x280(0x8)
	char pad_648_1 : 7;  // 0x288(0x1)
	bool _shouldShake : 1;  // 0x288(0x1)
	char pad_649[3];  // 0x289(0x3)
	float _shakeTime;  // 0x28C(0x4)
	float _shakeLength;  // 0x290(0x4)
	char pad_660_1 : 7;  // 0x294(0x1)
	bool _shouldFade : 1;  // 0x294(0x1)
	char pad_661[3];  // 0x295(0x3)
	float _fadeLength;  // 0x298(0x4)
	float _fadeDelay;  // 0x29C(0x4)
	char pad_672_1 : 7;  // 0x2A0(0x1)
	bool _isReadyForNextMessage : 1;  // 0x2A0(0x1)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Warning.Warning_C.Tick
	void ExecuteUbergraph_Warning(int32_t EntryPoint); // Function Warning.Warning_C.ExecuteUbergraph_Warning
}; 



