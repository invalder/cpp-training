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

	output = static_cast<unsigned char>(this->_input);
	if (this->_input >=0 && this->_input <= 126) // ascii
	{
		if (this->_input >=32 && this->_input <= 126)
			std::cout << "char: '" << output << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		if (this->_strInput.length() == 1)
		{
			output = static_cast<unsigned char>(this->_strInput[0]);
			if (output >=32 && output <= 126)
				std::cout << "char: '" << output << "\'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		else
			std::cout << "char: Non displayable" << std::endl;
	}
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

bool	ScalarConverter::isDigit(const std::string& str)
{
	// Check if the string is empty
	if (str.empty()) {
		return false;
	}

	// Check the first character for a sign
	size_t index = 0;
	if (str[index] == '+' || str[index] == '-') {
		// Skip the sign character
		++index;
	}

	// Check if the string is only a decimal point or a dot suffix
	if (str[index] == '.' && (index + 1 == str.length() || str[index + 1] != 'f')) {
		// Single decimal point is not a valid number
		return true;
	}

	// Check the remaining characters for digits or a decimal point
	bool hasDigits = false;
	bool hasDecimalPoint = false;
	for (; index < str.length(); ++index) {
		if (std::isdigit(str[index])) {
			hasDigits = true;
		} else if (str[index] == '.' && !hasDecimalPoint) {
			hasDecimalPoint = true;
		} else if (str[index] == 'f' && index + 1 == str.length() && hasDigits) {
			// Check for ".f" suffix
			return true;
		} else {
			return false;
		}
	}

	// Check if there is at least one digit
	if (!hasDigits) {
		return false;
	}

	// If a decimal point is present, ensure it is not the last character
	if (hasDecimalPoint && index == str.length() - 1) {
		return false;
	}

	return true;
}

void	ScalarConverter::printImpossible(void)
{
	std::cout << "char: impossible"  << std::endl;
	std::cout << "int: impossible"  << std::endl;
	std::cout << "float: impossible"  << std::endl;
	std::cout << "double: impossible"  << std::endl;
}

void	ScalarConverter::printConvertedValues(void)
{
	if(this->isDigit(this->_strInput))
	{
		this->convertToChar();
		this->convertToInt();
		this->convertToFloat();
		this->convertToDouble();
	}
	else
	{
		if (this->isNaN(this->_input) || this->isInf(this->_input))
		{
			this->convertToChar();
			this->convertToInt();
			this->convertToFloat();
			this->convertToDouble();
		}
		else
			this->printImpossible();
	}

}
