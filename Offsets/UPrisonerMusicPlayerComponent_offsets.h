namespace offsets
{
	namespace UPrisonerMusicPlayerComponent
	{
			constexpr auto _musicRootFolder = 0xc0; // Size: 8, Type: struct FName
			constexpr auto _volumeChangeRate = 0xc8; // Size: 4, Type: float
			constexpr auto _fileSizeLimitInMB = 0xd0; // Size: 8, Type: int64_t
			constexpr auto _turnOnAudioEvent = 0xd8; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _turnOffAudioEvent = 0xe0; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto _importerLibrary = 0xe8; // Size: 8, Type: struct URuntimeAudioImporterLibrary*
			constexpr auto _audioComponent = 0xf0; // Size: 8, Type: struct UAudioComponent*
			constexpr auto _radioComponent = 0xf8; // Size: 8, Type: struct URadioComponent*
			constexpr auto _playingSoundWave = 0x100; // Size: 8, Type: struct TWeakObjectPtr<UImportedSoundWave>
	}
} 
