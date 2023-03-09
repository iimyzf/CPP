/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:05:22 by yagnaou           #+#    #+#             */
/*   Updated: 2022/12/16 18:05:22 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>

class   Replace {
	private:
		static void	get_string(std::string* txt, const std::string& s1, const std::string& s2);

	public:
		static void	ft_replace(const std::string& text, const std::string& s1, const std::string& s2);

    Replace();
    ~Replace();
};

#endif