/*
 * Deklaracja wyglądu ulotek
 * Dokumentacja: https://community.bistudio.com/wiki/Arma_3:_Leaflets
 */

class CfgLeaflets {
    // Pamiętaj, że GVAR(twojaKlasa) rozwiazuje się do mission_twojaKlasa
    class GVAR(twojaKlasa) {
        // Tekst pokazywany podczas przeglądania ulotki
        text = ""; // Możesz też użyc CSTRING(CfgLeaflets_Example);

        // Ścieżka do tekstury ulotki, plik musi być w formacie PAA, wymiary - kwadratowe np. 128x128, 256x256, 496x496 itd.
        texture = "data/a3c.paa";
 	}
};
