// bsp1012.cpp

#include <iostream>
using namespace std;

int main() {
    int test[][3][2] = 
    {
        {{1}, {3, 4}, {5, 6}},
        {{7, 8}, {9, 10}, {11, 12}}
    };

    cout << '\n';
    cout << " " << int (test[0][0][0]);
    cout << " " << int (test[0][0][1]);
    cout << " " << int (test[0][1][0]);
    cout << " " << int (test[0][1][1]);
    cout << " " << int (test[0][2][0]);
    cout << " " << int (test[0][2][1]);
    cout << " " << int (test[0][0][0]);
    cout << " " << int (test[1][0][0]);
    cout << " " << int (test[1][0][1]);
    cout << " " << int (test[1][1][0]);
    cout << " " << int (test[1][1][0]);
    cout << " " << int (test[1][2][0]);
    cout << " " << int (test[1][2][1]);
    return 0;
}