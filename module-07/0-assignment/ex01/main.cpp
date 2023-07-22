#include <iostream>
#include "iter.hpp"

int main() {
    std::cout << std::endl;

	int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {3.14, 2.71, 1.414, 1.732};

    // Call iter with the printElement function on intArray
    std::cout << "Printing intArray elements: ";
    iter(intArray, sizeof(intArray) / sizeof(intArray[0]), printElementI);
    std::cout << std::endl;

    // Call iter with the incrementByOne function on doubleArray
	std::cout << "rinting doubleArray elements: ";
    iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), printElementD);
    for (size_t i = 0; i < sizeof(doubleArray) / sizeof(doubleArray[0]); ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "doubleArray elements after incrementing by 1: ";
    iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), incrementByOne);
    for (size_t i = 0; i < sizeof(doubleArray) / sizeof(doubleArray[0]); ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

	std::cout << "doubleArray elements after decrementing by 1: ";
    iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), decrementByOne);
    for (size_t i = 0; i < sizeof(doubleArray) / sizeof(doubleArray[0]); ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}






