/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:18 by csouita           #+#    #+#             */
/*   Updated: 2025/02/04 17:26:49 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap claptrap("souita");
    ClapTrap claptrap2("souitaaa");
    // claptrap.operator=(claptrap2);
    claptrap2.beRepaired(10);
    claptrap = claptrap2;
    // claptrap.attack("enemy");
    claptrap2.attack("enemy");
    // claptrap.takeDamage(5);
    claptrap2.takeDamage(5);
    //  claptrap.takeDamage(5);
    claptrap2.takeDamage(5);
    //  claptrap.takeDamage(5);
    claptrap2.takeDamage(5);
    claptrap2.takeDamage(5);
    claptrap2.takeDamage(5);
    // claptrap2.takeDamage(5);

	return (0);
}