#include <iostream>
#include <limits>
using namespace std;

void printOper(double a, double b)
{
    cerr << "a = " << a << ", b = " << b << endl;
    cerr << "a + b = " << a + b << endl;
    cerr << "a - b = " << a - b << endl;
    cerr << "a * b = " << a * b << endl;
    cerr << "a / b = " << a / b << endl;
    cerr << endl;
}

int main()
{
    double a = numeric_limits<double>::signaling_NaN();
    double b = numeric_limits<double>::quiet_NaN();
    double c = 0;

    printOper(a, a);
    printOper(a, b);
    printOper(a, c);
    printOper(b, b);
    printOper(b, c);

    return 0;
}

