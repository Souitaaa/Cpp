/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:02:02 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 17:42:24 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Default") {
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

ClapTrap::ClapTrap(const ClapTrap& ClapTrap)
{
    if (this == &ClapTrap)
        return ;
    std::cout << "Copy ClapTrap " << Name << " is copied" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return ;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " attack " << target << " causing " << AttackDamage << "  points of damage   !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    AttackDamage = amount;
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return ;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " take " << amount << " damage !" << std::endl;
    HitPoints -= AttackDamage;

    std::cout << "Hit Points" << HitPoints << std::endl;
    std::cout << "AttackDamage " << AttackDamage << std::endl;  
    EnergyPoints -= 1;
    std::cout << "Energy Points" <<EnergyPoints << std::endl;
}  

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead !" << std::endl;
        return ;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " is out of energy !" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " is repaired by " << amount << " hit points !" << std::endl;
    HitPoints += amount;
    EnergyPoints -= 1;
    std::cout << "Hit Points == " << HitPoints << std::endl;
}

// ClapTrap::ClapTrap() : Name(), HitPoints(), EnergyPoints(), AttackDamage()
// {
//     std::cout << "ClapTrap " << Name << " is called" << std::endl;
// }
ClapTrap& ClapTrap::operator=(const ClapTrap& ClapTrap)
{
    if(this == &ClapTrap)
        return (*this);
    std::cout << "ClapTrap " << Name << " is assigned" << std::endl;
    this->Name = ClapTrap::getName();
    this->HitPoints = ClapTrap::getHitPoints();
    this->EnergyPoints = ClapTrap::getEnergyPoints();
    this->AttackDamage = ClapTrap::getAttackDamage();
    return (*this);
}

std::string ClapTrap::getName()
{
    return Name;
}
int ClapTrap::getHitPoints()
{
    return HitPoints;
}
int ClapTrap::getEnergyPoints()
{
    return EnergyPoints;
}
int ClapTrap::getAttackDamage()
{
    return AttackDamage;
}
void ClapTrap::setName(std::string E_name)
{
    Name = E_name;
}
void ClapTrap::setHitPoints(int E_HitPoints)
{
    HitPoints = E_HitPoints;
}
void ClapTrap::setEnergyPoints(int E_EnergyPoints)
{
    EnergyPoints = E_EnergyPoints;
}
void ClapTrap::setAttackDamage(int E_AttackDamage)
{
    AttackDamage = E_AttackDamage;
}
