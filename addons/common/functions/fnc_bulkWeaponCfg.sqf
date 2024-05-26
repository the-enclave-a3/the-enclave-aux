#include "..\script_component.hpp"

/*
Function: tea_common_fnc_bulkWeaponCfg

Description:
    Helper function to generate (and output to file) cfg weapon entries

Arguments:
    _weapons - Array of weapons in format [className, newClassName, newDisplayName, ammoType]

Return Value:
    classes generated in format [allWeaponClasses, allMagazineClasses]

Example:
    (begin example)
        [["MTI_DC15A","dc15a","DC-15A","carbine"],["MTI_DC15A_GL","dc15a_gl","DC-15A GL","carbine"]] call tea_common_fnc_bulkWeaponCfg;
    (end)

Author:
	Mokka
*/

private _allWeaponClasses = [];
private _allMagazineClasses = [];

{
    _x params ["_className", "_newClassName", "_newDisplayName", "_ammoType"];
    TRACE_4("params in array",_className,_newClassName,_newDisplayName,_ammoType);
    private _cfgData = [_className,_newClassName,_newDisplayName,_ammoType] call FUNC(weaponCfgHelper);

    _allWeaponClasses pushBack ((_cfgData select 3) select 0);
    _allMagazineClasses append ((_cfgData select 3) select 1);

    "ConfigDumpFileIO" callExtension format ["open:%1", "_" + _newClassName + ".hpp"];
    "ConfigDumpFileIO" callExtension ("write:" +  (_cfgData select 0));
    "ConfigDumpFileIO" callExtension "close:yes";

    if ((count (_cfgData select 1)) == 0) then {continue;};

    "ConfigDumpFileIO" callExtension format ["open:%1", "_" + _newClassName + "_mag.hpp"];
    "ConfigDumpFileIO" callExtension ("write:" +  (_cfgData select 1));
    "ConfigDumpFileIO" callExtension "close:yes";

    "ConfigDumpFileIO" callExtension format ["open:%1", "_" + _newClassName + "_magwell.hpp"];
    "ConfigDumpFileIO" callExtension ("write:" +  (_cfgData select 2));
    "ConfigDumpFileIO" callExtension "close:yes";
} forEach _this;

[_allWeaponClasses,_allMagazineClasses]
