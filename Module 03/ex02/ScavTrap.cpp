/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:14:20 by mac               #+#    #+#             */
/*   Updated: 2023/02/25 10:51:52 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::attack(const std::string& target) {
	if (energyPoints > 0) {
		std::cout << name << " attacks " << target << " with a ScavTrap attack causing " << attackDamage << " hit points" << std::endl;
		energyPoints--;
	}
	else
		std::cout << name << " has no energy points left!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor got called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.name) {
	std::cout << "ScavTrap Copy constructor got called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap Copy assignment operator got called!" << std::endl;
	name = other.name;
	return *this;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " has been constructed" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " has been destroyed" << std::endl;
}