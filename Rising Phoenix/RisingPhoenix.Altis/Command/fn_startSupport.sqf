/*
	File: fn_startSupport.sqf
	Author: Dom
	Description: Starts the support action
*/

private _display = findDisplay 9745;
private _tree = _display displayCtrl 1500;
private _selectionPath = tvCurSel _tree;
_selectionPath params ["_firstIndex"];
private _supportCooldowns = missionNamespace getVariable ["DT_supportCooldowns",[]];

(parseSimpleArray (_tree tvData [_firstIndex])) params ["_action","_cooldown"];
if (CBA_missionTime < (_supportCooldowns select _firstIndex)) exitWith {["Cooldown not finished."] call DT_fnc_notify};
private _pos = if (_action in ["mortar","supplyDrop"]) then {
	 markerPos "supportTarget";
} else {
	[getPosATL player,0,15,3] call BIS_fnc_findSafePos;
};
if (_action in ["mortar","supplyDrop"] && {_pos isEqualTo [0,0,0]}) exitWith {["No suitable target has been selected."] call DT_fnc_notify};
if (_action in ["rallyPoint"] && {_pos isEqualTo [0,0,0]}) exitWith {["No suitable area around your current position can be found."] call DT_fnc_notify};

if (_action isEqualTo "mortar") then {
	private _mortarType = _tree tvText _selectionPath;

	private _count = 1;
	if ("3" in _mortarType) then {
		_count = 3;
	} else {
		if ("5" in _mortarType) then {
			_count = 5;
		};
	};
	_cooldown = _cooldown * _count;

	private _roundClass = "M_Mo_82mm_AT_LG";
	if ("Smoke" in _mortarType) then {
		_roundClass = "SmokeShellArty";
	} else {
		if ("Illumination" in _mortarType) then {
			_roundClass = selectRandom ["F_40mm_White","F_40mm_Yellow","F_40mm_Green","F_40mm_Red"];
			_pos set [2,50];
		};
	};

	for "_i" from 1 to _count do {
		[
			{
				params ["_pos","_type"];
				private _vehicle = createVehicle [_type,_pos,[],8];
				if ("F_40mm" in _type) then {
					_vehicle setVelocity [wind select 0,wind select 1,30];
				};
			},
			[_pos,_roundClass],
			25 + (random 5) + (3 * _i)
		] remoteExecCall ["CBA_fnc_waitAndExecute",2];
	};
	["Rounds are being fired as ordered, approximately 30 seconds out."] call DT_fnc_notify;
} else {
	if (_action isEqualTo "supplyDrop") then {
		[_pos] call DT_fnc_createSupplyCrate;
	} else {
		if (_action isEqualTo "rallyPoint") then {
			[_pos] remoteExecCall ["DT_fnc_deployRallyPoint",2];
		};
	};
};

_supportCooldowns set [_firstIndex,(CBA_missionTime + _cooldown)];
missionNamespace setVariable ["DT_supportCooldowns",_supportCooldowns,true];

closeDialog 0;