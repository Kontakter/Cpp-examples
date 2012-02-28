#include <iostream>

struct A{} _1;

template<class V>
class Comparator
{
public:
    Comparator(V v) {
        v_ = v;
    }

    bool operator() (V el) {
        return el < v_;
    }

private:
    V v_;
};

template<class T, class V>
Comparator<V> operator < (T t, V v) {
    return Comparator<V>(v);
}

int main() {
    int a[5] = {7, 8, 9, 0, 1};
    std::cout << std::find_if(a, a + 5, _1 < 10.0) - a;

    return 0;
}
