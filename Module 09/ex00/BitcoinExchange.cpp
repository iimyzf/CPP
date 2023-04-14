#include "BitcoinExchange.hpp"

std::string	BitcoinExchange::getDate(std::string date) {
	std::string	isValid = "0123456789-";
	int	counter = count(date.begin(), date.end(), '-');
	if (counter != 2 || date[date.size() - 1] != ' ') {
		std::cout << "Error: bad date => " << date << std::endl;
		return "";
	}

	date.erase(--date.end());
	for (unsigned long i = 0; i < date.size(); i++)
	{
		if (isValid.find(date[i]) == std::string::npos) {
			std::cout << "Error: bad date => " << date << std::endl;
			return "";
		}
	}
	return date;
}

float	BitcoinExchange::getValue(std::string value) {
	std::string	isValid = "0123456789.,-";
	int	counterDot = count(value.begin(), value.end(), '.');
	int	counterComma = count(value.begin(), value.end(), ',');

	if (counterDot > 1 || counterComma > 1) {
		std::cout << "Error: bad value => " << value << std::endl;
		return -1;
	}
	if (counterDot == 1 && counterComma == 1) {
		std::cout << "Error: bad value => " << value << std::endl;
		return -1;
	}
	if (counterComma == 1)
		std::replace(value.begin(), value.end(), ',', '.');

	size_t pos = value.find(' ');
	if (pos != std::string::npos) {
		std::string input_value = value.substr(pos + 1);
		if (input_value.find_first_not_of(isValid) != std::string::npos) {
			std::cout << "Error: bad input => " << value << std::endl;
			return -1;
		}
	}

	float	number = 0;
	try {
		number = std::stof(value);
		if (number < 0) {
			std::cout << "Error: not a positive number." << std::endl;
			return -1;
		}
		if (number > 1000.0) {
			std::cout << "Error: too large a number." << std::endl;
			return -1;
		}
	} catch (const std::exception& e) {
		std::cout << "Error: bad input." << std::endl;
		exit (1);
	}
	return number;
}


int	BitcoinExchange::checkDate(std::string date) {
	std::stringstream ss(date);
	std::string yearStr, monthStr, dayStr;
	std::getline(ss, yearStr, '-');
	std::getline(ss, monthStr, '-');
	std::getline(ss, dayStr);

	try
	{
		int year = std::stoi(yearStr);
		int month = std::stoi(monthStr);
		int day = std::stoi(dayStr);

		if (year < 2009 || year > 2022) {
			std::cout << "Error: bad input => " << date << std::endl;
			return 1;
		}
		if (month < 1 || month > 12 || day < 1 || day > 31 || ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)) {
			std::cout << "Error: bad input => " << date << std::endl;
			return 1;
		}
		if (month == 2) {
			bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
			if (day > 29 || (day == 29 && !isLeapYear))
			{
				std::cout << "Error: bad input => " << date << std::endl;
				return 1;
			}
		}
	}
	catch (const std::exception &e) {
		exit(1);
	}
	return 0;
}

void	BitcoinExchange::checkLine(std::string& line) {
	int	counter = count(line.begin(), line.end(), '|');
	if (counter != 1) {
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}

	counter = line.find('|');
	std::string	date = getDate(line.substr(0, counter));
	float		value = getValue(line.substr(counter + 1));
	std::string	valueStr = line.substr(counter + 1);

	if (valueStr.empty()) {
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	if (value == -1)
		return ;

	int status = checkDate(date);
	if (status != 1) {
		std::map<std::string, float>::iterator	it;
		it = btc.find(date);
		if (it != btc.end())
			std::cout << date << " => " << value << " = " << value * it->second << std::endl;
		else {
			it = btc.begin();
			while (date > it->first && it != btc.end())
				it++;
			if (it != btc.begin())
				it--;
			std::cout << date << " => " << value << " = " << value * it->second << std::endl;
		}
	}
}

void BitcoinExchange::readData(const std::string &data) {
	std::ifstream file(data);
	if (!file.is_open()) {
		std::cout << "Error: can't open the file!" << std::endl;
		return ;
	}
	std::string line;
	while (std::getline(file, line)) {
		checkLine(line);
	}
}

BitcoinExchange::BitcoinExchange(const std::string& data) {
	std::ifstream	file(data);
	if (!file.is_open()) {
		std::cout << "Error: can't open the file!" << std::endl;
		return ;
	}
	std::string	line;
	while (std::getline(file, line)) {
		std::istringstream	iss(line);
		std::string	date;
		float		value;
		if (std::getline(iss, date, ',') && iss >> value)
			btc[date] = value;
	}
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		*this = other;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}