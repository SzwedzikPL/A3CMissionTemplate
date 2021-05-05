#include "script_component.hpp"
/*
 * XEH_preInit.sqf
 * Poniższy kod wykona się na serwerze oraz u każdego gracza przed rozpoczęciem wczytywania obiektów misji
 */

/*
 * Definicje funkcji
 * Np. PREP(nazwaFunkcji) skompiluje funkcje znajdującą się w functions/fnc_nazwaFunkcji.sqf
 * i będzie ona dostępna w grze jako mission_fnc_nazwaFunkcji
 */

PREP(intro);

// Komenda wyłączająca trawę w edytorze. Defaultowa wartość - trawa widoczna w sposób normalny to 25.
if (is3DEN) then {
	setTerrainGrid 50;
};

// Twój kod
