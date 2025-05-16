/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:45:19 by csouita           #+#    #+#             */
/*   Updated: 2025/05/16 21:24:13 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << name << " is created" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap  is destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
    if (this == &ScavTrap)
        return (*this);
    std::cout << "ScavTrap " << this->Name << " is assigned" << std::endl;
    ClapTrap::Name = ScavTrap.Name;
    ClapTrap::HitPoints = ScavTrap.HitPoints;
    ClapTrap::EnergyPoints = ScavTrap.EnergyPoints;
    ClapTrap::AttackDamage = ScavTrap.AttackDamage;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap) : ClapTrap(ScavTrap)
{
    if (this == &ScavTrap)
        return;
    std::cout << "Copy ScavTrap " << this->Name << " is copied" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}