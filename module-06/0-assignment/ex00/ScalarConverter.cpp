#include "ScalarConverter.hpp"
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <cmath>
#include <stdexcept>
#include <iostream>


ScalarConverter::ScalarConverter() : _isNan(0) {
	// Constructor implementation (if needed)
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	// Copy constructor implementation (if needed)
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	if (this == &other) {
		return *this;
	}
	// Assignment operator implementation (if needed)
	return *this;
}

ScalarConverter::~ScalarConverter() {
	// Destructor implementation (if needed)
}

char ScalarConverter::convertToChar(const std::string& str) const {
	if (str.empty()) {
		throw std::runtime_error("Empty string cannot be converted to char.");
	}
	return str[0];
}

int ScalarConverter::convertToInt(const std::string& str) const {
	std::istringstream intStream(str);
	int num;
	if (!(intStream >> num)) {
		throw std::runtime_error("Failed to convert string to int.");
	}
	return num;
}

float ScalarConverter::convertToFloat(const std::string& str) {
	float fnum = static_cast<float>(atof(str.c_str()));
	if (std::numeric_limits<float>::has_quiet_NaN && fnum != fnum) {
		_isNan = 1;
		throw std::runtime_error("Failed to convert string to float.");
	}
	return fnum;
}

double ScalarConverter::convertToDouble(const std::string& str) {
	double dnum = atof(str.c_str());
	if (std::numeric_limits<double>::has_quiet_NaN && dnum != dnum) {
		_isNan = 1;
		throw std::runtime_error("Failed to convert string to double.");
	}
	return dnum;
}

bool ScalarConverter::isInfinity(float value) const {
	return (value == std::numeric_limits<float>::infinity() || value == -std::numeric_limits<float>::infinity());
}

bool ScalarConverter::isInfinity(double value) const {
	return (value == std::numeric_limits<double>::infinity() || value == -std::numeric_limits<double>::infinity());
}

void ScalarConverter::printConvertedValues(const std::string& str) const {
	ScalarConverter converter;

	try {
		char ch = converter.convertToChar(str);
		std::cout << "Converted char: " << ch << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error converting to char: Non displayable" << std::endl;
	}

	try {
		int num = converter.convertToInt(str);
		std::cout << "Converted int: " << num << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error converting to int: Impossible" << std::endl;
	}

	try {
		float fnum = converter.convertToFloat(str);
		if (fnum == std::numeric_limits<float>::infinity()) {
			std::cout << "Converted float: +inf" << std::endl;
		} else if (fnum == -std::numeric_limits<float>::infinity()) {
			std::cout << "Converted float: -inf" << std::endl;
		} else if (std::numeric_limits<float>::has_quiet_NaN && fnum != fnum) {
			std::cout << "Converted float: nan" << std::endl;
		} else {
			std::cout << "Converted float: " << fnum << std::endl;
		}
	} catch (const std::exception& e) {
		if (converter._isNan)
			std::cout << "Converted float: nan" << std::endl;
		else
			std::cout << "Error converting to float: Non displayable" << std::endl;
	}

	try {
		double dnum = converter.convertToDouble(str);
		if (dnum == std::numeric_limits<double>::infinity()) {
			std::cout << "Converted double: +inf" << std::endl;
		} else if (dnum == -std::numeric_limits<double>::infinity()) {
			std::cout << "Converted double: -inf" << std::endl;
		} else if (std::numeric_limits<double>::has_quiet_NaN && dnum != dnum) {
			std::cout << "Converted double: nan" << std::endl;
		} else {
			std::cout << "Converted double: " << dnum << std::endl;
		}
	} catch (const std::exception& e) {
		if (converter._isNan)
			std::cout << "Converted double: nan" << std::endl;
		else
			std::cout << "Error converting to double: Non displayable" << std::endl;
	}
}
