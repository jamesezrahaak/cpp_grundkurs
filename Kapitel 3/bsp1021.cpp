// bsp1021.cpp

#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "\nErste Schleife: ";
    for(i=10; i<13; i++) {             // Variable, Bedingung, Operator
        cout << i << " ";
    }

    cout << "\nZweite Schleife: ";
    for(; i>11; i--){
        cout << i << " ";
    }
}