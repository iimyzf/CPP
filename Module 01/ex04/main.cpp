/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:05:07 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/22 18:03:56 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av) {
	if (ac == 4)
		Replace::ft_replace(av[1], av[2], av[3]);
	else {
		std::cout << "Expected 4 args, got " << ac << std::endl;
		exit (EXIT_FAILURE);
	}
	return (0);
}