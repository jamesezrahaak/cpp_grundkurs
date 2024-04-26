// bsp1015.cpp

#include <iostream>

using namespace std;

int main(){
    struct artikel {
        int artNr;
        double umsatz;
    };                              // Semikolon nach der Deklination der Struktur nicht vergessen!

    artikel xyz;
    xyz.artNr = 2277;               // Zugriff auf Variable mit dem Strukturoperator '.' 
    xyz.umsatz = 2345.85;

    cout << "\n" << xyz.artNr;
    cout << "\n" << xyz.umsatz;
    return 0;
}