/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:18 by csouita           #+#    #+#             */
/*   Updated: 2025/05/16 21:25:32 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // Test default constructor
    DiamondTrap defaultDiamond;
    std::cout << "Default Diamond testing:" << std::endl;
    defaultDiamond.displayStats();
    defaultDiamond.attack("enemy");
    defaultDiamond.guardGate();
    defaultDiamond.highFivesGuys();
    defaultDiamond.whoAmI();
    std::cout << "\n----------------------\n"
              << std::endl;

    // Test parameterized constructor
    DiamondTrap diamond("D1");
    std::cout << "Named Diamond testing:" << std::endl;
    diamond.displayStats();
    diamond.attack("target");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    diamond.whoAmI();
    std::cout << "\n----------------------\n"
              << std::endl;

    // Test copy constructor
    DiamondTrap diamondCopy(diamond);
    std::cout << "Copy Diamond testing:" << std::endl;
    diamondCopy.displayStats();
    diamondCopy.takeDamage(30);
    diamondCopy.displayStats();
    std::cout << "\n----------------------\n"
              << std::endl;

    // Test assignment operator
    DiamondTrap diamond2("D2");
    diamond2 = diamondCopy;
    std::cout << "Assigned Diamond testing:" << std::endl;
    diamond2.displayStats();
    diamond2.whoAmI();
    std::cout << "\n----------------------\n"
              << std::endl;

    // Test unique DiamondTrap features
    std::cout << "Testing DiamondTrap special features:" << std::endl;
    diamond.highFivesGuys(); // From FragTrap
    diamond.guardGate();     // From ScavTrap

    return 0;
}