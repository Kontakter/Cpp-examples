#include <iostream>
int main()
{
    int a = 0;
    //! It is a bad examples, but it works.
    ++a = ++++a;
    printf("%d", a);
    return 0;
}
