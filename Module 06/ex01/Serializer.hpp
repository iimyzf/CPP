/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:46:57 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/03 16:57:13 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SERIALIZER_HPP
# define SERIALIZER_HPP

# include "iostream"

struct Data {
	int	n;
};


class	Serializer {
	private:
		Serializer();

	public:
		static	uintptr_t	serialize(Data* ptr);
		static	Data*		deserialize(uintptr_t raw);

	Serializer(const Serializer& other);
	Serializer&	operator=(const Serializer& other);
	~Serializer();
};

#endif