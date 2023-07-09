#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{

}

ScalarConverter::ScalarConverter(char *str) : _input(static_cast<double>(atof(str)))
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
	*this = other;
}

ScalarConverter::~ScalarConverter(void)
{

}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &rhs)
{
	if (this != &rhs)
	{
		this->_input = rhs._input;
	}
	return (*this);
}

bool	ScalarConverter::isNaN(double value)
{
	return (value != value);
}

bool	ScalarConverter::isNaN(double value)
{
	return (value != value);
}

bool	ScalarConverter::isInf(double value) {
	return (value == HUGE_VAL || value == -HUGE_VAL);
}

bool	ScalarConverter::isInf(float value) {
	return (value == HUGE_VAL || value == -HUGE_VAL);
}

char	ScalarConverter::convertToChar(void)
{
	char	output;

	if (this->isNaN(this->_input) || this->isInf(this->_input))
}

int	ScalarConverter::convertToInt(void)
{

}

float	ScalarConverter::convertToFloat(void)
{

}

double	ScalarConverter::convertToDouble(void)
{

}

