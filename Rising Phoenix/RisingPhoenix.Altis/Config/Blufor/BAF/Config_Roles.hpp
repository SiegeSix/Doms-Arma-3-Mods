class Dynamic_Roles {
	#include "Config_Officer.hpp"

	#include "Config_Rifleman.hpp"
	#include "Config_Medic.hpp"
	#include "Config_Engineer.hpp"
	#include "Config_TeamLeader.hpp"
	#include "Config_SquadLeader.hpp"

	#include "Config_Pilot.hpp"
	#include "Config_UAVOp.hpp"

	#include "Config_Crewman.hpp"
	#include "Config_Commander.hpp"
};

class Common_Arsenal {
	items[] = {
		"ACE_adenosine", "ACE_epinephrine", "ACE_morphine",
		"ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot",
		"ACE_bloodIV", "ACE_bloodIV_250", "ACE_bloodIV_500",
		"ACE_plasmaIV", "ACE_plasmaIV_250", "ACE_plasmaIV_500",
		"ACE_salineIV", "ACE_salineIV_250", "ACE_salineIV_500",
		"ACE_tourniquet", "ACE_splint",
		"ACE_surgicalKit",

		"ACE_Chemlight_HiBlue", "ACE_Chemlight_HiGreen", "ACE_Chemlight_HiRed", "ACE_Chemlight_HiWhite", "ACE_Chemlight_HiYellow", "ACE_Chemlight_UltraHiOrange",
		"Chemlight_blue", "Chemlight_green", "Chemlight_red", "Chemlight_yellow", "acc_flashlight_pistol", "ACE_Flashlight_XL50", "ACE_Flashlight_MX991", "ACE_Flashlight_KSF1",
		"ACE_Chemlight_IR", "ACE_Chemlight_Orange", "ACE_Chemlight_White", "ACE_Chemlight_Shield", "ACE_Chemlight_Shield_Blue", "ACE_Chemlight_Shield_Green", "ACE_Chemlight_Shield_Orange", "ACE_Chemlight_Shield_Red", "ACE_Chemlight_Shield_White", "ACE_Chemlight_Shield_Yellow",
		"ACE_HandFlare_Green", "ACE_HandFlare_Red", "ACE_HandFlare_White", "ACE_HandFlare_Yellow", "ACE_IR_Strobe_Item",
		"SmokeShell", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "SmokeShellRed", "SmokeShellYellow",
		"HandGrenade", "MiniGrenade",

		"ACE_RangeTable_82mm", "ACE_artilleryTable", "ACE_RangeCard", "ACE_Tripod", "ACE_ATragMX", "ACE_SpareBarrel", "ACE_SpottingScope", "ACE_Kestrel4500",

		"ItemMap","ItemCompass", "ItemWatch", "ItemGPS", "ACE_Altimeter", "ACE_MapTools", "ACE_CableTie", "ACE_EarPlugs", "ACE_microDAGR", "ACE_DAGR",

		"ToolKit", "ACE_DefusalKit","ACE_wirecutter", "ACE_EntrenchingTool", "ACE_Clacker", "ACE_M26_Clacker", "MineDetector", "ACE_SpraypaintRed", "ACE_SpraypaintGreen", "ACE_SpraypaintBlue", "ACE_SpraypaintBlack",
		"ACE_rope12", "ACE_rope15", "ACE_rope18", "ACE_rope27", "ACE_rope36",

		"B_UavTerminal", "ACE_UAVBattery", "ACE_VectorDay", "ACE_Vector", "Laserdesignator", "Laserbatteries",

		"U_B_Wetsuit", "U_B_survival_uniform","V_RebreatherB", "G_B_Diving", "G_Diving",
		"U_B_PilotCoveralls",
		
		"V_Rangemaster_belt",

		"B_Carryall_cbr", "B_Kitbag_cbr", "B_AssaultPack_cbr", "B_LegStrapBag_coyote_F", "B_Parachute", "ACE_NonSteerableParachute",
		
		"UK3CB_BAF_L115A3",
		"UK3CB_BAF_L115A3_BL",
		"UK3CB_BAF_L115A3_DE",
		"UK3CB_BAF_L128A1",
		"UK3CB_BAF_L129A1",
		"UK3CB_BAF_L22",
		"UK3CB_BAF_L22A2",
		"UK3CB_BAF_L7A2",
		"UK3CB_BAF_L85A2",
		"UK3CB_BAF_L85A2_EMAG",
		"UK3CB_BAF_L85A2_RIS",
		"UK3CB_BAF_L85A2_RIS_G",
		"UK3CB_BAF_L85A2_RIS_D",
		"UK3CB_BAF_L85A2_UGL",
		"UK3CB_BAF_L85A2_UGL_HWS",
		"UK3CB_BAF_L85A3",
		"UK3CB_BAF_L85A3_UGL",
		"UK3CB_BAF_L86A2",
		"UK3CB_BAF_L86A3",
		"UK3CB_BAF_L135A1",
		"launch_B_Titan_F",
		"launch_NLAW_F",
		"rhs_weap_M136",
		"rhs_weap_M136_hedp",
		"rhs_weap_M136_hp",
		"rhsusf_weap_glock17g4",
		"UK3CB_BAF_L105A1",
		"UK3CB_BAF_L9A1",
		"ACE_VMH3",
		"UK3CB_BAF_L119A1",
		"UK3CB_BAF_L119A1_CQB",
		"UK3CB_BAF_L119A1_UKUGL",
		"UK3CB_BAF_L119A1_FG",
		"uk3cb_baf_l85a2_ris_g_grippod_g",
		"UK3CB_BAF_L110_762",
		"UK3CB_BAF_L110A1",
		"UK3CB_BAF_L110A2",
		"UK3CB_BAF_L110A2RIS",
		"UK3CB_BAF_L110A3",
		"UK3CB_BAF_L91A1",
		"UK3CB_BAF_L92A1",
		"UK3CB_BAF_L105A2",
		"UK3CB_BAF_L117A2",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_L118A1_Covert",
		"UK3CB_BAF_L118A1_Covert_BL",
		"UK3CB_L118A1_Covert_DE",

		"UK3CB_BAF_762_L42_A1_10Rnd",
		"UK3CB_BAF_762_L42_A1_10Rnd_T",
		"ACE_5Rnd_127x99_Mag",
		"ACE_5Rnd_127x99_AMAX_Mag",
		"ACE_5Rnd_127x99_API_Mag",
		"UK3CB_BAF_L118A1_Covert_DE",
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd_T",
		"UK3CB_BAF_338_5Rnd",
		"UK3CB_BAF_338_5Rnd_Tracer",
		"rhsusf_mag_10Rnd_STD_50BMG_M33",
		"UK3CB_BAF_12G_Pellets",
		"UK3CB_BAF_12G_Slugs",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"UK3CB_BAF_762_L42A1_20Rnd",
		"UK3CB_BAF_762_L42A1_20Rnd_T",
		"UK3CB_BAF_762_200Rnd_T",
		"UK3CB_BAF_762_200Rnd",
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd",
		"UK3CB_BAF_556_100Rnd",
		"UK3CB_BAF_556_100Rnd_T",
		"UK3CB_BAF_556_200Rnd",
		"UK3CB_BAF_556_200Rnd_T",
		"Titan_AA",
		"rhs_mag_M397_HET",
		"rhs_mag_M433_HEDP",
		"rhs_mag_M441_HE",
		"rhs_mag_m576",
		"rhs_mag_m661_green",
		"rhs_mag_m662_red",
		"rhs_mag_m713_Red",
		"rhs_mag_m715_Green",
		"ACE_HuntIR_M203",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_15Rnd",
		"rhsusf_mag_17rnd_9x19_jhp",

		"rhs_mag_an_m8hc",
		"rhs_mag_an_m14_th3",
		"rhs_mag_m18_green",
		"rhs_mag_m18_purple",
		"rhs_mag_m18_red",
		"rhs_mag_m18_yellow",
		"rhs_mag_m67",
		"rhsusf_m112_mag",
		"rhsusf_m112x4_mag",
		"DemoCharge_Remote_Mag",
		"ClaymoreDirectionalMine_Remote_Mag",
		"rhs_mag_mine_ptm1",
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd_T",
		"SatchelCharge_Remote_Mag",
		"rhs_mag_mk84",
		"rhs_mag_M585_white",
		"ACE_40mm_Flare_white",
		"ACE_40mm_Flare_green",
		"ACE_Flare_red",
		"ACE_40mm_Flare_ir",
		"rhs_mag_m714_White",
		"rhs_mag_m716_yellow",
		"UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell",
		"UK3CB_BAF_1Rnd_Smoke_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell",

		"UK3CB_BAF_U_CombatUniform_MTP_TShirt_RM",
		"rhsusf_shemagh_grn",
		"rhsusf_shemagh2_grn",
		"rhsusf_shemagh_white",
		"rhsusf_shemagh2_white",
		"rhsusf_shemagh_gogg_grn",
		"rhsusf_shemagh2_gogg_grn",
		"rhsusf_shemagh_gogg_white",
		"rhsusf_shemagh2_gogg_white",
		"rksl_optic_lds_pip",
		"TFAR_rf7800str",
		"TFAR_anprc152",
		"TFAR_microdagr",
		"RKSL_optic_EOT552",
		"U_B_pilotCoveralls",
		"H_PilotHelmetFighter_B",

		"UK3CB_BAF_TA648_308",
		"UK3CB_BAF_SUSAT",
		"rhsusf_acc_ACOG_RMR",
		"rhsusf_acc_su230",
		"rhsusf_acc_su230_c",
		"rhsusf_acc_su230_mrds",
		"rhsusf_acc_su230_mrds_c",
		"RKSL_optic_LDS",
		"UK3CB_BAF_SpecterLDS",
		"UK3CB_BAF_MaxiKite",
		"UK3CB_BAF_Kite",
		"RKSL_optic_PMII_525",
		"rhsusf_acc_premier_anpvs27",
		"rhsusf_acc_premier",
		"rhsusf_acc_premier_mrds",
		"UK3CB_BAF_LLM_Flashlight_Black",
		"UK3CB_BAF_LLM_Flashlight_Tan",
		"UK3CB_BAF_LLM_IR_Black",
		"UK3CB_BAF_LLM_IR_Tan",
		"UK3CB_BAF_Silencer_L115A3",
		"UK3CB_BAF_SFFH",
		"UK3CB_underbarrel_acc_fgrip_bipod",
		"UK3CB_underbarrel_acc_fgrip",
		"UK3CB_underbarrel_acc_grippod",
		"UK3CB_underbarrel_acc_grippod_d",
		"UK3CB_underbarrel_acc_grippod_g",
		"UK3CB_underbarrel_acc_grippod_t",
		"UK3CB_underbarrel_acc_bipod",
		"rhsusf_acc_saw_bipod",
		"uk3cb_baf_flashlight_l105a1",
		"uk3cb_baf_flashlight_l131a1",
		"uk3cb_baf_laser_l131a1",
		"uk3cb_baf_l105a1_llm_ir_g",
		"uk3cb_baf_l105a1_llm_ir_r",
		"uk3cb_baf_l105a1_llm_vl_g",
		"uk3cb_baf_l105a1_llm_fl_g",
		"uk3cb_baf_l105a1_llm_vl_r",
		"uk3cb_baf_l105a1_llm_fl_r",
		"ace_muzzle_mzls_smg_02",
		"rhsusf_acc_omega9k",
		"muzzle_snds_l",
		"uk3cb_baf_silencer_l105a1",
		"uk3cb_baf_silencer_l110",
		"uk3cb_baf_silencer_l91a1",
		"uk3cb_baf_silencer_l85",

		"UK3CB_BAF_H_Beret_AAC",
		"UK3CB_BAF_H_Beret_AAC_PRR",
		"UK3CB_BAF_H_Beret_AAC_Over",
		"UK3CB_BAF_H_Beret_Mer",
		"UK3CB_BAF_H_Beret_Mer_PRR",
		"UK3CB_BAF_H_Beret_Mer_PRR_Over",
		"UK3CB_BAF_H_Boonie_MTP",
		"UK3CB_BAF_H_Boonie_MTP_PRR",
		"UK3CB_BAF_H_CrewHelmet_ESS_A",
		"UK3CB_BAF_H_CrewHelmet_A",
		"UK3CB_BAF_H_Earphone",
		"UK3CB_BAF_H_Mk7_Camo_A",
		"UK3CB_BAF_H_Mk7_Camo_B",
		"UK3CB_BAF_H_Mk7_Camo_C",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"UK3CB_BAF_H_Mk7_Camo_E",
		"UK3CB_BAF_H_Mk7_Camo_F",
		"UK3CB_BAF_H_Mk7_Camo_ESS_A",
		"UK3CB_BAF_H_Mk7_Camo_ESS_B",
		"UK3CB_BAF_H_Mk7_Camo_ESS_C",
		"UK3CB_BAF_H_Mk7_Camo_ESS_D",
		"UK3CB_BAF_H_Mk7_Net_A",
		"UK3CB_BAF_H_Mk7_Net_B",
		"UK3CB_BAF_H_Mk7_Net_C",
		"UK3CB_BAF_H_Mk7_Net_D",
		"UK3CB_BAF_H_Mk7_Net_ESS_A",
		"UK3CB_BAF_H_Mk7_Net_ESS_B",
		"UK3CB_BAF_H_Mk7_Net_ESS_C",
		"UK3CB_BAF_H_Mk7_Net_ESS_D",
		"UK3CB_BAF_H_Mk7_Net_CESS_A",
		"UK3CB_BAF_H_Mk7_Net_CESS_B",
		"UK3CB_BAF_H_Mk7_Net_CESS_C",
		"UK3CB_BAF_H_Mk7_Net_CESS_D",
		"UK3CB_BAF_H_Mk7_Scrim_A",
		"UK3CB_BAF_H_Mk7_Scrim_B",
		"UK3CB_BAF_H_Mk7_Scrim_C",
		"UK3CB_BAF_H_Mk7_Scrim_D",
		"UK3CB_BAF_H_Mk7_Scrim_E",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"UK3CB_BAF_H_Mk7_Scrim_ESS_A",
		"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
		"UK3CB_BAF_H_Mk7_Scrim_ESS_C",
		"UK3CB_BAF_H_Mk7_Camo_CESS_A",
		"UK3CB_BAF_H_Mk7_Camo_CESS_B",
		"UK3CB_BAF_H_Mk7_Camo_CESS_C",
		"UK3CB_BAF_H_Mk7_Camo_CESS_D",
		"rhsusf_hgu56p_green",
		"rhsusf_hgu56p_mask_green",
		"rhsusf_hgu56p_visor_green",
		"rhsusf_hgu56p_visor_mask_green",
		"UK3CB_BAF_H_Wool_Hat",
		"UK3CB_BAF_H_Headset_PRR",
		"H_Cap_khaki_specops_UK",
		"UK3CB_BAF_U_Smock_MTP",
		"UK3CB_BAF_U_RolledUniform_MTP",
		"UK3CB_BAF_U_HeliPilotCoveralls_Army",
		"UK3CB_BAF_U_CombatUniform_MTP",
		"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",
		"UK3CB_BAF_U_CombatUniform_MTP_TShirt",
		"U_B_Wetsuit",
		"UK3CB_BAF_V_PLCE_Webbing_MTP",
		"UK3CB_BAF_V_Pilot_A",
		"UK3CB_BAF_V_Osprey_Lite",
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_V_Osprey_SL_C",
		"UK3CB_BAF_V_Osprey_SL_B",
		"UK3CB_BAF_V_Osprey_SL_A",
		"UK3CB_BAF_V_Osprey_Rifleman_F",
		"UK3CB_BAF_V_Osprey_Rifleman_E",
		"UK3CB_BAF_V_Osprey_Rifleman_D",
		"UK3CB_BAF_V_Osprey_Rifleman_C",
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_V_Osprey_Rifleman_A",
		"UK3CB_BAF_V_Osprey_MG_B",
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_V_Osprey_Medic_D",
		"UK3CB_BAF_V_Osprey_Medic_C",
		"UK3CB_BAF_V_Osprey_Medic_B",
		"UK3CB_BAF_V_Osprey_Medic_A",
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_V_Osprey_Holster",
		"UK3CB_BAF_V_Osprey_Grenadier_B",
		"UK3CB_BAF_V_Osprey_Grenadier_A",
		"UK3CB_BAF_V_Osprey_Belt_A",
		"UK3CB_BAF_V_Osprey",
		"V_LegStrapBag_coyote_F",
		"V_RebreatherB",

		"UK3CB_BAF_H_PilotHelmetHeli_A",
		"UK3CB_BAF_G_Tactical_Yellow",
		"UK3CB_BAF_G_Tactical_Orange",
		"UK3CB_BAF_G_Tactical_Grey",
		"UK3CB_BAF_G_Tactical_Clear",
		"UK3CB_BAF_G_Tactical_Black",
		"G_Squares",
		"G_Spectacles",
		"G_Diving",
		"rhsusf_oakley_goggles_ylw",
		"rhsusf_oakley_goggles_clr",
		"rhsusf_oakley_goggles_blk",
		"rhsusf_shemagh2_gogg_tan",
		"rhsusf_shemagh_gogg_tan",
		"rhsusf_shemagh2_gogg_od",
		"rhsusf_shemagh_gogg_od",
		"rhsusf_shemagh2_tan",
		"rhsusf_shemagh_tan",
		"rhsusf_shemagh2_od",
		"rhsusf_shemagh_od",
		"G_Lowprofile",
		"G_Bandanna_khk",
		"G_Bandanna_blk",
		"UK3CB_BAF_HMNVS",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"UK3CB_BAF_Javelin_CLU",
		"ACE_VectorDay",
		"ACE_Vector",
		"ACE_Yardage450",
		"ACE_MX2A",
		"ACE_HuntIR_monitor",
		"acc_pointer_ir",
		"ace_acc_pointer_red",
		"ace_acc_pointer_green_ir",
		"ace_acc_pointer_green",

		"UK3CB_BAF_B_Bergen_MTP_Medic_H_A",
		"UK3CB_BAF_B_Bergen_MTP_Medic_H_B",
		"UK3CB_BAF_B_Bergen_MTP_Medic_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Medic_L_B",
		"UK3CB_BAF_B_Bergen_MTP_PointMan_H_A",
		"UK3CB_BAF_B_Bergen_MTP_PointMan_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Radio_H_A",
		"UK3CB_BAF_B_Bergen_MTP_Radio_H_B",
		"UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Radio_L_B",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A",
		"UK3CB_BAF_B_Bergen_MTP_Sapper_H_A",
		"UK3CB_BAF_B_Bergen_MTP_Sapper_L_A",
		"UK3CB_BAF_B_Bergen_MTP_SL_H_A",
		"UK3CB_BAF_B_Bergen_MTP_SL_L_A",
		"ace_gunbag_Tan",
		"B_LegStrapBag_coyote_F",
		"UK3CB_BAF_B_Kitbag_MTP",
		"B_RadioBag_01_mtp_F",
		"ACE_TacticalLadder_Pack",
		"B_Parachute",
		"B_AssaultPack_cbr",
		"UK3CB_BAF_B_Bergen_MTP_JTAC_H_A",
		"UK3CB_BAF_B_Bergen_MTP_JTAC_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A",
		"B_Kitbag_cbr",
		"TFAR_rt1523g_rhs",
		"TFAR_anarc210",
		"TFAR_rt1523g_big_rhs"
	};
};