/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:16:15 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 21:31:16 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)  :  FragTrap(name), ScavTrap(name) 
{
    this->Name = name;
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap " << name << " is called" << std::endl;
}

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    this->setName("Default");
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap)
{
    if (this == &DiamondTrap)
        return ;
    this->setName(DiamondTrap::getName());
    this->setHitPoints(DiamondTrap::getHitPoints());
    this->setEnergyPoints(DiamondTrap::getEnergyPoints());
    this->setAttackDamage(DiamondTrap::getAttackDamage());
    std::cout << "Copy DiamondTrap " << Name << " is copied" << std::endl;
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

void DiamondTrap::attack(const std::string& target)
{
    if (DiamondTrap::getHitPoints() <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return ;
    }
    if (DiamondTrap::getEnergyPoints() <= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " attack " << target << " causing " << getAttackDamage() << "  points of damage   !" << std::endl;
}