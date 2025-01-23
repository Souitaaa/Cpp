/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:57:13 by csouita           #+#    #+#             */
/*   Updated: 2025/01/23 21:12:03 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include "main.hpp"


std::string HumanA::getName()
{
    return Name;
}

void HumanA::setName(std::string E_name)
{
    Name = E_name;
}

void HumanA::attack()
{
    std::cout << getName() << " darbo b " << Type.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &type) : Type(type)
{
    this->Name = name;
}