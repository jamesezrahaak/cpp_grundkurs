// bsp1011.cpp

#include <iostream>
using namespace std;

int main(){
    int test [2][3];
    test[0][0] = 1;
    test[0][1] = 2;
    test[0][2] = 3;
    test[1][0] = 4;
    test[1][1] = 5;
    test[1][2] = 6;

    cout << '\n';
    cout << " " << test[0][0];
    cout << " " << test[0][1];
    cout << " " << test[0][2];
    cout << " " << test[1][0];
    cout << " " << test[1][1];
    cout << " " << test[1][2];

    return 0;
}