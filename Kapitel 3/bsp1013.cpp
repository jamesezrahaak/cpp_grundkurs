// bsp1013.cpp

#include <iostream>
using namespace std;



int main(){
    char wort[10];
    
    wort[0] = 'B';
    wort[1] = 'i';
    wort[2] = 'l';
    wort[3] = 'd';
    wort[4] = '\n';         // Zeichenketten wird am Ende ein Null-Escape Charakter angefügt. Damit 
    cout << wort;           // erkennt das C++ das Ende des Strings.
    return 0;
}