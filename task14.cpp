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
    char* get_p();
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
char* strtype::get_p(){
    return p;
}


char* get_string(strtype *o){
    return o->get_p();
}

int main() {
    SetConsoleOutputCP(65001);

    strtype s1("Це тестовий рядок.");
    strtype s2("Це тестовий рядок 2");
    
    cout << "Рядок s1: " << get_string(&s1) << endl;
    cout << "Рядок s2: " << get_string(&s2) << endl;

    s1.show(); 
    s2.show();
    return 0; 
}