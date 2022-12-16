/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:05:17 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/16 18:05:17 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void	Replace::get_string(std::string* txt, const std::string& s1, const std::string& s2) {

	std::size_t	index = 0;

	while (1) {
		index = (*txt).find(s1, index);
		if (index == std::string::npos)
			break ;

		std::string	first = (*txt).substr(0, index);
		first += s2;

		std::string	last = (*txt).substr(index + s1.length());
		index += s2.length();

		(*txt) = first + last;
	}	
}

void	Replace::ft_replace(const std::string& text, const std::string& s1, const std::string& s2) {

	if (text.empty() || s1.empty() || s2.empty()) {
		std::cout << "Error occured, please check again!" << std::endl;
		exit (EXIT_FAILURE);
	}

	std::ifstream	infile(text, std::ifstream::in);

	if (!infile) {
		std::cout << "Can't open the file!" << std::endl;
		exit (EXIT_FAILURE);
	}

	std::ostringstream	data;
	data << infile.rdbuf();

	std::string	temp = data.str();
	
	infile.close();

	Replace::get_string(&temp, s1, s2);

	std::ofstream	outfile(text + ".replace", std::ostream::out);

	if (!outfile) {
		std::cout << "Can't open the file!" << std::endl;
		exit (EXIT_FAILURE);
	}

	outfile << temp;

	outfile.close();
}


Replace::Replace() {}
Replace::~Replace() {}
