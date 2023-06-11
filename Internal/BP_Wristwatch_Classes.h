#pragma once 
#include <BP_Wristwatch_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C
// Size: 0x2C8(Inherited: 0x2C0) 
struct ABP_Wristwatch_C : public AWristwatch
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x2C0(0x8)

	void ReceiveBeginPlay(); // Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function BP_Wristwatch.BP_Wristwatch_C.ReceiveTick
	void SetDisplayBrightness(float Value); // Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness
	void ExecuteUbergraph_BP_Wristwatch(int32_t EntryPoint); // Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch
}; 



