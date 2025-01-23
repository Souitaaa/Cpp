/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:28:05 by csouita           #+#    #+#             */
/*   Updated: 2025/01/23 21:13:54 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>



// int main()
// {
//     Weapon weapon;
//     weapon.setType("M4A1");
//     std::cout << weapon.getType() << std::endl;
//     HumanA HumanA("HumanA", weapon);
//     HumanA.attack();
//     HumanB HumanB("HumanB");
//     HumanB.attack();
// }   

int main()
{
    {
        Weapon club = Weapon("krata 3la wejho");
        HumanA bojme3a("bojme3a", club);
        bojme3a.attack();
        club.setType("krata 3la wejho");
        bojme3a.attack();
    }
    {
        Weapon club = Weapon("7ajra");
        HumanB lma3tiRajol("lma3tiRajol",club);
        lma3tiRajol.setWeapon(club);
        lma3tiRajol.attack();
        club.setType("krata 3la wejho");
        lma3tiRajol.attack();
    }
    {
        Weapon club = Weapon();
        HumanA ch3aybaChmata("ch3aybaChmata", club);
        ch3aybaChmata.attack();
        club.setType("krata 3la wejho");
        ch3aybaChmata.attack();
    }
    {
        Weapon club = Weapon();
        HumanB fetah("fetah",club);
        fetah.setWeapon(club);
        fetah.attack();
        club.setType("krata 3la wejho");
        fetah.attack();
    }
return 0;
}