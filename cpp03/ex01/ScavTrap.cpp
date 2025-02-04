/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:45:19 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 02:00:43 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name ,100, 50, 20) 
{
    std::cout << "ScavTrap " << name << " is called" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap  is destroyed" << std::endl;
}

ScavTrap::ScavTrap(std::string E_Name ,int E_HitPoints, int E_EnergyPoints, int E_AttackDamage) : ClapTrap(E_Name, E_HitPoints, E_EnergyPoints, E_AttackDamage)
{
    E_AttackDamage = 20;
    E_EnergyPoints = 50;
    E_HitPoints = 100;
    std::cout << "ScavTrap " << E_Name << " is called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ScavTrap)
{
    if(this == &ScavTrap)
        return (*this);
    std::cout << "ScavTrap " << ScavTrap::getName() << " is assigned" << std::endl;
    this->setName(ScavTrap::getName());
    this->setHitPoints(ScavTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(ScavTrap::getAttackDamage());
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap) : ClapTrap(ScavTrap)
{
    if (this == &ScavTrap)
        return ;
    std::cout << "Copy ScavTrap " << ScavTrap::getName() << " is copied" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}