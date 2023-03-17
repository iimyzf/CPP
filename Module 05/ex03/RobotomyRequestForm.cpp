/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:20:21 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:50:42 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

std::string	RobotomyRequestForm::getTarget() const { return _target; }

void	RobotomyRequestForm::beSigned(const Bureaucrat& bur) {
	if (bur.getGrade() <= 72)
		RobotomyRequestForm::_isSigned = true;
	else if (getGrade() > 72)
		throw GradeTooLowException();
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!getIsSigned())
		throw FormNotSigned();
	if (executor.getGrade() <= AForm::getExGrade())
		throw GradeTooHighException();

	srand(time(NULL));
	bool	result = (rand() % 2 == 0);

    if (result)
        std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy of " << this->getTarget() << " has failed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	AForm::operator=(other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}