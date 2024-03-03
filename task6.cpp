#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
#define SIZE 10 

class Stack {
    char stck[SIZE]; 
    int tos; 
public:
    void init(); 
    inline void push(char ch); 
    inline char pop(); 
};

inline void Stack::init(){
    tos = 0;
}

inline void Stack::push(char ch) {
    if (tos == SIZE) {
        cout << "Стек повний\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

inline char Stack::pop() {
    if (tos == 0) {
        cout << "Стек порожній\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {
    SetConsoleOutputCP(65001);

    Stack s1, s2;
    int i;
    s1.init();
    s2.init();

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 3; i++) {
        cout << "Витягнути з s1: " << s1.pop() << "\n";
    }
    for (i = 0; i < 3; i++) {
        cout << "Витягнути з s2: " << s2.pop() << "\n";
    }

    return 0;
}