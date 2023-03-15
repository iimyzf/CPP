/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:43:04 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/25 22:35:48 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor got called!" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = "Random Idea";
	}
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor got called!" << std::endl;	
	*this = other;
}

Brain&	Brain::operator=(const Brain& other) {
	std::cout << "Brain copy assignment operator got called!" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor got called!" << std::endl;
}