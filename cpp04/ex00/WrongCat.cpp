/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:16:19 by csouita           #+#    #+#             */
/*   Updated: 2025/05/20 17:20:01 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
    if (this == &wrongcat)
        return (*this);
    WrongAnimal::operator=(wrongcat);
    std::cout << "WrongCat assignement operator called" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}
