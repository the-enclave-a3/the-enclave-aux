#include "..\script_component.hpp"

/*
Function: tea_common_fnc_grabModClasses

Description:
    Returns all of the mod's classes in a sorted hashMap by type.

Arguments:
    None

Return Value:
    classes in hashMap with keys [Weapons, Item, NVG, Glasses, Headgear, Vest, Uniform, Backpack, Magazine, Grenade, Explosive]

Example:
    (begin example)
        [] call tea_common_fnc_grabModClasses;
    (end)

Author:
	Mokka
*/

private _allClasses = [];
//_allClasses append (QUOTE(((getNumber (_x >> 'scope')) == 2) && ((configSourceMod _x) in [ARR_2(QUOTE(QUOTE(PREFIX)),'.hemttout/dev')])) configClasses (configFile >> "CfgVehicles")); // 3as broke this :c
_allClasses append (QUOTE(((getNumber (_x >> 'scope')) == 2) && ((configSourceMod _x) in [ARR_2(QUOTE(QUOTE(PREFIX)),'.hemttout/dev')])) configClasses (configFile >> "CfgMagazines"));
_allClasses append (QUOTE(((getNumber (_x >> 'scope')) == 2) && ((configSourceMod _x) in [ARR_2(QUOTE(QUOTE(PREFIX)),'.hemttout/dev')])) configClasses (configFile >> "CfgWeapons"));
_allClasses append (QUOTE(((getNumber (_x >> 'scope')) == 2) && ((configSourceMod _x) in [ARR_2(QUOTE(QUOTE(PREFIX)),'.hemttout/dev')])) configClasses (configFile >> "CfgGlasses"));

TRACE_CHAT_1("classes",_allClasses);

private _weapons = [];
private _items = [];
private _nvgs = [];
private _glasses = [];
private _headgear = [];
private _vests = [];
private _uniforms = [];
private _backpacks = [];
private _magazines = [];
private _grenades = [];
private _explosives = [];

{
    private _className = configName _x;
    private _type = _className call BIS_fnc_itemType;

    switch (_type select 0) do {
        case "Weapon": {_weapons pushBack _className;};
        case "Mine": {_explosives pushBack _className;};
        case "Magazine": {if ((((_type select 1) isEqualTo "Grenade") || ((_type select 1) isEqualTo "SmokeShell")) && !((getNumber (configFile >> "CfgMagazines" >> _className >> "type")) isEqualTo 16)) then {_grenades pushBack _x}; if ((getNumber (configFile >> "CfgMagazines" >> _className >> "type")) isEqualTo 16) then {_magazines pushBack _className};};
        case "Equipment": {
            switch (_type select 1) do {
                case "Glasses": {_glasses pushBack _className;};
                case "Headgear": {_headgear pushBack _className;};
                case "Vest": {_vests pushBack _className;};
                case "Uniform": {_uniforms pushBack _className;};
                case "Backpack": {_backpacks pushBack _className;};
            };
        };
        case "Item": {
            switch (_type select 1) do {
                case "NVGoggles": {_nvgs pushBack _className;};
                default {_items pushBack _className;};
            };
        };
    };
} forEach _allClasses;

private _return = createHashMapFromArray [
    ["weapons",_weapons],
    ["items",_items],
    ["nvgs",_nvgs],
    ["glasses",_glasses],
    ["headgear",_headgear],
    ["vests",_vests],
    ["uniforms",_uniforms],
    ["backpacks",_backpacks],
    ["magazines",_magazines],
    ["grenades",_grenades],
    ["explosives",_explosives]
];

_return
