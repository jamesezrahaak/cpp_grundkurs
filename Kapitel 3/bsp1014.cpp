// bsp1014.cpp

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char test [15];
    strcpy(test, "Hello");
    cout << "\n" << test;
    cout << "\n" << strlen(test);
    strcat(test, ", World!");
    cout << "\n" << test;
    cout << "\n" << strlen(test);

    return 0;
}