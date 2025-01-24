/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:33:00 by csouita           #+#    #+#             */
/*   Updated: 2025/01/22 20:04:33 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Zombie.hpp"
#include <iostream>

int main()
{
    // Zombie zombie;
    // zombie.SetName("Foo");
    // zombie.announce();
    
    // Zombies = Zombie::zombieHorde(5, "Bar");
    Zombie *Zombies = Zombie::zombieHorde(5, "Bar");       
    delete[] Zombies;
    return 0;
}