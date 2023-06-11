#pragma once 
#include <FSR2TemporalUpscaling_Structs.h>
 
 
 
class UFSR2Settings
{
public:
	UFSR2Settings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 56);
	}
	bool GetAutoExposure() {
		return memory.read<bool>(m_addr + 57);
	}
	bool GetEnabledInEditorViewport() {
		return memory.read<bool>(m_addr + 58);
	}
	bool GetUseSSRExperimentalDenoiser() {
		return memory.read<bool>(m_addr + 59);
	}
	bool GetUseNativeDX12() {
		return memory.read<bool>(m_addr + 60);
	}
	bool GetUseNativeVulkan() {
		return memory.read<bool>(m_addr + 61);
	}
	uint8_t  GetQualityMode() {
		return memory.read<uint8_t >(m_addr + 64);
	}
	uint8_t  GetHistoryFormat() {
		return memory.read<uint8_t >(m_addr + 68);
	}
	uint8_t  GetDeDither() {
		return memory.read<uint8_t >(m_addr + 72);
	}
	float GetSharpness() {
		return memory.read<float>(m_addr + 76);
	}
	bool GetAdjustMipBias() {
		return memory.read<bool>(m_addr + 80);
	}
	bool GetReactiveMask() {
		return memory.read<bool>(m_addr + 81);
	}
	bool GetForceVertexDeformationOutputsVelocity() {
		return memory.read<bool>(m_addr + 82);
	}
	uint8_t  GetForceLandscapeHISMMobility() {
		return memory.read<uint8_t >(m_addr + 84);
	}
	float GetReflectionScale() {
		return memory.read<float>(m_addr + 88);
	}
	float GetReflectionLuminanceBias() {
		return memory.read<float>(m_addr + 92);
	}
	float GetRoughnessScale() {
		return memory.read<float>(m_addr + 96);
	}
	float GetRoughnessBias() {
		return memory.read<float>(m_addr + 100);
	}
	float GetRoughnessMaxDistance() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetReactiveMaskRoughnessForceMaxDistance() {
		return memory.read<bool>(m_addr + 108);
	}
	float GetTranslucencyBias() {
		return memory.read<float>(m_addr + 112);
	}
	float GetTranslucencyLuminanceBias() {
		return memory.read<float>(m_addr + 116);
	}
	float GetTranslucencyMaxDistance() {
		return memory.read<float>(m_addr + 120);
	}
	float GetPreDOFTranslucencyScale() {
		return memory.read<float>(m_addr + 124);
	}
	bool GetPreDOFTranslucencyMax() {
		return memory.read<bool>(m_addr + 128);
	}
	char EMaterialShadingModel GetReactiveShadingModelID() {
		return memory.read<char EMaterialShadingModel>(m_addr + 129);
	}
	float GetForceReactiveMaterialValue() {
		return memory.read<float>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


