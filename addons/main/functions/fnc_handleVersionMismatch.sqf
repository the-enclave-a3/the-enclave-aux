#include "..\script_component.hpp"
params ["_remoteVersion", "_localVersion", "_player", "_level"];

TRACE_4("version mismatch",_remoteVersion,_localVersion,_player,_level);

// We only check major, minor, patch. build can be different for the sake of running test builds on servers
private _clientOudated = false;
for "_i" from 0 to 2 do {
	private _local = _localVersion select _i;
	private _remote = _remoteVersion select _i;
	if (_local < _remote) exitWith { _clientOudated = true; };
};

if !(_clientOudated) exitWith { /* Server is out-of-date, no need to disconnect people */ };

private _text = format [
	"Your version of %1 is outdated:<br/>Client Version: %2<br/>Server Version: %3",
	MOD_NAME_BEAUTIFIED, _localVersion joinString ".", _remoteVersion joinString "."
];

[{alive player}, {
	params ["_text"];
	TRACE_2("Player is alive, showing msg and exiting",time,_text);
	_text = composeText [parseText format ["<t align='center'>%1</t>", _text]];
	[format ["[%1] ERROR",toUpper QUOTE(PREFIX)], _text, {findDisplay 46 closeDisplay 0}] call ace_common_fnc_errorMessage;
}, [_text]] call CBA_fnc_waitUntilAndExecute;
