/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:47 by csouita           #+#    #+#             */
/*   Updated: 2025/05/21 17:00:58 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

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
    if (this != &cat) 
    {
        delete this->brain; 
        this->brain = new Brain(); 
        *this->brain = *cat.brain;
    }
    std::cout << "Cat assignement operator called" << std::endl;
    return (*this);
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    if (this == &copy)
        return;
    brain = new Brain(*copy.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}