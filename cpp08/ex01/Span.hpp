/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/30 21:11:09 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP


#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <iterator>

class Span
{
    private:
        std::vector<int> numbers;
        unsigned int N;
    public:
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int n);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        void addRange(std::vector<int>::iterator begin , std::vector<int>::iterator end);
};

#endif