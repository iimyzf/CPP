/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:32:09 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/26 20:26:42 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & other) : AMateria(other._type) {}

Cure&	Cure::operator=(const Cure& other) {
	_type = other._type;
	return *this;
}

Cure::~Cure() {}

AMateria	*Cure::clone() const {
	Cure *newCure = new Cure();
	return newCure;
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}