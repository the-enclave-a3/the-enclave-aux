#include "..\script_component.hpp"

/*
Function: enc_common_fnc_weaponGHHelper

Description:
    Helper function to generate GH entries

Arguments:
    None

Return Value:
    gh entries

Example:
    (begin example)
        [] call enc_common_fnc_weaponGHHelper;
    (end)

Author:
	Mokka
*/

private _allClasses = (QUOTE(((getNumber (_x >> 'scope')) == 2) && (QUOTE(QUOTE(DOUBLES(PREFIX,weapons))) in (configSourceAddonList _x))) configClasses (configFile >> "CfgWeapons"));

private _ret = _allClasses apply {[configName _x, getText (_x >> "displayName")]};

_ret
