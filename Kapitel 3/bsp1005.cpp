// bsp1005.cpp

#include <iostream>
using namespace std;

int main(){
    float a;
    double b;
    a = 10.12345678901234567890;
    b = 10.12345678901234567890;

    cout << "\n" << a;
    cout << "\n" << b;
    cout.precision(16);         // cout zeigt standardmäßig nur 6 Nachkommastellen an. Hier erlaubt .precision() 
                                // die Festlegung der Stellenanzahl
    cout << "\n" << a;
    cout << "\n" << b;
    return 0;
}