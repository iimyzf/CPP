/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:50:07 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/03 18:47:56 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t> (ptr);
}

Data*	Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& other) { (void) other; }

Serializer&	Serializer::operator=(const Serializer& other) {
	(void) other;
	return *this;
}

Serializer::~Serializer() {}