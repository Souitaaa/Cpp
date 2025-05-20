/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:39:27 by csouita           #+#    #+#             */
/*   Updated: 2025/05/21 00:02:23 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
} 

void Dog::makeSound() const
{
    std::cout << "Wouf wouf sound brother" << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
    delete this->brain;
    brain = new Brain();
    if (this == &dog)
        return (*this);
    for (int i = 0; i < 100; i++)
        ideas[i] = dog.ideas[i];
    std::cout << "Dog assignement operator called" << std::endl;
    return (*this);
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
}
