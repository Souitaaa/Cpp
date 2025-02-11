/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:47:55 by csouita           #+#    #+#             */
/*   Updated: 2025/02/06 01:32:41 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    if (this == &animal)
        return ;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
    if (this == &animal)
        return (*this);
    std::cout << "Animal assignation operator called" << std::endl;
    return (*this);
}

std::string Animal::getType() const
{
    return (Type);
}
