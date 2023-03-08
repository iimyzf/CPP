/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:32:28 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/22 16:08:10 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* zombie;

    zombie = newZombie("Mamella");
    zombie->announce();
    randomChump("Lgerbouz");
    delete zombie;
    return (0);
}