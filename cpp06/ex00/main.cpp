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
#include "FindLeterall.hpp"
#include <sstream>
#include <cctype>

int strToInt(const std::string& s) 
{
    std::istringstream iss(s);
    int result;
    iss >> result;
    return result;
}

float strToFloat(const std::string& s) {
    std::istringstream iss(s);
    float result;
    iss >> result;
    return result;
}

double strToDouble(const std::string& s) {
    std::istringstream iss(s);
    double result;
    iss >> result;
    return result;
}

int main(int ac , char *av[])
{
    if(ac != 2)
        return 1;

    if(FindLetterall().IsChar(av[1]) == 1 && !std::isdigit(static_cast<unsigned char>(av[1][0])))
    {
        std::cout << "char: '" << av[1][0] << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(av[1][0]) << std::endl;
        std::cout << "float: " << static_cast<float>(av[1][0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(av[1][0]) << ".0" << std::endl;
    }
    else if(FindLetterall().IsInt(av[1]))
    {
        int num = strToInt(av[1]);
        std::cout << "char: ";
        if (num < 32 || num > 127)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
        std::cout << "int: " << num << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
    else if(FindLetterall().isDouble(av[1]))
    {
        double num = strToDouble(av[1]);
        std::cout << "char: ";
        if (num < 32 || num > 127)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(num) << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
    else if(FindLetterall().IsChar(av[1]) == 3)
    {
        float num = strToFloat(av[1]);
        std::cout << "char: ";
        if (num < 32 || num > 127)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(num) << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
    else if(FindLetterall().IsChar(av[1]) == 2)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << av[1] << "f" << std::endl;
        std::cout << "double: " << av[1] << std::endl;
    }
}
