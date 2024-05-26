#include "..\script_component.hpp"

/*
Function: tea_common_fnc_weaponGHHelper

Description:
    Helper function to generate GH entries

Arguments:
    _addon - Addon to grab classes from

Return Value:
    gh entries

Example:
    (begin example)
        ["weapons"] call tea_common_fnc_weaponGHHelper;
    (end)

Author:
	Mokka
*/

params ["_addon"];

private _allClasses = (format [QUOTE(((getNumber (_x >> 'scope')) == 2) && ('%1_%2' in (configSourceAddonList _x))),QUOTE(PREFIX),_addon] configClasses (configFile >> "CfgWeapons"));
_allClasses append (format [QUOTE(((getNumber (_x >> 'scope')) == 2) && ('%1_%2' in (configSourceAddonList _x))),QUOTE(PREFIX),_addon] configClasses (configFile >> "CfgGlasses"));

private _ret = _allClasses apply {[configName _x, getText (_x >> "displayName")]};

_ret
