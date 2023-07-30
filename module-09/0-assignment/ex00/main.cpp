#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
		return (std::cerr << "./btc [volume_file]" << std::endl, 1);

	try {


		BitcoinExchange exchange(argv[1]);

		// Use the BitcoinExchange object...
		exchange.readAndStoreRate();

		// exchange.printExchangeRate();

		exchange.readAndStoreVolume();

	} catch (const FileOpenException& e) {
		std::cerr << "Exception: " << e.getMessage() << std::endl;
		return 1;
	}

	return 0;
	}
