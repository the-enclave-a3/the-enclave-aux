#include "..\script_component.hpp"

/*
Function: enc_arsenal_fnc_init

Description:
    Handles initialization of an arsenal object.

Arguments:
    _object - Object to turn into an arsenal

Return Value:
    None

Example:
    (begin example)
        [] call enc_arsenal_fnc_init;
    (end)

Author:
	Mokka
*/

params ["_object"];
TRACE_1("params",_object);

if (is3DEN || !(local _object)) exitWith {};

_type = [_object] call FUNC(getType);
if (_type <= 0) exitWith {};

// resolve type number to config class name
private _configs = (format ["(getNumber (_x >> 'type')) isEqualTo %1",_type]) configClasses (configFile >> "mti_arsenal_whitelists");
if ((count _configs) == 0) exitWith { ERROR_1("arsenal of type %1 could not be found in config",_type) };
if ((count _configs) > 1) then { WARNING_1("arsenal of type %1 was found multiple times in config, using first occurence",_type) };

private _typeName = configName (_configs select 0);

private _ehID = [QGVAR(initLocal),[_object, _typeName]] call CBA_fnc_globalEventJIP;
[_ehID,_object] call CBA_fnc_removeGlobalEventJIP;
