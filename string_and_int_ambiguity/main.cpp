#include <string>
#include <iostream>

void meow(const std::pair<int, int>& p) {
    std::cout << p.first << " " << p.second << std::endl;
}

void meow(const std::pair<std::string, std::string>& p) {
    std::cout << p.first << " " << p.second << std::endl;
}


int main() {
    meow(std::make_pair(10, 20));
    meow(std::make_pair("1", "2"));
}
