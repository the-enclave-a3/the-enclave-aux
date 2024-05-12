#include "..\script_component.hpp"

/*
Function: enc_arsenal_fnc_perms

Description:
    Sets perms on given player, depending on type of arsenal.

Arguments:
    _unit - Unit to set perms on
    _object - Arsenal object

Return Value:
    None

Example:
    (begin example)
        [] call enc_arsenal_fnc_perms;
    (end)

Author:
	Mokka
*/

params ["_unit","_object"];

private _type = [_object] call FUNC(getType);

// not implemented, because not needed right now
