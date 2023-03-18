/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:49:12 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/04 10:02:14 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base*	generate(void) {
	std::srand(std::time(NULL));
	int	i = std::rand() % 3 + 1;
	switch (i) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return new A();
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
        std::cout << "This is: A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "This is: B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "This is: C" << std::endl;
    }
}

void	identify(Base& p) {
	try {
		(void) dynamic_cast<A&>(p);
        std::cout << "This is: A" << std::endl;
	} catch (std::exception& e) {}

	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "This is: B" << std::endl;
	} catch (std::exception& e) {}

	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "This is: C" << std::endl;
	} catch (std::exception& e) {}
}