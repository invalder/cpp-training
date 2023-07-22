#include "whatever.hpp"

int main() {
	std::cout << std::endl;
    {
		int intA = 5, intB = 10;
		double doubleA = 3.5, doubleB = 2.0;
		const int constIntA = 8, constIntB = 3;
		const double constDoubleA = 6.7, constDoubleB = 9.2;

		std::cout << "Original integer values: " << intA << ", " << intB << std::endl;
		std::cout << "Original double values: " << doubleA << ", " << doubleB << std::endl;
		std::cout << "Original const integer values: " << constIntA << ", " << constIntB << std::endl;
		std::cout << "Original const double values: " << constDoubleA << ", " << constDoubleB << std::endl;

		// Test the swap function
		::swap(intA, intB);
		::swap(doubleA, doubleB);
		// swap(constIntA, constIntB); // This should also work since the arguments are non-const references
		// swap(constDoubleA, constDoubleB); // This should also work since the arguments are non-const references

		std::cout << "After swapping, integer values: " << intA << ", " << intB << std::endl;
		std::cout << "After swapping, double values: " << doubleA << ", " << doubleB << std::endl;
		// std::cout << "After swapping, const integer values: " << constIntA << ", " << constIntB << std::endl;
		// std::cout << "After swapping, const double values: " << constDoubleA << ", " << constDoubleB << std::endl;

		// Test the min and max functions
		int intMin = ::min(intA, intB);
		int intMax = ::max(intA, intB);
		double doubleMin = ::min(doubleA, doubleB);
		double doubleMax = ::max(doubleA, doubleB);
		const int constIntMin = ::min(constIntA, constIntB);
		const int constIntMax = ::max(constIntA, constIntB);
		const double constDoubleMin = ::min(constDoubleA, constDoubleB);
		const double constDoubleMax = ::max(constDoubleA, constDoubleB);

		std::cout << "Min of integers: " << intMin << std::endl;
		std::cout << "Max of integers: " << intMax << std::endl;
		std::cout << "Min of doubles: " << doubleMin << std::endl;
		std::cout << "Max of doubles: " << doubleMax << std::endl;
		std::cout << "Min of const integers: " << constIntMin << std::endl;
		std::cout << "Max of const integers: " << constIntMax << std::endl;
		std::cout << "Min of const doubles: " << constDoubleMin << std::endl;
		std::cout << "Max of const doubles: " << constDoubleMax << std::endl;
	}

	std::cout << std::endl;

	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
    return 0;
}
