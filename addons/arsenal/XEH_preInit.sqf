#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.inc.sqf"

[QGVAR(initLocal), {
	params ["_object","_preset"];
	if (isServer) then { [_object, _preset] call mti_common_fnc_initArsenal; }; // todo: update this when arsenal addon is migrated in mti
}] call CBA_fnc_addEventHandler;

ADDON = true;
