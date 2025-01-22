/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:20:43 by csouita           #+#    #+#             */
/*   Updated: 2025/01/22 20:38:50 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType()
{
    return Type;
}

void Weapon::setType(std::string E_type)
{
    Type = E_type;
}
Weapon::Weapon(std::string E_type)
{
    Type = E_type;
}