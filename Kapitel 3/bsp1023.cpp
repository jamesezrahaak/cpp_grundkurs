//bsp 1023.cpp

#include <iostream>

using namespace std;

int main(){
    int zaehler = 1;
    cout << "\n";
    while(zaehler < 5){
        cout << zaehler << " ";
        zaehler++;                          // Ähnlich wie eine for() Schleife, jedoch muss hier 
    }                                       // die Zählervariable woanders gepflegt werden.





    do {                                    // Der Codeblock von do wird immer mindestens einmal ausgeführt.
        cout << "\nBitte eine Zahl eingeben (0 = Ende): ";
        cin >> zaehler;
    } while (zaehler !=0);
    return 0;
}