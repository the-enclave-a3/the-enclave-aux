#include "..\script_component.hpp"

/*
Function: enc_arsenal_fnc_getType

Description:
    Returns the type of the given arsenal object.

Arguments:
    _object - Object to return arsenal type of

Return Value:
    arsenalType

Example:
    (begin example)
        [] call enc_arsenal_fnc_getType;
    (end)

Author:
	Mokka
*/

params ["_object"];

private _typeCfg = GET_NUMBER((configOf _object) >> QGVAR(type),0);
private _typeVar = _object getVariable QGVAR(type);

// setVariable overwrites config type
[_typeVar,_typeCfg] select (isNil "_typeVar")
