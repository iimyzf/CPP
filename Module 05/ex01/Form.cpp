/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:29:42 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:42:38 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

std::string	Form::getName() const { return _name; }

bool	Form::getIsSigned() const { return _isSigned; }

int	Form::getGrade() const { return _grade; }

int	Form::getExGrade() const { return _exGrade; }

void	Form::beSigned(const Bureaucrat& bur) {
	if (bur.getGrade() <= _grade) {
		_isSigned = true;
	}
	else if (bur.getGrade() > _grade)
		throw GradeTooLowException();
}

Form::Form() : _name("mamella"), _isSigned(false), _grade(1), _exGrade(2) {}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), _grade(other._grade), _exGrade(other._exGrade) {}

Form&	Form::operator=(const Form& other) {
	this->_isSigned = other._isSigned;
	return *this;
}

Form::Form(std::string name, int grade, int exGrade) : _name(name), _grade(grade), _exGrade(exGrade) {}

const char*	Form::GradeTooHighException::what() const throw() {
	return "Grade is too high.";
}

const char*	Form::GradeTooLowException::what() const throw() {
	return "Grade is too low.";
}

Form::~Form() {}

std::ostream&	operator<<(std::ostream& stream, const Form& form) {
	return stream << "This is all the form's informations: " << form.getName() << " - " << form.getGrade() << " - " << form.getExGrade() << " - " << form.getIsSigned() << std::endl;
}
