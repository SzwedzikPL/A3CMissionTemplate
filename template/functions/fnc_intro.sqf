#include "script_component.hpp"
/*
 * Author: Krzyciu
 * Intro misji
 */

// Schowanie UI - kompas, etc.
[false] call a3cs_ui_fnc_toggleScreenshotMode;
// Czarny ekran
titleCut ["", "BLACK FADED", 999];
// Wyciszenie dźwięków środowiska - np szumu lasu, odgłosów much
0 fadeEnvironment 0;
// Włączenie muzyki - zdefiniowane w CfgMusic
playMusic "intro_song";
// Pobranie stopnia/nicku gracza
private _unitData = [player, false] call a3cs_nametags_fnc_getUnitData;
// Opóźnienie w wyświetalniu tekstu
sleep 10;
// Pierwszy wyświetlany tekst
//titleText [localize LSTRING(Intro_Text_1), "PLAIN", 2, false, true];

// Czas wyświetlania tekstu
sleep 5;
// Fadeout tekstu
titleFadeOut 2;
sleep 2;
// Drugi wyświetlany tekst
//titleText [localize LSTRING(Intro_Text_2), "PLAIN", 2, false, true];

sleep 5;
titleFadeOut 2;
sleep 4;

// Wyświetlenie loga grupy
titleText ["","BLACK OUT",2];
"layer_intro" cutRsc ["MissionIntroLogo","BLACK",0.01];
titleText ["","BLACK IN",3];
sleep 3;
titleText ["","BLACK OUT",2];
sleep 2;
"layer_intro" cutFadeOut 0;
sleep 2;
titleText ["","BLACK IN",8];
cutText ["","BLACK OUT", 0];
// Tekst w prawym dolnym rogu, wyświetlany linijka po linijce. Teksty zdefiniowane w stringtable.xml
[
  [(_unitData #2 + " " + _unitData #1),2,1,5], // stopień + nick
  //[localize LSTRING(Intro_Date),2,1], // data
  //[localize LSTRING(Intro_Place),2,1], // miejsce
  //[localize LSTRING(Intro_Unit),2,1] // jednostka
] spawn BIS_fnc_EXP_camp_SITREP;

// Odciszenie dźwięków środowiska - np szumu lasu, odgłosów much
5 fadeEnvironment 1;
// Efekt rozmycia obrazu przy końcu intra
"dynamicBlur" ppEffectEnable true;
"dynamicBlur" ppEffectAdjust [6];
"dynamicBlur" ppEffectCommit 0;
"dynamicBlur" ppEffectAdjust [0.0];
"dynamicBlur" ppEffectCommit 5;
// Wyłączenie czarnego ekranu
titleCut ["", "BLACK IN", 5];

// Pokazanie UI
[false] call a3cs_ui_fnc_toggleScreenshotMode;
