namespace offsets
{
	namespace UNetReplicationGraphConnection
	{
			constexpr auto NetConnection = 0x28; // Size: 8, Type: struct UNetConnection*
			constexpr auto DebugActor = 0x170; // Size: 8, Type: struct AReplicationGraphDebugActor*
			constexpr auto LastGatherLocations = 0x188; // Size: 16, Type: struct TArray<struct FLastLocationGatherInfo>
			constexpr auto ConnectionGraphNodes = 0x1a0; // Size: 16, Type: struct TArray<struct UReplicationGraphNode*>
			constexpr auto TearOffNode = 0x1b0; // Size: 8, Type: struct UReplicationGraphNode_TearOff_ForConnection*
	}
} 
