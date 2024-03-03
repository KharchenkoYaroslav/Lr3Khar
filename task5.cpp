#include <iostream>
#include <windows.h>
using namespace std;


inline int myAbs(int n) {
    return n < 0 ? -n : n;
}

inline long myAbs(long n) {
    return n < 0 ? -n : n;
}

inline double myAbs(double n) {
    return n < 0 ? -n : n;
}

int main() {
    SetConsoleOutputCP(65001);
    cout << "Абсолютне значення -10: " << myAbs(-10) << "\n";
    cout << "Абсолютне значення -10L: " << myAbs(-10L) << "\n";
    cout << "Абсолютне значення -10.1: " << myAbs(-10.1) << "\n";
    return 0;
}