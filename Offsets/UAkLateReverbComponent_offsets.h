namespace offsets
{
	namespace UAkLateReverbComponent
	{
			constexpr auto bEnable = 0x1f8; // Size: 1, Type: char
			constexpr auto SendLevel = 0x1fc; // Size: 4, Type: float
			constexpr auto FadeRate = 0x200; // Size: 4, Type: float
			constexpr auto Priority = 0x204; // Size: 4, Type: float
			constexpr auto AutoAssignAuxBus = 0x208; // Size: 1, Type: bool
			constexpr auto AuxBus = 0x210; // Size: 8, Type: struct UAkAuxBus*
			constexpr auto AuxBusName = 0x218; // Size: 16, Type: struct FString
			constexpr auto AuxBusManual = 0x230; // Size: 8, Type: struct UAkAuxBus*
	}
} 
