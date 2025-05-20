/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:47 by csouita           #+#    #+#             */
/*   Updated: 2025/05/20 17:23:04 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meoow sound brother" << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
    delete this->brain;
    brain = new Brain();
    if (this == &cat)
        return (*this);
    for (int i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
    std::cout << "Cat assignement operator called" << std::endl;
    return (*this);
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    if (this == &cat)
        return (*this);
    for (int i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
        std::cout << "Cat copy constructor called" << std::endl;
}