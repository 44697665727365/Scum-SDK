#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FControlRigComponentDelegate__DelegateSignature
{
public:
	FControlRigComponentDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRigComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRigComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetBoneInitialTransform
{
public:
	FRigUnit_SetBoneInitialTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 208);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 209);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 212);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigIOSettings
{
public:
	FControlRigIOSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUpdatePose() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbUpdateCurves() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigElementKeyCollection
{
public:
	FRigElementKeyCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetControlFloat
{
public:
	FGetControlFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigValidationContext
{
public:
	FControlRigValidationContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlTransform
{
public:
	FRigUnit_SetControlTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 112);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 176);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHovered
{
public:
	FSetHovered(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInHovered() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ControlRig_ExternalSource
{
public:
	FAnimNode_ControlRig_ExternalSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UControlRig> GetControlRig() {
		return memory.read<struct TWeakObjectPtr<UControlRig>>(m_addr + 368);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MultiplyQuaternion
{
public:
	FRigUnit_MultiplyQuaternion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ControlRigBase
{
public:
	FAnimNode_ControlRigBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetSource() {
		return memory.read<struct FPoseLink>(m_addr + 88);
	}
	struct TMap<struct FName, uint16_t> GetControlRigBoneMapping() {
		return memory.read<struct TMap<struct FName, uint16_t>>(m_addr + 104);
	}
	struct TMap<struct FName, uint16_t> GetControlRigCurveMapping() {
		return memory.read<struct TMap<struct FName, uint16_t>>(m_addr + 184);
	}
	struct TMap<struct FName, uint16_t> GetInputToCurveMappingUIDs() {
		return memory.read<struct TMap<struct FName, uint16_t>>(m_addr + 264);
	}
	struct TWeakObjectPtr<UNodeMappingContainer> GetNodeMappingContainer() {
		return memory.read<struct TWeakObjectPtr<UNodeMappingContainer>>(m_addr + 344);
	}
	struct FControlRigIOSettings GetInputSettings() {
		return memory.read<struct FControlRigIOSettings>(m_addr + 352);
	}
	struct FControlRigIOSettings GetOutputSettings() {
		return memory.read<struct FControlRigIOSettings>(m_addr + 354);
	}
	bool GetbExecute() {
		return memory.read<bool>(m_addr + 356);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigBone
{
public:
	FRigBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParentName() {
		return memory.read<struct FName>(m_addr + 24);
	}
	int32_t GetParentIndex() {
		return memory.read<int32_t>(m_addr + 32);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FTransform GetGlobalTransform() {
		return memory.read<struct FTransform>(m_addr + 96);
	}
	struct FTransform GetLocalTransform() {
		return memory.read<struct FTransform>(m_addr + 144);
	}
	struct TArray<int32_t> GetDependents() {
		return memory.read<struct TArray<int32_t>>(m_addr + 192);
	}
	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ToSwingAndTwist
{
public:
	FRigUnit_ToSwingAndTwist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetInput() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector GetTwistAxis() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FQuat GetSwing() {
		return memory.read<struct FQuat>(m_addr + 48);
	}
	struct FQuat GetTwist() {
		return memory.read<struct FQuat>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorMakeBezierFourPoint
{
public:
	FRigUnit_MathVectorMakeBezierFourPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCRFourPointBezier GetBezier() {
		return memory.read<struct FCRFourPointBezier>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCRSimContainer
{
public:
	FCRSimContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeStep() {
		return memory.read<float>(m_addr + 8);
	}
	float GetAccumulatedTime() {
		return memory.read<float>(m_addr + 12);
	}
	float GetTimeLeftForStep() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateTransformMul
{
public:
	FRigUnit_AccumulateTransformMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetMultiplier() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetInitialValue() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	bool GetbFlipOrder() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 113);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	struct FTransform GetAccumulatedValue() {
		return memory.read<struct FTransform>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertQuaternionToVector
{
public:
	FRigUnit_ConvertQuaternionToVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetInput() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ModifyBoneTransforms_WorkData
{
public:
	FRigUnit_ModifyBoneTransforms_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit
{
public:
	FRigUnit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetCurveValue
{
public:
	FRigUnit_GetCurveValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCurve() {
		return memory.read<struct FName>(m_addr + 8);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 16);
	}
	struct FCachedRigElement GetCachedCurveIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigElement
{
public:
	FRigElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateVectorMul
{
public:
	FRigUnit_AccumulateVectorMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetMultiplier() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetInitialValue() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 32);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FVector GetAccumulatedValue() {
		return memory.read<struct FVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionItemAtIndex
{
public:
	FRigUnit_CollectionItemAtIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 8);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetWorldTime
{
public:
	FRigUnit_GetWorldTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetYear() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMonth() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDay() {
		return memory.read<float>(m_addr + 16);
	}
	float GetWeekDay() {
		return memory.read<float>(m_addr + 20);
	}
	float GetHours() {
		return memory.read<float>(m_addr + 24);
	}
	float GetMinutes() {
		return memory.read<float>(m_addr + 28);
	}
	float GetSeconds() {
		return memory.read<float>(m_addr + 32);
	}
	float GetOverallSeconds() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimationHierarchy
{
public:
	FAnimationHierarchy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FConstraintNodeData> GetUserData() {
		return memory.read<struct TArray<struct FConstraintNodeData>>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstraintNodeData
{
public:
	FConstraintNodeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetRelativeParent() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	struct FConstraintOffset GetConstraintOffset() {
		return memory.read<struct FConstraintOffset>(m_addr + 48);
	}
	struct FName GetLinkedNode() {
		return memory.read<struct FName>(m_addr + 144);
	}
	struct TArray<struct FTransformConstraint> GetConstraints() {
		return memory.read<struct TArray<struct FTransformConstraint>>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ControlRig
{
public:
	FAnimNode_ControlRig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UControlRig GetControlRigClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return UControlRig(ptr_addr);
	}
	struct UControlRig GetControlRig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 376);
		return struct UControlRig(ptr_addr);
	}
	float GetAlpha() {
		return memory.read<float>(m_addr + 384);
	}
	uint8_t  GetAlphaInputType() {
		return memory.read<uint8_t >(m_addr + 388);
	}
	char GetbAlphaBoolEnabled() {
		return memory.read<char>(m_addr + 389);
	}
	char GetbSetRefPoseFromSkeleton() {
		return memory.read<char>(m_addr + 389);
	}
	struct FInputScaleBias GetAlphaScaleBias() {
		return memory.read<struct FInputScaleBias>(m_addr + 392);
	}
	struct FInputAlphaBoolBlend GetAlphaBoolBlend() {
		return memory.read<struct FInputAlphaBoolBlend>(m_addr + 400);
	}
	struct FName GetAlphaCurveName() {
		return memory.read<struct FName>(m_addr + 472);
	}
	struct FInputScaleBiasClamp GetAlphaScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 480);
	}
	struct TMap<struct FName, struct FName> GetInputMapping() {
		return memory.read<struct TMap<struct FName, struct FName>>(m_addr + 528);
	}
	struct TMap<struct FName, struct FName> GetOutputMapping() {
		return memory.read<struct TMap<struct FName, struct FName>>(m_addr + 608);
	}
	int32_t GetLODThreshold() {
		return memory.read<int32_t>(m_addr + 864);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateQuatBase
{
public:
	FRigUnit_MathRBFInterpolateQuatBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetInput() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	uint8_t  GetDistanceFunction() {
		return memory.read<uint8_t >(m_addr + 32);
	}
	uint8_t  GetSmoothingFunction() {
		return memory.read<uint8_t >(m_addr + 33);
	}
	float GetSmoothingAngle() {
		return memory.read<float>(m_addr + 36);
	}
	bool GetbNormalizeOutput() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FVector GetTwistAxis() {
		return memory.read<struct FVector>(m_addr + 44);
	}
	struct FRigUnit_MathRBFInterpolateQuatWorkData GetWorkData() {
		return memory.read<struct FRigUnit_MathRBFInterpolateQuatWorkData>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Divide_VectorVector
{
public:
	FRigUnit_Divide_VectorVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FControlRigComponentMappedCurve
{
public:
	FControlRigComponentMappedCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSource() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetTarget() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorLength
{
public:
	FRigUnit_MathVectorLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetBoneRotation
{
public:
	FRigUnit_SetBoneRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 112);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 128);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 132);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 136);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigAnimInstanceProxy
{
public:
	FControlRigAnimInstanceProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SimBaseMutable
{
public:
	FRigUnit_SimBaseMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FControlRigComponentMappedBone
{
public:
	FControlRigComponentMappedBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSource() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetTarget() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionFromRotator
{
public:
	FRigUnit_MathQuaternionFromRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetRotator() {
		return memory.read<struct FRotator>(m_addr + 8);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigInfluenceMapPerEvent
{
public:
	FRigInfluenceMapPerEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigInfluenceMap> GetMaps() {
		return memory.read<struct TArray<struct FRigInfluenceMap>>(m_addr + 0);
	}
	struct TMap<struct FName, int32_t> GetEventToIndex() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInitialSpaceTransform
{
public:
	FGetInitialSpaceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSpaceName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlFloat_Entry
{
public:
	FRigUnit_SetMultiControlFloat_Entry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetFloatValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigComponentMappedComponent
{
public:
	FControlRigComponentMappedComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetElementName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetElementType() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	uint8_t  GetDirection() {
		return memory.read<uint8_t >(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigComponentMappedElement
{
public:
	FControlRigComponentMappedElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FComponentReference GetComponentReference() {
		return memory.read<struct FComponentReference>(m_addr + 0);
	}
	int32_t GetTransformIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct FName GetTransformName() {
		return memory.read<struct FName>(m_addr + 44);
	}
	uint8_t  GetElementType() {
		return memory.read<uint8_t >(m_addr + 52);
	}
	struct FName GetElementName() {
		return memory.read<struct FName>(m_addr + 56);
	}
	uint8_t  GetDirection() {
		return memory.read<uint8_t >(m_addr + 64);
	}
	struct FTransform GetOffset() {
		return memory.read<struct FTransform>(m_addr + 80);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 128);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 132);
	}
	struct USceneComponent GetSceneComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct USceneComponent(ptr_addr);
	}
	int32_t GetElementIndex() {
		return memory.read<int32_t>(m_addr + 144);
	}
	int32_t GetSubIndex() {
		return memory.read<int32_t>(m_addr + 148);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorClamp
{
public:
	FRigUnit_MathVectorClamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetMinimum() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetMaximum() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigSpace
{
public:
	FRigSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetSpaceType() {
		return memory.read<uint8_t >(m_addr + 24);
	}
	struct FName GetParentName() {
		return memory.read<struct FName>(m_addr + 28);
	}
	int32_t GetParentIndex() {
		return memory.read<int32_t>(m_addr + 36);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FTransform GetLocalTransform() {
		return memory.read<struct FTransform>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigExecuteContext
{
public:
	FControlRigExecuteContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntEquals
{
public:
	FRigUnit_MathIntEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetA() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigControlValueStorage
{
public:
	FRigControlValueStorage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFloat00() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFloat01() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFloat02() {
		return memory.read<float>(m_addr + 8);
	}
	float GetFloat03() {
		return memory.read<float>(m_addr + 12);
	}
	float GetFloat10() {
		return memory.read<float>(m_addr + 16);
	}
	float GetFloat11() {
		return memory.read<float>(m_addr + 20);
	}
	float GetFloat12() {
		return memory.read<float>(m_addr + 24);
	}
	float GetFloat13() {
		return memory.read<float>(m_addr + 28);
	}
	float GetFloat20() {
		return memory.read<float>(m_addr + 32);
	}
	float GetFloat21() {
		return memory.read<float>(m_addr + 36);
	}
	float GetFloat22() {
		return memory.read<float>(m_addr + 40);
	}
	float GetFloat23() {
		return memory.read<float>(m_addr + 44);
	}
	float GetFloat30() {
		return memory.read<float>(m_addr + 48);
	}
	float GetFloat31() {
		return memory.read<float>(m_addr + 52);
	}
	float GetFloat32() {
		return memory.read<float>(m_addr + 56);
	}
	float GetFloat33() {
		return memory.read<float>(m_addr + 60);
	}
	bool GetbValid() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigHierarchyCopyPasteContent
{
public:
	FRigHierarchyCopyPasteContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<uint8_t > GetTypes() {
		return memory.read<struct TArray<uint8_t >>(m_addr + 0);
	}
	struct TArray<struct FString> GetContents() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	struct TArray<struct FTransform> GetLocalTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 32);
	}
	struct TArray<struct FTransform> GetGlobalTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigDrawContainer
{
public:
	FControlRigDrawContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FControlRigDrawInstruction> GetInstructions() {
		return memory.read<struct TArray<struct FControlRigDrawInstruction>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateVectorWorkData
{
public:
	FRigUnit_MathRBFInterpolateVectorWorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorClampSpatially
{
public:
	FRigUnit_MathVectorClampSpatially(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	char EAxis GetAxis() {
		return memory.read<char EAxis>(m_addr + 20);
	}
	char EControlRigClampSpatialMode GetType() {
		return memory.read<char EControlRigClampSpatialMode>(m_addr + 21);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 24);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 28);
	}
	struct FTransform GetSpace() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	bool GetbDrawDebug() {
		return memory.read<bool>(m_addr + 80);
	}
	struct FLinearColor GetDebugColor() {
		return memory.read<struct FLinearColor>(m_addr + 84);
	}
	float GetDebugThickness() {
		return memory.read<float>(m_addr + 100);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SlideChain
{
public:
	FRigUnit_SlideChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetStartBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetEndBone() {
		return memory.read<struct FName>(m_addr + 112);
	}
	float GetSlideAmount() {
		return memory.read<float>(m_addr + 120);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 124);
	}
	struct FRigUnit_SlideChain_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_SlideChain_WorkData>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigDrawInstruction
{
public:
	FControlRigDrawInstruction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	char EControlRigDrawSettings GetPrimitiveType() {
		return memory.read<char EControlRigDrawSettings>(m_addr + 8);
	}
	struct TArray<struct FVector> GetPositions() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 32);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 48);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolBase
{
public:
	FRigUnit_MathBoolBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FControlRigDrawInterface
{
public:
	FControlRigDrawInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CCDIK_RotationLimit
{
public:
	FRigUnit_CCDIK_RotationLimit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetLimit() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformLerp
{
public:
	FRigUnit_MathTransformLerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetA() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetB() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	float GetT() {
		return memory.read<float>(m_addr + 112);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatLerp
{
public:
	FRigUnit_MathFloatLerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	float GetT() {
		return memory.read<float>(m_addr + 16);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGizmoActorCreationParam
{
public:
	FGizmoActorCreationParam(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FControlRigSettingsPerPinBool
{
public:
	FControlRigSettingsPerPinBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FString, bool> GetValues() {
		return memory.read<struct TMap<struct FString, bool>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugLineStrip
{
public:
	FRigUnit_DebugLineStrip(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetPoints() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 104);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 120);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 136);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 140);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathColorBinaryOp
{
public:
	FRigUnit_MathColorBinaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetA() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}
	struct FLinearColor GetB() {
		return memory.read<struct FLinearColor>(m_addr + 24);
	}
	struct FLinearColor GetResult() {
		return memory.read<struct FLinearColor>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigLayerInstanceProxy
{
public:
	FControlRigLayerInstanceProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FControlRigGizmoDefinition
{
public:
	FControlRigGizmoDefinition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetGizmoName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TSoftObjectPtr<UStaticMesh> GetStaticMesh() {
		return memory.read<struct TSoftObjectPtr<UStaticMesh>>(m_addr + 8);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigHierarchyRef
{
public:
	FRigHierarchyRef(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnimNode_ControlRigInputPose
{
public:
	FAnimNode_ControlRigInputPose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetInputPose() {
		return memory.read<struct FPoseLink>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_StartProfilingTimer
{
public:
	FRigUnit_StartProfilingTimer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FCachedRigElement
{
public:
	FCachedRigElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetKey() {
		return memory.read<struct FRigElementKey>(m_addr + 0);
	}
	uint16_t GetIndex() {
		return memory.read<uint16_t>(m_addr + 12);
	}
	int32_t GetContainerVersion() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCRFourPointBezier
{
public:
	FCRFourPointBezier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetC() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetD() {
		return memory.read<struct FVector>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionUnaryOp
{
public:
	FRigUnit_MathQuaternionUnaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugRectangleItemSpace
{
public:
	FRigUnit_DebugRectangleItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 160);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 176);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 180);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 184);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigSequenceObjectReferenceMap
{
public:
	FControlRigSequenceObjectReferenceMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FGuid> GetBindingIds() {
		return memory.read<struct TArray<struct FGuid>>(m_addr + 0);
	}
	struct TArray<struct FControlRigSequenceObjectReferences> GetReferences() {
		return memory.read<struct TArray<struct FControlRigSequenceObjectReferences>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertVectorToRotation
{
public:
	FRigUnit_ConvertVectorToRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetInput() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FRotator GetResult() {
		return memory.read<struct FRotator>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigSequenceObjectReferences
{
public:
	FControlRigSequenceObjectReferences(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FControlRigSequenceObjectReference> GetArray() {
		return memory.read<struct TArray<struct FControlRigSequenceObjectReference>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCRSimLinearSpring
{
public:
	FCRSimLinearSpring(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSubjectA() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSubjectB() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetCoefficient() {
		return memory.read<float>(m_addr + 8);
	}
	float GetEquilibrium() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigSequenceObjectReference
{
public:
	FControlRigSequenceObjectReference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UControlRig GetControlRigClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UControlRig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlVector2D
{
public:
	FRigUnit_SetControlVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 112);
	}
	struct FVector2D GetVector() {
		return memory.read<struct FVector2D>(m_addr + 116);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInteractionRig
{
public:
	FSetInteractionRig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRig GetInInteractionRig() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigControl
{
public:
	FRigControl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetControlType() {
		return memory.read<uint8_t >(m_addr + 24);
	}
	struct FName GetDisplayName() {
		return memory.read<struct FName>(m_addr + 28);
	}
	struct FName GetParentName() {
		return memory.read<struct FName>(m_addr + 36);
	}
	int32_t GetParentIndex() {
		return memory.read<int32_t>(m_addr + 44);
	}
	struct FName GetSpaceName() {
		return memory.read<struct FName>(m_addr + 48);
	}
	int32_t GetSpaceIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct FTransform GetOffsetTransform() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FRigControlValue GetInitialValue() {
		return memory.read<struct FRigControlValue>(m_addr + 112);
	}
	struct FRigControlValue GetValue() {
		return memory.read<struct FRigControlValue>(m_addr + 240);
	}
	uint8_t  GetPrimaryAxis() {
		return memory.read<uint8_t >(m_addr + 368);
	}
	bool GetbIsCurve() {
		return memory.read<bool>(m_addr + 369);
	}
	bool GetbAnimatable() {
		return memory.read<bool>(m_addr + 370);
	}
	bool GetbLimitTranslation() {
		return memory.read<bool>(m_addr + 371);
	}
	bool GetbLimitRotation() {
		return memory.read<bool>(m_addr + 372);
	}
	bool GetbLimitScale() {
		return memory.read<bool>(m_addr + 373);
	}
	bool GetbDrawLimits() {
		return memory.read<bool>(m_addr + 374);
	}
	struct FRigControlValue GetMinimumValue() {
		return memory.read<struct FRigControlValue>(m_addr + 384);
	}
	struct FRigControlValue GetMaximumValue() {
		return memory.read<struct FRigControlValue>(m_addr + 512);
	}
	bool GetbGizmoEnabled() {
		return memory.read<bool>(m_addr + 640);
	}
	bool GetbGizmoVisible() {
		return memory.read<bool>(m_addr + 641);
	}
	struct FName GetGizmoName() {
		return memory.read<struct FName>(m_addr + 644);
	}
	struct FTransform GetGizmoTransform() {
		return memory.read<struct FTransform>(m_addr + 656);
	}
	struct FLinearColor GetGizmoColor() {
		return memory.read<struct FLinearColor>(m_addr + 704);
	}
	struct TArray<int32_t> GetDependents() {
		return memory.read<struct TArray<int32_t>>(m_addr + 720);
	}
	bool GetbIsTransientControl() {
		return memory.read<bool>(m_addr + 736);
	}
	struct UEnum GetControlEnum() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UEnum(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FControlRigSequencerAnimInstanceProxy
{
public:
	FControlRigSequencerAnimInstanceProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigCurveContainer
{
public:
	FRigCurveContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigCurve> GetCurves() {
		return memory.read<struct TArray<struct FRigCurve>>(m_addr + 32);
	}
	struct TMap<struct FName, int32_t> GetNameToIndexMapping() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 48);
	}
	struct TArray<struct FName> GetSelection() {
		return memory.read<struct TArray<struct FName>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetTransform
{
public:
	FRigUnit_SetTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 116);
	}
	bool GetbInitial() {
		return memory.read<bool>(m_addr + 117);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 176);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 180);
	}
	struct FCachedRigElement GetCachedIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetRelativeTransformForItem
{
public:
	FRigUnit_SetRelativeTransformForItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetChild() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	struct FRigElementKey GetParent() {
		return memory.read<struct FRigElementKey>(m_addr + 116);
	}
	bool GetbParentInitial() {
		return memory.read<bool>(m_addr + 128);
	}
	struct FTransform GetRelativeTransform() {
		return memory.read<struct FTransform>(m_addr + 144);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 192);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 196);
	}
	struct FCachedRigElement GetCachedChild() {
		return memory.read<struct FCachedRigElement>(m_addr + 200);
	}
	struct FCachedRigElement GetCachedParent() {
		return memory.read<struct FCachedRigElement>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};class FCRSimPoint
{
public:
	FCRSimPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMass() {
		return memory.read<float>(m_addr + 0);
	}
	float GetSize() {
		return memory.read<float>(m_addr + 4);
	}
	float GetLinearDamping() {
		return memory.read<float>(m_addr + 8);
	}
	float GetInheritMotion() {
		return memory.read<float>(m_addr + 12);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetLinearVelocity() {
		return memory.read<struct FVector>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FCRSimPointConstraint
{
public:
	FCRSimPointConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	int32_t GetSubjectA() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetSubjectB() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FVector GetDataA() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetDataB() {
		return memory.read<struct FVector>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigPose
{
public:
	FRigPose(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigPoseElement> GetElements() {
		return memory.read<struct TArray<struct FRigPoseElement>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCRSimPointContainer
{
public:
	FCRSimPointContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCRSimPoint> GetPoints() {
		return memory.read<struct TArray<struct FCRSimPoint>>(m_addr + 24);
	}
	struct TArray<struct FCRSimLinearSpring> GetSprings() {
		return memory.read<struct TArray<struct FCRSimLinearSpring>>(m_addr + 40);
	}
	struct TArray<struct FCRSimPointForce> GetForces() {
		return memory.read<struct TArray<struct FCRSimPointForce>>(m_addr + 56);
	}
	struct TArray<struct FCRSimSoftCollision> GetCollisionVolumes() {
		return memory.read<struct TArray<struct FCRSimSoftCollision>>(m_addr + 72);
	}
	struct TArray<struct FCRSimPointConstraint> GetConstraints() {
		return memory.read<struct TArray<struct FCRSimPointConstraint>>(m_addr + 88);
	}
	struct TArray<struct FCRSimPoint> GetPreviousStep() {
		return memory.read<struct TArray<struct FCRSimPoint>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatPow
{
public:
	FRigUnit_MathFloatPow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorUnit
{
public:
	FRigUnit_MathVectorUnit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FCRSimSoftCollision
{
public:
	FCRSimSoftCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	uint8_t  GetShapeType() {
		return memory.read<uint8_t >(m_addr + 48);
	}
	float GetMinimumDistance() {
		return memory.read<float>(m_addr + 52);
	}
	float GetMaximumDistance() {
		return memory.read<float>(m_addr + 56);
	}
	uint8_t  GetFalloffType() {
		return memory.read<uint8_t >(m_addr + 60);
	}
	float GetCoefficient() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetbInverted() {
		return memory.read<bool>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigEventContext
{
public:
	FRigEventContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMovieSceneControlRigInstanceData
{
public:
	FMovieSceneControlRigInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAdditive() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbApplyBoneFilter() {
		return memory.read<bool>(m_addr + 9);
	}
	struct FInputBlendPose GetBoneFilter() {
		return memory.read<struct FInputBlendPose>(m_addr + 16);
	}
	struct FMovieSceneFloatChannel GetWeight() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 32);
	}
	struct FMovieSceneEvaluationOperand GetOperand() {
		return memory.read<struct FMovieSceneEvaluationOperand>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FCRSimPointForce
{
public:
	FCRSimPointForce(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetForceType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	struct FVector GetVector() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetCoefficient() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbNormalize() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatNegate
{
public:
	FRigUnit_MathFloatNegate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigInfluenceMap
{
public:
	FRigInfluenceMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetEventName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FRigInfluenceEntry> GetEntries() {
		return memory.read<struct TArray<struct FRigInfluenceEntry>>(m_addr + 8);
	}
	struct TMap<struct FRigElementKey, int32_t> GetKeyToIndex() {
		return memory.read<struct TMap<struct FRigElementKey, int32_t>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetControlInitialTransform
{
public:
	FRigUnit_GetControlInitialTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigElementKey
{
public:
	FRigElementKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FChannelMapInfo
{
public:
	FChannelMapInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetControlIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTotalChannelIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetChannelIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetParentControlIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FName GetChannelTypeName() {
		return memory.read<struct FName>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ChainHarmonics
{
public:
	FRigUnit_ChainHarmonics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetChainRoot() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FVector GetSpeed() {
		return memory.read<struct FVector>(m_addr + 112);
	}
	struct FRigUnit_ChainHarmonics_Reach GetReach() {
		return memory.read<struct FRigUnit_ChainHarmonics_Reach>(m_addr + 124);
	}
	struct FRigUnit_ChainHarmonics_Wave GetWave() {
		return memory.read<struct FRigUnit_ChainHarmonics_Wave>(m_addr + 164);
	}
	struct FRuntimeFloatCurve GetWaveCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 232);
	}
	struct FRigUnit_ChainHarmonics_Pendulum GetPendulum() {
		return memory.read<struct FRigUnit_ChainHarmonics_Pendulum>(m_addr + 368);
	}
	bool GetbDrawDebug() {
		return memory.read<bool>(m_addr + 428);
	}
	struct FTransform GetDrawWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 432);
	}
	struct FRigUnit_ChainHarmonics_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_ChainHarmonics_WorkData>(m_addr + 480);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorLengthSquared
{
public:
	FRigUnit_MathVectorLengthSquared(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorCeil
{
public:
	FRigUnit_MathVectorCeil(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FIntegerParameterNameAndCurve
{
public:
	FIntegerParameterNameAndCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneIntegerChannel GetParameterCurve() {
		return memory.read<struct FMovieSceneIntegerChannel>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugArc
{
public:
	FRigUnit_DebugArc(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 160);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 176);
	}
	float GetMinimumDegrees() {
		return memory.read<float>(m_addr + 180);
	}
	float GetMaximumDegrees() {
		return memory.read<float>(m_addr + 184);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 188);
	}
	int32_t GetDetail() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 196);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateVectorXform_Target
{
public:
	FMathRBFInterpolateVectorXform_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTarget() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnumParameterNameAndCurve
{
public:
	FEnumParameterNameAndCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetParameterName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FMovieSceneByteChannel GetParameterCurve() {
		return memory.read<struct FMovieSceneByteChannel>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_PropagateTransform
{
public:
	FRigUnit_PropagateTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	bool GetbRecomputeGlobal() {
		return memory.read<bool>(m_addr + 116);
	}
	bool GetbApplyToChildren() {
		return memory.read<bool>(m_addr + 117);
	}
	bool GetbRecursive() {
		return memory.read<bool>(m_addr + 118);
	}
	struct FCachedRigElement GetCachedIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_HierarchyGetChildren
{
public:
	FRigUnit_HierarchyGetChildren(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetParent() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	bool GetbIncludeParent() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetbRecursive() {
		return memory.read<bool>(m_addr + 21);
	}
	struct FRigElementKeyCollection GetChildren() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}
	struct FCachedRigElement GetCachedParent() {
		return memory.read<struct FCachedRigElement>(m_addr + 40);
	}
	struct FRigElementKeyCollection GetCachedChildren() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneControlRigParameterTemplate
{
public:
	FMovieSceneControlRigParameterTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEnumParameterNameAndCurve> GetEnums() {
		return memory.read<struct TArray<struct FEnumParameterNameAndCurve>>(m_addr + 128);
	}
	struct TArray<struct FIntegerParameterNameAndCurve> GetIntegers() {
		return memory.read<struct TArray<struct FIntegerParameterNameAndCurve>>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatIsNearlyZero
{
public:
	FRigUnit_MathFloatIsNearlyZero(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetTolerance() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MultiFABRIK_EndEffector
{
public:
	FRigUnit_MultiFABRIK_EndEffector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigBoneHierarchy
{
public:
	FRigBoneHierarchy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigBone> GetBones() {
		return memory.read<struct TArray<struct FRigBone>>(m_addr + 32);
	}
	struct TMap<struct FName, int32_t> GetNameToIndexMapping() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 48);
	}
	struct TArray<struct FName> GetSelection() {
		return memory.read<struct TArray<struct FName>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateVectorQuat_Target
{
public:
	FMathRBFInterpolateVectorQuat_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTarget() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Clamp_Float
{
public:
	FRigUnit_Clamp_Float(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMin() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMax() {
		return memory.read<float>(m_addr + 16);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigControlHierarchy
{
public:
	FRigControlHierarchy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigControl> GetControls() {
		return memory.read<struct TArray<struct FRigControl>>(m_addr + 152);
	}
	struct TMap<struct FName, int32_t> GetNameToIndexMapping() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 168);
	}
	struct TArray<struct FName> GetSelection() {
		return memory.read<struct TArray<struct FName>>(m_addr + 248);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigControlValue
{
public:
	FRigControlValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigControlValueStorage GetFloatStorage() {
		return memory.read<struct FRigControlValueStorage>(m_addr + 0);
	}
	struct FTransform GetStorage() {
		return memory.read<struct FTransform>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugTransform
{
public:
	FRigUnit_DebugTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 64);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 68);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 84);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 88);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 92);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugLine
{
public:
	FRigUnit_DebugLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 104);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 116);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 128);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 144);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 148);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigMirrorSettings
{
public:
	FRigMirrorSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char EAxis GetMirrorAxis() {
		return memory.read<char EAxis>(m_addr + 0);
	}
	char EAxis GetAxisToFlip() {
		return memory.read<char EAxis>(m_addr + 1);
	}
	struct FString GetOldName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetNewName() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigCurve
{
public:
	FRigCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigHierarchyContainer
{
public:
	FRigHierarchyContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigBoneHierarchy GetBoneHierarchy() {
		return memory.read<struct FRigBoneHierarchy>(m_addr + 0);
	}
	struct FRigSpaceHierarchy GetSpaceHierarchy() {
		return memory.read<struct FRigSpaceHierarchy>(m_addr + 152);
	}
	struct FRigControlHierarchy GetControlHierarchy() {
		return memory.read<struct FRigControlHierarchy>(m_addr + 296);
	}
	struct FRigCurveContainer GetCurveContainer() {
		return memory.read<struct FRigCurveContainer>(m_addr + 560);
	}
	int32_t GetVersion() {
		return memory.read<int32_t>(m_addr + 712);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetBoneTranslation
{
public:
	FRigUnit_SetBoneTranslation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FVector GetTranslation() {
		return memory.read<struct FVector>(m_addr + 112);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 124);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 128);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 132);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigSpaceHierarchy
{
public:
	FRigSpaceHierarchy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigSpace> GetSpaces() {
		return memory.read<struct TArray<struct FRigSpace>>(m_addr + 32);
	}
	struct TMap<struct FName, int32_t> GetNameToIndexMapping() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 48);
	}
	struct TArray<struct FName> GetSelection() {
		return memory.read<struct TArray<struct FName>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigControlModifiedContext
{
public:
	FRigControlModifiedContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigPoseElement
{
public:
	FRigPoseElement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCachedRigElement GetIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 0);
	}
	struct FTransform GetGlobalTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FTransform GetLocalTransform() {
		return memory.read<struct FTransform>(m_addr + 80);
	}
	float GetCurveValue() {
		return memory.read<float>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigInfluenceEntry
{
public:
	FRigInfluenceEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetSource() {
		return memory.read<struct FRigElementKey>(m_addr + 0);
	}
	struct TArray<struct FRigElementKey> GetAffectedList() {
		return memory.read<struct TArray<struct FRigElementKey>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigInfluenceEntryModifier
{
public:
	FRigInfluenceEntryModifier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigElementKey> GetAffectedList() {
		return memory.read<struct TArray<struct FRigElementKey>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnitMutable
{
public:
	FRigUnitMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FControlRigExecuteContext GetExecuteContext() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SimBase
{
public:
	FRigUnit_SimBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateVectorRange
{
public:
	FRigUnit_AccumulateVectorRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetMinimum() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetMaximum() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FVector GetAccumulatedMinimum() {
		return memory.read<struct FVector>(m_addr + 44);
	}
	struct FVector GetAccumulatedMaximum() {
		return memory.read<struct FVector>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateQuatVector
{
public:
	FRigUnit_MathRBFInterpolateQuatVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateQuatVector_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateQuatVector_Target>>(m_addr + 208);
	}
	struct FVector GetOutput() {
		return memory.read<struct FVector>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorLerp
{
public:
	FRigUnit_MathVectorLerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetT() {
		return memory.read<float>(m_addr + 32);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateFloatRange
{
public:
	FRigUnit_AccumulateFloatRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 16);
	}
	float GetAccumulatedMinimum() {
		return memory.read<float>(m_addr + 20);
	}
	float GetAccumulatedMaximum() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateTransformLerp
{
public:
	FRigUnit_AccumulateTransformLerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTargetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetInitialValue() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	float GetBlend() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 116);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	struct FTransform GetAccumulatedValue() {
		return memory.read<struct FTransform>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateQuatLerp
{
public:
	FRigUnit_AccumulateQuatLerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetTargetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetInitialValue() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	float GetBlend() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 52);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 64);
	}
	struct FQuat GetAccumulatedValue() {
		return memory.read<struct FQuat>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AimConstraint_WorkData
{
public:
	FRigUnit_AimConstraint_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FConstraintData> GetConstraintData() {
		return memory.read<struct TArray<struct FConstraintData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ChainHarmonics_Pendulum
{
public:
	FRigUnit_ChainHarmonics_Pendulum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetPendulumStiffness() {
		return memory.read<float>(m_addr + 4);
	}
	struct FVector GetPendulumGravity() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetPendulumBlend() {
		return memory.read<float>(m_addr + 20);
	}
	float GetPendulumDrag() {
		return memory.read<float>(m_addr + 24);
	}
	float GetPendulumMinimum() {
		return memory.read<float>(m_addr + 28);
	}
	float GetPendulumMaximum() {
		return memory.read<float>(m_addr + 32);
	}
	uint8_t  GetPendulumEase() {
		return memory.read<uint8_t >(m_addr + 36);
	}
	struct FVector GetUnwindAxis() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	float GetUnwindMinimum() {
		return memory.read<float>(m_addr + 52);
	}
	float GetUnwindMaximum() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionBase
{
public:
	FRigUnit_MathQuaternionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionBase
{
public:
	FRigUnit_CollectionBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateVectorLerp
{
public:
	FRigUnit_AccumulateVectorLerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTargetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetInitialValue() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetBlend() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 36);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	struct FVector GetAccumulatedValue() {
		return memory.read<struct FVector>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateFloatLerp
{
public:
	FRigUnit_AccumulateFloatLerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTargetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetInitialValue() {
		return memory.read<float>(m_addr + 12);
	}
	float GetBlend() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 20);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 24);
	}
	float GetAccumulatedValue() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformToEulerTransform
{
public:
	FRigUnit_MathTransformToEulerTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FEulerTransform GetResult() {
		return memory.read<struct FEulerTransform>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateQuatMul
{
public:
	FRigUnit_AccumulateQuatMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetMultiplier() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetInitialValue() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	bool GetbFlipOrder() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 49);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 64);
	}
	struct FQuat GetAccumulatedValue() {
		return memory.read<struct FQuat>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateFloatMul
{
public:
	FRigUnit_AccumulateFloatMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMultiplier() {
		return memory.read<float>(m_addr + 8);
	}
	float GetInitialValue() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 20);
	}
	float GetAccumulatedValue() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionInverse
{
public:
	FRigUnit_MathQuaternionInverse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorIsNearlyEqual
{
public:
	FRigUnit_MathVectorIsNearlyEqual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetTolerance() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugTransformArrayMutable
{
public:
	FRigUnit_DebugTransformArrayMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTransform> GetTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 104);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 120);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 124);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 140);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 144);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 148);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 208);
	}
	struct FRigUnit_DebugTransformArrayMutable_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_DebugTransformArrayMutable_WorkData>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlRig
{
public:
	FGetControlRig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateVectorAdd
{
public:
	FRigUnit_AccumulateVectorAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetIncrement() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetInitialValue() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 32);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FVector GetAccumulatedValue() {
		return memory.read<struct FVector>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AimConstraint
{
public:
	FRigUnit_AimConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetJoint() {
		return memory.read<struct FName>(m_addr + 104);
	}
	uint8_t  GetAimMode() {
		return memory.read<uint8_t >(m_addr + 112);
	}
	uint8_t  GetUpMode() {
		return memory.read<uint8_t >(m_addr + 113);
	}
	struct FVector GetAimVector() {
		return memory.read<struct FVector>(m_addr + 116);
	}
	struct FVector GetUpVector() {
		return memory.read<struct FVector>(m_addr + 128);
	}
	struct TArray<struct FAimTarget> GetAimTargets() {
		return memory.read<struct TArray<struct FAimTarget>>(m_addr + 144);
	}
	struct TArray<struct FAimTarget> GetUpTargets() {
		return memory.read<struct TArray<struct FAimTarget>>(m_addr + 160);
	}
	struct FRigUnit_AimConstraint_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_AimConstraint_WorkData>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AccumulateFloatAdd
{
public:
	FRigUnit_AccumulateFloatAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetIncrement() {
		return memory.read<float>(m_addr + 8);
	}
	float GetInitialValue() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetbIntegrateDeltaTime() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 20);
	}
	float GetAccumulatedValue() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AddBoneTransform
{
public:
	FRigUnit_AddBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 160);
	}
	bool GetbPostMultiply() {
		return memory.read<bool>(m_addr + 164);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 165);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_HighlevelBaseMutable
{
public:
	FRigUnit_HighlevelBaseMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformBase
{
public:
	FRigUnit_MathTransformBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetTranslation
{
public:
	FRigUnit_SetTranslation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 116);
	}
	struct FVector GetTranslation() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 132);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 136);
	}
	struct FCachedRigElement GetCachedIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertTransform
{
public:
	FRigUnit_ConvertTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetInput() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FEulerTransform GetResult() {
		return memory.read<struct FEulerTransform>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatSin
{
public:
	FRigUnit_MathFloatSin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AimItem
{
public:
	FRigUnit_AimItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	struct FRigUnit_AimItem_Target Getprimary() {
		return memory.read<struct FRigUnit_AimItem_Target>(m_addr + 116);
	}
	struct FRigUnit_AimItem_Target Getsecondary() {
		return memory.read<struct FRigUnit_AimItem_Target>(m_addr + 160);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 204);
	}
	struct FRigUnit_AimBone_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_AimBone_DebugSettings>(m_addr + 208);
	}
	struct FCachedRigElement GetCachedItem() {
		return memory.read<struct FCachedRigElement>(m_addr + 272);
	}
	struct FCachedRigElement GetPrimaryCachedSpace() {
		return memory.read<struct FCachedRigElement>(m_addr + 292);
	}
	struct FCachedRigElement GetSecondaryCachedSpace() {
		return memory.read<struct FCachedRigElement>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetBoneTransform
{
public:
	FRigUnit_GetBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AimBone_DebugSettings
{
public:
	FRigUnit_AimBone_DebugSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 4);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionIntersection
{
public:
	FRigUnit_CollectionIntersection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetA() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 8);
	}
	struct FRigElementKeyCollection GetB() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}
	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntPow
{
public:
	FRigUnit_MathIntPow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntToFloat
{
public:
	FRigUnit_MathIntToFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AimItem_Target
{
public:
	FRigUnit_AimItem_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWeight() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector GetAxis() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetTarget() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	uint8_t  GetKind() {
		return memory.read<uint8_t >(m_addr + 28);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_VisualDebugVector
{
public:
	FRigUnit_VisualDebugVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 20);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 21);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 24);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 40);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 44);
	}
	struct FName GetBoneSpace() {
		return memory.read<struct FName>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AimBone
{
public:
	FRigUnit_AimBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FRigUnit_AimBone_Target Getprimary() {
		return memory.read<struct FRigUnit_AimBone_Target>(m_addr + 112);
	}
	struct FRigUnit_AimBone_Target Getsecondary() {
		return memory.read<struct FRigUnit_AimBone_Target>(m_addr + 152);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 192);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 196);
	}
	struct FRigUnit_AimBone_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_AimBone_DebugSettings>(m_addr + 208);
	}
	struct FCachedRigElement GetCachedBoneIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 272);
	}
	struct FCachedRigElement GetPrimaryCachedSpace() {
		return memory.read<struct FCachedRigElement>(m_addr + 292);
	}
	struct FCachedRigElement GetSecondaryCachedSpace() {
		return memory.read<struct FCachedRigElement>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionItems
{
public:
	FRigUnit_CollectionItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigElementKey> GetItems() {
		return memory.read<struct TArray<struct FRigElementKey>>(m_addr + 8);
	}
	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AimBone_Target
{
public:
	FRigUnit_AimBone_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWeight() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector GetAxis() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetTarget() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	uint8_t  GetKind() {
		return memory.read<uint8_t >(m_addr + 28);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_HighlevelBase
{
public:
	FRigUnit_HighlevelBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AimBoneMath
{
public:
	FRigUnit_AimBoneMath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetInputTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FRigUnit_AimItem_Target Getprimary() {
		return memory.read<struct FRigUnit_AimItem_Target>(m_addr + 64);
	}
	struct FRigUnit_AimItem_Target Getsecondary() {
		return memory.read<struct FRigUnit_AimItem_Target>(m_addr + 108);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 152);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	struct FRigUnit_AimBone_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_AimBone_DebugSettings>(m_addr + 208);
	}
	struct FCachedRigElement GetPrimaryCachedSpace() {
		return memory.read<struct FCachedRigElement>(m_addr + 272);
	}
	struct FCachedRigElement GetSecondaryCachedSpace() {
		return memory.read<struct FCachedRigElement>(m_addr + 292);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_RandomFloat
{
public:
	FRigUnit_RandomFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSeed() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 16);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 20);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 24);
	}
	float GetLastResult() {
		return memory.read<float>(m_addr + 28);
	}
	int32_t GetLastSeed() {
		return memory.read<int32_t>(m_addr + 32);
	}
	float GetTimeLeft() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetControlFloat
{
public:
	FRigUnit_GetControlFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}
	float GetFloatValue() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 24);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FAimTarget
{
public:
	FAimTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWeight() {
		return memory.read<float>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FVector GetAlignVector() {
		return memory.read<struct FVector>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MultiFABRIK
{
public:
	FRigUnit_MultiFABRIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetRootBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct TArray<struct FRigUnit_MultiFABRIK_EndEffector> GetEffectors() {
		return memory.read<struct TArray<struct FRigUnit_MultiFABRIK_EndEffector>>(m_addr + 112);
	}
	float GetPrecision() {
		return memory.read<float>(m_addr + 128);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 132);
	}
	int32_t GetMaxIterations() {
		return memory.read<int32_t>(m_addr + 136);
	}
	struct FRigUnit_MultiFABRIK_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_MultiFABRIK_WorkData>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AlphaInterpVector
{
public:
	FRigUnit_AlphaInterpVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 20);
	}
	float GetBias() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetbMapRange() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FInputRange GetInRange() {
		return memory.read<struct FInputRange>(m_addr + 32);
	}
	struct FInputRange GetOutRange() {
		return memory.read<struct FInputRange>(m_addr + 40);
	}
	bool GetbClampResult() {
		return memory.read<bool>(m_addr + 48);
	}
	float GetClampMin() {
		return memory.read<float>(m_addr + 52);
	}
	float GetClampMax() {
		return memory.read<float>(m_addr + 56);
	}
	bool GetbInterpResult() {
		return memory.read<bool>(m_addr + 60);
	}
	float GetInterpSpeedIncreasing() {
		return memory.read<float>(m_addr + 64);
	}
	float GetInterpSpeedDecreasing() {
		return memory.read<float>(m_addr + 68);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 72);
	}
	struct FInputScaleBiasClamp GetScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AlphaInterp
{
public:
	FRigUnit_AlphaInterp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 12);
	}
	float GetBias() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbMapRange() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FInputRange GetInRange() {
		return memory.read<struct FInputRange>(m_addr + 24);
	}
	struct FInputRange GetOutRange() {
		return memory.read<struct FInputRange>(m_addr + 32);
	}
	bool GetbClampResult() {
		return memory.read<bool>(m_addr + 40);
	}
	float GetClampMin() {
		return memory.read<float>(m_addr + 44);
	}
	float GetClampMax() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetbInterpResult() {
		return memory.read<bool>(m_addr + 52);
	}
	float GetInterpSpeedIncreasing() {
		return memory.read<float>(m_addr + 56);
	}
	float GetInterpSpeedDecreasing() {
		return memory.read<float>(m_addr + 60);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 64);
	}
	struct FInputScaleBiasClamp GetScaleBiasClamp() {
		return memory.read<struct FInputScaleBiasClamp>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AnimBase
{
public:
	FRigUnit_AnimBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AnimEasing
{
public:
	FRigUnit_AnimEasing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 12);
	}
	float GetSourceMinimum() {
		return memory.read<float>(m_addr + 16);
	}
	float GetSourceMaximum() {
		return memory.read<float>(m_addr + 20);
	}
	float GetTargetMinimum() {
		return memory.read<float>(m_addr + 24);
	}
	float GetTargetMaximum() {
		return memory.read<float>(m_addr + 28);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorMul
{
public:
	FRigUnit_MathVectorMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AnimEasingType
{
public:
	FRigUnit_AnimEasingType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SpringIK_DebugSettings
{
public:
	FRigUnit_SpringIK_DebugSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 4);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AnimEvalRichCurve
{
public:
	FRigUnit_AnimEvalRichCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	struct FRuntimeFloatCurve GetCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 16);
	}
	float GetSourceMinimum() {
		return memory.read<float>(m_addr + 152);
	}
	float GetSourceMaximum() {
		return memory.read<float>(m_addr + 156);
	}
	float GetTargetMinimum() {
		return memory.read<float>(m_addr + 160);
	}
	float GetTargetMaximum() {
		return memory.read<float>(m_addr + 164);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathColorLerp
{
public:
	FRigUnit_MathColorLerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetA() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}
	struct FLinearColor GetB() {
		return memory.read<struct FLinearColor>(m_addr + 24);
	}
	float GetT() {
		return memory.read<float>(m_addr + 40);
	}
	struct FLinearColor GetResult() {
		return memory.read<struct FLinearColor>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_AnimRichCurve
{
public:
	FRigUnit_AnimRichCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRuntimeFloatCurve GetCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ApplyFK
{
public:
	FRigUnit_ApplyFK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetJoint() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FTransformFilter GetFilter() {
		return memory.read<struct FTransformFilter>(m_addr + 160);
	}
	uint8_t  GetApplyTransformMode() {
		return memory.read<uint8_t >(m_addr + 169);
	}
	uint8_t  GetApplyTransformSpace() {
		return memory.read<uint8_t >(m_addr + 170);
	}
	struct FTransform GetBaseTransform() {
		return memory.read<struct FTransform>(m_addr + 176);
	}
	struct FName GetBaseJoint() {
		return memory.read<struct FName>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionUnit
{
public:
	FRigUnit_MathQuaternionUnit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugHierarchy
{
public:
	FRigUnit_DebugHierarchy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScale() {
		return memory.read<float>(m_addr + 104);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 108);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 124);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatSqrt
{
public:
	FRigUnit_MathFloatSqrt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BeginExecution
{
public:
	FRigUnit_BeginExecution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FControlRigExecuteContext GetExecuteContext() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorParallel
{
public:
	FRigUnit_MathVectorParallel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BlendTransform
{
public:
	FRigUnit_BlendTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetSource() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct TArray<struct FBlendTarget> GetTargets() {
		return memory.read<struct TArray<struct FBlendTarget>>(m_addr + 64);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionSwingTwist
{
public:
	FRigUnit_MathQuaternionSwingTwist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetInput() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector GetTwistAxis() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FQuat GetSwing() {
		return memory.read<struct FQuat>(m_addr + 48);
	}
	struct FQuat GetTwist() {
		return memory.read<struct FQuat>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlendTarget
{
public:
	FBlendTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionReplaceItems
{
public:
	FRigUnit_CollectionReplaceItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetItems() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 8);
	}
	struct FName GetOld() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct FName GetNew() {
		return memory.read<struct FName>(m_addr + 32);
	}
	bool GetRemoveInvalidItems() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 48);
	}
	struct FRigElementKeyCollection GetCachedCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 64);
	}
	int32_t GetCachedHierarchyHash() {
		return memory.read<int32_t>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ItemHarmonics
{
public:
	FRigUnit_ItemHarmonics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_Harmonics_TargetItem> GetTargets() {
		return memory.read<struct TArray<struct FRigUnit_Harmonics_TargetItem>>(m_addr + 104);
	}
	struct FVector GetWaveSpeed() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	struct FVector GetWaveFrequency() {
		return memory.read<struct FVector>(m_addr + 132);
	}
	struct FVector GetWaveAmplitude() {
		return memory.read<struct FVector>(m_addr + 144);
	}
	struct FVector GetWaveOffset() {
		return memory.read<struct FVector>(m_addr + 156);
	}
	struct FVector GetWaveNoise() {
		return memory.read<struct FVector>(m_addr + 168);
	}
	uint8_t  GetWaveEase() {
		return memory.read<uint8_t >(m_addr + 180);
	}
	float GetWaveMinimum() {
		return memory.read<float>(m_addr + 184);
	}
	float GetWaveMaximum() {
		return memory.read<float>(m_addr + 188);
	}
	uint8_t  GetRotationOrder() {
		return memory.read<uint8_t >(m_addr + 192);
	}
	struct FRigUnit_BoneHarmonics_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_BoneHarmonics_WorkData>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MultiFABRIK_WorkData
{
public:
	FRigUnit_MultiFABRIK_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_KalmanFloat
{
public:
	FRigUnit_KalmanFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetBufferSize() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 16);
	}
	struct TArray<float> GetBuffer() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}
	int32_t GetLastInsertIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BoneHarmonics_WorkData
{
public:
	FRigUnit_BoneHarmonics_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCachedRigElement> GetCachedItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 0);
	}
	struct FVector GetWaveTime() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathColorSub
{
public:
	FRigUnit_MathColorSub(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Harmonics_TargetItem
{
public:
	FRigUnit_Harmonics_TargetItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 0);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformMakeRelative
{
public:
	FRigUnit_MathTransformMakeRelative(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetGlobal() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetParent() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FTransform GetLocal() {
		return memory.read<struct FTransform>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BoneHarmonics
{
public:
	FRigUnit_BoneHarmonics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget> GetBones() {
		return memory.read<struct TArray<struct FRigUnit_BoneHarmonics_BoneTarget>>(m_addr + 104);
	}
	struct FVector GetWaveSpeed() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	struct FVector GetWaveFrequency() {
		return memory.read<struct FVector>(m_addr + 132);
	}
	struct FVector GetWaveAmplitude() {
		return memory.read<struct FVector>(m_addr + 144);
	}
	struct FVector GetWaveOffset() {
		return memory.read<struct FVector>(m_addr + 156);
	}
	struct FVector GetWaveNoise() {
		return memory.read<struct FVector>(m_addr + 168);
	}
	uint8_t  GetWaveEase() {
		return memory.read<uint8_t >(m_addr + 180);
	}
	float GetWaveMinimum() {
		return memory.read<float>(m_addr + 184);
	}
	float GetWaveMaximum() {
		return memory.read<float>(m_addr + 188);
	}
	uint8_t  GetRotationOrder() {
		return memory.read<uint8_t >(m_addr + 192);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 193);
	}
	struct FRigUnit_BoneHarmonics_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_BoneHarmonics_WorkData>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BoneHarmonics_BoneTarget
{
public:
	FRigUnit_BoneHarmonics_BoneTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetRelativeTransform
{
public:
	FRigUnit_GetRelativeTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ControlName
{
public:
	FRigUnit_ControlName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetInitialBoneTransform
{
public:
	FRigUnit_GetInitialBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionRotateVector
{
public:
	FRigUnit_MathQuaternionRotateVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetQuaternion() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector GetVector() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_PointSimulation_BoneTarget
{
public:
	FRigUnit_PointSimulation_BoneTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetTranslationPoint() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetPrimaryAimPoint() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetSecondaryAimPoint() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SpaceName
{
public:
	FRigUnit_SpaceName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorIsNearlyZero
{
public:
	FRigUnit_MathVectorIsNearlyZero(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetTolerance() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlFloat
{
public:
	FSetControlFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BoneName
{
public:
	FRigUnit_BoneName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Item
{
public:
	FRigUnit_Item(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SpringIK
{
public:
	FRigUnit_SpringIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetStartBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetEndBone() {
		return memory.read<struct FName>(m_addr + 112);
	}
	float GetHierarchyStrength() {
		return memory.read<float>(m_addr + 120);
	}
	float GetEffectorStrength() {
		return memory.read<float>(m_addr + 124);
	}
	float GetEffectorRatio() {
		return memory.read<float>(m_addr + 128);
	}
	float GetRootStrength() {
		return memory.read<float>(m_addr + 132);
	}
	float GetRootRatio() {
		return memory.read<float>(m_addr + 136);
	}
	float GetDamping() {
		return memory.read<float>(m_addr + 140);
	}
	struct FVector GetPoleVector() {
		return memory.read<struct FVector>(m_addr + 144);
	}
	bool GetbFlipPolePlane() {
		return memory.read<bool>(m_addr + 156);
	}
	uint8_t  GetPoleVectorKind() {
		return memory.read<uint8_t >(m_addr + 157);
	}
	struct FName GetPoleVectorSpace() {
		return memory.read<struct FName>(m_addr + 160);
	}
	struct FVector GetPrimaryAxis() {
		return memory.read<struct FVector>(m_addr + 168);
	}
	struct FVector GetSecondaryAxis() {
		return memory.read<struct FVector>(m_addr + 180);
	}
	bool GetbLiveSimulation() {
		return memory.read<bool>(m_addr + 192);
	}
	int32_t GetIterations() {
		return memory.read<int32_t>(m_addr + 196);
	}
	bool GetbLimitLocalPosition() {
		return memory.read<bool>(m_addr + 200);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 201);
	}
	struct FRigUnit_SpringIK_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_SpringIK_DebugSettings>(m_addr + 208);
	}
	struct FRigUnit_SpringIK_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_SpringIK_WorkData>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CCDIKPerItem
{
public:
	FRigUnit_CCDIKPerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetItems() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 104);
	}
	struct FTransform GetEffectorTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	float GetPrecision() {
		return memory.read<float>(m_addr + 176);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 180);
	}
	int32_t GetMaxIterations() {
		return memory.read<int32_t>(m_addr + 184);
	}
	bool GetbStartFromTail() {
		return memory.read<bool>(m_addr + 188);
	}
	float GetBaseRotationLimit() {
		return memory.read<float>(m_addr + 192);
	}
	struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> GetRotationLimits() {
		return memory.read<struct TArray<struct FRigUnit_CCDIK_RotationLimitPerItem>>(m_addr + 200);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 216);
	}
	struct FRigUnit_CCDIK_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_CCDIK_WorkData>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorNotEquals
{
public:
	FRigUnit_MathVectorNotEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CCDIK_WorkData
{
public:
	FRigUnit_CCDIK_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCCDIKChainLink> GetChain() {
		return memory.read<struct TArray<struct FCCDIKChainLink>>(m_addr + 0);
	}
	struct TArray<struct FCachedRigElement> GetCachedItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 16);
	}
	struct TArray<int32_t> GetRotationLimitIndex() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	struct TArray<float> GetRotationLimitsPerItem() {
		return memory.read<struct TArray<float>>(m_addr + 48);
	}
	struct FCachedRigElement GetCachedEffector() {
		return memory.read<struct FCachedRigElement>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CCDIK_RotationLimitPerItem
{
public:
	FRigUnit_CCDIK_RotationLimitPerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 0);
	}
	float GetLimit() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntGreater
{
public:
	FRigUnit_MathIntGreater(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetA() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CCDIK
{
public:
	FRigUnit_CCDIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetStartBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetEffectorBone() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct FTransform GetEffectorTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	float GetPrecision() {
		return memory.read<float>(m_addr + 176);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 180);
	}
	int32_t GetMaxIterations() {
		return memory.read<int32_t>(m_addr + 184);
	}
	bool GetbStartFromTail() {
		return memory.read<bool>(m_addr + 188);
	}
	float GetBaseRotationLimit() {
		return memory.read<float>(m_addr + 192);
	}
	struct TArray<struct FRigUnit_CCDIK_RotationLimit> GetRotationLimits() {
		return memory.read<struct TArray<struct FRigUnit_CCDIK_RotationLimit>>(m_addr + 200);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 216);
	}
	struct FRigUnit_CCDIK_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_CCDIK_WorkData>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ChainHarmonicsPerItem
{
public:
	FRigUnit_ChainHarmonicsPerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetChainRoot() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	struct FVector GetSpeed() {
		return memory.read<struct FVector>(m_addr + 116);
	}
	struct FRigUnit_ChainHarmonics_Reach GetReach() {
		return memory.read<struct FRigUnit_ChainHarmonics_Reach>(m_addr + 128);
	}
	struct FRigUnit_ChainHarmonics_Wave GetWave() {
		return memory.read<struct FRigUnit_ChainHarmonics_Wave>(m_addr + 168);
	}
	struct FRuntimeFloatCurve GetWaveCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 232);
	}
	struct FRigUnit_ChainHarmonics_Pendulum GetPendulum() {
		return memory.read<struct FRigUnit_ChainHarmonics_Pendulum>(m_addr + 368);
	}
	bool GetbDrawDebug() {
		return memory.read<bool>(m_addr + 428);
	}
	struct FTransform GetDrawWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 432);
	}
	struct FRigUnit_ChainHarmonics_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_ChainHarmonics_WorkData>(m_addr + 480);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntLess
{
public:
	FRigUnit_MathIntLess(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetA() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateVectorColor_Target
{
public:
	FMathRBFInterpolateVectorColor_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTarget() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FLinearColor GetValue() {
		return memory.read<struct FLinearColor>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ChainHarmonics_WorkData
{
public:
	FRigUnit_ChainHarmonics_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTime() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct TArray<struct FCachedRigElement> GetItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 16);
	}
	struct TArray<float> GetRatio() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}
	struct TArray<struct FVector> GetLocalTip() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 48);
	}
	struct TArray<struct FVector> GetPendulumTip() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 64);
	}
	struct TArray<struct FVector> GetPendulumPosition() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 80);
	}
	struct TArray<struct FVector> GetPendulumVelocity() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 96);
	}
	struct TArray<struct FVector> GetHierarchyLine() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 112);
	}
	struct TArray<struct FVector> GetVelocityLines() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ChainHarmonics_Wave
{
public:
	FRigUnit_ChainHarmonics_Wave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FVector GetWaveFrequency() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetWaveAmplitude() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetWaveOffset() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct FVector GetWaveNoise() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	float GetWaveMinimum() {
		return memory.read<float>(m_addr + 52);
	}
	float GetWaveMaximum() {
		return memory.read<float>(m_addr + 56);
	}
	uint8_t  GetWaveEase() {
		return memory.read<uint8_t >(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_PointSimulation_WorkData
{
public:
	FRigUnit_PointSimulation_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCRSimPointContainer GetSimulation() {
		return memory.read<struct FCRSimPointContainer>(m_addr + 0);
	}
	struct TArray<struct FCachedRigElement> GetBoneIndices() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ChainHarmonics_Reach
{
public:
	FRigUnit_ChainHarmonics_Reach(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FVector GetReachTarget() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetReachAxis() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetReachMinimum() {
		return memory.read<float>(m_addr + 28);
	}
	float GetReachMaximum() {
		return memory.read<float>(m_addr + 32);
	}
	uint8_t  GetReachEase() {
		return memory.read<uint8_t >(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionBaseMutable
{
public:
	FRigUnit_CollectionBaseMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorAngle
{
public:
	FRigUnit_MathVectorAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPostSetup
{
public:
	FOnPostSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRigComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRigComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntNotEquals
{
public:
	FRigUnit_MathIntNotEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetA() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionLoop
{
public:
	FRigUnit_CollectionLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 104);
	}
	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 120);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 132);
	}
	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 136);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 140);
	}
	bool GetContinue() {
		return memory.read<bool>(m_addr + 144);
	}
	struct FControlRigExecuteContext GetCompleted() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateVectorQuat
{
public:
	FRigUnit_MathRBFInterpolateVectorQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateVectorQuat_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateVectorQuat_Target>>(m_addr + 176);
	}
	struct FQuat GetOutput() {
		return memory.read<struct FQuat>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionCount
{
public:
	FRigUnit_CollectionCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 8);
	}
	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionReverse
{
public:
	FRigUnit_CollectionReverse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 8);
	}
	struct FRigElementKeyCollection GetReversed() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorDot
{
public:
	FRigUnit_MathVectorDot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionDifference
{
public:
	FRigUnit_CollectionDifference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetA() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 8);
	}
	struct FRigElementKeyCollection GetB() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}
	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionUnion
{
public:
	FRigUnit_CollectionUnion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetA() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 8);
	}
	struct FRigElementKeyCollection GetB() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}
	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformInverse
{
public:
	FRigUnit_MathTransformInverse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionChildren
{
public:
	FRigUnit_CollectionChildren(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetParent() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	bool GetbIncludeParent() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetbRecursive() {
		return memory.read<bool>(m_addr + 21);
	}
	uint8_t  GetTypeToSearch() {
		return memory.read<uint8_t >(m_addr + 22);
	}
	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}
	struct FRigElementKeyCollection GetCachedCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 40);
	}
	int32_t GetCachedHierarchyHash() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionNameSearch
{
public:
	FRigUnit_CollectionNameSearch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPartialName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetTypeToSearch() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}
	struct FRigElementKeyCollection GetCachedCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 40);
	}
	int32_t GetCachedHierarchyHash() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionMul
{
public:
	FRigUnit_MathQuaternionMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FitChainToCurve_WorkData
{
public:
	FRigUnit_FitChainToCurve_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetChainLength() {
		return memory.read<float>(m_addr + 0);
	}
	struct TArray<struct FVector> GetItemPositions() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 8);
	}
	struct TArray<float> GetItemSegments() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}
	struct TArray<struct FVector> GetCurvePositions() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 40);
	}
	struct TArray<float> GetCurveSegments() {
		return memory.read<struct TArray<float>>(m_addr + 56);
	}
	struct TArray<struct FCachedRigElement> GetCachedItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 72);
	}
	struct TArray<int32_t> GetItemRotationA() {
		return memory.read<struct TArray<int32_t>>(m_addr + 88);
	}
	struct TArray<int32_t> GetItemRotationB() {
		return memory.read<struct TArray<int32_t>>(m_addr + 104);
	}
	struct TArray<float> GetItemRotationT() {
		return memory.read<struct TArray<float>>(m_addr + 120);
	}
	struct TArray<struct FTransform> GetItemLocalTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_CollectionChain
{
public:
	FRigUnit_CollectionChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetFirstItem() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	struct FRigElementKey GetLastItem() {
		return memory.read<struct FRigElementKey>(m_addr + 20);
	}
	bool GetReverse() {
		return memory.read<bool>(m_addr + 32);
	}
	struct FRigElementKeyCollection GetCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 40);
	}
	struct FRigElementKeyCollection GetCachedCollection() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 56);
	}
	int32_t GetCachedHierarchyHash() {
		return memory.read<int32_t>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddMappedElements
{
public:
	FAddMappedElements(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FControlRigComponentMappedElement> GetNewMappedElements() {
		return memory.read<struct TArray<struct FControlRigComponentMappedElement>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Control
{
public:
	FRigUnit_Control(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEulerTransform GetTransform() {
		return memory.read<struct FEulerTransform>(m_addr + 8);
	}
	struct FTransform GetBase() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FTransform GetInitTransform() {
		return memory.read<struct FTransform>(m_addr + 96);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 144);
	}
	struct FTransformFilter GetFilter() {
		return memory.read<struct FTransformFilter>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatClamp
{
public:
	FRigUnit_MathFloatClamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 16);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Control_StaticMesh
{
public:
	FRigUnit_Control_StaticMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetMeshTransform() {
		return memory.read<struct FTransform>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugLineStripItemSpace
{
public:
	FRigUnit_DebugLineStripItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetPoints() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 104);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 120);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 136);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 140);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatRemap
{
public:
	FRigUnit_MathFloatRemap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSourceMinimum() {
		return memory.read<float>(m_addr + 12);
	}
	float GetSourceMaximum() {
		return memory.read<float>(m_addr + 16);
	}
	float GetTargetMinimum() {
		return memory.read<float>(m_addr + 20);
	}
	float GetTargetMaximum() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetbClamp() {
		return memory.read<bool>(m_addr + 28);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertRotationToVector
{
public:
	FRigUnit_ConvertRotationToVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetInput() {
		return memory.read<struct FRotator>(m_addr + 8);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FABRIKPerItem
{
public:
	FRigUnit_FABRIKPerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetItems() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 104);
	}
	struct FTransform GetEffectorTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	float GetPrecision() {
		return memory.read<float>(m_addr + 176);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 180);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 184);
	}
	int32_t GetMaxIterations() {
		return memory.read<int32_t>(m_addr + 188);
	}
	struct FRigUnit_FABRIK_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_FABRIK_WorkData>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertVectorToQuaternion
{
public:
	FRigUnit_ConvertVectorToQuaternion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetInput() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertQuaternion
{
public:
	FRigUnit_ConvertQuaternion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetInput() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FRotator GetResult() {
		return memory.read<struct FRotator>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetControlInteger
{
public:
	FRigUnit_GetControlInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetIntegerValue() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetMinimum() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetMaximum() {
		return memory.read<int32_t>(m_addr + 24);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_QuaternionFromAxisAndAngle
{
public:
	FRigUnit_QuaternionFromAxisAndAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetAxis() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float Getangle() {
		return memory.read<float>(m_addr + 20);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertRotation
{
public:
	FRigUnit_ConvertRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetInput() {
		return memory.read<struct FRotator>(m_addr + 8);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Distance_VectorVector
{
public:
	FRigUnit_Distance_VectorVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetArgument0() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetArgument1() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertVectorRotation
{
public:
	FRigUnit_ConvertVectorRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ConvertEulerTransform
{
public:
	FRigUnit_ConvertEulerTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEulerTransform GetInput() {
		return memory.read<struct FEulerTransform>(m_addr + 8);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionScale
{
public:
	FRigUnit_MathQuaternionScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_PointSimulation
{
public:
	FRigUnit_PointSimulation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCRSimPoint> GetPoints() {
		return memory.read<struct TArray<struct FCRSimPoint>>(m_addr + 104);
	}
	struct TArray<struct FCRSimLinearSpring> GetLinks() {
		return memory.read<struct TArray<struct FCRSimLinearSpring>>(m_addr + 120);
	}
	struct TArray<struct FCRSimPointForce> GetForces() {
		return memory.read<struct TArray<struct FCRSimPointForce>>(m_addr + 136);
	}
	struct TArray<struct FCRSimSoftCollision> GetCollisionVolumes() {
		return memory.read<struct TArray<struct FCRSimSoftCollision>>(m_addr + 152);
	}
	float GetSimulatedStepsPerSecond() {
		return memory.read<float>(m_addr + 168);
	}
	uint8_t  GetIntegratorType() {
		return memory.read<uint8_t >(m_addr + 172);
	}
	float GetVerletBlend() {
		return memory.read<float>(m_addr + 176);
	}
	struct TArray<struct FRigUnit_PointSimulation_BoneTarget> GetBoneTargets() {
		return memory.read<struct TArray<struct FRigUnit_PointSimulation_BoneTarget>>(m_addr + 184);
	}
	bool GetbLimitLocalPosition() {
		return memory.read<bool>(m_addr + 200);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 201);
	}
	struct FVector GetPrimaryAimAxis() {
		return memory.read<struct FVector>(m_addr + 204);
	}
	struct FVector GetSecondaryAimAxis() {
		return memory.read<struct FVector>(m_addr + 216);
	}
	struct FRigUnit_PointSimulation_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_PointSimulation_DebugSettings>(m_addr + 240);
	}
	struct FCRFourPointBezier GetBezier() {
		return memory.read<struct FCRFourPointBezier>(m_addr + 320);
	}
	struct FRigUnit_PointSimulation_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_PointSimulation_WorkData>(m_addr + 368);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DistributeRotation_WorkData
{
public:
	FRigUnit_DistributeRotation_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCachedRigElement> GetCachedItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 0);
	}
	struct TArray<int32_t> GetItemRotationA() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}
	struct TArray<int32_t> GetItemRotationB() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	struct TArray<float> GetItemRotationT() {
		return memory.read<struct TArray<float>>(m_addr + 48);
	}
	struct TArray<struct FTransform> GetItemLocalTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEnabledChanged
{
public:
	FOnEnabledChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugBaseMutable
{
public:
	FRigUnit_DebugBaseMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugBase
{
public:
	FRigUnit_DebugBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetDeltaTime
{
public:
	FRigUnit_GetDeltaTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetResult() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugBezierItemSpace
{
public:
	FRigUnit_DebugBezierItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCRFourPointBezier GetBezier() {
		return memory.read<struct FCRFourPointBezier>(m_addr + 104);
	}
	float GetMinimumU() {
		return memory.read<float>(m_addr + 152);
	}
	float GetMaximumU() {
		return memory.read<float>(m_addr + 156);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 160);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 176);
	}
	int32_t GetDetail() {
		return memory.read<int32_t>(m_addr + 180);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 184);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugBezier
{
public:
	FRigUnit_DebugBezier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCRFourPointBezier GetBezier() {
		return memory.read<struct FCRFourPointBezier>(m_addr + 104);
	}
	float GetMinimumU() {
		return memory.read<float>(m_addr + 152);
	}
	float GetMaximumU() {
		return memory.read<float>(m_addr + 156);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 160);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 176);
	}
	int32_t GetDetail() {
		return memory.read<int32_t>(m_addr + 180);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 184);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 192);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugLineItemSpace
{
public:
	FRigUnit_DebugLineItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 104);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 116);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 128);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 144);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 148);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugPointMutable
{
public:
	FRigUnit_DebugPointMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetVector() {
		return memory.read<struct FVector>(m_addr + 104);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 116);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 120);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 136);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 140);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 144);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolNotEquals
{
public:
	FRigUnit_MathBoolNotEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetA() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetB() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 10);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugPoint
{
public:
	FRigUnit_DebugPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetVector() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 20);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 24);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 40);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 44);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 48);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugArcItemSpace
{
public:
	FRigUnit_DebugArcItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 160);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 176);
	}
	float GetMinimumDegrees() {
		return memory.read<float>(m_addr + 180);
	}
	float GetMaximumDegrees() {
		return memory.read<float>(m_addr + 184);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 188);
	}
	int32_t GetDetail() {
		return memory.read<int32_t>(m_addr + 192);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 196);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatCeil
{
public:
	FRigUnit_MathFloatCeil(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetInt() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugRectangle
{
public:
	FRigUnit_DebugRectangle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 160);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 176);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 180);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 184);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 192);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugTransformArrayMutable_WorkData
{
public:
	FRigUnit_DebugTransformArrayMutable_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTransform> GetDrawTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugTransformMutableItemSpace
{
public:
	FRigUnit_DebugTransformMutableItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 160);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 164);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 180);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 184);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 188);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorScale
{
public:
	FRigUnit_MathVectorScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetFactor() {
		return memory.read<float>(m_addr + 20);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DebugTransformMutable
{
public:
	FRigUnit_DebugTransformMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 160);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 164);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 180);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 184);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 188);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ToRigSpace_Rotation
{
public:
	FRigUnit_ToRigSpace_Rotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetGlobal() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DeltaFromPreviousTransform
{
public:
	FRigUnit_DeltaFromPreviousTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetDelta() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FTransform GetPreviousValue() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FTransform GetCache() {
		return memory.read<struct FTransform>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DeltaFromPreviousQuat
{
public:
	FRigUnit_DeltaFromPreviousQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetDelta() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	struct FQuat GetPreviousValue() {
		return memory.read<struct FQuat>(m_addr + 48);
	}
	struct FQuat GetCache() {
		return memory.read<struct FQuat>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DeltaFromPreviousVector
{
public:
	FRigUnit_DeltaFromPreviousVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetDelta() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetPreviousValue() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FVector GetCache() {
		return memory.read<struct FVector>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DeltaFromPreviousFloat
{
public:
	FRigUnit_DeltaFromPreviousFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDelta() {
		return memory.read<float>(m_addr + 12);
	}
	float GetPreviousValue() {
		return memory.read<float>(m_addr + 16);
	}
	float GetCache() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ForLoopCount
{
public:
	FRigUnit_ForLoopCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 108);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetContinue() {
		return memory.read<bool>(m_addr + 116);
	}
	struct FControlRigExecuteContext GetCompleted() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DistributeRotationForCollection
{
public:
	FRigUnit_DistributeRotationForCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetItems() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 104);
	}
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> GetRotations() {
		return memory.read<struct TArray<struct FRigUnit_DistributeRotation_Rotation>>(m_addr + 120);
	}
	uint8_t  GetRotationEaseType() {
		return memory.read<uint8_t >(m_addr + 136);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 140);
	}
	struct FRigUnit_DistributeRotation_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_DistributeRotation_WorkData>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorBezierFourPoint
{
public:
	FRigUnit_MathVectorBezierFourPoint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCRFourPointBezier GetBezier() {
		return memory.read<struct FCRFourPointBezier>(m_addr + 8);
	}
	float GetT() {
		return memory.read<float>(m_addr + 56);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	struct FVector GetTangent() {
		return memory.read<struct FVector>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DistributeRotation_Rotation
{
public:
	FRigUnit_DistributeRotation_Rotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_PointSimulation_DebugSettings
{
public:
	FRigUnit_PointSimulation_DebugSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 4);
	}
	float GetCollisionScale() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbDrawPointsAsSpheres() {
		return memory.read<bool>(m_addr + 12);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DistributeRotation
{
public:
	FRigUnit_DistributeRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetStartBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetEndBone() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct TArray<struct FRigUnit_DistributeRotation_Rotation> GetRotations() {
		return memory.read<struct TArray<struct FRigUnit_DistributeRotation_Rotation>>(m_addr + 120);
	}
	uint8_t  GetRotationEaseType() {
		return memory.read<uint8_t >(m_addr + 136);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 140);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 144);
	}
	struct FRigUnit_DistributeRotation_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_DistributeRotation_WorkData>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntMin
{
public:
	FRigUnit_MathIntMin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DrawContainerSetTransform
{
public:
	FRigUnit_DrawContainerSetTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInstructionName() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorNegate
{
public:
	FRigUnit_MathVectorNegate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DrawContainerSetThickness
{
public:
	FRigUnit_DrawContainerSetThickness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInstructionName() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetBoneTransform
{
public:
	FRigUnit_SetBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 208);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 212);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 216);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Add_VectorVector
{
public:
	FRigUnit_Add_VectorVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DrawContainerSetColor
{
public:
	FRigUnit_DrawContainerSetColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInstructionName() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_DrawContainerGetInstruction
{
public:
	FRigUnit_DrawContainerGetInstruction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInstructionName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FABRIK_WorkData
{
public:
	FRigUnit_FABRIK_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFABRIKChainLink> GetChain() {
		return memory.read<struct TArray<struct FFABRIKChainLink>>(m_addr + 0);
	}
	struct TArray<struct FCachedRigElement> GetCachedItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 16);
	}
	struct FCachedRigElement GetCachedEffector() {
		return memory.read<struct FCachedRigElement>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FABRIK
{
public:
	FRigUnit_FABRIK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetStartBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetEffectorBone() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct FTransform GetEffectorTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	float GetPrecision() {
		return memory.read<float>(m_addr + 176);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 180);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 184);
	}
	int32_t GetMaxIterations() {
		return memory.read<int32_t>(m_addr + 188);
	}
	struct FRigUnit_FABRIK_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_FABRIK_WorkData>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorDeg
{
public:
	FRigUnit_MathVectorDeg(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FitChainToCurvePerItem
{
public:
	FRigUnit_FitChainToCurvePerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetItems() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 104);
	}
	struct FCRFourPointBezier GetBezier() {
		return memory.read<struct FCRFourPointBezier>(m_addr + 120);
	}
	uint8_t  GetAlignment() {
		return memory.read<uint8_t >(m_addr + 168);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 172);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 176);
	}
	int32_t GetSamplingPrecision() {
		return memory.read<int32_t>(m_addr + 180);
	}
	struct FVector GetPrimaryAxis() {
		return memory.read<struct FVector>(m_addr + 184);
	}
	struct FVector GetSecondaryAxis() {
		return memory.read<struct FVector>(m_addr + 196);
	}
	struct FVector GetPoleVectorPosition() {
		return memory.read<struct FVector>(m_addr + 208);
	}
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> GetRotations() {
		return memory.read<struct TArray<struct FRigUnit_FitChainToCurve_Rotation>>(m_addr + 224);
	}
	uint8_t  GetRotationEaseType() {
		return memory.read<uint8_t >(m_addr + 240);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 244);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 248);
	}
	struct FRigUnit_FitChainToCurve_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_FitChainToCurve_DebugSettings>(m_addr + 256);
	}
	struct FRigUnit_FitChainToCurve_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_FitChainToCurve_WorkData>(m_addr + 352);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorUnaryOp
{
public:
	FRigUnit_MathVectorUnaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FitChainToCurve_DebugSettings
{
public:
	FRigUnit_FitChainToCurve_DebugSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 4);
	}
	struct FLinearColor GetCurveColor() {
		return memory.read<struct FLinearColor>(m_addr + 8);
	}
	struct FLinearColor GetSegmentsColor() {
		return memory.read<struct FLinearColor>(m_addr + 24);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FitChainToCurve_Rotation
{
public:
	FRigUnit_FitChainToCurve_Rotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FitChainToCurve
{
public:
	FRigUnit_FitChainToCurve(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetStartBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetEndBone() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct FCRFourPointBezier GetBezier() {
		return memory.read<struct FCRFourPointBezier>(m_addr + 120);
	}
	uint8_t  GetAlignment() {
		return memory.read<uint8_t >(m_addr + 168);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 172);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 176);
	}
	int32_t GetSamplingPrecision() {
		return memory.read<int32_t>(m_addr + 180);
	}
	struct FVector GetPrimaryAxis() {
		return memory.read<struct FVector>(m_addr + 184);
	}
	struct FVector GetSecondaryAxis() {
		return memory.read<struct FVector>(m_addr + 196);
	}
	struct FVector GetPoleVectorPosition() {
		return memory.read<struct FVector>(m_addr + 208);
	}
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> GetRotations() {
		return memory.read<struct TArray<struct FRigUnit_FitChainToCurve_Rotation>>(m_addr + 224);
	}
	uint8_t  GetRotationEaseType() {
		return memory.read<uint8_t >(m_addr + 240);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 244);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 248);
	}
	struct FRigUnit_FitChainToCurve_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_FitChainToCurve_DebugSettings>(m_addr + 256);
	}
	struct FRigUnit_FitChainToCurve_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_FitChainToCurve_WorkData>(m_addr + 352);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntUnaryOp
{
public:
	FRigUnit_MathIntUnaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetResult() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MapRange_Float
{
public:
	FRigUnit_MapRange_Float(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinIn() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaxIn() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMinOut() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaxOut() {
		return memory.read<float>(m_addr + 24);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BinaryFloatOp
{
public:
	FRigUnit_BinaryFloatOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetArgument0() {
		return memory.read<float>(m_addr + 8);
	}
	float GetArgument1() {
		return memory.read<float>(m_addr + 12);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Divide_FloatFloat
{
public:
	FRigUnit_Divide_FloatFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Subtract_FloatFloat
{
public:
	FRigUnit_Subtract_FloatFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Add_FloatFloat
{
public:
	FRigUnit_Add_FloatFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Multiply_FloatFloat
{
public:
	FRigUnit_Multiply_FloatFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FIsHovered
{
public:
	FIsHovered(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetControlTransform
{
public:
	FRigUnit_GetControlTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FTransform GetMinimum() {
		return memory.read<struct FTransform>(m_addr + 80);
	}
	struct FTransform GetMaximum() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetControlRotator
{
public:
	FRigUnit_GetControlRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FRotator GetRotator() {
		return memory.read<struct FRotator>(m_addr + 20);
	}
	struct FRotator GetMinimum() {
		return memory.read<struct FRotator>(m_addr + 32);
	}
	struct FRotator GetMaximum() {
		return memory.read<struct FRotator>(m_addr + 44);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetControlVector
{
public:
	FRigUnit_GetControlVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FVector GetVector() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetMinimum() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FVector GetMaximum() {
		return memory.read<struct FVector>(m_addr + 44);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_StartsWith
{
public:
	FRigUnit_StartsWith(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetStart() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatRad
{
public:
	FRigUnit_MathFloatRad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetControlVector2D
{
public:
	FRigUnit_GetControlVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FVector2D GetVector() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	struct FVector2D GetMinimum() {
		return memory.read<struct FVector2D>(m_addr + 24);
	}
	struct FVector2D GetMaximum() {
		return memory.read<struct FVector2D>(m_addr + 32);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetControlBool
{
public:
	FRigUnit_GetControlBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 8);
	}
	bool GetBoolValue() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorRemap
{
public:
	FRigUnit_MathVectorRemap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetSourceMinimum() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetSourceMaximum() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FVector GetTargetMinimum() {
		return memory.read<struct FVector>(m_addr + 44);
	}
	struct FVector GetTargetMaximum() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	bool GetbClamp() {
		return memory.read<bool>(m_addr + 68);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetJointTransform
{
public:
	FRigUnit_GetJointTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetJoint() {
		return memory.read<struct FName>(m_addr + 104);
	}
	uint8_t  GetType() {
		return memory.read<uint8_t >(m_addr + 112);
	}
	uint8_t  GetTransformSpace() {
		return memory.read<uint8_t >(m_addr + 113);
	}
	struct FTransform GetBaseTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	struct FName GetBaseJoint() {
		return memory.read<struct FName>(m_addr + 176);
	}
	struct FTransform GetOutput() {
		return memory.read<struct FTransform>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetRelativeBoneTransform
{
public:
	FRigUnit_GetRelativeBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 80);
	}
	struct FCachedRigElement GetCachedSpace() {
		return memory.read<struct FCachedRigElement>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatUnaryOp
{
public:
	FRigUnit_MathFloatUnaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetRelativeTransformForItem
{
public:
	FRigUnit_GetRelativeTransformForItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetChild() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	bool GetbChildInitial() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FRigElementKey GetParent() {
		return memory.read<struct FRigElementKey>(m_addr + 24);
	}
	bool GetbParentInitial() {
		return memory.read<bool>(m_addr + 36);
	}
	struct FTransform GetRelativeTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FCachedRigElement GetCachedChild() {
		return memory.read<struct FCachedRigElement>(m_addr + 96);
	}
	struct FCachedRigElement GetCachedParent() {
		return memory.read<struct FCachedRigElement>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetSpaceTransform
{
public:
	FRigUnit_GetSpaceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 8);
	}
	uint8_t  GetSpaceType() {
		return memory.read<uint8_t >(m_addr + 16);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FCachedRigElement GetCachedSpaceIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatAsin
{
public:
	FRigUnit_MathFloatAsin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_GetTransform
{
public:
	FRigUnit_GetTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 20);
	}
	bool GetbInitial() {
		return memory.read<bool>(m_addr + 21);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FCachedRigElement GetCachedIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_HierarchyBase
{
public:
	FRigUnit_HierarchyBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_HierarchyGetSiblings
{
public:
	FRigUnit_HierarchyGetSiblings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	bool GetbIncludeItem() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FRigElementKeyCollection GetSiblings() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}
	struct FCachedRigElement GetCachedItem() {
		return memory.read<struct FCachedRigElement>(m_addr + 40);
	}
	struct FRigElementKeyCollection GetCachedSiblings() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatLess
{
public:
	FRigUnit_MathFloatLess(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_HierarchyGetParents
{
public:
	FRigUnit_HierarchyGetParents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetChild() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	bool GetbIncludeChild() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetbReverse() {
		return memory.read<bool>(m_addr + 21);
	}
	struct FRigElementKeyCollection GetParents() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 24);
	}
	struct FCachedRigElement GetCachedChild() {
		return memory.read<struct FCachedRigElement>(m_addr + 40);
	}
	struct FRigElementKeyCollection GetCachedParents() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_HierarchyGetParent
{
public:
	FRigUnit_HierarchyGetParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetChild() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	struct FRigElementKey GetParent() {
		return memory.read<struct FRigElementKey>(m_addr + 20);
	}
	struct FCachedRigElement GetCachedChild() {
		return memory.read<struct FCachedRigElement>(m_addr + 32);
	}
	struct FCachedRigElement GetCachedParent() {
		return memory.read<struct FCachedRigElement>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlInteger
{
public:
	FRigUnit_SetMultiControlInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_SetMultiControlInteger_Entry> GetEntries() {
		return memory.read<struct TArray<struct FRigUnit_SetMultiControlInteger_Entry>>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 120);
	}
	struct TArray<struct FCachedRigElement> GetCachedControlIndices() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BinaryTransformOp
{
public:
	FRigUnit_BinaryTransformOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetArgument0() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetArgument1() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlVector2D
{
public:
	FSetControlVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector2D GetValue() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_InverseExecution
{
public:
	FRigUnit_InverseExecution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FControlRigExecuteContext GetExecuteContext() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_IsInteracting
{
public:
	FRigUnit_IsInteracting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsInteracting() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FStructReference
{
public:
	FStructReference(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ItemBase
{
public:
	FRigUnit_ItemBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionToAxisAndAngle
{
public:
	FRigUnit_MathQuaternionToAxisAndAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector GetAxis() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	float Getangle() {
		return memory.read<float>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ItemReplace
{
public:
	FRigUnit_ItemReplace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	struct FName GetOld() {
		return memory.read<struct FName>(m_addr + 20);
	}
	struct FName GetNew() {
		return memory.read<struct FName>(m_addr + 28);
	}
	struct FRigElementKey GetResult() {
		return memory.read<struct FRigElementKey>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ItemExists
{
public:
	FRigUnit_ItemExists(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	bool GetExists() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FCachedRigElement GetCachedIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TimeOffsetVector
{
public:
	FRigUnit_TimeOffsetVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetSecondsAgo() {
		return memory.read<float>(m_addr + 20);
	}
	int32_t GetBufferSize() {
		return memory.read<int32_t>(m_addr + 24);
	}
	float GetTimeRange() {
		return memory.read<float>(m_addr + 28);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct TArray<struct FVector> GetBuffer() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 48);
	}
	struct TArray<float> GetDeltaTimes() {
		return memory.read<struct TArray<float>>(m_addr + 64);
	}
	int32_t GetLastInsertIndex() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetUpperBound() {
		return memory.read<int32_t>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateQuatFloat_Target
{
public:
	FMathRBFInterpolateQuatFloat_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetTarget() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ToWorldSpace_Transform
{
public:
	FRigUnit_ToWorldSpace_Transform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetWorld() {
		return memory.read<struct FTransform>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ItemBaseMutable
{
public:
	FRigUnit_ItemBaseMutable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_KalmanTransform
{
public:
	FRigUnit_KalmanTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	int32_t GetBufferSize() {
		return memory.read<int32_t>(m_addr + 64);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 80);
	}
	struct TArray<struct FTransform> GetBuffer() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 128);
	}
	int32_t GetLastInsertIndex() {
		return memory.read<int32_t>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_KalmanVector
{
public:
	FRigUnit_KalmanVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	int32_t GetBufferSize() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct TArray<struct FVector> GetBuffer() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 40);
	}
	int32_t GetLastInsertIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBase
{
public:
	FRigUnit_MathBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlRotator_Entry
{
public:
	FRigUnit_SetMultiControlRotator_Entry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FRotator GetRotator() {
		return memory.read<struct FRotator>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolEquals
{
public:
	FRigUnit_MathBoolEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetA() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetB() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 10);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolBinaryOp
{
public:
	FRigUnit_MathBoolBinaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetA() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetB() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 10);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolOr
{
public:
	FRigUnit_MathBoolOr(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolNand
{
public:
	FRigUnit_MathBoolNand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntAdd
{
public:
	FRigUnit_MathIntAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolAnd
{
public:
	FRigUnit_MathBoolAnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Timeline
{
public:
	FRigUnit_Timeline(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 12);
	}
	float GetAccumulatedValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatConstant
{
public:
	FRigUnit_MathFloatConstant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlInt
{
public:
	FGetControlInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolUnaryOp
{
public:
	FRigUnit_MathBoolUnaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolNot
{
public:
	FRigUnit_MathBoolNot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlRotator
{
public:
	FRigUnit_SetControlRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 112);
	}
	struct FRotator GetRotator() {
		return memory.read<struct FRotator>(m_addr + 116);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 128);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolConstant
{
public:
	FRigUnit_MathBoolConstant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolConstFalse
{
public:
	FRigUnit_MathBoolConstFalse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntMul
{
public:
	FRigUnit_MathIntMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathBoolConstTrue
{
public:
	FRigUnit_MathBoolConstTrue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_VisualDebugTransform
{
public:
	FRigUnit_VisualDebugTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 64);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 68);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 72);
	}
	struct FName GetBoneSpace() {
		return memory.read<struct FName>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateQuatXform_Target
{
public:
	FMathRBFInterpolateQuatXform_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetTarget() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathColorBase
{
public:
	FRigUnit_MathColorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatSign
{
public:
	FRigUnit_MathFloatSign(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionFromEuler
{
public:
	FRigUnit_MathQuaternionFromEuler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetEuler() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	uint8_t  GetRotationOrder() {
		return memory.read<uint8_t >(m_addr + 20);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ParentSwitchConstraint
{
public:
	FRigUnit_ParentSwitchConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetSubject() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	int32_t GetParentIndex() {
		return memory.read<int32_t>(m_addr + 116);
	}
	struct FRigElementKeyCollection GetParents() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 120);
	}
	struct FTransform GetInitialGlobalTransform() {
		return memory.read<struct FTransform>(m_addr + 144);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 192);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	bool GetSwitched() {
		return memory.read<bool>(m_addr + 256);
	}
	struct FCachedRigElement GetCachedSubject() {
		return memory.read<struct FCachedRigElement>(m_addr + 260);
	}
	struct FCachedRigElement GetCachedParent() {
		return memory.read<struct FCachedRigElement>(m_addr + 280);
	}
	struct FTransform GetRelativeOffset() {
		return memory.read<struct FTransform>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathColorMul
{
public:
	FRigUnit_MathColorMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionFromAxisAndAngle
{
public:
	FRigUnit_MathQuaternionFromAxisAndAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetAxis() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float Getangle() {
		return memory.read<float>(m_addr + 20);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathColorAdd
{
public:
	FRigUnit_MathColorAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ToRigSpace_Transform
{
public:
	FRigUnit_ToRigSpace_Transform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetGlobal() {
		return memory.read<struct FTransform>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathColorFromFloat
{
public:
	FRigUnit_MathColorFromFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	struct FLinearColor GetResult() {
		return memory.read<struct FLinearColor>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatBase
{
public:
	FRigUnit_MathFloatBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatLawOfCosine
{
public:
	FRigUnit_MathFloatLawOfCosine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	float GetC() {
		return memory.read<float>(m_addr + 16);
	}
	float GetAlphaAngle() {
		return memory.read<float>(m_addr + 20);
	}
	float GetBetaAngle() {
		return memory.read<float>(m_addr + 24);
	}
	float GetGammaAngle() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetbValid() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatAtan
{
public:
	FRigUnit_MathFloatAtan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatAcos
{
public:
	FRigUnit_MathFloatAcos(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatTan
{
public:
	FRigUnit_MathFloatTan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatCos
{
public:
	FRigUnit_MathFloatCos(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatDeg
{
public:
	FRigUnit_MathFloatDeg(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformSelectBool
{
public:
	FRigUnit_MathTransformSelectBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCondition() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FTransform GetIfTrue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetIfFalse() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ToWorldSpace_Rotation
{
public:
	FRigUnit_ToWorldSpace_Rotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetWorld() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatSelectBool
{
public:
	FRigUnit_MathFloatSelectBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCondition() {
		return memory.read<bool>(m_addr + 8);
	}
	float GetIfTrue() {
		return memory.read<float>(m_addr + 12);
	}
	float GetIfFalse() {
		return memory.read<float>(m_addr + 16);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatIsNearlyEqual
{
public:
	FRigUnit_MathFloatIsNearlyEqual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	float GetTolerance() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatLessEqual
{
public:
	FRigUnit_MathFloatLessEqual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatGreaterEqual
{
public:
	FRigUnit_MathFloatGreaterEqual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatGreater
{
public:
	FRigUnit_MathFloatGreater(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformRotateVector
{
public:
	FRigUnit_MathTransformRotateVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatNotEquals
{
public:
	FRigUnit_MathFloatNotEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ToWorldSpace_Location
{
public:
	FRigUnit_ToWorldSpace_Location(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetWorld() {
		return memory.read<struct FVector>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MultiplyTransform
{
public:
	FRigUnit_MultiplyTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatEquals
{
public:
	FRigUnit_MathFloatEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatMul
{
public:
	FRigUnit_MathFloatMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatToInt
{
public:
	FRigUnit_MathFloatToInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetResult() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatRound
{
public:
	FRigUnit_MathFloatRound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetInt() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateQuatFloat
{
public:
	FRigUnit_MathRBFInterpolateQuatFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateQuatFloat_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateQuatFloat_Target>>(m_addr + 208);
	}
	float GetOutput() {
		return memory.read<float>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatFloor
{
public:
	FRigUnit_MathFloatFloor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetInt() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatAbs
{
public:
	FRigUnit_MathFloatAbs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SpringIK_WorkData
{
public:
	FRigUnit_SpringIK_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCachedRigElement> GetCachedBones() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 0);
	}
	struct FCachedRigElement GetCachedPoleVector() {
		return memory.read<struct FCachedRigElement>(m_addr + 16);
	}
	struct TArray<struct FTransform> GetTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 40);
	}
	struct FCRSimPointContainer GetSimulation() {
		return memory.read<struct FCRSimPointContainer>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatBinaryOp
{
public:
	FRigUnit_MathFloatBinaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetA() {
		return memory.read<float>(m_addr + 8);
	}
	float GetB() {
		return memory.read<float>(m_addr + 12);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnabled
{
public:
	FSetEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatMax
{
public:
	FRigUnit_MathFloatMax(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatMin
{
public:
	FRigUnit_MathFloatMin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatMod
{
public:
	FRigUnit_MathFloatMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntMax
{
public:
	FRigUnit_MathIntMax(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatDiv
{
public:
	FRigUnit_MathFloatDiv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatSub
{
public:
	FRigUnit_MathFloatSub(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatAdd
{
public:
	FRigUnit_MathFloatAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatConstTwoPi
{
public:
	FRigUnit_MathFloatConstTwoPi(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSetInitialBoneTransform
{
public:
	FSetInitialBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 64);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 65);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddMappedSkeletalMesh
{
public:
	FAddMappedSkeletalMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetSkeletalMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct TArray<struct FControlRigComponentMappedBone> GetBones() {
		return memory.read<struct TArray<struct FControlRigComponentMappedBone>>(m_addr + 8);
	}
	struct TArray<struct FControlRigComponentMappedCurve> GetCurves() {
		return memory.read<struct TArray<struct FControlRigComponentMappedCurve>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatConstHalfPi
{
public:
	FRigUnit_MathFloatConstHalfPi(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FUpdate
{
public:
	FUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TimeOffsetTransform
{
public:
	FRigUnit_TimeOffsetTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	float GetSecondsAgo() {
		return memory.read<float>(m_addr + 64);
	}
	int32_t GetBufferSize() {
		return memory.read<int32_t>(m_addr + 68);
	}
	float GetTimeRange() {
		return memory.read<float>(m_addr + 72);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 80);
	}
	struct TArray<struct FTransform> GetBuffer() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 128);
	}
	struct TArray<float> GetDeltaTimes() {
		return memory.read<struct TArray<float>>(m_addr + 144);
	}
	int32_t GetLastInsertIndex() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetUpperBound() {
		return memory.read<int32_t>(m_addr + 164);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathFloatConstPi
{
public:
	FRigUnit_MathFloatConstPi(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorRound
{
public:
	FRigUnit_MathVectorRound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwoBoneIKSimpleVectors
{
public:
	FRigUnit_TwoBoneIKSimpleVectors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetRoot() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetPoleVector() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetEffector() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	bool GetbEnableStretch() {
		return memory.read<bool>(m_addr + 44);
	}
	float GetStretchStartRatio() {
		return memory.read<float>(m_addr + 48);
	}
	float GetStretchMaximumRatio() {
		return memory.read<float>(m_addr + 52);
	}
	float GetBoneALength() {
		return memory.read<float>(m_addr + 56);
	}
	float GetBoneBLength() {
		return memory.read<float>(m_addr + 60);
	}
	struct FVector GetElbow() {
		return memory.read<struct FVector>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntBase
{
public:
	FRigUnit_MathIntBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntLessEqual
{
public:
	FRigUnit_MathIntLessEqual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetA() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorFromFloat
{
public:
	FRigUnit_MathVectorFromFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntGreaterEqual
{
public:
	FRigUnit_MathIntGreaterEqual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetA() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntClamp
{
public:
	FRigUnit_MathIntClamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetMinimum() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetMaximum() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetResult() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntSign
{
public:
	FRigUnit_MathIntSign(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateVectorFloat_Target
{
public:
	FMathRBFInterpolateVectorFloat_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTarget() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlFloat
{
public:
	FRigUnit_SetMultiControlFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_SetMultiControlFloat_Entry> GetEntries() {
		return memory.read<struct TArray<struct FRigUnit_SetMultiControlFloat_Entry>>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 120);
	}
	struct TArray<struct FCachedRigElement> GetCachedControlIndices() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_UnaryQuaternionOp
{
public:
	FRigUnit_UnaryQuaternionOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetArgument() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntAbs
{
public:
	FRigUnit_MathIntAbs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntNegate
{
public:
	FRigUnit_MathIntNegate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ModifyBoneTransforms_PerBone
{
public:
	FRigUnit_ModifyBoneTransforms_PerBone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntBinaryOp
{
public:
	FRigUnit_MathIntBinaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetA() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetResult() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateVectorFloat
{
public:
	FRigUnit_MathRBFInterpolateVectorFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateVectorFloat_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateVectorFloat_Target>>(m_addr + 176);
	}
	float GetOutput() {
		return memory.read<float>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlInteger
{
public:
	FRigUnit_SetControlInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	int32_t GetWeight() {
		return memory.read<int32_t>(m_addr + 112);
	}
	int32_t GetIntegerValue() {
		return memory.read<int32_t>(m_addr + 116);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntMod
{
public:
	FRigUnit_MathIntMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateQuatQuat
{
public:
	FRigUnit_MathRBFInterpolateQuatQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateQuatQuat_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateQuatQuat_Target>>(m_addr + 208);
	}
	struct FQuat GetOutput() {
		return memory.read<struct FQuat>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformBinaryOp
{
public:
	FRigUnit_MathTransformBinaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetA() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetB() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntDiv
{
public:
	FRigUnit_MathIntDiv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntSub
{
public:
	FRigUnit_MathIntSub(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionRotationOrder
{
public:
	FRigUnit_MathQuaternionRotationOrder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetRotationOrder() {
		return memory.read<uint8_t >(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionGetAxis
{
public:
	FRigUnit_MathQuaternionGetAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetQuaternion() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	char EAxis GetAxis() {
		return memory.read<char EAxis>(m_addr + 32);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionDot
{
public:
	FRigUnit_MathQuaternionDot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetA() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetB() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwoBoneIKSimplePerItem
{
public:
	FRigUnit_TwoBoneIKSimplePerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItemA() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	struct FRigElementKey GetItemB() {
		return memory.read<struct FRigElementKey>(m_addr + 116);
	}
	struct FRigElementKey GetEffectorItem() {
		return memory.read<struct FRigElementKey>(m_addr + 128);
	}
	struct FTransform GetEffector() {
		return memory.read<struct FTransform>(m_addr + 144);
	}
	struct FVector GetPrimaryAxis() {
		return memory.read<struct FVector>(m_addr + 192);
	}
	struct FVector GetSecondaryAxis() {
		return memory.read<struct FVector>(m_addr + 204);
	}
	float GetSecondaryAxisWeight() {
		return memory.read<float>(m_addr + 216);
	}
	struct FVector GetPoleVector() {
		return memory.read<struct FVector>(m_addr + 220);
	}
	uint8_t  GetPoleVectorKind() {
		return memory.read<uint8_t >(m_addr + 232);
	}
	struct FRigElementKey GetPoleVectorSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 236);
	}
	bool GetbEnableStretch() {
		return memory.read<bool>(m_addr + 248);
	}
	float GetStretchStartRatio() {
		return memory.read<float>(m_addr + 252);
	}
	float GetStretchMaximumRatio() {
		return memory.read<float>(m_addr + 256);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 260);
	}
	float GetItemALength() {
		return memory.read<float>(m_addr + 264);
	}
	float GetItemBLength() {
		return memory.read<float>(m_addr + 268);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 272);
	}
	struct FRigUnit_TwoBoneIKSimple_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_TwoBoneIKSimple_DebugSettings>(m_addr + 288);
	}
	struct FCachedRigElement GetCachedItemAIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 352);
	}
	struct FCachedRigElement GetCachedItemBIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 372);
	}
	struct FCachedRigElement GetCachedEffectorItemIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 392);
	}
	struct FCachedRigElement GetCachedPoleVectorSpaceIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 412);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformUnaryOp
{
public:
	FRigUnit_MathTransformUnaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionSelectBool
{
public:
	FRigUnit_MathQuaternionSelectBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCondition() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FQuat GetIfTrue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetIfFalse() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionNotEquals
{
public:
	FRigUnit_MathQuaternionNotEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetA() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetB() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionEquals
{
public:
	FRigUnit_MathQuaternionEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetA() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetB() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionSlerp
{
public:
	FRigUnit_MathQuaternionSlerp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetA() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetB() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	float GetT() {
		return memory.read<float>(m_addr + 48);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionBinaryOp
{
public:
	FRigUnit_MathQuaternionBinaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetA() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetB() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionToRotator
{
public:
	FRigUnit_MathQuaternionToRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FRotator GetResult() {
		return memory.read<struct FRotator>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionToEuler
{
public:
	FRigUnit_MathQuaternionToEuler(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	uint8_t  GetRotationOrder() {
		return memory.read<uint8_t >(m_addr + 32);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathQuaternionFromTwoVectors
{
public:
	FRigUnit_MathQuaternionFromTwoVectors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TransformConstraint_WorkData
{
public:
	FRigUnit_TransformConstraint_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FConstraintData> GetConstraintData() {
		return memory.read<struct TArray<struct FConstraintData>>(m_addr + 0);
	}
	struct TMap<int32_t, int32_t> GetConstraintDataToTargets() {
		return memory.read<struct TMap<int32_t, int32_t>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateBase
{
public:
	FRigUnit_MathRBFInterpolateBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateQuatWorkData
{
public:
	FRigUnit_MathRBFInterpolateQuatWorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateVectorBase
{
public:
	FRigUnit_MathRBFInterpolateVectorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetInput() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	uint8_t  GetDistanceFunction() {
		return memory.read<uint8_t >(m_addr + 20);
	}
	uint8_t  GetSmoothingFunction() {
		return memory.read<uint8_t >(m_addr + 21);
	}
	float GetSmoothingRadius() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetbNormalizeOutput() {
		return memory.read<bool>(m_addr + 28);
	}
	struct FRigUnit_MathRBFInterpolateVectorWorkData GetWorkData() {
		return memory.read<struct FRigUnit_MathRBFInterpolateVectorWorkData>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_NameBase
{
public:
	FRigUnit_NameBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateVectorXform
{
public:
	FRigUnit_MathRBFInterpolateVectorXform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateVectorXform_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateVectorXform_Target>>(m_addr + 176);
	}
	struct FTransform GetOutput() {
		return memory.read<struct FTransform>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorSelectBool
{
public:
	FRigUnit_MathVectorSelectBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCondition() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FVector GetIfTrue() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetIfFalse() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateVectorColor
{
public:
	FRigUnit_MathRBFInterpolateVectorColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateVectorColor_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateVectorColor_Target>>(m_addr + 176);
	}
	struct FLinearColor GetOutput() {
		return memory.read<struct FLinearColor>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateVectorVector
{
public:
	FRigUnit_MathRBFInterpolateVectorVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateVectorVector_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateVectorVector_Target>>(m_addr + 176);
	}
	struct FVector GetOutput() {
		return memory.read<struct FVector>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorAbs
{
public:
	FRigUnit_MathVectorAbs(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateVectorVector_Target
{
public:
	FMathRBFInterpolateVectorVector_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTarget() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateQuatXform
{
public:
	FRigUnit_MathRBFInterpolateQuatXform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateQuatXform_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateQuatXform_Target>>(m_addr + 208);
	}
	struct FTransform GetOutput() {
		return memory.read<struct FTransform>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateQuatQuat_Target
{
public:
	FMathRBFInterpolateQuatQuat_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetTarget() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformFromEulerTransform
{
public:
	FRigUnit_MathTransformFromEulerTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEulerTransform GetEulerTransform() {
		return memory.read<struct FEulerTransform>(m_addr + 8);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathRBFInterpolateQuatColor
{
public:
	FRigUnit_MathRBFInterpolateQuatColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMathRBFInterpolateQuatColor_Target> GetTargets() {
		return memory.read<struct TArray<struct FMathRBFInterpolateQuatColor_Target>>(m_addr + 208);
	}
	struct FLinearColor GetOutput() {
		return memory.read<struct FLinearColor>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPostInitialize
{
public:
	FOnPostInitialize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRigComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRigComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateQuatColor_Target
{
public:
	FMathRBFInterpolateQuatColor_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetTarget() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	struct FLinearColor GetValue() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TransformConstraintPerItem
{
public:
	FRigUnit_TransformConstraintPerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	uint8_t  GetBaseTransformSpace() {
		return memory.read<uint8_t >(m_addr + 116);
	}
	struct FTransform GetBaseTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	struct FRigElementKey GetBaseItem() {
		return memory.read<struct FRigElementKey>(m_addr + 176);
	}
	struct TArray<struct FConstraintTarget> GetTargets() {
		return memory.read<struct TArray<struct FConstraintTarget>>(m_addr + 192);
	}
	bool GetbUseInitialTransforms() {
		return memory.read<bool>(m_addr + 208);
	}
	struct FRigUnit_TransformConstraint_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_TransformConstraint_WorkData>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlVector2D
{
public:
	FRigUnit_SetMultiControlVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry> GetEntries() {
		return memory.read<struct TArray<struct FRigUnit_SetMultiControlVector2D_Entry>>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 120);
	}
	struct TArray<struct FCachedRigElement> GetCachedControlIndices() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FMathRBFInterpolateQuatVector_Target
{
public:
	FMathRBFInterpolateQuatVector_Target(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetTarget() {
		return memory.read<struct FQuat>(m_addr + 0);
	}
	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformClampSpatially
{
public:
	FRigUnit_MathTransformClampSpatially(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	char EAxis GetAxis() {
		return memory.read<char EAxis>(m_addr + 64);
	}
	char EControlRigClampSpatialMode GetType() {
		return memory.read<char EControlRigClampSpatialMode>(m_addr + 65);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 68);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 72);
	}
	struct FTransform GetSpace() {
		return memory.read<struct FTransform>(m_addr + 80);
	}
	bool GetbDrawDebug() {
		return memory.read<bool>(m_addr + 128);
	}
	struct FLinearColor GetDebugColor() {
		return memory.read<struct FLinearColor>(m_addr + 132);
	}
	float GetDebugThickness() {
		return memory.read<float>(m_addr + 148);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformFromSRT
{
public:
	FRigUnit_MathTransformFromSRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetRotation() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	uint8_t  GetRotationOrder() {
		return memory.read<uint8_t >(m_addr + 32);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 48);
	}
	struct FEulerTransform GetEulerTransform() {
		return memory.read<struct FEulerTransform>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformTransformVector
{
public:
	FRigUnit_MathTransformTransformVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformMakeAbsolute
{
public:
	FRigUnit_MathTransformMakeAbsolute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetLocal() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FTransform GetParent() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FTransform GetGlobal() {
		return memory.read<struct FTransform>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathTransformMul
{
public:
	FRigUnit_MathTransformMul(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlVisibility
{
public:
	FRigUnit_SetControlVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	struct FString GetPattern() {
		return memory.read<struct FString>(m_addr + 120);
	}
	bool GetbVisible() {
		return memory.read<bool>(m_addr + 136);
	}
	struct TArray<struct FCachedRigElement> GetCachedControlIndices() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorSign
{
public:
	FRigUnit_MathVectorSign(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorBase
{
public:
	FRigUnit_MathVectorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathIntersectPlane
{
public:
	FRigUnit_MathIntersectPlane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetStart() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetPlanePoint() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FVector GetPlaneNormal() {
		return memory.read<struct FVector>(m_addr + 44);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlRotator
{
public:
	FRigUnit_SetMultiControlRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_SetMultiControlRotator_Entry> GetEntries() {
		return memory.read<struct TArray<struct FRigUnit_SetMultiControlRotator_Entry>>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 120);
	}
	struct TArray<struct FCachedRigElement> GetCachedControlIndices() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorOrthogonal
{
public:
	FRigUnit_MathVectorOrthogonal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorMirror
{
public:
	FRigUnit_MathVectorMirror(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorClampLength
{
public:
	FRigUnit_MathVectorClampLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetMinimumLength() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaximumLength() {
		return memory.read<float>(m_addr + 24);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlRotator
{
public:
	FSetControlRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FRotator GetValue() {
		return memory.read<struct FRotator>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorSetLength
{
public:
	FRigUnit_MathVectorSetLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetLength() {
		return memory.read<float>(m_addr + 20);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorBinaryOp
{
public:
	FRigUnit_MathVectorBinaryOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorCross
{
public:
	FRigUnit_MathVectorCross(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorDistance
{
public:
	FRigUnit_MathVectorDistance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorRad
{
public:
	FRigUnit_MathVectorRad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorEquals
{
public:
	FRigUnit_MathVectorEquals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetA() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetB() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorFloor
{
public:
	FRigUnit_MathVectorFloor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorMax
{
public:
	FRigUnit_MathVectorMax(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorMin
{
public:
	FRigUnit_MathVectorMin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorMod
{
public:
	FRigUnit_MathVectorMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorDiv
{
public:
	FRigUnit_MathVectorDiv(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_PrepareForExecution
{
public:
	FRigUnit_PrepareForExecution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FControlRigExecuteContext GetExecuteContext() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorSub
{
public:
	FRigUnit_MathVectorSub(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_MathVectorAdd
{
public:
	FRigUnit_MathVectorAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ModifyBoneTransforms
{
public:
	FRigUnit_ModifyBoneTransforms(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> GetBoneToModify() {
		return memory.read<struct TArray<struct FRigUnit_ModifyBoneTransforms_PerBone>>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 120);
	}
	float GetWeightMinimum() {
		return memory.read<float>(m_addr + 124);
	}
	float GetWeightMaximum() {
		return memory.read<float>(m_addr + 128);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 132);
	}
	struct FRigUnit_ModifyBoneTransforms_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_ModifyBoneTransforms_WorkData>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ModifyTransforms_WorkData
{
public:
	FRigUnit_ModifyTransforms_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCachedRigElement> GetCachedItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ModifyTransforms
{
public:
	FRigUnit_ModifyTransforms(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_ModifyTransforms_PerItem> GetItemToModify() {
		return memory.read<struct TArray<struct FRigUnit_ModifyTransforms_PerItem>>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 120);
	}
	float GetWeightMinimum() {
		return memory.read<float>(m_addr + 124);
	}
	float GetWeightMaximum() {
		return memory.read<float>(m_addr + 128);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 132);
	}
	struct FRigUnit_ModifyTransforms_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_ModifyTransforms_WorkData>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ModifyTransforms_PerItem
{
public:
	FRigUnit_ModifyTransforms_PerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Contains
{
public:
	FRigUnit_Contains(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetSearch() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_EndsWith
{
public:
	FRigUnit_EndsWith(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetEnding() {
		return memory.read<struct FName>(m_addr + 16);
	}
	bool GetResult() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_NameReplace
{
public:
	FRigUnit_NameReplace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetOld() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FName GetNew() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct FName GetResult() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_NameTruncate
{
public:
	FRigUnit_NameTruncate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	int32_t GetCount() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetFromEnd() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FName GetRemainder() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct FName GetChopped() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlVector
{
public:
	FRigUnit_SetControlVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 112);
	}
	struct FVector GetVector() {
		return memory.read<struct FVector>(m_addr + 116);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 128);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_NoiseFloat
{
public:
	FRigUnit_NoiseFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSpeed() {
		return memory.read<float>(m_addr + 12);
	}
	float GetFrequency() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 20);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 24);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 28);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_NameConcat
{
public:
	FRigUnit_NameConcat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetA() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FName GetB() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FName GetResult() {
		return memory.read<struct FName>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlTransform
{
public:
	FGetControlTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_NoiseVector
{
public:
	FRigUnit_NoiseVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetSpeed() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetFrequency() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 44);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 48);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 52);
	}
	struct FVector GetTime() {
		return memory.read<struct FVector>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_OffsetTransformForItem
{
public:
	FRigUnit_OffsetTransformForItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	struct FTransform GetOffsetTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 176);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 180);
	}
	struct FCachedRigElement GetCachedIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_EndProfilingTimer
{
public:
	FRigUnit_EndProfilingTimer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfMeasurements() {
		return memory.read<int32_t>(m_addr + 104);
	}
	struct FString Getprefix() {
		return memory.read<struct FString>(m_addr + 112);
	}
	float GetAccumulatedTime() {
		return memory.read<float>(m_addr + 128);
	}
	int32_t GetMeasurementsLeft() {
		return memory.read<int32_t>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ProjectTransformToNewParent
{
public:
	FRigUnit_ProjectTransformToNewParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetChild() {
		return memory.read<struct FRigElementKey>(m_addr + 8);
	}
	bool GetbChildInitial() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FRigElementKey GetOldParent() {
		return memory.read<struct FRigElementKey>(m_addr + 24);
	}
	bool GetbOldParentInitial() {
		return memory.read<bool>(m_addr + 36);
	}
	struct FRigElementKey GetNewParent() {
		return memory.read<struct FRigElementKey>(m_addr + 40);
	}
	bool GetbNewParentInitial() {
		return memory.read<bool>(m_addr + 52);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 64);
	}
	struct FCachedRigElement GetCachedChild() {
		return memory.read<struct FCachedRigElement>(m_addr + 112);
	}
	struct FCachedRigElement GetCachedOldParent() {
		return memory.read<struct FCachedRigElement>(m_addr + 132);
	}
	struct FCachedRigElement GetCachedNewParent() {
		return memory.read<struct FCachedRigElement>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_QuaternionToAngle
{
public:
	FRigUnit_QuaternionToAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetAxis() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FQuat GetArgument() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	float Getangle() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_QuaternionToAxisAndAngle
{
public:
	FRigUnit_QuaternionToAxisAndAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetArgument() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector GetAxis() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	float Getangle() {
		return memory.read<float>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_InverseQuaterion
{
public:
	FRigUnit_InverseQuaterion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BinaryQuaternionOp
{
public:
	FRigUnit_BinaryQuaternionOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetArgument0() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FQuat GetArgument1() {
		return memory.read<struct FQuat>(m_addr + 32);
	}
	struct FQuat GetResult() {
		return memory.read<struct FQuat>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_RandomVector
{
public:
	FRigUnit_RandomVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSeed() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetMinimum() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaximum() {
		return memory.read<float>(m_addr + 16);
	}
	float GetDuration() {
		return memory.read<float>(m_addr + 20);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetLastResult() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	int32_t GetLastSeed() {
		return memory.read<int32_t>(m_addr + 48);
	}
	float GetTimeLeft() {
		return memory.read<float>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SendEvent
{
public:
	FRigUnit_SendEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetEvent() {
		return memory.read<uint8_t >(m_addr + 104);
	}
	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 108);
	}
	float GetOffsetInSeconds() {
		return memory.read<float>(m_addr + 120);
	}
	bool GetbEnable() {
		return memory.read<bool>(m_addr + 124);
	}
	bool GetbOnlyDuringInteraction() {
		return memory.read<bool>(m_addr + 125);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SequenceExecution
{
public:
	FRigUnit_SequenceExecution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FControlRigExecuteContext GetExecuteContext() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 8);
	}
	struct FControlRigExecuteContext GetA() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 104);
	}
	struct FControlRigExecuteContext GetB() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 200);
	}
	struct FControlRigExecuteContext GetC() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 296);
	}
	struct FControlRigExecuteContext GetD() {
		return memory.read<struct FControlRigExecuteContext>(m_addr + 392);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlColor
{
public:
	FRigUnit_SetControlColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 112);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlOffset
{
public:
	FRigUnit_SetControlOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FTransform GetOffset() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 160);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 164);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlVector2D_Entry
{
public:
	FRigUnit_SetMultiControlVector2D_Entry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector2D GetVector() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlInteger_Entry
{
public:
	FRigUnit_SetMultiControlInteger_Entry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetIntegerValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlFloat
{
public:
	FRigUnit_SetControlFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 112);
	}
	float GetFloatValue() {
		return memory.read<float>(m_addr + 116);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInteractionRig
{
public:
	FGetInteractionRig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlBool
{
public:
	FRigUnit_SetMultiControlBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRigUnit_SetMultiControlBool_Entry> GetEntries() {
		return memory.read<struct TArray<struct FRigUnit_SetMultiControlBool_Entry>>(m_addr + 104);
	}
	struct TArray<struct FCachedRigElement> GetCachedControlIndices() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetMultiControlBool_Entry
{
public:
	FRigUnit_SetMultiControlBool_Entry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetBoolValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTransformChanged
{
public:
	FOnTransformChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetNewTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetControlBool
{
public:
	FRigUnit_SetControlBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControl() {
		return memory.read<struct FName>(m_addr + 104);
	}
	bool GetBoolValue() {
		return memory.read<bool>(m_addr + 112);
	}
	struct FCachedRigElement GetCachedControlIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddMappedComponents
{
public:
	FAddMappedComponents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FControlRigComponentMappedComponent> GetComponents() {
		return memory.read<struct TArray<struct FControlRigComponentMappedComponent>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetCurveValue
{
public:
	FRigUnit_SetCurveValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCurve() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 112);
	}
	struct FCachedRigElement GetCachedCurveIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetRelativeBoneTransform
{
public:
	FRigUnit_SetRelativeBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 176);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 180);
	}
	struct FCachedRigElement GetCachedBone() {
		return memory.read<struct FCachedRigElement>(m_addr + 184);
	}
	struct FCachedRigElement GetCachedSpaceIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 204);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetSpaceInitialTransform
{
public:
	FRigUnit_SetSpaceInitialTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSpaceName() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 112);
	}
	struct FTransform GetResult() {
		return memory.read<struct FTransform>(m_addr + 160);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 208);
	}
	struct FCachedRigElement GetCachedSpaceIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 212);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetSpaceTransform
{
public:
	FRigUnit_SetSpaceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSpace() {
		return memory.read<struct FName>(m_addr + 104);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 112);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	uint8_t  GetSpaceType() {
		return memory.read<uint8_t >(m_addr + 176);
	}
	struct FCachedRigElement GetCachedSpaceIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHoveredChanged
{
public:
	FOnHoveredChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsSelected() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetScale
{
public:
	FRigUnit_SetScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 116);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 132);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 136);
	}
	struct FCachedRigElement GetCachedIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SetRotation
{
public:
	FRigUnit_SetRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKey GetItem() {
		return memory.read<struct FRigElementKey>(m_addr + 104);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 116);
	}
	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 128);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 144);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 148);
	}
	struct FCachedRigElement GetCachedIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SlideChainPerItem
{
public:
	FRigUnit_SlideChainPerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetItems() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 104);
	}
	float GetSlideAmount() {
		return memory.read<float>(m_addr + 120);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 124);
	}
	struct FRigUnit_SlideChain_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_SlideChain_WorkData>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SlideChain_WorkData
{
public:
	FRigUnit_SlideChain_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetChainLength() {
		return memory.read<float>(m_addr + 0);
	}
	struct TArray<float> GetItemSegments() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	struct TArray<struct FCachedRigElement> GetCachedItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 24);
	}
	struct TArray<struct FTransform> GetTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 40);
	}
	struct TArray<struct FTransform> GetBlendedTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SecondsToFrames
{
public:
	FRigUnit_SecondsToFrames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSeconds() {
		return memory.read<float>(m_addr + 8);
	}
	float GetFrames() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_FramesToSeconds
{
public:
	FRigUnit_FramesToSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrames() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSeconds() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TimeOffsetFloat
{
public:
	FRigUnit_TimeOffsetFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSecondsAgo() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetBufferSize() {
		return memory.read<int32_t>(m_addr + 16);
	}
	float GetTimeRange() {
		return memory.read<float>(m_addr + 20);
	}
	float GetResult() {
		return memory.read<float>(m_addr + 24);
	}
	struct TArray<float> GetBuffer() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}
	struct TArray<float> GetDeltaTimes() {
		return memory.read<struct TArray<float>>(m_addr + 48);
	}
	int32_t GetLastInsertIndex() {
		return memory.read<int32_t>(m_addr + 64);
	}
	int32_t GetUpperBound() {
		return memory.read<int32_t>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstraintTarget
{
public:
	FConstraintTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 48);
	}
	bool GetbMaintainOffset() {
		return memory.read<bool>(m_addr + 52);
	}
	struct FTransformFilter GetFilter() {
		return memory.read<struct FTransformFilter>(m_addr + 53);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TransformConstraint
{
public:
	FRigUnit_TransformConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	uint8_t  GetBaseTransformSpace() {
		return memory.read<uint8_t >(m_addr + 112);
	}
	struct FTransform GetBaseTransform() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	struct FName GetBaseBone() {
		return memory.read<struct FName>(m_addr + 176);
	}
	struct TArray<struct FConstraintTarget> GetTargets() {
		return memory.read<struct TArray<struct FConstraintTarget>>(m_addr + 184);
	}
	bool GetbUseInitialTransforms() {
		return memory.read<bool>(m_addr + 200);
	}
	struct FRigUnit_TransformConstraint_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_TransformConstraint_WorkData>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwistBonesPerItem
{
public:
	FRigUnit_TwistBonesPerItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRigElementKeyCollection GetItems() {
		return memory.read<struct FRigElementKeyCollection>(m_addr + 104);
	}
	struct FVector GetTwistAxis() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	struct FVector GetPoleAxis() {
		return memory.read<struct FVector>(m_addr + 132);
	}
	uint8_t  GetTwistEaseType() {
		return memory.read<uint8_t >(m_addr + 144);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 148);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 152);
	}
	struct FRigUnit_TwistBones_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_TwistBones_WorkData>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwistBones_WorkData
{
public:
	FRigUnit_TwistBones_WorkData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FCachedRigElement> GetCachedItems() {
		return memory.read<struct TArray<struct FCachedRigElement>>(m_addr + 0);
	}
	struct TArray<float> GetItemRatios() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}
	struct TArray<struct FTransform> GetItemTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwistBones
{
public:
	FRigUnit_TwistBones(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetStartBone() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetEndBone() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct FVector GetTwistAxis() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	struct FVector GetPoleAxis() {
		return memory.read<struct FVector>(m_addr + 132);
	}
	uint8_t  GetTwistEaseType() {
		return memory.read<uint8_t >(m_addr + 144);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 148);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 152);
	}
	struct FRigUnit_TwistBones_WorkData GetWorkData() {
		return memory.read<struct FRigUnit_TwistBones_WorkData>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_ToRigSpace_Location
{
public:
	FRigUnit_ToRigSpace_Location(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetGlobal() {
		return memory.read<struct FVector>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwoBoneIKFK
{
public:
	FRigUnit_TwoBoneIKFK(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetStartJoint() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetEndJoint() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct FVector GetPoleTarget() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	float GetSpin() {
		return memory.read<float>(m_addr + 132);
	}
	struct FTransform GetEndEffector() {
		return memory.read<struct FTransform>(m_addr + 144);
	}
	float GetIKBlend() {
		return memory.read<float>(m_addr + 192);
	}
	struct FTransform GetStartJointFKTransform() {
		return memory.read<struct FTransform>(m_addr + 208);
	}
	struct FTransform GetMidJointFKTransform() {
		return memory.read<struct FTransform>(m_addr + 256);
	}
	struct FTransform GetEndJointFKTransform() {
		return memory.read<struct FTransform>(m_addr + 304);
	}
	float GetPreviousFKIKBlend() {
		return memory.read<float>(m_addr + 352);
	}
	struct FTransform GetStartJointIKTransform() {
		return memory.read<struct FTransform>(m_addr + 368);
	}
	struct FTransform GetMidJointIKTransform() {
		return memory.read<struct FTransform>(m_addr + 416);
	}
	struct FTransform GetEndJointIKTransform() {
		return memory.read<struct FTransform>(m_addr + 464);
	}
	int32_t GetStartJointIndex() {
		return memory.read<int32_t>(m_addr + 512);
	}
	int32_t GetMidJointIndex() {
		return memory.read<int32_t>(m_addr + 516);
	}
	int32_t GetEndJointIndex() {
		return memory.read<int32_t>(m_addr + 520);
	}
	float GetUpperLimbLength() {
		return memory.read<float>(m_addr + 524);
	}
	float GetLowerLimbLength() {
		return memory.read<float>(m_addr + 528);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwoBoneIKSimpleTransforms
{
public:
	FRigUnit_TwoBoneIKSimpleTransforms(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetRoot() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct FVector GetPoleVector() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FTransform GetEffector() {
		return memory.read<struct FTransform>(m_addr + 80);
	}
	struct FVector GetPrimaryAxis() {
		return memory.read<struct FVector>(m_addr + 128);
	}
	struct FVector GetSecondaryAxis() {
		return memory.read<struct FVector>(m_addr + 140);
	}
	float GetSecondaryAxisWeight() {
		return memory.read<float>(m_addr + 152);
	}
	bool GetbEnableStretch() {
		return memory.read<bool>(m_addr + 156);
	}
	float GetStretchStartRatio() {
		return memory.read<float>(m_addr + 160);
	}
	float GetStretchMaximumRatio() {
		return memory.read<float>(m_addr + 164);
	}
	float GetBoneALength() {
		return memory.read<float>(m_addr + 168);
	}
	float GetBoneBLength() {
		return memory.read<float>(m_addr + 172);
	}
	struct FTransform GetElbow() {
		return memory.read<struct FTransform>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwoBoneIKSimple_DebugSettings
{
public:
	FRigUnit_TwoBoneIKSimple_DebugSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 4);
	}
	struct FTransform GetWorldOffset() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInitialBoneTransform
{
public:
	FGetInitialBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_TwoBoneIKSimple
{
public:
	FRigUnit_TwoBoneIKSimple(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneA() {
		return memory.read<struct FName>(m_addr + 104);
	}
	struct FName GetBoneB() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct FName GetEffectorBone() {
		return memory.read<struct FName>(m_addr + 120);
	}
	struct FTransform GetEffector() {
		return memory.read<struct FTransform>(m_addr + 128);
	}
	struct FVector GetPrimaryAxis() {
		return memory.read<struct FVector>(m_addr + 176);
	}
	struct FVector GetSecondaryAxis() {
		return memory.read<struct FVector>(m_addr + 188);
	}
	float GetSecondaryAxisWeight() {
		return memory.read<float>(m_addr + 200);
	}
	struct FVector GetPoleVector() {
		return memory.read<struct FVector>(m_addr + 204);
	}
	uint8_t  GetPoleVectorKind() {
		return memory.read<uint8_t >(m_addr + 216);
	}
	struct FName GetPoleVectorSpace() {
		return memory.read<struct FName>(m_addr + 220);
	}
	bool GetbEnableStretch() {
		return memory.read<bool>(m_addr + 228);
	}
	float GetStretchStartRatio() {
		return memory.read<float>(m_addr + 232);
	}
	float GetStretchMaximumRatio() {
		return memory.read<float>(m_addr + 236);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 240);
	}
	float GetBoneALength() {
		return memory.read<float>(m_addr + 244);
	}
	float GetBoneBLength() {
		return memory.read<float>(m_addr + 248);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 252);
	}
	struct FRigUnit_TwoBoneIKSimple_DebugSettings GetDebugSettings() {
		return memory.read<struct FRigUnit_TwoBoneIKSimple_DebugSettings>(m_addr + 256);
	}
	struct FCachedRigElement GetCachedBoneAIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 320);
	}
	struct FCachedRigElement GetCachedBoneBIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 340);
	}
	struct FCachedRigElement GetCachedEffectorBoneIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 360);
	}
	struct FCachedRigElement GetCachedPoleVectorSpaceIndex() {
		return memory.read<struct FCachedRigElement>(m_addr + 380);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_BinaryVectorOp
{
public:
	FRigUnit_BinaryVectorOp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetArgument0() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetArgument1() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetResult() {
		return memory.read<struct FVector>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Subtract_VectorVector
{
public:
	FRigUnit_Subtract_VectorVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_Multiply_VectorVector
{
public:
	FRigUnit_Multiply_VectorVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FRigUnit_VerletIntegrateVector
{
public:
	FRigUnit_VerletIntegrateVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTarget() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	float GetStrength() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDamp() {
		return memory.read<float>(m_addr + 24);
	}
	float GetBlend() {
		return memory.read<float>(m_addr + 28);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 44);
	}
	struct FVector GetAcceleration() {
		return memory.read<struct FVector>(m_addr + 56);
	}
	struct FCRSimPoint GetPoint() {
		return memory.read<struct FCRSimPoint>(m_addr + 68);
	}
	bool GetbInitialized() {
		return memory.read<bool>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_VisualDebugTransformItemSpace
{
public:
	FRigUnit_VisualDebugTransformItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 64);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 68);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 72);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_VisualDebugQuatItemSpace
{
public:
	FRigUnit_VisualDebugQuatItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 32);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 36);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 40);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_VisualDebugQuat
{
public:
	FRigUnit_VisualDebugQuat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQuat GetValue() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 32);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 36);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 40);
	}
	struct FName GetBoneSpace() {
		return memory.read<struct FName>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_VisualDebugVectorItemSpace
{
public:
	FRigUnit_VisualDebugVectorItemSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 20);
	}
	uint8_t  Getmode() {
		return memory.read<uint8_t >(m_addr + 21);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 24);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 40);
	}
	float GetScale() {
		return memory.read<float>(m_addr + 44);
	}
	struct FRigElementKey GetSpace() {
		return memory.read<struct FRigElementKey>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FRigUnit_SphereTraceWorld
{
public:
	FRigUnit_SphereTraceWorld(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetStart() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetEnd() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	char ECollisionChannel GetChannel() {
		return memory.read<char ECollisionChannel>(m_addr + 32);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 36);
	}
	bool GetbHit() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FVector GetHitLocation() {
		return memory.read<struct FVector>(m_addr + 44);
	}
	struct FVector GetHitNormal() {
		return memory.read<struct FVector>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInteractionRigClass
{
public:
	FGetInteractionRigClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UControlRig GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UControlRig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInteractionRigClass
{
public:
	FSetInteractionRigClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UControlRig GetInInteractionRigClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UControlRig(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddMappedCompleteSkeletalMesh
{
public:
	FAddMappedCompleteSkeletalMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMeshComponent GetSkeletalMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeletalMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDoesElementExist
{
public:
	FDoesElementExist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetElementType() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAbsoluteTime
{
public:
	FGetAbsoluteTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBoneTransform
{
public:
	FGetBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlBool
{
public:
	FGetControlBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlOffset
{
public:
	FGetControlOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlPosition
{
public:
	FGetControlPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlRotator
{
public:
	FGetControlRotator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FRotator GetReturnValue() {
		return memory.read<struct FRotator>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlScale
{
public:
	FGetControlScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetControlVector2D
{
public:
	FGetControlVector2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetElementNames
{
public:
	FGetElementNames(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint8_t  GetElementType() {
		return memory.read<uint8_t >(m_addr + 0);
	}
	struct TArray<struct FName> GetReturnValue() {
		return memory.read<struct TArray<struct FName>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpaceTransform
{
public:
	FGetSpaceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSpaceName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 8);
	}
	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPostUpdate
{
public:
	FOnPostUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRigComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRigComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPreSetup
{
public:
	FOnPreSetup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRigComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRigComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPreUpdate
{
public:
	FOnPreUpdate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UControlRigComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UControlRigComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBoneInitialTransformsFromSkeletalMesh
{
public:
	FSetBoneInitialTransformsFromSkeletalMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USkeletalMesh GetInSkeletalMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USkeletalMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBoneTransform
{
public:
	FSetBoneTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 64);
	}
	float GetWeight() {
		return memory.read<float>(m_addr + 68);
	}
	bool GetbPropagateToChildren() {
		return memory.read<bool>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlBool
{
public:
	FSetControlBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlInt
{
public:
	FSetControlInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlOffset
{
public:
	FSetControlOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTransform GetOffsetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlPosition
{
public:
	FSetControlPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlScale
{
public:
	FSetControlScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FVector GetValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetControlTransform
{
public:
	FSetControlTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetControlName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTransform GetValue() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInitialSpaceTransform
{
public:
	FSetInitialSpaceTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSpaceName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	uint8_t  GetSpace() {
		return memory.read<uint8_t >(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMappedElements
{
public:
	FSetMappedElements(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FControlRigComponentMappedElement> GetNewMappedElements() {
		return memory.read<struct TArray<struct FControlRigComponentMappedElement>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGlobalTransform
{
public:
	FGetGlobalTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetReturnValue() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsEnabled
{
public:
	FIsEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSelectedInEditor
{
public:
	FIsSelectedInEditor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnManipulatingChanged
{
public:
	FOnManipulatingChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsManipulating() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectionChanged
{
public:
	FOnSelectionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsSelected() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGlobalTransform
{
public:
	FSetGlobalTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTransform GetInTransform() {
		return memory.read<struct FTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSelectable
{
public:
	FSetSelectable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInSelectable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSelected
{
public:
	FSetSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInSelected() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};