/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:40:31 by yagnaou           #+#    #+#             */
/*   Updated: 2022/11/17 09:43:40 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <sstream>
# include <iomanip>
# include <limits>
# include <unistd.h>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		std::string	get_fname();
		std::string	get_lname();
		std::string	get_nickname();
		std::string	get_phone();
		std::string	get_secret();

		void		set_fname(std::string fname);
		void		set_lname(std::string lname);
		void		set_nickname(std::string alias);
		void		set_phone(std::string number);
		void		set_secret(std::string secret);
};

#endif