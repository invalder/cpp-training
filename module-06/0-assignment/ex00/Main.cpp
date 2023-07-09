#include <iostream>
#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "invalid arguments" << std::endl;
		return (1);
	}
	std::cout << "your input is " << argv[1] << std::endl;

	std::string str(argv[1]);

	ScalarConverter sc;

	sc.printConvertedValues(str);

	return (0);
}
