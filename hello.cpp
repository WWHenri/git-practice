#include <iostream>
#include <format>

int main() {
    auto msg = std::format("Hello World");
    std::cout << msg;

    return 0;
}