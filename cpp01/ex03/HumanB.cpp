/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:14:17 by csouita           #+#    #+#             */
/*   Updated: 2025/04/13 18:27:13 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include "Weapon.hpp"

std::string HumanB::getName()
{
    return Name;
}

void HumanB::setName(std::string E_name)
{
    Name = E_name;
}

void HumanB::attack()
{
    if(Type == NULL)
    {
        std::cout << getName() << " has no weapon to attack with." << std::endl;
        return;
    }
    std::cout << getName() << " attacks with their " << Type->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
    Name = name;
    Type = NULL;
}

void HumanB::setWeapon(Weapon &E_Type)
{

    Type = &E_Type;
}
HumanB::HumanB(std::string name, Weapon &type) 
{
    Type = &type;
    Name = name;
}
