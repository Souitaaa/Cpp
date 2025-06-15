/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:33:00 by csouita           #+#    #+#             */
/*   Updated: 2025/04/12 20:06:53 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    Zombie *zombie2;
    zombie.SetName("Foo");
    zombie.announce();
    zombie2 = zombie.newZombie("Bar");
    zombie.randomChump("Baz");
    delete zombie2;
    return 0;
}