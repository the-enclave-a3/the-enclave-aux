#include "..\script_component.hpp"

/*
Function: enc_common_fnc_stripArrayBrackets

Description:
    Helper rfunction to strip away the array brackets [] for string purposes

Arguments:
    _array - Array to process

Return Value:
    processed str output

Example:
    (begin example)
        [[1,2,3]] call enc_common_fnc_stripArrayBrackets;
    (end)

Author:
	Mokka
*/

params ["_array"];

((str _array) select [1, (count (str _array)) - 2])