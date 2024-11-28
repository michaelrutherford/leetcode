// A program that calculates the first 10 numbers in the Fibonacci Sequence
// By: Michael Rutherford

#include <iostream>

int main() {
    int a = 0;
    int b = 1;
    int c = 0;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    for (int i = 0; i < 10; i++) {
        c = b + a;
        std::cout << c << std::endl;
        a = b;
        b = c;
    }

    return 0;
}
