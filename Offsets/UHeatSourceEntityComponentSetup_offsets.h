namespace offsets
{
	namespace UHeatSourceEntityComponentSetup
	{
			constexpr auto ResourceType = 0x48; // Size: 8, Type: UGameResourceType*
			constexpr auto MaxTemperature = 0x50; // Size: 4, Type: float
			constexpr auto InnerRadius = 0x54; // Size: 4, Type: float
			constexpr auto OuterRadius = 0x58; // Size: 4, Type: float
			constexpr auto AutoFindResourceSupplier = 0x5c; // Size: 1, Type: bool
			constexpr auto ResourceSupplierName = 0x60; // Size: 8, Type: struct FName
			constexpr auto ResourceSupplierUsageRateVsHeatIntensity = 0x68; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto MaxHeatIntensityVsSupplierResourceAmountRatio = 0xf0; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
