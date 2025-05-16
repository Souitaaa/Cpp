/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:18 by csouita           #+#    #+#             */
/*   Updated: 2025/05/16 21:24:57 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap claptrap("claptrap");
    ScavTrap scavtrap("scavtrap");
    FragTrap fragtrap("fragtrap");
    claptrap.takeDamage(5);
    claptrap.attack("target");
    claptrap.beRepaired(5);
    scavtrap.takeDamage(5);
    scavtrap.attack("target 2");
    scavtrap.beRepaired(5);
    scavtrap.guardGate();
    fragtrap.takeDamage(5);
    fragtrap.attack("target 3");
    fragtrap.beRepaired(5);
    return (0);
}