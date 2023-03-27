#ifndef	BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float> btc;

	public:
		std::string	getDate(std::string date);
		int			checkDate(std::string date);
		float		getValue(std::string value);
		void		checkValue(const float& value);
		void		checkLine(std::string& line);
		void		readData(const std::string& data);

		BitcoinExchange();
		BitcoinExchange(const std::string& data);
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();
};

#endif