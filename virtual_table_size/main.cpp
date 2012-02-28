#include <cstdio>

class A {
    int a;
};

class B {
    int a;
    virtual void foo();
};

class C {
    int a;
    void foo();
};

int main() {

    printf("%d\n%d\n%d\n", sizeof(A), sizeof(B), sizeof(C));

    return 0;
}