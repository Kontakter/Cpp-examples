
#include <stdio.h>

class Point
{
public:
    long long a;
    Point() : a(5) { };
    virtual ~Point() { printf("%lld\n", a); }
};

class Point3D : public Point
{
public:
    long long b;
    Point3D() : b(7) { };
    virtual ~Point3D() { printf("M\n"); }
};

int main()
{
    Point* p = new Point3D[5];
    delete [] p;
    return 0;
}
