/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:31:11 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/09 11:13:34 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// int tab[] = {1, 100, 101, 25, 23, 70, 51};

	// Span test(8);
	// test.addNumber(6);
	// test.addNumber(5);

	// std::cout << std::endl;

	// try {
	//     test.addRange(tab, tab + (sizeof(tab) / sizeof(tab[0])));
	// } catch (std::out_of_range& e) {
	//     std::cout << e.what() << std::endl;
	// }

	// std::cout << test.shortestSpan() << std::endl;
	// std::cout << test.longestSpan() << std::endl;

	return 0;
}