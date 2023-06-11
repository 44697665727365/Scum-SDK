#pragma once 
#include "SDK.h" 
 
 
// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
// Size: 0x1(Inherited: 0x0) 
struct FStartLocationServices
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// DelegateFunction LocationServicesBPLibrary.LocationServicesData_OnLocationChanged__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FLocationServicesData_OnLocationChanged__DelegateSignature
{
	struct FLocationServicesData LocationData;  // 0x0(0x18)

}; 
// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
// Size: 0x2(Inherited: 0x0) 
struct FIsLocationAccuracyAvailable
{
	uint8_t  Accuracy;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// ScriptStruct LocationServicesBPLibrary.LocationServicesData
// Size: 0x18(Inherited: 0x0) 
struct FLocationServicesData
{
	float Timestamp;  // 0x0(0x4)
	float Longitude;  // 0x4(0x4)
	float Latitude;  // 0x8(0x4)
	float HorizontalAccuracy;  // 0xC(0x4)
	float VerticalAccuracy;  // 0x10(0x4)
	float Altitude;  // 0x14(0x4)

}; 
// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
// Size: 0x1(Inherited: 0x0) 
struct FAreLocationServicesEnabled
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
// Size: 0x18(Inherited: 0x0) 
struct FGetLastKnownLocation
{
	struct FLocationServicesData ReturnValue;  // 0x0(0x18)

}; 
// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
// Size: 0x8(Inherited: 0x0) 
struct FGetLocationServicesImpl
{
	struct ULocationServicesImpl* ReturnValue;  // 0x0(0x8)

}; 
// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
// Size: 0x10(Inherited: 0x0) 
struct FInitLocationServices
{
	uint8_t  Accuracy;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float UpdateFrequency;  // 0x4(0x4)
	float MinDistanceFilter;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
// Size: 0x1(Inherited: 0x0) 
struct FStopLocationServices
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
