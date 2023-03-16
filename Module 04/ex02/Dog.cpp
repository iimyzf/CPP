/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:10:21 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/27 21:33:38 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Brain &Dog::getBrain() const {
	return *brain;
}

void Dog::makeSound() const {
	std::cout << "Woof!!!" << std::endl;
}

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor got called!" << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog copy constructor got called!" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other) {
	if (brain)
		delete brain;
	std::cout << "Dog copy assignment operator got called!" << std::endl;
	this->brain = new Brain(*other.brain);
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog desctructor got called!" << std::endl;
}