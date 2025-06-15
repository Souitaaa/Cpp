/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:48:29 by csouita           #+#    #+#             */
/*   Updated: 2025/04/11 22:06:23 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *ZombieJdid = new Zombie();
    ZombieJdid->SetName(name);
    ZombieJdid->announce();
    return ZombieJdid;
}
