/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:38:34 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/22 16:55:27 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType() {
	return type;
}

void	Weapon::setType(const std::string& newType) {
	type = newType;
}

Weapon::Weapon() {}

Weapon::Weapon(const std::string& type) {
	setType(type);
}

Weapon::~Weapon() {}
