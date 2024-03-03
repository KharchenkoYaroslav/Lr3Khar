#include <iostream>
using namespace std;

class who {
    char id;
public:
    who(char id){
        this->id = id;
        cout << "Constructing who #" << id << endl;
    }
    ~who() {
        cout << "Destroying who #" << id << endl;
    }
};

who make_who(char name) {
    who w(name);
    return w;
}

int main() {
    who a('a');
    who b = make_who('b');
    a = make_who('c');

    return 0;
}