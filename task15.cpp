#include <iostream>
#include <windows.h>

using namespace std;

class base
{
    int a;

public:
    void load_a(int n) { a = n; }
    int get_a() { return a; }
};
class derived : public base
{
    int b;

public:
    void load_b(int n) { b = n; }
    int get_b() { return b; }
};

int main()
{
    SetConsoleOutputCP(65001);
    derived s1, s2;

    s1.load_a(1);
    s1.load_b(2);

    s2 = s1;

    cout << "s1: a- " << s1.get_a() << " b- " << s1.get_b() << endl;
    cout << "s2: a- " << s2.get_a() << " b- " << s2.get_b() << endl; 

    return 0;
}