// bsp1020.cpp

#include <iostream>
using namespace std;

int main() {
    char zeichen;
    cout << "Gib einen Buchstaben ein";
    cin >> zeichen;

    switch(zeichen){
        case 'a': 
            cout << "Der Buchsta a, so ist das also";
        case 'b':
            cout << "B wie break!";
        case 'c': 
            cout << "C wie Caesar hätte das aber so gesagt!";
            break;
        case 'd':
            cout << "D wie das Ende!";
            break;
        default:
            cout << "War zu faul für alle Character";
    }
}