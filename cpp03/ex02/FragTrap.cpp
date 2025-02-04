/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:22:28 by csouita           #+#    #+#             */
/*   Updated: 2025/02/03 21:47:16 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name ,100, 50, 20) 
{
    std::cout << "FragTrap " << name << " is called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap  is destroyed" << std::endl;
}

FragTrap::FragTrap(std::string E_Name ,int E_HitPoints, int E_EnergyPoints, int E_AttackDamage) : ClapTrap(E_Name, E_HitPoints, E_EnergyPoints, E_AttackDamage)
{
    E_AttackDamage = 20;
    E_EnergyPoints = 50;
    E_HitPoints = 100;
    std::cout << "FragTrap " << E_Name << " is called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap is requesting for a high five" << std::endl;
}