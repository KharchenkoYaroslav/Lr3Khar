#include <iostream>
#include <cstring>
using namespace std;

enum color {red, yellow, green, orange};
enum que {yes, no};

void out (bool x);

char const *c[] = {"red", "yellow", "green", "orange"};

class Fruit {
public:
    bool annual;
    bool perennial;
    bool tree;
    bool tropical;
    enum color clr;
    char name[40];
};

class Apple: public Fruit {
    bool cooking;
    bool crunchy;
    bool eating;
public:
    void seta(char const *n, enum color c, bool ck, bool crchy, bool e);
    void seta(char const *n, enum color c, enum que ck, enum que crchy, enum que e);
    void show();
};

class Orange: public Fruit {
    bool juice;
    bool sour;
    bool eating;
public:
    void seto(char const *n, enum color c, bool j, bool sr, bool e);
    void seto(char const *n, enum color c, enum que j, enum que sr, enum que e);
    void show();
};

void out (bool x) {
    cout << (x ? "yes" : "no") << "\n";
}

void Apple::seta(char const *n, enum color c, bool ck, bool crchy, bool e) {
    strcpy(name, n);
    annual = false;
    perennial = true;
    tree = true;
    tropical = false;
    clr = c;
    cooking = ck;
    crunchy = crchy;
    eating = e;
}
void Apple::seta(char const *n, enum color c, enum que ck, enum que crchy, enum que e) {
    strcpy(name, n);
    annual = false;
    perennial = true;
    tree = true;
    tropical = false;
    clr = c;
    cooking = ((ck == yes)? true: false);
    crunchy = ((crchy == yes)? true: false);
    eating = ((e == yes)? true: false);
}

void Orange::seto(char const *n, enum color c, bool j, bool sr, bool e) {
    strcpy(name, n);
    annual = false;
    perennial = true;
    tree = true;
    tropical = true;
    clr = c;
    juice = j;
    sour = sr;
    eating = e;
}

void Orange::seto(char const *n, enum color c, enum que j, enum que sr, enum que e) {
   strcpy(name, n);
    annual = false;
    perennial = true;
    tree = true;
    tropical = true;
    clr = c;
    juice = ((j == yes)? true: false);
    sour = ((sr == yes)? true: false);
    eating = ((e == yes)? true: false);
}

void Apple::show() {
    cout << name << " apple is: " << "\n";
    cout << "Annual: "; out ( annual );
    cout << "Perennial: "; out ( perennial );
    cout << "Tree: "; out ( tree );
    cout << "Tropical: "; out ( tropical );
    cout << "Color: " << c[clr] << "\n";
    cout << "Good for cooking: "; out ( cooking );
    cout << "Crunchy: "; out ( crunchy );
    cout << "Good for eating: "; out ( eating );
}

void Orange::show() {
    cout << name << " orange is: " << "\n";
    cout << "Annual: "; out ( annual );
    cout << "Perennial: "; out ( perennial );
    cout << "Tree: "; out ( tree );
    cout << "Tropical: "; out ( tropical );
    cout << "Color: " << c[clr] << "\n";
    cout << "Good for juice: "; out ( juice );
    cout << "Sour: "; out ( sour );
    cout << "Good for eating: "; out ( eating );
}

int main() {
    Apple a1;
    Orange o1;
    a1.seta("Red Delicious", red, false, true, true);
    o1.seto("Navel", orange, false, false, true);
    a1.show();
    cout << endl;
    o1.show();
    cout << endl;

    Apple a2;
    Orange o2;
    a2.seta("Jonathan", red, yes, no, yes);
    o2.seto("Valencia", orange, yes, yes, no);
    a2.show();
    cout << endl;
    o2.show();
    return 0;
}