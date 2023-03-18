/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:39:35 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/04 09:39:03 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include "iostream"
# include "sstream"
# include "string"
# include "cmath"
# include "iomanip"

# define INT	1
# define FLOAT	2
# define DOUBLE	3
# define CHAR	4
# define NANF	5

class	ScalarConverter {
	private:
		ScalarConverter();

	public:
		static void	convert(const std::string& str);
		static void	to_int(int i);
		static void	to_float(float f);
		static void	to_double(double d);
		static void	to_char(char c);
		static int	which_type(const std::string& str);
	
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter&	operator=(const ScalarConverter& other);
	~ScalarConverter();
};

#endif