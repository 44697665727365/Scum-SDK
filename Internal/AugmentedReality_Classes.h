#pragma once 
#include <AugmentedReality_Structs.h>
 
 
 
// Class AugmentedReality.ARFaceGeometry
// Size: 0x1F0(Inherited: 0x100) 
struct UARFaceGeometry : public UARTrackedGeometry
{
	struct FVector LookAtTarget;  // 0xF8(0xC)
	char pad_268_1 : 7;  // 0x10C(0x1)
	bool bIsTracked : 1;  // 0x104(0x1)
	struct TMap<uint8_t , float> BlendShapes;  // 0x108(0x50)
	char pad_349[51];  // 0x15D(0x33)
	struct FTransform LeftEyeTransform;  // 0x190(0x30)
	struct FTransform RightEyeTransform;  // 0x1C0(0x30)

	struct FTransform GetWorldSpaceEyeTransform(uint8_t  Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	struct FTransform GetLocalSpaceEyeTransform(uint8_t  Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	float GetBlendShapeValue(uint8_t  BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	struct TMap<uint8_t , float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes
}; 



// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0x98(Inherited: 0x50) 
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed;  // 0x60(0x10)
	char pad_112[40];  // 0x70(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
}; 



// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x28(Inherited: 0x28) 
struct UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	bool ToggleARCapture(bool bOnOff, uint8_t  CaptureType); // Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession
	void SetEnabledXRCamera(bool bOnOff); // Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	void SetARWorldScale(float InWorldScale); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	void SetARWorldOriginLocationAndRotation(struct FVector OriginLocation, struct FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	bool SaveARPinToLocalStore(struct FName InSaveName, struct UARPin* InPin); // Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	struct FIntPoint ResizeXRCamera(struct FIntPoint& InSize); // Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin
	void RemoveARPinFromLocalStore(struct FName InSaveName); // Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	void RemoveAllARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	bool PinComponentToARPin(struct USceneComponent* ComponentToPin, struct UARPin* Pin); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	struct TMap<struct FName, struct UARPin*> LoadARPinsFromLocalStore(); // Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	bool IsSessionTypeSupported(uint8_t  SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	bool IsSessionTrackingFeatureSupported(uint8_t  SessionType, uint8_t  SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	bool IsSceneReconstructionSupported(uint8_t  SessionType, uint8_t  SceneReconstructionMethod); // Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	bool IsARPinLocalStoreSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	bool IsARPinLocalStoreReady(); // Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	uint8_t  GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	uint8_t  GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	uint8_t  GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(uint8_t  SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	struct UARTexture* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	struct UARTexture* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, uint8_t & OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	int32_t GetNumberOfTrackedFacesSupported(); // Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	bool GetCameraIntrinsics(struct FARCameraIntrinsics& OutCameraIntrinsics); // Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	float GetARWorldScale(); // Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	struct UARTexture* GetARTexture(uint8_t  TextureType); // Function AugmentedReality.ARBlueprintLibrary.GetARTexture
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	struct TArray<struct UARTrackedGeometry*> GetAllGeometriesByClass(UARTrackedGeometry* GeometryClass); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	struct FTransform GetAlignmentTransform(); // Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	struct TArray<struct UARTrackedPoint*> FindTrackedPointsByName(struct FString PointName); // Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	void CalculateClosestIntersection(struct TArray<struct FVector>& StartPoints, struct TArray<struct FVector>& EndPoints, struct FVector& ClosestIntersection); // Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	void CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform& AlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	bool AddTrackedPointWithName(struct FTransform& WorldTransform, struct FString PointName, bool bDeletePointsWithSameName); // Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
}; 



// Class AugmentedReality.ARActor
// Size: 0x220(Inherited: 0x220) 
struct AARActor : public AActor
{

	struct UARComponent* AddARComponent(UARComponent* InComponentClass, struct FGuid& NativeID); // Function AugmentedReality.ARActor.AddARComponent
}; 



// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x28(Inherited: 0x28) 
struct UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	uint8_t  GetTraceChannel(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	struct FTransform GetLocalTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
}; 



// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x50(Inherited: 0x30) 
struct UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
	char pad_48[32];  // 0x30(0x20)

}; 



// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x370(Inherited: 0x308) 
struct AARSharedWorldGameMode : public AGameMode
{
	int32_t BufferSizePerChunk;  // 0x308(0x4)
	char pad_780[100];  // 0x30C(0x64)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
}; 



// Class AugmentedReality.ARPlaneComponent
// Size: 0x300(Inherited: 0x280) 
struct UARPlaneComponent : public UARComponent
{
	struct FARPlaneUpdatePayload ReplicatedPayload;  // 0x280(0x80)

	void SetPlaneComponentDebugMode(uint8_t  NewDebugMode); // Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	void SetObjectClassificationDebugColors(struct TMap<uint8_t , struct FLinearColor>& InColors); // Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	void ServerUpdatePayload(struct FARPlaneUpdatePayload NewPayload); // Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARPlaneUpdatePayload& Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
	void ReceiveAdd(struct FARPlaneUpdatePayload& Payload); // Function AugmentedReality.ARPlaneComponent.ReceiveAdd
	struct TMap<uint8_t , struct FLinearColor> GetObjectClassificationDebugColors(); // Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
}; 



// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x40(Inherited: 0x28) 
struct UARBasicLightEstimate : public UARLightEstimate
{
	float AmbientIntensityLumens;  // 0x28(0x4)
	float AmbientColorTemperatureKelvin;  // 0x2C(0x4)
	struct FLinearColor AmbientColor;  // 0x30(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
}; 



// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Size: 0xA0(Inherited: 0x50) 
struct UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed;  // 0x60(0x10)
	char pad_112[48];  // 0x70(0x30)

	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, struct FString Error); // DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	struct UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(struct UObject* WorldContextObject, struct FVector& WorldPosition); // Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
}; 



// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x80(Inherited: 0x50) 
struct UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed;  // 0x60(0x10)
	char pad_112[16];  // 0x70(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
}; 



// Class AugmentedReality.ARComponent
// Size: 0x280(Inherited: 0x200) 
struct UARComponent : public USceneComponent
{
	struct FGuid NativeID;  // 0x1F8(0x10)
	char pad_528[40];  // 0x210(0x28)
	char pad_568_1 : 7;  // 0x238(0x1)
	bool bUseDefaultReplication : 1;  // 0x238(0x1)
	char pad_569[7];  // 0x239(0x7)
	struct UMaterialInterface* DefaultMeshMaterial;  // 0x240(0x8)
	struct UMaterialInterface* DefaultWireframeMeshMaterial;  // 0x248(0x8)
	struct UMRMeshComponent* MRMeshComponent;  // 0x250(0x8)
	struct UARTrackedGeometry* MyTrackedGeometry;  // 0x258(0x8)
	char pad_608[32];  // 0x260(0x20)

	void UpdateVisualization(); // Function AugmentedReality.ARComponent.UpdateVisualization
	void SetNativeID(struct FGuid NativeID); // Function AugmentedReality.ARComponent.SetNativeID
	void ReceiveRemove(); // Function AugmentedReality.ARComponent.ReceiveRemove
	void OnRep_Payload(); // Function AugmentedReality.ARComponent.OnRep_Payload
	struct UMRMeshComponent* GetMRMesh(); // Function AugmentedReality.ARComponent.GetMRMesh
}; 



// Class AugmentedReality.ARPointComponent
// Size: 0x280(Inherited: 0x280) 
struct UARPointComponent : public UARComponent
{
	struct FARPointUpdatePayload ReplicatedPayload;  // 0x278(0x1)

	void ServerUpdatePayload(struct FARPointUpdatePayload NewPayload); // Function AugmentedReality.ARPointComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARPointUpdatePayload& Payload); // Function AugmentedReality.ARPointComponent.ReceiveUpdate
	void ReceiveAdd(struct FARPointUpdatePayload& Payload); // Function AugmentedReality.ARPointComponent.ReceiveAdd
}; 



// Class AugmentedReality.ARFaceComponent
// Size: 0x2E0(Inherited: 0x280) 
struct UARFaceComponent : public UARComponent
{
	uint8_t  TransformSetting;  // 0x278(0x1)
	char pad_641_1 : 7;  // 0x281(0x1)
	bool bUpdateVertexNormal : 1;  // 0x279(0x1)
	char pad_642_1 : 7;  // 0x282(0x1)
	bool bFaceOutOfScreen : 1;  // 0x27A(0x1)
	struct FARFaceUpdatePayload ReplicatedPayload;  // 0x280(0x40)
	char pad_707[29];  // 0x2C3(0x1D)

	void SetFaceComponentDebugMode(uint8_t  NewDebugMode); // Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	void ServerUpdatePayload(struct FARFaceUpdatePayload NewPayload); // Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARFaceUpdatePayload& Payload); // Function AugmentedReality.ARFaceComponent.ReceiveUpdate
	void ReceiveAdd(struct FARFaceUpdatePayload& Payload); // Function AugmentedReality.ARFaceComponent.ReceiveAdd
}; 



// Class AugmentedReality.ARObjectComponent
// Size: 0x2B0(Inherited: 0x280) 
struct UARObjectComponent : public UARComponent
{
	struct FARObjectUpdatePayload ReplicatedPayload;  // 0x280(0x30)

	void ServerUpdatePayload(struct FARObjectUpdatePayload NewPayload); // Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARObjectUpdatePayload& Payload); // Function AugmentedReality.ARObjectComponent.ReceiveUpdate
	void ReceiveAdd(struct FARObjectUpdatePayload& Payload); // Function AugmentedReality.ARObjectComponent.ReceiveAdd
}; 



// Class AugmentedReality.ARImageComponent
// Size: 0x2E0(Inherited: 0x280) 
struct UARImageComponent : public UARComponent
{
	struct FARImageUpdatePayload ReplicatedPayload;  // 0x280(0x60)

	void SetImageComponentDebugMode(uint8_t  NewDebugMode); // Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	void ServerUpdatePayload(struct FARImageUpdatePayload NewPayload); // Function AugmentedReality.ARImageComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARImageUpdatePayload& Payload); // Function AugmentedReality.ARImageComponent.ReceiveUpdate
	void ReceiveAdd(struct FARImageUpdatePayload& Payload); // Function AugmentedReality.ARImageComponent.ReceiveAdd
}; 



// Class AugmentedReality.ARQRCodeComponent
// Size: 0x2F0(Inherited: 0x280) 
struct UARQRCodeComponent : public UARComponent
{
	struct FARQRCodeUpdatePayload ReplicatedPayload;  // 0x280(0x70)

	void SetQRCodeComponentDebugMode(uint8_t  NewDebugMode); // Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload NewPayload); // Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARQRCodeUpdatePayload& Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	void ReceiveAdd(struct FARQRCodeUpdatePayload& Payload); // Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
}; 



// Class AugmentedReality.ARLifeCycleComponent
// Size: 0x230(Inherited: 0x200) 
struct UARLifeCycleComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnARActorSpawnedDelegate;  // 0x1F8(0x10)
	struct FMulticastInlineDelegate OnARActorToBeDestroyedDelegate;  // 0x208(0x10)
	char pad_544[16];  // 0x220(0x10)

	void ServerSpawnARActor(UObject* ComponentClass, struct FGuid NativeID); // Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	void ServerDestroyARActor(struct AARActor* Actor); // Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(struct AARActor* Actor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	void InstanceARActorSpawnedDelegate__DelegateSignature(UObject* ComponentClass, struct FGuid NativeID, struct AARActor* SpawnedActor); // DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
}; 



// Class AugmentedReality.ARPoseComponent
// Size: 0x2C0(Inherited: 0x280) 
struct UARPoseComponent : public UARComponent
{
	struct FARPoseUpdatePayload ReplicatedPayload;  // 0x280(0x40)

	void SetPoseComponentDebugMode(uint8_t  NewDebugMode); // Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	void ServerUpdatePayload(struct FARPoseUpdatePayload NewPayload); // Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARPoseUpdatePayload& Payload); // Function AugmentedReality.ARPoseComponent.ReceiveUpdate
	void ReceiveAdd(struct FARPoseUpdatePayload& Payload); // Function AugmentedReality.ARPoseComponent.ReceiveAdd
}; 



// Class AugmentedReality.AREnvironmentProbeComponent
// Size: 0x2B0(Inherited: 0x280) 
struct UAREnvironmentProbeComponent : public UARComponent
{
	struct FAREnvironmentProbeUpdatePayload ReplicatedPayload;  // 0x280(0x30)

	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload NewPayload); // Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload& Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	void ReceiveAdd(struct FAREnvironmentProbeUpdatePayload& Payload); // Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
}; 



// Class AugmentedReality.AROriginActor
// Size: 0x220(Inherited: 0x220) 
struct AAROriginActor : public AActor
{

}; 



// Class AugmentedReality.ARMeshComponent
// Size: 0x2E0(Inherited: 0x280) 
struct UARMeshComponent : public UARComponent
{
	struct FARMeshUpdatePayload ReplicatedPayload;  // 0x280(0x60)

	void ServerUpdatePayload(struct FARMeshUpdatePayload NewPayload); // Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARMeshUpdatePayload& Payload); // Function AugmentedReality.ARMeshComponent.ReceiveUpdate
	void ReceiveAdd(struct FARMeshUpdatePayload& Payload); // Function AugmentedReality.ARMeshComponent.ReceiveAdd
}; 



// Class AugmentedReality.ARGeoAnchorComponent
// Size: 0x2F0(Inherited: 0x280) 
struct UARGeoAnchorComponent : public UARComponent
{
	struct FARGeoAnchorUpdatePayload ReplicatedPayload;  // 0x280(0x70)

	void SetGeoAnchorComponentDebugMode(uint8_t  NewDebugMode); // Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload NewPayload); // Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	void ReceiveUpdate(struct FARGeoAnchorUpdatePayload& Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	void ReceiveAdd(struct FARGeoAnchorUpdatePayload& Payload); // Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
}; 



// Class AugmentedReality.ARDependencyHandler
// Size: 0x28(Inherited: 0x28) 
struct UARDependencyHandler : public UObject
{

	void StartARSessionLatent(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo); // Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
	void RequestARSessionPermission(struct UObject* WorldContextObject, struct UARSessionConfig* SessionConfig, struct FLatentActionInfo LatentInfo, uint8_t & OutPermissionResult); // Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	void InstallARService(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, uint8_t & OutInstallResult); // Function AugmentedReality.ARDependencyHandler.InstallARService
	struct UARDependencyHandler* GetARDependencyHandler(); // Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	void CheckARServiceAvailability(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, uint8_t & OutAvailability); // Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
}; 



// Class AugmentedReality.ARCandidateObject
// Size: 0x70(Inherited: 0x30) 
struct UARCandidateObject : public UDataAsset
{
	struct TArray<char> CandidateObjectData;  // 0x30(0x10)
	struct FString FriendlyName;  // 0x40(0x10)
	struct FBox BoundingBox;  // 0x50(0x1C)
	char pad_108[4];  // 0x6C(0x4)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName
	void SetCandidateObjectData(struct TArray<char>& InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	void SetBoundingBox(struct FBox& InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox
}; 



// Class AugmentedReality.ARGeoTrackingSupport
// Size: 0x28(Inherited: 0x28) 
struct UARGeoTrackingSupport : public UObject
{

	struct UARGeoTrackingSupport* GetGeoTrackingSupport(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	uint8_t  GetGeoTrackingStateReason(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	uint8_t  GetGeoTrackingState(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	uint8_t  GetGeoTrackingAccuracy(); // Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, struct FString OptionalAnchorName); // Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
}; 



// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x110(Inherited: 0x100) 
struct UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
	struct FVector Extent;  // 0xF8(0xC)
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;  // 0x108(0x8)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
}; 



// Class AugmentedReality.ARTrackedQRCode
// Size: 0x120(Inherited: 0x110) 
struct UARTrackedQRCode : public UARTrackedImage
{
	struct FString QRCode;  // 0x108(0x10)
	int32_t Version;  // 0x118(0x4)

}; 



// Class AugmentedReality.ARSessionConfig
// Size: 0x110(Inherited: 0x30) 
struct UARSessionConfig : public UDataAsset
{
	char pad_48_1 : 7;  // 0x30(0x1)
	bool bGenerateMeshDataFromTrackedGeometry : 1;  // 0x30(0x1)
	char pad_49_1 : 7;  // 0x31(0x1)
	bool bGenerateCollisionForMeshData : 1;  // 0x31(0x1)
	char pad_50_1 : 7;  // 0x32(0x1)
	bool bGenerateNavMeshForMeshData : 1;  // 0x32(0x1)
	char pad_51_1 : 7;  // 0x33(0x1)
	bool bUseMeshDataForOcclusion : 1;  // 0x33(0x1)
	char pad_52_1 : 7;  // 0x34(0x1)
	bool bRenderMeshDataInWireframe : 1;  // 0x34(0x1)
	char pad_53_1 : 7;  // 0x35(0x1)
	bool bTrackSceneObjects : 1;  // 0x35(0x1)
	char pad_54_1 : 7;  // 0x36(0x1)
	bool bUsePersonSegmentationForOcclusion : 1;  // 0x36(0x1)
	char pad_55_1 : 7;  // 0x37(0x1)
	bool bUseSceneDepthForOcclusion : 1;  // 0x37(0x1)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool bUseAutomaticImageScaleEstimation : 1;  // 0x38(0x1)
	char pad_57_1 : 7;  // 0x39(0x1)
	bool bUseStandardOnboardingUX : 1;  // 0x39(0x1)
	uint8_t  WorldAlignment;  // 0x3A(0x1)
	uint8_t  SessionType;  // 0x3B(0x1)
	uint8_t  PlaneDetectionMode;  // 0x3C(0x1)
	char pad_61_1 : 7;  // 0x3D(0x1)
	bool bHorizontalPlaneDetection : 1;  // 0x3D(0x1)
	char pad_62_1 : 7;  // 0x3E(0x1)
	bool bVerticalPlaneDetection : 1;  // 0x3E(0x1)
	char pad_63_1 : 7;  // 0x3F(0x1)
	bool bEnableAutoFocus : 1;  // 0x3F(0x1)
	uint8_t  LightEstimationMode;  // 0x40(0x1)
	uint8_t  FrameSyncMode;  // 0x41(0x1)
	char pad_66_1 : 7;  // 0x42(0x1)
	bool bEnableAutomaticCameraOverlay : 1;  // 0x42(0x1)
	char pad_67_1 : 7;  // 0x43(0x1)
	bool bEnableAutomaticCameraTracking : 1;  // 0x43(0x1)
	char pad_68_1 : 7;  // 0x44(0x1)
	bool bResetCameraTracking : 1;  // 0x44(0x1)
	char pad_69_1 : 7;  // 0x45(0x1)
	bool bResetTrackedObjects : 1;  // 0x45(0x1)
	char pad_70[2];  // 0x46(0x2)
	struct TArray<struct UARCandidateImage*> CandidateImages;  // 0x48(0x10)
	int32_t MaxNumSimultaneousImagesTracked;  // 0x58(0x4)
	uint8_t  EnvironmentCaptureProbeType;  // 0x5C(0x1)
	char pad_93[3];  // 0x5D(0x3)
	struct TArray<char> WorldMapData;  // 0x60(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects;  // 0x70(0x10)
	struct FARVideoFormat DesiredVideoFormat;  // 0x80(0xC)
	char pad_140_1 : 7;  // 0x8C(0x1)
	bool bUseOptimalVideoFormat : 1;  // 0x8C(0x1)
	uint8_t  FaceTrackingDirection;  // 0x8D(0x1)
	uint8_t  FaceTrackingUpdate;  // 0x8E(0x1)
	char pad_143[1];  // 0x8F(0x1)
	int32_t MaxNumberOfTrackedFaces;  // 0x90(0x4)
	char pad_148[4];  // 0x94(0x4)
	struct TArray<char> SerializedARCandidateImageDatabase;  // 0x98(0x10)
	uint8_t  EnabledSessionTrackingFeature;  // 0xA8(0x1)
	uint8_t  SceneReconstructionMethod;  // 0xA9(0x1)
	char pad_170[6];  // 0xAA(0x6)
	UARPlaneComponent* PlaneComponentClass;  // 0xB0(0x8)
	UARPointComponent* PointComponentClass;  // 0xB8(0x8)
	UARFaceComponent* FaceComponentClass;  // 0xC0(0x8)
	UARImageComponent* ImageComponentClass;  // 0xC8(0x8)
	UARQRCodeComponent* QRCodeComponentClass;  // 0xD0(0x8)
	UARPoseComponent* PoseComponentClass;  // 0xD8(0x8)
	UAREnvironmentProbeComponent* EnvironmentProbeComponentClass;  // 0xE0(0x8)
	UARObjectComponent* ObjectComponentClass;  // 0xE8(0x8)
	UARMeshComponent* MeshComponentClass;  // 0xF0(0x8)
	UARGeoAnchorComponent* GeoAnchorComponentClass;  // 0xF8(0x8)
	struct UMaterialInterface* DefaultMeshMaterial;  // 0x100(0x8)
	struct UMaterialInterface* DefaultWireframeMeshMaterial;  // 0x108(0x8)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData
	void SetSessionTrackingFeatureToEnable(uint8_t  InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	void SetSceneReconstructionMethod(uint8_t  InSceneReconstructionMethod); // Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	void SetFaceTrackingUpdate(uint8_t  InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	void SetFaceTrackingDirection(uint8_t  InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*>& InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData
	uint8_t  GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	uint8_t  GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType
	uint8_t  GetSceneReconstructionMethod(); // Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	uint8_t  GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	uint8_t  GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	uint8_t  GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	uint8_t  GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	uint8_t  GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	uint8_t  GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	uint8_t  GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage
}; 



// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Size: 0xA0(Inherited: 0x50) 
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
	struct FMulticastInlineDelegate OnSuccess;  // 0x50(0x10)
	struct FMulticastInlineDelegate OnFailed;  // 0x60(0x10)
	char pad_112[48];  // 0x70(0x30)

	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, struct FString Error); // DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(struct UObject* WorldContextObject, float Longitude, float Latitude); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(struct UObject* WorldContextObject); // Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
}; 



// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x200(Inherited: 0xB0) 
struct UARTrackableNotifyComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnAddTrackedGeometry;  // 0xB0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry;  // 0xC0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry;  // 0xD0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane;  // 0xE0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane;  // 0xF0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane;  // 0x100(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint;  // 0x110(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint;  // 0x120(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint;  // 0x130(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage;  // 0x140(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage;  // 0x150(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage;  // 0x160(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace;  // 0x170(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace;  // 0x180(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace;  // 0x190(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe;  // 0x1A0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe;  // 0x1B0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe;  // 0x1C0(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject;  // 0x1D0(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject;  // 0x1E0(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject;  // 0x1F0(0x10)

}; 



// Class AugmentedReality.ARTraceResultDummy
// Size: 0x28(Inherited: 0x28) 
struct UARTraceResultDummy : public UObject
{

}; 



// Class AugmentedReality.ARLightEstimate
// Size: 0x28(Inherited: 0x28) 
struct UARLightEstimate : public UObject
{

}; 



// Class AugmentedReality.ARCandidateImage
// Size: 0x58(Inherited: 0x30) 
struct UARCandidateImage : public UDataAsset
{
	struct UTexture2D* CandidateTexture;  // 0x30(0x8)
	struct FString FriendlyName;  // 0x38(0x10)
	float Width;  // 0x48(0x4)
	float Height;  // 0x4C(0x4)
	uint8_t  Orientation;  // 0x50(0x1)
	char pad_81[7];  // 0x51(0x7)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	uint8_t  GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture
}; 



// Class AugmentedReality.ARPin
// Size: 0xF0(Inherited: 0x28) 
struct UARPin : public UObject
{
	struct UARTrackedGeometry* TrackedGeometry;  // 0x28(0x8)
	struct USceneComponent* PinnedComponent;  // 0x30(0x8)
	char pad_56[8];  // 0x38(0x8)
	struct FTransform LocalToTrackingTransform;  // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform;  // 0x70(0x30)
	uint8_t  TrackingState;  // 0xA0(0x1)
	char pad_161[31];  // 0xA1(0x1F)
	struct FMulticastInlineDelegate OnARTrackingStateChanged;  // 0xC0(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated;  // 0xD0(0x10)
	char pad_224[16];  // 0xE0(0x10)

	uint8_t  GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName
	void DebugDraw(struct UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw
}; 



// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x2C8(Inherited: 0x290) 
struct AARSharedWorldGameState : public AGameState
{
	struct TArray<char> PreviewImageData;  // 0x290(0x10)
	struct TArray<char> ARWorldData;  // 0x2A0(0x10)
	int32_t PreviewImageBytesTotal;  // 0x2B0(0x4)
	int32_t ARWorldBytesTotal;  // 0x2B4(0x4)
	int32_t PreviewImageBytesDelivered;  // 0x2B8(0x4)
	int32_t ARWorldBytesDelivered;  // 0x2BC(0x4)
	char pad_704[8];  // 0x2C0(0x8)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
}; 



// Class AugmentedReality.ARPlaneGeometry
// Size: 0x130(Inherited: 0x100) 
struct UARPlaneGeometry : public UARTrackedGeometry
{
	uint8_t  Orientation;  // 0xF8(0x1)
	struct FVector Center;  // 0xFC(0xC)
	struct FVector Extent;  // 0x108(0xC)
	struct TArray<struct FVector> BoundaryPolygon;  // 0x118(0x10)
	struct UARPlaneGeometry* SubsumedBy;  // 0x128(0x8)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	uint8_t  GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
}; 



// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x578(Inherited: 0x570) 
struct AARSharedWorldPlayerController : public APlayerController
{
	char pad_1392[8];  // 0x570(0x8)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
}; 



// Class AugmentedReality.ARSkyLight
// Size: 0x240(Inherited: 0x230) 
struct AARSkyLight : public ASkyLight
{
	struct UAREnvironmentCaptureProbe* CaptureProbe;  // 0x230(0x8)
	char pad_568[8];  // 0x238(0x8)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
}; 



// Class AugmentedReality.ARTexture
// Size: 0x1A0(Inherited: 0x180) 
struct UARTexture : public UTexture
{
	uint8_t  TextureType;  // 0x178(0x1)
	float Timestamp;  // 0x17C(0x4)
	struct FGuid ExternalTextureGuid;  // 0x180(0x10)
	struct FVector2D Size;  // 0x190(0x8)
	char pad_413[3];  // 0x19D(0x3)

}; 



// Class AugmentedReality.ARTextureCameraImage
// Size: 0x1A0(Inherited: 0x1A0) 
struct UARTextureCameraImage : public UARTexture
{

}; 



// Class AugmentedReality.ARTextureCameraDepth
// Size: 0x1A0(Inherited: 0x1A0) 
struct UARTextureCameraDepth : public UARTexture
{
	uint8_t  DepthQuality;  // 0x198(0x1)
	uint8_t  DepthAccuracy;  // 0x199(0x1)
	char pad_418_1 : 7;  // 0x1A2(0x1)
	bool bIsTemporallySmoothed : 1;  // 0x19A(0x1)

}; 



// Class AugmentedReality.ARMeshGeometry
// Size: 0x100(Inherited: 0x100) 
struct UARMeshGeometry : public UARTrackedGeometry
{

	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, uint8_t & OutClassification, struct FVector& OutClassificationLocation, float MaxLocationDiff); // Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
}; 



// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x1F0(Inherited: 0x1D0) 
struct UAREnvironmentCaptureProbeTexture : public UTextureCube
{
	uint8_t  TextureType;  // 0x1D0(0x1)
	char pad_465[3];  // 0x1D1(0x3)
	float Timestamp;  // 0x1D4(0x4)
	struct FGuid ExternalTextureGuid;  // 0x1D8(0x10)
	struct FVector2D Size;  // 0x1E8(0x8)

}; 



// Class AugmentedReality.ARTrackedGeometry
// Size: 0x100(Inherited: 0x28) 
struct UARTrackedGeometry : public UObject
{
	struct FGuid UniqueId;  // 0x28(0x10)
	char pad_56[8];  // 0x38(0x8)
	struct FTransform LocalToTrackingTransform;  // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform;  // 0x70(0x30)
	uint8_t  TrackingState;  // 0xA0(0x1)
	char pad_161[15];  // 0xA1(0xF)
	struct UMRMeshComponent* UnderlyingMesh;  // 0xB0(0x8)
	uint8_t  ObjectClassification;  // 0xB8(0x1)
	uint8_t  SpatialMeshUsageFlags;  // 0xB9(0x1)
	char pad_186[22];  // 0xBA(0x16)
	int32_t LastUpdateFrameNumber;  // 0xD0(0x4)
	char pad_212[12];  // 0xD4(0xC)
	struct FName DebugName;  // 0xE0(0x8)
	char pad_232[24];  // 0xE8(0x18)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked
	bool HasSpatialMeshUsageFlag(uint8_t  InFlag); // Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	uint8_t  GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	uint8_t  GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	struct FString GetName(); // Function AugmentedReality.ARTrackedGeometry.GetName
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName
}; 



// Class AugmentedReality.ARTrackedPoint
// Size: 0x100(Inherited: 0x100) 
struct UARTrackedPoint : public UARTrackedGeometry
{

}; 



// Class AugmentedReality.ARTrackedObject
// Size: 0x100(Inherited: 0x100) 
struct UARTrackedObject : public UARTrackedGeometry
{
	struct UARCandidateObject* DetectedObject;  // 0xF8(0x8)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject
}; 



// Class AugmentedReality.ARTrackedImage
// Size: 0x110(Inherited: 0x100) 
struct UARTrackedImage : public UARTrackedGeometry
{
	struct UARCandidateImage* DetectedImage;  // 0xF8(0x8)
	struct FVector2D EstimatedSize;  // 0x100(0x8)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage
}; 



// Class AugmentedReality.ARTrackedPose
// Size: 0x150(Inherited: 0x100) 
struct UARTrackedPose : public UARTrackedGeometry
{
	struct FARPose3D TrackedPose;  // 0xF8(0x50)

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
}; 



// Class AugmentedReality.ARGeoAnchor
// Size: 0x110(Inherited: 0x100) 
struct UARGeoAnchor : public UARTrackedGeometry
{
	char pad_256[16];  // 0x100(0x10)

	float GetLongitude(); // Function AugmentedReality.ARGeoAnchor.GetLongitude
	float GetLatitude(); // Function AugmentedReality.ARGeoAnchor.GetLatitude
	uint8_t  GetAltitudeSource(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
	float GetAltitudeMeters(); // Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
}; 



// Class AugmentedReality.ARTypesDummyClass
// Size: 0x28(Inherited: 0x28) 
struct UARTypesDummyClass : public UObject
{

}; 



