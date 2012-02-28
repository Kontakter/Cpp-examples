#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED

class My 
{
public:
    My();
    ~My();

    void print() const;
private:
    class Impl;
    Impl* impl;
};

#endif
