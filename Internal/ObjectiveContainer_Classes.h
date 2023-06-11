#pragma once 
#include <ObjectiveContainer_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass ObjectiveContainer.ObjectiveContainer_C
// Size: 0x290(Inherited: 0x278) 
struct UObjectiveContainer_C : public UObjectivesContainerWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x278(0x8)
	struct FMulticastInlineDelegate ObjectiveCompleted;  // 0x280(0x10)

	void Construct(); // Function ObjectiveContainer.ObjectiveContainer_C.Construct
	void ExecuteUbergraph_ObjectiveContainer(int32_t EntryPoint); // Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer
	void ObjectiveCompleted__DelegateSignature(); // Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature
}; 



