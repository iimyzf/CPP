/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:11:45 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/28 10:10:14 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* wa = new WrongAnimal();
    const WrongCat* wc = new WrongCat();

	Dog*	dog = new Dog();
	Cat*	cat = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	j->makeSound();
	i->makeSound();

	wa->makeSound();
    wc->makeSound();

	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;
	
	meta->makeSound();

	std::cout << std::endl;

	delete j;
	delete i;

	delete wa;
    delete wc;

	delete dog;
	delete cat;

	return (0);
}