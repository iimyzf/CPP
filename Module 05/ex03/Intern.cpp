/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:50:23 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/01 22:52:44 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

AForm*	Intern::makeForm(std::string name, std::string target) {
	int index = -1;
	std::string tab[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	index = ((name == tab[0]) * 0 + (name == tab[1]) * 1 + (name == tab[2]) * 2);

	if (index == 0 && name != tab[0])
		index = -1;

	switch (index) {
		case 0:
			std::cout << "Intern creates " << tab[index] << std::endl;
			return (new PresidentialPardonForm(target));
		case 1:
			std::cout << "Intern creates " << tab[index] << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << tab[index] << std::endl;
			return (new ShrubberyCreationForm(target));
		default:
			throw(NotFound());
			break;
	}
}

const char* Intern::NotFound::what() const throw() {
    return "Form not found.";
}

Intern::Intern() {}

Intern::Intern(const Intern& other) { (void)other; }

Intern&	Intern::operator=(const Intern& other) {
	(void) other;
	return *this;
}

Intern::~Intern() {}