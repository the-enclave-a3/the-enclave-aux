#include "\z\mti\addons\main\script_macros.hpp"

#define ARSENALTYPE_NONE 0
#define ARSENALTYPE_COMMON 1
#define ARSENALTYPE_ASSAULT 2
#define ARSENALTYPE_HEAVYWEAPONS 3
#define ARSENALTYPE_RECON 4

#define GWEAPON(var1) DOUBLES(PREFIX,var1)
#define QGWEAPON(var1) QUOTE(GWEAPON(var1))

#define GMAGAZINE(var1) TRIPLES(PREFIX,var1,mag)
#define QGMAGAZINE(var1) QUOTE(GMAGAZINE(var1))

#define GMAGWELL(var1) TRIPLES(PREFIX,var1,magwell)
#define QGMAGWELL(var1) QUOTE(GMAGWELL(var1))

#define GAMMO(var1) TRIPLES(PREFIX,var1,ammo)
#define QGAMMO(var1) QUOTE(GAMMO(var1))
