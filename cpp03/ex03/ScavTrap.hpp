/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:44:34 by csouita           #+#    #+#             */
/*   Updated: 2025/02/03 23:13:53 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp" 
class ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(std::string E_Name ,int E_HitPoints, int E_EnergyPoints, int E_AttackDamage);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& ScavTrap);
        void guardGate();
};
#endif