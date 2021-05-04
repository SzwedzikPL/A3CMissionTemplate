#include "script_component.hpp"
/*
 * XEH_postInit.sqf
 * Poniższy kod wykona się na serwerze oraz u każdego gracza po wczytaniu wszystkich elementów misji
 */

// Dodaj briefing
#include "briefing.hpp"

// Intro
if (hasInterface) then {
  ["CBA_loadingScreenDone", {
    if (didJIP) exitWith {};
    0 spawn FUNC(intro);
  }] call CBA_fnc_addEventHandler;
};

// Twój kod
