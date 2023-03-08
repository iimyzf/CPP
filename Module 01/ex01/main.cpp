/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:34:48 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/22 16:45:15 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* zombie;

    zombie = zombieHorde(1, "Mamella");
    for (int i = 0; i < 1; i++) {
        zombie[i].announce();
    }
    delete[] zombie;
    return (0);
}