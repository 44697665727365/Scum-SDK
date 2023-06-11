#pragma once 
#include <SlateCore_Structs.h>
 
 
 
// Class SlateCore.FontProviderInterface
// Size: 0x28(Inherited: 0x28) 
struct UFontProviderInterface : public UInterface
{

}; 



// Class SlateCore.FontFaceInterface
// Size: 0x28(Inherited: 0x28) 
struct UFontFaceInterface : public UInterface
{

}; 



// Class SlateCore.FontBulkData
// Size: 0x78(Inherited: 0x28) 
struct UFontBulkData : public UObject
{
	char pad_40[80];  // 0x28(0x50)

}; 



// Class SlateCore.SlateWidgetStyleAsset
// Size: 0x30(Inherited: 0x28) 
struct USlateWidgetStyleAsset : public UObject
{
	struct USlateWidgetStyleContainerBase* CustomStyle;  // 0x28(0x8)

}; 



// Class SlateCore.SlateTypes
// Size: 0x28(Inherited: 0x28) 
struct USlateTypes : public UObject
{

}; 



// Class SlateCore.SlateWidgetStyleContainerBase
// Size: 0x30(Inherited: 0x28) 
struct USlateWidgetStyleContainerBase : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class SlateCore.SlateWidgetStyleContainerInterface
// Size: 0x28(Inherited: 0x28) 
struct USlateWidgetStyleContainerInterface : public UInterface
{

}; 



