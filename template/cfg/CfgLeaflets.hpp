/*
 * Deklaracja wyglądu ulotek
 * Dokumentacja: https://community.bistudio.com/wiki/Arma_3:_Leaflets
 */
 
class CfgLeaflets {
 	  class Custom_01 {
     		text = localize LSTRING(Text_Leaflet); // Tekst pokazywany podczas przeglądania ulotki, zlokalizowany w stringtable.xml
     		texture = "myLeaflet_ca.paa"; // Ścieżka do tekstury ulotki, plik musi być w formacie PAA, wymiary - kwadratowe np. 128x128, 256x256, 496x496 itd.
     		model = "myLeaflet.p3d"; // Model w czasie spadania ulotek, parametr opcjonalny
 	}
};
