#pragma once 
#include <CoreUObject_Structs.h>
 
 
 
// Class CoreUObject.DynamicClass
// Size: 0x2B0(Inherited: 0x230) 
struct UDynamicClass : public UClass
{
	char pad_560[128];  // 0x230(0x80)

}; 



// Class CoreUObject.GCObjectReferencer
// Size: 0x70(Inherited: 0x28) 
struct UGCObjectReferencer : public UObject
{
	char pad_40[72];  // 0x28(0x48)

}; 



// Class CoreUObject.Object
// Size: 0x28(Inherited: 0x0) 
struct UObject
{
	char pad_0[40];  // 0x0(0x28)

	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph
}; 



// Class CoreUObject.Field
// Size: 0x30(Inherited: 0x28) 
struct UField : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class CoreUObject.PropertyWrapper
// Size: 0x30(Inherited: 0x28) 
struct UPropertyWrapper : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class CoreUObject.Package
// Size: 0xA0(Inherited: 0x28) 
struct UPackage : public UObject
{
	char pad_40[120];  // 0x28(0x78)

}; 



// Class CoreUObject.FloatProperty
// Size: 0x70(Inherited: 0x70) 
struct UFloatProperty : public UNumericProperty
{

}; 



// Class CoreUObject.Class
// Size: 0x230(Inherited: 0xB0) 
struct UClass : public UStruct
{
	char pad_176[384];  // 0xB0(0x180)

}; 



// Class CoreUObject.Struct
// Size: 0xB0(Inherited: 0x30) 
struct UStruct : public UField
{
	char pad_48[128];  // 0x30(0x80)

}; 



// Class CoreUObject.Interface
// Size: 0x28(Inherited: 0x28) 
struct UInterface : public UObject
{

}; 



// Class CoreUObject.Int64Property
// Size: 0x70(Inherited: 0x70) 
struct UInt64Property : public UNumericProperty
{

}; 



// Class CoreUObject.TextBuffer
// Size: 0x50(Inherited: 0x28) 
struct UTextBuffer : public UObject
{
	char pad_40[40];  // 0x28(0x28)

}; 



// Class CoreUObject.NameProperty
// Size: 0x70(Inherited: 0x70) 
struct UNameProperty : public UProperty
{

}; 



// Class CoreUObject.InterfaceProperty
// Size: 0x78(Inherited: 0x70) 
struct UInterfaceProperty : public UProperty
{
	char pad_112[8];  // 0x70(0x8)

}; 



// Class CoreUObject.ScriptStruct
// Size: 0xC0(Inherited: 0xB0) 
struct UScriptStruct : public UStruct
{
	char pad_176[16];  // 0xB0(0x10)

}; 



// Class CoreUObject.Function
// Size: 0xE0(Inherited: 0xB0) 
struct UFunction : public UStruct
{
	char pad_176[48];  // 0xB0(0x30)

}; 



// Class CoreUObject.ByteProperty
// Size: 0x78(Inherited: 0x70) 
struct UByteProperty : public UNumericProperty
{
	char pad_112[8];  // 0x70(0x8)

}; 



// Class CoreUObject.DelegateFunction
// Size: 0xE0(Inherited: 0xE0) 
struct UDelegateFunction : public UFunction
{

}; 



// Class CoreUObject.SparseDelegateFunction
// Size: 0xF0(Inherited: 0xE0) 
struct USparseDelegateFunction : public UDelegateFunction
{
	char pad_224[16];  // 0xE0(0x10)

}; 



// Class CoreUObject.WeakObjectProperty
// Size: 0x78(Inherited: 0x78) 
struct UWeakObjectProperty : public UObjectPropertyBase
{

}; 



// Class CoreUObject.ClassProperty
// Size: 0x80(Inherited: 0x78) 
struct UClassProperty : public UObjectProperty
{
	char pad_120[8];  // 0x78(0x8)

}; 



// Class CoreUObject.PackageMap
// Size: 0xE0(Inherited: 0x28) 
struct UPackageMap : public UObject
{
	char pad_40[184];  // 0x28(0xB8)

}; 



// Class CoreUObject.Enum
// Size: 0x60(Inherited: 0x30) 
struct UEnum : public UField
{
	char pad_48[48];  // 0x30(0x30)

}; 



// Class CoreUObject.UInt16Property
// Size: 0x70(Inherited: 0x70) 
struct UUInt16Property : public UNumericProperty
{

}; 



// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x3E8(Inherited: 0x230) 
struct ULinkerPlaceholderClass : public UClass
{
	char pad_560[440];  // 0x230(0x1B8)

}; 



// Class CoreUObject.MulticastSparseDelegateProperty
// Size: 0x78(Inherited: 0x78) 
struct UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{

}; 



// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xF0(Inherited: 0x28) 
struct ULinkerPlaceholderExportObject : public UObject
{
	char pad_40[200];  // 0x28(0xC8)

}; 



// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x298(Inherited: 0xE0) 
struct ULinkerPlaceholderFunction : public UFunction
{
	char pad_224[440];  // 0xE0(0x1B8)

}; 



// Class CoreUObject.MetaData
// Size: 0xC8(Inherited: 0x28) 
struct UMetaData : public UObject
{
	char pad_40[160];  // 0x28(0xA0)

}; 



// Class CoreUObject.ObjectProperty
// Size: 0x78(Inherited: 0x78) 
struct UObjectProperty : public UObjectPropertyBase
{

}; 



// Class CoreUObject.ObjectRedirector
// Size: 0x30(Inherited: 0x28) 
struct UObjectRedirector : public UObject
{
	char pad_40[8];  // 0x28(0x8)

}; 



// Class CoreUObject.UInt64Property
// Size: 0x70(Inherited: 0x70) 
struct UUInt64Property : public UNumericProperty
{

}; 



// Class CoreUObject.SoftClassProperty
// Size: 0x80(Inherited: 0x78) 
struct USoftClassProperty : public USoftObjectProperty
{
	char pad_120[8];  // 0x78(0x8)

}; 



// Class CoreUObject.ArrayProperty
// Size: 0x78(Inherited: 0x70) 
struct UArrayProperty : public UProperty
{
	char pad_112[8];  // 0x70(0x8)

}; 



// Class CoreUObject.EnumProperty
// Size: 0x80(Inherited: 0x70) 
struct UEnumProperty : public UProperty
{
	char pad_112[16];  // 0x70(0x10)

}; 



// Class CoreUObject.Property
// Size: 0x70(Inherited: 0x30) 
struct UProperty : public UField
{
	char pad_48[64];  // 0x30(0x40)

}; 



// Class CoreUObject.ObjectPropertyBase
// Size: 0x78(Inherited: 0x70) 
struct UObjectPropertyBase : public UProperty
{
	char pad_112[8];  // 0x70(0x8)

}; 



// Class CoreUObject.UInt32Property
// Size: 0x70(Inherited: 0x70) 
struct UUInt32Property : public UNumericProperty
{

}; 



// Class CoreUObject.BoolProperty
// Size: 0x78(Inherited: 0x70) 
struct UBoolProperty : public UProperty
{
	char pad_112[8];  // 0x70(0x8)

}; 



// Class CoreUObject.LazyObjectProperty
// Size: 0x78(Inherited: 0x78) 
struct ULazyObjectProperty : public UObjectPropertyBase
{

}; 



// Class CoreUObject.NumericProperty
// Size: 0x70(Inherited: 0x70) 
struct UNumericProperty : public UProperty
{

}; 



// Class CoreUObject.TextProperty
// Size: 0x70(Inherited: 0x70) 
struct UTextProperty : public UProperty
{

}; 



// Class CoreUObject.DelegateProperty
// Size: 0x78(Inherited: 0x70) 
struct UDelegateProperty : public UProperty
{
	char pad_112[8];  // 0x70(0x8)

}; 



// Class CoreUObject.DoubleProperty
// Size: 0x70(Inherited: 0x70) 
struct UDoubleProperty : public UNumericProperty
{

}; 



// Class CoreUObject.IntProperty
// Size: 0x70(Inherited: 0x70) 
struct UIntProperty : public UNumericProperty
{

}; 



// Class CoreUObject.Int8Property
// Size: 0x70(Inherited: 0x70) 
struct UInt8Property : public UNumericProperty
{

}; 



// Class CoreUObject.Int16Property
// Size: 0x70(Inherited: 0x70) 
struct UInt16Property : public UNumericProperty
{

}; 



// Class CoreUObject.MapProperty
// Size: 0x98(Inherited: 0x70) 
struct UMapProperty : public UProperty
{
	char pad_112[40];  // 0x70(0x28)

}; 



// Class CoreUObject.StructProperty
// Size: 0x78(Inherited: 0x70) 
struct UStructProperty : public UProperty
{
	char pad_112[8];  // 0x70(0x8)

}; 



// Class CoreUObject.MulticastDelegateProperty
// Size: 0x78(Inherited: 0x70) 
struct UMulticastDelegateProperty : public UProperty
{
	char pad_112[8];  // 0x70(0x8)

}; 



// Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x78(Inherited: 0x78) 
struct UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{

}; 



// Class CoreUObject.SetProperty
// Size: 0x90(Inherited: 0x70) 
struct USetProperty : public UProperty
{
	char pad_112[32];  // 0x70(0x20)

}; 



// Class CoreUObject.SoftObjectProperty
// Size: 0x78(Inherited: 0x78) 
struct USoftObjectProperty : public UObjectPropertyBase
{

}; 



// Class CoreUObject.StrProperty
// Size: 0x70(Inherited: 0x70) 
struct UStrProperty : public UProperty
{

}; 



// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size: 0x30(Inherited: 0x30) 
struct UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{

}; 



// Class CoreUObject.MulticastDelegatePropertyWrapper
// Size: 0x30(Inherited: 0x30) 
struct UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{

}; 



