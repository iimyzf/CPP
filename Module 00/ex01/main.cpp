/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:44:37 by yagnaou           #+#    #+#             */
/*   Updated: 2022/11/12 15:57:32 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

int	main()
{
	PhoneBook	phonebook;
	Contact		contact;
	std::string	input;

	phonebook.Start();
	for (int index = 0;;) {
		std::cin >> input;
		if (std::cin.eof())
			exit (EXIT_FAILURE);
		if (input == "ADD" || input == "add")
		{
			phonebook.AddContact(index % 8);
			index++;
		}
		else if (input == "SEARCH" || input == "search")
			phonebook.DisplayContact(index);
		else if (input == "EXIT" || input == "exit") {
			std::cout << "\n\tBye! Hope to see you again 😇\n" << std::endl;
			sleep(1);
			exit (EXIT_FAILURE);
		}
		else
			std::cout << "\n\t*** Invalid Input! Please Check Again! ***\n\n";
	};
	return (0);
}
