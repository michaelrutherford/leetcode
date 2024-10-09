// A program that implements the selection sort algorithm
// By: Michael Rutherford

#include <iostream>
#include <vector>

int main() {
    std::vector<int> values = {6, 7, 9, 3, 4, 2, 5, 2, 1, 8};

    for (int i = 0; i < values.size(); i++) {
        int temp = values[i];
        int min_index = i;

        for (int x = i + 1; x < values.size(); x++) {
            if (values[x] < values[min_index]) {
                min_index = x;
            }
        }

        std::swap(values[i], values[min_index]);
    }
    
    for (int i = 0; i < values.size(); i++) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

