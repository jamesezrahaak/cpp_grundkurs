// bsp1018.cpp
//
// Created by James Ezra Haak
//
//
// 

#include <iostream>

using namespace std;

int main(){
    int a, b;
    a = b = 0;
    cout << "\n Bitte erste Ganzzahl eingeben: ";
    cin >> a;
    cout << "\n Bitte zweite Ganzzahl eingeben: ";
    cin >> b;

    if (a == 1 && b == 2){
        cout << "\na=1 und b=2";
    }
    if (a == 3 || b == 6){
        cout << "\na=1 und b=2";
    }
    if (a >= 1 && a <= 49){
        cout << "\na ist größer als 1 und kleiner als 40.";
    }
    if (a != 1){
        cout << "\na ist nicht 1.";
    }
    if (!(a == 1)){
        cout << "\na ist nicht gleich 1";
    }
}

