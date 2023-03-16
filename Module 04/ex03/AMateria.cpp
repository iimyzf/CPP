/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:36 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/27 22:44:28 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

std::string	const & AMateria::getType() const { return _type; }

AMateria::AMateria(const AMateria& other) { _type = other._type; }

AMateria&	AMateria::operator=(const AMateria& other) {
	_type = other._type;
	return *this;
}

AMateria::AMateria() {}

void	AMateria::use(ICharacter& target) {
	(void)target;
}

AMateria::~AMateria() {}

