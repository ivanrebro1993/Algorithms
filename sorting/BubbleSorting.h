#pragma once

#include "iostream"

class BubbleSorting {
private:
    int lenght;
    int array[100];
    bool isLess(int val1, int val2);
    void swap(int *source, int index1, int index2);
    bool iterate(int *source, int &swapCount, int &compareCount);
public:
    BubbleSorting();
    void print();
    void sort();
};