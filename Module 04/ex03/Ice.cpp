/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:20:10 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/26 20:25:30 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & other) : AMateria(other._type) {}

Ice&	Ice::operator=(const Ice& other) {
	_type = other._type;
	return *this;
}

Ice::~Ice() {}

AMateria	*Ice::clone() const {
	Ice *newIce = new Ice();
	return newIce;
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}