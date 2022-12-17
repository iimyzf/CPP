/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:41:35 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/17 18:41:35 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "\033[1m[ DEBUG ]\033[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "\033[1m[ INFO ]\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "\033[1m[ WARNING ]\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "\033[1m[ ERROR ]\033[0m" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int	checker = 0;

	void (Harl::*ptmf[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (level == msg[i])
			checker = i;
	switch (checker) {
		case 0:
			(this->*(ptmf[0]))();
		case 1:
			(this->*(ptmf[1]))();
		case 2:
			(this->*(ptmf[2]))();
		case 3:
			(this->*(ptmf[3]))();
			break;
	}
}

Harl::Harl() {}
Harl::~Harl() {}