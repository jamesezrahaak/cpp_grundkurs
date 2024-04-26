// bsp10001.cpp                             // <- Doppelte Schrägstriche sind ein Kommentar in einer Zeile
//                                                            Für Kommentare über mehrere Zeilen benutzt man /* [Kommentar] */
//


#include <iostream>                         // #include ist eine Anweisung an den Präprozessor. Der Präprozessor 
                                            // sucht im Quelltext nach Anweisungen, die mit dem Nummernzeichen "#" beginnen.
                                            // #include <iostream> bedeutet, dass der Header an dieser Stelle
                                            // in die Datei eingefügt werden soll.

using namespace std;                        // Nach ISO Standard gehören alle Dinge in C++ zu einem Namensraum. 


int main(){                                 // Funktion main, standard Einhängepunkt in C++ ist die main Funktion.
                                            // Diese gibt einen Wert int wieder, dieser Wert entspricht dem Return-Code, welcher
                                            // je nach Art der Beendigung an die Shell übergeben wird.

    cout << "Dies wird in \n2 Zeilen gedruckt!";

                                            // cout ist ein Objekt, welches die Möglichkeit gibt komfortabel Daten auf dem 
                                            // Bildschirm wiederzugeben. Man gibt die Daten mit dem Einfügeoperator << an cout.

    cout << "\nFuenf + elf = " << 5+11 << "\n";

}                                           // Die geschweiften Klammern {} beinhalten einen "Block" Code.