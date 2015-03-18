#include <iostream>
using namespace std;

struct Point2D
{
    double x, y;
    void read()
    {
        cin >> x >> y;
    }

    void print()
    {
        cout << "(" << x << ", " << y << ")\n";
    }
};

int main()
{
    Point2D A;
    Point2D B;

    A.read();
    B.read();
    cout << "The coordinates of vector AB are: (" << B.x - A.x << ", " << B.y - A.y << ").";

    return 0;
}
