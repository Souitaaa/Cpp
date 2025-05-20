/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:39:27 by csouita           #+#    #+#             */
/*   Updated: 2025/05/20 18:26:09 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
} 

void Dog::makeSound() const
{
    std::cout << "Wouf wouf sound brother" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    if (this == &dog)
        return (*this);
    *this = dog;
    std::cout << "Dog assignement operator called" << std::endl;
    return (*this);
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
}
