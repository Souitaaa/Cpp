/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:57:13 by csouita           #+#    #+#             */
/*   Updated: 2025/01/22 20:55:28 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

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
    std::cout <<getName() << " attacks with their " << Type.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &type)
{
    Name = name;
    Type = type;
}