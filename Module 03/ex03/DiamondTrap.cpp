/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:37:04 by mac               #+#    #+#             */
/*   Updated: 2023/02/25 11:29:43 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default constructor got called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.name) {
	std::cout << "DiamondTrap Copy constructor got called!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap Copy assignment operator got called!" << std::endl;
	name = other.name;
	return *this;
}

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "DiamondTrap " << name << " has been constructed" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " has been destroyed" << std::endl;
}