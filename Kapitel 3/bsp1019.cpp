// bsp1019.cpp

#include <iostream>

using namespace std;

int main () {
    int zahl;
    cout << "\nGib eine Zahl ein.: ";
    cin >> zahl;

    switch(zahl){
        case 1:
            cout << "Ich";
        case 2:
            cout << "mag";
        case 3:
            cout << "alle";
        case 4:
            cout << "Tiere";
    }
    return 0;
}

// Output zahl = 2 

// mag alle Tiere