
#include <stdio.h>

class Point
{
public:
    virtual void Print() { printf("I'm a point\n"); };
    Point() { Print(); }
    void NonVirtual() { Print(); }
};

class Point3D : public Point
{
public:
    virtual void Print() { printf("I'm a point 3D\n"); };
};

int main()
{
    Point* p = new Point3D();
    p->NonVirtual();
    delete p;
    return 0;
}
