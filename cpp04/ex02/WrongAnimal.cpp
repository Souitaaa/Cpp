/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:12:30 by csouita           #+#    #+#             */
/*   Updated: 2025/05/21 17:02:27 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
    if (this == &wronganimal)
        return (*this);
    this->Type = wronganimal.Type;
    std::cout << "WrongAnimal assignement operator called" << std::endl;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    if (this == &copy)
        return ;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (Type);
}