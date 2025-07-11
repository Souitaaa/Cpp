/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/09 16:52:15 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void printAndModify(const int* ptr) {
    std::cout << *ptr << std::endl;

    int* modifiable = const_cast<int*>(ptr);
    *modifiable = 42; 

}

int main()
{
    int value = 10;
    const int* constPtr = &value;

    std::cout << "Before modification: " << *constPtr << std::endl;
    printAndModify(constPtr);
    std::cout << "After modification: " << *constPtr << std::endl;

    return 0;
}
