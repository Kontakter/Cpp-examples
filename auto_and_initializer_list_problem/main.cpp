#include <assert.h>
#include <vector>

int main() {
    auto x{42};
    std::vector<int> v(x);
    assert(v.size() == 42);
    return 0;
}
