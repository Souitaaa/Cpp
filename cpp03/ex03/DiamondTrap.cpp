/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:16:15 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 01:50:46 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) 
    : ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(name), ScavTrap(name) 
{
    this->Name = name;
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "Hit Points" << this->getHitPoints() << std::endl;
    std::cout << "Energy Points" << this->getEnergyPoints() << std::endl;
    std::cout << "AttackDamage " << this->getAttackDamage() << std::endl;
    std::cout << "DiamondTrap " << name << " is called" << std::endl;
    DiamondTrap::ScavTrap::attack("enemy");
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap  is destroyed" << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << Name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& DiamondTrap)
{
    if (this == &DiamondTrap)
        return (*this);
    std::cout << "DiamondTrap " << Name << " is assigned" << std::endl;
    this->setName(DiamondTrap::getName());
    this->setHitPoints(DiamondTrap::getHitPoints());
    this->setEnergyPoints(DiamondTrap::getEnergyPoints());
    this->setAttackDamage(DiamondTrap::getAttackDamage());
    return (*this);
}