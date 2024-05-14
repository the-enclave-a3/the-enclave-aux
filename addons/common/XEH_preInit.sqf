#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.inc.sqf"

if (isServer) then {
	GVAR(haranRadioSecret) = (str (30 + round (random 470))) + ".5";
	publicVariable QGVAR(haranRadioSecret);
};

ADDON = true;
