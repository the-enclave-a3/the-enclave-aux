#include "..\script_component.hpp"

/*
Function: enc_common_fnc_weaponCfgHelper

Description:
    Helper function to generate adjusted CfgWeapons/-Magazines/-MagazineWells entries.

Arguments:
    _className - Classname of the weapon in CfgWeapons
    _newClassName - New base name to assign the weapon
    _newDisplayName - New displayName of the weapon/mags
    _ammoType - Type of ammo to assign the weapon

Return Value:
    weapon config data in format [CfgWeapons, CfgMagazines, CfgMagazineWells, [className,magClassNames]]

Example:
    (begin example)
        ["MTI_DC15A_GL","dc15a_gl","DC-15A GL","carbine"] call enc_common_fnc_weaponCfgHelper;
    (end)

Author:
	Mokka
*/
params ["_className", "_newClassName", "_newDisplayName", "_ammoType"];
TRACE_4("params",_className,_newClassName,_newDisplayName,_ammoType);

private _weaponConfig = (configFile >> "CfgWeapons" >> _className);
if (isNull _weaponConfig) exitWith {
    WARNING_2("weapon %1 not found in config! (%2)",_className,__FILE__);
    ["", "", "", ["",[]]]
};

// weapon data
//private _weaponName = getText (_weaponConfig >> "displayName");
private _weaponMags = getArray (_weaponConfig >> "magazines");
private _weaponModes = getArray (_weaponConfig >> "modes");
private _weaponMuzzles = getArray (_weaponConfig >> "muzzles");

private _weaponParent = inheritsFrom _weaponConfig;

private _isMelee = false;

// transform displayName
_newDisplayName = format ["[ENC] %1",_newDisplayName];

// transform mag data
// in format [newMagClass: [magParent,magCount,magAmmo,magName]]
private _newMags = createHashMap;
private _newMagsArray = "";
{
    private _newMagClass = format ["GMAGAZINE(%1%2)",_newClassName,["_" + (str _forEachIndex), ""] select ((count _weaponMags) == 1)];
    if ((toLower _x) == (toLower "WBK_Cybercrystal")) then {
        _newMagClass = _x;
        _isMelee = true;
    };

    private _magConfig = (configFile >> "CfgMagazines" >> _x);
    private _magParent = inheritsFrom _magConfig;
    private _magCount = getNumber (_magConfig >> "count");
    private _magAmmo = getText (_magConfig >> "ammo");
    private _magName = format ["%1 %2rnd Magazine%3",_newDisplayName,_magCount,[" #" + (str _forEachIndex), ""] select ((count _weaponMags) == 1)];

    TRACE_6("mag data",_x,_newMagClass,_magParent,_magCount,_magAmmo,_magName);

    _newMags set [_newMagClass, [_magParent,_magCount,_magAmmo,_magName]];

    _newMagsArray = _newMagsArray + (format ["Q%1,",_newMagClass]);
} forEach _weaponMags;
_newMagsArray = _newMagsArray select [0,(count _newMagsArray) - 1];

// magwell stuff
private _newMagWell = format [QGMAGWELL(%1),_newClassName];

// build CfgWeapons entry
private _cfgWeaponsEntry = format [
    "class %1;%8class %2: %1 {%8%9class WeaponSlotsInfo;%8};%8class GWEAPON(%3): %2 {%8%9scope = 2;%8%9author = AUTHOR;%8%9displayName = ""%7"";%8%8%9magazines[] = {%4};%8%9%10//modes[] = {%5};%8%9//muzzles[] = {%6};%8%8%9class WeaponSlotsInfo: WeaponSlotsInfo {%8%9%9class CowsSlot {%8%9%9%9//compatibleItems[] = {};%8%9%9};%8%9%9class PointerSlot {%8%9%9%9//compatibleItems[] = { RAILATTACHMENT_LIST };%8%9%9};%8%9};%8};%8",
    configName _weaponParent,
    _className,
    _newClassName,
    _newMagsArray,
    [_weaponModes] call FUNC(stripArrayBrackets),
    [_weaponMuzzles] call FUNC(stripArrayBrackets),
    _newDisplayName,
    toString[13,10],    // %8: CRLF
    toString[9],        // %9: HT
    [format ["magazineWell[] = {QGMAGWELL(%1)};%2%3",_newMagWell,toString[13,10],toString[9]], ""] select _isMelee
];

if (_isMelee) exitWith { [_cfgWeaponsEntry, "", "", [format [QGWEAPON(%1),_newClassName], []]] };

// build CfgMagazines entry
private _cfgMagazinesEntry = "";
{
    _y params ["_xMagParent","_xMagCount","_xMagAmmo","_xMagName"];
    private _xMagStr = format [
        "class %3;%1class %4: %3 {%1%2scope = 2;%1%2author = AUTHOR;%1%2displayName = ""%5"";%1%2count = %6;%1%2//ammo = ""%7"";%1%2ammo = QGAMMO(%8);%1};%1",
        toString[13,10],    // %1: CRLF
        toString[9],        // %2: HT
        configName _xMagParent,
        _x,
        _xMagName,
        _xMagCount,
        _xMagAmmo,
        _ammoType
    ];
    _cfgMagazinesEntry = _cfgMagazinesEntry + _xMagStr;
} forEach _newMags;

// build CfgMagazineWells entry
private _cfgMagazineWellsEntry = format [
    "class %3 {%1%2%4[] = {%5};%1};",
    toString[13,10],    // %1: CRLF
    toString[9],        // %2: HT
    _newMagWell,
    QUOTE(PREFIX),
    _newMagsArray
];

[_cfgWeaponsEntry,_cfgMagazinesEntry,_cfgMagazineWellsEntry, [format [QGWEAPON(%1),_newClassName],keys _newMags]]
