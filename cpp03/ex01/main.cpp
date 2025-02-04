/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:18 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 17:36:13 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    
    // ClapTrap claptrap("souita");
    ScavTrap scavtrap("souitaaa");
    // ClapTrap scavtrap("souitaaa" ,10, 5, 2);
    // claptrap.operator=(scavtrap);
    scavtrap.beRepaired(10);
    // claptrap.attack("enemy");
    scavtrap.attack("enemy");
    // claptrap.takeDamage(5);
    scavtrap.takeDamage(5);
    //  claptrap.takeDamage(5);
    scavtrap.takeDamage(5);
    //  claptrap.takeDamage(5);
    scavtrap.takeDamage(5);
    scavtrap.takeDamage(5);
    scavtrap.takeDamage(5);
    scavtrap.takeDamage(5);
    scavtrap.guardGate();

return (0);
}