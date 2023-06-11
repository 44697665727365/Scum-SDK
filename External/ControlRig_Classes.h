#pragma once 
#include <ControlRig_Structs.h>
 
 
 
class UControlRig
{
public:
	UControlRig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetExecutionType() {
		return memory.read<uint8_t >(m_addr + 69);
	}
	struct URigVM GetVM() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct URigVM(ptr_addr);
	}
	struct FRigHierarchyContainer GetHierarchy() {
		return memory.read<struct FRigHierarchyContainer>(m_addr + 80);
	}
	struct TSoftObjectPtr<UControlRigGizmoLibrary> GetGizmoLibrary() {
		return memory.read<struct TSoftObjectPtr<UControlRigGizmoLibrary>>(m_addr + 952);
	}
	struct TMap<struct FName, struct FCachedPropertyPath> GetInputProperties() {
		return memory.read<struct TMap<struct FName, struct FCachedPropertyPath>>(m_addr + 1008);
	}
	struct TMap<struct FName, struct FCachedPropertyPath> GetOutputProperties() {
		return memory.read<struct TMap<struct FName, struct FCachedPropertyPath>>(m_addr + 1088);
	}
	struct FControlRigDrawContainer GetDrawContainer() {
		return memory.read<struct FControlRigDrawContainer>(m_addr + 1168);
	}
	struct UAnimationDataSourceRegistry GetDataSourceRegistry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UAnimationDataSourceRegistry(ptr_addr);
	}
	struct TArray<struct FName> GetEventQueue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 1224);
	}
	struct FRigInfluenceMapPerEvent GetInfluences() {
		return memory.read<struct FRigInfluenceMapPerEvent>(m_addr + 1360);
	}
	struct UControlRig GetInteractionRig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UControlRig(ptr_addr);
	}
	UControlRig GetInteractionRigClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return UControlRig(ptr_addr);
	}
	struct TArray<struct UAssetUserData> GetAssetUserData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct TArray<struct UAssetUserData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAdditiveControlRig
{
public:
	UAdditiveControlRig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UControlRigSettings
{
public:
	UControlRigSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UControlRigSequence
{
public:
	UControlRigSequence(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UAnimSequence> GetLastExportedToAnimationSequence() {
		return memory.read<struct TSoftObjectPtr<UAnimSequence>>(m_addr + 456);
	}
	struct TSoftObjectPtr<USkeletalMesh> GetLastExportedUsingSkeletalMesh() {
		return memory.read<struct TSoftObjectPtr<USkeletalMesh>>(m_addr + 496);
	}
	float GetLastExportedFrameRate() {
		return memory.read<float>(m_addr + 536);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlRigGizmoLibrary
{
public:
	UControlRigGizmoLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FControlRigGizmoDefinition GetDefaultGizmo() {
		return memory.read<struct FControlRigGizmoDefinition>(m_addr + 48);
	}
	struct TSoftObjectPtr<UMaterial> GetDefaultMaterial() {
		return memory.read<struct TSoftObjectPtr<UMaterial>>(m_addr + 144);
	}
	struct FName GetMaterialColorParameter() {
		return memory.read<struct FName>(m_addr + 184);
	}
	struct TArray<struct FControlRigGizmoDefinition> GetGizmos() {
		return memory.read<struct TArray<struct FControlRigGizmoDefinition>>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlRigAnimInstance
{
public:
	UControlRigAnimInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UControlRigBlueprintGeneratedClass
{
public:
	UControlRigBlueprintGeneratedClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UControlRigValidator
{
public:
	UControlRigValidator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UControlRigValidationPass> GetPasses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UControlRigValidationPass>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlRigComponent
{
public:
	UControlRigComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UControlRig GetControlRigClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return UControlRig(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnPostInitializeDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1112);
	}
	struct FMulticastInlineDelegate GetOnPreSetupDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1128);
	}
	struct FMulticastInlineDelegate GetOnPostSetupDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1144);
	}
	struct FMulticastInlineDelegate GetOnPreUpdateDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1160);
	}
	struct FMulticastInlineDelegate GetOnPostUpdateDelegate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1176);
	}
	struct TArray<struct FControlRigComponentMappedElement> GetMappedElements() {
		return memory.read<struct TArray<struct FControlRigComponentMappedElement>>(m_addr + 1192);
	}
	bool GetbResetTransformBeforeTick() {
		return memory.read<bool>(m_addr + 1208);
	}
	bool GetbResetInitialsBeforeSetup() {
		return memory.read<bool>(m_addr + 1209);
	}
	bool GetbUpdateRigOnTick() {
		return memory.read<bool>(m_addr + 1210);
	}
	bool GetbUpdateInEditor() {
		return memory.read<bool>(m_addr + 1211);
	}
	bool GetbDrawBones() {
		return memory.read<bool>(m_addr + 1212);
	}
	bool GetbShowDebugDrawing() {
		return memory.read<bool>(m_addr + 1213);
	}
	struct UControlRig GetControlRig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UControlRig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AControlRigControlActor
{
public:
	AControlRigControlActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActorToTrack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct AActor(ptr_addr);
	}
	UControlRig GetControlRigClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return UControlRig(ptr_addr);
	}
	bool GetbRefreshOnTick() {
		return memory.read<bool>(m_addr + 560);
	}
	bool GetbIsSelectable() {
		return memory.read<bool>(m_addr + 561);
	}
	struct UMaterialInterface GetMaterialOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FString GetColorParameter() {
		return memory.read<struct FString>(m_addr + 576);
	}
	bool GetbCastShadows() {
		return memory.read<bool>(m_addr + 592);
	}
	struct USceneComponent GetActorRootComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct USceneComponent(ptr_addr);
	}
	struct UControlRig GetControlRig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UControlRig(ptr_addr);
	}
	struct TArray<struct FName> GetControlNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 616);
	}
	struct TArray<struct FTransform> GetGizmoTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 632);
	}
	struct TArray<struct UStaticMeshComponent> GetComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct TArray<struct UStaticMeshComponent>(ptr_addr);
	}
	struct TArray<struct UMaterialInstanceDynamic> GetMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct TArray<struct UMaterialInstanceDynamic>(ptr_addr);
	}
	struct FName GetColorParameterName() {
		return memory.read<struct FName>(m_addr + 680);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneControlRigParameterSection
{
public:
	UMovieSceneControlRigParameterSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRig GetControlRig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UControlRig(ptr_addr);
	}
	UControlRig GetControlRigClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return UControlRig(ptr_addr);
	}
	struct TArray<bool> GetControlsMask() {
		return memory.read<struct TArray<bool>>(m_addr + 344);
	}
	struct FMovieSceneTransformMask GetTransformMask() {
		return memory.read<struct FMovieSceneTransformMask>(m_addr + 360);
	}
	struct FMovieSceneFloatChannel GetWeight() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 368);
	}
	struct TMap<struct FName, struct FChannelMapInfo> GetControlChannelMap() {
		return memory.read<struct TMap<struct FName, struct FChannelMapInfo>>(m_addr + 528);
	}
	struct TArray<struct FEnumParameterNameAndCurve> GetEnumParameterNamesAndCurves() {
		return memory.read<struct TArray<struct FEnumParameterNameAndCurve>>(m_addr + 608);
	}
	struct TArray<struct FIntegerParameterNameAndCurve> GetIntegerParameterNamesAndCurves() {
		return memory.read<struct TArray<struct FIntegerParameterNameAndCurve>>(m_addr + 624);
	}

private:
	std::uint64_t m_addr = 0;
};


class AControlRigGizmoActor
{
public:
	AControlRigGizmoActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetActorRootComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct USceneComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetStaticMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UStaticMeshComponent(ptr_addr);
	}
	uint32_t GetControlRigIndex() {
		return memory.read<uint32_t>(m_addr + 560);
	}
	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 564);
	}
	struct FName GetColorParameterName() {
		return memory.read<struct FName>(m_addr + 572);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbSelected() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbSelectable() {
		return memory.read<char>(m_addr + 580);
	}
	char GetbHovered() {
		return memory.read<char>(m_addr + 580);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlRigLayerInstance
{
public:
	UControlRigLayerInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UControlRigValidationPass
{
public:
	UControlRigValidationPass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UControlRigNumericalValidationPass
{
public:
	UControlRigNumericalValidationPass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCheckControls() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbCheckBones() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetbCheckCurves() {
		return memory.read<bool>(m_addr + 42);
	}
	float GetTranslationPrecision() {
		return memory.read<float>(m_addr + 44);
	}
	float GetRotationPrecision() {
		return memory.read<float>(m_addr + 48);
	}
	float GetScalePrecision() {
		return memory.read<float>(m_addr + 52);
	}
	float GetCurvePrecision() {
		return memory.read<float>(m_addr + 56);
	}
	struct FName GetEventNameA() {
		return memory.read<struct FName>(m_addr + 60);
	}
	struct FName GetEventNameB() {
		return memory.read<struct FName>(m_addr + 68);
	}
	struct FRigPose GetPose() {
		return memory.read<struct FRigPose>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlRigObjectHolder
{
public:
	UControlRigObjectHolder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UControlRigSequencerAnimInstance
{
public:
	UControlRigSequencerAnimInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFKControlRig
{
public:
	UFKControlRig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<bool> GetIsControlActive() {
		return memory.read<struct TArray<bool>>(m_addr + 1616);
	}
	uint8_t  GetApplyMode() {
		return memory.read<uint8_t >(m_addr + 1632);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneControlRigParameterTrack
{
public:
	UMovieSceneControlRigParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRig GetControlRig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UControlRig(ptr_addr);
	}
	struct UMovieSceneSection GetSectionToKey() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UMovieSceneSection(ptr_addr);
	}
	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}
	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


