/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:11:25 by csouita           #+#    #+#             */
/*   Updated: 2025/05/20 16:27:32 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    for (int i = 0; i < 100; i++)
    ideas[i] = copy.ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
    if (this == &brain)
    return *this;
    for (int i = 0; i < 100; i++)
    ideas[i] = brain.ideas[i];
    std::cout << "Brain assignation operator called" << std::endl;
    return *this;
}