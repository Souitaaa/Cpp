/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:18 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 01:45:05 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    
    ClapTrap claptrap("souita");
    FragTrap FragTrap("souitaaa");
    // ClapTrap FragTrap("souitaaa" ,10, 5, 2);
    claptrap.operator=(FragTrap);
    FragTrap.beRepaired(10);
    // claptrap.attack("enemy");
    FragTrap.attack("enemy");
    // claptrap.takeDamage(5);
    FragTrap.takeDamage(5);
    //  claptrap.takeDamage(5);
    FragTrap.takeDamage(5);
    //  claptrap.takeDamage(5);
    FragTrap.takeDamage(5);
    FragTrap.takeDamage(5);
    FragTrap.takeDamage(5);
    FragTrap.takeDamage(5);
    FragTrap.highFivesGuys();
    

return (0);
}