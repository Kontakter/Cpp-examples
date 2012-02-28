#include <iostream>
#include <limits>
#include <set>
using namespace std;

set<double> s;

int main()
{
    s.insert(numeric_limits<double>::quiet_NaN());
    s.insert(1.0);
    s.insert(2.0);
    s.insert(numeric_limits<double>::quiet_NaN());
    //! Guess the answer!
    cerr << "size = " << s.size() << endl;

    return 0;
}
