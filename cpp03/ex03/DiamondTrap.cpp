/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 22:16:15 by csouita           #+#    #+#             */
/*   Updated: 2025/05/16 23:14:12 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    ClapTrap::Name = name + "_clap_name";
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
    Name = name;
    std::cout << "DiamondTrap " << name << " is called" << std::endl;
}

void DiamondTrap::displayStats() const
{
    std::cout << "DiamondTrap " << Name << " stats:" << std::endl;
    std::cout << "Hit Points: " << HitPoints << std::endl;
    std::cout << "Energy Points: " << EnergyPoints << std::endl;
    std::cout << "Attack Damage: " << AttackDamage << std::endl;
}

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    Name = "Default";
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap)
{
    if (this == &DiamondTrap)
        return;
    ClapTrap::Name = DiamondTrap.ClapTrap::Name;
    HitPoints = DiamondTrap.HitPoints;
    EnergyPoints = DiamondTrap.EnergyPoints;
    AttackDamage = DiamondTrap.AttackDamage;
    Name = DiamondTrap.Name;
    std::cout << "Copy DiamondTrap " << Name << " is copied" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap  is destroyed" << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << Name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &DiamondTrap)
{
    if (this == &DiamondTrap)
        return (*this);
    std::cout << "DiamondTrap " << Name << " is assigned" << std::endl;
    ClapTrap::Name = DiamondTrap.ClapTrap::Name;
    HitPoints = DiamondTrap.HitPoints;
    EnergyPoints = DiamondTrap.EnergyPoints;
    AttackDamage = DiamondTrap.AttackDamage;
    Name = DiamondTrap.Name;
    return (*this);
}