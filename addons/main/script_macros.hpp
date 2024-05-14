#include "\z\mti\addons\main\script_macros.hpp"

// Arsenal Macros
#define ARSENALTYPE_NONE 0
#define ARSENALTYPE_COMMON 1
#define ARSENALTYPE_ASSAULT 2
#define ARSENALTYPE_HEAVYWEAPONS 3
#define ARSENALTYPE_RECON 4

// Equipment Macros
#define GUNIT(var1) EGVAR(unit,var1)
#define QGUNIT(var1) QUOTE(GUNIT(var1))

#define GUNIFORM(var1) EGVAR(uniform,var1)
#define QGUNIFORM(var1) QUOTE(GUNIFORM(var1))

#define GHELMET(var1) EGVAR(helmet,var1)
#define QGHELMET(var1) QUOTE(GHELMET(var1))

#define GVEST(var1) EGVAR(vest,var1)
#define QGVEST(var1) QUOTE(GVEST(var1))

#define GNVG(var1) EGVAR(nvg,var1)
#define QGNVG(var1) QUOTE(GNVG(var1))

#define GFACEWEAR(var1) EGVAR(facewear,var1)
#define QGFACEWEAR(var1) QUOTE(GFACEWEAR(var1))

// Weapon Macros
#define GWEAPON(var1) DOUBLES(PREFIX,var1)
#define QGWEAPON(var1) QUOTE(GWEAPON(var1))

#define GMAGAZINE(var1) TRIPLES(PREFIX,var1,mag)
#define QGMAGAZINE(var1) QUOTE(GMAGAZINE(var1))

#define GMAGWELL(var1) TRIPLES(PREFIX,var1,magwell)
#define QGMAGWELL(var1) QUOTE(GMAGWELL(var1))

#define GAMMO(var1) TRIPLES(PREFIX,var1,ammo)
#define QGAMMO(var1) QUOTE(GAMMO(var1))

#define MACRO_GL_MAGAZINES \
"UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "MTI_UGL_EmergencyFlare", "UGL_FlareCIR_F", \
"MTI_40mm_mag_Smoke","MTI_40mm_mag_Smoke_3rnd","MTI_40mm_mag_SmokeRed","MTI_40mm_mag_SmokeRed_3rnd","MTI_40mm_mag_SmokeGreen", \
"MTI_40mm_mag_SmokeGreen_3rnd","MTI_40mm_mag_SmokeYellow","MTI_40mm_mag_SmokeYellow_3rnd","MTI_40mm_mag_SmokePurple", \
"MTI_40mm_mag_SmokePurple_3rnd","MTI_40mm_mag_SmokeBlue","MTI_40mm_mag_SmokeBlue_3rnd","MTI_40mm_mag_SmokeOrange","MTI_40mm_mag_SmokeOrange_3rnd", \
"MTI_40mm_mag_SmokeLightBlue","MTI_40mm_mag_SmokeLightBlue_3rnd","MTI_40mm_mag_SmokePink","MTI_40mm_mag_SmokePink_3rnd", \
"MTI_40mm_mag_SmokeBlack","MTI_40mm_mag_SmokeBlack_3rnd", \
"MTI_40mm_mag_Smoke_impact","MTI_40mm_mag_Smoke_impact_3rnd","MTI_40mm_mag_SmokeRed_impact","MTI_40mm_mag_SmokeRed_impact_3rnd", \
"MTI_40mm_mag_SmokeGreen_impact","MTI_40mm_mag_SmokeGreen_impact_3rnd","MTI_40mm_mag_SmokeYellow_impact","MTI_40mm_mag_SmokeYellow_impact_3rnd", \
"MTI_40mm_mag_SmokePurple_impact","MTI_40mm_mag_SmokePurple_impact_3rnd","MTI_40mm_mag_SmokeBlue_impact","MTI_40mm_mag_SmokeBlue_impact_3rnd", \
"MTI_40mm_mag_SmokeOrange_impact","MTI_40mm_mag_SmokeOrange_impact_3rnd","MTI_40mm_mag_SmokeLightBlue_impact","MTI_40mm_mag_SmokeLightBlue_impact_3rnd", \
"MTI_40mm_mag_SmokePink_impact","MTI_40mm_mag_SmokePink_impact_3rnd", "MTI_40mm_mag_SmokeBlack_impact","MTI_40mm_mag_SmokeBlack_impact_3rnd", \
"ACE_HuntIR_M203", "MTI_40mm_mag_HE", "MTI_40mm_mag_mine", \
"MTI_40mm_mag_groundmarker_green", "MTI_40mm_mag_groundmarker_red", "MTI_40mm_mag_groundmarker_yellow", "MTI_40mm_mag_groundmarker_ir", \
"MTI_40mm_mag_cluster","MTI_40mm_mag_cluster_airburst","MTI_40mm_mag_canister", "MTI_40mm_mag_canister_lgbt", "MTI_40mm_mag_canister_trans", \
"MTI_40mm_mag_canister_white","MTI_40mm_mag_shrapnel","MTI_MED_UGL_Mag"
