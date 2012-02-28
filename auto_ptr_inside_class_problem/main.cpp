#include <iostream>
using namespace std;

struct A
{
    A(auto_ptr<int> c, int num) {
        aa = c;
    }
    auto_ptr<int> aa;
};

int main()
{
    auto_ptr<int> a(new int);
    A myA = A(a, 0);
    A otherA = myA;

    return 0;
}
