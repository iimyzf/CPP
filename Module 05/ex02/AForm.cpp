/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:29:42 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/28 21:11:12 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

std::string	AForm::getName() const { return _name; }

bool	AForm::getIsSigned() const { return _isSigned; }

int	AForm::getGrade() const { return _grade; }

int	AForm::getExGrade() const { return _exGrade; }

AForm::AForm() : _name("mamella"), _isSigned(false), _grade(1), _exGrade(2) {}

AForm::AForm(const AForm& other) : _name(other._name), _isSigned(other._isSigned), _grade(other._grade), _exGrade(other._exGrade) {}

AForm&	AForm::operator=(const AForm& other) {
	this->_isSigned = other._isSigned;
	return *this;
}

AForm::AForm(std::string name, int grade, int exGrade) : _name(name), _grade(grade), _exGrade(exGrade) {}

const char*	AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high.";
}

const char*	AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low.";
}

const char*	AForm::FormNotSigned::what() const throw() {
	return "Form is not signed.";
}

AForm::~AForm() {}

std::ostream&	operator<<(std::ostream& stream, const AForm& AForm) {
	return stream << "This is all the AForm's informations: " << AForm.getName() << " - " << AForm.getGrade() << " - " << AForm.getExGrade() << " - " << AForm.getIsSigned() << std::endl;
}
