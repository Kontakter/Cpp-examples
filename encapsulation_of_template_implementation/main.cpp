#include <iostream>
using namespace std;

#define TEMPLATE_ARGS template<class T>
#define TEMPLATE_PARAMS T

template<class T>
class My
{
public:
    My(const T& a): a_(a)
    { }
    void print() const;
private:
    T a_;
};

TEMPLATE_ARGS
void My<TEMPLATE_PARAMS>::print() const
{
    cout << "Hello";
}


int main()
{
    My<int> my(10);
    my.print();

    return 0;
}

