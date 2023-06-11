namespace offsets
{
	namespace UPrisonerBodySimulationSave
	{
			constexpr auto IsDead = 0x28; // Size: 1, Type: bool
			constexpr auto BaseStrength = 0x30; // Size: 8, Type: double
			constexpr auto BaseConstitution = 0x38; // Size: 8, Type: double
			constexpr auto BaseDexterity = 0x40; // Size: 8, Type: double
			constexpr auto BaseIntelligence = 0x48; // Size: 8, Type: double
			constexpr auto InitialAge = 0x50; // Size: 4, Type: float
			constexpr auto LifeTimeSinceInitialization = 0x58; // Size: 8, Type: double
			constexpr auto LifeTimeSinceSpawn = 0x60; // Size: 8, Type: double
			constexpr auto TimeOfDeath = 0x68; // Size: 8, Type: int64_t
			constexpr auto TimeOfRevive = 0x70; // Size: 8, Type: int64_t
			constexpr auto TimeOfComa = 0x78; // Size: 8, Type: int64_t
			constexpr auto TimeOfComaWakeUp = 0x80; // Size: 8, Type: int64_t
			constexpr auto Stamina = 0x88; // Size: 4, Type: float
			constexpr auto AccumulatedFatigue = 0x8c; // Size: 4, Type: float
			constexpr auto HeartRate = 0x90; // Size: 4, Type: float
			constexpr auto BreathingRate = 0x94; // Size: 4, Type: float
			constexpr auto OxygenSaturation = 0x98; // Size: 4, Type: float
			constexpr auto BodyTemperature = 0x9c; // Size: 4, Type: float
			constexpr auto PhoenixTearsAmount = 0xa0; // Size: 4, Type: float
			constexpr auto BodyEffects = 0xa8; // Size: 16, Type: struct TArray<struct FPrisonerBodyEffectSave>
			constexpr auto Metabolism = 0xb8; // Size: 16, Type: struct TArray<char>
	}
} 
