#include "..\script_component.hpp"

/*
Function: tea_common_fnc_initPlayer

Description:
    Initializes player units with correct group names and radio presets

Arguments:
    _unit - Player to init
    _groupVal - Unit's Group

Return Value:
    None

Example:
    (begin example)
        [player,1] call tea_common_fnc_initPlayer;
    (end)

Author:
	Mokka
*/

params ["_unit", "_groupVal"];

if (is3DEN) exitWith {};
if (not (local _unit)) exitWith {};
if (_groupVal == 0) exitWith {};

private _groupData = [_groupVal] call {
    params ["_groupVal"];
    // Haran
    if (_groupVal == 1) exitWith { [[[GVAR(haranRadioSecret),"310","320","330","340","350","360","333"], ["30","32","35","39","39","39","39","39","39"]], "Haran"] };
    // Advisor
    if (_groupVal == 2) exitWith { [[["399","300","300","300","300","300","300","333"], ["30","32","35","39","39","39","39","39","39"]], "Advisor"] };
    // Clan1
    if (_groupVal == 3) exitWith { [[["310","310","310.1","310.2","300","300","300","333"], ["30","32","35","39","39","39","39","39","39"]], "Clan 1"] };
    // Clan2
    if (_groupVal == 4) exitWith { [[["320","320","320.1","320.2","300","300","300","333"], ["30","32","35","39","39","39","39","39","39"]], "Clan 2"] };
    // Clan3
    if (_groupVal == 5) exitWith { [[["330","330","330.1","330.2","300","300","300","333"], ["30","32","35","39","39","39","39","39","39"]], "Clan 3"] };
    // Clan4
    if (_groupVal == 6) exitWith { [[["340","340","340.1","340.2","300","300","300","333"], ["30","32","35","39","39","39","39","39","39"]], "Clan 4"] };
    // Clan5
    if (_groupVal == 7) exitWith { [[["350","350","350.1","350.2","300","300","300","333"], ["30","32","35","39","39","39","39","39","39"]], "Clan 5"] };
    // Clan6
    if (_groupVal == 8) exitWith { [[["360","360","360.1","360.2","300","300","300","333"], ["30","32","35","39","39","39","39","39","39"]], "Clan 6"] };
    // Mandoad
    if (_groupVal == 9) exitWith { [[["300","300","300.1","300.2","300","300","300","333"], ["30","32","35","39","39","39","39","39","39"]], "Mando'ad"] };
    // Guest
    if (_groupVal == 10) exitWith { [[["100","100","100","100","100","100","100","333"], ["39","39","39","39","39","39","39","39","39"]], "Guest"] };
};

_groupData params ["_freqs","_name"];
_freqs params ["_sr","_lr"];

_unit setVariable ["TFAR_freq_sr", _sr, true];
_unit setVariable ["TFAR_freq_lr", _lr, true];

_unit setVariable [QGVAR(group), _groupVal, true];

// set callsign
private _group = group _unit;

if ((leader _group) isEqualTo _unit) then {
	[_group, _name] call CBA_fnc_setCallsign;
};
