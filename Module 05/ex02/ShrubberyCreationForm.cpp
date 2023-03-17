/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:58:12 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:48:33 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "fstream"
#include "string"
#include "Bureaucrat.hpp"

std::string	ShrubberyCreationForm::getTarget() const { return _target; }

void	ShrubberyCreationForm::beSigned(const Bureaucrat& bur) {
	if (bur.getGrade() <= 145)
		ShrubberyCreationForm::_isSigned = true;
	else if (getGrade() > 145)
		throw GradeTooLowException();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned())
		throw FormNotSigned();
	if (executor.getGrade() <= AForm::getExGrade()) {
		std::string		filename = this->getTarget() + "_shrubbery";
		std::ofstream	outfile(filename, std::ostream::out);
		outfile << "              ,@@@@@@@,\n"
				<< "      ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
				<< "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
				<< "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
				<< "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
				<< "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
				<< "  `&%\\ ` /%&'    |.|        \\ '|8'\n"
				<< "      |o|        | |         | |\n"
				<< "      |.|        | |         | |\n"
				<< "   \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
		outfile.close();
	} else {
		throw GradeTooLowException();
	}
}

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	AForm::operator=(other);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}