// bsp1016.cpp

#include <iostream>
using namespace std;

int main (){
    union test {
        long zahl;
        char zeichen[4];
    };

    test var01;

    var01.zahl = 99997977;
    cout << var01.zeichen[0] << var01.zeichen[1] << var01.zeichen[2] << var01.zeichen[3];
    return 0;
}