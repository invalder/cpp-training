#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{

}

ScalarConverter::ScalarConverter(char *str) : _strInput(std::string(str)), _input(static_cast<double>(atof(str)))
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
		this->_strInput = rhs._strInput;
	}
	return (*this);
}

bool	ScalarConverter::isNaN(double value)
{
	return (value != value);
}

bool	ScalarConverter::isNaN(float value)
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
	{
		std::cout << "char: impossible" << std::endl;
		return (0);
	}

	if (this->_strInput.length() == 1)
	{
		output = static_cast<unsigned char>(this->_strInput[0]);
		if (std::isprint(output) == 0)
		{
			std::cout << "char: Non displayable" << std::endl;
			return (0);
		}
		std::cout << "char: '" << output << "\'" << std::endl;
		return (output);
	}
	else
		std::cout << "char: Non displayable" << std::endl;

	return (0);
}

int	ScalarConverter::convertToInt(void)
{
	int	output;

	try
	{
		output = static_cast<int>(this->_input);
	}
	catch (std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
		return (0);
	}
	if (this->isNaN(this->_input) || this->isInf(this->_input))
	{
		std::cout << "int: impossible" << std::endl;
		return (0);
	}
	std::cout << "int: " << output << std::endl;

	return (output);
}

float	ScalarConverter::convertToFloat(void)
{
	float	output;

	try
	{
		output = static_cast<float>(this->_input);
	}
	catch (std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
		return (0);
	}

	if (output - static_cast<int>(output) == 0)
		std::cout << "float: " << output << ".0f" << std::endl;
	else
		std::cout << "float: " << output << "f" << std::endl;

	return (output);
}

double	ScalarConverter::convertToDouble(void)
{
	double	output;

	try
	{
		output = static_cast<double>(this->_input);
	}
	catch (std::exception &e)
	{
		std::cout << "double: impossible" << std::endl;
		return (0);
	}

	if (output - static_cast<int>(output) == 0)
		std::cout << "double: " << output << ".0" << std::endl;
	else
		std::cout << "double: " << output << std::endl;

	return (output);
}


void	ScalarConverter::printConvertedValues(void)
{
	this->convertToChar();
	this->convertToInt();
	this->convertToFloat();
	this->convertToDouble();
}
