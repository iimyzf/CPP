#include "BitcoinExchange.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Input: ./btc file" << std::endl;
		return 1;
	}
	BitcoinExchange	btc("data.csv");
	btc.readData(av[1]);
	return 0;
}