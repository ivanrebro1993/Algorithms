#include <iostream>
#include "sorting/BubbleSorting.h"

int main() {
    std::cout << "Algorithms app" << std::endl;

    BubbleSorting sorting;

    std::cout << "[input] array: ";
    sorting.print();

    sorting.sort();

    std::cout << "[output] array: ";
    sorting.print();

    return 0;
}