/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:39:59 by csouita           #+#    #+#             */
/*   Updated: 2025/01/22 18:09:26 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << " The memory address of the string variable = " << &str << std::endl;
    std::cout << "The memory address held by stringPTR = " << &ptr << std::endl;
    std::cout << "The memory address held by stringREF = " << &ref << std::endl;

    std::cout << "The value of the string variable = " << str << std::endl;
    std::cout << "he value pointed to by stringPTR = " << *ptr << std::endl;
    std::cout << "he value pointed to by stringREF = " << ref << std::endl;

}