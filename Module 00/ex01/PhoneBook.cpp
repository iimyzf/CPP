/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:21:24 by yagnaou           #+#    #+#             */
/*   Updated: 2022/11/17 21:51:59 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void	PhoneBook::Commands() {
	std::cout << "\n\tEnter one of the following commands to process:\n";
	std::cout << "\t>> " << GREEN << "(ADD / add)" << RESET << "       \t---> In order to add a new contact.\n";
	std::cout << "\t>> " << YELLOW << "(SEARCH / search)" << RESET << " \t---> In order to display all the contacts available OR one specific contact's informations.\n";
	std::cout << "\t>> " << RED << "(EXIT / exit)" << RESET << "     \t---> To exit the programme (All the contacts will be removed!)\n\n";
}

void	PhoneBook::Start() {

	std::cout << "\n\tWelcome to the phonebook. Please enter one of the following commands to start:\n\n";
	std::cout << "\t>> " << GREEN << "(ADD / add)" << RESET << "       \t---> In order to add a new contact.\n";
	std::cout << "\t>> " << YELLOW << "(SEARCH / search)" << RESET << " \t---> In order to display all the contacts available OR one specific contact's informations.\n";
	std::cout << "\t>> " << RED << "(EXIT / exit)" << RESET << "     \t---> To exit the programme (All the contacts will be removed!)\n\n";
}

std::string	PhoneBook::String(std::string str) {

	if (str.size() > 10) {
		str[9] = '.';
		str.erase(10);
	}
	return (str);
}

void	PhoneBook::ShowInfo(int index) {

	std::string input;
	int			i;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	LOOP:for (;;) {
		std::cout << "\n\tEnter a number (1 - 8) to show it's contact informations: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
		i = std::atoi(input.c_str());
		if (i > 0 && i <= 8)
			break ;
		else {
			std::cout << "\n*** Invalid input, or number if out of range! ***" << std::endl;
			goto LOOP;
		}
	}

	if (i <= index) {
		std::cout << std::endl << CYAN << "1. First Name    :  " << RESET << contacts[i - 1].get_fname() << std::endl;
		std::cout << CYAN << "2. Last Name     :  " << RESET << contacts[i - 1].get_lname() << std::endl;
		std::cout << CYAN << "3. Nickname      :  " << RESET << contacts[i - 1].get_nickname() << std::endl;
		std::cout << CYAN << "4. Phone number  :  " << RESET << contacts[i - 1].get_phone() << std::endl;
		std::cout << CYAN << "5. Darkest Secret:  " << RESET << contacts[i - 1].get_secret() << std::endl << std::endl;
	} else {
		std::cout << "\n*** There is no contact with that index! ***" << std::endl;
	}

	Commands();

}

void	PhoneBook::DisplayContact(int index) {

	std::string	input;

	std::cout << std::endl << std::setfill('=') << std::setw(51) << RESET << std::endl
	<< "|" << std::setfill(' ') << std::setw(10) << "INDEX"
	<< "|" << std::setfill(' ') << std::setw(10) << "FIRST NAME"
	<< "|" << std::setfill(' ') << std::setw(10) << "LAST NAME"
	<< "|" << std::setfill(' ') << std::setw(10) << "NICKNAME" << "|\n"
	<< std::setfill('=') << std::setw(51) << RESET << "\n";

	for (int i = 0 ; i < index && i < 8 ; ++i) {
		std::cout << "|" << CYAN << std::setfill(' ') << std::setw(10) << i + 1 << RESET
		<< "|" << std::setfill(' ') << std::setw(10) << String(contacts[i].get_fname())
		<< "|" << std::setfill(' ') << std::setw(10) << String(contacts[i].get_lname())
		<< "|" << std::setfill(' ') << std::setw(10) << String(contacts[i].get_nickname()) << "|\n"
		<< std::setfill('=') << std::setw(51) << RESET << "\n";
	}

	ShowInfo(index);
}

void	PhoneBook::AddContact(int index) {

	std::string	input;

	std::cout << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for (;;) {
		std::cout << "1. First Name    :  ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
		contacts[index].set_fname(input);
		if (!input.empty())
			break;
	};
	for (;;) {
		std::cout << "2. Last Name     :  ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
		contacts[index].set_lname(input);
		if (!input.empty())
			break;
	};
	for (;;) {
		std::cout << "3. Nickname      :  ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
		contacts[index].set_nickname(input);
		if (!input.empty())
			break;
	};
	for (;;) {
		std::cout << "4. Phone Number  :  ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
		contacts[index].set_phone(input);
		if (!input.empty())
			break;
	};
	for (;;) {
		std::cout << "5. Darkest Secret:  ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
		contacts[index].set_secret(input);
		if (!input.empty())
			break;
	};
	Commands();
}
