/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:20:43 by csouita           #+#    #+#             */
/*   Updated: 2025/01/23 21:00:25 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "main.hpp"

std::string Weapon::getType()
{
    return Type;
}

void Weapon::setType(std::string E_ttype)
{
    Type = E_ttype;
}

Weapon::Weapon()
{
    Type = "Words wiche cause him emotional damage";
}

Weapon::Weapon(std::string E_type)
{
    Type = E_type;
}