#ifndef VECTOR_HH
#define VECTOR_HH

class Vector
{
private:
    float x;
    float y;
public:
    Vector();
    Vector(float, float);

    void add(Vector);
    void substract(Vector);

    float getX();
    float getY();
};

#endif
