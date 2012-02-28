#include "1.h"

#include <iostream>

template<class T>
void func(T t) {
    std::cout << t(10) << std::endl;
}


int main() {
    func(&foo);

    return 0;
}
