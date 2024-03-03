#include <iostream>
using namespace std;


inline int test1234(int x){
    return x * x;
}

inline int recursiveFunction(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n * recursiveFunction(n - 1);
    }
}

inline int loopFunction(int n) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result += i;
    }
    return result;
}

inline int switchFunction(int n) {
    int result;
    switch (n) {
        case 1:
            result = 1;
            break;
        case 2:
            result = 2;
            break;
        default:
            result = 0;
    }
    return result;
}

inline int functionWithStatic() {
    static int count = 0;
    return ++count;
}

int main() {
    //В інтернеті пишуть про 2 способи перевірки чи ф-ція дійсно inline, шукати call ф-ції в Асембл коді та використовувати -Winline 
    //Якщо я правильно поняв то за першим не inline в мене тільки functionWithStatic а за другим всі inline
    cout << "test: " << test1234(2) << endl;
    cout << "Recursive function: " << recursiveFunction(9999) << endl;

    cout << "Loop function: " << loopFunction(5) << endl;

    cout << "Switch function: " << switchFunction(2) << endl;

    cout << "Function with static: " << functionWithStatic() << endl;
    cout << "Function with static: " << functionWithStatic() << endl;

    return 0;
}