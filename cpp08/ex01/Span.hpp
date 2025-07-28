/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/28 17:07:51 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP


#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

class Span
{
    private :
        std::vector<int> numbers;
        unsigned int N;
    public :

        Span(unsigned int n);
        ~Span();
        void addNumber(int n);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
};

#endif