#include "\z\ace\addons\main\script_macros.hpp"

// custom macros go here...
// PATHTOF defines for referencing JLTS uniforms/characters
#define PATHTOF_JLTSE(var1) \MRC\JLTS\characters\var1
#define QPATHTOF_JLTSE(var1) QUOTE(PATHTOF_JLTSE(var1))

// For stuff that draws from core mod
#define PATHTOF_JLTSC(var1) \MRC\JLTS\Core_mod\var1
#define QPATHTOF_JLTSC(var1) QUOTE(PATHTOF_JLTSC(var1))

// For stuff that draws from JLTS weapons
#define PATHTOF_JLTSW(var1) \MRC\JLTS\weapons\var1
#define QPATHTOF_JLTSW(var1) QUOTE(PATHTOF_JLTSW(var1))

// PATHTOF defines for Legion stuff
#define PATHTOF_LS(var1) \ls_armor_bluefor\var1
#define QPATHTOF_LS(var1) QUOTE(PATHTOF_LS(var1))

#define PATHTOF_SWLB(var1) \SWLB_clones_spec\var1
#define QPATHTOF_SWLB(var1) QUOTE(PATHTOF_SWLB(var1))

#define PATHTOF_COMP(var1) PATHTOF2_SYS(PREFIX,COMPONENT,var1)
#define QPATHTOF_COMP(var1) QUOTE(PATHTOF_COMP(var1))

#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
#define GET_TEXT(config,default) (if (isText (config)) then {getText (config)} else {default})
#define GET_ARRAY(config,default) (if (isArray (config)) then {getArray (config)} else {default})

#define GMAG(var1) TRIPLES(PREFIX,mag,var1)
#define QGMAG(var1) QUOTE(GMAG(var1))

#define GAMMO(var1) TRIPLES(PREFIX,ammo,var1)
#define QGAMMO(var1) QUOTE(GAMMO(var1))

// Macros for Arsenal Whitelists
#define MACRO_WHITELIST(ITEM) class _xx_##ITEM { \
    name = #ITEM; \
    allowed = 1; \
}

#define MACRO_BLACKLIST(ITEM) class _xx_##ITEM { \
    name = #ITEM; \
    allowed = 0; \
}

// Macros for Fortify Presets
#define MACRO_FORTIFY_ADD(CLASSNAME,COST,LIMIT) class _xx_##CLASSNAME { \
    name = #CLASSNAME; \
    cost = COST; \
    limit = LIMIT; \
}

// Macros for Groundholders
#define MACRO_GH_PREAMBLE class Item_Base_F; \
class Vest_Base_F; \
class Headgear_Base_F; \
class Weapon_Base_F

#define MACRO_GH_ITEM(CLASSNAME,NAME) class CLASSNAME##_GH: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    vehicleClass = "Items"; \
    class TransportItems { \
        MACRO_ADDITEM(CLASSNAME,1); \
    }; \
}

#define MACRO_GH_UNIFORM(CLASSNAME,NAME) class CLASSNAME##_GH: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    vehicleClass = "ItemsUniforms"; \
	 model = "\A3\Weapons_f\dummyweapon.p3d"; \
    class TransportItems { \
        MACRO_ADDITEM(CLASSNAME,1); \
    }; \
}

#define MACRO_GH_VEST(CLASSNAME,NAME) class CLASSNAME##_GH: Vest_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    vehicleClass = "ItemsVests"; \
    class TransportItems { \
        MACRO_ADDITEM(CLASSNAME,1); \
    }; \
}

#define MACRO_GH_HEADGEAR(CLASSNAME,NAME) class CLASSNAME##_GH: Headgear_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    vehicleClass = "ItemsHeadgear"; \
    class TransportItems { \
        MACRO_ADDITEM(CLASSNAME,1); \
    }; \
}

#define MACRO_GH_WEAPON(CLASSNAME,MAG,NAME) class CLASSNAME##_GH: Weapon_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    author = AUTHOR; \
    displayName = NAME; \
    class TransportWeapons { \
        MACRO_ADDWEAPON(CLASSNAME,1); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(MAG,1); \
    }; \
}

// updated TRACEs for feedback with systemChat
#ifdef RELEASE_BUILD
	#define CHAT_SYS(LEVEL,MESSAGE) /* disabled */
#else
	#define CHAT_SYS(LEVEL,MESSAGE) systemChat LOG_SYS_FORMAT(LEVEL,MESSAGE)
#endif

#define CHAT_SYS_FILELINENUMBERS(LEVEL,MESSAGE) CHAT_SYS(LEVEL,format [ARR_4('%1 %2:%3',MESSAGE,__FILE__,__LINE__ + 1)])

#ifdef DEBUG_MODE_FULL
	#define TRACE_CHAT_1(MESSAGE,A) TRACE_1((MESSAGE),A); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_1(str diag_frameNo + ' ' + (MESSAGE),A))
	#define TRACE_CHAT_2(MESSAGE,A,B) TRACE_2((MESSAGE),A,B); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_2(str diag_frameNo + ' ' + (MESSAGE),A,B))
	#define TRACE_CHAT_3(MESSAGE,A,B,C) TRACE_3((MESSAGE),A,B,C); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_3(str diag_frameNo + ' ' + (MESSAGE),A,B,C))
	#define TRACE_CHAT_4(MESSAGE,A,B,C,D) TRACE_4((MESSAGE),A,B,C,D); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_4(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D))
	#define TRACE_CHAT_5(MESSAGE,A,B,C,D,E) TRACE_5((MESSAGE),A,B,C,D,E); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_5(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E))
	#define TRACE_CHAT_6(MESSAGE,A,B,C,D,E,F) TRACE_6((MESSAGE),A,B,C,D,E,F); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_6(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F))
	#define TRACE_CHAT_7(MESSAGE,A,B,C,D,E,F,G) TRACE_7((MESSAGE),A,B,C,D,E,F,G); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_7(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G))
	#define TRACE_CHAT_8(MESSAGE,A,B,C,D,E,F,G,H) TRACE_8((MESSAGE),A,B,C,D,E,F,G,H); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_8(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G,H))
	#define TRACE_CHAT_9(MESSAGE,A,B,C,D,E,F,G,H,I) TRACE_9((MESSAGE),A,B,C,D,E,F,G,H,I); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_9(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G,H,I))
	#define TRACE_CHAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) TRACE_10((MESSAGE),A,B,C,D,E,F,G,H,I,J); CHAT_SYS_FILELINENUMBERS('TRACE',PFORMAT_10(str diag_frameNo + ' ' + (MESSAGE),A,B,C,D,E,F,G,H,I,J))
#else
	#define TRACE_CHAT_1(MESSAGE,A) /* disabled */
	#define TRACE_CHAT_2(MESSAGE,A,B) /* disabled */
	#define TRACE_CHAT_3(MESSAGE,A,B,C) /* disabled */
	#define TRACE_CHAT_4(MESSAGE,A,B,C,D) /* disabled */
	#define TRACE_CHAT_5(MESSAGE,A,B,C,D,E) /* disabled */
	#define TRACE_CHAT_6(MESSAGE,A,B,C,D,E,F) /* disabled */
	#define TRACE_CHAT_7(MESSAGE,A,B,C,D,E,F,G) /* disabled */
	#define TRACE_CHAT_8(MESSAGE,A,B,C,D,E,F,G,H) /* disabled */
	#define TRACE_CHAT_9(MESSAGE,A,B,C,D,E,F,G,H,I) /* disabled */
	#define TRACE_CHAT_10(MESSAGE,A,B,C,D,E,F,G,H,I,J) /* disabled */
#endif

// weapon things
#define ZOOM_FACTOR(var1) 0.25/var1
#define RPM(var1) 60/var1

// AFM macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// Rail Attachments
#define RAILATTACHMENT_LIST "acc_flashlight",\
"acc_pointer_IR",\
"MTI_flashlight_noModel",\
"MTI_pointerIR_noModel",\
"ACE_SPIR",\
"ACE_SPIR_Narrow",\
"ACE_SPIR_Medium",\
"ACE_DBAL_A3_Green",\
"ACE_DBAL_A3_Green_VP",\
"ACE_DBAL_A3_Green_II",\
"ACE_DBAL_A3_Green_IP",\
"ACE_DBAL_A3_Red",\
"ACE_DBAL_A3_Red_VP",\
"ACE_DBAL_A3_Red_II",\
"ACE_DBAL_A3_Red_IP"