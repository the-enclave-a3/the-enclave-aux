#define COMPONENT common
#define COMPONENT_BEAUTIFIED Common
#include "\z\tea\addons\main\script_mod.hpp"

#ifndef RELEASE_BUILD
    // #define DEBUG_MODE_FULL
    #define DISABLE_COMPILE_CACHE
    // #define ENABLE_PERFORMANCE_COUNTERS
#endif

#ifdef DEBUG_ENABLED_COMMON
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_COMMON
    #define DEBUG_SETTINGS DEBUG_SETTINGS_COMMON
#endif

#include "\z\tea\addons\main\script_macros.hpp"
