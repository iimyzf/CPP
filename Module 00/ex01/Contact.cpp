/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:43:10 by yagnaou           #+#    #+#             */
/*   Updated: 2022/11/12 15:50:40 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

std::string Contact::get_fname() { return (first_name); };
std::string Contact::get_lname() { return (last_name); };
std::string Contact::get_nickname() { return (nickname); };
std::string Contact::get_phone() { return (phone_number); };
std::string Contact::get_secret() { return (darkest_secret); };

void	Contact::set_fname(std::string fname) { first_name = fname; };
void	Contact::set_lname(std::string lname) { last_name = lname; };
void	Contact::set_nickname(std::string alias) { nickname = alias; };
void	Contact::set_phone(std::string number) { phone_number = number; };
void	Contact::set_secret(std::string secret) { darkest_secret = secret; };
