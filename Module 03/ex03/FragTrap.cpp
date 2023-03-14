/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:45:13 by mac               #+#    #+#             */
/*   Updated: 2023/02/25 10:50:43 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::HighFiveGuys() {
	std::cout << "High Five got requested or something like that!" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (energyPoints > 0)
	{
		std::cout << name << " attacks " << target << " with a FragTrap attack causing " << attackDamage << " hit points" << std::endl;
		energyPoints--;
	}
	else
		std::cout << name << " has no energy points left!" << std::endl;
}

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor got called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name) {
	std::cout << "FragTrap Copy constructor got called!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap Copy assignment operator got called!" << std::endl;
	name = other.name;
	return *this;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << name << " has been constructed" << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " has been destroyed" << std::endl;
}