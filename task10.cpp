#include <iostream>
#include <cstring>
#include <cstdlib>
#include <windows.h>

using namespace std;


class strtype {
    char *p; 
    int len; 
public:
    strtype(char const *ptr);

    ~strtype();

    void show();
};

strtype::strtype(char const *ptr) {
    len = strlen(ptr); 
    p = (char *)malloc(len+1); 
    if (!p) { 
        cout << "Помилка виділення пам'яті\n";
        exit(1); 
    }
    strcpy(p, ptr);
}


strtype::~strtype() {
    cout << "Звільняю пам'ять\n";
    free(p);
}


void strtype::show() {
    cout << p << " - довжина: " << len;
    cout << "\n";
}


strtype returnObject(strtype o) {//Як варіант strtype& returnObject(strtype &o), так ми передаємо посилання на об'єкт а не його копію
    return o;
}

int main() {
    SetConsoleOutputCP(65001);

    strtype s1("Це тестовий рядок.");
    strtype s2("Це тестовий рядок 2");

    s2 = returnObject(s2);
    
    s1.show(); 
    s2.show();
    return 0; 
}