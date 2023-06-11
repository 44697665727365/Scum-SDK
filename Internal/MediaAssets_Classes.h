#pragma once 
#include <MediaAssets_Structs.h>
 
 
 
// Class MediaAssets.MediaPlayer
// Size: 0x138(Inherited: 0x28) 
struct UMediaPlayer : public UObject
{
	struct FMulticastInlineDelegate OnEndReached;  // 0x28(0x10)
	struct FMulticastInlineDelegate OnMediaClosed;  // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened;  // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed;  // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed;  // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended;  // 0x78(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted;  // 0x88(0x10)
	struct FMulticastInlineDelegate OnTracksChanged;  // 0x98(0x10)
	struct FTimespan CacheAhead;  // 0xA8(0x8)
	struct FTimespan CacheBehind;  // 0xB0(0x8)
	struct FTimespan CacheBehindGame;  // 0xB8(0x8)
	char pad_192_1 : 7;  // 0xC0(0x1)
	bool NativeAudioOut : 1;  // 0xC0(0x1)
	char pad_193_1 : 7;  // 0xC1(0x1)
	bool PlayOnOpen : 1;  // 0xC1(0x1)
	char pad_194[2];  // 0xC2(0x2)
	char Shuffle : 1;  // 0xC4(0x1)
	char Loop : 1;  // 0xC4(0x1)
	char pad_196_1 : 6;  // 0xC4(0x1)
	char pad_197[4];  // 0xC5(0x4)
	struct UMediaPlaylist* Playlist;  // 0xC8(0x8)
	int32_t PlaylistIndex;  // 0xD0(0x4)
	char pad_212[4];  // 0xD4(0x4)
	struct FTimespan TimeDelay;  // 0xD8(0x8)
	float HorizontalFieldOfView;  // 0xE0(0x4)
	float VerticalFieldOfView;  // 0xE4(0x4)
	struct FRotator ViewRotation;  // 0xE8(0xC)
	char pad_244[44];  // 0xF4(0x2C)
	struct FGuid PlayerGuid;  // 0x120(0x10)
	char pad_304[8];  // 0x130(0x8)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	bool SetTrackFormat(uint8_t  TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime
	bool SelectTrack(uint8_t  TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek
	bool Play(); // Function MediaAssets.MediaPlayer.Play
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile
	bool Next(); // Function MediaAssets.MediaPlayer.Next
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl
	struct FString GetTrackLanguage(uint8_t  TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage
	int32_t GetTrackFormat(uint8_t  TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat
	struct FText GetTrackDisplayName(uint8_t  TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName
	struct UMediaTimeStampInfo* GetTimeStamp(); // Function MediaAssets.MediaPlayer.GetTimeStamp
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates
	int32_t GetSelectedTrack(uint8_t  TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName
	int32_t GetNumTracks(uint8_t  TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks
	int32_t GetNumTrackFormats(uint8_t  TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	void Close(); // Function MediaAssets.MediaPlayer.Close
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause
}; 



// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28(Inherited: 0x28) 
struct UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
}; 



// Class MediaAssets.MediaSource
// Size: 0x80(Inherited: 0x28) 
struct UMediaSource : public UObject
{
	char pad_40[88];  // 0x28(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl
}; 



// Class MediaAssets.BaseMediaSource
// Size: 0x88(Inherited: 0x80) 
struct UBaseMediaSource : public UMediaSource
{
	struct FName PlayerName;  // 0x80(0x8)

}; 



// Class MediaAssets.MediaComponent
// Size: 0xC0(Inherited: 0xB0) 
struct UMediaComponent : public UActorComponent
{
	struct UMediaTexture* MediaTexture;  // 0xB0(0x8)
	struct UMediaPlayer* MediaPlayer;  // 0xB8(0x8)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer
}; 



// Class MediaAssets.FileMediaSource
// Size: 0xB0(Inherited: 0x88) 
struct UFileMediaSource : public UBaseMediaSource
{
	struct FString FilePath;  // 0x88(0x10)
	char pad_152_1 : 7;  // 0x98(0x1)
	bool PrecacheFile : 1;  // 0x98(0x1)
	char pad_153[23];  // 0x99(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath
}; 



// Class MediaAssets.MediaTimeStampInfo
// Size: 0x38(Inherited: 0x28) 
struct UMediaTimeStampInfo : public UObject
{
	struct FTimespan Time;  // 0x28(0x8)
	int64_t SequenceIndex;  // 0x30(0x8)

}; 



// Class MediaAssets.MediaPlaylist
// Size: 0x38(Inherited: 0x28) 
struct UMediaPlaylist : public UObject
{
	struct TArray<struct UMediaSource*> Items;  // 0x28(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add
}; 



// Class MediaAssets.MediaSoundComponent
// Size: 0x820(Inherited: 0x6C0) 
struct UMediaSoundComponent : public USynthComponent
{
	uint8_t  Channels;  // 0x6C0(0x4)
	char pad_1732_1 : 7;  // 0x6C4(0x1)
	bool DynamicRateAdjustment : 1;  // 0x6C4(0x1)
	char pad_1733[3];  // 0x6C5(0x3)
	float RateAdjustmentFactor;  // 0x6C8(0x4)
	struct FFloatRange RateAdjustmentRange;  // 0x6CC(0x10)
	char pad_1756[4];  // 0x6DC(0x4)
	struct UMediaPlayer* MediaPlayer;  // 0x6E0(0x8)
	char pad_1768[312];  // 0x6E8(0x138)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, uint8_t  InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
}; 



// Class MediaAssets.MediaTexture
// Size: 0x260(Inherited: 0x180) 
struct UMediaTexture : public UTexture
{
	char TextureAddress AddressX;  // 0x178(0x1)
	char TextureAddress AddressY;  // 0x179(0x1)
	char pad_386_1 : 7;  // 0x182(0x1)
	bool AutoClear : 1;  // 0x17A(0x1)
	struct FLinearColor ClearColor;  // 0x17C(0x10)
	char pad_403_1 : 7;  // 0x193(0x1)
	bool EnableGenMips : 1;  // 0x18C(0x1)
	char NumMips;  // 0x18D(0x1)
	char pad_405_1 : 7;  // 0x195(0x1)
	bool NewStyleOutput : 1;  // 0x18E(0x1)
	char MediaTextureOutputFormat OutputFormat;  // 0x18F(0x1)
	float CurrentAspectRatio;  // 0x190(0x4)
	char MediaTextureOrientation CurrentOrientation;  // 0x194(0x1)
	struct UMediaPlayer* MediaPlayer;  // 0x198(0x8)
	char pad_420[188];  // 0x1A4(0xBC)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth
	int32_t GetTextureNumMips(); // Function MediaAssets.MediaTexture.GetTextureNumMips
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio
}; 



// Class MediaAssets.PlatformMediaSource
// Size: 0x88(Inherited: 0x80) 
struct UPlatformMediaSource : public UMediaSource
{
	struct UMediaSource* MediaSource;  // 0x80(0x8)

}; 



// Class MediaAssets.StreamMediaSource
// Size: 0x98(Inherited: 0x88) 
struct UStreamMediaSource : public UBaseMediaSource
{
	struct FString StreamUrl;  // 0x88(0x10)

}; 



// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98(Inherited: 0x88) 
struct UTimeSynchronizableMediaSource : public UBaseMediaSource
{
	char pad_136_1 : 7;  // 0x88(0x1)
	bool bUseTimeSynchronization : 1;  // 0x88(0x1)
	char pad_137[3];  // 0x89(0x3)
	int32_t FrameDelay;  // 0x8C(0x4)
	double TimeDelay;  // 0x90(0x8)

}; 



