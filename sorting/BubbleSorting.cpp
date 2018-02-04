#include <stdlib.h>
#include <time.h>
#include "BubbleSorting.h"

/**
 * Сортировка пузырьком (простыми обменами)
 *
 * Сложность алгоритма O(n^2)
 */

BubbleSorting::BubbleSorting() {
    std::cout << "BubbleSorting";
    srand (time(NULL));

    lenght = 10;
    for (int i = 0; i < lenght; i++) {
        array[i] = rand() % 10;
    }
}

void BubbleSorting::print() {
    for (int i = 0; i < lenght; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
}

bool BubbleSorting::isLess(int val1, int val2) {
    return val1 < val2;
}

void BubbleSorting::swap(int *source, int index1, int index2) {
    int temp = *(source + index1);
    *(source + index1) = *(source + index2);
    *(source + index2) = temp;
}

bool BubbleSorting::iterate(int *source, int &swapCount, int &compareCount) {
    bool isSorted = true;
    for (int i = 1; i < lenght; i++) {
        int prev = i - 1;
        if (isLess(*(source + i), *(source + prev))) {
            if (isSorted) {
                isSorted = false;
            }

            swap(source, i, prev);
            swapCount++;
        }

        compareCount++;
    }

    return isSorted;
}

void BubbleSorting::sort() {
    int iteration = 0;
    bool isSorted;

    do {
        int swapCount = 0;
        int compareCount = 0;

        isSorted = iterate(array, swapCount, compareCount);

        if (!isSorted) {
            iteration++;
            std::cout << "[" << iteration << "] compare " << compareCount << " swap " << swapCount << ": ";
            print();
        }

    } while (!isSorted);
}