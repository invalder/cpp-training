#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

// Function template iter
template <typename T, typename Function>
void iter(T* array, size_t length, Function func) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// Example function to demonstrate using iter
void printElementI(int element) {
    std::cout << element << " ";
}

void printElementD(double& element) {
    std::cout << element << " ";
}

void incrementByOne(double& element) {
    element += 1.0;
}

void decrementByOne(double& element) {
    element -= 1.0;
}

#endif
