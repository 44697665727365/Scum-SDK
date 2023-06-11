#pragma once 
#include "SDK.h" 
 
 
// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
// Size: 0x1(Inherited: 0x0) 
struct FSetEnableEnvelopeFollowing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInEnvelopeFollowing : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.HasError
// Size: 0x1(Inherited: 0x0) 
struct FHasError
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// DelegateFunction MediaAssets.OnMediaPlayerMediaOpened__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnMediaPlayerMediaOpened__DelegateSignature
{
	struct FString OpenedUrl;  // 0x0(0x10)

}; 
// Function MediaAssets.MediaPlayer.GetDuration
// Size: 0x8(Inherited: 0x0) 
struct FGetDuration
{
	struct FTimespan ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaSource.SetMediaOptionInt64
// Size: 0x10(Inherited: 0x0) 
struct FSetMediaOptionInt64
{
	struct FName Key;  // 0x0(0x8)
	int64_t Value;  // 0x8(0x8)

}; 
// Function MediaAssets.MediaPlayer.OpenFile
// Size: 0x18(Inherited: 0x0) 
struct FOpenFile
{
	struct FString FilePath;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MediaAssets.MediaPlayer.IsPreparing
// Size: 0x1(Inherited: 0x0) 
struct FIsPreparing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// DelegateFunction MediaAssets.OnMediaPlayerMediaOpenFailed__DelegateSignature
// Size: 0x10(Inherited: 0x0) 
struct FOnMediaPlayerMediaOpenFailed__DelegateSignature
{
	struct FString FailedUrl;  // 0x0(0x10)

}; 
// ScriptStruct MediaAssets.MediaCaptureDevice
// Size: 0x28(Inherited: 0x0) 
struct FMediaCaptureDevice
{
	struct FText DisplayName;  // 0x0(0x18)
	struct FString URL;  // 0x18(0x10)

}; 
// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// Size: 0x10(Inherited: 0x0) 
struct FOpenPlaylistIndex
{
	struct UMediaPlaylist* InPlaylist;  // 0x0(0x8)
	int32_t Index;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// Size: 0x8(Inherited: 0x0) 
struct FMediaSoundComponentSpectralData
{
	float FrequencyHz;  // 0x0(0x4)
	float Magnitude;  // 0x4(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetUrl
// Size: 0x10(Inherited: 0x0) 
struct FGetUrl
{
	struct FString ReturnValue;  // 0x0(0x10)

}; 
// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
// Size: 0x10(Inherited: 0x0) 
struct FGetVideoTrackDimensions
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	struct FIntPoint ReturnValue;  // 0x8(0x8)

}; 
// Function MediaAssets.MediaPlayer.IsReady
// Size: 0x1(Inherited: 0x0) 
struct FIsReady
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
// Size: 0x10(Inherited: 0x0) 
struct FSetVideoTrackFrameRate
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	float FrameRate;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function MediaAssets.MediaPlayer.GetNumTrackFormats
// Size: 0xC(Inherited: 0x0) 
struct FGetNumTrackFormats
{
	uint8_t  TrackType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t TrackIndex;  // 0x4(0x4)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// Function MediaAssets.MediaPlayer.SetBlockOnTime
// Size: 0x8(Inherited: 0x0) 
struct FSetBlockOnTime
{
	struct FTimespan Time;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaSource.SetMediaOptionBool
// Size: 0xC(Inherited: 0x0) 
struct FSetMediaOptionBool
{
	struct FName Key;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Value : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function MediaAssets.MediaPlayer.GetSupportedRates
// Size: 0x18(Inherited: 0x0) 
struct FGetSupportedRates
{
	struct TArray<struct FFloatRange> OutRates;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool Unthinned : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MediaAssets.MediaPlayer.CanPlaySource
// Size: 0x10(Inherited: 0x0) 
struct FCanPlaySource
{
	struct UMediaSource* MediaSource;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function MediaAssets.MediaSource.SetMediaOptionFloat
// Size: 0xC(Inherited: 0x0) 
struct FSetMediaOptionFloat
{
	struct FName Key;  // 0x0(0x8)
	float Value;  // 0x8(0x4)

}; 
// Function MediaAssets.MediaPlayer.IsPlaying
// Size: 0x1(Inherited: 0x0) 
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlaylist.Remove
// Size: 0x10(Inherited: 0x0) 
struct FRemove
{
	struct UMediaSource* MediaSource;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function MediaAssets.MediaPlayer.IsClosed
// Size: 0x1(Inherited: 0x0) 
struct FIsClosed
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.IsBuffering
// Size: 0x1(Inherited: 0x0) 
struct FIsBuffering
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaSource.SetMediaOptionString
// Size: 0x18(Inherited: 0x0) 
struct FSetMediaOptionString
{
	struct FName Key;  // 0x0(0x8)
	struct FString Value;  // 0x8(0x10)

}; 
// Function MediaAssets.MediaPlayer.CanPause
// Size: 0x1(Inherited: 0x0) 
struct FCanPause
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaSource.Validate
// Size: 0x1(Inherited: 0x0) 
struct FValidate
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.IsPaused
// Size: 0x1(Inherited: 0x0) 
struct FIsPaused
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
// Size: 0x10(Inherited: 0x0) 
struct FGetNormalizedSpectralData
{
	struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;  // 0x0(0x10)

}; 
// Function MediaAssets.FileMediaSource.SetFilePath
// Size: 0x10(Inherited: 0x0) 
struct FSetFilePath
{
	struct FString Path;  // 0x0(0x10)

}; 
// Function MediaAssets.MediaComponent.GetMediaTexture
// Size: 0x8(Inherited: 0x0) 
struct FGetMediaTexture
{
	struct UMediaTexture* ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
// Size: 0x18(Inherited: 0x0) 
struct FEnumerateAudioCaptureDevices
{
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // 0x0(0x10)
	int32_t Filter;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
// Size: 0x18(Inherited: 0x0) 
struct FEnumerateVideoCaptureDevices
{
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // 0x0(0x10)
	int32_t Filter;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
// Size: 0x18(Inherited: 0x0) 
struct FEnumerateWebcamCaptureDevices
{
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // 0x0(0x10)
	int32_t Filter;  // 0x10(0x4)
	char pad_20[4];  // 0x14(0x4)

}; 
// Function MediaAssets.MediaPlayer.IsLooping
// Size: 0x1(Inherited: 0x0) 
struct FIsLooping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.GetRate
// Size: 0x4(Inherited: 0x0) 
struct FGetRate
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaPlayer.OpenSource
// Size: 0x10(Inherited: 0x0) 
struct FOpenSource
{
	struct UMediaSource* MediaSource;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function MediaAssets.MediaPlayer.SelectTrack
// Size: 0xC(Inherited: 0x0) 
struct FSelectTrack
{
	uint8_t  TrackType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t TrackIndex;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[3];  // 0x9(0x3)

}; 
// Function MediaAssets.MediaTexture.GetMediaPlayer
// Size: 0x8(Inherited: 0x0) 
struct FGetMediaPlayer
{
	struct UMediaPlayer* ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.CanPlayUrl
// Size: 0x18(Inherited: 0x0) 
struct FCanPlayUrl
{
	struct FString URL;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MediaAssets.MediaPlayer.GetAudioTrackType
// Size: 0x18(Inherited: 0x0) 
struct FGetAudioTrackType
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
// Size: 0xC(Inherited: 0x0) 
struct FGetAudioTrackChannels
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
// Size: 0xC(Inherited: 0x0) 
struct FGetAudioTrackSampleRate
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// Size: 0x8(Inherited: 0x0) 
struct FGetDesiredPlayerName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
// Size: 0x4(Inherited: 0x0) 
struct FGetHorizontalFieldOfView
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaPlayer.OpenSourceLatent
// Size: 0x60(Inherited: 0x0) 
struct FOpenSourceLatent
{
	struct UObject* WorldContextObject;  // 0x0(0x8)
	struct FLatentActionInfo LatentInfo;  // 0x8(0x18)
	struct UMediaSource* MediaSource;  // 0x20(0x8)
	struct FMediaPlayerOptions Options;  // 0x28(0x30)
	char pad_88_1 : 7;  // 0x58(0x1)
	bool bSuccess : 1;  // 0x58(0x1)
	char pad_89[7];  // 0x59(0x7)

}; 
// Function MediaAssets.MediaPlayer.GetMediaName
// Size: 0x18(Inherited: 0x0) 
struct FGetMediaName
{
	struct FText ReturnValue;  // 0x0(0x18)

}; 
// Function MediaAssets.MediaPlayer.GetTrackFormat
// Size: 0xC(Inherited: 0x0) 
struct FGetTrackFormat
{
	uint8_t  TrackType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t TrackIndex;  // 0x4(0x4)
	int32_t ReturnValue;  // 0x8(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetNumTracks
// Size: 0x8(Inherited: 0x0) 
struct FGetNumTracks
{
	uint8_t  TrackType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetPlayerName
// Size: 0x8(Inherited: 0x0) 
struct FGetPlayerName
{
	struct FName ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.GetPlaylist
// Size: 0x8(Inherited: 0x0) 
struct FGetPlaylist
{
	struct UMediaPlaylist* ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// Size: 0x20(Inherited: 0x0) 
struct FGetTrackDisplayName
{
	uint8_t  TrackType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t TrackIndex;  // 0x4(0x4)
	struct FText ReturnValue;  // 0x8(0x18)

}; 
// Function MediaAssets.MediaPlayer.GetPlaylistIndex
// Size: 0x4(Inherited: 0x0) 
struct FGetPlaylistIndex
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetSelectedTrack
// Size: 0x8(Inherited: 0x0) 
struct FGetSelectedTrack
{
	uint8_t  TrackType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t ReturnValue;  // 0x4(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetTime
// Size: 0x8(Inherited: 0x0) 
struct FGetTime
{
	struct FTimespan ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
// Size: 0x18(Inherited: 0x0) 
struct FGetVideoTrackFrameRates
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	struct FFloatRange ReturnValue;  // 0x8(0x10)

}; 
// Function MediaAssets.MediaPlayer.GetTimeDelay
// Size: 0x8(Inherited: 0x0) 
struct FGetTimeDelay
{
	struct FTimespan ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.GetTimeStamp
// Size: 0x8(Inherited: 0x0) 
struct FGetTimeStamp
{
	struct UMediaTimeStampInfo* ReturnValue;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.GetTrackLanguage
// Size: 0x18(Inherited: 0x0) 
struct FGetTrackLanguage
{
	uint8_t  TrackType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t TrackIndex;  // 0x4(0x4)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
// Size: 0x4(Inherited: 0x0) 
struct FGetVerticalFieldOfView
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
// Size: 0xC(Inherited: 0x0) 
struct FGetVideoTrackAspectRatio
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetViewRotation
// Size: 0xC(Inherited: 0x0) 
struct FGetViewRotation
{
	struct FRotator ReturnValue;  // 0x0(0xC)

}; 
// Function MediaAssets.MediaTexture.GetHeight
// Size: 0x4(Inherited: 0x0) 
struct FGetHeight
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
// Size: 0xC(Inherited: 0x0) 
struct FGetVideoTrackFrameRate
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	float ReturnValue;  // 0x8(0x4)

}; 
// Function MediaAssets.MediaPlayer.GetVideoTrackType
// Size: 0x18(Inherited: 0x0) 
struct FGetVideoTrackType
{
	int32_t TrackIndex;  // 0x0(0x4)
	int32_t FormatIndex;  // 0x4(0x4)
	struct FString ReturnValue;  // 0x8(0x10)

}; 
// Function MediaAssets.MediaPlayer.IsConnecting
// Size: 0x1(Inherited: 0x0) 
struct FIsConnecting
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlaylist.RemoveAt
// Size: 0x8(Inherited: 0x0) 
struct FRemoveAt
{
	int32_t Index;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MediaAssets.MediaPlayer.Next
// Size: 0x1(Inherited: 0x0) 
struct FNext
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaSoundComponent.GetSpectralData
// Size: 0x10(Inherited: 0x0) 
struct FGetSpectralData
{
	struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;  // 0x0(0x10)

}; 
// Function MediaAssets.MediaPlayer.OpenPlaylist
// Size: 0x10(Inherited: 0x0) 
struct FOpenPlaylist
{
	struct UMediaPlaylist* InPlaylist;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
// Size: 0x40(Inherited: 0x0) 
struct FOpenSourceWithOptions
{
	struct UMediaSource* MediaSource;  // 0x0(0x8)
	struct FMediaPlayerOptions Options;  // 0x8(0x30)
	char pad_56_1 : 7;  // 0x38(0x1)
	bool ReturnValue : 1;  // 0x38(0x1)
	char pad_57[7];  // 0x39(0x7)

}; 
// Function MediaAssets.MediaPlayer.OpenUrl
// Size: 0x18(Inherited: 0x0) 
struct FOpenUrl
{
	struct FString URL;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MediaAssets.MediaPlayer.Pause
// Size: 0x1(Inherited: 0x0) 
struct FPause
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.Play
// Size: 0x1(Inherited: 0x0) 
struct FPlay
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.Previous
// Size: 0x1(Inherited: 0x0) 
struct FPrevious
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.Reopen
// Size: 0x1(Inherited: 0x0) 
struct FReopen
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.Rewind
// Size: 0x1(Inherited: 0x0) 
struct FRewind
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.Seek
// Size: 0x10(Inherited: 0x0) 
struct FSeek
{
	struct FTimespan Time;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// Size: 0x8(Inherited: 0x0) 
struct FSetDesiredPlayerName
{
	struct FName PlayerName;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.SetLooping
// Size: 0x2(Inherited: 0x0) 
struct FSetLooping
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool Looping : 1;  // 0x0(0x1)
	char pad_1_1 : 7;  // 0x1(0x1)
	bool ReturnValue : 1;  // 0x1(0x1)

}; 
// Function MediaAssets.MediaPlayer.SetMediaOptions
// Size: 0x8(Inherited: 0x0) 
struct FSetMediaOptions
{
	struct UMediaSource* Options;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.SetNativeVolume
// Size: 0x8(Inherited: 0x0) 
struct FSetNativeVolume
{
	float Volume;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MediaAssets.MediaTexture.GetTextureNumMips
// Size: 0x4(Inherited: 0x0) 
struct FGetTextureNumMips
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaPlayer.SetRate
// Size: 0x8(Inherited: 0x0) 
struct FSetRate
{
	float Rate;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool ReturnValue : 1;  // 0x4(0x1)
	char pad_5[3];  // 0x5(0x3)

}; 
// Function MediaAssets.MediaPlayer.SetTimeDelay
// Size: 0x8(Inherited: 0x0) 
struct FSetTimeDelay
{
	struct FTimespan TimeDelay;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaPlayer.SetTrackFormat
// Size: 0x10(Inherited: 0x0) 
struct FSetTrackFormat
{
	uint8_t  TrackType;  // 0x0(0x1)
	char pad_1[3];  // 0x1(0x3)
	int32_t TrackIndex;  // 0x4(0x4)
	int32_t FormatIndex;  // 0x8(0x4)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool ReturnValue : 1;  // 0xC(0x1)
	char pad_13[3];  // 0xD(0x3)

}; 
// Function MediaAssets.MediaPlayer.SetViewField
// Size: 0xC(Inherited: 0x0) 
struct FSetViewField
{
	float Horizontal;  // 0x0(0x4)
	float Vertical;  // 0x4(0x4)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool Absolute : 1;  // 0x8(0x1)
	char pad_9_1 : 7;  // 0x9(0x1)
	bool ReturnValue : 1;  // 0x9(0x1)
	char pad_10[2];  // 0xA(0x2)

}; 
// Function MediaAssets.MediaPlayer.SetViewRotation
// Size: 0x10(Inherited: 0x0) 
struct FSetViewRotation
{
	struct FRotator Rotation;  // 0x0(0xC)
	char pad_12_1 : 7;  // 0xC(0x1)
	bool Absolute : 1;  // 0xC(0x1)
	char pad_13_1 : 7;  // 0xD(0x1)
	bool ReturnValue : 1;  // 0xD(0x1)
	char pad_14[2];  // 0xE(0x2)

}; 
// Function MediaAssets.MediaPlayer.SupportsRate
// Size: 0x8(Inherited: 0x0) 
struct FSupportsRate
{
	float Rate;  // 0x0(0x4)
	char pad_4_1 : 7;  // 0x4(0x1)
	bool Unthinned : 1;  // 0x4(0x1)
	char pad_5_1 : 7;  // 0x5(0x1)
	bool ReturnValue : 1;  // 0x5(0x1)
	char pad_6[2];  // 0x6(0x2)

}; 
// Function MediaAssets.MediaPlayer.SupportsScrubbing
// Size: 0x1(Inherited: 0x0) 
struct FSupportsScrubbing
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlayer.SupportsSeeking
// Size: 0x1(Inherited: 0x0) 
struct FSupportsSeeking
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool ReturnValue : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaPlaylist.Add
// Size: 0x10(Inherited: 0x0) 
struct FAdd
{
	struct UMediaSource* MediaSource;  // 0x0(0x8)
	char pad_8_1 : 7;  // 0x8(0x1)
	bool ReturnValue : 1;  // 0x8(0x1)
	char pad_9[7];  // 0x9(0x7)

}; 
// Function MediaAssets.MediaPlaylist.AddFile
// Size: 0x18(Inherited: 0x0) 
struct FAddFile
{
	struct FString FilePath;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MediaAssets.MediaPlaylist.AddUrl
// Size: 0x18(Inherited: 0x0) 
struct FAddUrl
{
	struct FString URL;  // 0x0(0x10)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MediaAssets.MediaPlaylist.Get
// Size: 0x10(Inherited: 0x0) 
struct FGet
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMediaSource* ReturnValue;  // 0x8(0x8)

}; 
// Function MediaAssets.MediaPlaylist.GetNext
// Size: 0x10(Inherited: 0x0) 
struct FGetNext
{
	int32_t InOutIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMediaSource* ReturnValue;  // 0x8(0x8)

}; 
// Function MediaAssets.MediaPlaylist.GetPrevious
// Size: 0x10(Inherited: 0x0) 
struct FGetPrevious
{
	int32_t InOutIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMediaSource* ReturnValue;  // 0x8(0x8)

}; 
// Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
// Size: 0x4(Inherited: 0x0) 
struct FGetEnvelopeValue
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaPlaylist.GetRandom
// Size: 0x10(Inherited: 0x0) 
struct FGetRandom
{
	int32_t OutIndex;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMediaSource* ReturnValue;  // 0x8(0x8)

}; 
// Function MediaAssets.MediaPlaylist.Insert
// Size: 0x10(Inherited: 0x0) 
struct FInsert
{
	struct UMediaSource* MediaSource;  // 0x0(0x8)
	int32_t Index;  // 0x8(0x4)
	char pad_12[4];  // 0xC(0x4)

}; 
// Function MediaAssets.MediaPlaylist.Num
// Size: 0x4(Inherited: 0x0) 
struct FNum
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaPlaylist.Replace
// Size: 0x18(Inherited: 0x0) 
struct FReplace
{
	int32_t Index;  // 0x0(0x4)
	char pad_4[4];  // 0x4(0x4)
	struct UMediaSource* Replacement;  // 0x8(0x8)
	char pad_16_1 : 7;  // 0x10(0x1)
	bool ReturnValue : 1;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
// Size: 0x3A8(Inherited: 0x0) 
struct FBP_GetAttenuationSettingsToApply
{
	struct FSoundAttenuationSettings OutAttenuationSettings;  // 0x0(0x3A0)
	char pad_928_1 : 7;  // 0x3A0(0x1)
	bool ReturnValue : 1;  // 0x3A0(0x1)
	char pad_929[7];  // 0x3A1(0x7)

}; 
// Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
// Size: 0x1(Inherited: 0x0) 
struct FSetEnableSpectralAnalysis
{
	char pad_0_1 : 7;  // 0x0(0x1)
	bool bInSpectralAnalysisEnabled : 1;  // 0x0(0x1)

}; 
// Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
// Size: 0x8(Inherited: 0x0) 
struct FSetEnvelopeFollowingsettings
{
	int32_t AttackTimeMsec;  // 0x0(0x4)
	int32_t ReleaseTimeMsec;  // 0x4(0x4)

}; 
// Function MediaAssets.MediaTexture.SetMediaPlayer
// Size: 0x8(Inherited: 0x0) 
struct FSetMediaPlayer
{
	struct UMediaPlayer* NewMediaPlayer;  // 0x0(0x8)

}; 
// Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
// Size: 0x18(Inherited: 0x0) 
struct FSetSpectralAnalysisSettings
{
	struct TArray<float> InFrequenciesToAnalyze;  // 0x0(0x10)
	uint8_t  InFFTSize;  // 0x10(0x1)
	char pad_17[7];  // 0x11(0x7)

}; 
// Function MediaAssets.MediaTexture.GetAspectRatio
// Size: 0x4(Inherited: 0x0) 
struct FGetAspectRatio
{
	float ReturnValue;  // 0x0(0x4)

}; 
// Function MediaAssets.MediaTexture.GetWidth
// Size: 0x4(Inherited: 0x0) 
struct FGetWidth
{
	int32_t ReturnValue;  // 0x0(0x4)

}; 
