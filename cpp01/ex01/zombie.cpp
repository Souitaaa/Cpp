/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 20:48:37 by csouita           #+#    #+#             */
/*   Updated: 2025/01/21 20:24:55 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include "main.hpp"

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

