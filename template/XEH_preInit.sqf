/***********************************************************************
    XEH_preInit.sqf
    Poniższy kod wykona się na serwerze oraz u każdego gracza przed rozpoczęciem wczytywania obiektów misji
************************************************************************/

#define PATH(fncName) functions\fnc##_##fncName.sqf
#define PREP(fncName) mission##_##fnc##_##fncName = compileFinal preprocessFileLineNumbers #PATH(fncName)

// Przykładowa funkcja - kod funkcji znajduje się w functions/fnc_example.sqf, może być wywołana w grze pod nazwą mission_fnc_example
PREP(example);
