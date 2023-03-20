/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:01:54 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/07 21:13:21 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	Span::addNumber(int i) {
	if (data.size() >= max_size)
		throw std::out_of_range("Max size reached!");
	data.push_back(i);
}

unsigned int	Span::shortestSpan() {
	if (data.size() <= 1)
		throw std::out_of_range("Span must contain at least two elements");
	std::vector<int> span = data;
	std::sort(span.begin(), span.end());
	unsigned int	minSpan = span[1] - span[0];
	for (unsigned int i = 2; i < span.size(); i++) {
		unsigned int	res = span[i] - span[i - 1];
		if (res < minSpan)
			minSpan = res;
	}
	return minSpan;
}

unsigned int	Span::longestSpan() {
	if (data.size() <= 1)
		throw std::out_of_range("Span must contain at least two elements");
	unsigned int	min = *std::min_element(data.begin(), data.end());
	unsigned int	max = *std::max_element(data.begin(), data.end());
	return max - min;
}

void	Span::addRange(int *el, int *size) {
	for (; el < size; ++el)
		this->addNumber(*el);
}

Span::Span() : max_size(0) {}

Span::Span(unsigned int n) : max_size(n) {}

Span::Span(const Span& other) {
	for (unsigned int i = 0; i < other.max_size; i++) {
		data[i] = other.data[i];
	}
}

Span&	Span::operator=(const Span& other) {
	if (this != &other) {
		for (unsigned int i = 0; i < other.max_size; i++) {
			data[i] = other.data[i];
		}
	}
	return *this;
}

Span::~Span() {}