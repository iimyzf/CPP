/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:11:45 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/28 10:12:20 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int size = 4;

    Animal* animals[size];

    for (int i = 0; i < size/2; i++) {
        animals[i] = new Dog();
    }

    for (int i = size/2; i < size; i++) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++) {
        animals[i]->makeSound();
        delete animals[i];
    }

    return 0;
}