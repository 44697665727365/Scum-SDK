#pragma once 
#include <CinematicCamera_Structs.h>
 
 
 
class ACameraRig_Crane
{
public:
	ACameraRig_Crane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCranePitch() {
		return memory.read<float>(m_addr + 544);
	}
	float GetCraneYaw() {
		return memory.read<float>(m_addr + 548);
	}
	float GetCraneArmLength() {
		return memory.read<float>(m_addr + 552);
	}
	bool GetbLockMountPitch() {
		return memory.read<bool>(m_addr + 556);
	}
	bool GetbLockMountYaw() {
		return memory.read<bool>(m_addr + 557);
	}
	struct USceneComponent GetTransformComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USceneComponent(ptr_addr);
	}
	struct USceneComponent GetCraneYawControl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USceneComponent(ptr_addr);
	}
	struct USceneComponent GetCranePitchControl() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct USceneComponent(ptr_addr);
	}
	struct USceneComponent GetCraneCameraMount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ACameraRig_Rail
{
public:
	ACameraRig_Rail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCurrentPositionOnRail() {
		return memory.read<float>(m_addr + 544);
	}
	bool GetbLockOrientationToRail() {
		return memory.read<bool>(m_addr + 548);
	}
	struct USceneComponent GetTransformComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct USceneComponent(ptr_addr);
	}
	struct USplineComponent GetRailSplineComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct USplineComponent(ptr_addr);
	}
	struct USceneComponent GetRailCameraMount() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USceneComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ACineCameraActor
{
public:
	ACineCameraActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCameraLookatTrackingSettings GetLookatTrackingSettings() {
		return memory.read<struct FCameraLookatTrackingSettings>(m_addr + 1968);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCineCameraComponent
{
public:
	UCineCameraComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCameraFilmbackSettings GetFilmbackSettings() {
		return memory.read<struct FCameraFilmbackSettings>(m_addr + 2000);
	}
	struct FCameraFilmbackSettings GetFilmback() {
		return memory.read<struct FCameraFilmbackSettings>(m_addr + 2012);
	}
	struct FCameraLensSettings GetLensSettings() {
		return memory.read<struct FCameraLensSettings>(m_addr + 2024);
	}
	struct FCameraFocusSettings GetFocusSettings() {
		return memory.read<struct FCameraFocusSettings>(m_addr + 2048);
	}
	float GetCurrentFocalLength() {
		return memory.read<float>(m_addr + 2136);
	}
	float GetCurrentAperture() {
		return memory.read<float>(m_addr + 2140);
	}
	float GetCurrentFocusDistance() {
		return memory.read<float>(m_addr + 2144);
	}
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresets() {
		return memory.read<struct TArray<struct FNamedFilmbackPreset>>(m_addr + 2160);
	}
	struct TArray<struct FNamedLensPreset> GetLensPresets() {
		return memory.read<struct TArray<struct FNamedLensPreset>>(m_addr + 2176);
	}
	struct FString GetDefaultFilmbackPresetName() {
		return memory.read<struct FString>(m_addr + 2192);
	}
	struct FString GetDefaultFilmbackPreset() {
		return memory.read<struct FString>(m_addr + 2208);
	}
	struct FString GetDefaultLensPresetName() {
		return memory.read<struct FString>(m_addr + 2224);
	}
	float GetDefaultLensFocalLength() {
		return memory.read<float>(m_addr + 2240);
	}
	float GetDefaultLensFStop() {
		return memory.read<float>(m_addr + 2244);
	}

private:
	std::uint64_t m_addr = 0;
};


