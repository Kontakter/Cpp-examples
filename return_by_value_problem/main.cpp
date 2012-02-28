#include <iostream>
using namespace std;

class Rational
{
public:
    Rational(int p_, int q_): p(p_), q(q_)
    { }
    int P() const
    {
        return p;
    }
    int Q() const
    {
        return q;
    }
private:
    int p, q;
};

Rational operator * (const Rational &r1, const Rational &r2)
{
    return Rational(r1.P() * r2.P(), r1.Q() * r2.Q());
}

int main()
{
    const char *str = "sad";
    cout << str << endl;
    str = "new";
    cout << str << endl;

    Rational a(1, 2);
    Rational b(7, 5);
    Rational c(2, 2);
    (a * b) = c;


    return 0;
}
