/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:56:20 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/28 10:29:46 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "iostream"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		source[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; i++) {
		if (other.source[i])
			source[i] = other.source[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (source[i]) {
                delete source[i];
                source[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++) {
            if (other.source[i])
                source[i] = other.source[i]->clone();
        }
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria* materia) {
    for (int i = 0; i < 4; i++) {
		if (!source[i]) {
			source[i] = materia;
			return;
		}
	}
}

AMateria*   MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (source[i] && source[i]->getType() == type) {
            return source[i]->clone();
        }
    }
    return NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
        if (source[i])
            delete source[i];
    }
}
