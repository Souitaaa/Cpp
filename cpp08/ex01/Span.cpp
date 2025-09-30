/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/08/02 15:56:04 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

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
    unsigned int minSpan = UINT_MAX;
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
    if(numbers.size() < 2)
        throw std::runtime_error("requires at least 2 numbers");
    int minVal = *std::min_element(numbers.begin(), numbers.end());
    int maxVal = *std::max_element(numbers.begin(), numbers.end());
    return static_cast<unsigned int>(maxVal - minVal);
}

Span::Span(const Span& other) : numbers(other.numbers), N(other.N) {}


Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        numbers = other.numbers;
        N = other.N;
    }
    return *this;
}

void Span::addRange(std::vector<int>::iterator begin , std::vector<int>::iterator end)
{
    if(std::distance(numbers.begin() , numbers.end()) + numbers.size() > N)
        throw std::runtime_error("Values are bigger than size of vector ");
    numbers.insert(numbers.end() , begin , end);
}
