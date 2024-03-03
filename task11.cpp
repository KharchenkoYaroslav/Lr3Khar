#include <iostream>
#include <windows.h>

using namespace std;

class pr2;

class pr1
{
    int printing;
public:
    pr1() { printing = 0; }
    void set_print(int status) { printing = status; }
    friend bool inuse(pr1 o1, pr2 o2);
};

class pr2
{
    int printing;
public:
    pr2() { printing = 0; }
    void set_print(int status) { printing = status; }
    friend bool inuse(pr1 o1, pr2 o2);
};

bool inuse(pr1 o1, pr2 o2)
{
    if (o1.printing == 0 && o2.printing == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    pr1 o1;
    pr2 o2;

    if(inuse(o1, o2)){
        cout << "Принтор зайнят" << endl;
    }
    else{
        cout << "Принтор не працює" << endl;
    }

    o2.set_print(1);

    if(inuse(o1, o2)){
        cout << "Принтор зайнят" << endl;
    }
    else{
        cout << "Принтор не працює" << endl;
    }

    return 0;
}