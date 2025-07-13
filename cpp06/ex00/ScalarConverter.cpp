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

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)other;
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

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

void ScalarConverter::convert(const std::string input) 
{
    if(FindLetterall().IsChar(input) == 1 && !std::isdigit(static_cast<unsigned char>(input[0])))
    {
        std::cout << "char: '" << input[0] << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
    }
    else if(FindLetterall().IsInt(input))
    {
        int num = strToInt(input);
        std::cout << "char: ";
        if (num < 32 || num > 127)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
        std::cout << "int: " << num << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
    else if(FindLetterall().isDouble(input))
    {
        double num = strToDouble(input);
        std::cout << "char: ";
        if (num < 32 || num > 127)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(num) << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
    else if(FindLetterall().IsChar(input) == 3)
    {
        float num = strToFloat(input);
        std::cout << "char: ";
        if (num < 32 || num > 127)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(num) << std::endl;
        std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
    }
    else if(FindLetterall().IsChar(input) == 2)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << input << "f" << std::endl;
        std::cout << "double: " << input << std::endl;
    }
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other;
    return *this;
}