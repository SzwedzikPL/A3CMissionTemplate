/*
 * Deklaracja dźwięków
 * Dokumentacja: https://community.bistudio.com/wiki/Description.ext#CfgMusic
 */

class CfgMusic {
 	  class song01 {
     		// nazwa, która będzie używana w komendach, np: playMusic "song_01";
     		name = "song_01";
        // ścieżka do pliku dźwiękowego (np. "data\song_01.ogg"), głośność, wysokość tonu
     		sound[] = { "", 1, 1};
 	  };
    class intro_song {
     		// nazwa, która będzie używana w komendach, np: playMusic "song_01";
     		name = "intro_song";
        // ścieżka do pliku dźwiękowego (np. "data\song_01.ogg"), głośność, wysokość tonu
     		sound[] = {"data\intro.ogg", 1, 1};
 	  };
};
