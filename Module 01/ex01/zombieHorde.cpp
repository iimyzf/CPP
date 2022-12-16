/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:35:04 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/16 01:35:04 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* zombie;

	if (N > 0) {
		zombie = new Zombie[N];
		for (int i = 0; i < N; i++) {
			zombie[i].set_name(name);
		}
	}
	else {
		std::cout << "Error occured! Please check again!" << std::endl;
		exit (EXIT_FAILURE);
	}
	return (zombie);
}