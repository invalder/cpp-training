#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

// Template function to swap two elements
template <typename T>
void swap(T& x, T& y) {
    T temp = x;
    x = y;
    y = temp;
}

// Template function to return the smaller of the two values
template <typename T>
const T& min(const T& a, const T& b) {
    return (b < a) ? b : a;
}

// Template function to return the larger of the two values
template <typename T>
const T& max(const T& a, const T& b) {
    return (a < b) ? b : a;
}

#endif
