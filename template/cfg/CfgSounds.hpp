/*
 * Deklaracja dźwięków
 * Dokumentacja: https://community.bistudio.com/wiki/Description.ext#CfgSounds
 */

class CfgSounds {
 	  class sound01 {
     		// nazwa, która będzie używana w komendach, np: radio say3D "sound_01"
     		name = "sound_01";
        // ścieżka do pliku dźwiękowego (np. "data\sound_01.ogg"), głośność, wysokość tonu, dystans z którego słychać dźwięk
     		sound[] = { "", 1, 1, 100 };
        // opóźnienie w wyświetlaniu tekstu, wyświetlany tekst
     		titles[] = { 1, "*wolf growls*" };
 	  };
    class sound02 {
        name = "sound_02";
        sound[] = { "", 1, 1, 100 };
        // jeżeli nie chcemy napisów:
        titles[] = { 0, "" };
    };
};
