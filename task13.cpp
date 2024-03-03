#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
#define SIZE 26

class Stack {
    char stck[SIZE]; 
    int tos; 
public:
    Stack(); 
    void push(char ch); 
    char pop(); 
    friend void loadstack(Stack &s);
    friend void loadstack(Stack &s, int upper);
    void show();
};

Stack::Stack(){
    tos = 0;
}

void Stack::push(char ch) {
    if (tos == SIZE) {
        cout << "Стек повний\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

char Stack::pop() {
    if (tos == 0) {
        cout << "Стек порожній\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

void Stack::show() {
    for (int i = 0; i < tos; i++) {
        cout << stck[i] << " ";
    }
    cout << endl;
}

Stack loadstack() {
    Stack s;
    for (char c = 'a'; c <= 'z'; c++) {
        s.push(c);
    }
    return s; 
}

Stack loadstack(int upper) {
    Stack s;
    for (char c = ((upper == 1) ? 'A' : 'a'); c <= ((upper == 1) ? 'Z' : 'z'); c++) {
        s.push(c);
    }
    return s;
}

int main() {
    SetConsoleOutputCP(65001);

    Stack s1, s2;
    
    s1 = loadstack();
    s2 = loadstack(1);

    s1.show();
    s2.show();

    return 0;
}