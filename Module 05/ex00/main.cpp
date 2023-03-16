/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:25:16 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:02:19 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	b_make(std::string name, int grade) {
	try {
		Bureaucrat  b(name, grade);
		std::cout << b.getName() << " - " << b.getGrade() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

int main(void) {
	Bureaucrat  j("mamella", 1);
	Bureaucrat  h("lgerboz", 75);

	std::cout << j.getName() << std::endl;
	std::cout << h.getName() << std::endl;

	b_make("f1", 0);
	b_make("f2", 50);
	b_make("f3", 151);
	b_make("f4", 50);

	return 0;
}