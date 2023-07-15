#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <sstream>
# include <cstdlib>
# include <iomanip>
# include <limits>
# include <cmath>
# include <stdexcept>
# include <iostream>
# include <string>

class ScalarConverter {
	private:
		std::string	_strInput;
		double		_input;
	public:
		ScalarConverter(void);
		ScalarConverter(char *str);
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter& operator=(ScalarConverter const &rhs);
		~ScalarConverter(void);

		char	convertToChar(void);
		int		convertToInt(void);
		float	convertToFloat(void);
		double	convertToDouble(void);

		bool	isNaN(double value);
		bool	isNaN(float value);

		bool	isInf(double value);
		bool	isInf(float value);

		bool	isDigit(const std::string& str);

		void	printConvertedValues(void);
		void	printImpossible(void);
};

#endif
