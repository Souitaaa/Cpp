/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:33:00 by csouita           #+#    #+#             */
/*   Updated: 2025/01/20 23:43:08 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
    Zombie zombie;
    Zombie *zombie2 = NULL;
    zombie.SetName("Foo");
    zombie.announce();
    zombie2 = zombie.newZombie("Bar");  // 3lach machi hadi zombie2->newZombie("Bar")
    delete zombie2;
    zombie.randomChump("Baz");
    return 0;
}