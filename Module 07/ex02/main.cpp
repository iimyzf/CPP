/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:35:19 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/05 22:13:50 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;
    
	std::cout << std::endl;

    Array<int> defaultArray(5);
    std::cout << "Default-initialized array size: " << defaultArray.size() << std::endl;
	for (size_t i = 0; i < defaultArray.size(); i++) {
    	defaultArray[i] = 0;
        std::cout << "defaultArray[" << i << "] = " << defaultArray[i] << std::endl;
    }
    
    std::cout << std::endl;

    std::cout << "Modified default-initialized array:" << std::endl;
    for (size_t i = 0; i < defaultArray.size(); i++) {
        defaultArray[i] = i;
        std::cout << "defaultArray[" << i << "] = " << defaultArray[i] << std::endl;
    }

	std::cout << std::endl;

    Array<int> copyArray = defaultArray;
    std::cout << "Copied array size: " << copyArray.size() << std::endl;
    for (size_t i = 0; i < copyArray.size(); i++) {
        std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
    }
    
	std::cout << std::endl;

    std::cout << "Modified copied array:" << std::endl;
    for (size_t i = 0; i < copyArray.size(); i++) {
        copyArray[i] = i * i;
        std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
    }

	std::cout << std::endl;

    std::cout << "Modified original default-initialized array:" << std::endl;
    for (size_t i = 0; i < defaultArray.size(); i++) {
        defaultArray[i] = i * 2;
        std::cout << "defaultArray[" << i << "] = " << defaultArray[i] << std::endl;
    }

    return 0;
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
    
//     int*    mirror = new int[MAX_VAL];

//     srand(time(NULL));
    
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }