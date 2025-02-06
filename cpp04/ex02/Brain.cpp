/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:11:25 by csouita           #+#    #+#             */
/*   Updated: 2025/02/06 18:10:27 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    ideas = new std::string[100];
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
    delete[] ideas;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this == &brain)
        return *this;
    for (int i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
    return *this;
}