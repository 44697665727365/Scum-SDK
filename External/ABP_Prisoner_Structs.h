#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FShouldSkipStandWalkOrJogOrRunStart
{
public:
	FShouldSkipStandWalkOrJogOrRunStart(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetResult() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_2() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_3() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_4() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_5() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_6() {
		return memory.read<bool>(m_addr + 6);
	}
	bool GetCallFunc_IsCourseAngleSupportedByStartAndStopAnimations_ReturnValue() {
		return memory.read<bool>(m_addr + 7);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetCallFunc_BooleanOR_ReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_2() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_3() {
		return memory.read<bool>(m_addr + 11);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_4() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_5() {
		return memory.read<bool>(m_addr + 13);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_6() {
		return memory.read<bool>(m_addr + 14);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_7() {
		return memory.read<bool>(m_addr + 15);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_8() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrawDebugOutput
{
public:
	FDrawDebugOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCallFunc_Conv_BoolToString_ReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_ABP_Prisoner
{
public:
	FExecuteUbergraph_ABP_Prisoner(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetTemp_float_Variable() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_2() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetCallFunc_BooleanAND_ReturnValue() {
		return memory.read<bool>(m_addr + 11);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_2() {
		return memory.read<bool>(m_addr + 13);
	}
	float GetCallFunc_SelectFloat_ReturnValue() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_3() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_3() {
		return memory.read<bool>(m_addr + 21);
	}
	float GetCallFunc_SelectFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_4() {
		return memory.read<bool>(m_addr + 28);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_4() {
		return memory.read<bool>(m_addr + 29);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_2() {
		return memory.read<bool>(m_addr + 30);
	}
	bool GetCallFunc_IsCourseAngleSupportedByStartAndStopAnimations_ReturnValue() {
		return memory.read<bool>(m_addr + 31);
	}
	bool GetCallFunc_BooleanOR_ReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_3() {
		return memory.read<bool>(m_addr + 33);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_2() {
		return memory.read<bool>(m_addr + 34);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_3() {
		return memory.read<bool>(m_addr + 35);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue() {
		return memory.read<float>(m_addr + 36);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_5() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_6() {
		return memory.read<bool>(m_addr + 41);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue() {
		return memory.read<float>(m_addr + 44);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue() {
		return memory.read<float>(m_addr + 48);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue() {
		return memory.read<float>(m_addr + 52);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue() {
		return memory.read<float>(m_addr + 56);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_5() {
		return memory.read<bool>(m_addr + 60);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 61);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_6() {
		return memory.read<bool>(m_addr + 68);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_2() {
		return memory.read<bool>(m_addr + 69);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_2() {
		return memory.read<float>(m_addr + 72);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_2() {
		return memory.read<float>(m_addr + 76);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_2() {
		return memory.read<float>(m_addr + 80);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_2() {
		return memory.read<float>(m_addr + 84);
	}
	float GetCallFunc_SelectFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 88);
	}
	float GetCallFunc_RandomFloatInRangeFromStream_ReturnValue() {
		return memory.read<float>(m_addr + 92);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 96);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_7() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_3() {
		return memory.read<bool>(m_addr + 105);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue() {
		return memory.read<float>(m_addr + 108);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_7() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_2() {
		return memory.read<bool>(m_addr + 113);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_3() {
		return memory.read<float>(m_addr + 116);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_8() {
		return memory.read<bool>(m_addr + 120);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_3() {
		return memory.read<float>(m_addr + 124);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_3() {
		return memory.read<float>(m_addr + 128);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_3() {
		return memory.read<float>(m_addr + 132);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_9() {
		return memory.read<bool>(m_addr + 136);
	}
	bool GetCallFunc_IsCourseAngleSupportedByStartAndStopAnimations_ReturnValue_2() {
		return memory.read<bool>(m_addr + 137);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4() {
		return memory.read<float>(m_addr + 140);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_4() {
		return memory.read<bool>(m_addr + 144);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_4() {
		return memory.read<bool>(m_addr + 145);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_10() {
		return memory.read<bool>(m_addr + 146);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_11() {
		return memory.read<bool>(m_addr + 147);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_4() {
		return memory.read<float>(m_addr + 148);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_4() {
		return memory.read<float>(m_addr + 152);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_4() {
		return memory.read<float>(m_addr + 156);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_4() {
		return memory.read<float>(m_addr + 160);
	}
	float GetCallFunc_SelectFloat_ReturnValue_4() {
		return memory.read<float>(m_addr + 164);
	}
	float GetCallFunc_RandomFloatInRangeFromStream_ReturnValue_2() {
		return memory.read<float>(m_addr + 168);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 172);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_12() {
		return memory.read<bool>(m_addr + 176);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_13() {
		return memory.read<bool>(m_addr + 177);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue() {
		return memory.read<float>(m_addr + 180);
	}
	float GetCallFunc_SelectFloat_ReturnValue_5() {
		return memory.read<float>(m_addr + 184);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_3() {
		return memory.read<bool>(m_addr + 188);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_4() {
		return memory.read<bool>(m_addr + 189);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_14() {
		return memory.read<bool>(m_addr + 190);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_5() {
		return memory.read<bool>(m_addr + 191);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_8() {
		return memory.read<bool>(m_addr + 192);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_9() {
		return memory.read<bool>(m_addr + 193);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_5() {
		return memory.read<float>(m_addr + 196);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_5() {
		return memory.read<float>(m_addr + 200);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_5() {
		return memory.read<float>(m_addr + 204);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_5() {
		return memory.read<float>(m_addr + 208);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5() {
		return memory.read<float>(m_addr + 212);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_5() {
		return memory.read<bool>(m_addr + 216);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_15() {
		return memory.read<bool>(m_addr + 217);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_10() {
		return memory.read<bool>(m_addr + 218);
	}
	struct FVector GetCallFunc_BreakTransform_Location() {
		return memory.read<struct FVector>(m_addr + 220);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation() {
		return memory.read<struct FRotator>(m_addr + 232);
	}
	struct FVector GetCallFunc_BreakTransform_Scale() {
		return memory.read<struct FVector>(m_addr + 244);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_16() {
		return memory.read<bool>(m_addr + 256);
	}
	float GetCallFunc_SelectFloat_ReturnValue_6() {
		return memory.read<float>(m_addr + 260);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_11() {
		return memory.read<bool>(m_addr + 264);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_17() {
		return memory.read<bool>(m_addr + 265);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_18() {
		return memory.read<bool>(m_addr + 266);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_5() {
		return memory.read<bool>(m_addr + 267);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_12() {
		return memory.read<bool>(m_addr + 268);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_6() {
		return memory.read<bool>(m_addr + 269);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_6() {
		return memory.read<float>(m_addr + 272);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_6() {
		return memory.read<float>(m_addr + 276);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_6() {
		return memory.read<float>(m_addr + 280);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_6() {
		return memory.read<float>(m_addr + 284);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_6() {
		return memory.read<float>(m_addr + 288);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_6() {
		return memory.read<bool>(m_addr + 292);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_19() {
		return memory.read<bool>(m_addr + 293);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_13() {
		return memory.read<bool>(m_addr + 294);
	}
	struct FVector GetCallFunc_BreakTransform_Location_2() {
		return memory.read<struct FVector>(m_addr + 296);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_2() {
		return memory.read<struct FRotator>(m_addr + 308);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_2() {
		return memory.read<struct FVector>(m_addr + 320);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_7() {
		return memory.read<float>(m_addr + 332);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_7() {
		return memory.read<float>(m_addr + 336);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_7() {
		return memory.read<float>(m_addr + 340);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_7() {
		return memory.read<float>(m_addr + 344);
	}
	struct FVector GetCallFunc_BreakTransform_Location_3() {
		return memory.read<struct FVector>(m_addr + 348);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_3() {
		return memory.read<struct FRotator>(m_addr + 360);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_3() {
		return memory.read<struct FVector>(m_addr + 372);
	}
	float GetCallFunc_SelectFloat_ReturnValue_7() {
		return memory.read<float>(m_addr + 384);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_8() {
		return memory.read<float>(m_addr + 388);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_8() {
		return memory.read<float>(m_addr + 392);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_8() {
		return memory.read<float>(m_addr + 396);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_8() {
		return memory.read<float>(m_addr + 400);
	}
	struct FVector GetCallFunc_BreakTransform_Location_4() {
		return memory.read<struct FVector>(m_addr + 404);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_4() {
		return memory.read<struct FRotator>(m_addr + 416);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_4() {
		return memory.read<struct FVector>(m_addr + 428);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_20() {
		return memory.read<bool>(m_addr + 440);
	}
	float GetCallFunc_SelectFloat_ReturnValue_8() {
		return memory.read<float>(m_addr + 444);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_9() {
		return memory.read<float>(m_addr + 448);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_9() {
		return memory.read<float>(m_addr + 452);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_9() {
		return memory.read<float>(m_addr + 456);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_9() {
		return memory.read<float>(m_addr + 460);
	}
	struct FVector GetCallFunc_BreakTransform_Location_5() {
		return memory.read<struct FVector>(m_addr + 464);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_5() {
		return memory.read<struct FRotator>(m_addr + 476);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_5() {
		return memory.read<struct FVector>(m_addr + 488);
	}
	uint8_t  GetCallFunc_GetCardinalDirectionFromCourseAngle_ReturnValue() {
		return memory.read<uint8_t >(m_addr + 500);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_21() {
		return memory.read<bool>(m_addr + 501);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_22() {
		return memory.read<bool>(m_addr + 502);
	}
	float GetCallFunc_SelectFloat_ReturnValue_9() {
		return memory.read<float>(m_addr + 504);
	}
	float GetCallFunc_SelectFloat_ReturnValue_10() {
		return memory.read<float>(m_addr + 508);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_10() {
		return memory.read<float>(m_addr + 512);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_10() {
		return memory.read<float>(m_addr + 516);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_10() {
		return memory.read<float>(m_addr + 520);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_10() {
		return memory.read<float>(m_addr + 524);
	}
	struct FVector GetCallFunc_BreakTransform_Location_6() {
		return memory.read<struct FVector>(m_addr + 528);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_6() {
		return memory.read<struct FRotator>(m_addr + 540);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_6() {
		return memory.read<struct FVector>(m_addr + 552);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_6() {
		return memory.read<bool>(m_addr + 564);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_23() {
		return memory.read<bool>(m_addr + 565);
	}
	float GetCallFunc_SelectFloat_ReturnValue_11() {
		return memory.read<float>(m_addr + 568);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_7() {
		return memory.read<bool>(m_addr + 572);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_11() {
		return memory.read<float>(m_addr + 576);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_11() {
		return memory.read<float>(m_addr + 580);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_11() {
		return memory.read<float>(m_addr + 584);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_11() {
		return memory.read<float>(m_addr + 588);
	}
	struct FVector GetCallFunc_BreakTransform_Location_7() {
		return memory.read<struct FVector>(m_addr + 592);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_7() {
		return memory.read<struct FRotator>(m_addr + 604);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_7() {
		return memory.read<struct FVector>(m_addr + 616);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_24() {
		return memory.read<bool>(m_addr + 628);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_25() {
		return memory.read<bool>(m_addr + 629);
	}
	float GetCallFunc_SelectFloat_ReturnValue_12() {
		return memory.read<float>(m_addr + 632);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_7() {
		return memory.read<bool>(m_addr + 636);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_12() {
		return memory.read<float>(m_addr + 640);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_12() {
		return memory.read<float>(m_addr + 644);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_12() {
		return memory.read<float>(m_addr + 648);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_12() {
		return memory.read<float>(m_addr + 652);
	}
	struct FVector GetCallFunc_BreakTransform_Location_8() {
		return memory.read<struct FVector>(m_addr + 656);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_8() {
		return memory.read<struct FRotator>(m_addr + 668);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_8() {
		return memory.read<struct FVector>(m_addr + 680);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_13() {
		return memory.read<float>(m_addr + 692);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_13() {
		return memory.read<float>(m_addr + 696);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_13() {
		return memory.read<float>(m_addr + 700);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_13() {
		return memory.read<float>(m_addr + 704);
	}
	struct FVector GetCallFunc_BreakTransform_Location_9() {
		return memory.read<struct FVector>(m_addr + 708);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_9() {
		return memory.read<struct FRotator>(m_addr + 720);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_9() {
		return memory.read<struct FVector>(m_addr + 732);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_8() {
		return memory.read<bool>(m_addr + 744);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_14() {
		return memory.read<bool>(m_addr + 745);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_15() {
		return memory.read<bool>(m_addr + 746);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_26() {
		return memory.read<bool>(m_addr + 747);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_16() {
		return memory.read<bool>(m_addr + 748);
	}
	float GetCallFunc_SelectFloat_ReturnValue_13() {
		return memory.read<float>(m_addr + 752);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_17() {
		return memory.read<bool>(m_addr + 756);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_14() {
		return memory.read<float>(m_addr + 760);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_14() {
		return memory.read<float>(m_addr + 764);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_14() {
		return memory.read<float>(m_addr + 768);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_14() {
		return memory.read<float>(m_addr + 772);
	}
	struct FVector GetCallFunc_BreakTransform_Location_10() {
		return memory.read<struct FVector>(m_addr + 776);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_10() {
		return memory.read<struct FRotator>(m_addr + 788);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_10() {
		return memory.read<struct FVector>(m_addr + 800);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_9() {
		return memory.read<bool>(m_addr + 812);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_27() {
		return memory.read<bool>(m_addr + 813);
	}
	float GetCallFunc_SelectFloat_ReturnValue_14() {
		return memory.read<float>(m_addr + 816);
	}
	float GetCallFunc_SelectFloat_ReturnValue_15() {
		return memory.read<float>(m_addr + 820);
	}
	float GetCallFunc_SelectFloat_ReturnValue_16() {
		return memory.read<float>(m_addr + 824);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_15() {
		return memory.read<float>(m_addr + 828);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_15() {
		return memory.read<float>(m_addr + 832);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_15() {
		return memory.read<float>(m_addr + 836);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_15() {
		return memory.read<float>(m_addr + 840);
	}
	struct FVector GetCallFunc_BreakTransform_Location_11() {
		return memory.read<struct FVector>(m_addr + 844);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_11() {
		return memory.read<struct FRotator>(m_addr + 856);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_11() {
		return memory.read<struct FVector>(m_addr + 868);
	}
	float GetCallFunc_SelectFloat_ReturnValue_17() {
		return memory.read<float>(m_addr + 880);
	}
	struct FVector GetCallFunc_BreakTransform_Location_12() {
		return memory.read<struct FVector>(m_addr + 884);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_12() {
		return memory.read<struct FRotator>(m_addr + 896);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_12() {
		return memory.read<struct FVector>(m_addr + 908);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_16() {
		return memory.read<float>(m_addr + 920);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_16() {
		return memory.read<float>(m_addr + 924);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_16() {
		return memory.read<float>(m_addr + 928);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_16() {
		return memory.read<float>(m_addr + 932);
	}
	struct FVector GetCallFunc_BreakTransform_Location_13() {
		return memory.read<struct FVector>(m_addr + 936);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_13() {
		return memory.read<struct FRotator>(m_addr + 948);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_13() {
		return memory.read<struct FVector>(m_addr + 960);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_7() {
		return memory.read<float>(m_addr + 972);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_28() {
		return memory.read<bool>(m_addr + 976);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_7() {
		return memory.read<bool>(m_addr + 977);
	}
	float GetCallFunc_SelectFloat_ReturnValue_18() {
		return memory.read<float>(m_addr + 980);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_17() {
		return memory.read<float>(m_addr + 984);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_17() {
		return memory.read<float>(m_addr + 988);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_17() {
		return memory.read<float>(m_addr + 992);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_17() {
		return memory.read<float>(m_addr + 996);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_18() {
		return memory.read<float>(m_addr + 1000);
	}
	struct FVector GetCallFunc_BreakTransform_Location_14() {
		return memory.read<struct FVector>(m_addr + 1004);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_14() {
		return memory.read<struct FRotator>(m_addr + 1016);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_14() {
		return memory.read<struct FVector>(m_addr + 1028);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_18() {
		return memory.read<float>(m_addr + 1040);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_18() {
		return memory.read<float>(m_addr + 1044);
	}
	float GetCallFunc_GetRelevantAnimTime_ReturnValue() {
		return memory.read<float>(m_addr + 1048);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_29() {
		return memory.read<bool>(m_addr + 1052);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_4() {
		return memory.read<bool>(m_addr + 1053);
	}
	float GetCallFunc_SelectFloat_ReturnValue_19() {
		return memory.read<float>(m_addr + 1056);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_10() {
		return memory.read<bool>(m_addr + 1060);
	}
	float GetCallFunc_SelectFloat_ReturnValue_20() {
		return memory.read<float>(m_addr + 1064);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_18() {
		return memory.read<float>(m_addr + 1068);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_19() {
		return memory.read<float>(m_addr + 1072);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_19() {
		return memory.read<float>(m_addr + 1076);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_19() {
		return memory.read<float>(m_addr + 1080);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_19() {
		return memory.read<float>(m_addr + 1084);
	}
	struct FVector GetCallFunc_BreakTransform_Location_15() {
		return memory.read<struct FVector>(m_addr + 1088);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_15() {
		return memory.read<struct FRotator>(m_addr + 1100);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_15() {
		return memory.read<struct FVector>(m_addr + 1112);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_30() {
		return memory.read<bool>(m_addr + 1124);
	}
	float GetCallFunc_SelectFloat_ReturnValue_21() {
		return memory.read<float>(m_addr + 1128);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_20() {
		return memory.read<float>(m_addr + 1132);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_20() {
		return memory.read<float>(m_addr + 1136);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_20() {
		return memory.read<float>(m_addr + 1140);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_20() {
		return memory.read<float>(m_addr + 1144);
	}
	struct FVector GetCallFunc_BreakTransform_Location_16() {
		return memory.read<struct FVector>(m_addr + 1148);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_16() {
		return memory.read<struct FRotator>(m_addr + 1160);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_16() {
		return memory.read<struct FVector>(m_addr + 1172);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_18() {
		return memory.read<bool>(m_addr + 1184);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_31() {
		return memory.read<bool>(m_addr + 1185);
	}
	float GetCallFunc_SelectFloat_ReturnValue_22() {
		return memory.read<float>(m_addr + 1188);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_2() {
		return memory.read<float>(m_addr + 1192);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_5() {
		return memory.read<bool>(m_addr + 1196);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_21() {
		return memory.read<float>(m_addr + 1200);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_21() {
		return memory.read<float>(m_addr + 1204);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_21() {
		return memory.read<float>(m_addr + 1208);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_21() {
		return memory.read<float>(m_addr + 1212);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_19() {
		return memory.read<bool>(m_addr + 1216);
	}
	struct FVector GetCallFunc_BreakTransform_Location_17() {
		return memory.read<struct FVector>(m_addr + 1220);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_17() {
		return memory.read<struct FRotator>(m_addr + 1232);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_17() {
		return memory.read<struct FVector>(m_addr + 1244);
	}
	float GetCallFunc_SelectFloat_ReturnValue_23() {
		return memory.read<float>(m_addr + 1256);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_22() {
		return memory.read<float>(m_addr + 1260);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_22() {
		return memory.read<float>(m_addr + 1264);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_22() {
		return memory.read<float>(m_addr + 1268);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_22() {
		return memory.read<float>(m_addr + 1272);
	}
	struct FVector GetCallFunc_BreakTransform_Location_18() {
		return memory.read<struct FVector>(m_addr + 1276);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_18() {
		return memory.read<struct FRotator>(m_addr + 1288);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_18() {
		return memory.read<struct FVector>(m_addr + 1300);
	}
	struct FVector GetCallFunc_BreakTransform_Location_19() {
		return memory.read<struct FVector>(m_addr + 1312);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_19() {
		return memory.read<struct FRotator>(m_addr + 1324);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_19() {
		return memory.read<struct FVector>(m_addr + 1336);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_32() {
		return memory.read<bool>(m_addr + 1348);
	}
	bool GetCallFunc_NotEqual_ByteByte_ReturnValue() {
		return memory.read<bool>(m_addr + 1349);
	}
	float GetCallFunc_SelectFloat_ReturnValue_24() {
		return memory.read<float>(m_addr + 1352);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_23() {
		return memory.read<float>(m_addr + 1356);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_23() {
		return memory.read<float>(m_addr + 1360);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_23() {
		return memory.read<float>(m_addr + 1364);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_23() {
		return memory.read<float>(m_addr + 1368);
	}
	struct FVector GetCallFunc_BreakTransform_Location_20() {
		return memory.read<struct FVector>(m_addr + 1372);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_20() {
		return memory.read<struct FRotator>(m_addr + 1384);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_20() {
		return memory.read<struct FVector>(m_addr + 1396);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_24() {
		return memory.read<float>(m_addr + 1408);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_33() {
		return memory.read<bool>(m_addr + 1412);
	}
	float GetCallFunc_SelectFloat_ReturnValue_25() {
		return memory.read<float>(m_addr + 1416);
	}
	float GetCallFunc_SelectFloat_ReturnValue_26() {
		return memory.read<float>(m_addr + 1420);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue_2() {
		return memory.read<float>(m_addr + 1424);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_6() {
		return memory.read<bool>(m_addr + 1428);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_11() {
		return memory.read<bool>(m_addr + 1429);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_24() {
		return memory.read<float>(m_addr + 1432);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_12() {
		return memory.read<bool>(m_addr + 1436);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_20() {
		return memory.read<bool>(m_addr + 1437);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_24() {
		return memory.read<float>(m_addr + 1440);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_24() {
		return memory.read<float>(m_addr + 1444);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_25() {
		return memory.read<float>(m_addr + 1448);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_25() {
		return memory.read<float>(m_addr + 1452);
	}
	struct FVector GetCallFunc_BreakTransform_Location_21() {
		return memory.read<struct FVector>(m_addr + 1456);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_21() {
		return memory.read<struct FRotator>(m_addr + 1468);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_21() {
		return memory.read<struct FVector>(m_addr + 1480);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_25() {
		return memory.read<float>(m_addr + 1492);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_25() {
		return memory.read<float>(m_addr + 1496);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_26() {
		return memory.read<float>(m_addr + 1500);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_26() {
		return memory.read<float>(m_addr + 1504);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_26() {
		return memory.read<float>(m_addr + 1508);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_26() {
		return memory.read<float>(m_addr + 1512);
	}
	struct FVector GetCallFunc_BreakTransform_Location_22() {
		return memory.read<struct FVector>(m_addr + 1516);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_22() {
		return memory.read<struct FRotator>(m_addr + 1528);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_22() {
		return memory.read<struct FVector>(m_addr + 1540);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_27() {
		return memory.read<float>(m_addr + 1552);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_27() {
		return memory.read<float>(m_addr + 1556);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_27() {
		return memory.read<float>(m_addr + 1560);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_27() {
		return memory.read<float>(m_addr + 1564);
	}
	struct FVector GetCallFunc_BreakTransform_Location_23() {
		return memory.read<struct FVector>(m_addr + 1568);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_23() {
		return memory.read<struct FRotator>(m_addr + 1580);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_23() {
		return memory.read<struct FVector>(m_addr + 1592);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_21() {
		return memory.read<bool>(m_addr + 1604);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_28() {
		return memory.read<float>(m_addr + 1608);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_28() {
		return memory.read<float>(m_addr + 1612);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_28() {
		return memory.read<float>(m_addr + 1616);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_28() {
		return memory.read<float>(m_addr + 1620);
	}
	struct FVector GetCallFunc_BreakTransform_Location_24() {
		return memory.read<struct FVector>(m_addr + 1624);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_24() {
		return memory.read<struct FRotator>(m_addr + 1636);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_24() {
		return memory.read<struct FVector>(m_addr + 1648);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_29() {
		return memory.read<float>(m_addr + 1660);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_29() {
		return memory.read<float>(m_addr + 1664);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_29() {
		return memory.read<float>(m_addr + 1668);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_29() {
		return memory.read<float>(m_addr + 1672);
	}
	struct FVector GetCallFunc_BreakTransform_Location_25() {
		return memory.read<struct FVector>(m_addr + 1676);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_25() {
		return memory.read<struct FRotator>(m_addr + 1688);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_25() {
		return memory.read<struct FVector>(m_addr + 1700);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_30() {
		return memory.read<float>(m_addr + 1712);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_30() {
		return memory.read<float>(m_addr + 1716);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_30() {
		return memory.read<float>(m_addr + 1720);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_30() {
		return memory.read<float>(m_addr + 1724);
	}
	struct FVector GetCallFunc_BreakTransform_Location_26() {
		return memory.read<struct FVector>(m_addr + 1728);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_26() {
		return memory.read<struct FRotator>(m_addr + 1740);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_26() {
		return memory.read<struct FVector>(m_addr + 1752);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_22() {
		return memory.read<bool>(m_addr + 1764);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_13() {
		return memory.read<bool>(m_addr + 1765);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_34() {
		return memory.read<bool>(m_addr + 1766);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_8() {
		return memory.read<bool>(m_addr + 1767);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_23() {
		return memory.read<bool>(m_addr + 1768);
	}
	float GetCallFunc_GetLeanBlendWeights_left() {
		return memory.read<float>(m_addr + 1772);
	}
	float GetCallFunc_GetLeanBlendWeights_right() {
		return memory.read<float>(m_addr + 1776);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue() {
		return memory.read<float>(m_addr + 1780);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_2() {
		return memory.read<float>(m_addr + 1784);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_24() {
		return memory.read<bool>(m_addr + 1788);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_9() {
		return memory.read<bool>(m_addr + 1789);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_25() {
		return memory.read<bool>(m_addr + 1790);
	}
	float GetCallFunc_SelectFloat_ReturnValue_27() {
		return memory.read<float>(m_addr + 1792);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_26() {
		return memory.read<bool>(m_addr + 1796);
	}
	float GetCallFunc_GetLeanBlendWeights_left_2() {
		return memory.read<float>(m_addr + 1800);
	}
	float GetCallFunc_GetLeanBlendWeights_right_2() {
		return memory.read<float>(m_addr + 1804);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_3() {
		return memory.read<float>(m_addr + 1808);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_4() {
		return memory.read<float>(m_addr + 1812);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_14() {
		return memory.read<bool>(m_addr + 1816);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_35() {
		return memory.read<bool>(m_addr + 1817);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_5() {
		return memory.read<float>(m_addr + 1820);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_27() {
		return memory.read<bool>(m_addr + 1824);
	}
	float GetCallFunc_GetLeanBlendWeights_left_3() {
		return memory.read<float>(m_addr + 1828);
	}
	float GetCallFunc_GetLeanBlendWeights_right_3() {
		return memory.read<float>(m_addr + 1832);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_6() {
		return memory.read<float>(m_addr + 1836);
	}
	float GetCallFunc_GetLeanBlendWeights_left_4() {
		return memory.read<float>(m_addr + 1840);
	}
	float GetCallFunc_GetLeanBlendWeights_right_4() {
		return memory.read<float>(m_addr + 1844);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_7() {
		return memory.read<float>(m_addr + 1848);
	}
	struct FVector GetCallFunc_BreakTransform_Location_27() {
		return memory.read<struct FVector>(m_addr + 1852);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_27() {
		return memory.read<struct FRotator>(m_addr + 1864);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_27() {
		return memory.read<struct FVector>(m_addr + 1876);
	}
	float GetCallFunc_SelectFloat_ReturnValue_28() {
		return memory.read<float>(m_addr + 1888);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_8() {
		return memory.read<float>(m_addr + 1892);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_9() {
		return memory.read<float>(m_addr + 1896);
	}
	struct FVector GetCallFunc_BreakTransform_Location_28() {
		return memory.read<struct FVector>(m_addr + 1900);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_28() {
		return memory.read<struct FRotator>(m_addr + 1912);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_28() {
		return memory.read<struct FVector>(m_addr + 1924);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_10() {
		return memory.read<float>(m_addr + 1936);
	}
	struct FVector GetCallFunc_BreakTransform_Location_29() {
		return memory.read<struct FVector>(m_addr + 1940);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_29() {
		return memory.read<struct FRotator>(m_addr + 1952);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_29() {
		return memory.read<struct FVector>(m_addr + 1964);
	}
	float GetCallFunc_GetLeanBlendWeights_left_5() {
		return memory.read<float>(m_addr + 1976);
	}
	float GetCallFunc_GetLeanBlendWeights_right_5() {
		return memory.read<float>(m_addr + 1980);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_11() {
		return memory.read<float>(m_addr + 1984);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_12() {
		return memory.read<float>(m_addr + 1988);
	}
	struct FVector GetCallFunc_BreakTransform_Location_30() {
		return memory.read<struct FVector>(m_addr + 1992);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_30() {
		return memory.read<struct FRotator>(m_addr + 2004);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_30() {
		return memory.read<struct FVector>(m_addr + 2016);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_13() {
		return memory.read<float>(m_addr + 2028);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_14() {
		return memory.read<float>(m_addr + 2032);
	}
	uint8_t  GetCallFunc_GetCardinalDirectionFromCourseAngle_ReturnValue_2() {
		return memory.read<uint8_t >(m_addr + 2036);
	}
	float GetCallFunc_Abs_ReturnValue() {
		return memory.read<float>(m_addr + 2040);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_36() {
		return memory.read<bool>(m_addr + 2044);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 2045);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_10() {
		return memory.read<bool>(m_addr + 2046);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_28() {
		return memory.read<bool>(m_addr + 2047);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_11() {
		return memory.read<bool>(m_addr + 2048);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_29() {
		return memory.read<bool>(m_addr + 2049);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_30() {
		return memory.read<bool>(m_addr + 2050);
	}
	struct FVector GetCallFunc_BreakTransform_Location_31() {
		return memory.read<struct FVector>(m_addr + 2052);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_31() {
		return memory.read<struct FRotator>(m_addr + 2064);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_31() {
		return memory.read<struct FVector>(m_addr + 2076);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_15() {
		return memory.read<float>(m_addr + 2088);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_16() {
		return memory.read<float>(m_addr + 2092);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_12() {
		return memory.read<bool>(m_addr + 2096);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_31() {
		return memory.read<bool>(m_addr + 2097);
	}
	struct FVector GetCallFunc_BreakTransform_Location_32() {
		return memory.read<struct FVector>(m_addr + 2100);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_32() {
		return memory.read<struct FRotator>(m_addr + 2112);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_32() {
		return memory.read<struct FVector>(m_addr + 2124);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_17() {
		return memory.read<float>(m_addr + 2136);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_18() {
		return memory.read<float>(m_addr + 2140);
	}
	float GetCallFunc_SelectFloat_ReturnValue_29() {
		return memory.read<float>(m_addr + 2144);
	}
	bool GetCallFunc_NotEqual_ByteByte_ReturnValue_2() {
		return memory.read<bool>(m_addr + 2148);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_15() {
		return memory.read<bool>(m_addr + 2149);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_13() {
		return memory.read<bool>(m_addr + 2150);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_32() {
		return memory.read<bool>(m_addr + 2151);
	}
	float GetCallFunc_GetLeanBlendWeights_left_6() {
		return memory.read<float>(m_addr + 2152);
	}
	float GetCallFunc_GetLeanBlendWeights_right_6() {
		return memory.read<float>(m_addr + 2156);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_19() {
		return memory.read<float>(m_addr + 2160);
	}
	struct FVector GetCallFunc_BreakTransform_Location_33() {
		return memory.read<struct FVector>(m_addr + 2164);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_33() {
		return memory.read<struct FRotator>(m_addr + 2176);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_33() {
		return memory.read<struct FVector>(m_addr + 2188);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_20() {
		return memory.read<float>(m_addr + 2200);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_33() {
		return memory.read<bool>(m_addr + 2204);
	}
	struct FVector GetCallFunc_BreakTransform_Location_34() {
		return memory.read<struct FVector>(m_addr + 2208);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_34() {
		return memory.read<struct FRotator>(m_addr + 2220);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_34() {
		return memory.read<struct FVector>(m_addr + 2232);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_21() {
		return memory.read<float>(m_addr + 2244);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_22() {
		return memory.read<float>(m_addr + 2248);
	}
	float GetCallFunc_SelectFloat_ReturnValue_30() {
		return memory.read<float>(m_addr + 2252);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_14() {
		return memory.read<bool>(m_addr + 2256);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_23() {
		return memory.read<float>(m_addr + 2260);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_34() {
		return memory.read<bool>(m_addr + 2264);
	}
	struct FVector GetCallFunc_BreakTransform_Location_35() {
		return memory.read<struct FVector>(m_addr + 2268);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_35() {
		return memory.read<struct FRotator>(m_addr + 2280);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_35() {
		return memory.read<struct FVector>(m_addr + 2292);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_24() {
		return memory.read<float>(m_addr + 2304);
	}
	float GetCallFunc_GetLeanBlendWeights_left_7() {
		return memory.read<float>(m_addr + 2308);
	}
	float GetCallFunc_GetLeanBlendWeights_right_7() {
		return memory.read<float>(m_addr + 2312);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_25() {
		return memory.read<float>(m_addr + 2316);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_26() {
		return memory.read<float>(m_addr + 2320);
	}
	struct FVector GetCallFunc_BreakTransform_Location_36() {
		return memory.read<struct FVector>(m_addr + 2324);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_36() {
		return memory.read<struct FRotator>(m_addr + 2336);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_36() {
		return memory.read<struct FVector>(m_addr + 2348);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_27() {
		return memory.read<float>(m_addr + 2360);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_28() {
		return memory.read<float>(m_addr + 2364);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_15() {
		return memory.read<bool>(m_addr + 2368);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_35() {
		return memory.read<bool>(m_addr + 2369);
	}
	struct FVector GetCallFunc_BreakTransform_Location_37() {
		return memory.read<struct FVector>(m_addr + 2372);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_37() {
		return memory.read<struct FRotator>(m_addr + 2384);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_37() {
		return memory.read<struct FVector>(m_addr + 2396);
	}
	struct FVector GetCallFunc_BreakTransform_Location_38() {
		return memory.read<struct FVector>(m_addr + 2408);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_38() {
		return memory.read<struct FRotator>(m_addr + 2420);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_38() {
		return memory.read<struct FVector>(m_addr + 2432);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_29() {
		return memory.read<float>(m_addr + 2444);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_30() {
		return memory.read<float>(m_addr + 2448);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_8() {
		return memory.read<float>(m_addr + 2452);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_2() {
		return memory.read<bool>(m_addr + 2456);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_16() {
		return memory.read<bool>(m_addr + 2457);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_36() {
		return memory.read<bool>(m_addr + 2458);
	}
	struct FVector GetCallFunc_BreakTransform_Location_39() {
		return memory.read<struct FVector>(m_addr + 2460);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_39() {
		return memory.read<struct FRotator>(m_addr + 2472);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_39() {
		return memory.read<struct FVector>(m_addr + 2484);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_9() {
		return memory.read<float>(m_addr + 2496);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_8() {
		return memory.read<bool>(m_addr + 2500);
	}
	float GetCallFunc_GetRelevantAnimTime_ReturnValue_2() {
		return memory.read<float>(m_addr + 2504);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_7() {
		return memory.read<bool>(m_addr + 2508);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_16() {
		return memory.read<bool>(m_addr + 2509);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_17() {
		return memory.read<bool>(m_addr + 2510);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_37() {
		return memory.read<bool>(m_addr + 2511);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_31() {
		return memory.read<float>(m_addr + 2512);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_32() {
		return memory.read<float>(m_addr + 2516);
	}
	struct FVector GetCallFunc_BreakTransform_Location_40() {
		return memory.read<struct FVector>(m_addr + 2520);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_40() {
		return memory.read<struct FRotator>(m_addr + 2532);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_40() {
		return memory.read<struct FVector>(m_addr + 2544);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_10() {
		return memory.read<float>(m_addr + 2556);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_3() {
		return memory.read<bool>(m_addr + 2560);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_33() {
		return memory.read<float>(m_addr + 2564);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_34() {
		return memory.read<float>(m_addr + 2568);
	}
	struct FVector GetCallFunc_BreakTransform_Location_41() {
		return memory.read<struct FVector>(m_addr + 2572);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_41() {
		return memory.read<struct FRotator>(m_addr + 2584);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_41() {
		return memory.read<struct FVector>(m_addr + 2596);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_35() {
		return memory.read<float>(m_addr + 2608);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_36() {
		return memory.read<float>(m_addr + 2612);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_37() {
		return memory.read<bool>(m_addr + 2616);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_18() {
		return memory.read<bool>(m_addr + 2617);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_38() {
		return memory.read<bool>(m_addr + 2618);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_39() {
		return memory.read<bool>(m_addr + 2619);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_37() {
		return memory.read<float>(m_addr + 2620);
	}
	struct FVector GetCallFunc_BreakTransform_Location_42() {
		return memory.read<struct FVector>(m_addr + 2624);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_42() {
		return memory.read<struct FRotator>(m_addr + 2636);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_42() {
		return memory.read<struct FVector>(m_addr + 2648);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_38() {
		return memory.read<float>(m_addr + 2660);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_39() {
		return memory.read<float>(m_addr + 2664);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_19() {
		return memory.read<bool>(m_addr + 2668);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_40() {
		return memory.read<bool>(m_addr + 2669);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_40() {
		return memory.read<float>(m_addr + 2672);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_41() {
		return memory.read<float>(m_addr + 2676);
	}
	struct FVector GetCallFunc_BreakTransform_Location_43() {
		return memory.read<struct FVector>(m_addr + 2680);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_43() {
		return memory.read<struct FRotator>(m_addr + 2692);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_43() {
		return memory.read<struct FVector>(m_addr + 2704);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_3() {
		return memory.read<float>(m_addr + 2716);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_8() {
		return memory.read<bool>(m_addr + 2720);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_42() {
		return memory.read<float>(m_addr + 2724);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_38() {
		return memory.read<bool>(m_addr + 2728);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_41() {
		return memory.read<bool>(m_addr + 2729);
	}
	struct FVector GetCallFunc_BreakTransform_Location_44() {
		return memory.read<struct FVector>(m_addr + 2732);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_44() {
		return memory.read<struct FRotator>(m_addr + 2744);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_44() {
		return memory.read<struct FVector>(m_addr + 2756);
	}
	struct FVector GetCallFunc_BreakTransform_Location_45() {
		return memory.read<struct FVector>(m_addr + 2768);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_45() {
		return memory.read<struct FRotator>(m_addr + 2780);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_45() {
		return memory.read<struct FVector>(m_addr + 2792);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_43() {
		return memory.read<float>(m_addr + 2804);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_44() {
		return memory.read<float>(m_addr + 2808);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_20() {
		return memory.read<bool>(m_addr + 2812);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_42() {
		return memory.read<bool>(m_addr + 2813);
	}
	struct FVector GetCallFunc_BreakTransform_Location_46() {
		return memory.read<struct FVector>(m_addr + 2816);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_46() {
		return memory.read<struct FRotator>(m_addr + 2828);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_46() {
		return memory.read<struct FVector>(m_addr + 2840);
	}
	bool GetCallFunc_NotEqual_ByteByte_ReturnValue_3() {
		return memory.read<bool>(m_addr + 2852);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_45() {
		return memory.read<float>(m_addr + 2856);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_46() {
		return memory.read<float>(m_addr + 2860);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_39() {
		return memory.read<bool>(m_addr + 2864);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_43() {
		return memory.read<bool>(m_addr + 2865);
	}
	float GetCallFunc_SelectFloat_ReturnValue_31() {
		return memory.read<float>(m_addr + 2868);
	}
	struct FVector GetCallFunc_BreakTransform_Location_47() {
		return memory.read<struct FVector>(m_addr + 2872);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_47() {
		return memory.read<struct FRotator>(m_addr + 2884);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_47() {
		return memory.read<struct FVector>(m_addr + 2896);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_47() {
		return memory.read<float>(m_addr + 2908);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_48() {
		return memory.read<float>(m_addr + 2912);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_21() {
		return memory.read<bool>(m_addr + 2916);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_44() {
		return memory.read<bool>(m_addr + 2917);
	}
	struct FVector GetCallFunc_BreakTransform_Location_48() {
		return memory.read<struct FVector>(m_addr + 2920);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_48() {
		return memory.read<struct FRotator>(m_addr + 2932);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_48() {
		return memory.read<struct FVector>(m_addr + 2944);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_49() {
		return memory.read<float>(m_addr + 2956);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_50() {
		return memory.read<float>(m_addr + 2960);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_40() {
		return memory.read<bool>(m_addr + 2964);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_22() {
		return memory.read<bool>(m_addr + 2965);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_41() {
		return memory.read<bool>(m_addr + 2966);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_17() {
		return memory.read<bool>(m_addr + 2967);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_45() {
		return memory.read<bool>(m_addr + 2968);
	}
	struct FVector GetCallFunc_BreakTransform_Location_49() {
		return memory.read<struct FVector>(m_addr + 2972);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_49() {
		return memory.read<struct FRotator>(m_addr + 2984);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_49() {
		return memory.read<struct FVector>(m_addr + 2996);
	}
	float GetCallFunc_SelectFloat_ReturnValue_32() {
		return memory.read<float>(m_addr + 3008);
	}
	float GetCallFunc_GetLeanBlendWeights_left_8() {
		return memory.read<float>(m_addr + 3012);
	}
	float GetCallFunc_GetLeanBlendWeights_right_8() {
		return memory.read<float>(m_addr + 3016);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_51() {
		return memory.read<float>(m_addr + 3020);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_52() {
		return memory.read<float>(m_addr + 3024);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_46() {
		return memory.read<bool>(m_addr + 3028);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_53() {
		return memory.read<float>(m_addr + 3032);
	}
	struct FVector GetCallFunc_BreakTransform_Location_50() {
		return memory.read<struct FVector>(m_addr + 3036);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_50() {
		return memory.read<struct FRotator>(m_addr + 3048);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_50() {
		return memory.read<struct FVector>(m_addr + 3060);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_54() {
		return memory.read<float>(m_addr + 3072);
	}
	float GetCallFunc_GetLeanBlendWeights_left_9() {
		return memory.read<float>(m_addr + 3076);
	}
	float GetCallFunc_GetLeanBlendWeights_right_9() {
		return memory.read<float>(m_addr + 3080);
	}
	float GetCallFunc_GetCurveValue_ReturnValue() {
		return memory.read<float>(m_addr + 3084);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 3088);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue_3() {
		return memory.read<float>(m_addr + 3092);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_9() {
		return memory.read<bool>(m_addr + 3096);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_18() {
		return memory.read<bool>(m_addr + 3097);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue() {
		return memory.read<float>(m_addr + 3100);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_19() {
		return memory.read<bool>(m_addr + 3104);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_47() {
		return memory.read<bool>(m_addr + 3105);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_2() {
		return memory.read<float>(m_addr + 3108);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_3() {
		return memory.read<float>(m_addr + 3112);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_4() {
		return memory.read<float>(m_addr + 3116);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_5() {
		return memory.read<float>(m_addr + 3120);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_6() {
		return memory.read<float>(m_addr + 3124);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_7() {
		return memory.read<float>(m_addr + 3128);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_8() {
		return memory.read<float>(m_addr + 3132);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_4() {
		return memory.read<float>(m_addr + 3136);
	}
	float GetCallFunc_SelectFloat_ReturnValue_33() {
		return memory.read<float>(m_addr + 3140);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 3144);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_9() {
		return memory.read<float>(m_addr + 3148);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_10() {
		return memory.read<float>(m_addr + 3152);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_11() {
		return memory.read<float>(m_addr + 3156);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_12() {
		return memory.read<float>(m_addr + 3160);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_13() {
		return memory.read<float>(m_addr + 3164);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_14() {
		return memory.read<float>(m_addr + 3168);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_15() {
		return memory.read<float>(m_addr + 3172);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_16() {
		return memory.read<float>(m_addr + 3176);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_17() {
		return memory.read<float>(m_addr + 3180);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_18() {
		return memory.read<float>(m_addr + 3184);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_19() {
		return memory.read<float>(m_addr + 3188);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_20() {
		return memory.read<float>(m_addr + 3192);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_21() {
		return memory.read<float>(m_addr + 3196);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_22() {
		return memory.read<float>(m_addr + 3200);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_23() {
		return memory.read<float>(m_addr + 3204);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_24() {
		return memory.read<float>(m_addr + 3208);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 3212);
	}
	struct FVector GetCallFunc_GetIKLegsRootOffsetVectorFromCardinalDirection_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 3216);
	}
	struct FVector GetCallFunc_Multiply_VectorFloat_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 3228);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_25() {
		return memory.read<float>(m_addr + 3240);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_26() {
		return memory.read<float>(m_addr + 3244);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_27() {
		return memory.read<float>(m_addr + 3248);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_28() {
		return memory.read<float>(m_addr + 3252);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_29() {
		return memory.read<float>(m_addr + 3256);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_30() {
		return memory.read<float>(m_addr + 3260);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_31() {
		return memory.read<float>(m_addr + 3264);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_32() {
		return memory.read<float>(m_addr + 3268);
	}
	float GetCallFunc_SelectFloat_ReturnValue_34() {
		return memory.read<float>(m_addr + 3272);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_33() {
		return memory.read<float>(m_addr + 3276);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_34() {
		return memory.read<float>(m_addr + 3280);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_35() {
		return memory.read<float>(m_addr + 3284);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_36() {
		return memory.read<float>(m_addr + 3288);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_37() {
		return memory.read<float>(m_addr + 3292);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_38() {
		return memory.read<float>(m_addr + 3296);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_39() {
		return memory.read<float>(m_addr + 3300);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_40() {
		return memory.read<float>(m_addr + 3304);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_41() {
		return memory.read<float>(m_addr + 3308);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_42() {
		return memory.read<float>(m_addr + 3312);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_43() {
		return memory.read<float>(m_addr + 3316);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_44() {
		return memory.read<float>(m_addr + 3320);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_45() {
		return memory.read<float>(m_addr + 3324);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_46() {
		return memory.read<float>(m_addr + 3328);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_47() {
		return memory.read<float>(m_addr + 3332);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_48() {
		return memory.read<float>(m_addr + 3336);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_42() {
		return memory.read<bool>(m_addr + 3340);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_23() {
		return memory.read<bool>(m_addr + 3341);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_20() {
		return memory.read<bool>(m_addr + 3342);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_49() {
		return memory.read<float>(m_addr + 3344);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_50() {
		return memory.read<float>(m_addr + 3348);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_51() {
		return memory.read<float>(m_addr + 3352);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_52() {
		return memory.read<float>(m_addr + 3356);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_53() {
		return memory.read<float>(m_addr + 3360);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_54() {
		return memory.read<float>(m_addr + 3364);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_55() {
		return memory.read<float>(m_addr + 3368);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_56() {
		return memory.read<float>(m_addr + 3372);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_43() {
		return memory.read<bool>(m_addr + 3376);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_24() {
		return memory.read<bool>(m_addr + 3377);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_48() {
		return memory.read<bool>(m_addr + 3378);
	}
	float GetCallFunc_SelectFloat_ReturnValue_35() {
		return memory.read<float>(m_addr + 3380);
	}
	float GetCallFunc_SelectFloat_ReturnValue_36() {
		return memory.read<float>(m_addr + 3384);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_44() {
		return memory.read<bool>(m_addr + 3388);
	}
	float GetCallFunc_SelectFloat_ReturnValue_37() {
		return memory.read<float>(m_addr + 3392);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_31() {
		return memory.read<float>(m_addr + 3396);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_4() {
		return memory.read<float>(m_addr + 3400);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_25() {
		return memory.read<bool>(m_addr + 3404);
	}
	float GetCallFunc_GetLeanBlendWeights_left_10() {
		return memory.read<float>(m_addr + 3408);
	}
	float GetCallFunc_GetLeanBlendWeights_right_10() {
		return memory.read<float>(m_addr + 3412);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_55() {
		return memory.read<float>(m_addr + 3416);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_31() {
		return memory.read<float>(m_addr + 3420);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_45() {
		return memory.read<bool>(m_addr + 3424);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_21() {
		return memory.read<bool>(m_addr + 3425);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_31() {
		return memory.read<float>(m_addr + 3428);
	}
	float GetCallFunc_GetLeanBlendWeights_left_11() {
		return memory.read<float>(m_addr + 3432);
	}
	float GetCallFunc_GetLeanBlendWeights_right_11() {
		return memory.read<float>(m_addr + 3436);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_56() {
		return memory.read<float>(m_addr + 3440);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_31() {
		return memory.read<float>(m_addr + 3444);
	}
	struct FVector GetCallFunc_BreakTransform_Location_51() {
		return memory.read<struct FVector>(m_addr + 3448);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_51() {
		return memory.read<struct FRotator>(m_addr + 3460);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_51() {
		return memory.read<struct FVector>(m_addr + 3472);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_57() {
		return memory.read<float>(m_addr + 3484);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_46() {
		return memory.read<bool>(m_addr + 3488);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_22() {
		return memory.read<bool>(m_addr + 3489);
	}
	float GetCallFunc_GetLeanBlendWeights_left_12() {
		return memory.read<float>(m_addr + 3492);
	}
	float GetCallFunc_GetLeanBlendWeights_right_12() {
		return memory.read<float>(m_addr + 3496);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_58() {
		return memory.read<float>(m_addr + 3500);
	}
	struct FVector GetCallFunc_BreakTransform_Location_52() {
		return memory.read<struct FVector>(m_addr + 3504);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_52() {
		return memory.read<struct FRotator>(m_addr + 3516);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_52() {
		return memory.read<struct FVector>(m_addr + 3528);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_47() {
		return memory.read<bool>(m_addr + 3540);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_23() {
		return memory.read<bool>(m_addr + 3541);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_59() {
		return memory.read<float>(m_addr + 3544);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_48() {
		return memory.read<bool>(m_addr + 3548);
	}
	float GetCallFunc_GetLeanBlendWeights_left_13() {
		return memory.read<float>(m_addr + 3552);
	}
	float GetCallFunc_GetLeanBlendWeights_right_13() {
		return memory.read<float>(m_addr + 3556);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_60() {
		return memory.read<float>(m_addr + 3560);
	}
	struct FVector GetCallFunc_BreakTransform_Location_53() {
		return memory.read<struct FVector>(m_addr + 3564);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_53() {
		return memory.read<struct FRotator>(m_addr + 3576);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_53() {
		return memory.read<struct FVector>(m_addr + 3588);
	}
	float GetCallFunc_SelectFloat_ReturnValue_38() {
		return memory.read<float>(m_addr + 3600);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_61() {
		return memory.read<float>(m_addr + 3604);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_5() {
		return memory.read<float>(m_addr + 3608);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_62() {
		return memory.read<float>(m_addr + 3612);
	}
	float GetCallFunc_SelectFloat_ReturnValue_39() {
		return memory.read<float>(m_addr + 3616);
	}
	struct FVector GetCallFunc_BreakTransform_Location_54() {
		return memory.read<struct FVector>(m_addr + 3620);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_54() {
		return memory.read<struct FRotator>(m_addr + 3632);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_54() {
		return memory.read<struct FVector>(m_addr + 3644);
	}
	float GetCallFunc_GetLeanBlendWeights_left_14() {
		return memory.read<float>(m_addr + 3656);
	}
	float GetCallFunc_GetLeanBlendWeights_right_14() {
		return memory.read<float>(m_addr + 3660);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_63() {
		return memory.read<float>(m_addr + 3664);
	}
	struct FVector GetCallFunc_BreakTransform_Location_55() {
		return memory.read<struct FVector>(m_addr + 3668);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_55() {
		return memory.read<struct FRotator>(m_addr + 3680);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_55() {
		return memory.read<struct FVector>(m_addr + 3692);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_49() {
		return memory.read<bool>(m_addr + 3704);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_64() {
		return memory.read<float>(m_addr + 3708);
	}
	float GetCallFunc_SelectFloat_ReturnValue_40() {
		return memory.read<float>(m_addr + 3712);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_50() {
		return memory.read<bool>(m_addr + 3716);
	}
	float GetCallFunc_GetLeanBlendWeights_left_15() {
		return memory.read<float>(m_addr + 3720);
	}
	float GetCallFunc_GetLeanBlendWeights_right_15() {
		return memory.read<float>(m_addr + 3724);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_65() {
		return memory.read<float>(m_addr + 3728);
	}
	float GetCallFunc_GetCurveValue_ReturnValue_2() {
		return memory.read<float>(m_addr + 3732);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_6() {
		return memory.read<float>(m_addr + 3736);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_5() {
		return memory.read<float>(m_addr + 3740);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 3744);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_57() {
		return memory.read<float>(m_addr + 3748);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_58() {
		return memory.read<float>(m_addr + 3752);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_59() {
		return memory.read<float>(m_addr + 3756);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_60() {
		return memory.read<float>(m_addr + 3760);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_61() {
		return memory.read<float>(m_addr + 3764);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_62() {
		return memory.read<float>(m_addr + 3768);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_63() {
		return memory.read<float>(m_addr + 3772);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_64() {
		return memory.read<float>(m_addr + 3776);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_51() {
		return memory.read<bool>(m_addr + 3780);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_52() {
		return memory.read<bool>(m_addr + 3781);
	}
	float GetCallFunc_SelectFloat_ReturnValue_41() {
		return memory.read<float>(m_addr + 3784);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_24() {
		return memory.read<bool>(m_addr + 3788);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_65() {
		return memory.read<float>(m_addr + 3792);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_4() {
		return memory.read<float>(m_addr + 3796);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_66() {
		return memory.read<float>(m_addr + 3800);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_67() {
		return memory.read<float>(m_addr + 3804);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_68() {
		return memory.read<float>(m_addr + 3808);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_69() {
		return memory.read<float>(m_addr + 3812);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_70() {
		return memory.read<float>(m_addr + 3816);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_71() {
		return memory.read<float>(m_addr + 3820);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_72() {
		return memory.read<float>(m_addr + 3824);
	}
	struct FVector GetCallFunc_GetIKLegsRootOffsetVectorFromCardinalDirection_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 3828);
	}
	struct FVector GetCallFunc_Multiply_VectorFloat_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 3840);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_73() {
		return memory.read<float>(m_addr + 3852);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_74() {
		return memory.read<float>(m_addr + 3856);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_75() {
		return memory.read<float>(m_addr + 3860);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_76() {
		return memory.read<float>(m_addr + 3864);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_77() {
		return memory.read<float>(m_addr + 3868);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_78() {
		return memory.read<float>(m_addr + 3872);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_79() {
		return memory.read<float>(m_addr + 3876);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_80() {
		return memory.read<float>(m_addr + 3880);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_32() {
		return memory.read<float>(m_addr + 3884);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_7() {
		return memory.read<float>(m_addr + 3888);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_53() {
		return memory.read<bool>(m_addr + 3892);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_25() {
		return memory.read<bool>(m_addr + 3893);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_54() {
		return memory.read<bool>(m_addr + 3894);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_81() {
		return memory.read<float>(m_addr + 3896);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_26() {
		return memory.read<bool>(m_addr + 3900);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_49() {
		return memory.read<bool>(m_addr + 3901);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_82() {
		return memory.read<float>(m_addr + 3904);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_83() {
		return memory.read<float>(m_addr + 3908);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_84() {
		return memory.read<float>(m_addr + 3912);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_85() {
		return memory.read<float>(m_addr + 3916);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_86() {
		return memory.read<float>(m_addr + 3920);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_87() {
		return memory.read<float>(m_addr + 3924);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_88() {
		return memory.read<float>(m_addr + 3928);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_32() {
		return memory.read<float>(m_addr + 3932);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_89() {
		return memory.read<float>(m_addr + 3936);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_90() {
		return memory.read<float>(m_addr + 3940);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_91() {
		return memory.read<float>(m_addr + 3944);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_92() {
		return memory.read<float>(m_addr + 3948);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_93() {
		return memory.read<float>(m_addr + 3952);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_94() {
		return memory.read<float>(m_addr + 3956);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_95() {
		return memory.read<float>(m_addr + 3960);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_96() {
		return memory.read<float>(m_addr + 3964);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_32() {
		return memory.read<float>(m_addr + 3968);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_32() {
		return memory.read<float>(m_addr + 3972);
	}
	float GetCallFunc_SelectFloat_ReturnValue_42() {
		return memory.read<float>(m_addr + 3976);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_55() {
		return memory.read<bool>(m_addr + 3980);
	}
	float GetCallFunc_SelectFloat_ReturnValue_43() {
		return memory.read<float>(m_addr + 3984);
	}
	float GetCallFunc_SelectFloat_ReturnValue_44() {
		return memory.read<float>(m_addr + 3988);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_97() {
		return memory.read<float>(m_addr + 3992);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_56() {
		return memory.read<bool>(m_addr + 3996);
	}
	float GetCallFunc_SelectFloat_ReturnValue_45() {
		return memory.read<float>(m_addr + 4000);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_98() {
		return memory.read<float>(m_addr + 4004);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_99() {
		return memory.read<float>(m_addr + 4008);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_100() {
		return memory.read<float>(m_addr + 4012);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_101() {
		return memory.read<float>(m_addr + 4016);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_102() {
		return memory.read<float>(m_addr + 4020);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_103() {
		return memory.read<float>(m_addr + 4024);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_104() {
		return memory.read<float>(m_addr + 4028);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_105() {
		return memory.read<float>(m_addr + 4032);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_106() {
		return memory.read<float>(m_addr + 4036);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_107() {
		return memory.read<float>(m_addr + 4040);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_108() {
		return memory.read<float>(m_addr + 4044);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_109() {
		return memory.read<float>(m_addr + 4048);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_110() {
		return memory.read<float>(m_addr + 4052);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_111() {
		return memory.read<float>(m_addr + 4056);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_112() {
		return memory.read<float>(m_addr + 4060);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_33() {
		return memory.read<float>(m_addr + 4064);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_113() {
		return memory.read<float>(m_addr + 4068);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_114() {
		return memory.read<float>(m_addr + 4072);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_115() {
		return memory.read<float>(m_addr + 4076);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_116() {
		return memory.read<float>(m_addr + 4080);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_117() {
		return memory.read<float>(m_addr + 4084);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_118() {
		return memory.read<float>(m_addr + 4088);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_119() {
		return memory.read<float>(m_addr + 4092);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_120() {
		return memory.read<float>(m_addr + 4096);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_33() {
		return memory.read<float>(m_addr + 4100);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_121() {
		return memory.read<float>(m_addr + 4104);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_122() {
		return memory.read<float>(m_addr + 4108);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_123() {
		return memory.read<float>(m_addr + 4112);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_124() {
		return memory.read<float>(m_addr + 4116);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_125() {
		return memory.read<float>(m_addr + 4120);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_126() {
		return memory.read<float>(m_addr + 4124);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_127() {
		return memory.read<float>(m_addr + 4128);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_128() {
		return memory.read<float>(m_addr + 4132);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_33() {
		return memory.read<float>(m_addr + 4136);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_33() {
		return memory.read<float>(m_addr + 4140);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_57() {
		return memory.read<bool>(m_addr + 4144);
	}
	float GetCallFunc_SelectFloat_ReturnValue_46() {
		return memory.read<float>(m_addr + 4148);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_129() {
		return memory.read<float>(m_addr + 4152);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_130() {
		return memory.read<float>(m_addr + 4156);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_131() {
		return memory.read<float>(m_addr + 4160);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_132() {
		return memory.read<float>(m_addr + 4164);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_133() {
		return memory.read<float>(m_addr + 4168);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_134() {
		return memory.read<float>(m_addr + 4172);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_135() {
		return memory.read<float>(m_addr + 4176);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_136() {
		return memory.read<float>(m_addr + 4180);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_137() {
		return memory.read<float>(m_addr + 4184);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_138() {
		return memory.read<float>(m_addr + 4188);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_139() {
		return memory.read<float>(m_addr + 4192);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_140() {
		return memory.read<float>(m_addr + 4196);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_141() {
		return memory.read<float>(m_addr + 4200);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_142() {
		return memory.read<float>(m_addr + 4204);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_143() {
		return memory.read<float>(m_addr + 4208);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_144() {
		return memory.read<float>(m_addr + 4212);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_34() {
		return memory.read<float>(m_addr + 4216);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_145() {
		return memory.read<float>(m_addr + 4220);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_8() {
		return memory.read<float>(m_addr + 4224);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_146() {
		return memory.read<float>(m_addr + 4228);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_147() {
		return memory.read<float>(m_addr + 4232);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_148() {
		return memory.read<float>(m_addr + 4236);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_149() {
		return memory.read<float>(m_addr + 4240);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_150() {
		return memory.read<float>(m_addr + 4244);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_151() {
		return memory.read<float>(m_addr + 4248);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_152() {
		return memory.read<float>(m_addr + 4252);
	}
	float GetCallFunc_GetRelevantAnimTime_ReturnValue_3() {
		return memory.read<float>(m_addr + 4256);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_10() {
		return memory.read<bool>(m_addr + 4260);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_11() {
		return memory.read<float>(m_addr + 4264);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_34() {
		return memory.read<float>(m_addr + 4268);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_9() {
		return memory.read<bool>(m_addr + 4272);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_27() {
		return memory.read<bool>(m_addr + 4273);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_34() {
		return memory.read<float>(m_addr + 4276);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_34() {
		return memory.read<float>(m_addr + 4280);
	}
	float GetCallFunc_SelectFloat_ReturnValue_47() {
		return memory.read<float>(m_addr + 4284);
	}
	float GetCallFunc_SelectFloat_ReturnValue_48() {
		return memory.read<float>(m_addr + 4288);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_58() {
		return memory.read<bool>(m_addr + 4292);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_35() {
		return memory.read<float>(m_addr + 4296);
	}
	float GetCallFunc_SelectFloat_ReturnValue_49() {
		return memory.read<float>(m_addr + 4300);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_9() {
		return memory.read<float>(m_addr + 4304);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_26() {
		return memory.read<bool>(m_addr + 4308);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_50() {
		return memory.read<bool>(m_addr + 4309);
	}
	bool GetCallFunc_NearlyEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 4310);
	}
	float GetCallFunc_VSize_ReturnValue() {
		return memory.read<float>(m_addr + 4312);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_35() {
		return memory.read<float>(m_addr + 4316);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_10() {
		return memory.read<bool>(m_addr + 4320);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_51() {
		return memory.read<bool>(m_addr + 4321);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_35() {
		return memory.read<float>(m_addr + 4324);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_35() {
		return memory.read<float>(m_addr + 4328);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_6() {
		return memory.read<float>(m_addr + 4332);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_11() {
		return memory.read<bool>(m_addr + 4336);
	}
	float GetCallFunc_GetLeanBlendWeights_left_16() {
		return memory.read<float>(m_addr + 4340);
	}
	float GetCallFunc_GetLeanBlendWeights_right_16() {
		return memory.read<float>(m_addr + 4344);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_66() {
		return memory.read<float>(m_addr + 4348);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_52() {
		return memory.read<bool>(m_addr + 4352);
	}
	bool GetCallFunc_NotEqual_ByteByte_ReturnValue_4() {
		return memory.read<bool>(m_addr + 4353);
	}
	float GetCallFunc_GetLeanBlendWeights_left_17() {
		return memory.read<float>(m_addr + 4356);
	}
	float GetCallFunc_GetLeanBlendWeights_right_17() {
		return memory.read<float>(m_addr + 4360);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_67() {
		return memory.read<float>(m_addr + 4364);
	}
	float GetCallFunc_SelectFloat_ReturnValue_50() {
		return memory.read<float>(m_addr + 4368);
	}
	float GetCallFunc_SelectFloat_ReturnValue_51() {
		return memory.read<float>(m_addr + 4372);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_59() {
		return memory.read<bool>(m_addr + 4376);
	}
	float GetCallFunc_SelectFloat_ReturnValue_52() {
		return memory.read<float>(m_addr + 4380);
	}
	float GetCallFunc_GetLeanBlendWeights_left_18() {
		return memory.read<float>(m_addr + 4384);
	}
	float GetCallFunc_GetLeanBlendWeights_right_18() {
		return memory.read<float>(m_addr + 4388);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_68() {
		return memory.read<float>(m_addr + 4392);
	}
	struct FVector GetCallFunc_BreakTransform_Location_56() {
		return memory.read<struct FVector>(m_addr + 4396);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_56() {
		return memory.read<struct FRotator>(m_addr + 4408);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_56() {
		return memory.read<struct FVector>(m_addr + 4420);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_69() {
		return memory.read<float>(m_addr + 4432);
	}
	struct FVector GetCallFunc_BreakTransform_Location_57() {
		return memory.read<struct FVector>(m_addr + 4436);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_57() {
		return memory.read<struct FRotator>(m_addr + 4448);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_57() {
		return memory.read<struct FVector>(m_addr + 4460);
	}
	float GetCallFunc_GetLeanBlendWeights_left_19() {
		return memory.read<float>(m_addr + 4472);
	}
	float GetCallFunc_GetLeanBlendWeights_right_19() {
		return memory.read<float>(m_addr + 4476);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_70() {
		return memory.read<float>(m_addr + 4480);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_71() {
		return memory.read<float>(m_addr + 4484);
	}
	struct FVector GetCallFunc_BreakTransform_Location_58() {
		return memory.read<struct FVector>(m_addr + 4488);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_58() {
		return memory.read<struct FRotator>(m_addr + 4500);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_58() {
		return memory.read<struct FVector>(m_addr + 4512);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_27() {
		return memory.read<bool>(m_addr + 4524);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_53() {
		return memory.read<bool>(m_addr + 4525);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_60() {
		return memory.read<bool>(m_addr + 4526);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_61() {
		return memory.read<bool>(m_addr + 4527);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_28() {
		return memory.read<bool>(m_addr + 4528);
	}
	struct FVector GetCallFunc_BreakTransform_Location_59() {
		return memory.read<struct FVector>(m_addr + 4532);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_59() {
		return memory.read<struct FRotator>(m_addr + 4544);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_59() {
		return memory.read<struct FVector>(m_addr + 4556);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_28() {
		return memory.read<bool>(m_addr + 4568);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_54() {
		return memory.read<bool>(m_addr + 4569);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue_4() {
		return memory.read<float>(m_addr + 4572);
	}
	struct FVector GetCallFunc_BreakTransform_Location_60() {
		return memory.read<struct FVector>(m_addr + 4576);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_60() {
		return memory.read<struct FRotator>(m_addr + 4588);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_60() {
		return memory.read<struct FVector>(m_addr + 4600);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_12() {
		return memory.read<bool>(m_addr + 4612);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_29() {
		return memory.read<bool>(m_addr + 4613);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_30() {
		return memory.read<bool>(m_addr + 4614);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_55() {
		return memory.read<bool>(m_addr + 4615);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_29() {
		return memory.read<bool>(m_addr + 4616);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_56() {
		return memory.read<bool>(m_addr + 4617);
	}
	float GetCallFunc_GetLeanBlendWeights_left_20() {
		return memory.read<float>(m_addr + 4620);
	}
	float GetCallFunc_GetLeanBlendWeights_right_20() {
		return memory.read<float>(m_addr + 4624);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_72() {
		return memory.read<float>(m_addr + 4628);
	}
	struct FVector GetCallFunc_BreakTransform_Location_61() {
		return memory.read<struct FVector>(m_addr + 4632);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_61() {
		return memory.read<struct FRotator>(m_addr + 4644);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_61() {
		return memory.read<struct FVector>(m_addr + 4656);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_36() {
		return memory.read<float>(m_addr + 4668);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_73() {
		return memory.read<float>(m_addr + 4672);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_10() {
		return memory.read<float>(m_addr + 4676);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_12() {
		return memory.read<float>(m_addr + 4680);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_4() {
		return memory.read<bool>(m_addr + 4684);
	}
	float GetCallFunc_SelectFloat_ReturnValue_53() {
		return memory.read<float>(m_addr + 4688);
	}
	struct FVector GetCallFunc_BreakTransform_Location_62() {
		return memory.read<struct FVector>(m_addr + 4692);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_62() {
		return memory.read<struct FRotator>(m_addr + 4704);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_62() {
		return memory.read<struct FVector>(m_addr + 4716);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_30() {
		return memory.read<bool>(m_addr + 4728);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_74() {
		return memory.read<float>(m_addr + 4732);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_57() {
		return memory.read<bool>(m_addr + 4736);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_11() {
		return memory.read<float>(m_addr + 4740);
	}
	struct FVector GetCallFunc_BreakTransform_Location_63() {
		return memory.read<struct FVector>(m_addr + 4744);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_63() {
		return memory.read<struct FRotator>(m_addr + 4756);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_63() {
		return memory.read<struct FVector>(m_addr + 4768);
	}
	float GetCallFunc_GetLeanBlendWeights_left_21() {
		return memory.read<float>(m_addr + 4780);
	}
	float GetCallFunc_GetLeanBlendWeights_right_21() {
		return memory.read<float>(m_addr + 4784);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_36() {
		return memory.read<float>(m_addr + 4788);
	}
	struct FVector GetCallFunc_BreakTransform_Location_64() {
		return memory.read<struct FVector>(m_addr + 4792);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_64() {
		return memory.read<struct FRotator>(m_addr + 4804);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_64() {
		return memory.read<struct FVector>(m_addr + 4816);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_31() {
		return memory.read<bool>(m_addr + 4828);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_58() {
		return memory.read<bool>(m_addr + 4829);
	}
	struct FVector GetCallFunc_BreakTransform_Location_65() {
		return memory.read<struct FVector>(m_addr + 4832);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_65() {
		return memory.read<struct FRotator>(m_addr + 4844);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_65() {
		return memory.read<struct FVector>(m_addr + 4856);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_32() {
		return memory.read<bool>(m_addr + 4868);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_75() {
		return memory.read<float>(m_addr + 4872);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_59() {
		return memory.read<bool>(m_addr + 4876);
	}
	float GetCallFunc_SelectFloat_ReturnValue_54() {
		return memory.read<float>(m_addr + 4880);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_12() {
		return memory.read<float>(m_addr + 4884);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_76() {
		return memory.read<float>(m_addr + 4888);
	}
	float GetCallFunc_SelectFloat_ReturnValue_55() {
		return memory.read<float>(m_addr + 4892);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_77() {
		return memory.read<float>(m_addr + 4896);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_13() {
		return memory.read<float>(m_addr + 4900);
	}
	float GetCallFunc_SelectFloat_ReturnValue_56() {
		return memory.read<float>(m_addr + 4904);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_36() {
		return memory.read<float>(m_addr + 4908);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_14() {
		return memory.read<float>(m_addr + 4912);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_78() {
		return memory.read<float>(m_addr + 4916);
	}
	float GetCallFunc_SelectFloat_ReturnValue_57() {
		return memory.read<float>(m_addr + 4920);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_13() {
		return memory.read<float>(m_addr + 4924);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_15() {
		return memory.read<float>(m_addr + 4928);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_5() {
		return memory.read<bool>(m_addr + 4932);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_79() {
		return memory.read<float>(m_addr + 4936);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_80() {
		return memory.read<float>(m_addr + 4940);
	}
	float GetCallFunc_GetLeanBlendWeights_left_22() {
		return memory.read<float>(m_addr + 4944);
	}
	float GetCallFunc_GetLeanBlendWeights_right_22() {
		return memory.read<float>(m_addr + 4948);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_81() {
		return memory.read<float>(m_addr + 4952);
	}
	struct FVector GetCallFunc_BreakTransform_Location_66() {
		return memory.read<struct FVector>(m_addr + 4956);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_66() {
		return memory.read<struct FRotator>(m_addr + 4968);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_66() {
		return memory.read<struct FVector>(m_addr + 4980);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_36() {
		return memory.read<float>(m_addr + 4992);
	}
	struct FVector GetCallFunc_BreakTransform_Location_67() {
		return memory.read<struct FVector>(m_addr + 4996);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_67() {
		return memory.read<struct FRotator>(m_addr + 5008);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_67() {
		return memory.read<struct FVector>(m_addr + 5020);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_82() {
		return memory.read<float>(m_addr + 5032);
	}
	float GetCallFunc_SelectFloat_ReturnValue_58() {
		return memory.read<float>(m_addr + 5036);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_83() {
		return memory.read<float>(m_addr + 5040);
	}
	float GetCallFunc_SelectFloat_ReturnValue_59() {
		return memory.read<float>(m_addr + 5044);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_16() {
		return memory.read<float>(m_addr + 5048);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_14() {
		return memory.read<float>(m_addr + 5052);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_6() {
		return memory.read<bool>(m_addr + 5056);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_84() {
		return memory.read<float>(m_addr + 5060);
	}
	float GetCallFunc_SelectFloat_ReturnValue_60() {
		return memory.read<float>(m_addr + 5064);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_17() {
		return memory.read<float>(m_addr + 5068);
	}
	float GetCallFunc_SelectFloat_ReturnValue_61() {
		return memory.read<float>(m_addr + 5072);
	}
	struct FVector GetCallFunc_BreakTransform_Location_68() {
		return memory.read<struct FVector>(m_addr + 5076);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_68() {
		return memory.read<struct FRotator>(m_addr + 5088);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_68() {
		return memory.read<struct FVector>(m_addr + 5100);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_62() {
		return memory.read<bool>(m_addr + 5112);
	}
	float GetCallFunc_SelectFloat_ReturnValue_62() {
		return memory.read<float>(m_addr + 5116);
	}
	float GetCallFunc_GetLeanBlendWeights_left_23() {
		return memory.read<float>(m_addr + 5120);
	}
	float GetCallFunc_GetLeanBlendWeights_right_23() {
		return memory.read<float>(m_addr + 5124);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_85() {
		return memory.read<float>(m_addr + 5128);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_86() {
		return memory.read<float>(m_addr + 5132);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_15() {
		return memory.read<float>(m_addr + 5136);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_7() {
		return memory.read<bool>(m_addr + 5140);
	}
	struct FVector GetCallFunc_BreakTransform_Location_69() {
		return memory.read<struct FVector>(m_addr + 5144);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_69() {
		return memory.read<struct FRotator>(m_addr + 5156);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_69() {
		return memory.read<struct FVector>(m_addr + 5168);
	}
	float GetCallFunc_GetLeanBlendWeights_left_24() {
		return memory.read<float>(m_addr + 5180);
	}
	float GetCallFunc_GetLeanBlendWeights_right_24() {
		return memory.read<float>(m_addr + 5184);
	}
	float GetCallFunc_SelectFloat_ReturnValue_63() {
		return memory.read<float>(m_addr + 5188);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_87() {
		return memory.read<float>(m_addr + 5192);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_88() {
		return memory.read<float>(m_addr + 5196);
	}
	struct FVector GetCallFunc_BreakTransform_Location_70() {
		return memory.read<struct FVector>(m_addr + 5200);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_70() {
		return memory.read<struct FRotator>(m_addr + 5212);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_70() {
		return memory.read<struct FVector>(m_addr + 5224);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_89() {
		return memory.read<float>(m_addr + 5236);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_18() {
		return memory.read<float>(m_addr + 5240);
	}
	float GetCallFunc_GetCurveValue_ReturnValue_3() {
		return memory.read<float>(m_addr + 5244);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_19() {
		return memory.read<float>(m_addr + 5248);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_37() {
		return memory.read<float>(m_addr + 5252);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_153() {
		return memory.read<float>(m_addr + 5256);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_154() {
		return memory.read<float>(m_addr + 5260);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_155() {
		return memory.read<float>(m_addr + 5264);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_156() {
		return memory.read<float>(m_addr + 5268);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_157() {
		return memory.read<float>(m_addr + 5272);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_158() {
		return memory.read<float>(m_addr + 5276);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_159() {
		return memory.read<float>(m_addr + 5280);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_160() {
		return memory.read<float>(m_addr + 5284);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_37() {
		return memory.read<float>(m_addr + 5288);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_7() {
		return memory.read<float>(m_addr + 5292);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_5() {
		return memory.read<float>(m_addr + 5296);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_63() {
		return memory.read<bool>(m_addr + 5300);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_37() {
		return memory.read<float>(m_addr + 5304);
	}
	float GetCallFunc_SelectFloat_ReturnValue_64() {
		return memory.read<float>(m_addr + 5308);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_161() {
		return memory.read<float>(m_addr + 5312);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_6() {
		return memory.read<float>(m_addr + 5316);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_162() {
		return memory.read<float>(m_addr + 5320);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_163() {
		return memory.read<float>(m_addr + 5324);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_164() {
		return memory.read<float>(m_addr + 5328);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_165() {
		return memory.read<float>(m_addr + 5332);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_166() {
		return memory.read<float>(m_addr + 5336);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_167() {
		return memory.read<float>(m_addr + 5340);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_168() {
		return memory.read<float>(m_addr + 5344);
	}
	struct FVector GetCallFunc_GetIKLegsRootOffsetVectorFromCardinalDirection_ReturnValue_3() {
		return memory.read<struct FVector>(m_addr + 5348);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_37() {
		return memory.read<float>(m_addr + 5360);
	}
	struct FVector GetCallFunc_Multiply_VectorFloat_ReturnValue_3() {
		return memory.read<struct FVector>(m_addr + 5364);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_33() {
		return memory.read<bool>(m_addr + 5376);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_169() {
		return memory.read<float>(m_addr + 5380);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_170() {
		return memory.read<float>(m_addr + 5384);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_171() {
		return memory.read<float>(m_addr + 5388);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_172() {
		return memory.read<float>(m_addr + 5392);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_173() {
		return memory.read<float>(m_addr + 5396);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_174() {
		return memory.read<float>(m_addr + 5400);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_175() {
		return memory.read<float>(m_addr + 5404);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_176() {
		return memory.read<float>(m_addr + 5408);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_64() {
		return memory.read<bool>(m_addr + 5412);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_31() {
		return memory.read<bool>(m_addr + 5413);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_177() {
		return memory.read<float>(m_addr + 5416);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_178() {
		return memory.read<float>(m_addr + 5420);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_179() {
		return memory.read<float>(m_addr + 5424);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_180() {
		return memory.read<float>(m_addr + 5428);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_181() {
		return memory.read<float>(m_addr + 5432);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_182() {
		return memory.read<float>(m_addr + 5436);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_183() {
		return memory.read<float>(m_addr + 5440);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_184() {
		return memory.read<float>(m_addr + 5444);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_185() {
		return memory.read<float>(m_addr + 5448);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_186() {
		return memory.read<float>(m_addr + 5452);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_187() {
		return memory.read<float>(m_addr + 5456);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_188() {
		return memory.read<float>(m_addr + 5460);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_189() {
		return memory.read<float>(m_addr + 5464);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_190() {
		return memory.read<float>(m_addr + 5468);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_191() {
		return memory.read<float>(m_addr + 5472);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_192() {
		return memory.read<float>(m_addr + 5476);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_38() {
		return memory.read<float>(m_addr + 5480);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_20() {
		return memory.read<float>(m_addr + 5484);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_193() {
		return memory.read<float>(m_addr + 5488);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_194() {
		return memory.read<float>(m_addr + 5492);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_195() {
		return memory.read<float>(m_addr + 5496);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_196() {
		return memory.read<float>(m_addr + 5500);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_197() {
		return memory.read<float>(m_addr + 5504);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_198() {
		return memory.read<float>(m_addr + 5508);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_199() {
		return memory.read<float>(m_addr + 5512);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_200() {
		return memory.read<float>(m_addr + 5516);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_65() {
		return memory.read<bool>(m_addr + 5520);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_201() {
		return memory.read<float>(m_addr + 5524);
	}
	float GetCallFunc_SelectFloat_ReturnValue_65() {
		return memory.read<float>(m_addr + 5528);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_202() {
		return memory.read<float>(m_addr + 5532);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_203() {
		return memory.read<float>(m_addr + 5536);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_204() {
		return memory.read<float>(m_addr + 5540);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_205() {
		return memory.read<float>(m_addr + 5544);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_206() {
		return memory.read<float>(m_addr + 5548);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_207() {
		return memory.read<float>(m_addr + 5552);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_208() {
		return memory.read<float>(m_addr + 5556);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_34() {
		return memory.read<bool>(m_addr + 5560);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_66() {
		return memory.read<bool>(m_addr + 5561);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_209() {
		return memory.read<float>(m_addr + 5564);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_32() {
		return memory.read<bool>(m_addr + 5568);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_210() {
		return memory.read<float>(m_addr + 5572);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_211() {
		return memory.read<float>(m_addr + 5576);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_212() {
		return memory.read<float>(m_addr + 5580);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_213() {
		return memory.read<float>(m_addr + 5584);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_214() {
		return memory.read<float>(m_addr + 5588);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_215() {
		return memory.read<float>(m_addr + 5592);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_216() {
		return memory.read<float>(m_addr + 5596);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_38() {
		return memory.read<float>(m_addr + 5600);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_38() {
		return memory.read<float>(m_addr + 5604);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_217() {
		return memory.read<float>(m_addr + 5608);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_218() {
		return memory.read<float>(m_addr + 5612);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_219() {
		return memory.read<float>(m_addr + 5616);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_220() {
		return memory.read<float>(m_addr + 5620);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_221() {
		return memory.read<float>(m_addr + 5624);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_222() {
		return memory.read<float>(m_addr + 5628);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_223() {
		return memory.read<float>(m_addr + 5632);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_224() {
		return memory.read<float>(m_addr + 5636);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_38() {
		return memory.read<float>(m_addr + 5640);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_67() {
		return memory.read<bool>(m_addr + 5644);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_68() {
		return memory.read<bool>(m_addr + 5645);
	}
	float GetCallFunc_SelectFloat_ReturnValue_66() {
		return memory.read<float>(m_addr + 5648);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_33() {
		return memory.read<bool>(m_addr + 5652);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_39() {
		return memory.read<float>(m_addr + 5656);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_225() {
		return memory.read<float>(m_addr + 5660);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_226() {
		return memory.read<float>(m_addr + 5664);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_227() {
		return memory.read<float>(m_addr + 5668);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_228() {
		return memory.read<float>(m_addr + 5672);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_229() {
		return memory.read<float>(m_addr + 5676);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_230() {
		return memory.read<float>(m_addr + 5680);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_231() {
		return memory.read<float>(m_addr + 5684);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_232() {
		return memory.read<float>(m_addr + 5688);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_39() {
		return memory.read<float>(m_addr + 5692);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_233() {
		return memory.read<float>(m_addr + 5696);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_234() {
		return memory.read<float>(m_addr + 5700);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_235() {
		return memory.read<float>(m_addr + 5704);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_236() {
		return memory.read<float>(m_addr + 5708);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_237() {
		return memory.read<float>(m_addr + 5712);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_238() {
		return memory.read<float>(m_addr + 5716);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_239() {
		return memory.read<float>(m_addr + 5720);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_240() {
		return memory.read<float>(m_addr + 5724);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_39() {
		return memory.read<float>(m_addr + 5728);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_39() {
		return memory.read<float>(m_addr + 5732);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_69() {
		return memory.read<bool>(m_addr + 5736);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_34() {
		return memory.read<bool>(m_addr + 5737);
	}
	float GetCallFunc_VSize_ReturnValue_2() {
		return memory.read<float>(m_addr + 5740);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_13() {
		return memory.read<bool>(m_addr + 5744);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_70() {
		return memory.read<bool>(m_addr + 5745);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_241() {
		return memory.read<float>(m_addr + 5748);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_35() {
		return memory.read<bool>(m_addr + 5752);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_242() {
		return memory.read<float>(m_addr + 5756);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_243() {
		return memory.read<float>(m_addr + 5760);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_244() {
		return memory.read<float>(m_addr + 5764);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_245() {
		return memory.read<float>(m_addr + 5768);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_246() {
		return memory.read<float>(m_addr + 5772);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_247() {
		return memory.read<float>(m_addr + 5776);
	}
	float GetCallFunc_FindTimeAtStoppingDistance_ReturnValue_248() {
		return memory.read<float>(m_addr + 5780);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_71() {
		return memory.read<bool>(m_addr + 5784);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_36() {
		return memory.read<bool>(m_addr + 5785);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_72() {
		return memory.read<bool>(m_addr + 5786);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_73() {
		return memory.read<bool>(m_addr + 5787);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_37() {
		return memory.read<bool>(m_addr + 5788);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_74() {
		return memory.read<bool>(m_addr + 5789);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_38() {
		return memory.read<bool>(m_addr + 5790);
	}
	float GetCallFunc_VSizeSquared_ReturnValue() {
		return memory.read<float>(m_addr + 5792);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_39() {
		return memory.read<bool>(m_addr + 5796);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_14() {
		return memory.read<bool>(m_addr + 5797);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_75() {
		return memory.read<bool>(m_addr + 5798);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_40() {
		return memory.read<bool>(m_addr + 5799);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_76() {
		return memory.read<bool>(m_addr + 5800);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_41() {
		return memory.read<bool>(m_addr + 5801);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_60() {
		return memory.read<bool>(m_addr + 5802);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_77() {
		return memory.read<bool>(m_addr + 5803);
	}
	float GetCallFunc_GetLeanBlendWeights_left_25() {
		return memory.read<float>(m_addr + 5804);
	}
	float GetCallFunc_GetLeanBlendWeights_right_25() {
		return memory.read<float>(m_addr + 5808);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_90() {
		return memory.read<float>(m_addr + 5812);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_91() {
		return memory.read<float>(m_addr + 5816);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_92() {
		return memory.read<float>(m_addr + 5820);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_42() {
		return memory.read<bool>(m_addr + 5824);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_78() {
		return memory.read<bool>(m_addr + 5825);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_61() {
		return memory.read<bool>(m_addr + 5826);
	}
	float GetCallFunc_GetLeanBlendWeights_left_26() {
		return memory.read<float>(m_addr + 5828);
	}
	float GetCallFunc_GetLeanBlendWeights_right_26() {
		return memory.read<float>(m_addr + 5832);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_93() {
		return memory.read<float>(m_addr + 5836);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_79() {
		return memory.read<bool>(m_addr + 5840);
	}
	float GetCallFunc_VSizeSquared_ReturnValue_2() {
		return memory.read<float>(m_addr + 5844);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_11() {
		return memory.read<bool>(m_addr + 5848);
	}
	float GetCallFunc_GetLeanBlendWeights_left_27() {
		return memory.read<float>(m_addr + 5852);
	}
	float GetCallFunc_GetLeanBlendWeights_right_27() {
		return memory.read<float>(m_addr + 5856);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_94() {
		return memory.read<float>(m_addr + 5860);
	}
	float GetCallFunc_GetLeanBlendWeights_left_28() {
		return memory.read<float>(m_addr + 5864);
	}
	float GetCallFunc_GetLeanBlendWeights_right_28() {
		return memory.read<float>(m_addr + 5868);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_95() {
		return memory.read<float>(m_addr + 5872);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_80() {
		return memory.read<bool>(m_addr + 5876);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_96() {
		return memory.read<float>(m_addr + 5880);
	}
	struct FVector GetCallFunc_BreakTransform_Location_71() {
		return memory.read<struct FVector>(m_addr + 5884);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_71() {
		return memory.read<struct FRotator>(m_addr + 5896);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_71() {
		return memory.read<struct FVector>(m_addr + 5908);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_97() {
		return memory.read<float>(m_addr + 5920);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 5924);
	}
	struct FVector GetCallFunc_BreakTransform_Location_72() {
		return memory.read<struct FVector>(m_addr + 5928);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_72() {
		return memory.read<struct FRotator>(m_addr + 5940);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_72() {
		return memory.read<struct FVector>(m_addr + 5952);
	}
	float GetCallFunc_GetLeanBlendWeights_left_29() {
		return memory.read<float>(m_addr + 5964);
	}
	float GetCallFunc_GetLeanBlendWeights_right_29() {
		return memory.read<float>(m_addr + 5968);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_98() {
		return memory.read<float>(m_addr + 5972);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_99() {
		return memory.read<float>(m_addr + 5976);
	}
	struct FVector GetCallFunc_BreakTransform_Location_73() {
		return memory.read<struct FVector>(m_addr + 5980);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_73() {
		return memory.read<struct FRotator>(m_addr + 5992);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_73() {
		return memory.read<struct FVector>(m_addr + 6004);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_100() {
		return memory.read<float>(m_addr + 6016);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_101() {
		return memory.read<float>(m_addr + 6020);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_35() {
		return memory.read<bool>(m_addr + 6024);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_62() {
		return memory.read<bool>(m_addr + 6025);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_16() {
		return memory.read<float>(m_addr + 6028);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_8() {
		return memory.read<bool>(m_addr + 6032);
	}
	float GetCallFunc_GetRelevantAnimTime_ReturnValue_4() {
		return memory.read<float>(m_addr + 6036);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_15() {
		return memory.read<bool>(m_addr + 6040);
	}
	struct FVector GetCallFunc_BreakTransform_Location_74() {
		return memory.read<struct FVector>(m_addr + 6044);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_74() {
		return memory.read<struct FRotator>(m_addr + 6056);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_74() {
		return memory.read<struct FVector>(m_addr + 6068);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_102() {
		return memory.read<float>(m_addr + 6080);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_103() {
		return memory.read<float>(m_addr + 6084);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_17() {
		return memory.read<float>(m_addr + 6088);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_9() {
		return memory.read<bool>(m_addr + 6092);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_36() {
		return memory.read<bool>(m_addr + 6093);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_63() {
		return memory.read<bool>(m_addr + 6094);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_21() {
		return memory.read<float>(m_addr + 6096);
	}
	struct FVector GetCallFunc_BreakTransform_Location_75() {
		return memory.read<struct FVector>(m_addr + 6100);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_75() {
		return memory.read<struct FRotator>(m_addr + 6112);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_75() {
		return memory.read<struct FVector>(m_addr + 6124);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_104() {
		return memory.read<float>(m_addr + 6136);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_105() {
		return memory.read<float>(m_addr + 6140);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_18() {
		return memory.read<float>(m_addr + 6144);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_10() {
		return memory.read<bool>(m_addr + 6148);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_37() {
		return memory.read<bool>(m_addr + 6149);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_64() {
		return memory.read<bool>(m_addr + 6150);
	}
	struct FVector GetCallFunc_BreakTransform_Location_76() {
		return memory.read<struct FVector>(m_addr + 6152);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_76() {
		return memory.read<struct FRotator>(m_addr + 6164);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_76() {
		return memory.read<struct FVector>(m_addr + 6176);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_22() {
		return memory.read<float>(m_addr + 6188);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_106() {
		return memory.read<float>(m_addr + 6192);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_107() {
		return memory.read<float>(m_addr + 6196);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue_5() {
		return memory.read<float>(m_addr + 6200);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_12() {
		return memory.read<bool>(m_addr + 6204);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_38() {
		return memory.read<bool>(m_addr + 6205);
	}
	float GetCallFunc_GetRelevantAnimTime_ReturnValue_5() {
		return memory.read<float>(m_addr + 6208);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_65() {
		return memory.read<bool>(m_addr + 6212);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_16() {
		return memory.read<bool>(m_addr + 6213);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_66() {
		return memory.read<bool>(m_addr + 6214);
	}
	float GetCallFunc_GetLeanBlendWeights_left_30() {
		return memory.read<float>(m_addr + 6216);
	}
	float GetCallFunc_GetLeanBlendWeights_right_30() {
		return memory.read<float>(m_addr + 6220);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_108() {
		return memory.read<float>(m_addr + 6224);
	}
	struct FVector GetCallFunc_BreakTransform_Location_77() {
		return memory.read<struct FVector>(m_addr + 6228);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_77() {
		return memory.read<struct FRotator>(m_addr + 6240);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_77() {
		return memory.read<struct FVector>(m_addr + 6252);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 6264);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_109() {
		return memory.read<float>(m_addr + 6268);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_110() {
		return memory.read<float>(m_addr + 6272);
	}
	struct FVector GetCallFunc_BreakTransform_Location_78() {
		return memory.read<struct FVector>(m_addr + 6276);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_78() {
		return memory.read<struct FRotator>(m_addr + 6288);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_78() {
		return memory.read<struct FVector>(m_addr + 6300);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_111() {
		return memory.read<float>(m_addr + 6312);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_112() {
		return memory.read<float>(m_addr + 6316);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_39() {
		return memory.read<bool>(m_addr + 6320);
	}
	float GetCallFunc_GetRelevantAnimTimeRemaining_ReturnValue_19() {
		return memory.read<float>(m_addr + 6324);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_67() {
		return memory.read<bool>(m_addr + 6328);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_11() {
		return memory.read<bool>(m_addr + 6329);
	}
	struct FVector GetCallFunc_BreakTransform_Location_79() {
		return memory.read<struct FVector>(m_addr + 6332);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_79() {
		return memory.read<struct FRotator>(m_addr + 6344);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_79() {
		return memory.read<struct FVector>(m_addr + 6356);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_113() {
		return memory.read<float>(m_addr + 6368);
	}
	float GetCallFunc_GetLeanBlendWeights_left_31() {
		return memory.read<float>(m_addr + 6372);
	}
	float GetCallFunc_GetLeanBlendWeights_right_31() {
		return memory.read<float>(m_addr + 6376);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_114() {
		return memory.read<float>(m_addr + 6380);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_115() {
		return memory.read<float>(m_addr + 6384);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue_6() {
		return memory.read<float>(m_addr + 6388);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_13() {
		return memory.read<bool>(m_addr + 6392);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_116() {
		return memory.read<float>(m_addr + 6396);
	}
	struct FVector GetCallFunc_BreakTransform_Location_80() {
		return memory.read<struct FVector>(m_addr + 6400);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_80() {
		return memory.read<struct FRotator>(m_addr + 6412);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_80() {
		return memory.read<struct FVector>(m_addr + 6424);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_117() {
		return memory.read<float>(m_addr + 6436);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_118() {
		return memory.read<float>(m_addr + 6440);
	}
	float GetCallFunc_GetRelevantAnimTime_ReturnValue_6() {
		return memory.read<float>(m_addr + 6444);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_17() {
		return memory.read<bool>(m_addr + 6448);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_40() {
		return memory.read<bool>(m_addr + 6449);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_68() {
		return memory.read<bool>(m_addr + 6450);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_69() {
		return memory.read<bool>(m_addr + 6451);
	}
	struct FVector GetCallFunc_BreakTransform_Location_81() {
		return memory.read<struct FVector>(m_addr + 6452);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_81() {
		return memory.read<struct FRotator>(m_addr + 6464);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_81() {
		return memory.read<struct FVector>(m_addr + 6476);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_119() {
		return memory.read<float>(m_addr + 6488);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_120() {
		return memory.read<float>(m_addr + 6492);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue_7() {
		return memory.read<float>(m_addr + 6496);
	}
	float GetCallFunc_GetRelevantAnimTime_ReturnValue_7() {
		return memory.read<float>(m_addr + 6500);
	}
	bool GetCallFunc_LessEqual_FloatFloat_ReturnValue_14() {
		return memory.read<bool>(m_addr + 6504);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_18() {
		return memory.read<bool>(m_addr + 6505);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_70() {
		return memory.read<bool>(m_addr + 6506);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_41() {
		return memory.read<bool>(m_addr + 6507);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_71() {
		return memory.read<bool>(m_addr + 6508);
	}
	struct FVector GetCallFunc_BreakTransform_Location_82() {
		return memory.read<struct FVector>(m_addr + 6512);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_82() {
		return memory.read<struct FRotator>(m_addr + 6524);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_82() {
		return memory.read<struct FVector>(m_addr + 6536);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_121() {
		return memory.read<float>(m_addr + 6548);
	}
	float GetCallFunc_GetLeanBlendWeights_left_32() {
		return memory.read<float>(m_addr + 6552);
	}
	float GetCallFunc_GetLeanBlendWeights_right_32() {
		return memory.read<float>(m_addr + 6556);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_122() {
		return memory.read<float>(m_addr + 6560);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_123() {
		return memory.read<float>(m_addr + 6564);
	}
	struct FVector GetCallFunc_BreakTransform_Location_83() {
		return memory.read<struct FVector>(m_addr + 6568);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_83() {
		return memory.read<struct FRotator>(m_addr + 6580);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_83() {
		return memory.read<struct FVector>(m_addr + 6592);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_124() {
		return memory.read<float>(m_addr + 6604);
	}
	float GetCallFunc_GetLeanBlendWeights_left_33() {
		return memory.read<float>(m_addr + 6608);
	}
	float GetCallFunc_GetLeanBlendWeights_right_33() {
		return memory.read<float>(m_addr + 6612);
	}
	float GetCallFunc_GetBoxingInPlaceTurningElapsedTimeLeft_ReturnValue() {
		return memory.read<float>(m_addr + 6616);
	}
	float GetCallFunc_GetBoxingInPlaceTurningElapsedTimeRight_ReturnValue() {
		return memory.read<float>(m_addr + 6620);
	}
	float GetCallFunc_GetBoxingInPlaceTurningDirectionBlendAlpha_ReturnValue() {
		return memory.read<float>(m_addr + 6624);
	}
	float GetCallFunc_GetBoxingInPlaceTurningBlendAlpha_ReturnValue() {
		return memory.read<float>(m_addr + 6628);
	}
	float GetCallFunc_SelectFloat_ReturnValue_67() {
		return memory.read<float>(m_addr + 6632);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_23() {
		return memory.read<float>(m_addr + 6636);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_19() {
		return memory.read<bool>(m_addr + 6640);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_40() {
		return memory.read<float>(m_addr + 6644);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_40() {
		return memory.read<float>(m_addr + 6648);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_40() {
		return memory.read<float>(m_addr + 6652);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_40() {
		return memory.read<float>(m_addr + 6656);
	}
	float GetCallFunc_SelectFloat_ReturnValue_68() {
		return memory.read<float>(m_addr + 6660);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_24() {
		return memory.read<float>(m_addr + 6664);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_81() {
		return memory.read<bool>(m_addr + 6668);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_72() {
		return memory.read<bool>(m_addr + 6669);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_125() {
		return memory.read<float>(m_addr + 6672);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_41() {
		return memory.read<float>(m_addr + 6676);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_41() {
		return memory.read<float>(m_addr + 6680);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_41() {
		return memory.read<float>(m_addr + 6684);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_41() {
		return memory.read<float>(m_addr + 6688);
	}
	float GetCallFunc_SelectFloat_ReturnValue_69() {
		return memory.read<float>(m_addr + 6692);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_25() {
		return memory.read<float>(m_addr + 6696);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 6700);
	}
	float GetCallFunc_GetPlayRateFromSpeed_ReturnValue_126() {
		return memory.read<float>(m_addr + 6704);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_4() {
		return memory.read<float>(m_addr + 6708);
	}
	float GetCallFunc_GetBoxingInPlaceTurningElapsedTimeLeft_ReturnValue_2() {
		return memory.read<float>(m_addr + 6712);
	}
	float GetCallFunc_GetBoxingInPlaceTurningElapsedTimeRight_ReturnValue_2() {
		return memory.read<float>(m_addr + 6716);
	}
	float GetCallFunc_GetBoxingInPlaceTurningDirectionBlendAlpha_ReturnValue_2() {
		return memory.read<float>(m_addr + 6720);
	}
	float GetCallFunc_GetBoxingInPlaceTurningBlendAlpha_ReturnValue_2() {
		return memory.read<float>(m_addr + 6724);
	}
	float GetCallFunc_SelectFloat_ReturnValue_70() {
		return memory.read<float>(m_addr + 6728);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_42() {
		return memory.read<float>(m_addr + 6732);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_26() {
		return memory.read<float>(m_addr + 6736);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_42() {
		return memory.read<float>(m_addr + 6740);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_42() {
		return memory.read<float>(m_addr + 6744);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_42() {
		return memory.read<float>(m_addr + 6748);
	}
	float GetCallFunc_SelectFloat_ReturnValue_71() {
		return memory.read<float>(m_addr + 6752);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_27() {
		return memory.read<float>(m_addr + 6756);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_73() {
		return memory.read<bool>(m_addr + 6760);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_43() {
		return memory.read<float>(m_addr + 6764);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_43() {
		return memory.read<float>(m_addr + 6768);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_43() {
		return memory.read<float>(m_addr + 6772);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_43() {
		return memory.read<float>(m_addr + 6776);
	}
	float GetCallFunc_SelectFloat_ReturnValue_72() {
		return memory.read<float>(m_addr + 6780);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_28() {
		return memory.read<float>(m_addr + 6784);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_74() {
		return memory.read<bool>(m_addr + 6788);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_82() {
		return memory.read<bool>(m_addr + 6789);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_75() {
		return memory.read<bool>(m_addr + 6790);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_83() {
		return memory.read<bool>(m_addr + 6791);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_84() {
		return memory.read<bool>(m_addr + 6792);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_43() {
		return memory.read<bool>(m_addr + 6793);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_44() {
		return memory.read<bool>(m_addr + 6794);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_76() {
		return memory.read<bool>(m_addr + 6795);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_44() {
		return memory.read<float>(m_addr + 6796);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_44() {
		return memory.read<float>(m_addr + 6800);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_44() {
		return memory.read<float>(m_addr + 6804);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_44() {
		return memory.read<float>(m_addr + 6808);
	}
	struct FVector GetCallFunc_BreakTransform_Location_84() {
		return memory.read<struct FVector>(m_addr + 6812);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_84() {
		return memory.read<struct FRotator>(m_addr + 6824);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_84() {
		return memory.read<struct FVector>(m_addr + 6836);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_45() {
		return memory.read<float>(m_addr + 6848);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_45() {
		return memory.read<float>(m_addr + 6852);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_45() {
		return memory.read<float>(m_addr + 6856);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_45() {
		return memory.read<float>(m_addr + 6860);
	}
	struct FVector GetCallFunc_BreakTransform_Location_85() {
		return memory.read<struct FVector>(m_addr + 6864);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_85() {
		return memory.read<struct FRotator>(m_addr + 6876);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_85() {
		return memory.read<struct FVector>(m_addr + 6888);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_46() {
		return memory.read<float>(m_addr + 6900);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_46() {
		return memory.read<float>(m_addr + 6904);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_46() {
		return memory.read<float>(m_addr + 6908);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_46() {
		return memory.read<float>(m_addr + 6912);
	}
	struct FVector GetCallFunc_BreakTransform_Location_86() {
		return memory.read<struct FVector>(m_addr + 6916);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_86() {
		return memory.read<struct FRotator>(m_addr + 6928);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_86() {
		return memory.read<struct FVector>(m_addr + 6940);
	}
	float GetCallFunc_SelectFloat_ReturnValue_73() {
		return memory.read<float>(m_addr + 6952);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_85() {
		return memory.read<bool>(m_addr + 6956);
	}
	float GetCallFunc_SelectFloat_ReturnValue_74() {
		return memory.read<float>(m_addr + 6960);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_47() {
		return memory.read<float>(m_addr + 6964);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_47() {
		return memory.read<float>(m_addr + 6968);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_47() {
		return memory.read<float>(m_addr + 6972);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_47() {
		return memory.read<float>(m_addr + 6976);
	}
	struct FVector GetCallFunc_BreakTransform_Location_87() {
		return memory.read<struct FVector>(m_addr + 6980);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_87() {
		return memory.read<struct FRotator>(m_addr + 6992);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_87() {
		return memory.read<struct FVector>(m_addr + 7004);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_20() {
		return memory.read<bool>(m_addr + 7016);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_29() {
		return memory.read<float>(m_addr + 7020);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_48() {
		return memory.read<float>(m_addr + 7024);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_48() {
		return memory.read<float>(m_addr + 7028);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_48() {
		return memory.read<float>(m_addr + 7032);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_48() {
		return memory.read<float>(m_addr + 7036);
	}
	struct FVector GetCallFunc_BreakTransform_Location_88() {
		return memory.read<struct FVector>(m_addr + 7040);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_88() {
		return memory.read<struct FRotator>(m_addr + 7052);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_88() {
		return memory.read<struct FVector>(m_addr + 7064);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_30() {
		return memory.read<float>(m_addr + 7076);
	}
	float GetCallFunc_GetBoxingInPlaceTurningBlendAlpha_ReturnValue_3() {
		return memory.read<float>(m_addr + 7080);
	}
	float GetCallFunc_GetBoxingInPlaceTurningDirectionBlendAlpha_ReturnValue_3() {
		return memory.read<float>(m_addr + 7084);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_31() {
		return memory.read<float>(m_addr + 7088);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_86() {
		return memory.read<bool>(m_addr + 7092);
	}
	float GetCallFunc_SelectFloat_ReturnValue_75() {
		return memory.read<float>(m_addr + 7096);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_49() {
		return memory.read<float>(m_addr + 7100);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_49() {
		return memory.read<float>(m_addr + 7104);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_49() {
		return memory.read<float>(m_addr + 7108);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_49() {
		return memory.read<float>(m_addr + 7112);
	}
	float GetCallFunc_GetBoxingInPlaceTurningElapsedTimeRight_ReturnValue_3() {
		return memory.read<float>(m_addr + 7116);
	}
	struct FVector GetCallFunc_BreakTransform_Location_89() {
		return memory.read<struct FVector>(m_addr + 7120);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_89() {
		return memory.read<struct FRotator>(m_addr + 7132);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_89() {
		return memory.read<struct FVector>(m_addr + 7144);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_42() {
		return memory.read<bool>(m_addr + 7156);
	}
	float GetCallFunc_GetBoxingInPlaceTurningElapsedTimeLeft_ReturnValue_3() {
		return memory.read<float>(m_addr + 7160);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_77() {
		return memory.read<bool>(m_addr + 7164);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_87() {
		return memory.read<bool>(m_addr + 7165);
	}
	float GetCallFunc_SelectFloat_ReturnValue_76() {
		return memory.read<float>(m_addr + 7168);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_50() {
		return memory.read<float>(m_addr + 7172);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_50() {
		return memory.read<float>(m_addr + 7176);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_50() {
		return memory.read<float>(m_addr + 7180);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_50() {
		return memory.read<float>(m_addr + 7184);
	}
	struct FVector GetCallFunc_BreakTransform_Location_90() {
		return memory.read<struct FVector>(m_addr + 7188);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_90() {
		return memory.read<struct FRotator>(m_addr + 7200);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_90() {
		return memory.read<struct FVector>(m_addr + 7212);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_88() {
		return memory.read<bool>(m_addr + 7224);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_78() {
		return memory.read<bool>(m_addr + 7225);
	}
	float GetCallFunc_SelectFloat_ReturnValue_77() {
		return memory.read<float>(m_addr + 7228);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_51() {
		return memory.read<float>(m_addr + 7232);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_51() {
		return memory.read<float>(m_addr + 7236);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_51() {
		return memory.read<float>(m_addr + 7240);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_51() {
		return memory.read<float>(m_addr + 7244);
	}
	float GetCallFunc_SelectFloat_ReturnValue_78() {
		return memory.read<float>(m_addr + 7248);
	}
	struct FVector GetCallFunc_BreakTransform_Location_91() {
		return memory.read<struct FVector>(m_addr + 7252);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_91() {
		return memory.read<struct FRotator>(m_addr + 7264);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_91() {
		return memory.read<struct FVector>(m_addr + 7276);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_89() {
		return memory.read<bool>(m_addr + 7288);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_7() {
		return memory.read<float>(m_addr + 7292);
	}
	float GetCallFunc_SelectFloat_ReturnValue_79() {
		return memory.read<float>(m_addr + 7296);
	}
	float GetCallFunc_Abs_ReturnValue_2() {
		return memory.read<float>(m_addr + 7300);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_32() {
		return memory.read<float>(m_addr + 7304);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_52() {
		return memory.read<float>(m_addr + 7308);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_52() {
		return memory.read<float>(m_addr + 7312);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_52() {
		return memory.read<float>(m_addr + 7316);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_52() {
		return memory.read<float>(m_addr + 7320);
	}
	struct FVector GetCallFunc_BreakTransform_Location_92() {
		return memory.read<struct FVector>(m_addr + 7324);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_92() {
		return memory.read<struct FRotator>(m_addr + 7336);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_92() {
		return memory.read<struct FVector>(m_addr + 7348);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_90() {
		return memory.read<bool>(m_addr + 7360);
	}
	float GetCallFunc_SelectFloat_ReturnValue_80() {
		return memory.read<float>(m_addr + 7364);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_53() {
		return memory.read<float>(m_addr + 7368);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_53() {
		return memory.read<float>(m_addr + 7372);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_53() {
		return memory.read<float>(m_addr + 7376);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_53() {
		return memory.read<float>(m_addr + 7380);
	}
	float GetCallFunc_GetBoxingInPlaceTurningBlendAlpha_ReturnValue_4() {
		return memory.read<float>(m_addr + 7384);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_33() {
		return memory.read<float>(m_addr + 7388);
	}
	struct FVector GetCallFunc_BreakTransform_Location_93() {
		return memory.read<struct FVector>(m_addr + 7392);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_93() {
		return memory.read<struct FRotator>(m_addr + 7404);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_93() {
		return memory.read<struct FVector>(m_addr + 7416);
	}
	float GetCallFunc_GetBoxingInPlaceTurningDirectionBlendAlpha_ReturnValue_4() {
		return memory.read<float>(m_addr + 7428);
	}
	float GetCallFunc_GetBoxingInPlaceTurningElapsedTimeRight_ReturnValue_4() {
		return memory.read<float>(m_addr + 7432);
	}
	float GetTemp_float_Variable_2() {
		return memory.read<float>(m_addr + 7436);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_91() {
		return memory.read<bool>(m_addr + 7440);
	}
	float GetCallFunc_SelectFloat_ReturnValue_81() {
		return memory.read<float>(m_addr + 7444);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_54() {
		return memory.read<float>(m_addr + 7448);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_54() {
		return memory.read<float>(m_addr + 7452);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_54() {
		return memory.read<float>(m_addr + 7456);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_54() {
		return memory.read<float>(m_addr + 7460);
	}
	float GetCallFunc_GetBoxingInPlaceTurningElapsedTimeLeft_ReturnValue_4() {
		return memory.read<float>(m_addr + 7464);
	}
	struct FVector GetCallFunc_BreakTransform_Location_94() {
		return memory.read<struct FVector>(m_addr + 7468);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_94() {
		return memory.read<struct FRotator>(m_addr + 7480);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_94() {
		return memory.read<struct FVector>(m_addr + 7492);
	}
	float GetTemp_float_Variable_3() {
		return memory.read<float>(m_addr + 7504);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_92() {
		return memory.read<bool>(m_addr + 7508);
	}
	float GetCallFunc_SelectFloat_ReturnValue_82() {
		return memory.read<float>(m_addr + 7512);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_55() {
		return memory.read<float>(m_addr + 7516);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_55() {
		return memory.read<float>(m_addr + 7520);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_55() {
		return memory.read<float>(m_addr + 7524);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_55() {
		return memory.read<float>(m_addr + 7528);
	}
	float GetTemp_float_Variable_4() {
		return memory.read<float>(m_addr + 7532);
	}
	struct FVector GetCallFunc_BreakTransform_Location_95() {
		return memory.read<struct FVector>(m_addr + 7536);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_95() {
		return memory.read<struct FRotator>(m_addr + 7548);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_95() {
		return memory.read<struct FVector>(m_addr + 7560);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeLeft_ReturnValue_56() {
		return memory.read<float>(m_addr + 7572);
	}
	float GetCallFunc_GetInPlaceTurningElapsedTimeRight_ReturnValue_56() {
		return memory.read<float>(m_addr + 7576);
	}
	float GetCallFunc_GetInPlaceTurningDirectionBlendAlpha_ReturnValue_56() {
		return memory.read<float>(m_addr + 7580);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_56() {
		return memory.read<float>(m_addr + 7584);
	}
	float GetTemp_float_Variable_5() {
		return memory.read<float>(m_addr + 7588);
	}
	struct FVector GetCallFunc_BreakTransform_Location_96() {
		return memory.read<struct FVector>(m_addr + 7592);
	}
	struct FRotator GetCallFunc_BreakTransform_Rotation_96() {
		return memory.read<struct FRotator>(m_addr + 7604);
	}
	struct FVector GetCallFunc_BreakTransform_Scale_96() {
		return memory.read<struct FVector>(m_addr + 7616);
	}
	float GetTemp_float_Variable_6() {
		return memory.read<float>(m_addr + 7628);
	}
	float GetCallFunc_Conv_BoolToFloat_ReturnValue() {
		return memory.read<float>(m_addr + 7632);
	}
	struct FRotator GetCallFunc_GetUpperEyelidRotationDelta_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 7636);
	}
	struct FRotator GetCallFunc_GetLowerEyelidRotationDelta_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 7648);
	}
	float GetTemp_float_Variable_7() {
		return memory.read<float>(m_addr + 7660);
	}
	float GetTemp_float_Variable_8() {
		return memory.read<float>(m_addr + 7664);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_34() {
		return memory.read<float>(m_addr + 7668);
	}
	float GetCallFunc_Abs_ReturnValue_3() {
		return memory.read<float>(m_addr + 7672);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_35() {
		return memory.read<float>(m_addr + 7676);
	}
	float GetCallFunc_FClamp_ReturnValue() {
		return memory.read<float>(m_addr + 7680);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 7684);
	}
	float GetCallFunc_FClamp_ReturnValue_2() {
		return memory.read<float>(m_addr + 7696);
	}
	bool GetCallFunc_NotEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 7700);
	}
	float GetTemp_float_Variable_9() {
		return memory.read<float>(m_addr + 7704);
	}
	float GetTemp_float_Variable_10() {
		return memory.read<float>(m_addr + 7708);
	}
	float GetTemp_float_Variable_11() {
		return memory.read<float>(m_addr + 7712);
	}
	float GetTemp_float_Variable_12() {
		return memory.read<float>(m_addr + 7716);
	}
	float GetCallFunc_SelectFloat_ReturnValue_83() {
		return memory.read<float>(m_addr + 7720);
	}
	float GetTemp_float_Variable_13() {
		return memory.read<float>(m_addr + 7724);
	}
	float GetTemp_float_Variable_14() {
		return memory.read<float>(m_addr + 7728);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_93() {
		return memory.read<bool>(m_addr + 7732);
	}
	float GetTemp_float_Variable_15() {
		return memory.read<float>(m_addr + 7736);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_43() {
		return memory.read<bool>(m_addr + 7740);
	}
	bool GetCallFunc_Less_FloatFloat_ReturnValue_12() {
		return memory.read<bool>(m_addr + 7741);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_94() {
		return memory.read<bool>(m_addr + 7742);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_45() {
		return memory.read<bool>(m_addr + 7743);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_46() {
		return memory.read<bool>(m_addr + 7744);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue() {
		return memory.read<bool>(m_addr + 7745);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_79() {
		return memory.read<bool>(m_addr + 7746);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_47() {
		return memory.read<bool>(m_addr + 7747);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7752);
		return struct UAnimSequenceBase(ptr_addr);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_48() {
		return memory.read<bool>(m_addr + 7760);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7768);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7776);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7784);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7792);
		return struct UAnimSequenceBase(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue() {
		return memory.read<bool>(m_addr + 7800);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_2() {
		return memory.read<bool>(m_addr + 7801);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 7808);
		return struct UAnimSequenceBase(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_3() {
		return memory.read<bool>(m_addr + 7816);
	}
	float GetTemp_float_Variable_16() {
		return memory.read<float>(m_addr + 7820);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_49() {
		return memory.read<bool>(m_addr + 7824);
	}
	float GetTemp_float_Variable_17() {
		return memory.read<float>(m_addr + 7828);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_8() {
		return memory.read<float>(m_addr + 7832);
	}
	float GetTemp_float_Variable_18() {
		return memory.read<float>(m_addr + 7836);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_8() {
		return memory.read<float>(m_addr + 7840);
	}
	float GetTemp_float_Variable_19() {
		return memory.read<float>(m_addr + 7844);
	}
	float GetTemp_float_Variable_20() {
		return memory.read<float>(m_addr + 7848);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_4() {
		return memory.read<bool>(m_addr + 7852);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_5() {
		return memory.read<bool>(m_addr + 7853);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_6() {
		return memory.read<bool>(m_addr + 7854);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_7() {
		return memory.read<bool>(m_addr + 7855);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_8() {
		return memory.read<bool>(m_addr + 7856);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_9() {
		return memory.read<bool>(m_addr + 7857);
	}
	float GetTemp_float_Variable_21() {
		return memory.read<float>(m_addr + 7860);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_10() {
		return memory.read<bool>(m_addr + 7864);
	}
	float GetTemp_float_Variable_22() {
		return memory.read<float>(m_addr + 7868);
	}
	float GetTemp_float_Variable_23() {
		return memory.read<float>(m_addr + 7872);
	}
	uint8_t  GetTemp_byte_Variable() {
		return memory.read<uint8_t >(m_addr + 7876);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_36() {
		return memory.read<float>(m_addr + 7880);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_9() {
		return memory.read<float>(m_addr + 7884);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_5() {
		return memory.read<float>(m_addr + 7888);
	}
	float GetCallFunc_FClamp_ReturnValue_3() {
		return memory.read<float>(m_addr + 7892);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_37() {
		return memory.read<float>(m_addr + 7896);
	}
	float GetCallFunc_Add_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 7900);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_38() {
		return memory.read<float>(m_addr + 7904);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_10() {
		return memory.read<float>(m_addr + 7908);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_11() {
		return memory.read<bool>(m_addr + 7912);
	}
	float GetCallFunc_GetCurveValue_ReturnValue_4() {
		return memory.read<float>(m_addr + 7916);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_21() {
		return memory.read<bool>(m_addr + 7920);
	}
	float GetCallFunc_GetCurveValue_ReturnValue_5() {
		return memory.read<float>(m_addr + 7924);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 7928);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_44() {
		return memory.read<bool>(m_addr + 7940);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_80() {
		return memory.read<bool>(m_addr + 7941);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_9() {
		return memory.read<float>(m_addr + 7944);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_22() {
		return memory.read<bool>(m_addr + 7948);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_39() {
		return memory.read<float>(m_addr + 7952);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_81() {
		return memory.read<bool>(m_addr + 7956);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_50() {
		return memory.read<bool>(m_addr + 7957);
	}
	float GetTemp_float_Variable_24() {
		return memory.read<float>(m_addr + 7960);
	}
	float GetTemp_float_Variable_25() {
		return memory.read<float>(m_addr + 7964);
	}
	float GetTemp_float_Variable_26() {
		return memory.read<float>(m_addr + 7968);
	}
	float GetTemp_float_Variable_27() {
		return memory.read<float>(m_addr + 7972);
	}
	float GetTemp_float_Variable_28() {
		return memory.read<float>(m_addr + 7976);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_10() {
		return memory.read<float>(m_addr + 7980);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_11() {
		return memory.read<float>(m_addr + 7984);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_12() {
		return memory.read<bool>(m_addr + 7988);
	}
	float GetTemp_float_Variable_29() {
		return memory.read<float>(m_addr + 7992);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_13() {
		return memory.read<bool>(m_addr + 7996);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_14() {
		return memory.read<bool>(m_addr + 7997);
	}
	float GetTemp_float_Variable_30() {
		return memory.read<float>(m_addr + 8000);
	}
	float GetTemp_float_Variable_31() {
		return memory.read<float>(m_addr + 8004);
	}
	float GetTemp_float_Variable_32() {
		return memory.read<float>(m_addr + 8008);
	}
	float GetTemp_float_Variable_33() {
		return memory.read<float>(m_addr + 8012);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_15() {
		return memory.read<bool>(m_addr + 8016);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_16() {
		return memory.read<bool>(m_addr + 8017);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_17() {
		return memory.read<bool>(m_addr + 8018);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_18() {
		return memory.read<bool>(m_addr + 8019);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_19() {
		return memory.read<bool>(m_addr + 8020);
	}
	float GetTemp_float_Variable_34() {
		return memory.read<float>(m_addr + 8024);
	}
	struct FTransform GetCallFunc_Conv_VectorToTransform_ReturnValue() {
		return memory.read<struct FTransform>(m_addr + 8032);
	}
	struct FTransform GetCallFunc_Conv_VectorToTransform_ReturnValue_2() {
		return memory.read<struct FTransform>(m_addr + 8080);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8128);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8136);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8144);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetBowArmsShakeAnimationOnGameThread_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8152);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float GetTemp_float_Variable_35() {
		return memory.read<float>(m_addr + 8160);
	}
	struct UAnimSequenceBase GetCallFunc_GetBowArmsShakeAnimationOnGameThread_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8168);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetBowArmsShakeAnimationOnGameThread_ReturnValue_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8176);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float GetTemp_float_Variable_36() {
		return memory.read<float>(m_addr + 8184);
	}
	float GetTemp_float_Variable_37() {
		return memory.read<float>(m_addr + 8188);
	}
	float GetTemp_float_Variable_38() {
		return memory.read<float>(m_addr + 8192);
	}
	float GetTemp_float_Variable_39() {
		return memory.read<float>(m_addr + 8196);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_40() {
		return memory.read<float>(m_addr + 8200);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_41() {
		return memory.read<float>(m_addr + 8204);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 8208);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_2() {
		return memory.read<struct FRotator>(m_addr + 8220);
	}
	float GetTemp_float_Variable_40() {
		return memory.read<float>(m_addr + 8232);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_42() {
		return memory.read<float>(m_addr + 8236);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_3() {
		return memory.read<struct FVector>(m_addr + 8240);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_43() {
		return memory.read<float>(m_addr + 8252);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_4() {
		return memory.read<struct FVector>(m_addr + 8256);
	}
	float GetTemp_float_Variable_41() {
		return memory.read<float>(m_addr + 8268);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8272);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8280);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8288);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_11() {
		return memory.read<float>(m_addr + 8296);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_13() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8304);
		return struct UAnimSequenceBase(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_20() {
		return memory.read<bool>(m_addr + 8312);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_14() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8320);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_15() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8328);
		return struct UAnimSequenceBase(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_21() {
		return memory.read<bool>(m_addr + 8336);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_22() {
		return memory.read<bool>(m_addr + 8337);
	}
	struct UBlendSpace GetCallFunc_GetWeaponAimOffsetOnGameThread_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8344);
		return struct UBlendSpace(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_23() {
		return memory.read<bool>(m_addr + 8352);
	}
	float GetTemp_float_Variable_42() {
		return memory.read<float>(m_addr + 8356);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_95() {
		return memory.read<bool>(m_addr + 8360);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_12() {
		return memory.read<float>(m_addr + 8364);
	}
	bool GetCallFunc_Greater_FloatFloat_ReturnValue_23() {
		return memory.read<bool>(m_addr + 8368);
	}
	float GetTemp_float_Variable_43() {
		return memory.read<float>(m_addr + 8372);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_82() {
		return memory.read<bool>(m_addr + 8376);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_45() {
		return memory.read<bool>(m_addr + 8377);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_5() {
		return memory.read<struct FVector>(m_addr + 8380);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_6() {
		return memory.read<float>(m_addr + 8392);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_6() {
		return memory.read<struct FVector>(m_addr + 8396);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_16() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8408);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_17() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8416);
		return struct UAnimSequenceBase(ptr_addr);
	}
	struct UAnimSequenceBase GetCallFunc_GetWeaponAnimationPoseOnWorkerThread_ReturnValue_18() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8424);
		return struct UAnimSequenceBase(ptr_addr);
	}
	float GetTemp_float_Variable_44() {
		return memory.read<float>(m_addr + 8432);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_83() {
		return memory.read<bool>(m_addr + 8436);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_24() {
		return memory.read<bool>(m_addr + 8437);
	}
	float GetTemp_float_Variable_45() {
		return memory.read<float>(m_addr + 8440);
	}
	uint8_t  GetTemp_byte_Variable_2() {
		return memory.read<uint8_t >(m_addr + 8444);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_25() {
		return memory.read<bool>(m_addr + 8445);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_26() {
		return memory.read<bool>(m_addr + 8446);
	}
	struct UBlendSpace GetCallFunc_GetWeaponAimOffsetOnGameThread_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8448);
		return struct UBlendSpace(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_27() {
		return memory.read<bool>(m_addr + 8456);
	}
	float GetTemp_float_Variable_46() {
		return memory.read<float>(m_addr + 8460);
	}
	struct UBlendSpace GetCallFunc_GetWeaponAimOffsetOnGameThread_ReturnValue_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8464);
		return struct UBlendSpace(ptr_addr);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_28() {
		return memory.read<bool>(m_addr + 8472);
	}
	float GetTemp_float_Variable_47() {
		return memory.read<float>(m_addr + 8476);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_44() {
		return memory.read<float>(m_addr + 8480);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_3() {
		return memory.read<struct FRotator>(m_addr + 8484);
	}
	float GetTemp_float_Variable_48() {
		return memory.read<float>(m_addr + 8496);
	}
	float GetTemp_float_Variable_49() {
		return memory.read<float>(m_addr + 8500);
	}
	float GetTemp_float_Variable_50() {
		return memory.read<float>(m_addr + 8504);
	}
	float GetTemp_float_Variable_51() {
		return memory.read<float>(m_addr + 8508);
	}
	float GetTemp_float_Variable_52() {
		return memory.read<float>(m_addr + 8512);
	}
	float GetTemp_float_Variable_53() {
		return memory.read<float>(m_addr + 8516);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_51() {
		return memory.read<bool>(m_addr + 8520);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_46() {
		return memory.read<bool>(m_addr + 8521);
	}
	uint8_t  GetTemp_byte_Variable_3() {
		return memory.read<uint8_t >(m_addr + 8522);
	}
	float GetTemp_float_Variable_54() {
		return memory.read<float>(m_addr + 8524);
	}
	float GetCallFunc_GetStandLookBlendAlpha_ReturnValue() {
		return memory.read<float>(m_addr + 8528);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_52() {
		return memory.read<bool>(m_addr + 8532);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_47() {
		return memory.read<bool>(m_addr + 8533);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_96() {
		return memory.read<bool>(m_addr + 8534);
	}
	float GetTemp_float_Variable_55() {
		return memory.read<float>(m_addr + 8536);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_97() {
		return memory.read<bool>(m_addr + 8540);
	}
	float GetTemp_float_Variable_56() {
		return memory.read<float>(m_addr + 8544);
	}
	float GetTemp_float_Variable_57() {
		return memory.read<float>(m_addr + 8548);
	}
	float GetTemp_float_Variable_58() {
		return memory.read<float>(m_addr + 8552);
	}
	float GetTemp_float_Variable_59() {
		return memory.read<float>(m_addr + 8556);
	}
	float GetTemp_float_Variable_60() {
		return memory.read<float>(m_addr + 8560);
	}
	float GetCallFunc_GetInstanceStateWeight_ReturnValue_13() {
		return memory.read<float>(m_addr + 8564);
	}
	float GetCallFunc_GetInPlaceTurningBlendAlpha_ReturnValue_57() {
		return memory.read<float>(m_addr + 8568);
	}
	bool GetCallFunc_NotEqual_ByteByte_ReturnValue_5() {
		return memory.read<bool>(m_addr + 8572);
	}
	float GetCallFunc_Subtract_FloatFloat_ReturnValue_12() {
		return memory.read<float>(m_addr + 8576);
	}
	float GetCallFunc_SelectFloat_ReturnValue_84() {
		return memory.read<float>(m_addr + 8580);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_45() {
		return memory.read<float>(m_addr + 8584);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue_2() {
		return memory.read<bool>(m_addr + 8588);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_53() {
		return memory.read<bool>(m_addr + 8589);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_84() {
		return memory.read<bool>(m_addr + 8590);
	}
	float GetTemp_float_Variable_61() {
		return memory.read<float>(m_addr + 8592);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_4() {
		return memory.read<struct FRotator>(m_addr + 8596);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_5() {
		return memory.read<struct FRotator>(m_addr + 8608);
	}
	float GetTemp_float_Variable_62() {
		return memory.read<float>(m_addr + 8620);
	}
	float GetCallFunc_Conv_BoolToFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 8624);
	}
	float GetTemp_float_Variable_63() {
		return memory.read<float>(m_addr + 8628);
	}
	uint8_t  GetTemp_byte_Variable_4() {
		return memory.read<uint8_t >(m_addr + 8632);
	}
	float GetTemp_float_Variable_64() {
		return memory.read<float>(m_addr + 8636);
	}
	uint8_t  GetTemp_byte_Variable_5() {
		return memory.read<uint8_t >(m_addr + 8640);
	}
	float GetTemp_float_Variable_65() {
		return memory.read<float>(m_addr + 8644);
	}
	uint8_t  GetTemp_byte_Variable_6() {
		return memory.read<uint8_t >(m_addr + 8648);
	}
	float GetTemp_float_Variable_66() {
		return memory.read<float>(m_addr + 8652);
	}
	float GetK2Node_Select_Default() {
		return memory.read<float>(m_addr + 8656);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_6() {
		return memory.read<struct FRotator>(m_addr + 8660);
	}
	uint8_t  GetTemp_byte_Variable_7() {
		return memory.read<uint8_t >(m_addr + 8672);
	}
	float GetK2Node_Select_Default_2() {
		return memory.read<float>(m_addr + 8676);
	}
	float GetTemp_float_Variable_67() {
		return memory.read<float>(m_addr + 8680);
	}
	float GetTemp_float_Variable_68() {
		return memory.read<float>(m_addr + 8684);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_29() {
		return memory.read<bool>(m_addr + 8688);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_30() {
		return memory.read<bool>(m_addr + 8689);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_31() {
		return memory.read<bool>(m_addr + 8690);
	}
	bool GetCallFunc_NotEqual_ObjectObject_ReturnValue_32() {
		return memory.read<bool>(m_addr + 8691);
	}
	float GetTemp_float_Variable_69() {
		return memory.read<float>(m_addr + 8692);
	}
	float GetTemp_float_Variable_70() {
		return memory.read<float>(m_addr + 8696);
	}
	float GetTemp_float_Variable_71() {
		return memory.read<float>(m_addr + 8700);
	}
	float GetTemp_float_Variable_72() {
		return memory.read<float>(m_addr + 8704);
	}
	float GetTemp_float_Variable_73() {
		return memory.read<float>(m_addr + 8708);
	}
	float GetTemp_float_Variable_74() {
		return memory.read<float>(m_addr + 8712);
	}
	float GetTemp_float_Variable_75() {
		return memory.read<float>(m_addr + 8716);
	}
	float GetTemp_float_Variable_76() {
		return memory.read<float>(m_addr + 8720);
	}
	bool GetCallFunc_GreaterEqual_FloatFloat_ReturnValue_3() {
		return memory.read<bool>(m_addr + 8724);
	}
	float GetTemp_float_Variable_77() {
		return memory.read<float>(m_addr + 8728);
	}
	float GetK2Node_Select_Default_3() {
		return memory.read<float>(m_addr + 8732);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_7() {
		return memory.read<float>(m_addr + 8736);
	}
	float GetCallFunc_FClamp_ReturnValue_4() {
		return memory.read<float>(m_addr + 8740);
	}
	struct FTransform GetCallFunc_MakeTransform_ReturnValue() {
		return memory.read<struct FTransform>(m_addr + 8752);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_46() {
		return memory.read<float>(m_addr + 8800);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_7() {
		return memory.read<struct FVector>(m_addr + 8804);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_47() {
		return memory.read<float>(m_addr + 8816);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_48() {
		return memory.read<float>(m_addr + 8820);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_49() {
		return memory.read<float>(m_addr + 8824);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_50() {
		return memory.read<float>(m_addr + 8828);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_7() {
		return memory.read<struct FRotator>(m_addr + 8832);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_51() {
		return memory.read<float>(m_addr + 8844);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_8() {
		return memory.read<struct FRotator>(m_addr + 8848);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_52() {
		return memory.read<float>(m_addr + 8860);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_9() {
		return memory.read<struct FRotator>(m_addr + 8864);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_53() {
		return memory.read<float>(m_addr + 8876);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_10() {
		return memory.read<struct FRotator>(m_addr + 8880);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_54() {
		return memory.read<float>(m_addr + 8892);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue_11() {
		return memory.read<struct FRotator>(m_addr + 8896);
	}
	float GetCallFunc_SelectFloat_ReturnValue_85() {
		return memory.read<float>(m_addr + 8908);
	}
	float GetCallFunc_SelectFloat_ReturnValue_86() {
		return memory.read<float>(m_addr + 8912);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_55() {
		return memory.read<float>(m_addr + 8916);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_56() {
		return memory.read<float>(m_addr + 8920);
	}
	float GetTemp_float_Variable_78() {
		return memory.read<float>(m_addr + 8924);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_8() {
		return memory.read<struct FVector>(m_addr + 8928);
	}
	struct FVector GetCallFunc_SelectVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 8940);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_48() {
		return memory.read<bool>(m_addr + 8952);
	}
	struct FTransform GetCallFunc_MakeTransform_ReturnValue_2() {
		return memory.read<struct FTransform>(m_addr + 8960);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_85() {
		return memory.read<bool>(m_addr + 9008);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_49() {
		return memory.read<bool>(m_addr + 9009);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_98() {
		return memory.read<bool>(m_addr + 9010);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_86() {
		return memory.read<bool>(m_addr + 9011);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_99() {
		return memory.read<bool>(m_addr + 9012);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_54() {
		return memory.read<bool>(m_addr + 9013);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_100() {
		return memory.read<bool>(m_addr + 9014);
	}
	bool GetCallFunc_EqualEqual_ByteByte_ReturnValue_101() {
		return memory.read<bool>(m_addr + 9015);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_55() {
		return memory.read<bool>(m_addr + 9016);
	}
	float GetTemp_float_Variable_79() {
		return memory.read<float>(m_addr + 9020);
	}
	bool GetCallFunc_BooleanOR_ReturnValue_56() {
		return memory.read<bool>(m_addr + 9024);
	}
	float GetTemp_float_Variable_80() {
		return memory.read<float>(m_addr + 9028);
	}
	uint8_t  GetTemp_byte_Variable_8() {
		return memory.read<uint8_t >(m_addr + 9032);
	}
	float GetTemp_float_Variable_81() {
		return memory.read<float>(m_addr + 9036);
	}
	float GetTemp_float_Variable_82() {
		return memory.read<float>(m_addr + 9040);
	}
	struct FTransform GetCallFunc_Conv_VectorToTransform_ReturnValue_3() {
		return memory.read<struct FTransform>(m_addr + 9056);
	}
	float GetCallFunc_GetCurveValue_ReturnValue_6() {
		return memory.read<float>(m_addr + 9104);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue_8() {
		return memory.read<float>(m_addr + 9108);
	}
	float GetCallFunc_GetKnownCurveValueOnWorkerThread_ReturnValue_9() {
		return memory.read<float>(m_addr + 9112);
	}
	float GetCallFunc_GetCurveValue_ReturnValue_7() {
		return memory.read<float>(m_addr + 9116);
	}
	float GetCallFunc_FMax_ReturnValue() {
		return memory.read<float>(m_addr + 9120);
	}
	float GetTemp_float_Variable_83() {
		return memory.read<float>(m_addr + 9124);
	}
	float GetTemp_float_Variable_84() {
		return memory.read<float>(m_addr + 9128);
	}
	float GetK2Node_Event_DeltaTimeX() {
		return memory.read<float>(m_addr + 9132);
	}
	float GetTemp_float_Variable_85() {
		return memory.read<float>(m_addr + 9136);
	}
	struct APawn GetCallFunc_TryGetPawnOwner_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 9144);
		return struct APawn(ptr_addr);
	}
	bool GetCallFunc_IsValid_ReturnValue() {
		return memory.read<bool>(m_addr + 9152);
	}
	bool GetCallFunc_IsValid_ReturnValue_2() {
		return memory.read<bool>(m_addr + 9153);
	}
	struct ABP_Prisoner_C GetK2Node_DynamicCast_AsBP_Prisoner() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 9160);
		return struct ABP_Prisoner_C(ptr_addr);
	}
	bool GetK2Node_DynamicCast_bSuccess() {
		return memory.read<bool>(m_addr + 9168);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_57() {
		return memory.read<float>(m_addr + 9172);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_58() {
		return memory.read<float>(m_addr + 9176);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_9() {
		return memory.read<struct FVector>(m_addr + 9180);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue_10() {
		return memory.read<struct FVector>(m_addr + 9192);
	}
	float GetTemp_float_Variable_86() {
		return memory.read<float>(m_addr + 9204);
	}
	struct FTransform GetCallFunc_GetSocketTransform_ReturnValue() {
		return memory.read<struct FTransform>(m_addr + 9216);
	}
	float GetTemp_float_Variable_87() {
		return memory.read<float>(m_addr + 9264);
	}
	bool GetCallFunc_ShouldSkipStandWalkOrJogOrRunStart_Result() {
		return memory.read<bool>(m_addr + 9268);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_59() {
		return memory.read<float>(m_addr + 9272);
	}
	float GetTemp_float_Variable_88() {
		return memory.read<float>(m_addr + 9276);
	}
	struct FVector GetCallFunc_GetActorUpVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 9280);
	}
	struct FVector GetCallFunc_Multiply_VectorFloat_ReturnValue_4() {
		return memory.read<struct FVector>(m_addr + 9292);
	}
	float GetK2Node_Select_Default_4() {
		return memory.read<float>(m_addr + 9304);
	}
	struct FVector GetCallFunc_GetActorRightVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 9308);
	}
	struct FVector GetCallFunc_Multiply_VectorFloat_ReturnValue_5() {
		return memory.read<struct FVector>(m_addr + 9320);
	}
	struct FTransform GetCallFunc_GetTransform_ReturnValue() {
		return memory.read<struct FTransform>(m_addr + 9344);
	}
	struct USkeletalMeshComponent GetCallFunc_GetPenisSkeletalMeshComponent_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 9392);
		return struct USkeletalMeshComponent(ptr_addr);
	}
	struct FVector GetCallFunc_TransformLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 9400);
	}
	bool GetCallFunc_IsValid_ReturnValue_3() {
		return memory.read<bool>(m_addr + 9412);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 9416);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 9428);
	}
	struct FVector GetCallFunc_GetSocketLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 9440);
	}
	struct FVector GetCallFunc_GetSocketLocation_ReturnValue_2() {
		return memory.read<struct FVector>(m_addr + 9452);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue_3() {
		return memory.read<struct FVector>(m_addr + 9464);
	}
	struct FVector GetCallFunc_GetSocketLocation_ReturnValue_3() {
		return memory.read<struct FVector>(m_addr + 9476);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue_4() {
		return memory.read<struct FVector>(m_addr + 9488);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue_5() {
		return memory.read<struct FVector>(m_addr + 9500);
	}
	struct FVector GetCallFunc_Divide_VectorFloat_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 9512);
	}
	bool GetCallFunc_IsDedicatedServer_ReturnValue() {
		return memory.read<bool>(m_addr + 9524);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue_50() {
		return memory.read<bool>(m_addr + 9525);
	}
	bool GetCallFunc_BooleanAND_ReturnValue_87() {
		return memory.read<bool>(m_addr + 9526);
	}
	float GetCallFunc_GetPenisSize_ReturnValue() {
		return memory.read<float>(m_addr + 9528);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_8() {
		return memory.read<float>(m_addr + 9532);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_9() {
		return memory.read<float>(m_addr + 9536);
	}
	struct FRotator GetCallFunc_RLerp_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 9540);
	}
	struct FVector GetCallFunc_VLerp_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 9552);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue_6() {
		return memory.read<struct FVector>(m_addr + 9564);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlueprintUpdateAnimation
{
public:
	FBlueprintUpdateAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDeltaTimeX() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimGraph
{
public:
	FAnimGraph(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetAnimGraph() {
		return memory.read<struct FPoseLink>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVehicleLayer
{
public:
	FVehicleLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPoseLink GetVehicleLayer() {
		return memory.read<struct FPoseLink>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};