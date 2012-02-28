#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    sort(a.begin(), a.end(), [](int x, int y) {return x > y;});
    for (auto x: a) {
        std::cout << x << " ";
    }

    return 0;
}
