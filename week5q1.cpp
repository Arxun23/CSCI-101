#include <iostream>

using namespace std;

int main()
{
    double radius, height;
    double pie =3.14;
     
    cout << "Please enter the radius "; cin >> radius;
    cout << "Please enter the height "; cin >> height;

    double volume((pie * radius * radius)*height);
    cout << "Based off our calculation the area is " << volume;

    return 0;
}