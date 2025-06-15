/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:02:02 by csouita           #+#    #+#             */
/*   Updated: 2025/05/17 15:29:01 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default")
{
    std::cout << "ClapTrap " << Name << " is called" << std::endl;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "ClapTrap is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " is destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
    if (this == &ClapTrap)
        return;
    *this = ClapTrap;
    std::cout << "Copy ClapTrap " << Name << " is copied" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " attack " << target << " causing " << AttackDamage << "  points of damage   !" << std::endl;
    EnergyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    AttackDamage = amount;
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " take " << amount << " damage !" << std::endl;
    HitPoints -= AttackDamage;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " is repaired by " << amount << " hit points !" << std::endl;
    HitPoints += amount;
    EnergyPoints -= 1;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ClapTrap)
{
    std::cout << "ClapTrap " << Name << " is assigned" << std::endl;
    ClapTrap::Name = ClapTrap.Name;
    ClapTrap::HitPoints = ClapTrap.HitPoints;
    ClapTrap::EnergyPoints = ClapTrap.EnergyPoints;
    ClapTrap::AttackDamage = ClapTrap.AttackDamage;
    return (*this);
}