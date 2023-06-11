#pragma once 
#include <BP_MenuPlayerController_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C
// Size: 0x588(Inherited: 0x570) 
struct ABP_MenuPlayerController_C : public AMenuPlayerController
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x570(0x8)
	struct APrisoner* Prisoner;  // 0x578(0x8)
	char pad_1408_1 : 7;  // 0x580(0x1)
	bool _isMouseDown : 1;  // 0x580(0x1)
	char pad_1409[3];  // 0x581(0x3)
	float PrisonerRotationSpeed;  // 0x584(0x4)

	void ReceiveTick(float DeltaSeconds); // Function BP_MenuPlayerController.BP_MenuPlayerController_C.ReceiveTick
	void InputComponent_MouseReleased(); // Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MouseReleased
	void InputComponent_MousePressed(); // Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MousePressed
	void ExecuteUbergraph_BP_MenuPlayerController(int32_t EntryPoint); // Function BP_MenuPlayerController.BP_MenuPlayerController_C.ExecuteUbergraph_BP_MenuPlayerController
}; 



