#include "\z\mti\addons\main\script_macros.hpp"

// Arsenal Macros
#define ARSENALTYPE_NONE 0
#define ARSENALTYPE_COMMON 1
#define ARSENALTYPE_ASSAULT 2
#define ARSENALTYPE_HEAVYWEAPONS 3
#define ARSENALTYPE_RECON 4

// Equipment Macros
#include "script_macros_equipment.hpp"

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

#define MACRO_BCSEWPN(var1) \
class DOUBLES(var1,bcsewpn): var1 { \
    enableAttack = 0; \
    type = 4; \
    scope = 1; \
    scopeArsenal = 2; \
    handAnim[] = {}; \
    class Fake: Mode_MTI_Fake{}; \
    modes[] = {"Fake"}; \
    class Fake_GL: mti_weapons_bc_Fake_GL {}; \
    muzzles[] = {"this","Fake_GL"}; \
    baseWeapon = ""; \
    hiddenSelections[] = {"zasleh"}; \
    hiddenSelectionsTextures[] = {""}; \
}

// Groundholder Macros
#undef MACRO_GH_ITEM
#undef MACRO_GH_UNIFORM
#undef MACRO_GH_VEST
#undef MACRO_GH_HEADGEAR
#undef MACRO_GH_WEAPON

#define MACRO_GH_ITEM(var_classname,var_name) class var_classname##_GH: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = QUOTE([TEA] var_name); \
    vehicleClass = "Items"; \
    class TransportItems { \
        MACRO_ADDITEM(var_classname,1); \
    }; \
}

#define MACRO_GH_UNIFORM(var_classname,var_name) class var_classname##_GH: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = QUOTE([TEA] var_name); \
    vehicleClass = "ItemsUniforms"; \
	 model = "\A3\Weapons_f\dummyweapon.p3d"; \
    class TransportItems { \
        MACRO_ADDITEM(var_classname,1); \
    }; \
}

#define MACRO_GH_VEST(var_classname,var_name) class var_classname##_GH: Vest_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = QUOTE([TEA] var_name); \
    vehicleClass = "ItemsVests"; \
    class TransportItems { \
        MACRO_ADDITEM(var_classname,1); \
    }; \
}

#define MACRO_GH_HEADGEAR(var_classname,var_name) class var_classname##_GH: Headgear_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = QUOTE([TEA] var_name); \
    vehicleClass = "ItemsHeadgear"; \
    class TransportItems { \
        MACRO_ADDITEM(var_classname,1); \
    }; \
}

#define MACRO_GH_WEAPON(var_classname,MAG,var_name) class var_classname##_GH: Weapon_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = QUOTE([TEA] var_name); \
    class TransportWeapons { \
        MACRO_ADDWEAPON(var_classname,1); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(MAG,1); \
    }; \
}

