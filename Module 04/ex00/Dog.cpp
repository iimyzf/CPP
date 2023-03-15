/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:10:21 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/27 18:48:01 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound() const {
	std::cout << "Woof!!!" << std::endl;
}

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog default constructor got called!" << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog copy constructor got called!" << std::endl;
	type = other.type;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator got called!" << std::endl;
	type = other.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog desctructor got called!" << std::endl;
}