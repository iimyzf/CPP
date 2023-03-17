/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:25:16 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 11:28:11 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	try {
		Bureaucrat b_home("home", 137);
		Bureaucrat b_robot("robot", 50);
		Bureaucrat b_president("president", 24);

		ShrubberyCreationForm home("home");
		RobotomyRequestForm robot("robot");
		PresidentialPardonForm president("president");

		std::cout << home;
		home.beSigned(b_home);
		std::cout << home;

		std::cout << std::endl;

		std::cout << robot;
		robot.beSigned(b_robot);
		std::cout << robot;

		std::cout << std::endl;

		std::cout << president;
		president.beSigned(b_president);
		std::cout << president;

		std::cout << std::endl;

		home.execute(b_home);
		robot.execute(b_robot);
		president.execute(b_president);

		std::cout << std::endl;

		b_home.executeForm(home);
		b_robot.executeForm(robot);
		b_president.executeForm(president);
		
		std::cout << std::endl;
		
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		

	} catch (std::exception const & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}