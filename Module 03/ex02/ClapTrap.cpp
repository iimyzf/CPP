/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:47:42 by mac               #+#    #+#             */
/*   Updated: 2023/02/25 10:51:30 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target) {
	if (energyPoints > 0) {
		std::cout << name << " attacks " << target << " causing " << attackDamage << " hit points" << std::endl;
		energyPoints--;
	}
	else
		std::cout << name << " has no energy points left!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints > amount)
		hitPoints -= amount;
	else
		hitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints > 0) {
		hitPoints += amount;
		energyPoints--;
	}
	else
		std::cout << "no points left to get repaired!" << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Default constructor got called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap Copy constructor got called!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap Copy assignment operator got called!" << std::endl;
	name = other.name;
	return *this;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " has been destroyed" << std::endl;
}