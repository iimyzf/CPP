/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:22:43 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:50:33 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

std::string	PresidentialPardonForm::getTarget() const { return _target; }

void	PresidentialPardonForm::beSigned(const Bureaucrat& bur) {
	if (bur.getGrade() <= 25)
		PresidentialPardonForm::_isSigned = true;
	else if (getGrade() > 25)
		throw GradeTooLowException();
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned())
		throw FormNotSigned();
	if (executor.getGrade() <= AForm::getExGrade())
		throw GradeTooHighException();
	
	std::cout << this->getTarget() << " has beem pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	AForm::operator=(other);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}