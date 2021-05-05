/*
    Definicje makr
*/

#define PREFIX mission

#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define QUOTE(var1) #var1

#define LSTRING(var1) QUOTE(TRIPLES(STR,A3C_Mission,var1))

#define ARR_1(ARG1) ARG1
#define ARR_2(ARG1,ARG2) ARG1, ARG2
#define ARR_3(ARG1,ARG2,ARG3) ARG1, ARG2, ARG3
#define ARR_4(ARG1,ARG2,ARG3,ARG4) ARG1, ARG2, ARG3, ARG4
#define ARR_5(ARG1,ARG2,ARG3,ARG4,ARG5) ARG1, ARG2, ARG3, ARG4, ARG5
#define ARR_6(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6
#define ARR_7(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7
#define ARR_8(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8

#define FUNC(fncName) TRIPLES(PREFIX,fnc,fncName)
#define QFUNC(fncName) QUOTE(FUNC(fncName))
#define GVAR(varName) DOUBLES(PREFIX,varName)
#define QGVAR(varName) QUOTE(GVAR(varName))

#define PREP(fncName) FUNC(fncName) = compileScript [ARR_2(QUOTE(functions\DOUBLES(fnc,fncName).sqf),true)]
