namespace offsets
{
	namespace UReplicationGraph
	{
			constexpr auto ReplicationConnectionManagerClass = 0x28; // Size: 8, Type: UNetReplicationGraphConnection*
			constexpr auto NetDriver = 0x30; // Size: 8, Type: struct UNetDriver*
			constexpr auto Connections = 0x38; // Size: 16, Type: struct TArray<struct UNetReplicationGraphConnection*>
			constexpr auto PendingConnections = 0x48; // Size: 16, Type: struct TArray<struct UNetReplicationGraphConnection*>
			constexpr auto GlobalGraphNodes = 0x98; // Size: 16, Type: struct TArray<struct UReplicationGraphNode*>
			constexpr auto PrepareForReplicationNodes = 0xa8; // Size: 16, Type: struct TArray<struct UReplicationGraphNode*>
	}
} 
