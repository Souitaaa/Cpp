/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:02:02 by csouita           #+#    #+#             */
/*   Updated: 2025/01/30 19:43:52 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) 
{
    Name = name;
    std::cout << "ClapTrap " << Name << " is called" << std::endl;
}

ClapTrap::ClapTrap(int E_HitPoints, int E_EnergyPoints, int E_AttackDamage) 
{
    HitPoints = E_HitPoints;
    EnergyPoints = E_EnergyPoints;
    AttackDamage = E_AttackDamage;
    std::cout << "ClapTrap " << Name << " is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " is destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ClapTrap)
{
    (void)ClapTrap;
    std::cout << "Copy ClapTrap " << Name << " is copied" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints >= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return ;
    }
    if (EnergyPoints >= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " attack " << target << " causing " << AttackDamage << "  points of damage   !" << std::endl;
    HitPoints -= AttackDamage;
    EnergyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints >= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return ;
    }
    if (EnergyPoints >= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " take " << amount << " damage !" << std::endl;
}  

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints >= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return ;
    }
    if (EnergyPoints >= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " is repaired by " << amount << " hit points !" << std::endl;
    HitPoints += amount;
    EnergyPoints -= 1;
}
