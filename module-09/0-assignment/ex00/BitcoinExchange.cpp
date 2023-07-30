#include "BitcoinExchange.hpp"

void	send_err(std::string err, std::string extra)
{
	std::cerr << err << extra << std::endl;
}

void	send_err(std::string err, double extra)
{
	std::cerr << err << extra << std::endl;
}

BitcoinExchange::BitcoinExchange(void) : _vname(VOLUME_EXAMPLE), _ratefile(EXCHANGE_RATE), _volumefile(VOLUME_EXAMPLE)
{
	try
	{
		if (!_ratefile.is_open() || !_volumefile.is_open()) {
			throw FileOpenException(ERR_OPN);
		}
	}
	catch(const FileOpenException& e)
	{
		throw e;
	}
}

BitcoinExchange::BitcoinExchange(std::string data) : _vname(VOLUME_EXAMPLE), _ratefile(EXCHANGE_RATE), _volumefile(data)
{
	try
	{
		if (!_ratefile.is_open() || !_volumefile.is_open()) {
			throw FileOpenException(ERR_OPN);
		}
	}
	catch(const FileOpenException& e)
	{
		throw e;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & ref) : _vname(ref._vname), _ratefile(EXCHANGE_RATE), _volumefile(ref._vname)
{
	*this = ref;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange & rhs)
{
	if (this != &rhs)
	{
		this->_vname = rhs._vname;
		this->_volumefile.close();
		this->_volumefile.open(this->_vname);
	}
	return(*this);
}

BitcoinExchange::~BitcoinExchange(void)
{

}

void	BitcoinExchange::readAndStoreRate(void)
{
	_rate.clear();
	std::string line;
	std::getline(_ratefile, line);
	while (std::getline(_ratefile, line))
	{
		std::istringstream iss(line);
		std::string date;
		double exchange_rate = 0.0;
		if (std::getline(iss, date, ',') && (iss >> exchange_rate)) {
			// Now the key and value are stored in the respective variables
			std::size_t found = date.find_last_not_of(WHT_SPC);
			if (found!=std::string::npos)
				date.erase(found + 1);
			else
				date.clear(); // str is all whitespace

			// put the value into the multimap
			if (!this->dataValidator(date, exchange_rate))
			{
				send_err(ERR_DATA, line);
			}
			else
				_rate.insert(std::make_pair(date, exchange_rate));
		} else {
			send_err(ERR_PARSE, line);
		}
	}
}

// Function to search for an exact date in the multimap
double BitcoinExchange::getExchangeRate(const std::string& date) const
{
	std::map<std::string, double>::const_iterator it = _rate.find(date);
	if (it != _rate.end()) {
		// Exact date found
		return it->second;
	}

	// Date not found, search for the closest earlier date
	it = _rate.lower_bound(date);
	if (it == _rate.begin()) {
		// The given date is earlier than the earliest date in the map
		return 0.0; // or handle this case as needed
	} else {
		// Move the iterator back to get the closest earlier date
		--it;
		return it->second;
	}
}

void	BitcoinExchange::readAndStoreVolume(void)
{
	_volume.clear();
	std::string line;
	std::getline(_volumefile, line);
	while (std::getline(_volumefile, line))
	{
		std::istringstream iss(line);
		std::string date;
		double volume = 0.0;
		double rate = 0.0;

		if (std::getline(iss, date, '|') && (iss >> volume))
		{
			std::size_t found = date.find_last_not_of(WHT_SPC);
			if (found!=std::string::npos)
				date.erase(found + 1);
			else
				date.clear(); // str is all whitespace

			if (this->volumeValidator(date, volume))
			{
				rate = this->getExchangeRate(date);
				std::cout << date << " => " << volume << " = " << rate * volume << std::endl;
			}
		}
		else
		{
			send_err(ERR_BAD, line);
			continue;
		}
	}
}

bool	rateCheck(double value)
{
	if (value < 0)
		return (send_err(ERR_NEG, value), 0);
	return (1);
}

bool	volumeCheck(double value)
{

	if (value < 0)
		return (send_err(ERR_NEG, ""), 0);
	if (value > 1000.0)
		return (send_err(ERR_LARGE, ""), 0);
	return (1);
}

bool	BitcoinExchange::dataValidator(std::string date, double value)
{
	if (!this->dateValidator(date))
		return (0);
	if (!rateCheck(value))
		return (0);
	return (1);
}

bool	BitcoinExchange::volumeValidator(std::string date, double value)
{
	if (!this->dateValidator(date))
		return (0);
	if (!volumeCheck(value))
		return (0);
	return (1);
}

bool	isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool	isValidDate(int year, int month, int day) {
	if (year < 0 || month < 1 || month > 12 || day < 1)
		return false;

	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (isLeapYear(year))
		daysInMonth[2] = 29;

	return day <= daysInMonth[month];
}

bool	BitcoinExchange::dateValidator(std::string date)
{
	int year, month, day;
	char dash1, dash2;

	// Use istringstream to extract year, month, and day
	std::istringstream iss(date);
	if (!(iss >> year >> dash1 >> month >> dash2 >> day)) {
		return false;
	}

	// Check if the extraction was successful and the delimiter is correct
	if (iss.fail() || dash1 != '-' || dash2 != '-') {
		return false;
	}

	return isValidDate(year, month, day);
}

void	BitcoinExchange::printExchangeRate(void)
{
	// Print the data from the multimap
	std::cout << "Date\t\tExchange Rate" << std::endl;
	std::cout << "------------------------" << std::endl;
	for (std::multimap<std::string, double>::const_iterator it = _rate.begin(); it != _rate.end(); ++it) {
		std::cout << it->first << "\t" << it->second << std::endl;
	}
}

// Function to open a file and return a file stream
std::ifstream*	openFile(const std::string& filename) {
	std::ifstream* file = new std::ifstream(filename);
	if (!file || !file->is_open()) {
		delete file;
		std::ostringstream oss;
		oss << "Error opening file " << filename;
		throw FileOpenException(oss.str());
	}
	return file;
}
