#include <iostream>
#include <unistd.h>
//#include <stdlib.h>
//#include <sys/types.h>

int main() {

    std::cout << "10" << "\n";
    fork();
    std::cout << "20" << "\n";

    return 0;
}