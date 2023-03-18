/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:44:02 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/04 10:03:43 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) {

    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <str1> <str2> ..." << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        ScalarConverter::convert(argv[i]);
    }

    return 0;
}