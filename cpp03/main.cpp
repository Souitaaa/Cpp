/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:58:18 by csouita           #+#    #+#             */
/*   Updated: 2025/01/30 19:46:05 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    class ClapTrap ClapTrap("sharaf");
    class ClapTrap ClapTrap2(100, 100, 100);
    ClapTrap.attack("sharaf");
    ClapTrap.takeDamage(10);
    ClapTrap2.attack("sharaf");
    ClapTrap2.takeDamage(10);
    return 0;
}
