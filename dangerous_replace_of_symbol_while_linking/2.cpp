#include "1.h"

#include <iostream>

template<class T>
void func(T t) {
    std::cout << t(20) << std::endl;
}

void bar() {
    func(&foo);
}
