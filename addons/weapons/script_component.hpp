#define COMPONENT weapons
#define COMPONENT_BEAUTIFIED Weapons
#include "\z\enc\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WEAPONS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WEAPONS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WEAPONS
#endif

#include "\z\mti\addons\weapons_core\config_lists.hpp"
#include "\z\enc\addons\main\script_macros.hpp"

#ifdef RAILATTACHMENT_LIST
    #undef RAILATTACHMENT_LIST
#endif
#define RAILATTACHMENT_LIST "MTI_flashlight_noModel","MTI_pointerIR_noModel"

#define MACRO_COWS_DEFS \
displayName = "Optics Slot";\
iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";\
iconPinpoint = "Bottom";\
iconPosition[] = {0.5,0.35};\
iconScale = 0.2;\
linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";\
scope = 0

#define MACRO_POINTER_DEFS \
displayName = "Pointer Slot";\
iconPicture = "\a3\weapons_f\Data\ui\attachment_side";\
iconPinpoint = "Center";\
iconPosition[] = {0.35, 0.5};\
iconScale = 0.25;\
linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";\
scope = 0
