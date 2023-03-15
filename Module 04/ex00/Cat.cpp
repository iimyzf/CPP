/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:44:53 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/27 18:47:36 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound() const {
	std::cout << "Meow!!!" << std::endl;
}

Cat::Cat() {
	type = "Cat";
	std::cout << "Cat default constructor got called!" << std::endl;
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat copy constructor got called!" << std::endl;
	type = other.type;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator got called!" << std::endl;
	type = other.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat desctructor got called!" << std::endl;
}