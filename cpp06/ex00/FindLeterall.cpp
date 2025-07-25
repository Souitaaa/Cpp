/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindLeterall.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/15 18:52:45 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindLeterall.hpp"

FindLetterall::FindLetterall() {}

FindLetterall::~FindLetterall() {} 

FindLetterall::FindLetterall(const FindLetterall& other) {
    (void)other;
}


bool FindLetterall::IsInt(const std::string& s)
{
    size_t i = 0;
    if (s[i] == '+' || s[i] == '-')
        i++;
    if(i == s.length())
        return false;
    for (; i < s.length(); i++)
        if(!std::isdigit(s[i]))
            return false;
    return true;
}

bool FindLetterall::isDouble(const std::string& s) 
{
    size_t i = 0;
    if (s[i] == '+' || s[i] == '-')
        i++;
    bool hasDigit = false;
    bool hasDot = false;
    for (; i < s.length(); i++) 
    {
        if (std::isdigit(s[i])) 
            hasDigit = true;
        else if (s[i] == '.') {
            if (hasDot)
                return false;
            hasDot = true;
        } else {
            return false;
        }
    }
    return hasDigit && hasDot;
}

int FindLetterall::IsChar(const std::string& input)
{
    if(input.length() == 1 )
        return 1;
    size_t pos = input.find('f');
    if (pos != std::string::npos)
        return 6;
    if (input.find('.') != std::string::npos)
        return 3;
    if (IsInt(input))
        return 4;
    if(isDouble(input))
        return 5;
    return 99;
}


FindLetterall& FindLetterall::operator=(const FindLetterall& other) {
    (void)other;
    return *this;
}
