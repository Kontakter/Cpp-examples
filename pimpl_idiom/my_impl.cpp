#include "my.h"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class My::Impl
{
public:
    Impl(): myString("Hello world!")
    { }
    string getStr() const
    {
        return myString;
    }
private:
    string myString;
};

My::My()
{
    impl = new Impl;
}

My::~My()
{
    delete impl;
}

void My::print() const
{
    cout << impl->getStr() << endl;
}
