/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:20:40 by csouita           #+#    #+#             */
/*   Updated: 2025/02/03 23:13:14 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp" 

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        FragTrap(std::string E_Name ,int E_HitPoints, int E_EnergyPoints, int E_AttackDamage);
        ~FragTrap();
        FragTrap& operator=(const FragTrap& FragTrap);
        void highFivesGuys();
};

#endif