/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:56:24 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/04 09:39:56 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string& str) {
	int type = which_type(str);
	if (type == 0) {
		std::cerr << "ERROR:" << std::endl;
		return ;
	}

	if (str == "+inff") {
	    std::cout << "char: impossible" << std::endl;
	    std::cout << "int: impossible" << std::endl;
	    std::cout << "float: +inff" << std::endl;
	    std::cout << "double: +inf" << std::endl;
	} else if (str == "-inff") {
	    std::cout << "char: impossible" << std::endl;
	    std::cout << "int: impossible" << std::endl;
	    std::cout << "float: -inff" << std::endl;
	    std::cout << "double: -inf" << std::endl;
	} else if (str == "nanf") {
	    std::cout << "char: impossible" << std::endl;
	    std::cout << "int: impossible" << std::endl;
	    std::cout << "float: nanf" << std::endl;
	    std::cout << "double: nan" << std::endl;
	} else if (str == "+inf") {
	    std::cout << "char: impossible" << std::endl;
	    std::cout << "int: impossible" << std::endl;
	    std::cout << "float: +inff" << std::endl;
	    std::cout << "double: +inf" << std::endl;
	} else if (str == "-inf") {
	    std::cout << "char: impossible" << std::endl;
	    std::cout << "int: impossible" << std::endl;
	    std::cout << "float: -inff" << std::endl;
	    std::cout << "double: -inf" << std::endl;
	} else if (str == "nan") {
	    std::cout << "char: impossible" << std::endl;
	    std::cout << "int: impossible" << std::endl;
	    std::cout << "float: nanf" << std::endl;
	    std::cout << "double: nan" << std::endl;
	}

	if (type == CHAR)
		to_char(str[0]);
	else if (type == INT)
		to_int(std::atoi(str.c_str()));
	else if (type == FLOAT)
		to_float(std::atof(str.c_str()));
	else if (type == DOUBLE)
		to_double(std::strtod(str.c_str(), 0));
}

void	ScalarConverter::to_int(int i) {

	if (std::isprint(i))
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: "<< i << std::endl;

	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(i) << std::endl;
}

void	ScalarConverter::to_float(float f) {

	if (std::isprint(f))
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (std::isnan(f) || std::isinf(f) || f > INT_MAX || f < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: "<< static_cast<int>(f) << std::endl;

	std::cout << "float: " << std::setprecision(1) << std::fixed << f << 'f' << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::to_double(double d) {

	if (std::isprint(d))
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (std::isnan(d) || std::isinf(d) || d > INT_MAX || d < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: "  << std::setprecision(1) << std::fixed << static_cast<float>(d) << 'f' << std::endl;
	std::cout << "double: "  << std::setprecision(1) << std::fixed << d << std::endl;
}

void	ScalarConverter::to_char(char c) {
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << static_cast<double>(c) << std::endl;
}

int		ScalarConverter::which_type(const std::string& str) {

	char *end = NULL;
	std::strtod(str.c_str(), &end);

	if (str == "nanf" || str == "+inff" || str == "-inff" || str == "nan" || str == "+inf" || str == "-inf")
		return (NANF);
	if (end[0] == '\0' && (int)str.find(".") == -1)
		return (INT);
	else if (end[0] == '\0')
		return (DOUBLE);
	else if (std::string(end) == "f")
		return (FLOAT);
	else if (str.size() == 1 && std::isprint(str[0]))
		return (CHAR);

	return (0);
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	(void) other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void) other;
	return *this;
}

ScalarConverter::~ScalarConverter() {}