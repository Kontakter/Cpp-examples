#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    const int COUNT = 5;
    int numbers[COUNT] = {5, 4, 3, 2, 1}; 
    vector<int> vect(numbers, numbers + 5);

    // We cant use this class in algorithms.
    // Use lambda functions instead.
    struct Comparator
    {
        bool operator() (int a, int b) const
        {
            return a < b;
        }
    };
    Comparator comparator;

    sort(vect.begin(), vect.end(), comparator);

    return 0;
}
