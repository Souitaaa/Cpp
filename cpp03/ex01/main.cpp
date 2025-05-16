/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:18 by csouita           #+#    #+#             */
/*   Updated: 2025/05/16 21:26:07 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("claptrap");
    ScavTrap scavtrap("scavtrap");
    claptrap.takeDamage(5);
    claptrap.attack("target");
    claptrap.beRepaired(5);
    scavtrap.takeDamage(5);
    scavtrap.attack("target 2");
    scavtrap.beRepaired(5);
    scavtrap.guardGate();
    return (0);
}