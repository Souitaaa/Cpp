/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:47 by csouita           #+#    #+#             */
/*   Updated: 2025/05/20 17:33:53 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meoow sound brother" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this == &other)
        return (*this);
    *this = other;
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
}