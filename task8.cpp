#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;
#define SIZE 10 

class Stack {
    char stck[SIZE]; 
    int tos; 
public:
    Stack(); 
    void push(char ch); 
    char pop(); 
    char getStck(int tos){ return stck[tos]; };
    int getTos(){ return tos; };
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
void showstack(Stack o){
    int tos = o.getTos();
    cout << "Ваш стек: ";
    while(tos!=0){
        tos--;
        cout << o.getStck(tos) << " ";
    }
    cout << endl;
}

int main() {
    SetConsoleOutputCP(65001);

    Stack s1, s2;

    s1.push('a');
    s1.push('b');
    s1.push('c');

    s2 = s1;

    showstack(s1);
    showstack(s2);

    for (int i = 0; i < 3; i++) {
        cout << "Витягнути з s1: " << s1.pop() << "\n";
    }
    for (int i = 0; i < 3; i++) {
        cout << "Витягнути з s2: " << s2.pop() << "\n";
    }

    return 0;
}