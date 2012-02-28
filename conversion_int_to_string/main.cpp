#include <string>
using namespace std;

int a(string c)
{
    return 10;
}

int main()
{
    // Unfortunately, it works.
    a(0);
    return 0;
}

