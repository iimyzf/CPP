/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:25:16 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/01 21:41:12 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	} catch (std::exception const & e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}

























// int main()
// {

//     try{    
//         Bureaucrat NIR("NIR", 7);
//         PresidentialPardonForm KIRA("KIRA");
//         NIR.signForm(KIRA); 
//         KIRA.beSigned(NIR);
//         NIR.executeForm(KIRA);
//         KIRA.execute(NIR);
//         std::cout << "-----------------------" << std::endl;
//         ShrubberyCreationForm SBA("SBA");
//         NIR.signForm(SBA);
//         SBA.beSigned(NIR);
//         SBA.execute(NIR);
//         NIR.executeForm(SBA);
//         std::cout << "-----------------------" << std::endl;
//         RobotomyRequestForm Anthony("Anthony");
//         NIR.signForm(Anthony);
//         Anthony.beSigned(NIR);
//         Anthony.execute(NIR);
//         NIR.executeForm(Anthony);
        
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
// }