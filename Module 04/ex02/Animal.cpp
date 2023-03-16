/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:24:41 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/28 10:18:50 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string		Animal::getType() const {
	return type;
}

Animal::Animal() {
	std::cout << "Animal default constructor got called!" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Animal copy constructor got called!" << std::endl;
}

Animal&		Animal::operator=(const Animal& other) {
	std::cout << "Animal copy assignment operator got called!" << std::endl;
	type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor got called!" << std::endl;
}