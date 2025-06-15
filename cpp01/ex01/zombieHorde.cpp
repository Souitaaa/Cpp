/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:56:25 by csouita           #+#    #+#             */
/*   Updated: 2025/04/07 23:05:56 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    Zombie *Zombies = new Zombie[N];
    for (int i = 0 ; i < N ;i++)
    {
        Zombies[i].SetName(name);
        Zombies[i].announce();
    }
    return Zombies;
}
