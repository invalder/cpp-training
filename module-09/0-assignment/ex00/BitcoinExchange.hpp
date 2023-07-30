#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <cstdlib>
# include <map>
# include <string>
# include <fstream>
# include <sstream>

# define EXCHANGE_RATE "data.csv"
# define VOLUME_EXAMPLE "example.csv"
# define WHT_SPC " \n\r\t\v\f"

# define ERR_PARSE "Error: parsing input: "
# define ERR_OPN "Error: could not open file. "
# define ERR_DATE "Error: Date Format Invalid. "
# define ERR_VOLUME "Error: Value Invalid. "
# define ERR_DATA "Error: DATA Format Fail. "
# define ERR_NEG "Error: not a positive number. "
# define ERR_LARGE "Error: too large number. "
# define ERR_BAD "Error: bad input => "

class BitcoinExchange
{
	private:
		std::string							_vname;

		std::ifstream						_ratefile;
		std::ifstream						_volumefile;

		std::multimap<std::string, double>	_rate;
		std::multimap<std::string, double>	_volume;

	public:
		BitcoinExchange(void);
		BitcoinExchange(std::string data);
		BitcoinExchange(const BitcoinExchange & ref);
		BitcoinExchange& operator=(const BitcoinExchange & rhs);

		~BitcoinExchange(void);

		void	readAndStoreRate(void);
		void	readAndStoreVolume(void);
		bool	dataValidator(std::string date, double value);
		bool	volumeValidator(std::string date, double value);
		bool	dateValidator(std::string date);

		void	printExchangeRate(void);
		double	getExchangeRate(const std::string& date) const;
};

// Custom exception for file opening errors
class FileOpenException {
	private:
		std::string	_message;
	public:
		FileOpenException(const std::string& msg) : _message(msg) {}
		const std::string& getMessage() const { return _message; }
};

std::ifstream* openFile(const std::string& filename);

#endif
