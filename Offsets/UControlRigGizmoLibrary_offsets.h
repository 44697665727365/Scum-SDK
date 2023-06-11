namespace offsets
{
	namespace UControlRigGizmoLibrary
	{
			constexpr auto DefaultGizmo = 0x30; // Size: 96, Type: struct FControlRigGizmoDefinition
			constexpr auto DefaultMaterial = 0x90; // Size: 40, Type: struct TSoftObjectPtr<UMaterial>
			constexpr auto MaterialColorParameter = 0xb8; // Size: 8, Type: struct FName
			constexpr auto Gizmos = 0xc0; // Size: 16, Type: struct TArray<struct FControlRigGizmoDefinition>
	}
} 
