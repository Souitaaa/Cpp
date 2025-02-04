/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:18 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 01:54:03 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
    
    ClapTrap claptrap("souita");
    DiamondTrap DiamondTrap("souitaaa");
    DiamondTrap.attack("enemy");
    // DiamondTrap DiamondTrap("souitaaa" ,10, 5, 2);
    DiamondTrap.operator=(claptrap);
    DiamondTrap.beRepaired(10);
    // claptrap.attack("enemy");
    DiamondTrap.attack("enemy");
    // claptrap.takeDamage(5);
    DiamondTrap.takeDamage(5);
    //  claptrap.takeDamage(5);
    DiamondTrap.takeDamage(5);
    //  claptrap.takeDamage(5);
    DiamondTrap.takeDamage(5);
    DiamondTrap.takeDamage(5);
    DiamondTrap.takeDamage(5);
    DiamondTrap.takeDamage(5);
    DiamondTrap.guardGate();
    DiamondTrap.highFivesGuys();
    DiamondTrap.whoAmI();
return (0);
}