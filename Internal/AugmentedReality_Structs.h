#pragma once 
#include "SDK.h" 
 
 
// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// Size: 0x8(Inherited: 0x0) 
struct FARSharedWorldReplicationState
{
	int32_t PreviewImageOffset;  // 0x0(0x4)
	int32_t ARWorldOffset;  // 0x4(0x4)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
// Size: 0x18(Inherited: 0x0) 
struct FGetSupportedVideoFormats
{
	uint8_t  SessionType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct TArray<struct FARVideoFormat> ReturnValue;  // 0x8(0x10)

}; 
// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
// Size: 0x10(Inherited: 0x0) 
struct FCheckGeoTrackingAvailability
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;  // 0x8(0x8)

}; 
// DelegateFunction AugmentedReality.TrackablePlaneDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FTrackablePlaneDelegate__DelegateSignature
{
	struct UARPlaneGeometry* TrackedPlane;  // 0x0(0x8)

}; 
// DelegateFunction AugmentedReality.OnARTrackingStateChanged__DelegateSignature
// Size: 0x1(Inherited: 0x0) 
struct FOnARTrackingStateChanged__DelegateSignature
{
	uint8_t  NewTrackingState;  // 0x0(0x1)

}; 
// DelegateFunction AugmentedReality.TrackableEnvProbeDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FTrackableEnvProbeDelegate__DelegateSignature
{
	struct UAREnvironmentCaptureProbe* TrackedEnvProbe;  // 0x0(0x8)

}; 
// Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
// Size: 0x20(Inherited: 0x0) 
struct FGetGeoLocationAtWorldPosition
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector WorldPosition;  // 0x8(0xC)
	char pad_20[4];  // 0x14(0x4)
	struct UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue;  // 0x18(0x8)

}; 
// DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FGetGeoLocationDelegate__DelegateSignature
{
	float Longitude;  // 0x0(0x4)
	float Latitude;  // 0x4(0x4)
	float Altitude;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FString Error;  // 0x10(0x10)

}; 
// DelegateFunction AugmentedReality.OnARTransformUpdated__DelegateSignature
// Size: 0x30(Inherited: 0x0) 
struct FOnARTransformUpdated__DelegateSignature
{
	struct FTransform OldToNewTransform;  // 0x0(0x30)

}; 
// DelegateFunction AugmentedReality.ARSaveWorldPin__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FARSaveWorldPin__DelegateSignature
{
	struct TArray<char> SavedWorld;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
// Size: 0x18(Inherited: 0x0) 
struct FClientUpdateARWorldData
{
	int32_t Offset;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<char> Buffer;  // 0x8(0x10)

}; 
// Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
// Size: 0x8(Inherited: 0x0) 
struct FServerDestroyARActor
{
	struct AARActor* Actor;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
// Size: 0x90(Inherited: 0x0) 
struct FCalculateAlignmentTransform
{
	struct FTransform TransformInFirstCoordinateSystem;  // 0x0(0x30)
	struct FTransform TransformInSecondCoordinateSystem;  // 0x30(0x30)
	struct FTransform AlignmentTransform;  // 0x60(0x30)

}; 
// ScriptStruct AugmentedReality.ARImageUpdatePayload
// Size: 0x60(Inherited: 0x0) 
struct FARImageUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0(0x18)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform WorldTransform;  // 0x20(0x30)
	struct UARCandidateImage* DetectedImage;  // 0x50(0x8)
	struct FVector2D EstimatedSize;  // 0x58(0x8)

}; 
// ScriptStruct AugmentedReality.ARSessionPayload
// Size: 0x18(Inherited: 0x0) 
struct FARSessionPayload
{
	int32_t ConfigFlags;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMaterialInterface* DefaultMeshMaterial;  // 0x8(0x8)
	struct UMaterialInterface* DefaultWireframeMeshMaterial;  // 0x10(0x8)

}; 
// DelegateFunction AugmentedReality.ARGetCandidateObjectPin__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FARGetCandidateObjectPin__DelegateSignature
{
	struct UARCandidateObject* SavedObject;  // 0x0(0x8)

}; 
// DelegateFunction AugmentedReality.TrackableDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FTrackableDelegate__DelegateSignature
{
	struct UARTrackedGeometry* TrackedGeometry;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARGeoAnchor.GetLongitude
// Size: 0x4(Inherited: 0x0) 
struct FGetLongitude
{
	float ReturnValue;  // 0x0(0x4)

}; 
// ScriptStruct AugmentedReality.ARSessionStatus
// Size: 0x18(Inherited: 0x0) 
struct FARSessionStatus
{
	struct FString AdditionalInfo;  // 0x0(0x10)
	uint8_t  Status;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
// Size: 0x18(Inherited: 0x0) 
struct FGeoTrackingAvailabilityDelegate__DelegateSignature
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bIsAvailable : 1;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct FString Error;  // 0x8(0x10)

}; 
// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
// Size: 0x18(Inherited: 0x0) 
struct FCheckGeoTrackingAvailabilityAtLocation
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	float Longitude;  // 0x8(0x4)
	float Latitude;  // 0xC(0x4)
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;  // 0x10(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
// Size: 0x10(Inherited: 0x0) 
struct FGetAllTracked2DPoses
{
	struct TArray<struct FARPose2D> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
// Size: 0x28(Inherited: 0x0) 
struct FDebugDrawTrackedGeometry
{
	struct UARTrackedGeometry* TrackedGeometry;  // 0x0(0x8)
	struct UObject* WorldContextObject;  // 0x8(0x8)
	struct FLinearColor Color;  // 0x10(0x10)
	float OutlineThickness;  // 0x20(0x4)
	float PersistForSeconds;  // 0x24(0x4)

}; 
// ScriptStruct AugmentedReality.ARFaceUpdatePayload
// Size: 0x40(Inherited: 0x0) 
struct FARFaceUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0(0x18)
	struct FVector LeftEyePosition;  // 0x18(0xC)
	struct FVector RightEyePosition;  // 0x24(0xC)
	struct FVector LookAtTarget;  // 0x30(0xC)
	char pad_60[4];  // 0x3C(0x4)

}; 
// ScriptStruct AugmentedReality.ARMeshUpdatePayload
// Size: 0x60(Inherited: 0x0) 
struct FARMeshUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0(0x18)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform WorldTransform;  // 0x20(0x30)
	uint8_t  ObjectClassification;  // 0x50(0x1)
	char pad_81[15];  // 0x51(0xF)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
// Size: 0x10(Inherited: 0x0) 
struct FGetPointCloud
{
	struct TArray<struct FVector> ReturnValue;  // 0x0(0x10)

}; 
// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
// Size: 0x20(Inherited: 0x0) 
struct FInstanceARActorSpawnedDelegate__DelegateSignature
{
	UObject* ComponentClass;  // 0x0(0x8)
	struct FGuid NativeID;  // 0x8(0x10)
	struct AARActor* SpawnedActor;  // 0x18(0x8)

}; 
// ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
// Size: 0x70(Inherited: 0x0) 
struct FARGeoAnchorUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0(0x18)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform WorldTransform;  // 0x20(0x30)
	float Longitude;  // 0x50(0x4)
	float Latitude;  // 0x54(0x4)
	float AltitudeMeters;  // 0x58(0x4)
	uint8_t  AltitudeSource;  // 0x5C(0x1)
	char pad_93[3];  // 0x5D(0x3)
	struct FString AnchorName;  // 0x60(0x10)

}; 
// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FInstanceARActorToBeDestroyedDelegate__DelegateSignature
{
	struct AARActor* Actor;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARPin.GetTrackedGeometry
// Size: 0x8(Inherited: 0x0) 
struct FGetTrackedGeometry
{
	struct UARTrackedGeometry* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
// Size: 0x18(Inherited: 0x0) 
struct FServerSpawnARActor
{
	UObject* ComponentClass;  // 0x0(0x8)
	struct FGuid NativeID;  // 0x8(0x10)

}; 
// DelegateFunction AugmentedReality.TrackablePointDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FTrackablePointDelegate__DelegateSignature
{
	struct UARTrackedPoint* TrackedPoint;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
// Size: 0x10(Inherited: 0x0) 
struct FGetAllTrackedPoints
{
	struct TArray<struct UARTrackedPoint*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
// Size: 0x1(Inherited: 0x0) 
struct FSetFaceComponentDebugMode
{
	uint8_t  NewDebugMode;  // 0x0(0x1)

}; 
// DelegateFunction AugmentedReality.TrackableImageDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FTrackableImageDelegate__DelegateSignature
{
	struct UARTrackedImage* TrackedImage;  // 0x0(0x8)

}; 
// DelegateFunction AugmentedReality.TrackableFaceDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FTrackableFaceDelegate__DelegateSignature
{
	struct UARFaceGeometry* TrackedFace;  // 0x0(0x8)

}; 
// ScriptStruct AugmentedReality.ARCameraIntrinsics
// Size: 0x18(Inherited: 0x0) 
struct FARCameraIntrinsics
{
	struct FIntPoint ImageResolution;  // 0x0(0x8)
	struct FVector2D FocalLength;  // 0x8(0x8)
	struct FVector2D PrincipalPoint;  // 0x10(0x8)

}; 
// DelegateFunction AugmentedReality.TrackableObjectDelegate__DelegateSignature
// Size: 0x8(Inherited: 0x0) 
struct FTrackableObjectDelegate__DelegateSignature
{
	struct UARTrackedObject* TrackedObject;  // 0x0(0x8)

}; 
// ScriptStruct AugmentedReality.TrackedGeometryGroup
// Size: 0x18(Inherited: 0x0) 
struct FTrackedGeometryGroup
{
	struct AARActor* ARActor;  // 0x0(0x8)
	struct UARComponent* ARComponent;  // 0x8(0x8)
	struct UARTrackedGeometry* TrackedGeometry;  // 0x10(0x8)

}; 
// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
// Size: 0x50(Inherited: 0x0) 
struct FGetTrackedPoseData
{
	struct FARPose3D ReturnValue;  // 0x0(0x50)

}; 
// ScriptStruct AugmentedReality.ARObjectUpdatePayload
// Size: 0x30(Inherited: 0x0) 
struct FARObjectUpdatePayload
{
	struct FTransform WorldTransform;  // 0x0(0x30)

}; 
// ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
// Size: 0x30(Inherited: 0x0) 
struct FAREnvironmentProbeUpdatePayload
{
	struct FTransform WorldTransform;  // 0x0(0x30)

}; 
// ScriptStruct AugmentedReality.ARSkeletonDefinition
// Size: 0x28(Inherited: 0x0) 
struct FARSkeletonDefinition
{
	int32_t NumJoints;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<struct FName> JointNames;  // 0x8(0x10)
	struct TArray<int32_t> ParentIndices;  // 0x18(0x10)

}; 
// ScriptStruct AugmentedReality.ARPoseUpdatePayload
// Size: 0x40(Inherited: 0x0) 
struct FARPoseUpdatePayload
{
	struct FTransform WorldTransform;  // 0x0(0x30)
	struct TArray<struct FTransform> JointTransforms;  // 0x30(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
// Size: 0x18(Inherited: 0x0) 
struct FGetAllGeometriesByClass
{
	UARTrackedGeometry* GeometryClass;  // 0x0(0x8)
	struct TArray<struct UARTrackedGeometry*> ReturnValue;  // 0x8(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
// Size: 0x20(Inherited: 0x0) 
struct FFindTrackedPointsByName
{
	struct FString PointName;  // 0x0(0x10)
	struct TArray<struct UARTrackedPoint*> ReturnValue;  // 0x10(0x10)

}; 
// ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
// Size: 0x70(Inherited: 0x0) 
struct FARQRCodeUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0(0x18)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform WorldTransform;  // 0x20(0x30)
	struct FVector Extents;  // 0x50(0xC)
	char pad_92[4];  // 0x5C(0x4)
	struct FString QRCode;  // 0x60(0x10)

}; 
// Function AugmentedReality.ARTrackedGeometry.IsTracked
// Size: 0x1(Inherited: 0x0) 
struct FIsTracked
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// ScriptStruct AugmentedReality.ARPointUpdatePayload
// Size: 0x1(Inherited: 0x0) 
struct FARPointUpdatePayload
{
	char pad_0[1];  // 0x0(0x1)

}; 
// ScriptStruct AugmentedReality.ARPlaneUpdatePayload
// Size: 0x80(Inherited: 0x0) 
struct FARPlaneUpdatePayload
{
	struct FARSessionPayload SessionPayload;  // 0x0(0x18)
	char pad_24[8];  // 0x18(0x8)
	struct FTransform WorldTransform;  // 0x20(0x30)
	struct FVector Center;  // 0x50(0xC)
	struct FVector Extents;  // 0x5C(0xC)
	struct TArray<struct FVector> BoundaryVertices;  // 0x68(0x10)
	uint8_t  ObjectClassification;  // 0x78(0x1)
	char pad_121[7];  // 0x79(0x7)

}; 
// ScriptStruct AugmentedReality.ARTraceResult
// Size: 0x60(Inherited: 0x0) 
struct FARTraceResult
{
	float DistanceFromCamera;  // 0x0(0x4)
	uint8_t  TraceChannel;  // 0x4(0x1)
	char pad_5[11];  // 0x5(0xB)
	struct FTransform LocalTransform;  // 0x10(0x30)
	struct UARTrackedGeometry* TrackedGeometry;  // 0x40(0x8)
	char pad_72[24];  // 0x48(0x18)

}; 
// ScriptStruct AugmentedReality.ARVideoFormat
// Size: 0xC(Inherited: 0x0) 
struct FARVideoFormat
{
	int32_t FPS;  // 0x0(0x4)
	int32_t Width;  // 0x4(0x4)
	int32_t Height;  // 0x8(0x4)

}; 
// ScriptStruct AugmentedReality.ARPose3D
// Size: 0x50(Inherited: 0x0) 
struct FARPose3D
{
	struct FARSkeletonDefinition SkeletonDefinition;  // 0x0(0x28)
	struct TArray<struct FTransform> JointTransforms;  // 0x28(0x10)
	struct TArray<bool> IsJointTracked;  // 0x38(0x10)
	uint8_t  JointTransformSpace;  // 0x48(0x1)
	char pad_73[7];  // 0x49(0x7)

}; 
// ScriptStruct AugmentedReality.ARPose2D
// Size: 0x48(Inherited: 0x0) 
struct FARPose2D
{
	struct FARSkeletonDefinition SkeletonDefinition;  // 0x0(0x28)
	struct TArray<struct FVector2D> JointLocations;  // 0x28(0x10)
	struct TArray<bool> IsJointTracked;  // 0x38(0x10)

}; 
// Function AugmentedReality.ARActor.AddARComponent
// Size: 0x20(Inherited: 0x0) 
struct FAddARComponent
{
	UARComponent* InComponentClass;  // 0x0(0x8)
	struct FGuid NativeID;  // 0x8(0x10)
	struct UARComponent* ReturnValue;  // 0x18(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
// Size: 0x1C(Inherited: 0x0) 
struct FAddManualEnvironmentCaptureProbe
{
	struct FVector Location;  // 0x0(0xC)
	struct FVector Extent;  // 0xC(0xC)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// Size: 0x8(Inherited: 0x0) 
struct FGetSubsumedBy
{
	struct UARPlaneGeometry* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
// Size: 0x30(Inherited: 0x0) 
struct FAddRuntimeCandidateImage
{
	struct UARSessionConfig* SessionConfig;  // 0x0(0x8)
	struct UTexture2D* CandidateTexture;  // 0x8(0x8)
	struct FString FriendlyName;  // 0x10(0x10)
	float PhysicalWidth;  // 0x20(0x4)
	char pad_36[4];  // 0x24(0x4)
	struct UARCandidateImage* ReturnValue;  // 0x28(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
// Size: 0x10(Inherited: 0x0) 
struct FGetAllTrackedImages
{
	struct TArray<struct UARTrackedImage*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
// Size: 0x50(Inherited: 0x0) 
struct FAddTrackedPointWithName
{
	struct FTransform WorldTransform;  // 0x0(0x30)
	struct FString PointName;  // 0x30(0x10)
	char pad_64_1 : 7;  // 0x40(0x1)
	bool bDeletePointsWithSameName : 1;  // 0x40(0x1)
	char pad_65_1 : 7;  // 0x41(0x1)
	bool ReturnValue : 1;  // 0x41(0x1)
	char pad_66[14];  // 0x42(0xE)

}; 
// Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
// Size: 0x30(Inherited: 0x0) 
struct FCalculateClosestIntersection
{
	struct TArray<struct FVector> StartPoints;  // 0x0(0x10)
	struct TArray<struct FVector> EndPoints;  // 0x10(0x10)
	struct FVector ClosestIntersection;  // 0x20(0xC)
	char pad_44[4];  // 0x2C(0x4)

}; 
// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
// Size: 0x28(Inherited: 0x0) 
struct FDebugDrawPin
{
	struct UARPin* ARPin;  // 0x0(0x8)
	struct UObject* WorldContextObject;  // 0x8(0x8)
	struct FLinearColor Color;  // 0x10(0x10)
	float Scale;  // 0x20(0x4)
	float PersistForSeconds;  // 0x24(0x4)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
// Size: 0x30(Inherited: 0x0) 
struct FGetAlignmentTransform
{
	struct FTransform ReturnValue;  // 0x0(0x30)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
// Size: 0x10(Inherited: 0x0) 
struct FGetAllGeometries
{
	struct TArray<struct UARTrackedGeometry*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
// Size: 0x10(Inherited: 0x0) 
struct FGetAllTrackedEnvironmentCaptureProbes
{
	struct TArray<struct UAREnvironmentCaptureProbe*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
// Size: 0x10(Inherited: 0x0) 
struct FGetAllPins
{
	struct TArray<struct UARPin*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
// Size: 0x3(Inherited: 0x0) 
struct FIsSceneReconstructionSupported
{
	uint8_t  SessionType;  // 0x0(0x1)
	uint8_t  SceneReconstructionMethod;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool ReturnValue : 1;  // 0x2(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetARTexture
// Size: 0x10(Inherited: 0x0) 
struct FGetARTexture
{
	uint8_t  TextureType;  // 0x0(0x1)
	char pad_1[7];  // 0x1(0x7)
	struct UARTexture* ReturnValue;  // 0x8(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
// Size: 0x10(Inherited: 0x0) 
struct FGetAllTrackedPlanes
{
	struct TArray<struct UARPlaneGeometry*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARPin.DebugDraw
// Size: 0x20(Inherited: 0x0) 
struct FDebugDraw
{
	struct UWorld* World;  // 0x0(0x8)
	struct FLinearColor Color;  // 0x8(0x10)
	float Scale;  // 0x18(0x4)
	float PersistForSeconds;  // 0x1C(0x4)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
// Size: 0x10(Inherited: 0x0) 
struct FGetAllTrackedPoses
{
	struct TArray<struct UARTrackedPose*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
// Size: 0x4(Inherited: 0x0) 
struct FGetARWorldScale
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// Size: 0x8(Inherited: 0x0) 
struct FGetDetectedObject
{
	struct UARCandidateObject* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
// Size: 0x50(Inherited: 0x0) 
struct FLoadARPinsFromLocalStore
{
	struct TMap<struct FName, struct UARPin*> ReturnValue;  // 0x0(0x50)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
// Size: 0x18(Inherited: 0x0) 
struct FGetARSessionStatus
{
	struct FARSessionStatus ReturnValue;  // 0x0(0x18)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
// Size: 0x8(Inherited: 0x0) 
struct FGetCameraDepth
{
	struct UARTextureCameraDepth* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
// Size: 0x8(Inherited: 0x0) 
struct FGetCameraImage
{
	struct UARTextureCameraImage* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
// Size: 0x1C(Inherited: 0x0) 
struct FGetCameraIntrinsics
{
	struct FARCameraIntrinsics OutCameraIntrinsics;  // 0x0(0x18)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[3];  // 0x19(0x3)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
// Size: 0x8(Inherited: 0x0) 
struct FGetCurrentLightEstimate
{
	struct UARLightEstimate* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// Size: 0x10(Inherited: 0x0) 
struct FSetCandidateObjectList
{
	struct TArray<struct UARCandidateObject*> InCandidateObjects;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
// Size: 0x4(Inherited: 0x0) 
struct FGetNumberOfTrackedFacesSupported
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
// Size: 0x8(Inherited: 0x0) 
struct FGetPersonSegmentationDepthImage
{
	struct UARTexture* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
// Size: 0x24(Inherited: 0x0) 
struct FGetObjectClassificationAtLocation
{
	struct FVector InWorldLocation;  // 0x0(0xC)
	uint8_t  OutClassification;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)
	struct FVector OutClassificationLocation;  // 0x10(0xC)
	float MaxLocationDiff;  // 0x1C(0x4)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[3];  // 0x21(0x3)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
// Size: 0x8(Inherited: 0x0) 
struct FGetPersonSegmentationImage
{
	struct UARTexture* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
// Size: 0x70(Inherited: 0x0) 
struct FReceiveUpdate
{
	struct FARGeoAnchorUpdatePayload Payload;  // 0x0(0x70)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
// Size: 0x8(Inherited: 0x0) 
struct FGetSessionConfig
{
	struct UARSessionConfig* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
// Size: 0x1(Inherited: 0x0) 
struct FGetTrackingQuality
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
// Size: 0x1(Inherited: 0x0) 
struct FGetTrackingQualityReason
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
// Size: 0x1(Inherited: 0x0) 
struct FGetWorldMappingStatus
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
// Size: 0x1(Inherited: 0x0) 
struct FIsARPinLocalStoreReady
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
// Size: 0x1(Inherited: 0x0) 
struct FIsARPinLocalStoreSupported
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
// Size: 0x1(Inherited: 0x0) 
struct FIsARSupported
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
// Size: 0x3(Inherited: 0x0) 
struct FIsSessionTrackingFeatureSupported
{
	uint8_t  SessionType;  // 0x0(0x1)
	uint8_t  SessionTrackingFeature;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool ReturnValue : 1;  // 0x2(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
// Size: 0x2(Inherited: 0x0) 
struct FIsSessionTypeSupported
{
	uint8_t  SessionType;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
// Size: 0x20(Inherited: 0x0) 
struct FLineTraceTrackedObjects
{
	struct FVector2D ScreenCoord;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool bTestFeaturePoints : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool bTestGroundPlane : 1;  // 0x9(0x1)
	char pad_10_1 : 7;  // 0xA(0x1)
	bool bTestPlaneExtents : 1;  // 0xA(0x1)
	char pad_11_1 : 7;  // 0xB(0x1)
	bool bTestPlaneBoundaryPolygon : 1;  // 0xB(0x1)
	char pad_12[4];  // 0xC(0x4)
	struct TArray<struct FARTraceResult> ReturnValue;  // 0x10(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
// Size: 0x30(Inherited: 0x0) 
struct FLineTraceTrackedObjects3D
{
	struct FVector Start;  // 0x0(0xC)
	struct FVector End;  // 0xC(0xC)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bTestFeaturePoints : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bTestGroundPlane : 1;  // 0x19(0x1)
	char pad_26_1 : 7;  // 0x1A(0x1)
	bool bTestPlaneExtents : 1;  // 0x1A(0x1)
	char pad_27_1 : 7;  // 0x1B(0x1)
	bool bTestPlaneBoundaryPolygon : 1;  // 0x1B(0x1)
	char pad_28[4];  // 0x1C(0x4)
	struct TArray<struct FARTraceResult> ReturnValue;  // 0x20(0x10)

}; 
// Function AugmentedReality.ARBlueprintLibrary.PinComponent
// Size: 0x60(Inherited: 0x0) 
struct FPinComponent
{
	struct USceneComponent* ComponentToPin;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FTransform PinToWorldTransform;  // 0x10(0x30)
	struct UARTrackedGeometry* TrackedGeometry;  // 0x40(0x8)
	struct FName DebugName;  // 0x48(0x8)
	struct UARPin* ReturnValue;  // 0x50(0x8)
	char pad_88[8];  // 0x58(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
// Size: 0x18(Inherited: 0x0) 
struct FPinComponentToARPin
{
	struct USceneComponent* ComponentToPin;  // 0x0(0x8)
	struct UARPin* Pin;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
// Size: 0x80(Inherited: 0x0) 
struct FPinComponentToTraceResult
{
	struct USceneComponent* ComponentToPin;  // 0x0(0x8)
	char pad_8[8];  // 0x8(0x8)
	struct FARTraceResult TraceResult;  // 0x10(0x60)
	struct FName DebugName;  // 0x70(0x8)
	struct UARPin* ReturnValue;  // 0x78(0x8)

}; 
// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// Size: 0x10(Inherited: 0x0) 
struct FSetWorldMapData
{
	struct TArray<char> WorldMapData;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// Size: 0x1(Inherited: 0x0) 
struct FGetPlaneDetectionMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
// Size: 0x8(Inherited: 0x0) 
struct FRemoveARPinFromLocalStore
{
	struct FName InSaveName;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.RemovePin
// Size: 0x8(Inherited: 0x0) 
struct FRemovePin
{
	struct UARPin* PinToRemove;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
// Size: 0x10(Inherited: 0x0) 
struct FResizeXRCamera
{
	struct FIntPoint InSize;  // 0x0(0x8)
	struct FIntPoint ReturnValue;  // 0x8(0x8)

}; 
// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
// Size: 0x70(Inherited: 0x0) 
struct FGetTraceChannel
{
	struct FARTraceResult TraceResult;  // 0x0(0x60)
	uint8_t  ReturnValue;  // 0x60(0x1)
	char pad_97[15];  // 0x61(0xF)

}; 
// Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
// Size: 0x18(Inherited: 0x0) 
struct FSaveARPinToLocalStore
{
	struct FName InSaveName;  // 0x0(0x8)
	struct UARPin* InPin;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
// Size: 0x30(Inherited: 0x0) 
struct FSetAlignmentTransform
{
	struct FTransform InAlignmentTransform;  // 0x0(0x30)

}; 
// Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
// Size: 0x1C(Inherited: 0x0) 
struct FSetARWorldOriginLocationAndRotation
{
	struct FVector OriginLocation;  // 0x0(0xC)
	struct FRotator OriginRotation;  // 0xC(0xC)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool bIsTransformInWorldSpace : 1;  // 0x18(0x1)
	char pad_25_1 : 7;  // 0x19(0x1)
	bool bMaintainUpDirection : 1;  // 0x19(0x1)
	char pad_26[2];  // 0x1A(0x2)

}; 
// Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
// Size: 0x4(Inherited: 0x0) 
struct FSetARWorldScale
{
	float InWorldScale;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
// Size: 0x1(Inherited: 0x0) 
struct FSetImageComponentDebugMode
{
	uint8_t  NewDebugMode;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
// Size: 0x1(Inherited: 0x0) 
struct FSetEnabledXRCamera
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bOnOff : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// Size: 0x4(Inherited: 0x0) 
struct FGetMaxNumSimultaneousImagesTracked
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARBlueprintLibrary.StartARSession
// Size: 0x8(Inherited: 0x0) 
struct FStartARSession
{
	struct UARSessionConfig* SessionConfig;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
// Size: 0x3(Inherited: 0x0) 
struct FToggleARCapture
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bOnOff : 1;  // 0x0(0x1)
	uint8_t  CaptureType;  // 0x1(0x1)
	char pad_2_1 : 7;  // 0x2(0x1)
	bool ReturnValue : 1;  // 0x2(0x1)

}; 
// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
// Size: 0x8(Inherited: 0x0) 
struct FUnpinComponent
{
	struct USceneComponent* ComponentToUnpin;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// Size: 0x1(Inherited: 0x0) 
struct FShouldEnableCameraTracking
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
// Size: 0x70(Inherited: 0x0) 
struct FGetDistanceFromCamera
{
	struct FARTraceResult TraceResult;  // 0x0(0x60)
	float ReturnValue;  // 0x60(0x4)
	char pad_100[12];  // 0x64(0xC)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// Size: 0x30(Inherited: 0x0) 
struct FGetLocalToTrackingTransform
{
	struct FTransform ReturnValue;  // 0x0(0x30)

}; 
// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// Size: 0xC(Inherited: 0x0) 
struct FGetExtent
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// Size: 0x30(Inherited: 0x0) 
struct FGetLocalToWorldTransform
{
	struct FTransform ReturnValue;  // 0x0(0x30)

}; 
// Function AugmentedReality.ARDependencyHandler.InstallARService
// Size: 0x28(Inherited: 0x0) 
struct FInstallARService
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FLatentActionInfo LatentInfo;  // 0x8(0x18)
	uint8_t  OutInstallResult;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
// Size: 0x90(Inherited: 0x0) 
struct FGetLocalTransform
{
	struct FARTraceResult TraceResult;  // 0x0(0x60)
	struct FTransform ReturnValue;  // 0x60(0x30)

}; 
// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// Size: 0x10(Inherited: 0x0) 
struct FARSaveWorld
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue;  // 0x8(0x8)

}; 
// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// Size: 0x28(Inherited: 0x0) 
struct FARGetCandidateObject
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FVector Location;  // 0x8(0xC)
	struct FVector Extent;  // 0x14(0xC)
	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;  // 0x20(0x8)

}; 
// Function AugmentedReality.ARComponent.GetMRMesh
// Size: 0x8(Inherited: 0x0) 
struct FGetMRMesh
{
	struct UMRMeshComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARComponent.SetNativeID
// Size: 0x10(Inherited: 0x0) 
struct FSetNativeID
{
	struct FGuid NativeID;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
// Size: 0x50(Inherited: 0x0) 
struct FGetObjectClassificationDebugColors
{
	struct TMap<uint8_t , struct FLinearColor> ReturnValue;  // 0x0(0x50)

}; 
// Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
// Size: 0x70(Inherited: 0x0) 
struct FReceiveAdd
{
	struct FARGeoAnchorUpdatePayload Payload;  // 0x0(0x70)

}; 
// Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
// Size: 0x70(Inherited: 0x0) 
struct FServerUpdatePayload
{
	struct FARGeoAnchorUpdatePayload NewPayload;  // 0x0(0x70)

}; 
// Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
// Size: 0x50(Inherited: 0x0) 
struct FSetObjectClassificationDebugColors
{
	struct TMap<uint8_t , struct FLinearColor> InColors;  // 0x0(0x50)

}; 
// Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
// Size: 0x1(Inherited: 0x0) 
struct FSetPlaneComponentDebugMode
{
	uint8_t  NewDebugMode;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
// Size: 0x1(Inherited: 0x0) 
struct FSetQRCodeComponentDebugMode
{
	uint8_t  NewDebugMode;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
// Size: 0x1(Inherited: 0x0) 
struct FSetPoseComponentDebugMode
{
	uint8_t  NewDebugMode;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
// Size: 0x1(Inherited: 0x0) 
struct FSetGeoAnchorComponentDebugMode
{
	uint8_t  NewDebugMode;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
// Size: 0x28(Inherited: 0x0) 
struct FCheckARServiceAvailability
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FLatentActionInfo LatentInfo;  // 0x8(0x18)
	uint8_t  OutAvailability;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// Size: 0x4(Inherited: 0x0) 
struct FGetAmbientColorTemperatureKelvin
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
// Size: 0x8(Inherited: 0x0) 
struct FGetARDependencyHandler
{
	struct UARDependencyHandler* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// Size: 0x1(Inherited: 0x0) 
struct FGetEnvironmentCaptureProbeType
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
// Size: 0x8(Inherited: 0x0) 
struct FGetGeoTrackingSupport
{
	struct UARGeoTrackingSupport* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
// Size: 0x30(Inherited: 0x0) 
struct FRequestARSessionPermission
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UARSessionConfig* SessionConfig;  // 0x8(0x8)
	struct FLatentActionInfo LatentInfo;  // 0x10(0x18)
	uint8_t  OutPermissionResult;  // 0x28(0x1)
	char pad_41[7];  // 0x29(0x7)

}; 
// Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
// Size: 0x28(Inherited: 0x0) 
struct FStartARSessionLatent
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct UARSessionConfig* SessionConfig;  // 0x8(0x8)
	struct FLatentActionInfo LatentInfo;  // 0x10(0x18)

}; 
// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
// Size: 0x20(Inherited: 0x0) 
struct FAddGeoAnchorAtLocation
{
	float Longitude;  // 0x0(0x4)
	float Latitude;  // 0x4(0x4)
	struct FString OptionalAnchorName;  // 0x8(0x10)
	char pad_24_1 : 7;  // 0x18(0x1)
	bool ReturnValue : 1;  // 0x18(0x1)
	char pad_25[7];  // 0x19(0x7)

}; 
// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
// Size: 0x28(Inherited: 0x0) 
struct FAddGeoAnchorAtLocationWithAltitude
{
	float Longitude;  // 0x0(0x4)
	float Latitude;  // 0x4(0x4)
	float AltitudeMeters;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)
	struct FString OptionalAnchorName;  // 0x10(0x10)
	char pad_32_1 : 7;  // 0x20(0x1)
	bool ReturnValue : 1;  // 0x20(0x1)
	char pad_33[7];  // 0x21(0x7)

}; 
// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
// Size: 0x1(Inherited: 0x0) 
struct FGetGeoTrackingAccuracy
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
// Size: 0x1(Inherited: 0x0) 
struct FGetGeoTrackingState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// Size: 0x4(Inherited: 0x0) 
struct FGetLastUpdateFrameNumber
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
// Size: 0x1(Inherited: 0x0) 
struct FGetGeoTrackingStateReason
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
// Size: 0x1(Inherited: 0x0) 
struct FGetAltitudeSource
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// Size: 0x4(Inherited: 0x0) 
struct FGetAmbientIntensityLumens
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// Size: 0x10(Inherited: 0x0) 
struct FGetAmbientColor
{
	struct FLinearColor ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// Size: 0x8(Inherited: 0x0) 
struct FGetDebugName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARPin.GetPinnedComponent
// Size: 0x8(Inherited: 0x0) 
struct FGetPinnedComponent
{
	struct USceneComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// Size: 0x1(Inherited: 0x0) 
struct FGetTrackingState
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// Size: 0x8(Inherited: 0x0) 
struct FAddCandidateImage
{
	struct UARCandidateImage* NewCandidateImage;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// Size: 0x8(Inherited: 0x0) 
struct FAddCandidateObject
{
	struct UARCandidateObject* CandidateObject;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
// Size: 0x2(Inherited: 0x0) 
struct FHasSpatialMeshUsageFlag
{
	uint8_t  InFlag;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// Size: 0x10(Inherited: 0x0) 
struct FGetCandidateImageList
{
	struct TArray<struct UARCandidateImage*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// Size: 0x10(Inherited: 0x0) 
struct FGetCandidateObjectList
{
	struct TArray<struct UARCandidateObject*> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// Size: 0xC(Inherited: 0x0) 
struct FGetDesiredVideoFormat
{
	struct FARVideoFormat ReturnValue;  // 0x0(0xC)

}; 
// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
// Size: 0x1(Inherited: 0x0) 
struct FGetEnabledSessionTrackingFeature
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// Size: 0x1(Inherited: 0x0) 
struct FGetObjectClassification
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// Size: 0x1(Inherited: 0x0) 
struct FGetFaceTrackingDirection
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// Size: 0x1(Inherited: 0x0) 
struct FGetFaceTrackingUpdate
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// Size: 0x1(Inherited: 0x0) 
struct FGetFrameSyncMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// Size: 0x1(Inherited: 0x0) 
struct FGetLightEstimationMode
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
// Size: 0x1(Inherited: 0x0) 
struct FSetSessionTrackingFeatureToEnable
{
	uint8_t  InSessionTrackingFeature;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
// Size: 0x1(Inherited: 0x0) 
struct FGetSceneReconstructionMethod
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetSessionType
// Size: 0x1(Inherited: 0x0) 
struct FGetSessionType
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// Size: 0x1(Inherited: 0x0) 
struct FGetWorldAlignment
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// Size: 0x10(Inherited: 0x0) 
struct FGetWorldMapData
{
	struct TArray<char> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// Size: 0xC(Inherited: 0x0) 
struct FSetDesiredVideoFormat
{
	struct FARVideoFormat NewFormat;  // 0x0(0xC)

}; 
// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// Size: 0x1(Inherited: 0x0) 
struct FSetEnableAutoFocus
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// Size: 0x1(Inherited: 0x0) 
struct FSetFaceTrackingDirection
{
	uint8_t  InDirection;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// Size: 0x1(Inherited: 0x0) 
struct FSetFaceTrackingUpdate
{
	uint8_t  InUpdate;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// Size: 0x1(Inherited: 0x0) 
struct FSetResetCameraTracking
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// Size: 0x1(Inherited: 0x0) 
struct FSetResetTrackedObjects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bNewValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
// Size: 0x1(Inherited: 0x0) 
struct FSetSceneReconstructionMethod
{
	uint8_t  InSceneReconstructionMethod;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
// Size: 0x18(Inherited: 0x0) 
struct FClientUpdatePreviewImageData
{
	int32_t Offset;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct TArray<char> Buffer;  // 0x8(0x10)

}; 
// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// Size: 0x1(Inherited: 0x0) 
struct FShouldEnableAutoFocus
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// Size: 0x1(Inherited: 0x0) 
struct FShouldRenderCameraOverlay
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// Size: 0x1(Inherited: 0x0) 
struct FShouldResetCameraTracking
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// Size: 0x1(Inherited: 0x0) 
struct FShouldResetTrackedObjects
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// Size: 0x8(Inherited: 0x0) 
struct FGetARSharedWorldGameState
{
	struct AARSharedWorldGameState* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// Size: 0x10(Inherited: 0x0) 
struct FSetARSharedWorldData
{
	struct TArray<char> ARWorldData;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// Size: 0x10(Inherited: 0x0) 
struct FSetPreviewImageData
{
	struct TArray<char> ImageData;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
// Size: 0x8(Inherited: 0x0) 
struct FClientInitSharedWorld
{
	int32_t PreviewImageSize;  // 0x0(0x4)
	int32_t ARWorldDataSize;  // 0x4(0x4)

}; 
// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// Size: 0x8(Inherited: 0x0) 
struct FSetEnvironmentCaptureProbe
{
	struct UAREnvironmentCaptureProbe* InCaptureProbe;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// Size: 0x4(Inherited: 0x0) 
struct FGetLastUpdateTimestamp
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetName
// Size: 0x10(Inherited: 0x0) 
struct FGetName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// Size: 0x8(Inherited: 0x0) 
struct FGetUnderlyingMesh
{
	struct UMRMeshComponent* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// Size: 0x10(Inherited: 0x0) 
struct FGetBoundaryPolygonInLocalSpace
{
	struct TArray<struct FVector> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARPlaneGeometry.GetCenter
// Size: 0xC(Inherited: 0x0) 
struct FGetCenter
{
	struct FVector ReturnValue;  // 0x0(0xC)

}; 
// Function AugmentedReality.ARCandidateImage.GetOrientation
// Size: 0x1(Inherited: 0x0) 
struct FGetOrientation
{
	uint8_t  ReturnValue;  // 0x0(0x1)

}; 
// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// Size: 0x8(Inherited: 0x0) 
struct FGetDetectedImage
{
	struct UARCandidateImage* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// Size: 0x8(Inherited: 0x0) 
struct FGetEstimateSize
{
	struct FVector2D ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// Size: 0x50(Inherited: 0x0) 
struct FGetBlendShapes
{
	struct TMap<uint8_t , float> ReturnValue;  // 0x0(0x50)

}; 
// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// Size: 0x8(Inherited: 0x0) 
struct FGetBlendShapeValue
{
	uint8_t  BlendShape;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	float ReturnValue;  // 0x4(0x4)

}; 
// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetLocalSpaceEyeTransform
{
	uint8_t  Eye;  // 0x0(0x1)
	char pad_1[15];  // 0x1(0xF)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// Size: 0x40(Inherited: 0x0) 
struct FGetWorldSpaceEyeTransform
{
	uint8_t  Eye;  // 0x0(0x1)
	char pad_1[15];  // 0x1(0xF)
	struct FTransform ReturnValue;  // 0x10(0x30)

}; 
// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// Size: 0x8(Inherited: 0x0) 
struct FGetEnvironmentCaptureTexture
{
	struct UAREnvironmentCaptureProbeTexture* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
// Size: 0x4(Inherited: 0x0) 
struct FGetAltitudeMeters
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARGeoAnchor.GetLatitude
// Size: 0x4(Inherited: 0x0) 
struct FGetLatitude
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// Size: 0x8(Inherited: 0x0) 
struct FGetCandidateTexture
{
	struct UTexture2D* ReturnValue;  // 0x0(0x8)

}; 
// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// Size: 0x10(Inherited: 0x0) 
struct FGetFriendlyName
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// Size: 0x4(Inherited: 0x0) 
struct FGetPhysicalHeight
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// Size: 0x4(Inherited: 0x0) 
struct FGetPhysicalWidth
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// Size: 0x1C(Inherited: 0x0) 
struct FGetBoundingBox
{
	struct FBox ReturnValue;  // 0x0(0x1C)

}; 
// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// Size: 0x10(Inherited: 0x0) 
struct FGetCandidateObjectData
{
	struct TArray<char> ReturnValue;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// Size: 0x1C(Inherited: 0x0) 
struct FSetBoundingBox
{
	struct FBox InBoundingBox;  // 0x0(0x1C)

}; 
// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// Size: 0x10(Inherited: 0x0) 
struct FSetCandidateObjectData
{
	struct TArray<char> InCandidateObject;  // 0x0(0x10)

}; 
// Function AugmentedReality.ARCandidateObject.SetFriendlyName
// Size: 0x10(Inherited: 0x0) 
struct FSetFriendlyName
{
	struct FString NewName;  // 0x0(0x10)

}; 
