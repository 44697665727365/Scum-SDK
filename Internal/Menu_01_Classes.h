#pragma once 
#include <Menu_01_Structs.h>
 
 
 
// BlueprintGeneratedClass Menu_01.Menu_01_C
// Size: 0x260(Inherited: 0x228) 
struct AMenu_01_C : public ALevelScriptActor
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x228(0x8)
	struct UMenuPlayAsDroneOverlayWidget_C* Drone Overlay Widget;  // 0x230(0x8)
	struct AAkAmbientSound* AkAmbientSound_1_ExecuteUbergraph_Menu_01_RefProperty;  // 0x238(0x8)
	struct AActor* FollowsCursorActor_ExecuteUbergraph_Menu_01_RefProperty;  // 0x240(0x8)
	struct ABP_Prisoner_C* BP_Prisoner_4136_ExecuteUbergraph_Menu_01_RefProperty;  // 0x248(0x8)
	struct ASceneCapture2D* HeadCapture_ExecuteUbergraph_Menu_01_RefProperty;  // 0x250(0x8)
	struct APostProcessVolume* PostProcessVolume_Drone_EdGraph_0_RefProperty;  // 0x258(0x8)

	void UpdateDroneVisual(); // Function Menu_01.Menu_01_C.UpdateDroneVisual
	void InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1(struct FKey Key); // Function Menu_01.Menu_01_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
	void ReceiveTick(float DeltaSeconds); // Function Menu_01.Menu_01_C.ReceiveTick
	void ReceiveBeginPlay(); // Function Menu_01.Menu_01_C.ReceiveBeginPlay
	void ExecuteUbergraph_Menu_01(int32_t EntryPoint); // Function Menu_01.Menu_01_C.ExecuteUbergraph_Menu_01
}; 



