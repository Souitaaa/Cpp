/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:39:27 by csouita           #+#    #+#             */
/*   Updated: 2025/05/21 16:58:53 by csouita          ###   ########.fr       */
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
    if (this != &dog) 
    {
        delete this->brain;
        this->brain = new Brain();
        *this->brain = *dog.brain;
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
}
