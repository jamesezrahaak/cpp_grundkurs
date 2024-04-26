// bsp1017.cpp

#include <iostream>

using namespace std;

int main (){
    double wert = 10.0;
    cout << '\n' << "Bitte Wert eingeben: ";
    cin >> wert;

    if (wert == 10.0){
        cout << "Der Wert ist 10.0";
    }
    else {
        if (wert > 10.0){
            cout << "Der Wert ist größer als 10.0";
        } else {
            if (wert < 10.0){
                cout << "Der Wert ist kleiner als 10.0";
            }
        }
    }

    return 0;
}