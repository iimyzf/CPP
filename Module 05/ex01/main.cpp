/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:25:16 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:42:50 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	make(const std::string& name, const int& sign_grade, const int& exec_grade) {
	try {
		Form  f(name, sign_grade, exec_grade);
		std::cout << f;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main(void) {
	Bureaucrat  a("mamella", 18);
	Bureaucrat  b("lgerboz", 12);

	Form  f1("f1", 15, 1);
	Form  f2(f1);

	std::cout << f1 << f2 << std::endl;
	std::cout << std::endl;
	
	try {
		b.signForm(f1);
		a.signForm(f2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}