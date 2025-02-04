/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:45:19 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 21:31:50 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << name << " is called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap  is destroyed" << std::endl;
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
    this->setName(ScavTrap::getName());
    this->setHitPoints(ScavTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(ScavTrap::getAttackDamage());
    std::cout << "Copy ScavTrap " << ScavTrap::getName() << " is copied" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}