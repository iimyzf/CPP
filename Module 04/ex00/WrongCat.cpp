/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:29:55 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/27 18:49:02 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound() const {
	std::cout << "WrongCat sound!!!" << std::endl;
}

WrongCat::WrongCat() {
	type = "Wrong Cat";
	std::cout << "WrongCat default constructor got called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "WrongCat copy constructor got called!" << std::endl;
	type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat copy assignment operator got called!" << std::endl;
	type = other.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat desctructor got called!" << std::endl;
}