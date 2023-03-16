/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:52:10 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/28 18:04:34 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string	Bureaucrat::getName() const { return _name; }

int	Bureaucrat::getGrade() const {return _grade; }

void	Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    else
        _grade--;
}

void	Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    else
        _grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;
}

std::ostream&	operator<<(std::ostream& stream, const Bureaucrat& bur) {
	return stream << bur.getName() << ", bureaucrat grade " << bur.getGrade();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low.";
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) {
    _grade = other._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    this->_grade = other._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {}