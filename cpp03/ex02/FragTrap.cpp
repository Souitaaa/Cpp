/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:22:28 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 18:35:14 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) :ClapTrap(name)
{
    this->setName(getName());
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap " << name << " is called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
    this->setName(getName());
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
    if(this == &FragTrap)
        return ;
    std::cout << "FragTrap " << getName() << " is copied" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &FragTrap)
{
    if (this == &FragTrap)
        return (*this);
    FragTrap::setName(FragTrap::getName());
    FragTrap::setHitPoints(FragTrap::getHitPoints());
    FragTrap::setEnergyPoints(FragTrap::getEnergyPoints());
    FragTrap::setAttackDamage(FragTrap::getAttackDamage());
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap  is destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap is requesting for a high five" << std::endl;
}