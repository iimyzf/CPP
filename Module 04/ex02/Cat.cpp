/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:44:53 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/27 21:33:21 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Brain &Cat::getBrain() const {
	return *brain;
}

void Cat::makeSound() const {
	std::cout << "Meow!!!" << std::endl;
}

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor got called!" << std::endl;
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat copy constructor got called!" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other) {
	if (brain)
		delete brain;
	std::cout << "Cat copy assignment operator got called!" << std::endl;
	this->brain = new Brain(*other.brain);
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat desctructor got called!" << std::endl;
}