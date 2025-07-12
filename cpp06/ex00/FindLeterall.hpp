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

#ifndef FINDLETTERALL_HPP
#define FINDLETTERALL_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>

class FindLetterall {
    public:
        FindLetterall();
        ~FindLetterall();
        int IsChar(const std::string& input);
        bool IsInt(const std::string& input);
        bool isDouble(const std::string& s);
};
#endif