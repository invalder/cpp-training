#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>

class ScalarConverter {
private:
	int	_isNan;
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter& other);
	~ScalarConverter();

	char	convertToChar(const std::string& str) const;
	int		convertToInt(const std::string& str) const;
	float	convertToFloat(const std::string& str);
	double	convertToDouble(const std::string& str);
	bool	isInfinity(float value) const;
	bool	isInfinity(double value) const;
	void	printConvertedValues(const std::string& str) const;
};

#endif  // SCALAR_CONVERTER_HPP
