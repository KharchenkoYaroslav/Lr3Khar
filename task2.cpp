#include <iostream>
#include <windows.h>

using namespace std;

#define PI 3.14159265358979323846

class Area
{
public:
    double height;
    double width;
};

class myRectangle : public Area
{
public:
    myRectangle(double height, double width);
    double area();
};

myRectangle::myRectangle(double height, double width)
{
    this->height = height;
    this->width = width;
}

double myRectangle::area()
{
    return height * width;
}

class Isosceles : public Area
{
public:
    Isosceles(double height, double width);
    double area();
};

Isosceles::Isosceles(double height, double width)
{
    this->height = height;
    this->width = width;
}

double Isosceles::area()
{
    return height * width / 2;
}

class Cylinder : public Area
{
public:
    Cylinder(double height, double width);
    double area();
};

Cylinder::Cylinder(double height, double width)
{
    this->height = height;
    this->width = width;
}

double Cylinder::area()
{
    return 2 * PI * width * (width / 2 + height);
}

int main()
{
    SetConsoleOutputCP(65001);
    
    myRectangle ob1(2, 3);
    Isosceles ob2(3, 4);
    Cylinder ob3(5, 6);

    cout << "Площа прямокутника: " << ob1.area() << endl;
    cout << "Площа рівнобедреного трикутника: " << ob2.area() << endl;
    cout << "Площа циліндра: " << ob3.area() << endl;

    return 0;
}