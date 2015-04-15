#include <iostream>

#include "Vector.h"

using namespace std;

Vector::Vector()
{
    x = 0;
    y = 0;
}

Vector::Vector(float x, float y)
{
    this->x = x;
    this->y = y;
}

void Vector::add(Vector other)
{
    x += other.x;
    y += other.y;
}

void Vector::substract(Vector other)
{
    x -= other.x;
    y -= other.y;
}

float Vector::getX()
{
    return x;
}

float Vector::getY()
{
    return y;
}
