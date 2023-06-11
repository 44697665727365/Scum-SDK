#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2C(Inherited: 0x0) 
struct FAnimLegIKDefinition
{
	struct FBoneReference IKFootBone;  // 0x0(0x10)
	struct FBoneReference FKFootBone;  // 0x10(0x10)
	int32_t NumBonesInLimb;  // 0x20(0x4)
	float MinRotationAngle;  // 0x24(0x4)
	char EAxis FootBoneForwardAxis;  // 0x28(0x1)
	char EAxis HingeRotationAxis;  // 0x29(0x1)
	char pad_42_1 : 7;  // 0x2A(0x1)
	bool bEnableRotationLimit : 1;  // 0x2A(0x1)
	char pad_43_1 : 7;  // 0x2B(0x1)
	bool bEnableKneeTwistCorrection : 1;  // 0x2B(0x1)

}; 
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x28(Inherited: 0x0) 
struct FAngularRangeLimit
{
	struct FVector LimitMin;  // 0x0(0xC)
	struct FVector LimitMax;  // 0xC(0xC)
	struct FBoneReference Bone;  // 0x18(0x10)

}; 
// DelegateFunction AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FOnMontagePlayDelegate__DelegateSignature
{
	struct FName NotifyName;  // 0x0(0x8)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xC8(Inherited: 0x10) 
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose;  // 0x10(0x10)
	int32_t LODThreshold;  // 0x20(0x4)
	float ActualAlpha;  // 0x24(0x4)
	uint8_t  AlphaInputType;  // 0x28(0x1)
	char pad_41_1 : 7;  // 0x29(0x1)
	bool bAlphaBoolEnabled : 1;  // 0x29(0x1)
	char pad_42[2];  // 0x2A(0x2)
	float Alpha;  // 0x2C(0x4)
	struct FInputScaleBias AlphaScaleBias;  // 0x30(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x38(0x48)
	struct FName AlphaCurveName;  // 0x80(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x88(0x30)
	char pad_184[16];  // 0xB8(0x10)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x168(Inherited: 0x80) 
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose;  // 0x80(0x10)
	struct TArray<struct FBoneReference> SourceBones;  // 0x90(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones;  // 0xA0(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets;  // 0xB0(0x10)
	char pad_192[48];  // 0xC0(0x30)
	struct FBoneReference EvalSpaceBone;  // 0xF0(0x10)
	struct FRBFParams RBFParams;  // 0x100(0x2C)
	uint8_t  DriveSource;  // 0x12C(0x1)
	uint8_t  DriveOutput;  // 0x12D(0x1)
	char bOnlyDriveSelectedBones : 1;  // 0x12E(0x1)
	char pad_302_1 : 7;  // 0x12E(0x1)
	char pad_303[2];  // 0x12F(0x2)
	int32_t LODThreshold;  // 0x130(0x4)
	char pad_308[52];  // 0x134(0x34)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x80(Inherited: 0x38) 
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	struct UPoseAsset* PoseAsset;  // 0x38(0x8)
	char pad_64[64];  // 0x40(0x40)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xC8(Inherited: 0x10) 
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink Base;  // 0x10(0x10)
	struct FPoseLink Additive;  // 0x20(0x10)
	float Alpha;  // 0x30(0x4)
	struct FInputScaleBias AlphaScaleBias;  // 0x34(0x8)
	int32_t LODThreshold;  // 0x3C(0x4)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x40(0x48)
	struct FName AlphaCurveName;  // 0x88(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x90(0x30)
	char pad_192[4];  // 0xC0(0x4)
	uint8_t  AlphaInputType;  // 0xC4(0x1)
	char pad_197_1 : 7;  // 0xC5(0x1)
	bool bAlphaBoolEnabled : 1;  // 0xC5(0x1)
	char pad_198[2];  // 0xC6(0x2)

}; 
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x40(Inherited: 0x0) 
struct FAnimPhysPlanarLimit
{
	struct FBoneReference DrivingBone;  // 0x0(0x10)
	struct FTransform PlaneTransform;  // 0x10(0x30)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x18(Inherited: 0x10) 
struct FAnimNode_RefPose : public FAnimNode_Base
{
	char ERefPoseType RefPoseType;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0xA10(Inherited: 0x770) 
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	char pad_1904[672];  // 0x770(0x2A0)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0xE8(Inherited: 0x38) 
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float X;  // 0x38(0x4)
	float Y;  // 0x3C(0x4)
	float Z;  // 0x40(0x4)
	float PlayRate;  // 0x44(0x4)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bLoop : 1;  // 0x48(0x1)
	char pad_73_1 : 7;  // 0x49(0x1)
	bool bResetPlayTimeWhenBlendSpaceChanges : 1;  // 0x49(0x1)
	char pad_74[2];  // 0x4A(0x2)
	float StartPosition;  // 0x4C(0x4)
	struct UBlendSpaceBase* BlendSpace;  // 0x50(0x8)
	char pad_88[136];  // 0x58(0x88)
	struct UBlendSpaceBase* PreviousBlendSpace;  // 0xE0(0x8)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x440(Inherited: 0xC8) 
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	float LinearDampingOverride;  // 0xC8(0x4)
	float AngularDampingOverride;  // 0xCC(0x4)
	char pad_208[96];  // 0xD0(0x60)
	struct FBoneReference RelativeSpaceBone;  // 0x130(0x10)
	struct FBoneReference BoundBone;  // 0x140(0x10)
	struct FBoneReference ChainEnd;  // 0x150(0x10)
	struct FVector BoxExtents;  // 0x160(0xC)
	struct FVector LocalJointOffset;  // 0x16C(0xC)
	float GravityScale;  // 0x178(0x4)
	struct FVector GravityOverride;  // 0x17C(0xC)
	float LinearSpringConstant;  // 0x188(0x4)
	float AngularSpringConstant;  // 0x18C(0x4)
	float WindScale;  // 0x190(0x4)
	struct FVector ComponentLinearAccScale;  // 0x194(0xC)
	struct FVector ComponentLinearVelScale;  // 0x1A0(0xC)
	struct FVector ComponentAppliedLinearAccClamp;  // 0x1AC(0xC)
	float AngularBiasOverride;  // 0x1B8(0x4)
	int32_t NumSolverIterationsPreUpdate;  // 0x1BC(0x4)
	int32_t NumSolverIterationsPostUpdate;  // 0x1C0(0x4)
	struct FAnimPhysConstraintSetup ConstraintSetup;  // 0x1C4(0x48)
	char pad_524[4];  // 0x20C(0x4)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits;  // 0x210(0x10)
	float SphereCollisionRadius;  // 0x220(0x4)
	struct FVector ExternalForce;  // 0x224(0xC)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits;  // 0x230(0x10)
	uint8_t  CollisionType;  // 0x240(0x1)
	uint8_t  SimulationSpace;  // 0x241(0x1)
	char pad_578[2];  // 0x242(0x2)
	char bUseSphericalLimits : 1;  // 0x244(0x1)
	char bUsePlanarLimit : 1;  // 0x244(0x1)
	char bDoUpdate : 1;  // 0x244(0x1)
	char bDoEval : 1;  // 0x244(0x1)
	char bOverrideLinearDamping : 1;  // 0x244(0x1)
	char bOverrideAngularBias : 1;  // 0x244(0x1)
	char bOverrideAngularDamping : 1;  // 0x244(0x1)
	char bEnableWind : 1;  // 0x244(0x1)
	char pad_581_1 : 1;  // 0x245(0x1)
	char bUseGravityOverride : 1;  // 0x245(0x1)
	char bLinearSpring : 1;  // 0x245(0x1)
	char bAngularSpring : 1;  // 0x245(0x1)
	char bChain : 1;  // 0x245(0x1)
	char pad_581_2 : 3;  // 0x245(0x1)
	char pad_582[11];  // 0x246(0xB)
	struct FRotationRetargetingInfo RetargetingSettings;  // 0x250(0x130)
	char pad_896[192];  // 0x380(0xC0)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x1C0(Inherited: 0xE8) 
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	char pad_232[104];  // 0xE8(0x68)
	struct FPoseLink BasePose;  // 0x150(0x10)
	int32_t LODThreshold;  // 0x160(0x4)
	struct FName SourceSocketName;  // 0x164(0x8)
	struct FName PivotSocketName;  // 0x16C(0x8)
	struct FVector LookAtLocation;  // 0x174(0xC)
	struct FVector SocketAxis;  // 0x180(0xC)
	float Alpha;  // 0x18C(0x4)
	char pad_400[48];  // 0x190(0x30)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x100(Inherited: 0xC8) 
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToObserve;  // 0xC8(0x10)
	char EBoneControlSpace DisplaySpace;  // 0xD8(0x1)
	char pad_217_1 : 7;  // 0xD9(0x1)
	bool bRelativeToRefPose : 1;  // 0xD9(0x1)
	char pad_218[2];  // 0xDA(0x2)
	struct FVector Translation;  // 0xDC(0xC)
	struct FRotator Rotation;  // 0xE8(0xC)
	struct FVector Scale;  // 0xF4(0xC)

}; 
// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x130(Inherited: 0x0) 
struct FRotationRetargetingInfo
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bEnabled : 1;  // 0x0(0x1)
	char pad_1[15];  // 0x1(0xF)
	struct FTransform Source;  // 0x10(0x30)
	struct FTransform Target;  // 0x40(0x30)
	uint8_t  RotationComponent;  // 0x70(0x1)
	char pad_113[3];  // 0x71(0x3)
	struct FVector TwistAxis;  // 0x74(0xC)
	char pad_128_1 : 7;  // 0x80(0x1)
	bool bUseAbsoluteAngle : 1;  // 0x80(0x1)
	char pad_129[3];  // 0x81(0x3)
	float SourceMinimum;  // 0x84(0x4)
	float SourceMaximum;  // 0x88(0x4)
	float TargetMinimum;  // 0x8C(0x4)
	float TargetMaximum;  // 0x90(0x4)
	uint8_t  EasingType;  // 0x94(0x1)
	char pad_149[3];  // 0x95(0x3)
	struct FRuntimeFloatCurve CustomCurve;  // 0x98(0x88)
	char pad_288_1 : 7;  // 0x120(0x1)
	bool bFlipEasing : 1;  // 0x120(0x1)
	char pad_289[3];  // 0x121(0x3)
	float EasingWeight;  // 0x124(0x4)
	char pad_296_1 : 7;  // 0x128(0x1)
	bool bClamp : 1;  // 0x128(0x1)
	char pad_297[7];  // 0x129(0x7)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x68(Inherited: 0x10) 
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink A;  // 0x10(0x10)
	struct FPoseLink B;  // 0x20(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions;  // 0x30(0x10)
	char pad_64[16];  // 0x40(0x10)
	float Alpha;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)
	struct FInputScaleBias AlphaScaleBias;  // 0x58(0x8)
	char EBoneControlSpace TransformsSpace;  // 0x60(0x1)
	char pad_97[7];  // 0x61(0x7)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0x98(Inherited: 0x80) 
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName PoseName;  // 0x80(0x8)
	float PoseWeight;  // 0x88(0x4)
	char pad_140[12];  // 0x8C(0xC)

}; 
// ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x38(Inherited: 0x0) 
struct FIKChain
{
	char pad_0[56];  // 0x0(0x38)

}; 
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x24(Inherited: 0x0) 
struct FAnimPhysSphericalLimit
{
	struct FBoneReference DrivingBone;  // 0x0(0x10)
	struct FVector SphereLocalOffset;  // 0x10(0xC)
	float LimitRadius;  // 0x1C(0x4)
	uint8_t  LimitType;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)

}; 
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x48(Inherited: 0x0) 
struct FAnimPhysConstraintSetup
{
	uint8_t  LinearXLimitType;  // 0x0(0x1)
	uint8_t  LinearYLimitType;  // 0x1(0x1)
	uint8_t  LinearZLimitType;  // 0x2(0x1)
	char pad_3[1];  // 0x3(0x1)
	struct FVector LinearAxesMin;  // 0x4(0xC)
	struct FVector LinearAxesMax;  // 0x10(0xC)
	uint8_t  AngularConstraintType;  // 0x1C(0x1)
	uint8_t  TwistAxis;  // 0x1D(0x1)
	uint8_t  AngularTargetAxis;  // 0x1E(0x1)
	char pad_31[1];  // 0x1F(0x1)
	float ConeAngle;  // 0x20(0x4)
	struct FVector AngularLimitsMin;  // 0x24(0xC)
	struct FVector AngularLimitsMax;  // 0x30(0xC)
	struct FVector AngularTarget;  // 0x3C(0xC)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0xE8(Inherited: 0xC8) 
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits;  // 0xC8(0x10)
	struct TArray<struct FVector> AngularOffsets;  // 0xD8(0x10)

}; 
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xC0(Inherited: 0x0) 
struct FPoseDriverTarget
{
	struct TArray<struct FPoseDriverTransform> BoneTransforms;  // 0x0(0x10)
	struct FRotator TargetRotation;  // 0x10(0xC)
	float TargetScale;  // 0x1C(0x4)
	uint8_t  DistanceMethod;  // 0x20(0x1)
	uint8_t  FunctionType;  // 0x21(0x1)
	char pad_34_1 : 7;  // 0x22(0x1)
	bool bApplyCustomCurve : 1;  // 0x22(0x1)
	char pad_35[5];  // 0x23(0x5)
	struct FRichCurve CustomCurve;  // 0x28(0x80)
	struct FName DrivenName;  // 0xA8(0x8)
	char pad_176[8];  // 0xB0(0x8)
	char pad_184_1 : 7;  // 0xB8(0x1)
	bool bIsHidden : 1;  // 0xB8(0x1)
	char pad_185[7];  // 0xB9(0x7)

}; 
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x24(Inherited: 0x0) 
struct FBlendBoneByChannelEntry
{
	struct FBoneReference SourceBone;  // 0x0(0x10)
	struct FBoneReference TargetBone;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool bBlendTranslation : 1;  // 0x20(0x1)
	char pad_33_1 : 7;  // 0x21(0x1)
	bool bBlendRotation : 1;  // 0x21(0x1)
	char pad_34_1 : 7;  // 0x22(0x1)
	bool bBlendScale : 1;  // 0x22(0x1)
	char pad_35[1];  // 0x23(0x1)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x98(Inherited: 0x10) 
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	struct TArray<struct FPoseLink> BlendPose;  // 0x10(0x10)
	struct TArray<float> BlendTime;  // 0x20(0x10)
	uint8_t  TransitionType;  // 0x30(0x1)
	uint8_t  BlendType;  // 0x31(0x1)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool bResetChildOnActivation : 1;  // 0x32(0x1)
	char pad_51[5];  // 0x33(0x5)
	struct UCurveFloat* CustomBlendCurve;  // 0x38(0x8)
	struct UBlendProfile* BlendProfile;  // 0x40(0x8)
	char pad_72[80];  // 0x48(0x50)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xA0(Inherited: 0x98) 
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	char pad_152_1 : 7;  // 0x98(0x1)
	bool bActiveValue : 1;  // 0x98(0x1)
	char pad_153[7];  // 0x99(0x7)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xB0(Inherited: 0x98) 
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	struct TArray<int32_t> EnumToPoseIndex;  // 0x98(0x10)
	char ActiveEnumValue;  // 0xA8(0x1)
	char pad_169[7];  // 0xA9(0x7)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xA0(Inherited: 0x98) 
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int32_t ActiveChildIndex;  // 0x98(0x4)
	char pad_156[4];  // 0x9C(0x4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0xF0(Inherited: 0xE8) 
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float NormalizedTime;  // 0xE8(0x4)
	char pad_236[4];  // 0xEC(0x4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x40(Inherited: 0x10) 
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink SourcePose;  // 0x10(0x10)
	struct FName SourceBinding;  // 0x20(0x8)
	float Alpha;  // 0x28(0x4)
	char pad_44[4];  // 0x2C(0x4)
	struct TScriptInterface<ICurveSourceInterface> CurveSource;  // 0x30(0x10)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x118(Inherited: 0xC8) 
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone;  // 0xC8(0x10)
	struct UCurveFloat* DrivingCurve;  // 0xD8(0x8)
	float Multiplier;  // 0xE0(0x4)
	float RangeMin;  // 0xE4(0x4)
	float RangeMax;  // 0xE8(0x4)
	float RemappedMin;  // 0xEC(0x4)
	float RemappedMax;  // 0xF0(0x4)
	struct FName ParameterName;  // 0xF4(0x8)
	struct FBoneReference TargetBone;  // 0xFC(0x10)
	uint8_t  DestinationMode;  // 0x10C(0x1)
	uint8_t  ModificationMode;  // 0x10D(0x1)
	char EComponentType SourceComponent;  // 0x10E(0x1)
	char bUseRange : 1;  // 0x10F(0x1)
	char bAffectTargetTranslationX : 1;  // 0x10F(0x1)
	char bAffectTargetTranslationY : 1;  // 0x10F(0x1)
	char bAffectTargetTranslationZ : 1;  // 0x10F(0x1)
	char bAffectTargetRotationX : 1;  // 0x10F(0x1)
	char bAffectTargetRotationY : 1;  // 0x10F(0x1)
	char bAffectTargetRotationZ : 1;  // 0x10F(0x1)
	char bAffectTargetScaleX : 1;  // 0x10F(0x1)
	char bAffectTargetScaleY : 1;  // 0x110(0x1)
	char bAffectTargetScaleZ : 1;  // 0x110(0x1)
	char pad_272_1 : 6;  // 0x110(0x1)
	char pad_273[8];  // 0x111(0x8)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x180(Inherited: 0xC8) 
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct FVector EffectorLocation;  // 0xC8(0xC)
	char EBoneControlSpace EffectorLocationSpace;  // 0xD4(0x1)
	char pad_213[11];  // 0xD5(0xB)
	struct FBoneSocketTarget EffectorTarget;  // 0xE0(0x60)
	struct FBoneReference TipBone;  // 0x140(0x10)
	struct FBoneReference RootBone;  // 0x150(0x10)
	float Precision;  // 0x160(0x4)
	int32_t MaxIterations;  // 0x164(0x4)
	char pad_360_1 : 7;  // 0x168(0x1)
	bool bStartFromTail : 1;  // 0x168(0x1)
	char pad_361_1 : 7;  // 0x169(0x1)
	bool bEnableRotationLimit : 1;  // 0x169(0x1)
	char pad_362[6];  // 0x16A(0x6)
	struct TArray<float> RotationLimitPerJoints;  // 0x170(0x10)

}; 
// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60(Inherited: 0x0) 
struct FBoneSocketTarget
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bUseSocket : 1;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	struct FBoneReference BoneReference;  // 0x4(0x10)
	char pad_20[12];  // 0x14(0xC)
	struct FSocketReference SocketReference;  // 0x20(0x40)

}; 
// ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40(Inherited: 0x0) 
struct FSocketReference
{
	char pad_0[48];  // 0x0(0x30)
	struct FName SocketName;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)

}; 
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x14(Inherited: 0x0) 
struct FSplineIKCachedBoneData
{
	struct FBoneReference Bone;  // 0x0(0x10)
	int32_t RefSkeletonIndex;  // 0x10(0x4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xA0(Inherited: 0x10) 
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink BasePose;  // 0x10(0x10)
	float Pitch;  // 0x20(0x4)
	float Yaw;  // 0x24(0x4)
	struct FInputScaleBiasClamp PitchScaleBiasClamp;  // 0x28(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp;  // 0x58(0x30)
	struct FRotator MeshToComponent;  // 0x88(0xC)
	char pad_148[12];  // 0x94(0xC)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x108(Inherited: 0xC8) 
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify;  // 0xC8(0x10)
	struct TArray<struct FConstraint> ConstraintSetup;  // 0xD8(0x10)
	struct TArray<float> ConstraintWeights;  // 0xE8(0x10)
	char pad_248[16];  // 0xF8(0x10)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xF0(Inherited: 0xC8) 
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference TargetBone;  // 0xC8(0x10)
	struct FBoneReference SourceBone;  // 0xD8(0x10)
	float Multiplier;  // 0xE8(0x4)
	char EBoneAxis RotationAxisToRefer;  // 0xEC(0x1)
	char pad_237_1 : 7;  // 0xED(0x1)
	bool bIsAdditive : 1;  // 0xED(0x1)
	char pad_238[2];  // 0xEE(0x2)

}; 
// ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x1C(Inherited: 0x0) 
struct FConstraint
{
	struct FBoneReference TargetBone;  // 0x0(0x10)
	uint8_t  OffsetOption;  // 0x10(0x1)
	uint8_t  TransformType;  // 0x11(0x1)
	struct FFilterOptionPerAxis PerAxis;  // 0x12(0x3)
	char pad_21[7];  // 0x15(0x7)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x190(Inherited: 0xE8) 
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink BasePose;  // 0xE8(0x10)
	int32_t LODThreshold;  // 0xF8(0x4)
	float Alpha;  // 0xFC(0x4)
	struct FInputScaleBias AlphaScaleBias;  // 0x100(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x108(0x48)
	struct FName AlphaCurveName;  // 0x150(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x158(0x30)
	char pad_392[4];  // 0x188(0x4)
	uint8_t  AlphaInputType;  // 0x18C(0x1)
	char pad_397_1 : 7;  // 0x18D(0x1)
	bool bAlphaBoolEnabled : 1;  // 0x18D(0x1)
	char pad_398[2];  // 0x18E(0x2)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0xF0(Inherited: 0xC8) 
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone;  // 0xC8(0x10)
	struct FBoneReference TargetBone;  // 0xD8(0x10)
	char pad_232_1 : 7;  // 0xE8(0x1)
	bool bCopyTranslation : 1;  // 0xE8(0x1)
	char pad_233_1 : 7;  // 0xE9(0x1)
	bool bCopyRotation : 1;  // 0xE9(0x1)
	char pad_234_1 : 7;  // 0xEA(0x1)
	bool bCopyScale : 1;  // 0xEA(0x1)
	char EBoneControlSpace ControlSpace;  // 0xEB(0x1)
	char pad_236[4];  // 0xEC(0x4)

}; 
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50(Inherited: 0x0) 
struct FRandomPlayerSequenceEntry
{
	struct UAnimSequence* Sequence;  // 0x0(0x8)
	float ChanceToPlay;  // 0x8(0x4)
	int32_t MinLoopCount;  // 0xC(0x4)
	int32_t MaxLoopCount;  // 0x10(0x4)
	float MinPlayRate;  // 0x14(0x4)
	float MaxPlayRate;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)
	struct FAlphaBlend BlendIn;  // 0x20(0x30)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0xF8(Inherited: 0xC8) 
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone;  // 0xC8(0x10)
	struct FBoneReference TargetBone;  // 0xD8(0x10)
	char pad_232_1 : 7;  // 0xE8(0x1)
	bool bCopyTranslation : 1;  // 0xE8(0x1)
	char pad_233_1 : 7;  // 0xE9(0x1)
	bool bCopyRotation : 1;  // 0xE9(0x1)
	char pad_234_1 : 7;  // 0xEA(0x1)
	bool bCopyScale : 1;  // 0xEA(0x1)
	uint8_t  CopyMode;  // 0xEB(0x1)
	float TranslationMultiplier;  // 0xEC(0x4)
	float RotationMultiplier;  // 0xF0(0x4)
	float ScaleMultiplier;  // 0xF4(0x4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x58(Inherited: 0x10) 
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink SourcePose;  // 0x10(0x10)
	struct TArray<float> CurveValues;  // 0x20(0x10)
	struct TArray<struct FName> CurveNames;  // 0x30(0x10)
	char pad_64[16];  // 0x40(0x10)
	float Alpha;  // 0x50(0x4)
	uint8_t  ApplyMode;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x90(Inherited: 0x10) 
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	struct FName SnapshotName;  // 0x10(0x8)
	struct FPoseSnapshot Snapshot;  // 0x18(0x38)
	uint8_t  mode;  // 0x50(0x1)
	char pad_81[63];  // 0x51(0x3F)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38(Inherited: 0x10) 
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink Base;  // 0x10(0x10)
	struct FPoseLink Additive;  // 0x20(0x10)
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bMeshSpaceAdditive : 1;  // 0x30(0x1)
	char pad_49[7];  // 0x31(0x7)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x1D8(Inherited: 0x10) 
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	struct TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;  // 0x10(0x8)
	char bUseAttachedParent : 1;  // 0x18(0x1)
	char bCopyCurves : 1;  // 0x18(0x1)
	char pad_24_1 : 6;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bCopyCustomAttributes : 1;  // 0x19(0x1)
	char bUseMeshPose : 1;  // 0x1A(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	char pad_27[2];  // 0x1B(0x2)
	struct FName RootBoneToCopy;  // 0x1C(0x8)
	char pad_36[436];  // 0x24(0x1B4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x190(Inherited: 0xC8) 
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	char pad_200[8];  // 0xC8(0x8)
	struct FTransform EffectorTransform;  // 0xD0(0x30)
	struct FBoneSocketTarget EffectorTarget;  // 0x100(0x60)
	struct FBoneReference TipBone;  // 0x160(0x10)
	struct FBoneReference RootBone;  // 0x170(0x10)
	float Precision;  // 0x180(0x4)
	int32_t MaxIterations;  // 0x184(0x4)
	char EBoneControlSpace EffectorTransformSpace;  // 0x188(0x1)
	char EBoneRotationSource EffectorRotationSource;  // 0x189(0x1)
	char pad_394[6];  // 0x18A(0x6)

}; 
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18(Inherited: 0x0) 
struct FPoseDriverTransform
{
	struct FVector TargetTranslation;  // 0x0(0xC)
	struct FRotator TargetRotation;  // 0xC(0xC)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x120(Inherited: 0xC8) 
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference RightHandFK;  // 0xC8(0x10)
	struct FBoneReference LeftHandFK;  // 0xD8(0x10)
	struct FBoneReference RightHandIK;  // 0xE8(0x10)
	struct FBoneReference LeftHandIK;  // 0xF8(0x10)
	struct TArray<struct FBoneReference> IKBonesToMove;  // 0x108(0x10)
	float HandFKWeight;  // 0x118(0x4)
	char pad_284[4];  // 0x11C(0x4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xC0(Inherited: 0x10) 
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink BasePose;  // 0x10(0x10)
	struct TArray<struct FPoseLink> BlendPoses;  // 0x20(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup;  // 0x30(0x10)
	struct TArray<float> BlendWeights;  // 0x40(0x10)
	char pad_80_1 : 7;  // 0x50(0x1)
	bool bMeshSpaceRotationBlend : 1;  // 0x50(0x1)
	char pad_81_1 : 7;  // 0x51(0x1)
	bool bMeshSpaceScaleBlend : 1;  // 0x51(0x1)
	char ECurveBlendOption CurveBlendOption;  // 0x52(0x1)
	char pad_83_1 : 7;  // 0x53(0x1)
	bool bBlendRootMotionBasedOnRootBone : 1;  // 0x53(0x1)
	char pad_84[4];  // 0x54(0x4)
	int32_t LODThreshold;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights;  // 0x60(0x10)
	struct FGuid SkeletonGuid;  // 0x70(0x10)
	struct FGuid VirtualBoneGuid;  // 0x80(0x10)
	char pad_144[48];  // 0x90(0x30)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0xF8(Inherited: 0xC8) 
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float ReachPrecision;  // 0xC8(0x4)
	int32_t MaxIterations;  // 0xCC(0x4)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition;  // 0xD0(0x10)
	char pad_224[24];  // 0xE0(0x18)

}; 
// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0xA0(Inherited: 0x0) 
struct FAnimLegIKData
{
	char pad_0[160];  // 0x0(0xA0)

}; 
// ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x3C(Inherited: 0x0) 
struct FIKChainLink
{
	char pad_0[60];  // 0x0(0x3C)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0xD8(Inherited: 0xC8) 
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
	char pad_200[16];  // 0xC8(0x10)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x1B0(Inherited: 0xC8) 
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify;  // 0xC8(0x10)
	char pad_216[8];  // 0xD8(0x8)
	struct FBoneSocketTarget LookAtTarget;  // 0xE0(0x60)
	struct FVector LookAtLocation;  // 0x140(0xC)
	struct FAxis LookAt_Axis;  // 0x14C(0x10)
	char pad_348_1 : 7;  // 0x15C(0x1)
	bool bUseLookUpAxis : 1;  // 0x15C(0x1)
	char EInterpolationBlend InterpolationType;  // 0x15D(0x1)
	char pad_350[2];  // 0x15E(0x2)
	struct FAxis LookUp_Axis;  // 0x160(0x10)
	float LookAtClamp;  // 0x170(0x4)
	float InterpolationTime;  // 0x174(0x4)
	float InterpolationTriggerThreashold;  // 0x178(0x4)
	char pad_380[52];  // 0x17C(0x34)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x108(Inherited: 0xC8) 
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify;  // 0xC8(0x10)
	struct FVector Translation;  // 0xD8(0xC)
	struct FRotator Rotation;  // 0xE4(0xC)
	struct FVector Scale;  // 0xF0(0xC)
	char EBoneModificationMode TranslationMode;  // 0xFC(0x1)
	char EBoneModificationMode RotationMode;  // 0xFD(0x1)
	char EBoneModificationMode ScaleMode;  // 0xFE(0x1)
	char EBoneControlSpace TranslationSpace;  // 0xFF(0x1)
	char EBoneControlSpace RotationSpace;  // 0x100(0x1)
	char EBoneControlSpace ScaleSpace;  // 0x101(0x1)
	char pad_258[6];  // 0x102(0x6)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50(Inherited: 0x10) 
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	struct TArray<struct FPoseLink> Poses;  // 0x10(0x10)
	struct TArray<float> DesiredAlphas;  // 0x20(0x10)
	char pad_48[16];  // 0x30(0x10)
	struct FInputScaleBias AlphaScaleBias;  // 0x40(0x8)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bAdditiveNode : 1;  // 0x48(0x1)
	char pad_73_1 : 7;  // 0x49(0x1)
	bool bNormalizeAlpha : 1;  // 0x49(0x1)
	char pad_74[6];  // 0x4A(0x6)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xA0(Inherited: 0x80) 
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose;  // 0x80(0x10)
	uint8_t  BlendOption;  // 0x90(0x1)
	char pad_145[7];  // 0x91(0x7)
	struct UCurveFloat* CustomCurve;  // 0x98(0x8)

}; 
// ScriptStruct AnimGraphRuntime.SimSpaceSettings
// Size: 0x40(Inherited: 0x0) 
struct FSimSpaceSettings
{
	float MasterAlpha;  // 0x0(0x4)
	float VelocityScaleZ;  // 0x4(0x4)
	float MaxLinearVelocity;  // 0x8(0x4)
	float MaxAngularVelocity;  // 0xC(0x4)
	float MaxLinearAcceleration;  // 0x10(0x4)
	float MaxAngularAcceleration;  // 0x14(0x4)
	float ExternalLinearDrag;  // 0x18(0x4)
	struct FVector ExternalLinearDragV;  // 0x1C(0xC)
	struct FVector ExternalLinearVelocity;  // 0x28(0xC)
	struct FVector ExternalAngularVelocity;  // 0x34(0xC)

}; 
// ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x2C(Inherited: 0x0) 
struct FRBFParams
{
	int32_t TargetDimensions;  // 0x0(0x4)
	uint8_t  SolverType;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)
	float Radius;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool bAutomaticRadius : 1;  // 0xC(0x1)
	uint8_t  Function;  // 0xD(0x1)
	uint8_t  DistanceMethod;  // 0xE(0x1)
	char EBoneAxis TwistAxis;  // 0xF(0x1)
	float WeightThreshold;  // 0x10(0x4)
	uint8_t  NormalizeMethod;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FVector MedianReference;  // 0x18(0xC)
	float MedianMin;  // 0x24(0x4)
	float MedianMax;  // 0x28(0x4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x78(Inherited: 0x10) 
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	struct TArray<struct FRandomPlayerSequenceEntry> Entries;  // 0x10(0x10)
	char pad_32[80];  // 0x20(0x50)
	char pad_112_1 : 7;  // 0x70(0x1)
	bool bShuffleMode : 1;  // 0x70(0x1)
	char pad_113[7];  // 0x71(0x7)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x10(Inherited: 0x10) 
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x830(Inherited: 0xC8) 
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	struct UPhysicsAsset* OverridePhysicsAsset;  // 0xC8(0x8)
	char pad_208[152];  // 0xD0(0x98)
	struct FVector OverrideWorldGravity;  // 0x168(0xC)
	struct FVector ExternalForce;  // 0x174(0xC)
	struct FVector ComponentLinearAccScale;  // 0x180(0xC)
	struct FVector ComponentLinearVelScale;  // 0x18C(0xC)
	struct FVector ComponentAppliedLinearAccClamp;  // 0x198(0xC)
	struct FSimSpaceSettings SimSpaceSettings;  // 0x1A4(0x40)
	float CachedBoundsScale;  // 0x1E4(0x4)
	struct FBoneReference BaseBoneRef;  // 0x1E8(0x10)
	char ECollisionChannel OverlapChannel;  // 0x1F8(0x1)
	uint8_t  SimulationSpace;  // 0x1F9(0x1)
	char pad_506_1 : 7;  // 0x1FA(0x1)
	bool bForceDisableCollisionBetweenConstraintBodies : 1;  // 0x1FA(0x1)
	char pad_507[1];  // 0x1FB(0x1)
	char bEnableWorldGeometry : 1;  // 0x1FC(0x1)
	char bOverrideWorldGravity : 1;  // 0x1FC(0x1)
	char bTransferBoneVelocities : 1;  // 0x1FC(0x1)
	char bFreezeIncomingPoseOnStart : 1;  // 0x1FC(0x1)
	char bClampLinearTranslationLimitToRefPose : 1;  // 0x1FC(0x1)
	char pad_508_1 : 3;  // 0x1FC(0x1)
	char pad_509[4];  // 0x1FD(0x4)
	float WorldSpaceMinimumScale;  // 0x200(0x4)
	float EvaluationResetTime;  // 0x204(0x4)
	char pad_520[1576];  // 0x208(0x628)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x78(Inherited: 0x10) 
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink InputPose;  // 0x10(0x10)
	float DefaultChainLength;  // 0x20(0x4)
	struct FBoneReference ChainStartBone;  // 0x24(0x10)
	struct FBoneReference ChainEndBone;  // 0x34(0x10)
	struct FVector TargetLocation;  // 0x44(0xC)
	float Alpha;  // 0x50(0x4)
	char pad_84[4];  // 0x54(0x4)
	struct FInputScaleBias AlphaScaleBias;  // 0x58(0x8)
	uint8_t  ChainInitialLength;  // 0x60(0x1)
	char pad_97[23];  // 0x61(0x17)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x50(Inherited: 0x38) 
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	struct UAnimSequenceBase* Sequence;  // 0x38(0x8)
	float ExplicitTime;  // 0x40(0x4)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bShouldLoop : 1;  // 0x44(0x1)
	char pad_69_1 : 7;  // 0x45(0x1)
	bool bTeleportToExplicitTime : 1;  // 0x45(0x1)
	char ESequenceEvalReinit ReinitializationBehavior;  // 0x46(0x1)
	char pad_71[1];  // 0x47(0x1)
	float StartPosition;  // 0x48(0x4)
	char pad_76[4];  // 0x4C(0x4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x48(Inherited: 0x10) 
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink Source;  // 0x10(0x10)
	struct FName SlotName;  // 0x20(0x8)
	char pad_40_1 : 7;  // 0x28(0x1)
	bool bAlwaysUpdateSourcePose : 1;  // 0x28(0x1)
	char pad_41[31];  // 0x29(0x1F)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x270(Inherited: 0xC8) 
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference StartBone;  // 0xC8(0x10)
	struct FBoneReference EndBone;  // 0xD8(0x10)
	uint8_t  BoneAxis;  // 0xE8(0x1)
	char pad_233_1 : 7;  // 0xE9(0x1)
	bool bAutoCalculateSpline : 1;  // 0xE9(0x1)
	char pad_234[2];  // 0xEA(0x2)
	int32_t PointCount;  // 0xEC(0x4)
	struct TArray<struct FTransform> ControlPoints;  // 0xF0(0x10)
	float Roll;  // 0x100(0x4)
	float TwistStart;  // 0x104(0x4)
	float TwistEnd;  // 0x108(0x4)
	char pad_268[4];  // 0x10C(0x4)
	struct FAlphaBlend TwistBlend;  // 0x110(0x30)
	float Stretch;  // 0x140(0x4)
	float Offset;  // 0x144(0x4)
	char pad_328[296];  // 0x148(0x128)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x128(Inherited: 0xC8) 
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference SpringBone;  // 0xC8(0x10)
	float MaxDisplacement;  // 0xD8(0x4)
	float SpringStiffness;  // 0xDC(0x4)
	float SpringDamping;  // 0xE0(0x4)
	float ErrorResetThresh;  // 0xE4(0x4)
	char pad_232[60];  // 0xE8(0x3C)
	char bLimitDisplacement : 1;  // 0x124(0x1)
	char bTranslateX : 1;  // 0x124(0x1)
	char bTranslateY : 1;  // 0x124(0x1)
	char bTranslateZ : 1;  // 0x124(0x1)
	char bRotateX : 1;  // 0x124(0x1)
	char bRotateY : 1;  // 0x124(0x1)
	char bRotateZ : 1;  // 0x124(0x1)
	char pad_292_1 : 1;  // 0x124(0x1)
	char pad_293[4];  // 0x125(0x4)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x30(Inherited: 0x30) 
struct FAnimNode_StateResult : public FAnimNode_Root
{

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x260(Inherited: 0xC8) 
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	char pad_200[56];  // 0xC8(0x38)
	struct FBoneReference TrailBone;  // 0x100(0x10)
	int32_t ChainLength;  // 0x110(0x4)
	char EAxis ChainBoneAxis;  // 0x114(0x1)
	char bInvertChainBoneAxis : 1;  // 0x115(0x1)
	char bLimitStretch : 1;  // 0x115(0x1)
	char bLimitRotation : 1;  // 0x115(0x1)
	char bUsePlanarLimit : 1;  // 0x115(0x1)
	char bActorSpaceFakeVel : 1;  // 0x115(0x1)
	char bReorientParentToChild : 1;  // 0x115(0x1)
	char pad_277_1 : 2;  // 0x115(0x1)
	char pad_278[3];  // 0x116(0x3)
	float MaxDeltaTime;  // 0x118(0x4)
	float RelaxationSpeedScale;  // 0x11C(0x4)
	struct FRuntimeFloatCurve TrailRelaxationSpeed;  // 0x120(0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;  // 0x1A8(0x30)
	struct TArray<struct FRotationLimit> RotationLimits;  // 0x1D8(0x10)
	struct TArray<struct FVector> RotationOffsets;  // 0x1E8(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits;  // 0x1F8(0x10)
	float StretchLimit;  // 0x208(0x4)
	struct FVector FakeVelocity;  // 0x20C(0xC)
	struct FBoneReference BaseJoint;  // 0x218(0x10)
	float LastBoneRotationAnimAlphaBlend;  // 0x228(0x4)
	char pad_556[52];  // 0x22C(0x34)

}; 
// ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x18(Inherited: 0x0) 
struct FRotationLimit
{
	struct FVector LimitMin;  // 0x0(0xC)
	struct FVector LimitMax;  // 0xC(0xC)

}; 
// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// Size: 0x28(Inherited: 0x0) 
struct FCreateProxyObjectForPlayMontage
{
	struct USkeletalMeshComponent* InSkeletalMeshComponent;  // 0x0(0x8)
	struct UAnimMontage* MontageToPlay;  // 0x8(0x8)
	float PlayRate;  // 0x10(0x4)
	float StartingPosition;  // 0x14(0x4)
	struct FName StartingSection;  // 0x18(0x8)
	struct UPlayMontageCallbackProxy* ReturnValue;  // 0x20(0x8)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x138(Inherited: 0xC8) 
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame BaseFrame;  // 0xC8(0x20)
	struct FReferenceBoneFrame TwistFrame;  // 0xE8(0x20)
	struct FAxis TwistPlaneNormalAxis;  // 0x108(0x10)
	float RangeMax;  // 0x118(0x4)
	float RemappedMin;  // 0x11C(0x4)
	float RemappedMax;  // 0x120(0x4)
	struct FAnimCurveParam Curve;  // 0x124(0xC)
	char pad_304[8];  // 0x130(0x8)

}; 
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x20(Inherited: 0x0) 
struct FReferenceBoneFrame
{
	struct FBoneReference Bone;  // 0x0(0x10)
	struct FAxis Axis;  // 0x10(0x10)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x1E0(Inherited: 0xC8) 
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference IKBone;  // 0xC8(0x10)
	float StartStretchRatio;  // 0xD8(0x4)
	float MaxStretchScale;  // 0xDC(0x4)
	struct FVector EffectorLocation;  // 0xE0(0xC)
	char pad_236[4];  // 0xEC(0x4)
	struct FBoneSocketTarget EffectorTarget;  // 0xF0(0x60)
	struct FVector JointTargetLocation;  // 0x150(0xC)
	char pad_348[4];  // 0x15C(0x4)
	struct FBoneSocketTarget JointTarget;  // 0x160(0x60)
	struct FAxis TwistAxis;  // 0x1C0(0x10)
	char EBoneControlSpace EffectorLocationSpace;  // 0x1D0(0x1)
	char EBoneControlSpace JointTargetLocationSpace;  // 0x1D1(0x1)
	char bAllowStretching : 1;  // 0x1D2(0x1)
	char bTakeRotationFromEffectorSpace : 1;  // 0x1D2(0x1)
	char bMaintainEffectorRelRot : 1;  // 0x1D2(0x1)
	char bAllowTwist : 1;  // 0x1D2(0x1)
	char pad_466_1 : 4;  // 0x1D2(0x1)
	char pad_467[14];  // 0x1D3(0xE)

}; 
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xC8(Inherited: 0x10) 
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink A;  // 0x10(0x10)
	struct FPoseLink B;  // 0x20(0x10)
	uint8_t  AlphaInputType;  // 0x30(0x1)
	char bAlphaBoolEnabled : 1;  // 0x31(0x1)
	char pad_49_1 : 2;  // 0x31(0x1)
	char bResetChildOnActivation : 1;  // 0x31(0x1)
	char pad_49_2 : 4;  // 0x31(0x1)
	char pad_50[3];  // 0x32(0x3)
	float Alpha;  // 0x34(0x4)
	struct FInputScaleBias AlphaScaleBias;  // 0x38(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x40(0x48)
	struct FName AlphaCurveName;  // 0x88(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x90(0x30)
	char pad_192[8];  // 0xC0(0x8)

}; 
// ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x30(Inherited: 0x0) 
struct FPositionHistory
{
	struct TArray<struct FVector> Positions;  // 0x0(0x10)
	float Range;  // 0x10(0x4)
	char pad_20[28];  // 0x14(0x1C)

}; 
// ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10(Inherited: 0x0) 
struct FRBFEntry
{
	struct TArray<float> Values;  // 0x0(0x10)

}; 
// ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xA0(Inherited: 0x10) 
struct FRBFTarget : public FRBFEntry
{
	float ScaleFactor;  // 0x10(0x4)
	char pad_20_1 : 7;  // 0x14(0x1)
	bool bApplyCustomCurve : 1;  // 0x14(0x1)
	char pad_21[3];  // 0x15(0x3)
	struct FRichCurve CustomCurve;  // 0x18(0x80)
	uint8_t  DistanceMethod;  // 0x98(0x1)
	uint8_t  FunctionType;  // 0x99(0x1)
	char pad_154[6];  // 0x9A(0x6)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// Size: 0x50(Inherited: 0x0) 
struct FK2_CalculateVelocityFromPositionHistory
{
	float DeltaSeconds;  // 0x0(0x4)
	struct FVector position;  // 0x4(0xC)
	struct FPositionHistory History;  // 0x10(0x30)
	int32_t NumberOfSamples;  // 0x40(0x4)
	float VelocityMin;  // 0x44(0x4)
	float VelocityMax;  // 0x48(0x4)
	float ReturnValue;  // 0x4C(0x4)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// Size: 0x100(Inherited: 0x0) 
struct FK2_CalculateVelocityFromSockets
{
	float DeltaSeconds;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct USkeletalMeshComponent* Component;  // 0x8(0x8)
	struct FName SocketOrBoneName;  // 0x10(0x8)
	struct FName ReferenceSocketOrBone;  // 0x18(0x8)
	char ERelativeTransformSpace SocketSpace;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)
	struct FVector OffsetInBoneSpace;  // 0x24(0xC)
	struct FPositionHistory History;  // 0x30(0x30)
	int32_t NumberOfSamples;  // 0x60(0x4)
	float VelocityMin;  // 0x64(0x4)
	float VelocityMax;  // 0x68(0x4)
	uint8_t  EasingType;  // 0x6C(0x1)
	char pad_109[3];  // 0x6D(0x3)
	struct FRuntimeFloatCurve CustomCurve;  // 0x70(0x88)
	float ReturnValue;  // 0xF8(0x4)
	char pad_252[4];  // 0xFC(0x4)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// Size: 0x28(Inherited: 0x0) 
struct FK2_DirectionBetweenSockets
{
	struct USkeletalMeshComponent* Component;  // 0x0(0x8)
	struct FName SocketOrBoneNameFrom;  // 0x8(0x8)
	struct FName SocketOrBoneNameTo;  // 0x10(0x8)
	struct FVector ReturnValue;  // 0x18(0xC)
	char pad_36[4];  // 0x24(0x4)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// Size: 0x38(Inherited: 0x0) 
struct FK2_DistanceBetweenTwoSocketsAndMapRange
{
	struct USkeletalMeshComponent* Component;  // 0x0(0x8)
	struct FName SocketOrBoneNameA;  // 0x8(0x8)
	char ERelativeTransformSpace SocketSpaceA;  // 0x10(0x1)
	char pad_17[3];  // 0x11(0x3)
	struct FName SocketOrBoneNameB;  // 0x14(0x8)
	char ERelativeTransformSpace SocketSpaceB;  // 0x1C(0x1)
	char pad_29_1 : 7;  // 0x1D(0x1)
	bool bRemapRange : 1;  // 0x1D(0x1)
	char pad_30[2];  // 0x1E(0x2)
	float InRangeMin;  // 0x20(0x4)
	float InRangeMax;  // 0x24(0x4)
	float OutRangeMin;  // 0x28(0x4)
	float OutRangeMax;  // 0x2C(0x4)
	float ReturnValue;  // 0x30(0x4)
	char pad_52[4];  // 0x34(0x4)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// Size: 0x20(Inherited: 0x0) 
struct FK2_EndProfilingTimer
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bLog : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString LogPrefix;  // 0x8(0x10)
	float ReturnValue;  // 0x18(0x4)
	char pad_28[4];  // 0x1C(0x4)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// Size: 0x90(Inherited: 0x0) 
struct FK2_LookAt
{
	struct FTransform CurrentTransform;  // 0x0(0x30)
	struct FVector TargetPosition;  // 0x30(0xC)
	struct FVector LookAtVector;  // 0x3C(0xC)
	char pad_72_1 : 7;  // 0x48(0x1)
	bool bUseUpVector : 1;  // 0x48(0x1)
	char pad_73[3];  // 0x49(0x3)
	struct FVector UpVector;  // 0x4C(0xC)
	float ClampConeInDegree;  // 0x58(0x4)
	char pad_92[4];  // 0x5C(0x4)
	struct FTransform ReturnValue;  // 0x60(0x30)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// Size: 0x10(Inherited: 0x0) 
struct FK2_MakePerlinNoiseAndRemap
{
	float Value;  // 0x0(0x4)
	float RangeOutMin;  // 0x4(0x4)
	float RangeOutMax;  // 0x8(0x4)
	float ReturnValue;  // 0xC(0x4)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// Size: 0x30(Inherited: 0x0) 
struct FK2_MakePerlinNoiseVectorAndRemap
{
	float X;  // 0x0(0x4)
	float Y;  // 0x4(0x4)
	float Z;  // 0x8(0x4)
	float RangeOutMinX;  // 0xC(0x4)
	float RangeOutMaxX;  // 0x10(0x4)
	float RangeOutMinY;  // 0x14(0x4)
	float RangeOutMaxY;  // 0x18(0x4)
	float RangeOutMinZ;  // 0x1C(0x4)
	float RangeOutMaxZ;  // 0x20(0x4)
	struct FVector ReturnValue;  // 0x24(0xC)

}; 
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// Size: 0x60(Inherited: 0x0) 
struct FK2_TwoBoneIK
{
	struct FVector RootPos;  // 0x0(0xC)
	struct FVector JointPos;  // 0xC(0xC)
	struct FVector EndPos;  // 0x18(0xC)
	struct FVector JointTarget;  // 0x24(0xC)
	struct FVector Effector;  // 0x30(0xC)
	struct FVector OutJointPos;  // 0x3C(0xC)
	struct FVector OutEndPos;  // 0x48(0xC)
	char pad_84_1 : 7;  // 0x54(0x1)
	bool bAllowStretching : 1;  // 0x54(0x1)
	char pad_85[3];  // 0x55(0x3)
	float StartStretchRatio;  // 0x58(0x4)
	float MaxStretchScale;  // 0x5C(0x4)

}; 
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// Size: 0x10(Inherited: 0x0) 
struct FOnMontageBlendingOut
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bInterrupted : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// Size: 0x10(Inherited: 0x0) 
struct FOnMontageEnded
{
	struct UAnimMontage* Montage;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bInterrupted : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// Size: 0x28(Inherited: 0x0) 
struct FOnNotifyBeginReceived
{
	struct FName NotifyName;  // 0x0(0x8)
	struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;  // 0x8(0x20)

}; 
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// Size: 0x28(Inherited: 0x0) 
struct FOnNotifyEndReceived
{
	struct FName NotifyName;  // 0x0(0x8)
	struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;  // 0x8(0x20)

}; 
