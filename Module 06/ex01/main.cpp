/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:57:07 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/03 17:45:44 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main() {
	Data d1;

	uintptr_t p1 = Serializer::serialize(&d1);
	Data*	ptr = Serializer::deserialize(p1);

	std::cout << &d1 << std::endl;
	std::cout << p1 << std::endl;
	std::cout << ptr << std::endl;

    return 0;
}