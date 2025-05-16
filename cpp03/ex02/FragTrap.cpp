/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:22:28 by csouita           #+#    #+#             */
/*   Updated: 2025/05/16 21:24:51 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap " << name << " is called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
    Name = "Default";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap) : ClapTrap(FragTrap)
{
    // if(this == &FragTrap)
    //     return ;
    std::cout << "FragTrap " << Name << " is copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap)
{
    if (this == &FragTrap)
        return (*this);
    ClapTrap::Name = FragTrap.Name;
    ClapTrap::HitPoints = FragTrap.HitPoints;
    ClapTrap::EnergyPoints = FragTrap.EnergyPoints;
    ClapTrap::AttackDamage = FragTrap.AttackDamage;
    std::cout << "FragTrap " << this->Name << " is assigned" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap  is destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap is requesting for a high five" << std::endl;
}