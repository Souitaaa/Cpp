/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/28 17:30:01 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>

Span::Span(unsigned int n) : N(n) {}

Span::~Span() {}


void Span::addNumber(int number)
{
    if((numbers.size()) > N)
        throw std::length_error("Span is full");
    numbers.push_back(number);
}

unsigned int Span::shortestSpan() const
{
    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    if(numbers.size() < 2)
        throw std::runtime_error("requires at least 2 numbers");
    std::vector<int> sortedVec(numbers);
    std::sort(sortedVec.begin(),sortedVec.end());
    for(size_t i = 1 ; sortedVec.size() > i ; i++)
    {
        unsigned int temp = sortedVec[i] - sortedVec[i - 1];
        if(minSpan > temp)
            minSpan = temp; 
    }
    return minSpan;
}

unsigned int Span::longestSpan() const
{
    unsigned int minSpan = std::numeric_limits<unsigned int>::min();
    if(numbers.size() < 2)
        throw std::runtime_error("requires at least 2 numbers");
    std::vector<int> sortedVec(numbers);
    std::sort(sortedVec.begin(),sortedVec.end());
    for(size_t i = 1 ; sortedVec.size() > i ; i++)
    {
        unsigned int temp = sortedVec[i] - sortedVec[i - 1];
        if(minSpan < temp)
            minSpan = temp; 
    }
    return minSpan;
}