#include <iostream>

#include "Vector.h"

using namespace std;

Vector sum(Vector a, Vector b)
{
    return Vector(a.getX() + b.getX(), a.getY() + b.getY());
}

Vector difference(Vector a, Vector b)
{
    return Vector(a.getX() - b.getX(), a.getY() - b.getY());
}

int scalarProduct(Vector a, Vector b)
{
    return a.getX() * b.getX() + a.getY() * b.getY();
}

int main()
{
    Vector a(3, 4);
    Vector b(5, 6);
    a.add(b);
    cout << a.getX() << " " << a.getY() << endl;
    a.substract(b);
    cout << a.getX() << " " << a.getY() << endl;
    Vector c = sum(a, b);
    Vector d = difference(a, b);
    cout << c.getX() << " " << c.getY() << endl;
    cout << d.getX() << " " << d.getY() << endl;
    cout << scalarProduct(a, b);
    return 0;
}
