/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:41:47 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/17 18:41:47 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	Harl	harl;

	if (ac == 2) {
		harl.complain(av[1]);
	}
	else {
		std::cout << "Please input one of the following commands: \033[1mDEBUG, INFO, WARNING, ERROR\033[0m" << std::endl;
		exit (EXIT_FAILURE);
	}
	return 0;
}