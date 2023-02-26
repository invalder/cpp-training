#include "Integer.hpp"
#include <iostream>

int main(){
	Integer x(30);
	Integer y(10);
	Integer z(0);
	Integer b;
	Integer *a = new Integer[5];

	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	std::cout << "Value of z : " << z << std::endl;
	std::cout << "Value of a : " << a << std::endl;
	std::cout << "Value of b : " << b << std::endl;

	std::cout << "Value of y : " << y << std::endl;

	y = Integer(12);
	y = 14;

	z = x - (y + 20);
	// std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
	z = y - z;
	std::cout << "Value of z : " << z << std::endl;

	delete[] a;

	return 0;
}
