/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:22:36 by yagnaou           #+#    #+#             */
/*   Updated: 2022/11/12 15:42:33 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

# define BLACK	"\033[1;30m"
# define GRAY	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define PURPLE	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define RESET	"\033[0;0m"

class PhoneBook
{
	private:
		Contact	contacts[8];

	public:
		void		Start();
		void		Commands();
		void		AddContact(int index);
		void		DisplayContact(int index);
		void		ShowInfo(int index);
		std::string	String(std::string str);
};

#endif