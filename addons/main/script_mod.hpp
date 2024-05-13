// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX enc

#define AUTHOR QUOTE(The Enclave)
#define MOD_NAME_BEAUTIFIED QUOTE(The Enclave - Aux)

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.06
#define REQUIRED_CBA_VERSION {3,15,6}
#define REQUIRED_ACE_VERSION {3,14,0,63}
#define REQUIRED_MTI_VERSION {1,7,4,0}
#define REQUIRED_TGF_VERSION {1,3,0,0}

#include "script_debug.hpp"

#ifndef RELEASE_BUILD
//    #define DEBUG_ENABLED_ARSENAL
    #define DEBUG_ENABLED_COMMON
#endif

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(The Enclave - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(The Enclave - COMPONENT)
#endif
