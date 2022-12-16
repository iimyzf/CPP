/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:38:03 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/16 02:38:03 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(const std::string& newName, Weapon& weap) {
	name = newName;
	weapon = &weap;
}

HumanA::~HumanA() {}