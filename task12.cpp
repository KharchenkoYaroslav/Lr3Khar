#include <iostream>
#include <windows.h>

#define light_speed 186000

using namespace std;

class planet {
    int moons;
    double dist_from_sun; // in miles
    double diameter;
    double mass;

public:
    planet(int moons, double dist_from_sun, double diameter, double mass){
        this->moons = moons; 
        this->dist_from_sun = dist_from_sun;
        this->diameter = diameter;
        this->mass = mass;
    }

    int get_moons() const { return moons; }
    double get_distance() const { return dist_from_sun; }
    double get_diameter() const { return diameter; }
    double get_mass() const { return mass; }

    friend double light(planet o);
};

double light(planet o) {
    return o.dist_from_sun / light_speed;
}

int main() {
    SetConsoleOutputCP(65001);

    planet earth(1, 92955807.273, 7917.512, 5.972e24);

    cout << "Кількість лун: " << earth.get_moons() << endl;
    cout << "Відстань до сонця: " << earth.get_distance() << " міль" << endl;
    cout << "Діаметр: " << earth.get_diameter() << " міль" << endl;
    cout << "Маса: " << earth.get_mass() << " кг" << endl;
    cout << "Час за який світло дійде від сонця до планети: " << light(earth) << " секунд" << endl;

    return 0;
}