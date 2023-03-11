#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "b == b" << (a == b) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

/*
Numeric                    Floating Point
00000000 00000000 00000000 00000000
(2^23 to 2^0)             (2^-1 to 2^-7)
*/
