/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:44:27 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/27 22:56:10 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name) : _name(name) {
	for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
}

Character::Character(const Character& other) {
	_name = other._name;
	for (int i = 0 ; i < 4; i++) {
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character&	Character::operator=(const Character& other) {
	if (this != &other) {
		_name = other._name;
		for (int i = 0 ; i < 4; i++) {
			if (inventory[i]) {
				delete inventory[i];
				inventory[i] = NULL;
			}
			else if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

std::string	const & Character::getName() const {
	return _name;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && inventory[idx]) {
		inventory[idx] = NULL;
		return;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL) {
		inventory[idx]->use(target);
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
}
