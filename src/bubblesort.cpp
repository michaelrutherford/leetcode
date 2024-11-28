// A program that implements the bubble sort algorithm
// By: Michael Rutherford

#include <iostream>
#include <vector>

int main() {
    std::vector<int> values = {6, 7, 9, 3, 4, 2, 5, 2, 1, 8};

    for (int i = 0; i < values.size() - 1; i++) {
        for (int x = 0; x < values.size() - i - 1; x++) {
            if (values[x] > values[x + 1]) {
                std::swap(values[x], values[x + 1]);
            }
        }
    }

    for (int i = 0; i < values.size(); i++) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
