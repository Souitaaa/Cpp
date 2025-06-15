/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:48:37 by csouita           #+#    #+#             */
/*   Updated: 2025/04/14 20:15:42 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::SetName(std::string E_Name)
{
    Name = E_Name;
}

std::string Zombie::GetName()
{
    return Name;
}
void Zombie::announce(void)
{
    std::cout << GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
} 

Zombie::~Zombie()
{
    std::cout << "Zombie " << Name << " is dead" << std::endl; // m7iha ya dak z...
}
